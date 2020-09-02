/*
 * Drivers.c
 *
 * Created: 1/30/2020 9:21:35 AM
 *  Author: I52915
 */ 

/**
 * \file
 *
 * \brief Application implement
 *
 * Copyright (c) 2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.	TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#include "Drivers.h"
#include "LAN925x.h"
#include "ecatslv.h"
#include "ESF_APIHook.h"

#define TIMER_INTERVAL 1 // ms

/* Function declarations */
static void PDI_Init_SYSTick_Interrupt();
void ECAT_SysTick_Handler(TC_TIMER_STATUS status, uintptr_t context);

void CRITICAL_SECTION_ENTER(void)
{
    //processorStatus = SYS_INT_Disable();
    //processorStatus_eic0 =  SYS_INT_SourceDisable(EIC_EXTINT_0_IRQn);
   // processorStatus_eic7 =  SYS_INT_SourceDisable(EIC_EXTINT_7_IRQn);
    __set_BASEPRI(4 << (8 - __NVIC_PRIO_BITS));
}

void CRITICAL_SECTION_LEAVE(void)
{
    //SYS_INT_Restore( processorStatus );
    //SYS_INT_SourceRestore(EIC_EXTINT_0_IRQn,processorStatus_eic0);
    //SYS_INT_SourceRestore(EIC_EXTINT_7_IRQn,processorStatus_eic7);
    __set_BASEPRI(0U); // remove the BASEPRI masking
}

/*******************************************************************************
    Function:
        void ether_cat_sync0_cb()

    Summary:
        Interrupt service routine for the interrupt from SYNC0
*******************************************************************************/
void ether_cat_sync0_cb(PIO_PIN pin, uintptr_t context)
{
	//MCHP_ESF_CRITICAL_SECTION_ENTER();
	Sync0_Isr();
	//MCHP_ESF_CRITICAL_SECTION_LEAVE();
}

/*******************************************************************************
    Function:
        void ether_cat_sync1_cb()

    Summary:
        Interrupt service routine for the interrupt from SYNC1
*******************************************************************************/
void ether_cat_sync1_cb(PIO_PIN pin, uintptr_t context)
{
	//MCHP_ESF_CRITICAL_SECTION_ENTER();
	Sync1_Isr();
	//MCHP_ESF_CRITICAL_SECTION_LEAVE();
}

/*******************************************************************************
    Function:
        void ether_cat_escirq_cb()

    Summary:
        Interrupt service routine for the interrupt from ESC
*******************************************************************************/
void ether_cat_escirq_cb(PIO_PIN pin, uintptr_t context)
{
	//MCHP_ESF_CRITICAL_SECTION_ENTER();
	PDI_Isr();
	//MCHP_ESF_CRITICAL_SECTION_LEAVE();
}

/*******************************************************************************
    Function:
        UINT16 PDI_GetTimer(void)

    Summary:
        Get the 1ms current timer value
    Description:
        This routine gets the 1ms current timer value.
*******************************************************************************/
UINT16 PDI_GetTimer()
{
	return TC0_CH0_TimerCounterGet();
}

/*******************************************************************************
    Function:
        void PDI_ClearTimer(void)

    Summary:
        Clear the 1ms current timer value
    Description:
        This routine clears the 1ms current timer value.
*******************************************************************************/
void PDI_ClearTimer(void)
{
	;
}

/*******************************************************************************
    Function:
    void PDI_Timer_Interrupt(void)

    Summary:
     This function configure and enable the TIMER interrupt for 1ms

    Description:
    This function configure and enable the TIMER interrupt for 1ms
*******************************************************************************/
void PDI_Timer_Interrupt(void)
{
    PDI_Init_SYSTick_Interrupt();
}

/*******************************************************************************
    Function:
        void SysTick_Handler(void)

    Summary:
        SysTick ISR Handler
    Description:
        This routine load the SysTick LOAD register and perform EtherCAT check opration.
*******************************************************************************/

void ECAT_SysTick_Handler(TC_TIMER_STATUS status, uintptr_t context)
{
    MCHP_ESF_CRITICAL_SECTION_ENTER();
	//EtherCATTestPinSet();
	ECAT_CheckTimer();
	//EtherCATTestPinClr();
    MCHP_ESF_CRITICAL_SECTION_LEAVE();
}

/*******************************************************************************
    Function:
        void PDI_Init_SYSTick_Interrupt()

    Summary:
        Register Callback function for PDI SYS_Tick interrupt
*******************************************************************************/
static void PDI_Init_SYSTick_Interrupt()
{
    TC0_CH0_TimerCallbackRegister(ECAT_SysTick_Handler,(uintptr_t) NULL);
    TC0_CH0_TimerStart();
}

/*******************************************************************************
    Function:
        void stop_timer(void)

    Summary:
        Disable SysTick ISR
    Description:
        This routine disable SysTick Interrupt.
*******************************************************************************/
void stop_timer(void)
{
	NVIC_DisableIRQ(SysTick_IRQn);
}

/*******************************************************************************
    Function:
        void start_timer(void)

    Summary:
        Enable SysTick ISR
    Description:
        This routine enable SysTick Interrupt.
*******************************************************************************/
void start_timer(void)
{
	NVIC_EnableIRQ(SysTick_IRQn);
}

void ESF_PDI_Init()
{
    
}

void SMC_SytemCSR_Write(uint8_t * WriteBuffer, uint16_t Addr, uint16_t count)
{
#ifdef HBI_DIRECT_MODE
	if(!(Addr>= 0x300 && Addr<= 0x317))
	{
		//Since registers 0x300 to 0x314 are unused in direct mode
		SMC_Write(WriteBuffer, (0x3000+Addr), count);
	}
		
#else
	SMC_Write(WriteBuffer, Addr, count);
#endif
}

void SMC_SyetemCSR_Read(uint8_t * ReadBuffer, uint16_t Addr, uint16_t count)
{
#ifdef HBI_DIRECT_MODE
	if(!(Addr>= 0x300 && Addr<= 0x317))
	{
		//Since registers 0x300 to 0x314 are unused in direct mode
		SMC_Read(ReadBuffer, (0x3000+Addr), count);
	}
#else
	SMC_Read(ReadBuffer, Addr, count);
#endif
}

void SMC_ProcessRAMRead(uint8_t **pData, uint16_t address, uint16_t length)
{
	uint8_t startAlignSize, endAlignSize;
	
	/* Calculate start align and end align sizes to sync with DWORD access */
	startAlignSize = (address & 3);
	endAlignSize = (length + startAlignSize)& 3;
	if (endAlignSize & 3){
		endAlignSize = (((endAlignSize + 4) & 0xC) - endAlignSize);
	}
	
	#ifdef DIRECT_MODE
		/* Read the FIFO using PDRAM Read Data FIFO, so that valid data will be read from PDRAM */
		//*pData = (uint8_t *)malloc((length+startAlignSize+endAlignSize) * sizeof(uint8_t));
		SMC_Read(*pData, address-startAlignSize, length+startAlignSize+endAlignSize);
	#else
		/* Write Address and length in PDRAM Read address and length register */

		uint32_t wPtr = ((length<<16)|address);

		SMC_Write((uint8_t*)&wPtr, LAN925x_ECAT_PRAM_RD_ADDR_LENGTH_REG, 4);
	
		/* Write Read command in PDRAM Read command register */
		wPtr = 0x80000000;
		SMC_Write((uint8_t*)&wPtr, LAN925x_ECAT_PRAM_RD_CMD_REG, 4);
		
		/* Read the FIFO using PDRAM Read Data FIFO, so that valid data will be read from PDRAM */
		//*pData = (uint8_t *)malloc((length+startAlignSize+endAlignSize) * sizeof(uint8_t));
		SMC_Read(*pData, 0x04, length+startAlignSize+endAlignSize);
	#endif
	

	*pData = (*pData)+startAlignSize;

}

void SMC_Indirect_ProcessRAMWrite(uint8_t *pData, uint16_t address, uint16_t length)
{
	uint32_t startAlignSize, endAlignSize;
	uint8_t *ptr;
		
	/* Calculate start align and end align sizes to sync with DWORD access */
	startAlignSize = (address & 3);
	endAlignSize = (length + startAlignSize)& 3;
	if (endAlignSize & 3){
		endAlignSize = (((endAlignSize + 4) & 0xC) - endAlignSize);
	}
		
	ptr = (uint8_t*) pData;
	ptr = ptr - startAlignSize;

	/* Write Address and length in PDRAM Write address and length register*/
		
	uint32_t wPtr = ((length<<16)|address);
	SMC_Write((uint8_t*)&wPtr, LAN925x_ECAT_PRAM_WR_ADDR_LENGTH_REG, 4);

	//SMC_Write((uint8_t*)&param32_1.Val, LAN9254_ECAT_PRAM_WR_ADDR_LENGTH_REG, 4);
		
	/* Write command in PDRAM Write command register */
	wPtr = 0x80000000;
	SMC_Write((uint8_t*)&wPtr, LAN925x_ECAT_PRAM_WR_CMD_REG, 4);
		
	uint32_t isSpaceAvailable =0;
	do
	{
		SMC_Read((uint8_t *)&isSpaceAvailable, LAN925x_ECAT_PRAM_WR_CMD_REG, 4);
	}while((isSpaceAvailable & 1) !=1);
		
	/* Write the data in FIFO through PDRAM Write Data FIFO */
	SMC_Write((uint8_t*)ptr, 0x20, length+startAlignSize+endAlignSize);
	
	uint32_t isWriteBusy =1;
	do
	{
		SMC_Read((uint8_t *)&isWriteBusy, LAN925x_ECAT_PRAM_WR_CMD_REG, 4);
	}while(isWriteBusy & 0x80000000);
}

#ifdef ESF_HBI_DEBUG

void SMC_SystemCSR_Write_DWord(uint32_t writeData, uint16_t Address)
{
#ifdef DEBUG_HBI_DIRECT_MODE
	if(!(Address>= 0x300 && Address<= 0x317))
	{
		//Since registers 0x300 to 0x314 are unused in direct mode
		SMC_WriteDWord(writeData, (0x3000+Address));
	}
#else
	SMC_WriteDWord(writeData, Address);
#endif
}

uint32_t SMC_SystemCSR_Read_DWord(uint16_t Address)
{
#ifdef DEBUG_HBI_DIRECT_MODE
	if(Address>= 0x300 && Address<= 0x317)
	{
		//Since registers 0x300 to 0x314 are unused in direct mode
		return 0xffffffff;	
	}
	else
	{
		return SMC_ReadDWord((0x3000+Address));
			
	}
#else
	return SMC_ReadDWord(Address);
#endif
}

bool SMC_VerifyByteOrderRegister()
{
	volatile uint32_t ReadData;
	
	SMC_ECATCore_Read((uint8_t *)&ReadData, 0x140, 2);
	
	ReadData = SMC_SystemCSR_Read_DWord(0x64);

	if(0x87654321!= ReadData)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void SMC_VerifyAccess_PDRAM()
{
	uint32_t writePtr;
	writePtr = 0x18273645;
	
//	SMC_ProcessRAMWrite((uint8_t*)(&writePtr), 0x1001, 4);
	
	uint8_t *readPtr;
	int status =1;
	do
	{
		SMC_ProcessRAMRead(&readPtr, 0x1001, 4);
		status = memcmp(&writePtr, readPtr, 4);
	} while (status != 0);
	
	
}

void SMC_VerifyAccess_SystemCSR()
{
	uint32_t writeData = 0x8bcddcba, readData;
	
	SMC_SystemCSR_Write_DWord(writeData, 0x8C);
	
	
	readData = SMC_SystemCSR_Read_DWord(0x8C);
	
	while((writeData & 0x2000ffff) != readData)
	{
		
	}
}

void SMC_VerifyAccess_ECATCore()
{
	uint32_t writePtr;
	writePtr = 0x18273645;
	
	SMC_ECATCore_Write((uint8_t*)(&writePtr), 0x204, 4);
	uint8_t *readPtr = (uint8_t *)malloc(sizeof(uint8_t)*4);
	int status =1;
	do
	{
		SMC_ECATCore_Read(readPtr, 0x204, 4);
		status = memcmp(&writePtr, readPtr, 4);
	} while (status != 0);
	
	//HW_EscRead(readPtr, 0x204, 4);
}

void SMC_ECATCore_Write(uint8_t* pWriteBuf, uint16_t Address, uint16_t length)
{
#ifdef HBI_DIRECT_MODE
	SMC_Write(pWriteBuf, Address, length);
#else
	HW_EscWrite((MEM_ADDR *)pWriteBuf, Address, length);
#endif
}

void SMC_ECATCore_Read(uint8_t* pReadBuf, uint16_t Address, uint16_t length)
{
#ifdef HBI_DIRECT_MODE
	SMC_Read(pReadBuf, Address, length);
#else
	HW_EscRead((MEM_ADDR *)pReadBuf, Address, length);
#endif
}

#endif