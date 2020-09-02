/*
 * ESF_Hooks.h
 *
 * Created: 1/31/2020 10:35:59 AM
 *  Author: I52915
 */ 


#ifndef ESF_API_HOOK_H_
#define ESF_API_HOOK_H_

#include "ESF_Config.h"						

#define MCHP_ESF_PDI_INIT()								ESF_PDI_Init()
#define MCHP_ESF_IS_PDI_FUNCTIONAL(pdata)				

#define MCHP_ESF_PDI_WRITE(addr, pdata, len)            SMC_SytemCSR_Write(pdata, addr, len)
#define MCHP_ESF_PDI_READ(addr, pdata, len)				SMC_SyetemCSR_Read(pdata, addr, len)
#define MCHP_ESF_PDI_FASTREAD(addr, pdata)			
#define MCHP_ESF_PDI_READ_PDRAM(pdata, addr, len)		SMC_ProcessRAMRead(pdata, addr, len)
#define MCHP_ESF_PDI_FASTREAD_PDRAM(pdata, addr, len)	
#define MCHP_ESF_PDI_WRITE_PDRAM(pdata, addr, len)      SMC_Indirect_ProcessRAMWrite(pdata, addr, len)

/* Timer functions */

#define MCHP_ESF_PDI_TIMER_CONFIG()						PDI_Timer_Interrupt()
#define MCHP_ESF_PDI_GET_TIMER()						PDI_GetTimer()
#define MCHP_ESF_PDI_CLR_TIMER()						PDI_ClearTimer()
#define MCHP_ESF_PDI_START_TIMER()						start_timer()
#define MCHP_ESF_PDI_STOP_TIMER()						stop_timer()



#define MCHP_ESF_CRITICAL_SECTION_ENTER()				CRITICAL_SECTION_ENTER()
#define MCHP_ESF_CRITICAL_SECTION_LEAVE()				CRITICAL_SECTION_LEAVE()

#define MCHP_ESF_IRQ_REGISTER_CB(pin, callback)			PIO_PinInterruptCallbackRegister (pin, callback, 0)

#endif /* ESF_API_HOOK_H_ */