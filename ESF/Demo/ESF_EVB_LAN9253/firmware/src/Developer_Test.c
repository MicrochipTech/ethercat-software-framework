/*******************************************************************************
 Developer test source file

  Company:
    Microchip Technology Inc.

  File Name:
    Developer_Test.c

  Description:
    This file provides the test API's to test the ESC functionality
    This Test APIs can be used wuth any mode, as the ESF Hooks are used
    This is only used for Developer test purpose. To do developer test,
    configuration DEVELOPER_TEST_EN needs to be enabled at ESF_Config.h
*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2010 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

#include "LAN925x.h"
#include "ESF_Config.h"

#ifdef DEVELOPER_TEST_EN
//Indirect mode
void	Indirect_ECAT_PDRAM_SystemCSR_Access();
void	Indirect_PDRAM_1_2_4_8_Byte_Access();
void	Entire_ECAT_core_Access();
void	Indirect_Entire_PDRAM_Access();
void	Indirect_PDRAM_Diff_Addr_And_Len();

//Direct mode
void	ECAT_PDRAM_SystemCSR_Access();
void	PDRAM_1_2_4_8_Byte_Access();
void	Entire_ECAT_core_Access();
void	PDRAM_Diff_Addr_And_Len();

void	Get_ByteOrderReg();
void	Get_BeckoffIP();
void	Get_ChipID();

/*******************************************************************************
This test case verifies whether Chip ID
*******************************************************************************/
void Get_ChipID()
{
	uint32_t chipId;
	
#ifdef DIRECT_MODE
	HW_EscRead(&chipId, 0x3050,4);
#else
	MCHP_ESF_PDI_READ(0x50, (UINT8 *)&chipId, 4);
#endif
	
	while(chipId!= 0x92530000)
	{
		
	}
}

/*******************************************************************************
This test case verifies whether read and write accesses of System CSRs,
 EtherCAT CSRs and PDRAM work perfectly in direct addressing modes.
********************************************************************************/
void ECAT_PDRAM_SystemCSR_Access()
{
	uint32_t wData = 0xCC0A0001, rData =0;
	int status =1;
	
	HW_EscWrite(&wData, 0x305C, 4);
	HW_EscRead(&rData, 0x305C, 4);
	
	while(wData!= rData)
	{
		
	}
	
	wData = 0xAABBCCDD;
	HW_EscWrite(&wData, 0x204, 4);
	HW_EscRead(&rData, 0x204, 4);
	status = memcmp(&wData, &rData,4);
	while(status!=0)
	{
		
	}
	
	wData = 0x18273645;
	HW_EscWrite((MEM_ADDR *)(&wData), 0x2000, 4);
	
	do
	{
		HW_EscRead(&rData, 0x2000, 4);
		status = memcmp(&wData, &rData, 4);
	} while (status != 0);
	
}


/*******************************************************************************
This test case verifies whether read and write accesses of System CSRs,
 EtherCAT CSRs and PDRAM work perfectly in indirect addressing modes.
********************************************************************************/
void Indirect_ECAT_PDRAM_SystemCSR_Access()
{
	uint32_t wData = 0xCC0A0001, rData =0;
	int status = 1;

	MCHP_ESF_PDI_WRITE(0x5C, (UINT8 *)&wData, 4);
	MCHP_ESF_PDI_READ(0x5C, (UINT8 *)&rData, 4);
	
	while(wData!= rData)
	{
		
	}
	
	wData = 0xAABBCCDD;
    rData = 0x0;
	HW_EscWrite(&wData, 0x204, 4);
	HW_EscRead(&rData, 0x204, 4);
	status = memcmp(&wData, &rData,4);
	while(status!=0)
	{
		
	}
	

	
	wData = 0x18273645;
	MCHP_ESF_PDI_WRITE_PDRAM((uint8_t*)(&wData), 0x2000, 4);
	
	do
	{
		MCHP_ESF_PDI_READ_PDRAM((UINT8 *)&rData, 0x2000, 4) ;		
		status = memcmp(&wData, &rData, 4);
	} while (status != 0);
	
}


/*******************************************************************************
This test case verifies whether 1, 2, 4 and 8 byte
read and write accesses work perfectly or not
*******************************************************************************/
void Indirect_PDRAM_1_2_4_8_Byte_Access()
{
	uint16_t pdramAddress = 0x2002;
	
	uint8_t *wPtr = (uint8_t *)malloc(sizeof(uint8_t)*8);
	uint8_t *rPtr = (uint8_t *)malloc(sizeof(uint8_t)*8);
	uint8_t *wPtr2 = wPtr;
	
	for(int i=0; i<8; i++)
	{
		*wPtr2 = 0xDD;
		wPtr2++;
	}
	
	for(int j=0; j<4;j++)
	{
		
		uint32_t wData = 0x00000000, rData;
		MCHP_ESF_PDI_WRITE_PDRAM((uint8_t*)(&wData), pdramAddress, 4);
		
		wData = 0xAA;
        rData = 0;
		MCHP_ESF_PDI_WRITE_PDRAM((uint8_t*)(&wData), pdramAddress, 1);
		MCHP_ESF_PDI_READ_PDRAM((UINT8 *)&rData, pdramAddress, 1);

		int status = memcmp(&wData, &rData, 1);

		while(status)
		{
			
		}
		
		wData = 0xBBBB;
        rData = 0;
		MCHP_ESF_PDI_WRITE_PDRAM((UINT8 *)&wData, pdramAddress, 2);
		MCHP_ESF_PDI_READ_PDRAM((UINT8 *)&rData, pdramAddress,2);
		status = memcmp(&wData, &rData, 2);

		while(status)
		{
			
		}
		
		wData = 0xCCCCCCCC;
		MCHP_ESF_PDI_WRITE_PDRAM((UINT8 *)&wData, pdramAddress, 4);
		MCHP_ESF_PDI_READ_PDRAM((UINT8 *)&rData, pdramAddress, 4);
		status = memcmp(&wData, &rData, 4);

		while(status)
		{
			
		}

		
		MCHP_ESF_PDI_WRITE_PDRAM(wPtr, pdramAddress, 8);
		MCHP_ESF_PDI_READ_PDRAM(rPtr, pdramAddress, 8);
		status = memcmp(wPtr, rPtr, 8);
		
		while(status)
		{
			
		}

		pdramAddress++;

	}
	wPtr2 = NULL;
	free(wPtr);
	free(rPtr);
}



/*******************************************************************************
This test case verifies whether 1, 2, 4 and 8 byte
read and write accesses work perfectly or not
********************************************************************************/
void PDRAM_1_2_4_8_Byte_Access()
{
	uint16_t pdramAddress = 0x2001;
	
	uint8_t *wPtr = (uint8_t *)malloc(sizeof(uint8_t)*8);
	uint8_t *rPtr = (uint8_t *)malloc(sizeof(uint8_t)*8);
	uint8_t *wPtr2 = wPtr;
	
	for(int i=0; i<8; i++)
	{
		*wPtr2 = 0xDD;
		wPtr2++;
	}
	
	for(int j=0; j<4;j++)
	{
		
		uint32_t wData = 0x00000000;
		HW_EscWrite((MEM_ADDR *)(&wData), pdramAddress, 4);
		
		wData = 0xAA;
		UINT32 readval;
		HW_EscWrite((MEM_ADDR *)(&wData), pdramAddress, 1);
		HW_EscRead((MEM_ADDR *)&readval, pdramAddress, 1);

		int status = memcmp(&wData, &readval, 1);

		while(status)
		{
			
		}
		
		wData = 0x112233;
		HW_EscWrite((MEM_ADDR *)(&wData), pdramAddress, 3);
		HW_EscRead((MEM_ADDR *)&readval, pdramAddress, 3);

		status = memcmp(&wData, &readval, 3);

		while(status)
		{
			
		}
		
		
		wData = 0xBBBB;
		HW_EscWrite((MEM_ADDR *)&wData, pdramAddress, 2);
		HW_EscRead((MEM_ADDR *)&readval, pdramAddress,2);
		status = memcmp(&wData, &readval, 2);

		while(status)
		{
			
		}
		
		wData = 0xCCCCCCCC;
		HW_EscWrite((MEM_ADDR *)&wData, pdramAddress, 4);
		HW_EscRead((MEM_ADDR *)&readval, pdramAddress, 4);
		status = memcmp(&wData, &readval, 4);

		while(status)
		{
			
		}

		
		HW_EscWrite((MEM_ADDR *)wPtr, pdramAddress, 8);
		HW_EscRead((MEM_ADDR *)rPtr, pdramAddress, 8);
		status = memcmp(wPtr, rPtr, 8);
		
		while(status)
		{
			
		}

		pdramAddress++;

	}
	wPtr2 = NULL;
	free(wPtr);
	free(rPtr);
}


/*******************************************************************************
This test case verifies whether random registers across the 
EtherCAT Core register space is accessible or not
********************************************************************************/
void Entire_ECAT_core_Access()
{
	uint32_t wData, rData;
	
	uint8_t data =0;
	uint8_t *wPtr = (uint8_t *)malloc(sizeof(uint8_t)*8);
	uint8_t *rPtr = (uint8_t *)malloc(sizeof(uint8_t)*8);
	uint8_t *wPtr2;
	
	uint8_t *wPtr128 = (uint8_t *)malloc(sizeof(uint8_t)*128);
	uint8_t *rPtr128 = (uint8_t *)malloc(sizeof(uint8_t)*128);
	uint8_t *wPtr128_2;
	
	int status =0;
			
	wData = 0xABCD;
    rData = 0x0;
	HW_EscWrite(&wData, 0x12, 2);
	HW_EscRead(&rData, 0x12, 2);
	status = memcmp(&wData, &rData,2);
	while(status!=0)
	{
		
	}
	
	wData = 0x52;
    rData = 0x0;
	HW_EscWrite(&wData, 0x41, 1);
	HW_EscRead(&rData, 0x41, 1);
	wData= 0x01;
	status = memcmp(&wData, &rData,1);
	while(status!=0)
	{
		
	}
	
	wData = 0x52;
    rData = 0x0;
	HW_EscWrite(&wData, 0x41, 1);
	wData = 0x45;
	HW_EscWrite(&wData, 0x41, 1);
	HW_EscRead(&rData, 0x41, 1);
	wData= 0x02;
	status = memcmp(&wData, &rData,1);
	while(status!=0)
	{
		
	}

	
	wData = 0x1234;
	HW_EscWrite(&wData, 0x134, 2);
	HW_EscRead(&rData, 0x134, 2);
	status = memcmp(&wData, &rData,2);
	while(status!=0)
	{
		
	}
	
	wData = 0xAABBCCDD;
	HW_EscWrite(&wData, 0x204, 4);
	HW_EscRead(&rData, 0x204, 4);
	status = memcmp(&wData, &rData,4);
	while(status!=0)
	{
		
	}
	
	for(int i=0; i<4;i++)
	{
		wData = 0x3;
        rData = 0x0;
		HW_EscWrite(&wData, 0x807 + (i*0x10), 1);
		HW_EscRead(&rData, 0x807+(i*0x10), 1);
		status = memcmp(&wData, &rData, 1);
		while(status)
		{
			
		}
		
		wData = 0x0;
        rData = 0x0;
		HW_EscWrite(&wData, 0x807 + (i*0x10), 1);
		HW_EscRead(&rData, 0x807+(i*0x10), 1);
		status = memcmp(&wData, &rData, 1);
		while(status)
		{
			
		}
		
	}
	

	
	for(int j=0; j<4;j++)
	{
			wPtr2 = wPtr;
			
			for(int i=0; i<2; i++)
			{
				*wPtr2 = data;
				wPtr2++;
			}
			
			HW_EscWrite((MEM_ADDR *)wPtr, 0x0F10, 2);
			HW_EscRead((MEM_ADDR *)rPtr, 0x0F10, 2);
			status = memcmp(wPtr, rPtr, 2);
			
			while(status)
			{
				
			}
			
			data += 0x55;
	}


	data =0;
	for(int j=0; j<4;j++)
	{
		wPtr128_2 = wPtr128;
		
		for(int i=0; i<128; i++)
		{
			*wPtr128_2 = data;
			wPtr128_2++;
		}
		
		HW_EscWrite((MEM_ADDR *)wPtr128, 0x0F80, 128);
		HW_EscRead((MEM_ADDR *)rPtr128, 0x0F80, 128);
		status = memcmp(wPtr128, rPtr128, 128);
		
		while(status)
		{
			
		}
		
		data += 0x55;
	}

	free(wPtr);
	free(rPtr);
	free(wPtr128);
	free(rPtr128);
	
}


/*******************************************************************************
This test case verifies whether entire 8KB PDRAM space is accessible 
Note: Disable all syncmanagers before this test
********************************************************************************/
void Entire_PDRAM_Access()
{
	UINT8 * wPtr = (UINT8*)malloc(8192); 
	UINT8 * rPtr = (UINT8*)malloc(8192);
	UINT8* wPtr2 = wPtr;
	UINT8 data = 1;
	for(int i=0; i<8192; i++,data++)
	{
		*wPtr2 = data;
		wPtr2++;
	}
	
	HW_EscWrite((MEM_ADDR *)wPtr, 0x1000, 8192);
	HW_EscRead((MEM_ADDR *)rPtr, 0x1000, 8192);
	int status = memcmp(wPtr, rPtr, 8192);
	while(status)
	{
		
	}
	
	free(wPtr);
	free(rPtr);
}

/*******************************************************************************
This test case verifies whether entire 8KB PDRAM space is accessible
Note: Disable all syncmanagers before this test
*******************************************************************************/
void Indirect_Entire_PDRAM_Access()
{
	UINT8 * wPtr = (UINT8*)malloc(8192);
	UINT8 * rPtr = (UINT8*)malloc(8192);
	UINT8* wPtr2 = wPtr;
	UINT8 data = 1;
	for(int i=0; i<8192; i++,data++)
	{
		*wPtr2 = data;
		wPtr2++;
	}
	
	MCHP_ESF_PDI_WRITE_PDRAM((UINT8 *)wPtr, 0x1000, 8192);
	MCHP_ESF_PDI_READ_PDRAM((UINT8 *)rPtr, 0x1000, 8192);
	int status = memcmp(wPtr, rPtr, 8192);
	while(status)
	{
		
	}
	
	free(wPtr);
	free(rPtr);
}

/*******************************************************************************
This test case verifies whether ECAT core Revision register
has the proper IP version
*******************************************************************************/
void Get_BeckoffIP()
{
	UINT8 version =0;
	HW_EscRead((MEM_ADDR *)&version, 0x0001, 1);
	while(version!=0x03)
	{
		
	}
}

/*******************************************************************************
This test case verifies whether Byte order register has the proper value 
********************************************************************************/
void Get_ByteOrderReg()
{
	UINT32 data =0;
	MCHP_ESF_PDI_READ(0x3064, (UINT8 *)&data, 4);
	while(data!=0x87654321)
	{
		
	}
}

/*******************************************************************************
This test case verifies if entire 8KB Ether CAT core Process Data RAM space
can be accessed via direct mapped register mode with different start addresses
and different lengths using HBI Demultiplexed modes.
*******************************************************************************/
void PDRAM_Diff_Addr_And_Len()
{
	UINT8 data = 0x1;
	int status;
	int maxLen = 28;
	for(int len=1; len<=maxLen; len=len*2)
	{
		UINT8* writeBuf = (UINT8*)malloc(len);
		UINT8* readBuf = (UINT8*)malloc(len);
		UINT8* writeBuf2 = writeBuf;
		data ++;
		
		for(int i=0; i<len; i++)
		{
			*writeBuf2 = data;
			writeBuf2++;
		}
		
		for(UINT16 addr = 0x1000; (addr+len-1)<= 0x2FFF; addr+= len)
		{
			HW_EscWrite((MEM_ADDR *)writeBuf, addr, len);
			HW_EscRead((MEM_ADDR *)readBuf, addr, len);
			status = memcmp(writeBuf, readBuf, len);
			while(status)
			{
				
			}
		}
		
		free(writeBuf);
		free(readBuf);
	}
}

/*******************************************************************************
This test case verifies if entire 8KB Ether CAT core Process Data RAM space
can be accessed via direct mapped register mode with different start addresses
and different lengths
*******************************************************************************/
void Indirect_PDRAM_Diff_Addr_And_Len()
{
	UINT8 data = 0x1;
	int status;
	for(int len=1; len<=24; len=len*2)
	{
		UINT8* writeBuf = (UINT8*)malloc(len);
		UINT8* readBuf = (UINT8*)malloc(len);
		UINT8* writeBuf2 = writeBuf;
		data ++;
		
		for(int i=0; i<len; i++)
		{
			*writeBuf2 = data;
			writeBuf2++;
		}
		
		for(UINT16 addr = 0x1000; (addr+len-1)<= 0x2FFF; addr+= len)
		{
			MCHP_ESF_PDI_WRITE_PDRAM((UINT8 *)writeBuf, addr, len);
			MCHP_ESF_PDI_READ_PDRAM((UINT8 *)readBuf, addr, len);
			status = memcmp(writeBuf, readBuf, len);
			while(status)
			{
				
			}
		}
		
		free(writeBuf);
		free(readBuf);
	}
}

void test_direct_mode()
{
	
	Get_ChipID();

	ECAT_PDRAM_SystemCSR_Access();
	
	PDRAM_1_2_4_8_Byte_Access();
	
	Entire_ECAT_core_Access();

	Get_BeckoffIP();
 
	Get_ByteOrderReg();
	
	
	PDRAM_Diff_Addr_And_Len();
}

void test_indirect_mode()
{
	
	Get_ChipID();
	
    Get_ByteOrderReg();
    
	Indirect_ECAT_PDRAM_SystemCSR_Access();
	
	Indirect_PDRAM_1_2_4_8_Byte_Access();
	
	Entire_ECAT_core_Access();
	
	Indirect_Entire_PDRAM_Access();

	Get_BeckoffIP();
	
	Indirect_PDRAM_Diff_Addr_And_Len();
}
#endif