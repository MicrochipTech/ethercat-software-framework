/*******************************************************************************
 ESC LAN925x source file

  Company:
    Microchip Technology Inc.

  File Name:
    LAN925x.c

  Description:
    This file provides the access API's to ESC through PDI
    Each API has implementation for each PDI type.
    PDI and Internal mode configurations provided by ESF_Config.h
    The definitions make use of Hooks present in ESF_APIHook.h
*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
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

#include <stdint.h>
#include "ecat_def.h"
#include "ecatslv.h"
#define _9252_HW_ 1
#include "LAN925x.h"
#undef _9252_HW_
#define _9252_HW_ 0
#include "ESC_Utils.h"

BOOL gbALEvtOpEnabled = FALSE;
UALEVENT         gEscALEvent;
UINT8 testBuff[1024];
UINT8 readBuff[1024];
#if (ESF_PDI == SPI) || (ESF_PDI == SQI)
UINT8 gau8DummyCntArr[SETCFG_MAX_DATA_BYTES] = {0,0,0,0,0,0,1,0,0,2,0,0,1,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,1,0,0};
#endif
/*******************************************************************************
    Function:
        UINT8 LAN925x_Init(void)

    Summary:
        This function initializes LAN925x.

    Description:
  *****************************************************************************/
UINT8 LAN925x_Init(void)
{
	UINT32 u32intMask;
	UINT32 u32data;
    
#if (ESF_PDI == SPI)
#if _IS_SPI_INDIRECT_MODE_ACCESS
	do
	{
		MCHP_ESF_PDI_READ(LAN925x_BYTE_ORDER_REG, (UINT8*)&u32data, DWORD_LENGTH);
	} while (0x87654321 != u32data);
	
	// Disable interrupt Interrupt Enable register -->
	// Write 0x5c - 0x00000001
	u32data = 0x00000000;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);
	
	do {
		u32intMask = 0x21;
		HW_EscWriteDWord(u32intMask, ESC_AL_STATUS_OFFSET);

		u32intMask = 0;
		HW_EscReadDWord(u32intMask, ESC_AL_STATUS_OFFSET);
	} while (u32intMask != 0x21);
    
    HW_EscReadDWord(u32intMask, ESC_AL_CONTROL_OFFSET);
    
	do {
		u32intMask = 0x93;
		HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);

		u32intMask = 0;
		HW_EscReadDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);
	} while (u32intMask != 0x93);
	
	/* Read 0x150 register to check if AL Event output is enabled */
	u32intMask = 0; 
	HW_EscReadDWord(u32intMask, ESC_PDI_CONFIG_OFFSET);
	
    if (u32intMask & AL_EVENT_ENABLE)
    {
		gbALEvtOpEnabled = TRUE; 
    }
    	 
	u32intMask = 0;
	HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);	
	
	// IRQ enable,IRQ polarity, IRQ buffer type in Interrupt Configuration
	// register. Write 0x54 - 0x00000101
	u32data = 0x00000101;
		
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_CONF, (UINT8*)&u32data, DWORD_LENGTH);	
	
	// Write in Interrupt Enable register -->
	// Write 0x5c - 0x00000001
	u32data = 0x00000001;

	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);

	// Read Interrupt Status register
	MCHP_ESF_PDI_READ(LAN925x_CSR_INT_STS, (UINT8*)&u32data, DWORD_LENGTH);
	
#elif _IS_SPI_BECKHOFF_MODE_ACCESS

	do
	{
		MCHP_ESF_PDI_READ(LAN925x_BYTE_ORDER_REG, (UINT8*)&u32data, DWORD_LENGTH);
	} while (0x87654321 != u32data);
	
	u32data = 0x00000000;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);

   /* UINT16 k = 0;
	for(UINT16 i=0;i<512;i++)
    {
        testBuff[i]= k + 1;
        k += 1;
    }
    MCHP_ESF_PDI_WRITE(0x2008,testBuff,512);
    MCHP_ESF_PDI_READ(0x2008,readBuff,512);
        for(UINT8 i=0;i<8;i++)
    {
        if(testBuff[i]!=readBuff[i])
        {
            break;
        }
    }*/
    do {
        u32intMask = 0x93;
		HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);

		u32intMask = 0;
		HW_EscReadDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);
	} while (u32intMask != 0x93);

	/* Read 0x150 register to check if AL Event output is enabled */
	u32intMask = 0;
	HW_EscReadDWord(u32intMask, ESC_PDI_CONFIG_OFFSET);
	
	if (u32intMask & AL_EVENT_ENABLE)
	{
		gbALEvtOpEnabled = TRUE;
	}
	
	u32intMask = 0;
	HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);
	
	u32data = 0x00000101;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_CONF, (UINT8*)&u32data, DWORD_LENGTH);	
	
	u32data = 0x00000001;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);
	
	MCHP_ESF_PDI_READ(LAN925x_CSR_INT_STS, (UINT8*)&u32data, DWORD_LENGTH);

#elif _IS_SPI_DIRECT_MODE_ACCESS

	 do
	{
        MCHP_ESF_PDI_READ(LAN925x_BYTE_ORDER_REG, (UINT8*)&u32data, DWORD_LENGTH);
	} while (0x87654321 != u32data);
    
    // Disable interrupt Interrupt Enable register -->
	// Write 0x5c - 0x00000001
	u32data = 0x00000000;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);

	do {
		u32intMask = 0x93;
		HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);

		u32intMask = 0;
		HW_EscReadDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);
	} while (u32intMask != 0x93);

	/* Read 0x150 register to check if AL Event output is enabled */
	u32intMask = 0;
	HW_EscReadDWord(u32intMask, ESC_PDI_CONFIG_OFFSET);

	if (u32intMask & AL_EVENT_ENABLE)
	{
		gbALEvtOpEnabled = TRUE;
	}

	u32intMask = 0;
	HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);

	u32data = 0x00000101;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_CONF, (UINT8*)&u32data, DWORD_LENGTH);

	u32data = 0x00000001;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);

	MCHP_ESF_PDI_FASTREAD(LAN925x_CSR_INT_STS, (UINT8*)&u32data, DWORD_LENGTH);

#endif /* IS_SPI_DIRECT_MODE_ACCESS End*/
#elif (ESF_PDI == HBI)
   
	do
	{
		MCHP_ESF_PDI_READ(LAN925x_BYTE_ORDER_REG, (UINT8*)&u32data, DWORD_LENGTH);
	} while (0x87654321 != u32data);

    // Disable interrupt Interrupt Enable register -->
	// Write 0x5c - 0x00000001
	u32data = 0x00000000;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);
    
    do {
		u32intMask = 0x93;
		HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);

		u32intMask = 0;
		HW_EscReadDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);
	} while (u32intMask != 0x93);
    
    u32intMask = 0;
	HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);
	
	PDI_Disable_Global_Interrupt();
    // IRQ enable,IRQ polarity, IRQ buffer type in Interrupt Configuration
	// register. Write 0x54 - 0x00000101
	u32data = 0x00000101;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_CONF, (UINT8*)&u32data, DWORD_LENGTH);
    
    // Write in Interrupt Enable register -->
	// Write 0x5c - 0x00000001
	u32data = 0x00000001;
		
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);
		
	// Read Interrupt Status register
	MCHP_ESF_PDI_READ(LAN925x_CSR_INT_STS, (UINT8*)&u32data, DWORD_LENGTH);
#elif (ESF_PDI == SQI)
#if (_IS_SQI_DIRECT_MODE_ACCESS || _IS_SQI_INDIRECT_MODE_ACCESS)
  
	u32data = 0x00000000;
	/* Read the Byte Test register */
	do
	{
		MCHP_ESF_PDI_READ(LAN925x_BYTE_ORDER_REG, (UINT8*)&u32data, DWORD_LENGTH);
	} while (0x87654321 != u32data);

    // Disable interrupt Interrupt Enable register -->
	// Write 0x5c - 0x00000000
	u32data = 0x00000000;
    MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);
    
	do {
		u32intMask = 0x93;
		HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);

		u32intMask = 0;
		HW_EscReadDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);
	} while (u32intMask != 0x93);
    
    u32intMask = 0;
	HW_EscWriteDWord(u32intMask, ESC_AL_EVENTMASK_OFFSET);

	u32data = 0x00000101;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_CONF, (UINT8*)&u32data, DWORD_LENGTH);

	u32data = 0x00000001;
	MCHP_ESF_PDI_WRITE(LAN925x_CSR_INT_EN, (UINT8*)&u32data, DWORD_LENGTH);

	MCHP_ESF_PDI_READ(LAN925x_CSR_INT_STS, (UINT8*)&u32data, DWORD_LENGTH);
#endif  
#endif

#ifdef DC_SUPPORTED
	PDI_Init_SYNC_Interrupts();
#endif

	MCHP_ESF_PDI_TIMER_CONFIG();
	PDI_IRQ_Interrupt();

#if (ESF_PDI == HBI)
    PDI_Restore_Global_Interrupt();
#endif

	return 0;
}

/*******************************************************************************
    Function:
        void HW_Release(void)

    Summary:
        This function shall be implemented if hardware resources need to be release
                when the sample application stops

    Description:
  *****************************************************************************/
void HW_Release(void)
{
}

/*******************************************************************************
    Function:
        UINT16 HW_GetALEventRegister(void)

    Summary:
        This function gets the current content of ALEvent register.

    Description:
        Returns first two Bytes of ALEvent register (0x220)
  *****************************************************************************/
UINT16 HW_GetALEventRegister(void)
{
#if (ESF_PDI == SPI)
#if _IS_SPI_INDIRECT_MODE_ACCESS 	
	  UINT32_VAL u32Val;

	  u32Val.v[0] = 0x20;
	  u32Val.v[1] = 0x02;
	  u32Val.v[2] = 4;
	  u32Val.v[3] = 0xC0;

	  PDI_Disable_Global_Interrupt();
	  
	  MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);	  
	  MCHP_ESF_PDI_FASTREAD(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	  PDI_Restore_Global_Interrupt();
	  
	  if (gbALEvtOpEnabled)
	  {
		  return gEscALEvent.Word;
	  }
	  else
	  {
		  return u32Val.w[0];	  
	  }

#elif _IS_SPI_BECKHOFF_MODE_ACCESS

	  UINT32_VAL u32Val;

	  PDI_Disable_Global_Interrupt();
	  
	  MCHP_ESF_PDI_READ(ESC_AL_EVENT_OFFSET, (UINT8*)&u32Val.Val, DWORD_LENGTH);
	  
	  PDI_Restore_Global_Interrupt();

	  //return gEscALEvent.Word;
      return u32Val.w[0];
	  
#elif _IS_SPI_DIRECT_MODE_ACCESS

	  UINT32_VAL u32Val;

	  PDI_Disable_Global_Interrupt();
	  
	  MCHP_ESF_PDI_FASTREAD(ESC_AL_EVENT_OFFSET, (UINT8 *)&u32Val.Val, DWORD_LENGTH);
	  
	  PDI_Restore_Global_Interrupt();

	  if (gbALEvtOpEnabled)
	  {
		  return gEscALEvent.Word;
	  }
	  else
	  {
		  return u32Val.w[0];
	  }
	
#endif
#elif (ESF_PDI == HBI)
      UINT32_VAL u16AlEventReg;

      HW_EscRead((MEM_ADDR *)&u16AlEventReg, ESC_AL_EVENT_OFFSET, DWORD_LENGTH);

	  return u16AlEventReg.w[0];
#elif (ESF_PDI == SQI)
      #if _IS_SQI_INDIRECT_MODE_ACCESS 	
	  UINT32_VAL u32Val;

	  u32Val.v[0] = 0x20;
	  u32Val.v[1] = 0x02;
	  u32Val.v[2] = 4;
	  u32Val.v[3] = ESC_READ_BYTE;

	  PDI_Disable_Global_Interrupt();
	  
	  MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);	  
	  MCHP_ESF_PDI_READ(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	  PDI_Restore_Global_Interrupt();
	  
	  if (gbALEvtOpEnabled)
	  {
		  return gEscALEvent.Word;		  
	  }
	  else
	  {
		  return u32Val.w[0];	  
	  }


#elif _IS_SQI_DIRECT_MODE_ACCESS

	  UINT32_VAL u32Val;

	  PDI_Disable_Global_Interrupt();
	  
	  MCHP_ESF_PDI_READ(ESC_AL_EVENT_OFFSET, (UINT8*)&u32Val.Val, DWORD_LENGTH);
	  
	  PDI_Restore_Global_Interrupt();

	  return u32Val.w[0];

#endif
#endif
}

/*******************************************************************************
    Function:
        UINT16 HW_GetALEventRegister_Isr(void)

    Summary:
        The SPI PDI requires an extra ESC read access functions from interrupts service routines.
                The behaviour is equal to "HW_GetALEventRegister()"

    Description:
        Returns	first two Bytes of ALEvent register (0x220)
  *****************************************************************************/
UINT16 HW_GetALEventRegister_Isr(void)
{
#if (ESF_PDI == SPI)
#if _IS_SPI_INDIRECT_MODE_ACCESS 
	  UINT32_VAL u32Val;

	  u32Val.v[0] = 0x20;
	  u32Val.v[1] = 0x02;
	  u32Val.v[2] = 2;
	  u32Val.v[3] = ESC_READ_BYTE;

	  MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
	  MCHP_ESF_PDI_FASTREAD(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	  if (gbALEvtOpEnabled)
	  {
		  return gEscALEvent.Word;
	  }
	  else
	  {
		  return u32Val.w[0];
	  }
	  
#elif _IS_SPI_BECKHOFF_MODE_ACCESS
	  UINT32_VAL u32Val;

	  MCHP_ESF_PDI_READ(ESC_AL_EVENT_OFFSET, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	  //return gEscALEvent.Word;
      return u32Val.w[0];
	  
#elif _IS_SPI_DIRECT_MODE_ACCESS
	  UINT32_VAL u32Val;

	  MCHP_ESF_PDI_FASTREAD(ESC_AL_EVENT_OFFSET, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	  if (gbALEvtOpEnabled)
	  {
		  return gEscALEvent.Word;
	  }
	  else
	  {
		  return u32Val.w[0];
	  }

#endif
#elif (ESF_PDI == HBI)
    #if (HBI_MODE == MSP_16BIT) || (HBI_MODE == MDP_16BIT) || (HBI_MODE == MDP_8BIT)
        #if _IS_HBI_DIRECT_MODE_ACCESS 
             UINT32_VAL u32Val;

            MCHP_ESF_PDI_READ(ESC_AL_EVENT_OFFSET, (UINT8*)&u32Val.Val, DWORD_LENGTH);
			
			return u32Val.w[0];
        #else
            UINT32_VAL u32Val;

            u32Val.v[0] = 0x20;
            u32Val.v[1] = 0x02;
            u32Val.v[2] = 2;
            u32Val.v[3] = ESC_READ_BYTE;

            MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            MCHP_ESF_PDI_READ(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

            if (gbALEvtOpEnabled)
            {
                return gEscALEvent.Word;
            }
            else
            {
                return u32Val.w[0];
            }
        #endif
    #else
        UINT32_VAL u32Val;
      
        HW_EscReadIsr(&u32Val.Val, ESC_AL_EVENT_OFFSET, 4);

        return u32Val.w[0];
    #endif
#elif (ESF_PDI == SQI)
#if _IS_SQI_INDIRECT_MODE_ACCESS 
	  UINT32_VAL u32Val;

	  u32Val.v[0] = 0x20;
	  u32Val.v[1] = 0x02;
	  u32Val.v[2] = 2;
	  u32Val.v[3] = ESC_READ_BYTE;

	  MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
	  MCHP_ESF_PDI_READ(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	  if (gbALEvtOpEnabled)
	  {
		  return gEscALEvent.Word;
	  }
	  else
	  {
		  return u32Val.w[0];
	  }
#elif _IS_SQI_DIRECT_MODE_ACCESS
	  UINT32_VAL u32Val;

	  MCHP_ESF_PDI_READ(ESC_AL_EVENT_OFFSET, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	  return u32Val.w[0];
  
#endif
#endif

}


/*******************************************************************************
    Function:
        void HW_EscRead( MEM_ADDR *pData, UINT16 Address, UINT16 Len )

    Summary:
        This function operates the SPI read access to the EtherCAT ASIC.

    Description:
        Input param:
         pmData		- Pointer to a byte array which holds data to write or saves read data.
         u16Address	- EtherCAT ASIC address ( upper limit is 0x1FFF )	for access.
         u16Len		- Access size in Bytes.
  *****************************************************************************/
void HW_EscRead(MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len) 
{
#if (ESF_PDI == SPI)
    #if _IS_SPI_INDIRECT_MODE_ACCESS

        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            u32Val.v[0] = (UINT8)u16Address;
            u32Val.v[1] = (UINT8)(u16Address >> 8);
            u32Val.v[2] = u8ValidDataLen;
            u32Val.v[3] = 0xC0;

            PDI_Disable_Global_Interrupt();
            MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            MCHP_ESF_PDI_FASTREAD(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            PDI_Restore_Global_Interrupt();

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }
    #elif _IS_SPI_BECKHOFF_MODE_ACCESS

        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            PDI_Disable_Global_Interrupt();
            MCHP_ESF_PDI_READ(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            PDI_Restore_Global_Interrupt();

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }

    #elif _IS_SPI_DIRECT_MODE_ACCESS

        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            PDI_Disable_Global_Interrupt();
            MCHP_ESF_PDI_FASTREAD(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            PDI_Restore_Global_Interrupt();

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }
    #endif
#elif (ESF_PDI == HBI)
    #ifdef HBI_DIRECT_MODE
        #ifdef _IS_HBI_DEMUX_8BIT_SUPPORT
            UINT8 *pu8Data = (UINT8 *)pmData;
            PDI_Disable_Global_Interrupt();
            while (u16Len > 0) {
                SMC_ECAT_Read(pu8Data, u16Address, 1);
                u16Len--;
                u16Address++;
                pu8Data++;
            }
            PDI_Restore_Global_Interrupt();
		#elif _IS_HBI_DEMUX_16BIT_SUPPORT
			UINT8 *pu8Data = (UINT8 *)pmData;

            while (u16Len > 0) {
                PDI_Disable_Global_Interrupt();
                SMC_ECAT_Read(pu8Data, u16Address, 1);
                u16Len--;
                u16Address ++;
                pu8Data++;
                PDI_Restore_Global_Interrupt();	
			}
        #else
            UINT32_VAL u32Val;
			UINT8 u8ValidDataLen = 0, u8Itr = 0;
			UINT8 *pu8Data = (UINT8 *)pmData;

			while (u16Len > 0) {
				u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

				if (u16Address & 0x1) {
					u8ValidDataLen = 1;
				}
				else if (u16Address & 0x2)
				{
					u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
				}
				else if (u8ValidDataLen < 4)
				{
					u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
				}
               
                PDI_Disable_Global_Interrupt();
				MCHP_ESF_PDI_READ(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
				PDI_Restore_Global_Interrupt();

				for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
				*pu8Data++ = u32Val.v[u8Itr];

				u16Address += u8ValidDataLen;
				u16Len -= u8ValidDataLen;
			}
        #endif	
    #else
        EscRead (pmData, u16Address, u16Len);
    #endif
#elif (ESF_PDI == SQI)
    #if _IS_SQI_INDIRECT_MODE_ACCESS

        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            u32Val.v[0] = (UINT8)u16Address;
            u32Val.v[1] = (UINT8)(u16Address >> 8);
            u32Val.v[2] = u8ValidDataLen;
            u32Val.v[3] = ESC_READ_BYTE;

            PDI_Disable_Global_Interrupt();
            MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            MCHP_ESF_PDI_READ(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            PDI_Restore_Global_Interrupt();

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }
    #elif _IS_SQI_DIRECT_MODE_ACCESS
        
        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            PDI_Disable_Global_Interrupt();
            MCHP_ESF_PDI_READ(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            PDI_Restore_Global_Interrupt();

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }
    #endif
#endif
}

/*******************************************************************************
    Function:
        void EscRead( MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len )

    Summary:
        The SPI PDI requires an extra ESC read access functions from interrupts service routines.
                The behaviour is equal to "HW_EscRead()"

    Description:
        Input param:
        pData			- Pointer to a byte array which holds data to write or saves read data.
        param Address	- EtherCAT ASIC address ( upper limit is 0x1FFF ) for access.
        param Len		- Access size in Bytes.
  *****************************************************************************/

void EscRead(MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len)
{
#if (ESF_PDI == SPI)
    #if _IS_SPI_INDIRECT_MODE_ACCESS
        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            u32Val.v[0] = (UINT8)u16Address;
            u32Val.v[1] = (UINT8)(u16Address >> 8);
            u32Val.v[2] = u8ValidDataLen;
            u32Val.v[3] = ESC_READ_BYTE;

            MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            MCHP_ESF_PDI_FASTREAD(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }
    #elif _IS_SPI_BECKHOFF_MODE_ACCESS

        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            MCHP_ESF_PDI_READ(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }

    #elif _IS_SPI_DIRECT_MODE_ACCESS

        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            MCHP_ESF_PDI_FASTREAD(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }
    #endif
#elif (ESF_PDI == HBI)
    #ifndef HBI_DIRECT_MODE
        /* called only in InDirect mode */
        UINT32_VAL u32param32_1;
        UINT8 u8validDataLen = 0, u8Itr = 0, u8length = 4;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8validDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8validDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8validDataLen = (u8validDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8validDataLen < 4)
            {
                u8validDataLen = (u8validDataLen >= 2) ? 2 : 1;
            }
		
            u32param32_1.v[0] = (UINT8)u16Address;
            u32param32_1.v[1] = (UINT8)(u16Address >> 8);
            u32param32_1.v[2] = u8validDataLen;
            u32param32_1.v[3] = ESC_READ_BYTE;

            PDI_Disable_Global_Interrupt();
            MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32param32_1.Val, u8length);
            ESF_delay(100);
            MCHP_ESF_PDI_READ(ESC_CSR_DATA_REG, (UINT8*)&u32param32_1.Val, u8length);
            PDI_Restore_Global_Interrupt();
		
            for (u8Itr = 0; u8Itr < u8validDataLen; u8Itr++)
            *pu8Data++ = u32param32_1.v[u8Itr];

            u16Address += u8validDataLen;
            u16Len -= u8validDataLen;
        }
    #endif
#elif (ESF_PDI == SQI)
    #if _IS_SQI_INDIRECT_MODE_ACCESS
        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            u32Val.v[0] = (UINT8)u16Address;
            u32Val.v[1] = (UINT8)(u16Address >> 8);
            u32Val.v[2] = u8ValidDataLen;
            u32Val.v[3] = ESC_READ_BYTE;

            MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            MCHP_ESF_PDI_READ(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }
    #elif _IS_SQI_DIRECT_MODE_ACCESS

        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            MCHP_ESF_PDI_READ(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            *pu8Data++ = u32Val.v[u8Itr];

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }
    #endif
#endif
}

void HW_EscReadIsr(MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len)
{
#ifdef MEASURE_CYCLE_TIME
    MCHP_ESF_GPIO_SET(GPIO_T_PDI);
#endif
#if (ESF_PDI == SPI)
    UINT8 *pu8Data = (UINT8 *)pmData;
  
    if(u16Address>0xfff)
    {
      /* send the address and command to the ESC */
      #if _IS_SPI_INDIRECT_MODE_ACCESS	  
          MCHP_ESF_PDI_FASTREAD_PDRAM(pu8Data, u16Address, u16Len);
      #elif _IS_SPI_BECKHOFF_MODE_ACCESS 
          MCHP_ESF_PDI_READ (u16Address, pu8Data, u16Len);
      #elif _IS_SPI_DIRECT_MODE_ACCESS
          MCHP_ESF_PDI_FASTREAD (u16Address, pu8Data, u16Len);
      #endif 	  	  	  
    }
    else
    {
        EscRead(pmData, u16Address, u16Len);
    }
#elif (ESF_PDI == HBI)
    #ifdef HBI_DIRECT_MODE
        #ifdef _IS_HBI_DEMUX_8BIT_SUPPORT
            UINT8 *pu8Data = (UINT8 *)pmData;

            while (u16Len > 0) {
                SMC_ECAT_Read(pu8Data, u16Address, 1);
                u16Len--;
                u16Address++;
                pu8Data++;
            }
		#elif _IS_HBI_DEMUX_16BIT_SUPPORT
			UINT32_VAL u32Val;
			UINT8 u8ValidDataLen = 0, u8Itr = 0;
			UINT8 *pu8Data = (UINT8 *)pmData;

			while (u16Len > 0) {
				u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

				if (u16Address & 0x1) {
					u8ValidDataLen = 1;
				}
				else if (u16Address & 0x2)
				{
					u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
				}
				else if (u8ValidDataLen < 4)
				{
					u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
				}

				PDI_Disable_Global_Interrupt();
				MCHP_ESF_PDI_READ(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
				PDI_Restore_Global_Interrupt();

				for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
				*pu8Data++ = u32Val.v[u8Itr];

				u16Address += u8ValidDataLen;
				u16Len -= u8ValidDataLen;
			}
        #else
            UINT32_VAL u32Val;
			UINT8 u8ValidDataLen = 0, u8Itr = 0;
			UINT8 *pu8Data = (UINT8 *)pmData;

			while (u16Len > 0) {
				u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

				if (u16Address & 0x1) {
					u8ValidDataLen = 1;
				}
				else if (u16Address & 0x2)
				{
					u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
				}
				else if (u8ValidDataLen < 4)
				{
					u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
				}

				PDI_Disable_Global_Interrupt();
				MCHP_ESF_PDI_READ(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
				PDI_Restore_Global_Interrupt();

				for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
				*pu8Data++ = u32Val.v[u8Itr];

				u16Address += u8ValidDataLen;
				u16Len -= u8ValidDataLen;
			}
        #endif
    #else
        if(u16Address>0xFFF)
        {
            MCHP_ESF_PDI_READ_PDRAM((UINT8 *)pmData, u16Address, u16Len);
        }
        else
        {
            UINT32_VAL u32param32_1;
            UINT8 u8validDataLen = 0, u8Itr = 0, u8length = 4;
            UINT8 *pu8Data = (UINT8 *)pmData;

            while (u16Len > 0) {
                u8validDataLen = (u16Len > 4) ? 4 : u16Len;

                if (u16Address & 0x1) {
                    u8validDataLen = 1;
                }
                else if (u16Address & 0x2)
                {
                    u8validDataLen = (u8validDataLen >= 2 ) ? 2 : 1;
                }
                else if (u8validDataLen < 4)
                {
                    u8validDataLen = (u8validDataLen >= 2) ? 2 : 1;
                }

                u32param32_1.v[0] = (UINT8)u16Address;
                u32param32_1.v[1] = (UINT8)(u16Address >> 8);
                u32param32_1.v[2] = u8validDataLen;
                u32param32_1.v[3] = ESC_READ_BYTE;

                MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32param32_1.Val, u8length);
                ESF_delay(100);
                MCHP_ESF_PDI_READ(ESC_CSR_DATA_REG, (UINT8*)&u32param32_1.Val, u8length);

                for (u8Itr = 0; u8Itr < u8validDataLen; u8Itr++) {
                    *pu8Data++ = u32param32_1.v[u8Itr];
                }

                u16Address += u8validDataLen;
                u16Len -= u8validDataLen;
            }
        }
    #endif
#elif (ESF_PDI == SQI)
    UINT8 *pu8Data = (UINT8 *)pmData;
    if(u16Address>0xfff)
    {
        /* send the address and command to the ESC */
        #if _IS_SQI_INDIRECT_MODE_ACCESS	  
            MCHP_ESF_PDI_READ_PDRAM(pu8Data, u16Address, u16Len);
        #elif _IS_SQI_DIRECT_MODE_ACCESS
        
            UINT32_VAL u32Val;
            UINT8 u8ValidDataLen = 0, u8Itr = 0;
            
            while (u16Len > 0) {
                 
                u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

                if (u16Address & 0x1) {
                    u8ValidDataLen = 1;
                }
                else if (u16Address & 0x2)
                {
                    u8ValidDataLen = (u8ValidDataLen >= 2 ) ? 2 : 1;
                }
                else if (u8ValidDataLen < 4)
                {
                    u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
                }

                MCHP_ESF_PDI_READ(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);

                for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
                *pu8Data++ = u32Val.v[u8Itr];

                u16Address += u8ValidDataLen;
                u16Len -= u8ValidDataLen;
            }
        #endif 	  	  	  
    }
    else
    {
        EscRead(pmData, u16Address, u16Len);
    }
#endif /* ESF_PDI End */
#ifdef MEASURE_CYCLE_TIME
    MCHP_ESF_GPIO_CLEAR(GPIO_T_PDI);
#endif
}

/*******************************************************************************
    Function:
        void HW_EscWrite( MEM_ADDR *pData, UINT16 u16Address, UINT16 u16Len )

    Summary:
        This function operates the SPI write access to the EtherCAT ASIC.

    Description:
        Input param:
        pData			- Pointer to a byte array which holds data to write or saves write data.
        param Address	- EtherCAT ASIC address ( upper limit is 0x1FFF ) for access.
        param Len		- Access size in Bytes.
  *****************************************************************************/
void HW_EscWrite(MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len)
{
#if (ESF_PDI == SPI)
#if _IS_SPI_INDIRECT_MODE_ACCESS

	UINT32_VAL u32Val;
	UINT8 u8ValidDataLen = 0, u8Itr = 0;
	UINT8 *pu8Data = (UINT8 *)pmData;

	while (u16Len > 0) {
		u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;
	
		if (u16Address & 0x1) {
			u8ValidDataLen = 1;
		}
		else if (u16Address & 0x2)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}
		else if (u8ValidDataLen < 4)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}

		for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
		u32Val.v[u8Itr] = *pu8Data++;
	
		PDI_Disable_Global_Interrupt();
		MCHP_ESF_PDI_WRITE(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

		u32Val.v[0] = (UINT8)u16Address;
		u32Val.v[1] = (UINT8)(u16Address >> 8);
		u32Val.v[2] = u8ValidDataLen;
		u32Val.v[3] = ESC_WRITE_BYTE;

		MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
		PDI_Restore_Global_Interrupt();

		u16Address += u8ValidDataLen;
		u16Len -= u8ValidDataLen;
	}

#elif _IS_SPI_BECKHOFF_MODE_ACCESS

	UINT32_VAL u32Val;
	UINT8 u8ValidDataLen = 0, u8Itr = 0;
	UINT8 *pu8Data = (UINT8 *)pmData;

	while (u16Len > 0) {
		u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;
	
		if (u16Address & 0x1) {
			u8ValidDataLen = 1;
		}
		else if (u16Address & 0x2)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}
		else if (u8ValidDataLen < 4)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}

		for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
		u32Val.v[u8Itr] = *pu8Data++;
	
		PDI_Disable_Global_Interrupt();
		MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
		PDI_Restore_Global_Interrupt();

		u16Address += u8ValidDataLen;
		u16Len -= u8ValidDataLen;
	}

#elif _IS_SPI_DIRECT_MODE_ACCESS
	
	UINT32_VAL u32Val;
	UINT8 u8ValidDataLen = 0, u8Itr = 0;
	UINT8 *pu8Data = (UINT8 *)pmData;

	while (u16Len > 0) {
		u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;
	
		if (u16Address & 0x1) {
			u8ValidDataLen = 1;
		}
		else if (u16Address & 0x2)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}
		else if (u8ValidDataLen < 4)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}

		for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
		u32Val.v[u8Itr] = *pu8Data++;
	
		PDI_Disable_Global_Interrupt();
		MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
		PDI_Restore_Global_Interrupt();

		u16Address += u8ValidDataLen;
		u16Len -= u8ValidDataLen;
	}

#endif
#elif (ESF_PDI == HBI)
    #ifdef HBI_DIRECT_MODE
		#if (HBI_MODE == MSP_16BIT) || (HBI_MODE == MDP_16BIT) || (HBI_MODE == MDP_8BIT)
			 UINT32_VAL u32Val;
			UINT8 u8ValidDataLen = 0, u8Itr = 0;
			UINT8 *pu8Data = (UINT8 *)pmData;

			while (u16Len > 0) {
				u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

				if (u16Address & 0x1) {
					u8ValidDataLen = 1;
				}
				else if (u16Address & 0x2)
				{
					u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
				}
				else if (u8ValidDataLen < 4)
				{
					u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
				}

				for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
                {
                    if((u8ValidDataLen < 4) && (u16Address < 0x1000))
                    {
                        u32Val.v[u8Itr+(u16Address & 0x03)] = *pu8Data++;
                        u16Address -= (u16Address & 0x03);
                    }
                    else
                    {
                        u32Val.v[u8Itr] = *pu8Data++;
                    }
                }
                

				PDI_Disable_Global_Interrupt();
				MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
				PDI_Restore_Global_Interrupt();
                
				u16Address += u8ValidDataLen;
				u16Len -= u8ValidDataLen;
			}
		#else
			UINT8 *pu8Data = (UINT8 *)pmData;
			
			while (u16Len > 0) {
				PDI_Disable_Global_Interrupt();
				if((u16Address & 0x1) | (u16Len == 1))	//Odd address or 1 byte
				{
					SMC_ECAT_Write(pu8Data, u16Address, 1);
					u16Len--;
					u16Address++;
					pu8Data++;
				}else
				{
					//Even address can always read 2 byes..not a problem!!!
					SMC_ECAT_Write(pu8Data, u16Address, 2);
					u16Len -= 2;
					u16Address += 2;
					pu8Data += 2;
				}
				PDI_Restore_Global_Interrupt();
			}
		#endif
    #else
        EscWrite (pmData, u16Address, u16Len);
	#endif
#elif (ESF_PDI == SQI)
    #if _IS_SQI_INDIRECT_MODE_ACCESS

        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            u32Val.v[u8Itr] = *pu8Data++;

            PDI_Disable_Global_Interrupt();
            MCHP_ESF_PDI_WRITE(ESC_CSR_DATA_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

            u32Val.v[0] = (UINT8)u16Address;
            u32Val.v[1] = (UINT8)(u16Address >> 8);
            u32Val.v[2] = u8ValidDataLen;
            u32Val.v[3] = ESC_WRITE_BYTE;

            MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            PDI_Restore_Global_Interrupt();

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }

    #elif _IS_SQI_DIRECT_MODE_ACCESS
        
        UINT32_VAL u32Val;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            u32Val.v[u8Itr] = *pu8Data++;

            PDI_Disable_Global_Interrupt();
            MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);
            PDI_Restore_Global_Interrupt();

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }

    #endif
#endif
}

/*******************************************************************************
    Function:
        void EscWrite( MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len )

    Summary:
        The SPI PDI requires an extra ESC write access functions from interrupts service routines.
                The behaviour is equal to "HW_EscWrite()"

    Description:
        Input param:
        pData			- Pointer to a byte array which holds data to write or saves write data.
        param Address	- EtherCAT ASIC address ( upper limit is 0x1FFF ) for access.
        param Len		- Access size in Bytes.
  *****************************************************************************/
void EscWrite(MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len) 
{
#if (ESF_PDI == SPI)
    #if _IS_SPI_INDIRECT_MODE_ACCESS

	UINT32_VAL u32param32_1;
	UINT8 u8ValidDataLen = 0, u8Itr = 0;
	UINT8 *pu8Data = (UINT8 *)pmData;

	while (u16Len > 0) {
		u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;
		
		if (u16Address & 0x1) {
			u8ValidDataLen = 1;
		}
		else if (u16Address & 0x2)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}
		else if (u8ValidDataLen < 4)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}

		for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
		u32param32_1.v[u8Itr] = *pu8Data++;
		
		MCHP_ESF_PDI_WRITE(ESC_CSR_DATA_REG, (UINT8*)&u32param32_1.Val, DWORD_LENGTH);

		u32param32_1.v[0] = (UINT8)u16Address;
		u32param32_1.v[1] = (UINT8)(u16Address >> 8);
		u32param32_1.v[2] = u8ValidDataLen;
		u32param32_1.v[3] = ESC_WRITE_BYTE;

		MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32param32_1.Val, DWORD_LENGTH);

		u16Address += u8ValidDataLen;
		u16Len -= u8ValidDataLen;
	}
	
#elif _IS_SPI_BECKHOFF_MODE_ACCESS

	UINT32_VAL u32param32_1;
	UINT8 u8ValidDataLen = 0, u8Itr = 0;
	UINT8 *pu8Data = (UINT8 *)pmData;

	while (u16Len > 0) {
		u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;
		
		if (u16Address & 0x1) {
			u8ValidDataLen = 1;
		}
		else if (u16Address & 0x2)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}
		else if (u8ValidDataLen < 4)
		{
			u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
		}

		for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
		u32param32_1.v[u8Itr] = *pu8Data++;
		
		MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32param32_1.Val, DWORD_LENGTH);
		
		u16Address += u8ValidDataLen;
		u16Len -= u8ValidDataLen;
	}
	
#elif _IS_SPI_DIRECT_MODE_ACCESS
		UINT32_VAL u32param32_1;
		UINT8 u8ValidDataLen = 0, u8Itr = 0;
		UINT8 *pu8Data = (UINT8 *)pmData;

		while (u16Len > 0) {
			u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;
			
			if (u16Address & 0x1) {
				u8ValidDataLen = 1;
			}
			else if (u16Address & 0x2)
			{
				u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
			}
			else if (u8ValidDataLen < 4)
			{
				u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
			}

			for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++) 
			u32param32_1.v[u8Itr] = *pu8Data++;
			
			MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32param32_1.Val, DWORD_LENGTH);
			
			u16Address += u8ValidDataLen;
			u16Len -= u8ValidDataLen;
		}
    #endif
#elif (ESF_PDI == HBI)
    #ifndef HBI_DIRECT_MODE    
        UINT32_VAL u32param32_1;
		UINT8 u8validDataLen = 0, u8Itr = 0, u8length = 4;
		UINT8 *pu8Data = (UINT8 *)pmData;

		while (u16Len > 0) {
			u8validDataLen = (u16Len > 4) ? 4 : u16Len;
			
			if (u16Address & 0x1) {
				u8validDataLen = 1;
			}
			else if (u16Address & 0x2)
			{
				u8validDataLen = (u8validDataLen >= 2) ? 2 : 1;
			}
			else if (u8validDataLen < 4)
			{
				u8validDataLen = (u8validDataLen >= 2) ? 2 : 1;
			}

			for (u8Itr = 0; u8Itr < u8validDataLen; u8Itr++)
			u32param32_1.v[u8Itr] = *pu8Data++;
			
			PDI_Disable_Global_Interrupt();
			MCHP_ESF_PDI_WRITE(ESC_CSR_DATA_REG, (UINT8*)&u32param32_1.Val, u8length);

			u32param32_1.v[0] = (UINT8)u16Address;
			u32param32_1.v[1] = (UINT8)(u16Address >> 8);
			u32param32_1.v[2] = u8validDataLen;
			u32param32_1.v[3] = ESC_WRITE_BYTE;

			MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32param32_1.Val, u8length);
			PDI_Restore_Global_Interrupt();

			u16Address += u8validDataLen;
			u16Len -= u8validDataLen;
		}
    #endif
#elif (ESF_PDI == SQI)
    #if _IS_SQI_INDIRECT_MODE_ACCESS

        UINT32_VAL u32param32_1;
        UINT8 u8ValidDataLen = 0, u8Itr = 0;
        UINT8 *pu8Data = (UINT8 *)pmData;

        while (u16Len > 0) {
            u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

            if (u16Address & 0x1) {
                u8ValidDataLen = 1;
            }
            else if (u16Address & 0x2)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }
            else if (u8ValidDataLen < 4)
            {
                u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
            }

            for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
            u32param32_1.v[u8Itr] = *pu8Data++;

            MCHP_ESF_PDI_WRITE(ESC_CSR_DATA_REG, (UINT8*)&u32param32_1.Val, DWORD_LENGTH);

            u32param32_1.v[0] = (UINT8)u16Address;
            u32param32_1.v[1] = (UINT8)(u16Address >> 8);
            u32param32_1.v[2] = u8ValidDataLen;
            u32param32_1.v[3] = ESC_WRITE_BYTE;

            MCHP_ESF_PDI_WRITE(ESC_CSR_CMD_REG, (UINT8*)&u32param32_1.Val, DWORD_LENGTH);

            u16Address += u8ValidDataLen;
            u16Len -= u8ValidDataLen;
        }

    #elif _IS_SQI_DIRECT_MODE_ACCESS

        UINT32_VAL u32param32_1;
		UINT8 u8ValidDataLen = 0, u8Itr = 0;
		UINT8 *pu8Data = (UINT8 *)pmData;

		while (u16Len > 0) {
			u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;
			
			if (u16Address & 0x1) {
				u8ValidDataLen = 1;
			}
			else if (u16Address & 0x2)
			{
				u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
			}
			else if (u8ValidDataLen < 4)
			{
				u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
			}

			for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++) 
			u32param32_1.v[u8Itr] = *pu8Data++;
			
			MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32param32_1.Val, DWORD_LENGTH);
			
			u16Address += u8ValidDataLen;
			u16Len -= u8ValidDataLen;
		}
    #endif
#endif
}

void HW_EscWriteIsr(MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len)
{
#ifdef MEASURE_CYCLE_TIME
    MCHP_ESF_GPIO_SET(GPIO_T_PDI);
#endif
#if (ESF_PDI == SPI)
    UINT8 *pu8Data = (UINT8 *)pmData;

    if(u16Address>0xfff)
    {
        /* start transmission */
        #if _IS_SPI_INDIRECT_MODE_ACCESS	  
            MCHP_ESF_PDI_WRITE_PDRAM(pu8Data, u16Address, u16Len);
        #else
            MCHP_ESF_PDI_WRITE (u16Address, pu8Data, u16Len);
        #endif
    }
    else
    {
        EscWrite(pmData, u16Address, u16Len);
    }
#elif (ESF_PDI == HBI)
    UINT8 *pu8Data = (UINT8 *)pmData;
    #ifdef HBI_DIRECT_MODE 
		#if (HBI_MODE == MSP_16BIT) || (HBI_MODE == MDP_16BIT) || (HBI_MODE == MDP_8BIT)
			
            if(u16Address>0xfff)
			{
				UINT32_VAL u32Val;
				UINT8 u8ValidDataLen = 0, u8Itr = 0;

				while (u16Len > 0) {
					u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

					if (u16Address & 0x1) {
						u8ValidDataLen = 1;
					}
					else if (u16Address & 0x2)
					{
						u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
					}
					else if (u8ValidDataLen < 4)
					{
						u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
					}

					for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
					u32Val.v[u8Itr] = *pu8Data++;

					MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);

					u16Address += u8ValidDataLen;
					u16Len -= u8ValidDataLen;
				}
			}			
		#else
			while (u16Len > 0) {
				if((u16Address & 0x1) | (u16Len == 1))	//Odd address or 1 byte
				{
					SMC_ECAT_Write(pu8Data, u16Address, 1);
					u16Len--;
					u16Address++;
					pu8Data++;
				}else
				{
					//Even address can always read 2 byes..not a problem!!!
					SMC_ECAT_Write(pu8Data, u16Address, 2);
					u16Len -= 2;
					u16Address += 2;
					pu8Data += 2;
				}
			}
		#endif
        
	#else
        if(u16Address>=0x1000)
        {
            MCHP_ESF_PDI_WRITE_PDRAM(pu8Data, u16Address, u16Len);
        }
        else
        {
            EscWrite (pmData, u16Address, u16Len);
        }
	#endif
#elif (ESF_PDI == SQI)
    UINT8 *pu8Data = (UINT8 *)pmData;

    if(u16Address>0xfff)
    {
        /* start transmission */
        #if _IS_SQI_INDIRECT_MODE_ACCESS	  
            MCHP_ESF_PDI_WRITE_PDRAM(pu8Data, u16Address, u16Len);
        #else
         
            UINT32_VAL u32Val;
            UINT8 u8ValidDataLen = 0, u8Itr = 0;

            while (u16Len > 0) {
                u8ValidDataLen = (u16Len > 4) ? 4 : u16Len;

                if (u16Address & 0x1) {
                    u8ValidDataLen = 1;
                }
                else if (u16Address & 0x2)
                {
                    u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
                }
                else if (u8ValidDataLen < 4)
                {
                    u8ValidDataLen = (u8ValidDataLen >= 2) ? 2 : 1;
                }

                for (u8Itr = 0; u8Itr < u8ValidDataLen; u8Itr++)
                u32Val.v[u8Itr] = *pu8Data++;

                MCHP_ESF_PDI_WRITE(u16Address, (UINT8*)&u32Val.Val, DWORD_LENGTH);

                u16Address += u8ValidDataLen;
                u16Len -= u8ValidDataLen;
            }
        #endif
    }
    else
    {
        EscWrite(pmData, u16Address, u16Len);
    }
#endif
#ifdef MEASURE_CYCLE_TIME
    MCHP_ESF_GPIO_CLEAR(GPIO_T_PDI);
#endif
}

void HW_EscWriteMailbox(MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len) {

	HW_EscWrite(pmData, u16Address, u16Len);
}

void HW_EscReadMailbox(MEM_ADDR *pmData, UINT16 u16Address, UINT16 u16Len) {
	
	/* send the address and command to the ESC */
	//ReadPdRam(pTmpData, Address, Len);
	HW_EscRead(pmData, u16Address, u16Len);
	
}

/*******************************************************************************
    Function:
    void HW_SetLed(UINT8 u8RunLed,UINT8 u8ErrLed)

    Summary:
     This function set the Error LED if it is required.

    Description:
    LAN925x does not support error LED. So this feature has to be enabled by PDI SOC if it is needed.

    Parameters:
        RunLed	- It is not used. This will be set by LAN925x.
        ErrLed	- 1- ON, 0-0FF.
*******************************************************************************/
void HW_SetLed(UINT8 u8RunLed, UINT8 u8ErrLed)
{
	/* Here RunLed is not used. Because on chip supported RUN Led is available*/
}
