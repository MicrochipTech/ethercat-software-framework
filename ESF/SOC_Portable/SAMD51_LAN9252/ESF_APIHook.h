/*******************************************************************************
 ESC API Hook header file

  Company:
    Microchip Technology Inc.

  File Name:
    ESC_APIHook.h

  Description:
    This file contains the ESF Hooks that are used in framework
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


#ifndef ESF_API_HOOK_H_
#define ESF_API_HOOK_H_

#include "ESF_Config.h"

#define MCHP_ESF_PDI_EIRQ_INIT()						

#define MCHP_ESF_PDI_INIT()								ESF_PDI_Init()
#define MCHP_ESF_IS_PDI_FUNCTIONAL(pdata)				ESC_BYTE_TEST_Register_Read(pdata)

#if (ESF_PDI == SPI)
#ifdef _IS_SPI_INDIRECT_MODE_ACCESS
/* SPI Indirect mode Access */
#define MCHP_ESF_PDI_WRITE(addr, pdata, len)            LAN9252SPI_Write(addr, pdata, len)
#define MCHP_ESF_PDI_READ(addr, pdata, len)             LAN9252SPI_Read(addr, pdata, len)
#define MCHP_ESF_PDI_FASTREAD(addr, pdata, len)         LAN9252SPI_FastRead(addr, pdata, len)
#define MCHP_ESF_PDI_READ_PDRAM(pdata, addr, len)		LAN9252SPI_ReadPDRAM(pdata, addr, len)
#define MCHP_ESF_PDI_FASTREAD_PDRAM(pdata, addr, len)	LAN9252SPI_FastReadPDRAM(pdata, addr, len)
#define MCHP_ESF_PDI_WRITE_PDRAM(pdata, addr, len)		LAN9252SPI_WritePDRAM(pdata, addr, len)

#elif _IS_SPI_DIRECT_MODE_ACCESS
/* SPI Direct mode Access */
#define MCHP_ESF_PDI_WRITE(addr, pdata, len)            LAN9253SPI_Write (addr, pdata, len)
#define MCHP_ESF_PDI_READ(addr, pdata, len)             LAN9253SPI_Read (addr, pdata, len)
#define MCHP_ESF_PDI_FASTREAD(addr, pdata, len)			LAN9253SPI_FastRead (addr, pdata, len)
#define MCHP_ESF_PDI_READ_PDRAM(pdata, addr, len)		
#define MCHP_ESF_PDI_FASTREAD_PDRAM(pdata, addr, len)	
#define MCHP_ESF_PDI_WRITE_PDRAM(pdata, addr, len)		

#else
/* SPI Beckhoff mode Access */
#define MCHP_ESF_PDI_WRITE(addr, pdata, len)            BeckhoffSPI_Write (addr, pdata, len)
#define MCHP_ESF_PDI_READ(addr, pdata, len)				BeckhoffSPI_Read (addr, pdata, len)
#define MCHP_ESF_PDI_FASTREAD(addr, pdata)			
#define MCHP_ESF_PDI_READ_PDRAM(pdata, addr, len)		
#define MCHP_ESF_PDI_FASTREAD_PDRAM(pdata, addr, len)	
#define MCHP_ESF_PDI_WRITE_PDRAM(pdata, addr, len)
#endif
#elif (ESF_PDI == SQI)

#ifdef _IS_SQI_INDIRECT_MODE_ACCESS
/* SQI Indirect mode Access */
#define MCHP_ESF_PDI_WRITE(addr, pdata, len)            LAN9252SQI_Write(addr, pdata, len)
#define MCHP_ESF_PDI_READ(addr, pdata, len)             LAN9252SQI_Read(addr, pdata, len)
#define MCHP_ESF_PDI_FASTREAD(addr, pdata, len)         
#define MCHP_ESF_PDI_READ_PDRAM(pdata, addr, len)		LAN9252SQI_ReadPDRAM(pdata, addr, len)
#define MCHP_ESF_PDI_FASTREAD_PDRAM(pdata, addr, len)	
#define MCHP_ESF_PDI_WRITE_PDRAM(pdata, addr, len)		LAN9252SQI_WritePDRAM(pdata, addr, len)

#elif _IS_SQI_DIRECT_MODE_ACCESS
/* SQI Direct mode Access */
#define MCHP_ESF_PDI_WRITE(addr, pdata, len)            LAN9253SQI_Write (addr, pdata, len)
#define MCHP_ESF_PDI_READ(addr, pdata, len)             LAN9253SQI_Read (addr, pdata, len)
#define MCHP_ESF_PDI_FASTREAD(addr, pdata, len)			
#define MCHP_ESF_PDI_READ_PDRAM(pdata, addr, len)		
#define MCHP_ESF_PDI_FASTREAD_PDRAM(pdata, addr, len)	
#define MCHP_ESF_PDI_WRITE_PDRAM(pdata, addr, len)		

#endif
#endif

/* Timer functions */

#define MCHP_ESF_PDI_TIMER_CONFIG()						PDI_Timer_Interrupt()
#define MCHP_ESF_PDI_GET_TIMER()						PDI_GetTimer()
#define MCHP_ESF_PDI_CLR_TIMER()						PDI_ClearTimer()
#define MCHP_ESF_PDI_START_TIMER()						start_timer()
#define MCHP_ESF_PDI_STOP_TIMER()						stop_timer()

#define MCHP_ESF_GPIO_SET(pin)                          PORT_PinSet(pin)
#define MCHP_ESF_GPIO_CLEAR(pin)                        PORT_PinClear(pin)
#define MCHP_ESF_GPIO_TOGGLE(pin)                       PORT_PinToggle(pin)
#define MCHP_ESF_GPIO_OUTPUT_EN(pin)                    PORT_PinOutputEnable(pin)

#define MCHP_ESF_CRITICAL_SECTION_ENTER()				CRITICAL_SECTION_ENTER()
#define MCHP_ESF_CRITICAL_SECTION_LEAVE()				CRITICAL_SECTION_LEAVE()

#define MCHP_ESF_IRQ_REGISTER_CB(pin, callback)			EIC_CallbackRegister (pin, callback, 0)

#endif /* ESF_API_HOOK_H_ */