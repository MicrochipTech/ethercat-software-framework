/*******************************************************************************
 SOC portable drivers header file

  Company:
    Microchip Technology Inc.

  File Name:
    Drivers.h

  Description:
    This file contains the macro's and function prototype's
    which are used in Drivers.c (SOC portable)
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


#ifndef DRIVERS_H_
#define DRIVERS_H_

#include <ecat_def.h>
#include "ESF_Config.h"
#include <stdint.h>
#include "definitions.h"

#define SYNC0                                       SYNC0_IRQ_PIN
#define SYNC1                                       SYNC1_IRQ_PIN
#define ESCIRQ                                      ESC_IRQ_PIN

/* Configured PA11 and PA12 pins 
 * PA11 - QCS, J34 header 9th pin
 * PA12 - QIO1, J34 header 5th pin
 * PA17 - QIO2, J36 header 3rd pin
 * PD31 - QIO3, J36 header 4th pin
 * Can be modified with appropriate pins for specific use 
 */
#define GPIO_T_PDI                                  PIO_PIN_PA11
#define GPIO_T_SYNC0                                PIO_PIN_PD31
#define GPIO_T_MCU                                  PIO_PIN_PA12


#ifdef __cplusplus
extern "C" {
	#endif

	typedef union {
		uint32_t Val;
		uint16_t w[2] __attribute__((packed));
		uint8_t  v[4];
		struct __attribute__((packed)) {
			uint16_t LW;
			uint16_t HW;
		} word;
		struct __attribute__((packed)) {
			uint8_t LB;
			uint8_t HB;
			uint8_t UB;
			uint8_t MB;
		} byte;

	} UINT32_VAL;

	void	ESC_BYTE_TEST_Register_Read(UINT8 *pu8Data);
    void    CRITICAL_SECTION_ENTER(void);
    void    CRITICAL_SECTION_LEAVE(void);

    void    ESF_PDI_Init();
	UINT16	PDI_GetTimer();
	void	PDI_ClearTimer(void);
	void    PDI_Timer_Interrupt(void);
	void	stop_timer(void);
	void	start_timer(void);
	void	HW_SetLed(UINT8 RunLed, UINT8 ErrLed);
    
    void SMC_SytemCSR_Write(uint8_t * WriteBuffer, uint16_t Addr, uint16_t count);
    void SMC_SyetemCSR_Read(uint8_t * ReadBuffer, uint16_t Addr, uint16_t count);
    void SMC_ECAT_Write(uint8_t * WriteBuffer, uint16_t Addr, uint16_t count);
    void SMC_ECAT_Read(uint8_t * ReadBuffer, uint16_t Addr, uint16_t count);
    void SMC_ProcessRAMRead(uint8_t *pData, uint16_t address, uint16_t length);
    void SMC_ProcessRAMWrite(uint8_t *pData, uint16_t address, uint16_t length);
    
    void ESC_Sync1_cb(PIO_PIN pin, uintptr_t context);
    void ESC_Sync0_cb(PIO_PIN pin, uintptr_t context);
    void ESC_IRQ_cb(PIO_PIN pin, uintptr_t context);
    
#ifdef DEVELOPER_TEST_EN
    void SMC_SystemCSR_Write_DWord(uint32_t writeData, uint16_t Address);
    uint32_t SMC_SystemCSR_Read_DWord(uint16_t Address);
    bool SMC_VerifyByteOrderRegister();
    void SMC_VerifyAccess_ECATCore();
    void SMC_VerifyAccess_SystemCSR();
    void SMC_VerifyAccess_PDRAM();
    void SMC_ECATCore_Write(uint8_t* pWriteBuf, uint16_t Address, uint16_t length);
    void SMC_ECATCore_Read(uint8_t* pReadBuf, uint16_t Address, uint16_t length);
#endif

#ifdef __cplusplus
}
#endif


#endif /* DRIVERS_H_ */