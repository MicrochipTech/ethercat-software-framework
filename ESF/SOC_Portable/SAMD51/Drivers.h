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

#define SYNC0                                       EIC_PIN_0
#define SYNC1                                       EIC_PIN_1
#define ESCIRQ                                      EIC_PIN_7

#define SPI_READ_SETUP_BYTES 3
#define SPI_WRITE_SETUP_BYTES 3
#define SPI_FASTREAD_SETUP_BYTES 5
#define SPI_READ 0
#define SPI_FAST_READ 2
#define SPI_WRITE 1
#define DMA_BUFF_SIZE 2048
#define INITIAL_DUMMY 0
#define INTRA_DUMMY 1
#define INTER_DUMMY 2
#define IS_DIVISIBLE_TWO 0x01
#define IS_DIVISIBLE_FOUR 0x03
#define NULL_VALUE 0
#define NOT_NULL 1
#define PDRAM_FASTREAD_ADDRESS 0x20
#define PDRAM_READ_ADDRESS 0x04
/* Configured PA20, PA21, PA22 pins 
 * These are available as pinouts for J13 header from LAN9253_SAMD51_SVB
 * PA20 --> Pin 1 from J13 header
 * PA21 --> Pin 3 from J13 header
 * PA22 --> Pin 5 from J13 header
 * Can be modified with appropriate pins for specific use 
 */
#define GPIO_T_PDI                                  PORT_PIN_PA20
#define GPIO_T_MCU                                  PORT_PIN_PA21
#define GPIO_T_MEA                                  PORT_PIN_PA22
#if (ESF_PDI == SPI)
#define QSPI_Sync_Wait()    {\
                                while(EtherCAT_QSPITransmissionBusy()) {\
                                    ;\
                                }\
                                EtherCAT_TransmissionFlagClear();\
                            }
#endif

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

#if (ESF_PDI == SQI)
    void	SQI_SetConfiguration(UINT8 *byDummyByteCnt);
    void    ReBuild_SQI_SetCfg_data ();
    void    SQI_EnableQuadMode();
    void    SQI_DisableQuadMode();
#elif (ESF_PDI == SPI)
    void    EtherCAT_QSPI_CallbackRegistration(void);
    void    EtherCAT_TransmissionFlagClear(void);
    void    ECAT_SPI_Callback (uintptr_t context);
    UINT32  DmaBuffsizeCalculate (UINT8 u8IntraDwordDummy, UINT8 u8InterDwordDummy, UINT32 u32Length);
    void    HandleSetupState (UINT16 u16Addr, UINT8 mode);
    void    HandleDmaData (UINT8 *pu8Data, UINT8 *gau8DmaBuff, UINT8 u8IntraDwordDummy, UINT8 u8InterDwordDummy, UINT32 u32BuffLen, UINT8 mode);
    void    HandleDummyState(UINT8 mode);
    void    HandleDataState(UINT8 *pu8Data, UINT32 u32Length, UINT8 mode, UINT8 u8LastByte);
#endif
	UINT16	PDI_GetTimer();
	void	PDI_ClearTimer(void);
	void    PDI_Timer_Interrupt(void);
	void	stop_timer(void);
	void	start_timer(void);
	void	HW_SetLed(UINT8 RunLed, UINT8 ErrLed);
    
#ifdef _IS_SPI_BECKHOFF_MODE_ACCESS
	/* Function Prototypes */
	void    BeckhoffSPI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    BeckhoffSPI_DMA_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
	void    BeckhoffSPI_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    BeckhoffSPI_DMA_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    CSRLengthAlignment(UINT16 u16Addr, UINT32 *u32Length);
#endif
#ifdef _IS_SPI_DIRECT_MODE_ACCESS
	/* Function Prototypes */
	void    LAN9253SPI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    LAN9253SPI_DMA_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
	void    LAN9253SPI_Read(UINT16 u16Addr, UINT8 *pu8data, UINT32 u32Length);
    void    LAN9253SPI_DMA_Read(UINT16 u16Addr, UINT8 *pu8data, UINT32 u32Length);
	void    LAN9253SPI_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    LAN9253SPI_DMA_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    CSRLengthAlignment(UINT16 *u16Addr, UINT32 *u32Length, UINT8 mode);
#endif
#ifdef _IS_SPI_INDIRECT_MODE_ACCESS
	/* Function Prototypes */
	void    LAN9252SPI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    LAN9252SPI_DMA_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
	void    LAN9252SPI_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    LAN9252SPI_DMA_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
	void    LAN9252SPI_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
    void    LAN9252SPI_DMA_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
	void    LAN9252SPI_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length);
    void    LAN9252SPI_DMA_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length);
	void    LAN9252SPI_FastReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length);
    void    LAN9252SPI_DMA_FastReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length);
	void    LAN9252SPI_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length);
    void    LAN9252SPI_DMA_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length);
    void    PDRAMSetAddrLength(UINT16 u16Addr, UINT32 u32Length, UINT8 *u8StartAlignSize, UINT8 *u8EndAlignSize, UINT8 mode);
#endif
#ifdef _IS_SQI_DIRECT_MODE_ACCESS
	/* Function Prototypes */
	void    LAN9253SQI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length);
	void    LAN9253SQI_Read(UINT16 u16Addr, UINT8 *pu8data, UINT32 u32Length);
#endif
#ifdef _IS_SQI_INDIRECT_MODE_ACCESS
	/* Function Prototypes */
	void    LAN9252SQI_Write(UINT16 u16Adddr, UINT8 *pu8Data, UINT8 u8Len);
	void    LAN9252SQI_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8Len);
	void    LAN9252SQI_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8Len);
	void    LAN9252SQI_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len);
	void    LAN9252SQI_FastReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len);
	void    LAN9252SQI_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len);
#endif

    void    ESF_gpioSet(UINT8 u8port,UINT8 u8pin);
    void    ESF_gpioClear(UINT8 u8port,UINT8 u8pin);
	void    ESF_PDI_Init();

    void ESC_IRQ_cb(uintptr_t context);
    void ESC_Sync0_cb(uintptr_t context);
    void ESC_Sync1_cb(uintptr_t context);
#ifdef __cplusplus
}
#endif


#endif /* DRIVERS_H_ */