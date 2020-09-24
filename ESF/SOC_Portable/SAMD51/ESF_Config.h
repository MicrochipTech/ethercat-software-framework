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
 * The PDI can be as SPI, QSPI etc.,
 * All the ESF Hooks API's work based on the PDI selection
 */

#if (ESF_PDI == SPI || ESF_PDI == SQI)
/*
 * Configuration parameter for frequency selection
 * Frequency value should be given in MHz.
 */
#define ESF_PDI_FREQUENCY 20
#define IS_SUPPORT_DUMMY_CYCLE

#endif

#if (ESF_PDI == SPI)

#ifdef INDIRECT_MODE
#define _IS_SPI_INDIRECT_MODE_ACCESS				1
#endif

#ifdef DIRECT_MODE
#define _IS_SPI_DIRECT_MODE_ACCESS                  1
#endif

#ifdef BECKHOFF_MODE
#define _IS_SPI_BECKHOFF_MODE_ACCESS				1
#endif

#if _IS_SPI_DIRECT_MODE_ACCESS
/* LAN9253 EVB Does not support WAIT ACK, So WAIT_ACK mode not supported */

/* Dummy cycle integration is enabled by default
 * The dummy cycle calculated based on the selected frequency
 * The PDI frequency can be selected through ESF_PDI_FREQUENCY
 */
#endif /* _IS_SPI_DIRECT_MODE_ */

#elif (ESF_PDI == SQI)

#ifdef INDIRECT_MODE
#define _IS_SQI_INDIRECT_MODE_ACCESS				1
#endif

#ifdef DIRECT_MODE
#define _IS_SQI_DIRECT_MODE_ACCESS                  1
#endif

#if _IS_SQI_DIRECT_MODE_ACCESS
/* LAN9253 EVB Does not support WAIT ACK, So WAIT_ACK mode not supported */

/* Dummy cycle integration is enabled by default
 * The dummy cycle calculated based on the selected frequency
 * The PDI frequency can be selected through ESF_PDI_FREQUENCY
 */
#endif /* _IS_SPI_DIRECT_MODE_ */

#endif	/* ESF_PDI */

/* EEPROM Emulation Feature can be enabled by uncommenting below macro */
//#define _IS_EEPROM_EMULATION_SUPPORT               1

/* Cycle Time measurement for PDI */
#define MEASURE_CYCLE_TIME

/* To Do Developer test and enable Developer test source file */
//#define DEVELOPER_TEST_EN

#endif /* ESF_CONFIG_H */