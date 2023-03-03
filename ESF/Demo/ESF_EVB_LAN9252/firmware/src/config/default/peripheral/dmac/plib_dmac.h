/*******************************************************************************
  DMAC Peripheral Library Interface Header File

  Company:
    Microchip Technology Inc.

  File Name:
    plib_dmac.h

  Summary:
    DMAC peripheral library interface.

  Description:
    This file defines the interface to the DMAC peripheral library. This
    library provides access to and control of the DMAC controller.

  Remarks:
    None.

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
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
// DOM-IGNORE-END

#ifndef PLIB_DMAC_H    // Guards against multiple inclusion
#define PLIB_DMAC_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section lists the other files that are included in this file.
*/
#include <device.h>
#include <string.h>
#include <stdbool.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************

typedef enum
{
    /* DMAC Channel 0 */
    DMAC_CHANNEL_0 = 0,
    /* DMAC Channel 1 */
    DMAC_CHANNEL_1 = 1,
} DMAC_CHANNEL;

typedef enum
{
    /* No event */
    DMAC_TRANSFER_EVENT_NONE = 0,

    /* Data was transferred successfully. */
    DMAC_TRANSFER_EVENT_COMPLETE = 1,

    /* Error while processing the request */
    DMAC_TRANSFER_EVENT_ERROR = 2

} DMAC_TRANSFER_EVENT;

typedef enum
{
    /* CRC16 (CRC-CCITT): 0x1021 */
    DMAC_CRC_TYPE_16 = 0x0,

    /* CRC32 (IEEE 802.3): 0x04C11DB7*/
    DMAC_CRC_TYPE_32 = 0x1

} DMAC_CRC_POLYNOMIAL_TYPE;

typedef enum
{
    /* Byte bus access. */
    DMAC_CRC_BEAT_SIZE_BYTE     = 0x0,

    /* Half-word bus access. */
    DMAC_CRC_BEAT_SIZE_HWORD    = 0x1,

    /* Word bus access. */
    DMAC_CRC_BEAT_SIZE_WORD     = 0x2

} DMAC_CRC_BEAT_SIZE;

typedef enum
{
    /* Default Operating mode */
    DMAC_CRC_MODE_DEFAULT           = 0x0,

    /* Reserved */
    DMAC_CRC_MODE_RESERVED          = 0x1,

    /* Memory CRC monitor operating mode */
    DMAC_CRC_MODE_MEMORY_MONITOR    = 0x2,

    /* Memory CRC generation operating mode */
    DMAC_CRC_MODE_MEMORY_GEN        = 0x3

} DMAC_CRC_MODE;

typedef struct
{
    /* CRCCTRL[CRCPOLY]: Polynomial Type (CRC16, CRC32) */
    DMAC_CRC_POLYNOMIAL_TYPE polynomial_type;

    /* CRCCTRL[CRCMODE]: CRC Mode. Used with DMA Channel only.*/
    DMAC_CRC_MODE crc_mode;

    /* CRCCHKSUM: Initial Seed for calculating the CRC */
    uint32_t seed;
} DMAC_CRC_SETUP;

typedef uint32_t DMAC_CHANNEL_CONFIG;

typedef void (*DMAC_CHANNEL_CALLBACK) (DMAC_TRANSFER_EVENT event, uintptr_t contextHandle);
void DMAC_ChannelCallbackRegister (DMAC_CHANNEL channel, const DMAC_CHANNEL_CALLBACK eventHandler, const uintptr_t contextHandle);

void DMAC_Initialize( void );
bool DMAC_ChannelTransfer (DMAC_CHANNEL channel, const void *srcAddr, const void *destAddr, size_t blockSize);
bool DMAC_ChannelIsBusy ( DMAC_CHANNEL channel );
void DMAC_ChannelDisable ( DMAC_CHANNEL channel );
DMAC_CHANNEL_CONFIG  DMAC_ChannelSettingsGet ( DMAC_CHANNEL channel );
bool  DMAC_ChannelSettingsSet ( DMAC_CHANNEL channel, DMAC_CHANNEL_CONFIG settings );
uint16_t DMAC_ChannelGetTransferredCount( DMAC_CHANNEL channel );

void DMAC_ChannelCRCSetup(DMAC_CHANNEL channel, DMAC_CRC_SETUP CRCSetup);
uint32_t DMAC_CRCRead( void );

uint32_t DMAC_CRCCalculate(void *buffer, uint32_t length, DMAC_CRC_SETUP CRCSetup);

void DMAC_CRCDisable( void );
void DMAC_ChannelSuspend ( DMAC_CHANNEL channel );
void DMAC_ChannelResume ( DMAC_CHANNEL channel );
DMAC_TRANSFER_EVENT DMAC_ChannelTransferStatusGet(DMAC_CHANNEL channel);

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END

#endif //PLIB_DMAC_H
