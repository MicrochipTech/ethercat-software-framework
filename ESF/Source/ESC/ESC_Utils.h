/*******************************************************************************
 ESC utilities header file

  Company:
    Microchip Technology Inc.

  File Name:
    ESC_Utils.h

  Description:
    This file contains the Common used macros and API's prototypes
    which are used in ESC_Utils.c, Drivers.c and LAN925x.c 
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


#ifndef ESC_UTILS_H_
#define ESC_UTILS_H_

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "ecat_def.h"

/* SPI/SQI Clock Period in nano seconds */
#define CLK_PERIOD_1MHZ		(1000)

// Internal Access Time (IAT) in Nano seconds (ns) based on Hardware Design
#define IAT_NULL		0
#define IAT_BYRD		360
#define IAT_BYWR		265
#define IAT_DWRD		600
#define IAT_DWDWR		505

/* Global Data Types */
#define CMD_SQI_SETCFG                              0x01
#define CMD_SERIAL_READ                             0x03
#define CMD_FAST_READ                               0x0B
#define CMD_DUAL_OP_READ                            0x3B
#define CMD_DUAL_IO_READ                            0xBB
#define CMD_QUAD_OP_READ                            0x6B
#define CMD_QUAD_IO_READ                            0xEB
#define CMD_SERIAL_WRITE                            0x02
#define CMD_DUAL_DATA_WRITE                         0x32
#define CMD_DUAL_ADDR_DATA_WRITE                    0xB2
#define CMD_QUAD_DATA_WRITE                         0x62
#define CMD_QUAD_ADDR_DATA_WRITE                    0xE2
#define CMD_ENABLE_SQI                              0x38
#define CMD_RESET_SQI                               0xFF

#define CMD_SPI_FAST_READ_DUMMY                     1

#define QSPI_SPI_ONE_BYTE_CLK_COUNT                 8
#define QSPI_SQI_ONE_BYTE_CLK_COUNT                 2

#define ESC_WRITE_BYTE                              0x80
#define ESC_READ_BYTE                               0xC0
#define ESC_CSR_BUSY                                0x80

#define SETCFG_MAX_DATA_BYTES                       39
#define ONE_BYTE_MAX_XFR_LEN                        127

#define WAIT_STATE_BYTE                             0xFF
#define READ_TERMINATION_BYTE                       0xFF

#define DWORD_LENGTH                                4

/* Beckhoff SPI Commands */
#define ESC_RD                                      0x02
#define ESC_WR                                      0x04
#define ESC_RD_WAIT_STATE                           0x03

typedef enum _SPI_TYPE {
    SINGLE_SPI = 1,
    DUAL_SPI = 2,
    QUAD_SPI = 4,
} SPI_TYPE;

typedef enum _SET_CFG_DATA_BYTE_ORDER {
    SPI_READ_INITIAL_OFFSET = 0,
    SPI_READ_INTRA_DWORD_OFFSET,
    SPI_READ_INTER_DWORD_OFFSET,
    SPI_FASTREAD_INITIAL_OFFSET = 3,
    SPI_FASTREAD_INTRA_DWORD_OFFSET,
    SPI_FASTREAD_INTER_DWORD_OFFSET,
    SDOR_INITIAL_OFFSET = 6,
    SDOR_INTRA_DWORD_OFFSET,
    SDOR_INTER_DWORD_OFFSET,
    SDIOR_INITIAL_OFFSET = 9,
    SDIOR_INTRA_DWORD_OFFSET,
    SDIOR_INTER_DWORD_OFFSET,
    SQOR_INITIAL_OFFSET = 12,
    SQOR_INTRA_DWORD_OFFSET,
    SQOR_INTER_DWORD_OFFSET,
    SQIOR_INITIAL_OFFSET = 15,
    SQIOR_INTRA_DWORD_OFFSET,
    SQIOR_INTER_DWORD_OFFSET,
    SPI_WRITE_INITIAL_OFFSET = 18,
    SPI_WRITE_INTRA_DWORD_OFFSET,
    SPI_WRITE_INTER_DWORD_OFFSET,
    SDDW_INITIAL_OFFSET = 21,
    SDDW_INTRA_DWORD_OFFSET,
    SDDW_INTER_DWORD_OFFSET,
    SDADW_INITIAL_OFFSET = 24,
    SDADW_INTRA_DWORD_OFFSET,
    SDADW_INTER_DWORD_OFFSET,
    SQDW_INITIAL_OFFSET = 27,
    SQDW_INTRA_DWORD_OFFSET,
    SQDW_INTER_DWORD_OFFSET,
    SQADW_INITIAL_OFFSET = 30,
    SQADW_INTRA_DWORD_OFFSET,
    SQADW_INTER_DWORD_OFFSET,
    SQI_FASTREAD_INITIAL_OFFSET = 33,
    SQI_FASTREAD_INTRA_DWORD_OFFSET,
    SQI_FASTREAD_INTER_DWORD_OFFSET,
    SQI_WRITE_INITIAL_OFFSET = 36,
    SQI_WRITE_INTRA_DWORD_OFFSET,
    SQI_WRITE_INTER_DWORD_OFFSET,
} SET_CFG_DATA_BYTE_ORDER_T;

extern UINT8 gau8DummyCntArr[SETCFG_MAX_DATA_BYTES];

UINT8 GetDummyBytesRequired (UINT8 u8SPIType, UINT16 u16IAT, UINT16 u16SPIClkCount, UINT16 u16SPIClkPeriodns);
void PDI_IRQ_Interrupt();
void PDI_Init_SYNC_Interrupts();
void ESC_Init();

#endif /* ESC_UTILS_H_ */