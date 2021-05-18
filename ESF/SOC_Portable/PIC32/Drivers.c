/*******************************************************************************
 SOC portable Drivers source file

  Company:
    Microchip Technology Inc.

  File Name:
    Drivers.c

  Description:
    This file provides the access API's to ESC through PDI
    Each API has implementation for each PDI type with resect to SOC.
    The API's acts as interface to the ESC APIs and actual hardware drivers 
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

#include "LAN925x.h"
#include "ecatslv.h"
#include "ESC_Utils.h"
#include "ESF_Config.h"

PMPMode CurrPMPMode;
Polarity gpl;

static void PDI_Init_SYSTick_Interrupt();
void ECAT_SysTick_Handler(uint32_t status, uintptr_t context);

void CRITICAL_SECTION_ENTER(void)
{
    __builtin_disable_interrupts();
}

void CRITICAL_SECTION_LEAVE(void)
{
    __builtin_enable_interrupts();
    
}

void PinInterruptCallbackRegister(CN_PIN pin)
{
    if(pin == SYNC0)
    {
        GPIO_PinInterruptCallbackRegister(pin,ESC_Sync0_cb,0);
    }
    else
    {
        GPIO_PinInterruptCallbackRegister(pin,ESC_Sync1_cb,0);
    }
}
#if (ESF_PDI == HBI)

void ESF_PDI_Init()
{
    
#ifdef MEASURE_CYCLE_TIME
    /* These GPIO's used to measure the Tpdi and Tmcu */
    MCHP_ESF_GPIO_OUTPUT_EN(GPIO_T_PDI);
    MCHP_ESF_GPIO_OUTPUT_EN(GPIO_T_MCU);
#endif
    UINT32 u32data;
    
    Polarity pl = {{0}};
    pl.ALE_QUAL = pl.ALE = 1;
    PMPOpen(HBI_MODE, MM2, pl); 
    
    do
	{
		MCHP_ESF_IS_PDI_FUNCTIONAL((UINT8 *)&u32data);
	} while (0x87654321 != u32data);
}

/*******************************************************************************
  Function:
   void PMPWriteDWord (UINT16 Address, UINT32 Val)
  Summary:
    This function writes 4 bytes of data to the corresponding address of LAN9252 CSR register        
  Description:
    This function writes 4 bytes of data to the corresponding address of LAN9252 CSR register ( not ESC register). Refer HBI section of LAN9252 datasheet for more information.

   Parameters:
	Address     - Address of LAN9252 CSR register( not ESC register).
	Val			- 4 byte value.
*****************************************************************************/
void PMPWriteDWord (UINT16 Address, UINT32 Val)
{
    UINT16 itr = 0, loops;
    UINT32_VAL str = {0};

    str.Val = Val;

    if (CurrPMPMode & 0x01)
    {
        if (CurrPMPMode != INDEXED_16BIT)
        {
            // Write the addr
            Address >>= 1;
        }
        loops = 2;
    }
    else
    {
        loops = 4;
    }

    PMPWaitForNoBusy();
    PMADDRbits.ADDR = Address;
    if (gpl.CS)
    {
        PMCONSET = 0x0010;
    }
    else
    {
        PMCONCLR = 0x0010;
    }

    do
    {
        if (itr == loops)
            break;

        switch(itr)
        {
            case 0:
                if (CurrPMPMode & 0x01)
                {
                    #ifdef FIFODUMP_SUPPORT
                        FIFOData.FIFOData_16[FIFODataIdx++] = str.word.LW;
                    #endif
                    PMDIN = str.word.LW;
                }
                else
                {
                    PMDIN = str.byte.LB;
                }
                break;

            case 1:
                if (CurrPMPMode & 0x01)
                {
                    #ifdef FIFODUMP_SUPPORT
                        FIFOData.FIFOData_16[FIFODataIdx++] = str.word.HW;
                    #endif
                    PMDIN = str.word.HW;
                }
                else
                {
                    PMDIN = str.byte.HB;
                }
                break;

            case 2:
                PMDIN = str.byte.UB;
                break;

            case 3:
                PMDIN = str.byte.MB;
                break;
        }
        
        PMPWaitForNoBusy();

        if (CurrPMPMode != INDEXED_16BIT)
        {
            PMADDRbits.ADDR = ++Address;
        }
        else
        {
            ++Address;
            PMADDRbits.ADDR = ++Address;
        }
        
    } while (++itr);
}

/*******************************************************************************
  Function:
   UINT32 PMPReadDWord (UINT16 Address)
  Summary:
    This function readS 4 bytes of data from LAN9252 CSR register        
  Description:
    This function readS 4 bytes of data from LAN9252 CSR register( not ESC register). 
	Refer HBI section of LAN9252 datasheet for more information.

  Parameters:
	Address      - Address of LAN9252 CSR register( not ESC register).
*****************************************************************************/

UINT32 PMPReadDWord (UINT16 Address)
{
    UINT16 itr = 0, dummy, loops;
    UINT32_VAL res;
    
    res.Val = 0;
    
    if (CurrPMPMode & 0x01)
    {
        if (CurrPMPMode != INDEXED_16BIT)
        {
            // Write the addr
            Address >>= 1;
        }

        loops = 2;
    }
    else
    {
        loops = 4;
    }

    PMPWaitForNoBusy();
    PMADDRbits.ADDR = Address;
 
    if (gpl.CS)
    {
        PMCONSET = 0x0010;
    }
    else
    {
        PMCONCLR = 0x0010;
    }
    
    do
    {
        if (itr > loops)
            break;

        PMPWaitForNoBusy();
        
         switch(itr)
        {
            case 0:
                dummy = PMDIN;
                break;
                
            case 1:
                if (CurrPMPMode & 0x01)
                {
                    res.word.LW = PMDIN;
                }
                else
                {
                    res.byte.LB = PMDIN;
                }
                break;
                
            case 2:
                if (CurrPMPMode & 0x01)
                {
                    if (gpl.CS)
                    {
                        PMCONCLR = 0x0010;
                    }
                    else
                    {
                        PMCONSET = 0x0010;
                    }
                    res.word.HW = PMDIN;

                }
                else
                {
                    res.byte.HB = PMDIN;
                }
                break;

            case 3:
                res.byte.UB = PMDIN;
                break;

            case 4:
                
               if (gpl.CS)
                {
                    PMCONCLR = 0x0010;
                }
                else
                {
                    PMCONSET = 0x0010;
                }
                 
                res.byte.MB = PMDIN;
                
                break;
        }
        PMPWaitForNoBusy();
        if (CurrPMPMode != INDEXED_16BIT)
        {
            PMADDRbits.ADDR = ++Address;
        }
        else
        {
            ++Address;
            PMADDRbits.ADDR = ++Address;
        }


    } while (++itr);
    
    return res.Val;
}

/*******************************************************************************
    Function:
        void ESC_BYTE_TEST_Register_Read(UINT8 *data)

    Summary:
        Number of dummy bytes that the S/W uses is set dynamically using SETCFG. Design will decode the SETCFG
        instruction and respond to the SPI Read/Write commands from the master accordingly. If we use SPIRead() API
        which uses dummy bytes (initial/Per Byte/Per Dword) to poll for Byte Order register, the design would not be
        aware of dummy byte count at this point and reading byte order register will fail(Since, issuing of SETCFG
        from the S/W itself is possible only after polling for byte order register) Hence, a separate API is
        maintained.
*******************************************************************************/

void ESC_BYTE_TEST_Register_Read (UINT8 *pu8Data)
{
	/* Before device initialization, the SPI/SQI interface will not return valid data. To determine when the SPI/SQI interface is
	functional, the Byte Order Test Register (BYTE_TEST) should be polled. Once the correct pattern is read, the interface
	can be considered functional */
    UINT32_VAL param32_1 = {0};
    UINT8 u8Itr = 0;
    
    param32_1.Val = PMPReadDWord (LAN925x_BYTE_ORDER_REG);
    
    for (u8Itr = 0; u8Itr < DWORD_LENGTH; u8Itr++)
    {
       *pu8Data++ = param32_1.v[u8Itr];
    }
}


/*******************************************************************************
    Function:
        UINT16 PDI_GetTimer(void)

    Summary:
        Get the 1ms current timer value
    Description:
        This routine gets the 1ms current timer value.
*******************************************************************************/
UINT16 PDI_GetTimer()
{
	return (0);
}

/*******************************************************************************
    Function:
        void PDI_ClearTimer(void)

    Summary:
        Clear the 1ms current timer value
    Description:
        This routine clears the 1ms current timer value.
*******************************************************************************/
void PDI_ClearTimer(void)
{
	;
}

/*******************************************************************************
    Function:
    void PDI_Timer_Interrupt(void)

    Summary:
     This function configure and enable the TIMER interrupt for 1ms

    Description:
    This function configure and enable the TIMER interrupt for 1ms
*******************************************************************************/
void PDI_Timer_Interrupt(void)
{
    PDI_Init_SYSTick_Interrupt();
}

/*******************************************************************************
    Function:
        void SysTick_Handler(void)

    Summary:
        SysTick ISR Handler
    Description:
        This routine load the SysTick LOAD register and perform EtherCAT check opration.
*******************************************************************************/

void ECAT_SysTick_Handler(uint32_t status, uintptr_t context)
{
    MCHP_ESF_CRITICAL_SECTION_ENTER();
    ECAT_CheckTimer();
    MCHP_ESF_CRITICAL_SECTION_LEAVE();
    
}

/*******************************************************************************
    Function:
        void PDI_Init_SYSTick_Interrupt()

    Summary:
        Register Callback function for PDI SYS_Tick interrupt
*******************************************************************************/
static void PDI_Init_SYSTick_Interrupt()
{
    CORETIMER_CallbackSet(ECAT_SysTick_Handler,(uintptr_t) NULL);
    CORETIMER_Start();
}

/*******************************************************************************
    Function:
        void stop_timer(void)

    Summary:
        Disable SysTick ISR
    Description:
        This routine disable SysTick Interrupt.
*******************************************************************************/
void stop_timer(void)
{
#if (ESF_PDI == HBI)
    CORETIMER_Stop();
#else
    NVIC_DisableIRQ(SysTick_IRQn);
#endif  
#if (ESF_PDI == SPI) || (ESF_PDI == SQI)
	NVIC_DisableIRQ(SysTick_IRQn);
#endif    
}

/*******************************************************************************
    Function:
        void start_timer(void)

    Summary:
        Enable SysTick ISR
    Description:
        This routine enable SysTick Interrupt.
*******************************************************************************/
void start_timer(void)
{
#if (ESF_PDI == HBI)
    CORETIMER_Start();
#else
    NVIC_EnableIRQ(SysTick_IRQn);
#endif    
}

#ifdef _IS_HBI_DIRECT_MODE_ACCESS
/* 
    Function: LAN925xHBI_Write

    This function writes 4 bytes of data to the corresponding address of LAN925x 
    Non-Ether CAT and Ether CAT Core CSR register        
     
    Input : u16Adddr    -> Address of the register to be written
            *pu8Data    -> Pointer to the data that is to be written
            u32Length       -> Length of the data

    Output : None
*/

void LAN925xHBI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
	UINT32_VAL param32_1 = {0};
    UINT8 u8Itr = 0;
    
    for(u8Itr=0;u8Itr<u32Length;u8Itr++)
         param32_1.v[u8Itr] = pu8Data[u8Itr];
    
    PMPWriteDWord(u16Addr,param32_1.Val);
}

/* 
    Function: LAN925xHBI_Read

    This function Reads 4 bytes of data from the corresponding address of LAN925x 
    Non-Ether CAT and Ether CAT Core CSR register        
     
    Input : u16Adddr    -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u32Length       -> Length of the data

    Output : None
	
*/

void LAN925xHBI_Read(UINT16 u16Adddr, UINT8 *pu8Data, UINT32 u32Length)
{
    UINT32_VAL param32_1 = {0};
    UINT8 u8Itr = 0;
    
    param32_1.Val = PMPReadDWord (u16Adddr);
    
    for (u8Itr = 0; u8Itr < u32Length; u8Itr++)
    {
        if(u16Adddr >= 0x1000)
        {
            *pu8Data++ = param32_1.v[u8Itr];
        }
        else
        {
            if(HBI_MODE == MDP_8BIT )
            {
                *pu8Data++ = param32_1.v[u8Itr];
            }
            else
            {
                *pu8Data++ = param32_1.v[u8Itr+(u16Adddr & 0x1)];
            }
        }
    }
}
#else
/* 
    Function: LAN925xHBI_Write

    This function writes 4 bytes of data to the corresponding address of LAN925x 
    Non-Ether CAT and Ether CAT Core CSR register        
     
    Input : u16Adddr    -> Address of the register to be written
            *pu8Data    -> Pointer to the data that is to be written
            u8Len       -> Length of the data

    Output : None
*/

void LAN925xHBI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8Len)
{
	UINT32_VAL param32_1 = {0};
    UINT8 u8Itr = 0;
    
    for(u8Itr=0;u8Itr<u8Len;u8Itr++)
         param32_1.v[u8Itr] = pu8Data[u8Itr];
    
    PMPWriteDWord(u16Addr,param32_1.Val);
}

/* 
    Function: LAN925xHBI_Read

    This function Reads 4 bytes of data from the corresponding address of LAN925x 
    Non-Ether CAT and Ether CAT Core CSR register        
     
    Input : u16Adddr    -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u8Len       -> Length of the data

    Output : None
	
*/

void LAN925xHBI_Read(UINT16 u16Adddr, UINT8 *pu8Data, UINT8 u8Len)
{
    UINT32_VAL param32_1 = {0};
    UINT8 u8Itr = 0;
    
    param32_1.Val = PMPReadDWord (u16Adddr);
    
    for (u8Itr = 0; u8Itr < u8Len; u8Itr++)
    {
       *pu8Data++ = param32_1.v[u8Itr];
    }
}

/* 
    Function: LAN9252SQI_WritePDRAM

    This function does Write Access to Ether CAT Core Process RAM  using 
    'FAST Write(0x02)' command supported by LAN9252 Compatible SQI.
    This function shall be used only when PDI is selected as
	LAN9252 Compatible SQI (0x80)
     
    Input : u16Addr    -> Address of the RAM location to be written
            *pu8Data -> Pointer to the data that is to be written
			u16Len	 -> Number of bytes to be written to PDRAM location

    Output : None

*/

void LAN925xHBI_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len)
{
	UINT32_VAL u32Val;
	UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0,u8Itr=0;
    UINT8 *pu8Ptr;

	/* Address and length */
	u32Val.w[0] = u16Addr;
	u32Val.w[1] = u16Len;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* write command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
	
	u8StartAlignSize = (u16Addr & 0x3);
    u8EndAlignSize = (u16Len + u8StartAlignSize) & 0x3;
	if (u8EndAlignSize & 0x3){
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}
	pu8Ptr = pu8Data; 
	pu8Ptr = pu8Ptr - u8StartAlignSize; 
    
   MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_DATA_FIFO_REG, pu8Ptr, u16Len+u8StartAlignSize+u8EndAlignSize);
    
}

/* 
    Function: LAN925xHBI_ReadPDRAM

    This function does Read Access to Ether CAT Core Process RAM using FIFO.
     
    Input : u16Addr    -> Address of the RAM location to be read
            *pu8Data -> Pointer to the data that is to be read
			u16Len	 -> Number of bytes to be read from PDRAM location

    Output : None

*/

void LAN925xHBI_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len)
{
    UINT32_VAL u32Val;
	UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0,u8Itr=0;
    
	/* Address and length */
	u32Val.w[0] = u16Addr;
	u32Val.w[1] = u16Len;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* Read command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	u8StartAlignSize = (u16Addr & 0x3);
	u8EndAlignSize = (u16Len + u8StartAlignSize) & 0x3;
	if (u8EndAlignSize & 0x3)
	{
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}
    
	MCHP_ESF_PDI_READ(LAN925x_ECAT_PRAM_RD_DATA_FIFO_REG, u32Val.v, u16Len+u8StartAlignSize+u8EndAlignSize);
    
     for (u8Itr = 0; u8Itr < u16Len; u8Itr++)
    {
       *pu8Data++ = u32Val.v[u8Itr+(u16Addr & 0x03)];
    }
}
#endif

/*******************************************************************************
  Function:
   void PMPOpen(PMPMode pmpmode, RWType rwtype, Polarity pl)
  Summary:
    This function configures the PMP(Host Bus Interface) module of SOC.
        
  Description:
    This function configures the PMP(Host bus Interface) module of SOC. Refer HBI section of LAN9252 datasheet for more information.

   Parameters:
	pmpmode- Different modes(INDEXED_8BIT, INDEXED_16BIT, MDP_8BIT, MDP_16BIT, MSP_8BIT, MSP_16BIT)
	rwtype - Read and Write on separate pins(MM2) or same pin(MM1)
	pl - Different polarities.
*****************************************************************************/

void PMPOpen(PMPMode pmpmode, RWType rwtype, Polarity pl)
{
    PMCON = 0;
    PMMODE = 0;
    PMADDR = 0;
    PMAEN = 0;
    gpl = pl;
    
    if (pl.ALE_QUAL)
    {
        PMAENSET = 0x8003;      // Allocate PMA15 for CS2, PMA1,0 for ALEHI, ALELO or PMA<1:0>
        PMADDRbits.CS2 = 1;
    }
    else
    {
        PMAENSET = 0x0003;      // Allocate PMA1,0 for ALEHI, ALELO or PMA<1:0>
    }
    
    PMCONSET = 0x0300;          // Enable RD/WR strobes

    if (pl.ALE_QUAL)
    {
        PMCONSET = 0x0040;      // PMCS2 as Chip Select
    }
    
    if (pl.ALE)
    {
        PMCONSET = 0x0020;      // ALE polarity high
    }

    if (pl.CS)
    {
        PMCONSET = 0x0010;      // Chip select polarity high
    }

    if (pl.WRENB)
    {
        PMCONSET = 0x0002;      // Write strobe polarity high
    }

    if (pl.RDWR)
    {
        PMCONSET = 0x0001;      // Read strobe polarity high
    }

    switch(rwtype)
    {
        case MM2:
        default:
#ifdef DIRECT_MODE
          PMMODESET = 0x02FF;     // Read and Write on separate pins 
#else
          PMMODESET = 0x0289;     // Read and Write on separate pins
#endif            
            break;

        case MM1:
            PMMODESET = 0x0389;     // RW/WR and Enable
            break;
    }
     
    switch(pmpmode)
    {
        case INDEXED_8BIT:
            break;
            
        case INDEXED_16BIT:
            break;

        case MDP_8BIT:
            PMCONSET = 0x1000;      // All 16 bits of address are multiplexed on PMD<7:0> pin
            break;

        case MDP_16BIT:
            PMCONSET = 0x1000;      // All 16 bits of address are multiplexed on PMD<7:0> pin
            PMMODESET = 0x0400;     // 16 bit mode
            break;
        
        case MSP_8BIT:
            break;
        
        case MSP_16BIT:
            PMCONSET = 0x1800;      // All 16 bits of address are multiplexed on PMD<15:0> pins
            PMMODESET = 0x0400;     // 16 bit mode
            break;
    }

    PMCONSET = 0x8000;
    CurrPMPMode = pmpmode;
   
}

/*******************************************************************************
    Function:
        void ESC_Sync1_cb()

    Summary:
        Interrupt service routine for the interrupt from SYNC0
*******************************************************************************/
void ESC_Sync0_cb(CN_PIN pin,uintptr_t context)
{
	//EVIC_ExternalInterruptDisable(EXTERNAL_INT_1);
    Sync0_Isr();
}



/*******************************************************************************
    Function:
        void ESC_Sync1_cb()

    Summary:
        Interrupt service routine for the interrupt from SYNC1
*******************************************************************************/
void ESC_Sync1_cb(CN_PIN pin,uintptr_t context)
{
    Sync1_Isr();
}

/*******************************************************************************
    Function:
        void ESC_IRQ_cb()

    Summary:
        Interrupt service routine for the interrupt from ESC
*******************************************************************************/
void ESC_IRQ_cb(EXTERNAL_INT_PIN pin, uintptr_t context)
{
	
   MCHP_ESF_CRITICAL_SECTION_ENTER();
#ifdef MEASURE_CYCLE_TIME
    MCHP_ESF_GPIO_SET(GPIO_T_MCU);
#endif
	PDI_Isr();
#ifdef MEASURE_CYCLE_TIME
    MCHP_ESF_GPIO_CLEAR(GPIO_T_MCU);
#endif
	MCHP_ESF_CRITICAL_SECTION_LEAVE();
}

#endif