/*******************************************************************************
  SYS PORTS Static Functions for PORTS System Service

  Company:
    Microchip Technology Inc.

  File Name:
    plib_pio.c

  Summary:
    PIO function implementations for the PIO PLIB.

  Description:
    The PIO PLIB provides a simple interface to manage peripheral
    input-output controller.

*******************************************************************************/

//DOM-IGNORE-BEGIN
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
//DOM-IGNORE-END

#include "plib_pio.h"
#include "ESF_Config.h"

#define PIO_MAX_NUM_OF_CHANNELS     5

/* Array to store callback objects of each configured interrupt */
PIO_PIN_CALLBACK_OBJ portPinCbObj[0 + 3 + 0 + 0 + 0];

/* Array to store number of interrupts in each PORT Channel + previous interrupt count */
uint8_t portNumCb[PIO_MAX_NUM_OF_CHANNELS + 1] = {0, 0, 3, 3, 3, 3};


/******************************************************************************
  Function:
    PIO_Initialize ( void )

  Summary:
    Initialize the PIO library.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_Initialize ( void )
{
#ifdef _IS_HBI_DEMUX_8BIT_SUPPORT
    /************************ PIO A Initialization ************************/
    /* PORTA Peripheral Function Selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_ABCDSR[0]= 0x0;
    ((pio_registers_t*)PIO_PORT_A)->PIO_ABCDSR[1]= 0xc0000;
    /* PORTA PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_A)->PIO_PDR = 0xc0000;
    /* Disable interrupts */
    ((pio_registers_t*)PIO_PORT_A)->PIO_IDR = 0xc0000;
    ((pio_registers_t*)PIO_PORT_A)->PIO_PER = ~0xc0000;
    ((pio_registers_t*)PIO_PORT_A)->PIO_MDDR = 0xFFFFFFFF;
    /* PORTA Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_PUDR = ~0xc0000;
    ((pio_registers_t*)PIO_PORT_A)->PIO_PUER = 0xc0000;
    /* PORTA Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTA Output Write Enable */
    ((pio_registers_t*)PIO_PORT_A)->PIO_OWER = PIO_OWER_Msk;
    /* PORTA Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_A)->PIO_OER = 0x0;
    ((pio_registers_t*)PIO_PORT_A)->PIO_ODR = ~0x0;
    /* PORTA Initial state High */
    ((pio_registers_t*)PIO_PORT_A)->PIO_ODSR = 0x0;
    /* PORTA drive control */
    ((pio_registers_t*)PIO_PORT_A)->PIO_DRIVER = 0x0;
    
    /************************ PIO C Initialization ************************/
    /* PORTC Peripheral Function Selection */
    ((pio_registers_t*)PIO_PORT_C)->PIO_ABCDSR[0]= 0x0;
    ((pio_registers_t*)PIO_PORT_C)->PIO_ABCDSR[1]= 0x0;
    /* PORTC PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_C)->PIO_PDR = 0xfffc69ff;
    ((pio_registers_t*)PIO_PORT_C)->PIO_PER = ~0xfffc69ff;
    /* Disable interrupts */
    ((pio_registers_t*)PIO_PORT_C)->PIO_IDR = 0xfffc69ff;
    ((pio_registers_t*)PIO_PORT_C)->PIO_MDDR = 0xFFFFFFFF;
    /* PORTC Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_C)->PIO_PUDR = ~0xfffc69ff;
    ((pio_registers_t*)PIO_PORT_C)->PIO_PUER = 0xfffc69ff;
    /* PORTC Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_C)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTC Output Write Enable */
    ((pio_registers_t*)PIO_PORT_C)->PIO_OWER = PIO_OWER_Msk;
    /* PORTC Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_C)->PIO_OER = 0x0;
    ((pio_registers_t*)PIO_PORT_C)->PIO_ODR = ~0x0;
    /* PORTC Initial state High */
    ((pio_registers_t*)PIO_PORT_C)->PIO_ODSR = 0x0;
    /* PORTC drive control */
    ((pio_registers_t*)PIO_PORT_C)->PIO_DRIVER = 0x0;
#endif
    /************************ PIO B Initialization ************************/
    /* PORTB Additional interrupt mode Enable */
    ((pio_registers_t*)PIO_PORT_B)->PIO_AIMER = 0x7;
    ((pio_registers_t *)PIO_PORT_B)->PIO_ESR = 0x0;
	((pio_registers_t *)PIO_PORT_B)->PIO_LSR = 0x0;
	((pio_registers_t *)PIO_PORT_B)->PIO_FELLSR = 0x0;
	((pio_registers_t *)PIO_PORT_B)->PIO_REHLSR = 0x0;
    /* PORTB Interrupt Status Clear */
    ((pio_registers_t*)PIO_PORT_B)->PIO_ISR;
    /* PORTB system level interrupt will be enabled by NVIC Manager */
    /* PORTB module level Interrupt for every pin has to be enabled by user
       by calling PIO_PinInterruptEnable() API dynamically as and when needed*/
    /* PORTB drive control */
    ((pio_registers_t*)PIO_PORT_B)->PIO_DRIVER = 0x0;

#ifdef _IS_HBI_DEMUX_16BIT_SUPPORT
    /************************ PIO A Initialization ************************/
    /* PORTA Peripheral Function Selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_ABCDSR[0]= 0x0;
    ((pio_registers_t*)PIO_PORT_A)->PIO_ABCDSR[1]= 0xc0000;
    /* PORTA PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_A)->PIO_PDR = 0xd8000;
    /* Disable interrupts */
    ((pio_registers_t*)PIO_PORT_A)->PIO_IDR = 0xd8000;
    ((pio_registers_t*)PIO_PORT_A)->PIO_PER = ~0xd8000;
    ((pio_registers_t*)PIO_PORT_A)->PIO_MDDR = 0xFFFFFFFF;
    /* PORTA Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_PUDR = ~0xd8000;
    ((pio_registers_t*)PIO_PORT_A)->PIO_PUER = 0xd8000;
    /* PORTA Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTA Output Write Enable */
    ((pio_registers_t*)PIO_PORT_A)->PIO_OWER = PIO_OWER_Msk;
    /* PORTA Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_A)->PIO_OER = 0x0;
    ((pio_registers_t*)PIO_PORT_A)->PIO_ODR = ~0x0;
    /* PORTA Initial state High */
    ((pio_registers_t*)PIO_PORT_A)->PIO_ODSR = 0x0;
    /* PORTA drive control */
    ((pio_registers_t*)PIO_PORT_A)->PIO_DRIVER = 0x0;

    /************************ PIO C Initialization ************************/
    /* PORTC Peripheral Function Selection */
    ((pio_registers_t*)PIO_PORT_C)->PIO_ABCDSR[0]= 0x0;
    ((pio_registers_t*)PIO_PORT_C)->PIO_ABCDSR[1]= 0x0;
    /* PORTC PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_C)->PIO_PDR = 0xfffc69ff;
    ((pio_registers_t*)PIO_PORT_C)->PIO_PER = ~0xfffc69ff;
    /* Disable interrupts */
    ((pio_registers_t*)PIO_PORT_C)->PIO_IDR = 0xfffc69ff;
    ((pio_registers_t*)PIO_PORT_C)->PIO_MDDR = 0xFFFFFFFF;
    /* PORTC Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_C)->PIO_PUDR = ~0xfffc69ff;
    ((pio_registers_t*)PIO_PORT_C)->PIO_PUER = 0xfffc69ff;
    /* PORTC Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_C)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTC Output Write Enable */
    ((pio_registers_t*)PIO_PORT_C)->PIO_OWER = PIO_OWER_Msk;
    /* PORTC Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_C)->PIO_OER = 0x0;
    ((pio_registers_t*)PIO_PORT_C)->PIO_ODR = ~0x0;
    /* PORTC Initial state High */
    ((pio_registers_t*)PIO_PORT_C)->PIO_ODSR = 0x0;
    /* PORTC drive control */
    ((pio_registers_t*)PIO_PORT_C)->PIO_DRIVER = 0x0;

    /************************ PIO D Initialization ************************/
    ((pio_registers_t*)PIO_PORT_D)->PIO_ABCDSR[0]= 0x0;
    ((pio_registers_t*)PIO_PORT_D)->PIO_ABCDSR[1]= 0x8000;
    /* PORTD PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_D)->PIO_PDR = 0x8000;
    ((pio_registers_t*)PIO_PORT_D)->PIO_PER = ~0x8000;
    ((pio_registers_t*)PIO_PORT_D)->PIO_MDDR = 0xFFFFFFFF;
    /* PORTD Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_D)->PIO_PUDR = ~0x8000;
    ((pio_registers_t*)PIO_PORT_D)->PIO_PUER = 0x8000;
    /* PORTD Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_D)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTD Output Write Enable */
    ((pio_registers_t*)PIO_PORT_D)->PIO_OWER = PIO_OWER_Msk;
    /* PORTD Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_D)->PIO_OER = 0x0;
    ((pio_registers_t*)PIO_PORT_D)->PIO_ODR = ~0x0;
    /* PORTD Initial state High */
    ((pio_registers_t*)PIO_PORT_D)->PIO_ODSR = 0x0;
    /* PORTD drive control */
    ((pio_registers_t*)PIO_PORT_D)->PIO_DRIVER = 0x0;


    /************************ PIO E Initialization ************************/
    /* PORTE PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_E)->PIO_PDR = 0x3f;
    ((pio_registers_t*)PIO_PORT_E)->PIO_PER = ~0x3f;
    ((pio_registers_t*)PIO_PORT_E)->PIO_MDDR = 0xFFFFFFFF;
    /* PORTE Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_E)->PIO_PUDR = ~0x3f;
    ((pio_registers_t*)PIO_PORT_E)->PIO_PUER = 0x3f;
    /* PORTE Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_E)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTE Output Write Enable */
    ((pio_registers_t*)PIO_PORT_E)->PIO_OWER = PIO_OWER_Msk;
    /* PORTE Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_E)->PIO_OER = 0x0;
    ((pio_registers_t*)PIO_PORT_E)->PIO_ODR = ~0x0;
    /* PORTE Initial state High */
    ((pio_registers_t*)PIO_PORT_E)->PIO_ODSR = 0x0;
    /* PORTE drive control */
    ((pio_registers_t*)PIO_PORT_E)->PIO_DRIVER = 0x0;
#endif
    
    uint32_t i;
    /* Initialize Interrupt Pin data structures */
    portPinCbObj[0].pin = PIO_PIN_PB0;
    portPinCbObj[1].pin = PIO_PIN_PB1;
    portPinCbObj[2].pin = PIO_PIN_PB2;
    
    for(i=0; i<3; i++)
    {
        portPinCbObj[i].callback = NULL;
    }

    SYNC1_IRQ_InterruptEnable();
    ESC_IRQ_InterruptEnable();
    SYNC0_IRQ_InterruptEnable();
}

// *****************************************************************************
// *****************************************************************************
// Section: PIO APIs which operates on multiple pins of a port
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    uint32_t PIO_PortRead ( PIO_PORT port )

  Summary:
    Read all the I/O lines of the selected port.

  Description:
    This function reads the live data values on all the I/O lines of the
    selected port.  Bit values returned in each position indicate corresponding
    pin levels.
    1 = Pin is high.
    0 = Pin is low.

    This function reads the value regardless of pin configuration, whether it is
    set as as an input, driven by the PIO Controller, or driven by a peripheral.

  Remarks:
    If the port has less than 32-bits, unimplemented pins will read as
    low (0).
    Implemented pins are Right aligned in the 32-bit return value.
*/
uint32_t PIO_PortRead(PIO_PORT port)
{
    return ((pio_registers_t*)port)->PIO_PDSR;
}

// *****************************************************************************
/* Function:
    void PIO_PortWrite (PIO_PORT port, uint32_t mask, uint32_t value);

  Summary:
    Write the value on the masked I/O lines of the selected port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortWrite(PIO_PORT port, uint32_t mask, uint32_t value)
{
    ((pio_registers_t*)port)->PIO_ODSR = (((pio_registers_t*)port)->PIO_ODSR & (~mask)) | (mask & value);
}

// *****************************************************************************
/* Function:
    uint32_t PIO_PortLatchRead ( PIO_PORT port )

  Summary:
    Read the latched value on all the I/O lines of the selected port.

  Remarks:
    See plib_pio.h for more details.
*/
uint32_t PIO_PortLatchRead(PIO_PORT port)
{
    return ((pio_registers_t*)port)->PIO_ODSR;
}

// *****************************************************************************
/* Function:
    void PIO_PortSet ( PIO_PORT port, uint32_t mask )

  Summary:
    Set the selected IO pins of a port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortSet(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_SODR = mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortClear ( PIO_PORT port, uint32_t mask )

  Summary:
    Clear the selected IO pins of a port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortClear(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_CODR = mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortToggle ( PIO_PORT port, uint32_t mask )

  Summary:
    Toggles the selected IO pins of a port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortToggle(PIO_PORT port, uint32_t mask)
{
    /* Write into Clr and Set registers */
    ((pio_registers_t*)port)->PIO_ODSR^= mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortInputEnable ( PIO_PORT port, uint32_t mask )

  Summary:
    Enables selected IO pins of a port as input.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortInputEnable(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_ODR = mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortOutputEnable ( PIO_PORT port, uint32_t mask )

  Summary:
    Enables selected IO pins of a port as output(s).

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortOutputEnable(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_OER = mask;
}

void PIO_ext_irq_init ()
{
    // Set pin direction to input
	((pio_registers_t *)PIO_PORT_B)->PIO_ODR = 7;


	//Set PIO_PB1_SYNC0 to GPIO_PULL_OFF
	((pio_registers_t *)PIO_PORT_B)->PIO_PUDR = 7; //clear 0th pin
	((pio_registers_t *)PIO_PORT_B)->PIO_PPDDR = 7; //clear 0th pin

	//Set PIO_PB1_SYNC0 to GPIO_PIN_FUNCTION_OFF
	((pio_registers_t *)PIO_PORT_B)->PIO_PER = 7; 
    /* PORTA Additional interrupt mode Enable */
    ((pio_registers_t*)PIO_PORT_B)->PIO_AIMER = 0x7;
    ((pio_registers_t *)PIO_PORT_B)->PIO_ESR = 7;
	((pio_registers_t *)PIO_PORT_B)->PIO_LSR = 0;
	((pio_registers_t *)PIO_PORT_B)->PIO_FELLSR = 7;
	((pio_registers_t *)PIO_PORT_B)->PIO_REHLSR = 0;
    /* PORTB Interrupt Status Clear */
   ((pio_registers_t*)PIO_PORT_B)->PIO_ISR;
    /* PORTB system level interrupt will be enabled by NVIC Manager */
    /* PORTB module level Interrupt for every pin has to be enabled by user
       by calling PIO_PinInterruptEnable() API dynamically as and when needed*/
    
 //   PIO_PinInterruptEnable(PIO_PIN_PB0);
 //   PIO_PinInterruptEnable(PIO_PIN_PB1);
 //   PIO_PinInterruptEnable(PIO_PIN_PB2);
    
    
}

// *****************************************************************************
/* Function:
    void PIO_PortInterruptEnable(PIO_PORT port, uint32_t mask)

  Summary:
    Enables IO interrupt on selected IO pins of a port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortInterruptEnable(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_IER = mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortInterruptDisable(PIO_PORT port, uint32_t mask)

  Summary:
    Disables IO interrupt on selected IO pins of a port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortInterruptDisable(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_IDR = mask;
}

// *****************************************************************************
// *****************************************************************************
// Section: PIO APIs which operates on one pin at a time
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    bool PIO_PinInterruptCallbackRegister(
        PIO_PIN pin,
        const PIO_PIN_CALLBACK callback,
        uintptr_t context
    );

  Summary:
    Allows application to register callback for configured pin.

  Remarks:
    See plib_pio.h for more details.
*/
bool PIO_PinInterruptCallbackRegister(
    PIO_PIN pin,
    const PIO_PIN_CALLBACK callback,
    uintptr_t context
)
{
    uint8_t i;
    uint8_t portIndex;

    portIndex = pin >> 5;

    for(i = portNumCb[portIndex]; i < portNumCb[portIndex +1]; i++)
    {
        if (portPinCbObj[i].pin == pin)
        {
            portPinCbObj[i].callback = callback;
            portPinCbObj[i].context  = context;
            return true;
        }
    }
    return false;
}
// *****************************************************************************
// *****************************************************************************
// Section: Local Function Implementation
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void _PIO_Interrupt_Handler ( PIO_PORT port )

  Summary:
    Interrupt handler for a selected port.

  Description:
    This function defines the Interrupt handler for a selected port.

  Remarks:
	It is an internal function used by the library, user should not call it.
*/
void _PIO_Interrupt_Handler ( PIO_PORT port )
{
    uint32_t status;
    uint32_t i, portIndex;

    status  = ((pio_registers_t*)port)->PIO_ISR;
    status &= ((pio_registers_t*)port)->PIO_IMR;

    /* get the index of the port channel: PIO_PORT_A--> 0, PIO_PORT_B--> 1 ... */
    portIndex = (port - PIOA_BASE_ADDRESS) >> 9;

    /* Check pending events and call callback if registered */
    for(i = portNumCb[portIndex]; i < portNumCb[portIndex +1]; i++)
    {
        if((status & (1 << (portPinCbObj[i].pin & 0x1F))) && (portPinCbObj[i].callback != NULL))
        {
            portPinCbObj[i].callback (portPinCbObj[i].pin, portPinCbObj[i].context);
        }
    }

}
// *****************************************************************************
// *****************************************************************************
// Section: Interrupt Service Routine (ISR) Implementation(s)
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
/* Function:
    void PIOB_InterruptHandler (void)

  Summary:
    Interrupt handler for PORTB.

  Description:
    This function defines the Interrupt service routine for PORTB.
    This is the function which by default gets into Interrupt Vector Table.

  Remarks:
    User should not call this function.
*/
void PIOB_InterruptHandler(void)
{
    /* Local PIO Interrupt Handler */
    _PIO_Interrupt_Handler(PIO_PORT_B);
}








/*******************************************************************************
 End of File
*/
