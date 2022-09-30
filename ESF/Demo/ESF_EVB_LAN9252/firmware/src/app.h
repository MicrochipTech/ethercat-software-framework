/*******************************************************************************
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
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

#ifndef _APP_H_
#define _APP_H_

/*****************************************************************************
 *****************************************************************************
 Section: Included Files
 *****************************************************************************
 *****************************************************************************/

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "configuration.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

/* This Version is application version and
 * gets updated whenever there is application change
 */
#define APP_FW_VERSION  0x0123U  /* V1.23 */

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************
// ATSAMD51 BANK B start address 
#define APP_NVM_BANKB_START_ADDRESS     0x40000
// Number of pages for BANK B for the device ATSAM D51    
#define APP_FLASH_PAGES_BANKB           FLASH_PAGE_SIZE/2

// Total size for the BANK B 
#define APP_MAX_NVM_BANK_SIZE           0x40000
    
// Bootloader space size reserved     
#define APP_BOOTLOADER_SIZE             0
// Application Page size
#define APP_PAGE_SIZE                   FLASH_PAGE_SIZE
#define APP_ERASE_BLOCK_SIZE            8192
#define APP_PAGES_IN_ERASE_BLOCK        APP_ERASE_BLOCK_SIZE/APP_PAGE_SIZE

#define APP_DATA_SIZE                   APP_ERASE_BLOCK_SIZE
#define WORDS(x)                        ((int)((x) / sizeof(uint32_t)))   

// This define should be based on current firmware and mode
#if DIRECT_MODE
#define FLASH_EEPROM_START_ADDRESS      0x09E4
#else
#define FLASH_EEPROM_START_ADDRESS      0x09FC
#endif
    
#if _IS_EEPROM_EMULATION_SUPPORT
uint8_t CalculateCRC8(uint8_t* pData, int length);
void APP_FlashEEPROMUpdate(uint8_t *flash_data, uint8_t checksum);
UINT16 HW_EepromReload(void);
void Emulation_Init();
#endif
// *****************************************************************************
/* Application states

  Summary:
    Application states enumeration

  Description:
    This enumeration defines the valid application states.  These states
    determine the behavior of the application at various times.
*/

typedef enum
{
    /* Application's state machine's initial state. */
    APP_STATE_INIT=0,
    APP_STATE_SERVICE_TASKS,
    /* TODO: Define states used by the application state machine. */

} APP_STATES;


// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    Application strings and buffers are be defined outside this structure.
 */

typedef struct
{
    /* The application's current state */
    APP_STATES state;

    /* TODO: Define any additional data used by the application. */

} APP_DATA;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************
/* These routines are called by drivers when certain events occur.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
     MPLAB Harmony application initialization routine.

  Description:
    This function initializes the Harmony application.  It places the
    application in its initial state and prepares it to run so that its
    APP_Tasks function can be called.

  Precondition:
    All other system initialization routines should be called before calling
    this routine (in "SYS_Initialize").

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Initialize();
    </code>

  Remarks:
    This routine must be called from the SYS_Initialize function.
*/

void APP_Initialize ( void );


/*******************************************************************************
  Function:
    void APP_Tasks ( void )

  Summary:
    MPLAB Harmony Demo application tasks function

  Description:
    This routine is the Harmony Demo application's tasks function.  It
    defines the application's state machine and core logic.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Tasks();
    </code>

  Remarks:
    This routine must be called from SYS_Tasks() routine.
 */

void APP_Tasks( void );

/*******************************************************************************
  Function:
void APP_FlashWrite( UINT32 startAddress, UINT8 *flash_data )

  Summary:
    MPLAB Harmony NVM write  application function

  Description:
    This routine is used to write the flash data to the specific BANK address 
    location. This routine writes 8192 bytes at a time.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this.

  Parameters:
    None.

  Returns:
    None.

  Remarks:
    This routine is called from the slave stack sample application FoE write
    function.
 */
void APP_FlashWrite( uint32_t startAddress, uint8_t *flash_data );

void EtherCAT_QSPI_CallbackRegistration(void);

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* _APP_H_ */
/*******************************************************************************
 End of File
 */

