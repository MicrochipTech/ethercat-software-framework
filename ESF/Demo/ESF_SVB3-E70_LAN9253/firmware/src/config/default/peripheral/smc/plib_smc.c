/*******************************************************************
  Company:
    Microchip Technology Inc.
    Memory System Service SMC Initialization File

  File Name:
    plib_smc.c

  Summary:
    Static Memory Controller (SMC).
    This file contains the source code to initialize the SMC controller

  Description:
    SMC configuration interface
    The SMC System Memory interface provides a simple interface to manage 8-bit and 16-bit
    parallel devices.

  *******************************************************************/

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
#include "plib_smc.h"
#include "device.h"
#include "ESF_Config.h"

/* Function:
    void SMC_Initialize( void )

  Summary:
    Initializes hardware and data for the given instance of the SMC module.

  Description:
    This function initializes the SMC timings according to the external parralel device requirements.

  Returns:
  None.
 */

void SMC_Initialize( void )
{


    /* Chip Select CS0 Timings */
    /* Setup SMC SETUP register */
    SMC_REGS->SMC_CS_NUMBER[0].SMC_SETUP= SMC_SETUP_NWE_SETUP(1) | SMC_SETUP_NCS_WR_SETUP(1) | SMC_SETUP_NRD_SETUP(1) | SMC_SETUP_NCS_RD_SETUP(1);
    /* Setup SMC CYCLE register */
    SMC_REGS->SMC_CS_NUMBER[0].SMC_CYCLE= SMC_CYCLE_NWE_CYCLE(60) | SMC_CYCLE_NRD_CYCLE(60);
    /* Setup SMC_PULSE register */
   SMC_REGS->SMC_CS_NUMBER[0].SMC_PULSE= SMC_PULSE_NWE_PULSE(20) | SMC_PULSE_NCS_WR_PULSE(25) | SMC_PULSE_NRD_PULSE(20) | SMC_PULSE_NCS_RD_PULSE(25);
    /* Setup SMC MODE register */
#ifdef _IS_HBI_DEMUX_16BIT_SUPPORT
#ifdef DIRECT_MODE
    SMC_REGS->SMC_CS_NUMBER[0].SMC_MODE= SMC_MODE_EXNW_MODE_FROZEN    \
            | SMC_MODE_WRITE_MODE_Msk | SMC_MODE_READ_MODE_Msk  | SMC_MODE_DBW_16_BIT | SMC_MODE_BAT_BYTE_SELECT;
    SMC_REGS->SMC_CS_NUMBER[0].SMC_MODE |= SMC_MODE_DBW_Msk;
#else
    SMC_REGS->SMC_CS_NUMBER[0].SMC_MODE= SMC_MODE_EXNW_MODE_DISABLED    \
            | SMC_MODE_WRITE_MODE_Msk | SMC_MODE_READ_MODE_Msk  | SMC_MODE_DBW_16_BIT | SMC_MODE_BAT_BYTE_SELECT;
#endif
#endif
#ifdef _IS_HBI_DEMUX_8BIT_SUPPORT
#ifdef DIRECT_MODE
    SMC_REGS->SMC_CS_NUMBER[0].SMC_MODE= SMC_MODE_EXNW_MODE_FROZEN    \
                                          | SMC_MODE_WRITE_MODE_Msk | SMC_MODE_READ_MODE_Msk  | SMC_MODE_DBW_8_BIT | SMC_MODE_BAT_BYTE_SELECT;
    SMC_REGS->SMC_CS_NUMBER[0].SMC_MODE &= ~SMC_MODE_DBW_Msk;
#else
    SMC_REGS->SMC_CS_NUMBER[0].SMC_MODE= SMC_MODE_EXNW_MODE_DISABLED    \
                                          | SMC_MODE_WRITE_MODE_Msk | SMC_MODE_READ_MODE_Msk  | SMC_MODE_DBW_8_BIT | SMC_MODE_BAT_BYTE_SELECT;
#endif
#endif


} /* SMC_Initialize */

void SMC_Read(uint8_t * ReadBuffer, uint16_t Addr, uint16_t count)
{
	//Assuming SMC device is connected to EBI_CS0
	volatile uint8_t *ptrToRead = (uint8_t *)(EBI_CS0_ADDR + Addr);
	
	memcpy(ReadBuffer , (void *)ptrToRead, count);

}

uint8_t SMC_ReadByte(uint16_t Addr)
{
	//Assuming SMC device is connected to EBI_CS0
	volatile uint32_t *ptrToRead = (uint32_t *)(EBI_CS0_ADDR + Addr);
	return *(uint8_t *)ptrToRead;

}

uint16_t SMC_ReadWord(uint16_t Addr)
{
	//Assuming SMC device is connected to EBI_CS0
 	volatile uint16_t *ptrToRead = (uint16_t *)(EBI_CS0_ADDR + Addr);
	
	return *(uint16_t *)ptrToRead;

}

uint32_t SMC_ReadDWord(uint16_t Addr)
{
	//Assuming SMC device is connected to EBI_CS0
	volatile uint32_t *ptrToRead =  (uint32_t *)(EBI_CS0_ADDR + Addr);
	
	return *ptrToRead;

}



void SMC_Write(uint8_t * WriteBuffer, uint16_t Addr, uint16_t count)
{
	//Assuming SMC device is connected to EBI_CS0
	volatile uint8_t *ptrToWrite =(uint8_t *)(EBI_CS0_ADDR + Addr);

	memcpy((void *)ptrToWrite, (void *)WriteBuffer, count);

}

void SMC_WriteByte(uint8_t data, uint16_t Addr)
{
	//Assuming SMC device is connected to EBI_CS0
	volatile uint32_t *ptrToWrite = (uint32_t *)(EBI_CS0_ADDR + Addr);
	
	*((uint8_t *)ptrToWrite) = data;
}

void SMC_WriteWord(uint16_t data, uint16_t Addr)
{
	//Assuming SMC device is connected to EBI_CS0
	uint16_t *ptrToWrite = (uint16_t *)(EBI_CS0_ADDR + Addr);
	
	*ptrToWrite = data;
}

void SMC_WriteDWord(uint32_t data, uint16_t Addr)
{
	//Assuming SMC device is connected to EBI_CS0
	uint32_t *ptrToWrite = (uint32_t *)(EBI_CS0_ADDR + Addr);
	
	*ptrToWrite = data;
}

/*******************************************************************************
 End of File
*/
