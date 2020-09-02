/*
 * Drivers.h
 *
 * Created: 1/30/2020 9:23:54 AM
 *  Author: I52915
 */ 


#ifndef DRIVERS_H_
#define DRIVERS_H_

#include <ecat_def.h>
#include "ESF_Config.h"
#include <stdint.h>
#include "definitions.h"

#define ESC_CSR_CMD_REG                             0x304
#define ESC_CSR_DATA_REG                            0x300
#define ESC_WRITE_BYTE                              0x80
#define ESC_READ_BYTE                               0xC0
#define ESC_CSR_BUSY                                0x80

#define SETCFG_MAX_DATA_BYTES                       39
#define ONE_BYTE_MAX_XFR_LEN                        127

#define DWORD_LENGTH                                4

/* Wait signal states */
#define WAIT FALSE
#define ACK  TRUE

#define SYNC0                                       PIO_PIN_PB1
#define SYNC1                                       PIO_PIN_PB2
#define ESCIRQ                                      PIO_PIN_PB0


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

    void    CRITICAL_SECTION_ENTER(void);
    void    CRITICAL_SECTION_LEAVE(void);

	UINT16	PDI_GetTimer();
	void	PDI_ClearTimer(void);
	void    PDI_Timer_Interrupt(void);
	void	stop_timer(void);
	void	start_timer(void);
	void	HW_SetLed(UINT8 RunLed, UINT8 ErrLed);
    
    void SMC_SytemCSR_Write(uint8_t * WriteBuffer, uint16_t Addr, uint16_t count);
    void SMC_SyetemCSR_Read(uint8_t * ReadBuffer, uint16_t Addr, uint16_t count);
    void SMC_ProcessRAMRead(uint8_t **pData, uint16_t address, uint16_t length);
    void SMC_Indirect_ProcessRAMWrite(uint8_t *pData, uint16_t address, uint16_t length);
    
    void ether_cat_sync1_cb(PIO_PIN pin, uintptr_t context);
    void ether_cat_sync0_cb(PIO_PIN pin, uintptr_t context);
    void ether_cat_escirq_cb(PIO_PIN pin, uintptr_t context);
    
#ifdef ESF_HBI_DEBUG
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