/*******************************************************************************
 SOC portable Drivers source file

  Company:
    Microchip Technology Inc.

  File Name:
    Drivers.c

  Description:
    This file provides the access API's to ESC through PDI
    Each API has implementation for each PDI type with resect to SOC.
    The API's acts as interface to the ESC APIs and actual hardware drivers 
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
#include "ecatslv.h"
#include "ESC_Utils.h"

#define TIMER_INTERVAL 1 // ms

/* Function declarations */
static void PDI_Init_SYSTick_Interrupt();
void ECAT_SysTick_Handler(TC_TIMER_STATUS status, uintptr_t context);

void CRITICAL_SECTION_ENTER(void)
{
    //processorStatus = SYS_INT_Disable();
    __set_BASEPRI(4 << (8 - __NVIC_PRIO_BITS));
}

void CRITICAL_SECTION_LEAVE(void)
{
    //SYS_INT_Restore( processorStatus );
    __set_BASEPRI(0U); // remove the BASEPRI masking
}

/*******************************************************************************
    Function:
        void ESC_Sync0_cb()

    Summary:
        Interrupt service routine for the interrupt from SYNC0
*******************************************************************************/
void ESC_Sync0_cb(PIO_PIN pin, uintptr_t context)
{
	//MCHP_ESF_CRITICAL_SECTION_ENTER();
	Sync0_Isr();
	//MCHP_ESF_CRITICAL_SECTION_LEAVE();
}

/*******************************************************************************
    Function:
        void ESC_Sync1_cb()

    Summary:
        Interrupt service routine for the interrupt from SYNC1
*******************************************************************************/
void ESC_Sync1_cb(PIO_PIN pin, uintptr_t context)
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
void ESC_IRQ_cb(PIO_PIN pin, uintptr_t context)
{
    MCHP_ESF_CRITICAL_SECTION_ENTER();
#ifdef MEASURE_CYCLE_TIME
    MCHP_ESF_GPIO_SET(GPIO_T_MCU);
#endif
	PDI_Isr();
#ifdef MEASURE_CYCLE_TIME
    MCHP_ESF_GPIO_CLEAR(GPIO_T_MCU);
#endif
	MCHP_ESF_CRITICAL_SECTION_LEAVE();
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
	ECAT_CheckTimer();
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
#ifdef MEASURE_CYCLE_TIME
    /* These GPIO's used to measure the Tpdi and Tmcu */
    MCHP_ESF_GPIO_OUTPUT_EN(GPIO_T_PDI);
    MCHP_ESF_GPIO_OUTPUT_EN(GPIO_T_MCU);
#endif

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

void SMC_ECAT_Write(uint8_t * WriteBuffer, uint16_t Addr, uint16_t count)
{
	SMC_Write(WriteBuffer, Addr, count);
}

void SMC_ECAT_Read(uint8_t * ReadBuffer, uint16_t Addr, uint16_t count)
{
	SMC_Read(ReadBuffer, Addr, count);
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
        *pData = (*pData)+startAlignSize;
	#else
		/* Write Address and length in PDRAM Read address and length register */

		uint32_t wPtr = ((length<<16)|address);

		SMC_Write((uint8_t*)&wPtr, LAN925x_ECAT_PRAM_RD_ADDR_LENGTH_REG, 4);
	
		/* Write Read command in PDRAM Read command register */
		wPtr = 0x80000000;
		SMC_Write((uint8_t*)&wPtr, LAN925x_ECAT_PRAM_RD_CMD_REG, 4);
		
		/* Read the FIFO using PDRAM Read Data FIFO, so that valid data will be read from PDRAM */
        UINT8 *pTempData = (uint8_t *)malloc((length+startAlignSize+endAlignSize) * sizeof(uint8_t));
        SMC_Read(pTempData, 0x04, length+startAlignSize+endAlignSize);

        memcpy(*pData, pTempData+startAlignSize, length);
        //*pData = (*pData)+startAlignSize;

        free(pTempData);
	#endif
	
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
