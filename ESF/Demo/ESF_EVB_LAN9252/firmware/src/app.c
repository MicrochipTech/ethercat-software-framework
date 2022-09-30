/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

/*******************************************************************************
* Copyright (C) 2022 Microchip Technology Inc. and its subsidiaries.
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

/*****************************************************************************
 *****************************************************************************
 Section: Included Files
 *****************************************************************************
 *****************************************************************************/

#include "app.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "ESC_Utils.h"
#include "Drivers.h"
#include "applInterface.h"
#include "sample_app.h"
#include "Developer_Test.h"

#if _IS_EEPROM_EMULATION_SUPPORT
#include "eeprom.h"
#endif

#ifdef _IS_EEPROM_EMULATION_SUPPORT
uint8_t CalculateCRC8(uint8_t* pData, int length)
{
    uint16_t Crc8Poly = 0x07U;    // s/b international standard for CRC-8
                                // x^8 + x^2 + x + 1
    uint8_t crc = 0xff;
    uint8_t i;
    
    while (length--) {
		crc ^= *pData++;
		for (i = 0; i < 8; i++)
            crc = crc & 0x80 ? (crc << 1) ^ Crc8Poly : crc << 1;
    }
	return crc & 0xff;
}

void APP_FlashEEPROMUpdate(uint8_t *flash_data, uint8_t checksum)
{
    uint32_t   flashStartAddress=0;
    int        pageCnt=0;
    uint8_t    readdata[APP_ERASE_BLOCK_SIZE];
    
    while(NVMCTRL_IsBusy()){}
    
    NVMCTRL_Read( (uint32_t *)readdata, APP_ERASE_BLOCK_SIZE, flashStartAddress);
    MEMCPY(&readdata[FLASH_EEPROM_START_ADDRESS],flash_data, ESC_EEPROM_SIZE);
    MEMCPY(&readdata[FLASH_EEPROM_START_ADDRESS+ESC_EEPROM_CONFIG_BYTES],&checksum, 1);
    flash_data = readdata;
    
    /* Erase the block */
    NVMCTRL_BlockErase((uint32_t)flashStartAddress);
    
    for (pageCnt=0; pageCnt < APP_PAGES_IN_ERASE_BLOCK; pageCnt++)
	{
        /* If write mode is manual, */
        /* Program 512 byte page */
        NVMCTRL_PageWrite((uint32_t *)flash_data, (uint32_t)flashStartAddress);
        while(NVMCTRL_IsBusy()){}

        flash_data = flash_data + APP_PAGE_SIZE;
        flashStartAddress = flashStartAddress + APP_PAGE_SIZE;        
	}
}
#endif

#if defined(ETHERCAT_USE_FOE)  
//-----------------------------------------------------------------------------
const uint32_t gAppBankBOffsetAddr = APP_NVM_BANKB_START_ADDRESS;
// Bank B application need to started from this below location.
const uint32_t gApplicationStartAddr   = (uint32_t)(APP_NVM_BANKB_START_ADDRESS + APP_BOOTLOADER_SIZE);

void APP_FlashWrite( uint32_t startAddress,uint8_t *flash_data )
{
    uint32_t   flashStartAddress=0;
    int         pageCnt=0;
    
    flashStartAddress = gAppBankBOffsetAddr+startAddress;
	while(NVMCTRL_IsBusy()){}

    /* Erase the block */
    NVMCTRL_BlockErase((uint32_t)flashStartAddress);

    while(NVMCTRL_IsBusy()){}

    for (pageCnt=0; pageCnt < APP_PAGES_IN_ERASE_BLOCK; pageCnt++)
	{
        /* If write mode is manual, */
        /* Program 512 byte page */
        NVMCTRL_PageWrite((uint32_t *)flash_data, (uint32_t)flashStartAddress);
        while(NVMCTRL_IsBusy()){}

        flash_data = flash_data + APP_PAGE_SIZE;
        flashStartAddress = flashStartAddress + APP_PAGE_SIZE;        
	}
}

static void APP_BankSwitch(void)
{
	/* wait until it is ready to accept a new command */
	while (NVMCTRL_IsBusy());
	
	/* execute the command BKSWRST (Bank swap and system reset) */
	NVMCTRL_BankSwap();
	
	/* wait until command done */
	while (NVMCTRL_IsBusy());    
    
	/* At the end of this command, code starts running from 0x00000 upon reset*/
}

//-----------------------------------------------------------------------------
static void APP_RunApplication(void)
{
	uint32_t msp = *(uint32_t *)(gApplicationStartAddr);
	uint32_t reset_vector = *(uint32_t *)(gApplicationStartAddr + 4);

	if (0xffffffff == msp)
    {
        return;
    }

	__set_MSP(msp);

	asm("bx %0"::"r" (reset_vector));
}
#endif

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;   
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
#ifdef _IS_EEPROM_EMULATION_SUPPORT            
            pEEPROM = aEepromData;
            
#endif
            ESF_PDI_Init();
#ifdef DEVELOPER_TEST_EN
#ifdef DIRECT_MODE
            test_direct_mode();
#else
            test_indirect_mode();
#endif
#endif
            /* EtherCAT Initialization after NVIC initialization */
            ESC_Init();
            MainInit();
#ifdef _IS_EEPROM_EMULATION_SUPPORT            
            Emulation_Init();
#endif
#if defined(ETHERCAT_USE_FOE)  
            BL_FOE_Application();
                
            bRunApplication = TRUE;
#endif                
            appData.state = APP_STATE_SERVICE_TASKS;
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {
            do
            {		
#if defined(ETHERCAT_USE_FOE)                
                if(APP_FW_GetDownloadStateFinished() == 1)
                {
                    APP_BankSwitch();
                    APP_RunApplication();
                }
#endif                
                MainLoop();

            } while (bRunApplication == TRUE);
            break;
        }

        /* The default state should never be executed. */
        default:
        {
            break;
        }
    }
}
/*******************************************************************************
 End of File
 */
