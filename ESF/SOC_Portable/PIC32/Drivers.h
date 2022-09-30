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


#ifndef DRIVERS_H_
#define DRIVERS_H_

#include <ecat_def.h>
#include "ESF_Config.h"
#include <stdint.h>
#include "definitions.h"

#define SYNC0                                       ESC_SYNC0_PIN
#define SYNC1                                       ESC_SYNC1_PIN
#define ESCIRQ                                      EXTERNAL_INT_0

/* Configured PA20 and PA21 pins 
 * These are available as pinouts for J13 header from LAN9253_PIC32_SVB
 * RD2 --> TP4(Pin 77 from pic soc) in PIC32 add on board
 * RD3 --> TP3(Pin 78 from pic soc) in PIC32 add on board
 * 
 * Can be modified with appropriate pins for specific use 
 */
#define GPIO_T_PDI                                  GPIO_PIN_RD2
#define GPIO_T_MCU                                  GPIO_PIN_RD3

#if (ESF_PDI == HBI)

typedef enum {INDEXED_8BIT, INDEXED_16BIT, MDP_8BIT, MDP_16BIT, MSP_8BIT, MSP_16BIT} PMPMode;

typedef union
{
    struct
    {
        UINT8 RDWR:1;
        UINT8 WRENB:1;
        UINT8 ALE:1;
        UINT8 CS:1;
        UINT8 ALE_QUAL:1;
    };

    UINT8 Val;

} Polarity;

#define PMPWaitForNoBusy() {while (PMMODEbits.BUSY);}

typedef enum {LGY, ESM, MM2, MM1} RWType;

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
    void    PinInterruptCallbackRegister(CN_PIN pin);

	UINT16	PDI_GetTimer();
	void	PDI_ClearTimer(void);
	void    PDI_Timer_Interrupt(void);
	void	stop_timer(void);
	void	start_timer(void);
	void	HW_SetLed(UINT8 RunLed, UINT8 ErrLed);
    void    PMPOpen(PMPMode pmpmode, RWType rwtype, Polarity pl);
    
#ifdef _IS_HBI_DIRECT_MODE_ACCESS
	/* Function Prototypes */
	void    LAN925xHBI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
	void    LAN925xHBI_Read(UINT16 u16Addr, UINT8 *pu8data, UINT32 u32Length);

#else
	/* Function Prototypes */
	void    LAN925xHBI_Write(UINT16 u16Adddr, UINT8 *pu8Data, UINT8 u8Len);
	void    LAN925xHBI_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8Len);
	void    LAN925xHBI_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len);
	void    LAN925xHBI_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len);
#endif

    void    ESF_gpioSet(UINT8 u8port,UINT8 u8pin);
    void    ESF_gpioClear(UINT8 u8port,UINT8 u8pin);
	void    ESF_PDI_Init();

    void ESC_IRQ_cb(EXTERNAL_INT_PIN pin,uintptr_t context);
    void ESC_Sync0_cb(CN_PIN pin,uintptr_t context);
    void ESC_Sync1_cb(CN_PIN pin,uintptr_t context);
    
#ifdef __cplusplus
}
#endif

#endif
#endif /* DRIVERS_H_ */