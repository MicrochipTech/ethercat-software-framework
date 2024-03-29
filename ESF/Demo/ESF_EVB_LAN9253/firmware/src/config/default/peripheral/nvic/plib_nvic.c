/*******************************************************************************
  NVIC PLIB Implementation

  Company:
    Microchip Technology Inc.

  File Name:
    plib_nvic.c

  Summary:
    NVIC PLIB Source File

  Description:
    None

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

#include "device.h"
#include "plib_nvic.h"


// *****************************************************************************
// *****************************************************************************
// Section: NVIC Implementation
// *****************************************************************************
// *****************************************************************************

void NVIC_Initialize( void )
{
    /* Priority 0 to 7 and no sub-priority. 0 is the highest priority */
    NVIC_SetPriorityGrouping( 0x04 );

    /* Enable NVIC Controller */
    __DMB();
    __enable_irq();

    /* Enable the interrupt sources and configure the priorities as configured
     * from within the "Interrupt Manager" of MHC. */
    NVIC_SetPriority(SysTick_IRQn, 7);
    NVIC_SetPriority(EIC_EXTINT_0_IRQn, 7);
    NVIC_EnableIRQ(EIC_EXTINT_0_IRQn);
    NVIC_SetPriority(EIC_EXTINT_1_IRQn, 7);
    NVIC_EnableIRQ(EIC_EXTINT_1_IRQn);
    NVIC_SetPriority(DMAC_0_IRQn, 7);
    NVIC_EnableIRQ(DMAC_0_IRQn);
    NVIC_SetPriority(DMAC_1_IRQn, 3);
    NVIC_EnableIRQ(DMAC_1_IRQn);
    NVIC_SetPriority(EIC_EXTINT_7_IRQn, 7);
    NVIC_EnableIRQ(EIC_EXTINT_7_IRQn);
    NVIC_SetPriority(QSPI_IRQn, 2);
    NVIC_EnableIRQ(QSPI_IRQn);



    return;
}
