/*******************************************************************************
  Direct Memory Access Controller (DMAC) PLIB

  Company
    Microchip Technology Inc.

  File Name
    plib_dmac.c

  Summary
    Source for DMAC peripheral library interface Implementation.

  Description
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

#include "plib_dmac.h"
#include "interrupts.h"
#include "LAN925x.h"
#include "ecatslv.h"
#include "ESC_Utils.h"
#include "../port/plib_port.h"

//extern GPIO_T_CPY PORT_PIN_PA23;
// *****************************************************************************
// *****************************************************************************
// Section: Global Data
// *****************************************************************************
// *****************************************************************************

#define DMAC_CHANNELS_NUMBER        2

#define DMAC_CRC_CHANNEL_OFFSET     0x20U

/* DMAC channels object configuration structure */
typedef struct
{
    uint8_t                inUse;
    DMAC_CHANNEL_CALLBACK  callback;
    uintptr_t              context;
    uint8_t                busyStatus;
} DMAC_CH_OBJECT ;

/* Initial write back memory section for DMAC */
static  dmac_descriptor_registers_t _write_back_section[DMAC_CHANNELS_NUMBER]    __ALIGNED(8);

/* Descriptor section for DMAC */
static  dmac_descriptor_registers_t  descriptor_section[DMAC_CHANNELS_NUMBER]    __ALIGNED(8);

/* DMAC Channels object information structure */
DMAC_CH_OBJECT dmacChannelObj[DMAC_CHANNELS_NUMBER];

// *****************************************************************************
// *****************************************************************************
// Section: DMAC PLib Interface Implementations
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
This function initializes the DMAC controller of the device.
********************************************************************************/

void DMAC_Initialize( void )
{
    DMAC_CH_OBJECT *dmacChObj = (DMAC_CH_OBJECT *)&dmacChannelObj[0];
    uint32_t channel = 0;

    /* Initialize DMAC Channel objects */
    for(channel = 0; channel < DMAC_CHANNELS_NUMBER; channel++)
    {
        dmacChObj->inUse = 0;
        dmacChObj->callback = NULL;
        dmacChObj->context = 0;
        dmacChObj->busyStatus = false;

        /* Point to next channel object */
        dmacChObj += 1;
    }

    /* Update the Base address and Write Back address register */
    DMAC_REGS->DMAC_BASEADDR = (uint32_t) descriptor_section;
    DMAC_REGS->DMAC_WRBADDR  = (uint32_t)_write_back_section;

    /* Update the Priority Control register */
    DMAC_REGS->DMAC_PRICTRL0 = DMAC_PRICTRL0_LVLPRI0(1) | DMAC_PRICTRL0_RRLVLEN0_Msk | DMAC_PRICTRL0_LVLPRI1(1) | DMAC_PRICTRL0_RRLVLEN1_Msk | DMAC_PRICTRL0_LVLPRI2(1) | DMAC_PRICTRL0_RRLVLEN2_Msk | DMAC_PRICTRL0_LVLPRI3(1) | DMAC_PRICTRL0_RRLVLEN3_Msk;

   /***************** Configure DMA channel 0 ********************/
   DMAC_REGS->CHANNEL[0].DMAC_CHCTRLA = DMAC_CHCTRLA_TRIGACT(2) | DMAC_CHCTRLA_TRIGSRC(84) | DMAC_CHCTRLA_THRESHOLD(0) | DMAC_CHCTRLA_BURSTLEN(0) ;

   descriptor_section[0].DMAC_BTCTRL = DMAC_BTCTRL_BLOCKACT_INT | DMAC_BTCTRL_BEATSIZE_BYTE | DMAC_BTCTRL_VALID_Msk | DMAC_BTCTRL_SRCINC_Msk ;

   DMAC_REGS->CHANNEL[0].DMAC_CHPRILVL = DMAC_CHPRILVL_PRILVL(0);

   dmacChannelObj[0].inUse = 1;

   DMAC_REGS->CHANNEL[0].DMAC_CHINTENSET = (DMAC_CHINTENSET_TERR_Msk | DMAC_CHINTENSET_TCMPL_Msk);


   /***************** Configure DMA channel 1 ********************/
   DMAC_REGS->CHANNEL[1].DMAC_CHCTRLA = DMAC_CHCTRLA_TRIGACT(2) | DMAC_CHCTRLA_TRIGSRC(83) | DMAC_CHCTRLA_THRESHOLD(0) | DMAC_CHCTRLA_BURSTLEN(0) ;

   descriptor_section[1].DMAC_BTCTRL = DMAC_BTCTRL_BLOCKACT_INT | DMAC_BTCTRL_BEATSIZE_BYTE | DMAC_BTCTRL_VALID_Msk | DMAC_BTCTRL_DSTINC_Msk ;

   DMAC_REGS->CHANNEL[1].DMAC_CHPRILVL = DMAC_CHPRILVL_PRILVL(1);

   dmacChannelObj[1].inUse = 1;

   DMAC_REGS->CHANNEL[1].DMAC_CHINTENSET = (DMAC_CHINTENSET_TERR_Msk | DMAC_CHINTENSET_TCMPL_Msk);

    /* Enable the DMAC module & Priority Level x Enable */
    DMAC_REGS->DMAC_CTRL = DMAC_CTRL_DMAENABLE_Msk | DMAC_CTRL_LVLEN0_Msk | DMAC_CTRL_LVLEN1_Msk | DMAC_CTRL_LVLEN2_Msk | DMAC_CTRL_LVLEN3_Msk;
    DMAC_REGS->DMAC_DBGCTRL = 1;
}

/*******************************************************************************
    This function schedules a DMA transfer on the specified DMA channel.
********************************************************************************/

bool DMAC_ChannelTransfer( DMAC_CHANNEL channel, const void *srcAddr, const void *destAddr, size_t blockSize )
{
    uint8_t beat_size = 0;
    bool returnStatus = false;

    if ((dmacChannelObj[channel].busyStatus == false) || (DMAC_REGS->CHANNEL[channel].DMAC_CHINTFLAG & (DMAC_CHINTENCLR_TCMPL_Msk | DMAC_CHINTENCLR_TERR_Msk)))
    {
        /* Clear the transfer complete flag */
        DMAC_REGS->CHANNEL[channel].DMAC_CHINTFLAG = DMAC_CHINTENCLR_TCMPL_Msk | DMAC_CHINTENCLR_TERR_Msk;

        dmacChannelObj[channel].busyStatus = true;

        /* Get a pointer to the module hardware instance */
        dmac_descriptor_registers_t *const dmacDescReg = &descriptor_section[channel];

       /*Set source address */
        if ( dmacDescReg->DMAC_BTCTRL & DMAC_BTCTRL_SRCINC_Msk)
        {
            dmacDescReg->DMAC_SRCADDR = (uint32_t) ((intptr_t)srcAddr + blockSize);
        }
        else
        {
            dmacDescReg->DMAC_SRCADDR = (uint32_t) (srcAddr);
        }

        /* Set destination address */
        if ( dmacDescReg->DMAC_BTCTRL & DMAC_BTCTRL_DSTINC_Msk)
        {
            dmacDescReg->DMAC_DSTADDR = (uint32_t) ((intptr_t)destAddr + blockSize);
        }
        else
        {
            if ((DMAC_REGS->DMAC_CRCCTRL & DMAC_CRCCTRL_CRCMODE_Msk) == DMAC_CRCCTRL_CRCMODE_DEFAULT)
            {
                dmacDescReg->DMAC_DSTADDR = (uint32_t) (destAddr);
            }
            else
            {
                /* Store the Value in the destination address as seed to the CRC engine in Memory modes */
                dmacDescReg->DMAC_DSTADDR = *((uint32_t *)destAddr);
            }
        }

        /*Calculate the beat size and then set the BTCNT value */
        beat_size = (dmacDescReg->DMAC_BTCTRL & DMAC_BTCTRL_BEATSIZE_Msk) >> DMAC_BTCTRL_BEATSIZE_Pos;

        /* Set Block Transfer Count */
        dmacDescReg->DMAC_BTCNT = blockSize / (1 << beat_size);

        /* Enable the channel */
        DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLA |= DMAC_CHCTRLA_ENABLE_Msk;

        /* Verify if Trigger source is Software Trigger */
        if ((((DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLA & DMAC_CHCTRLA_TRIGSRC_Msk) >> DMAC_CHCTRLA_TRIGSRC_Pos) == 0x00)
                                                && (((DMAC_REGS->CHANNEL[channel].DMAC_CHEVCTRL & DMAC_CHEVCTRL_EVIE_Msk)) != DMAC_CHEVCTRL_EVIE_Msk))
        {
            /* Trigger the DMA transfer */
            DMAC_REGS->DMAC_SWTRIGCTRL |= (1 << channel);
        }
        returnStatus = true;
    }

    return returnStatus;
}

/*******************************************************************************
    This function returns the status of the channel.
********************************************************************************/

bool DMAC_ChannelIsBusy ( DMAC_CHANNEL channel )
{
    if (dmacChannelObj[channel].busyStatus == true && ((DMAC_REGS->CHANNEL[channel].DMAC_CHINTFLAG & (DMAC_CHINTENCLR_TCMPL_Msk | DMAC_CHINTENCLR_TERR_Msk)) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

DMAC_TRANSFER_EVENT DMAC_ChannelTransferStatusGet(DMAC_CHANNEL channel)
{
    uint32_t chanIntFlagStatus = 0;
    DMAC_TRANSFER_EVENT event = DMAC_TRANSFER_EVENT_NONE;

    /* Get the DMAC channel interrupt status */
    chanIntFlagStatus = DMAC_REGS->CHANNEL[channel].DMAC_CHINTFLAG;

    if (chanIntFlagStatus & DMAC_CHINTENCLR_TCMPL_Msk)
    {
        event = DMAC_TRANSFER_EVENT_COMPLETE;
    }

    /* Verify if DMAC Channel Error flag is set */
    if (chanIntFlagStatus & DMAC_CHINTENCLR_TERR_Msk)
    {
        event = DMAC_TRANSFER_EVENT_ERROR;
    }

    return event;
}

/*******************************************************************************
    This function disables the specified DMAC channel.
********************************************************************************/

void DMAC_ChannelDisable ( DMAC_CHANNEL channel )
{
    /* Disable the DMA channel */
    DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLA &= (~DMAC_CHCTRLA_ENABLE_Msk);

    while((DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLA & DMAC_CHCTRLA_ENABLE_Msk) != 0);

    dmacChannelObj[channel].busyStatus=false;

}

uint16_t DMAC_ChannelGetTransferredCount( DMAC_CHANNEL channel )
{
    uint16_t transferredCount = descriptor_section[channel].DMAC_BTCNT;
    transferredCount -= _write_back_section[channel].DMAC_BTCNT;
    return(transferredCount);
}


/*******************************************************************************
    This function function allows a DMAC PLIB client to set an event handler.
********************************************************************************/
void DMAC_ChannelCallbackRegister( DMAC_CHANNEL channel, const DMAC_CHANNEL_CALLBACK callback, const uintptr_t context )
{
    dmacChannelObj[channel].callback = callback;
    dmacChannelObj[channel].context  = context;
}

/*******************************************************************************
    This function returns the current channel settings for the specified DMAC Channel
********************************************************************************/

DMAC_CHANNEL_CONFIG DMAC_ChannelSettingsGet (DMAC_CHANNEL channel)
{
    /* Get a pointer to the module hardware instance */
    dmac_descriptor_registers_t *const dmacDescReg = &descriptor_section[0];

    return (dmacDescReg[channel].DMAC_BTCTRL);
}

/*******************************************************************************
    This function changes the current settings of the specified DMAC channel.
********************************************************************************/

bool DMAC_ChannelSettingsSet (DMAC_CHANNEL channel, DMAC_CHANNEL_CONFIG setting)
{
    /* Get a pointer to the module hardware instance */
    dmac_descriptor_registers_t *const dmacDescReg = &descriptor_section[0];

    /* Disable the DMA channel */
    DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLA &= (~DMAC_CHCTRLA_ENABLE_Msk);

    /* Wait for channel to be disabled */
    while((DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLA & DMAC_CHCTRLA_ENABLE_Msk) != 0);

    /* Set the new settings */
    dmacDescReg[channel].DMAC_BTCTRL = setting;

    return true;
}

void DMAC_ChannelSuspend ( DMAC_CHANNEL channel )
{
    DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLB = (DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLB & ~DMAC_CHCTRLB_CMD_Msk) | DMAC_CHCTRLB_CMD_SUSPEND;
}

void DMAC_ChannelResume ( DMAC_CHANNEL channel )
{
    DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLB = (DMAC_REGS->CHANNEL[channel].DMAC_CHCTRLB & ~DMAC_CHCTRLB_CMD_Msk) | DMAC_CHCTRLB_CMD_RESUME;
}

/*******************************************************************************
    This function Disables the CRC engine and clears the CRC Control register
********************************************************************************/
void DMAC_CRCDisable( void )
{
    DMAC_REGS->DMAC_CRCCTRL = DMAC_CRCCTRL_RESETVALUE;
}

/*******************************************************************************
    This function sets the CRC Engine to use DMAC channel for calculating CRC.

    This Function has to be called before submitting DMA transfer request for
    the channel to calculate CRC
********************************************************************************/

void DMAC_ChannelCRCSetup(DMAC_CHANNEL channel, DMAC_CRC_SETUP CRCSetup)
{
    /* Disable CRC Engine and clear the CRC Control register before configuring */
    DMAC_CRCDisable();

    /* Store Initial Seed value only in default mode */
    if (CRCSetup.crc_mode == DMAC_CRC_MODE_DEFAULT)
    {
        DMAC_REGS->DMAC_CRCCHKSUM = CRCSetup.seed;
    }

    /* Setup the CRC engine to use DMA Channel.
     * CRC engine is enabled by writing the DMA channel to the DMAC_CRCCTRL_CRCSRC bits
     */
    DMAC_REGS->DMAC_CRCCTRL = (DMAC_CRCCTRL_CRCPOLY(CRCSetup.polynomial_type) | DMAC_CRCCTRL_CRCMODE(CRCSetup.crc_mode) | DMAC_CRCCTRL_CRCSRC((DMAC_CRC_CHANNEL_OFFSET + channel)));
}

/*******************************************************************************
    This function returns the Caclculated CRC Value.
********************************************************************************/

uint32_t DMAC_CRCRead( void )
{
    return (DMAC_REGS->DMAC_CRCCHKSUM);
}

/*******************************************************************************
    This function sets the CRC Engine in IO mode to get the data using the CPU
    which will be written in CRCDATAIN register. It internally calculates the
    Beat Size to be used based on the buffer length.

    This function returns the final CRC value once the computation is done
********************************************************************************/
uint32_t DMAC_CRCCalculate(void *buffer, uint32_t length, DMAC_CRC_SETUP CRCSetup)
{
    uint8_t beatSize    = DMAC_CRC_BEAT_SIZE_BYTE;
    uint32_t counter    = 0;
    uint8_t *buffer_8   = (uint8_t *)buffer;
    uint16_t *buffer_16 = (uint16_t *)buffer;
    uint32_t *buffer_32 = (uint32_t *)buffer;

    /* Calculate the beatsize to be used basd on buffer length */
    if ((length & 0x3U) == 0)
    {
        beatSize = DMAC_CRC_BEAT_SIZE_WORD;
        length = length >> 0x2U;
    }
    else if ((length & 0x1U) == 0)
    {
        beatSize = DMAC_CRC_BEAT_SIZE_HWORD;
        length = length >> 0x1U;
    }

    /* Disable CRC Engine and clear the CRC Control register before configuring */
    DMAC_CRCDisable();

    DMAC_REGS->DMAC_CRCCHKSUM = CRCSetup.seed;

    /* Setup the CRC engine to use IO Mode.
     * CRC engine is enabled by writing the IO mode to the DMAC_CRCCTRL_CRCSRC bits
     */
    DMAC_REGS->DMAC_CRCCTRL = (DMAC_CRCCTRL_CRCPOLY(CRCSetup.polynomial_type) | DMAC_CRCCTRL_CRCBEATSIZE(beatSize) | DMAC_CRCCTRL_CRCSRC_IO );

    /* Start the CRC calculation by writing the buffer into CRCDATAIN register based
     * on the beat size configured
     */
    for (counter = 0; counter < length; counter++)
    {
        if (beatSize == DMAC_CRC_BEAT_SIZE_BYTE)
        {
            DMAC_REGS->DMAC_CRCDATAIN = buffer_8[counter];
        }
        else if (beatSize == DMAC_CRC_BEAT_SIZE_HWORD)
        {
            DMAC_REGS->DMAC_CRCDATAIN = buffer_16[counter];
        }
        else if (beatSize == DMAC_CRC_BEAT_SIZE_WORD)
        {
            DMAC_REGS->DMAC_CRCDATAIN = buffer_32[counter];
        }

        /* Wait until CRC Calculation is completed for the current data in CRCDATAIN */
        while (!(DMAC_REGS->DMAC_CRCSTATUS & DMAC_CRCSTATUS_CRCBUSY_Msk))
        {
            ;
        }

        /* Clear the busy bit */
        DMAC_REGS->DMAC_CRCSTATUS = DMAC_CRCSTATUS_CRCBUSY_Msk;
    }

    /* Return the final CRC calculated for the entire buffer */
    return (DMAC_REGS->DMAC_CRCCHKSUM);
}

//*******************************************************************************
//    Functions to handle DMA interrupt events.
//*******************************************************************************
void _DMAC_interruptHandler(uint8_t channel)
{
    DMAC_CH_OBJECT  *dmacChObj = NULL;
    volatile uint32_t chanIntFlagStatus = 0;
    DMAC_TRANSFER_EVENT event   = DMAC_TRANSFER_EVENT_ERROR;

    dmacChObj = (DMAC_CH_OBJECT *)&dmacChannelObj[channel];

    /* Get the DMAC channel interrupt status */
    chanIntFlagStatus = DMAC_REGS->CHANNEL[channel].DMAC_CHINTFLAG;

    /* Verify if DMAC Channel Transfer complete flag is set */
    if (chanIntFlagStatus & DMAC_CHINTENCLR_TCMPL_Msk)
    {
        /* Clear the transfer complete flag */
        DMAC_REGS->CHANNEL[channel].DMAC_CHINTFLAG = DMAC_CHINTENCLR_TCMPL_Msk;

        event = DMAC_TRANSFER_EVENT_COMPLETE;
        dmacChObj->busyStatus = false;//toggle
    }

    /* Verify if DMAC Channel Error flag is set */
    if (chanIntFlagStatus & DMAC_CHINTENCLR_TERR_Msk)
    {
        /* Clear transfer error flag */
        DMAC_REGS->CHANNEL[channel].DMAC_CHINTFLAG = DMAC_CHINTENCLR_TERR_Msk;

        event = DMAC_TRANSFER_EVENT_ERROR;
        dmacChObj->busyStatus = false;
    }

    /* Execute the callback function */
    if (dmacChObj->callback != NULL)
    {
        dmacChObj->callback (event, dmacChObj->context);
    }
}

void DMAC_0_Handler( void )
{
    //MCHP_ESF_GPIO_TOGGLE(PORT_PIN_PA23);
   _DMAC_interruptHandler(0);
}

void DMAC_1_Handler( void )
{
   
   _DMAC_interruptHandler(1);
    //MCHP_ESF_GPIO_TOGGLE(PORT_PIN_PA23);
}

