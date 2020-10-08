/*******************************************************************************
 ESF configurations header file

  Company:
    Microchip Technology Inc.

  File Name:
    ESF_Config.h

  Description:
    This file provides the configuration options for ESF (Framework)
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


#ifndef ESF_CONFIG_H
#define ESF_CONFIG_H

/*
 * ESF_PDI - EtherCAT Software Framework Process Data Interface
 * The PDI can be selected as per the user.
 * The PDI can be as SPI, QSPI & HBI, etc.,
 * All the ESF Hooks API's work based on the PDI selection
 */

#ifdef DIRECT_MODE

#define HBI_DIRECT_MODE

//#define _IS_HBI_DEMUX_8BIT_SUPPORT
#define _IS_HBI_DEMUX_16BIT_SUPPORT

#endif

#ifdef DEVELOPER_TEST_EN

/* Enables the ESC init test code, Verify Byte order registers */
//#define ESC_INIT_TEST

/* Debug HBI Direct mode, Uncomment to enable */
//#define DEBUG_HBI_DIRECT_MODE

/* Enables the ESC PDRAM test code */
//#define ESC_PDRAM_TEST

/* Enables the PDI Access test code */
//#define PDI_ACCESS_TEST

/* Enables the ESC Access test code, read & write */
//#define ESC_ACCESS_TEST
    
#endif

/* EEPROM Emulation Feature can be enabled by uncommenting below macro */
//#define _IS_EEPROM_EMULATION_SUPPORT               1

/* Cycle Time measurement for PDI */
#define MEASURE_CYCLE_TIME

#endif /* ESF_CONFIG_H */