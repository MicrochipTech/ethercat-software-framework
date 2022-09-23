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

#define GPIO_T_PDI PORT_PIN_PA20
#define GPIO_T_MCU PORT_PIN_PA21
#define GPIO_T_MEA PORT_PIN_PA22

#define SPI_READ_SETUP_BYTES 3
#define SPI_WRITE_SETUP_BYTES 3
#define SPI_FASTREAD_SETUP_BYTES 5
/*gau8DmaBuff size should be set after considering the byte length, Inter DWord and Intra byte dummy bytes
 * Maximum DMA_BUFF_SIZE of the array can be set by taking byte_length to be SPI_DMA_MAX_RX_SIZE & SPI_DMA_MAX_TX_SIZE*/
#define DMA_BUFF_SIZE 2048 
UINT8 gau8DmaBuff[DMA_BUFF_SIZE];

#if (ESF_PDI == SPI)

volatile CHAR gchEtherCATQSPITransmission = false;

void EtherCAT_TransmissionFlagClear(void);
void EtherCAT_QSPI_CallbackRegistration(void);

/* Function declarations */
static void SPIChipSelectDisable(void);
static void SPIChipSelectEnable(void);
#ifndef ESF_SPI_DMA_EN
static UINT8   EtherCAT_QSPITransmissionBusy(void);
#endif
#elif (ESF_PDI == SQI)
static UINT8 gau8rx_data[32] = {0};
#endif

static void PDI_Init_SYSTick_Interrupt();
void ECAT_SysTick_Handler(uintptr_t context);

void CRITICAL_SECTION_ENTER(void)
{
    //processorStatus = SYS_INT_Disable();
    //processorStatus_eic0 =  SYS_INT_SourceDisable(EIC_EXTINT_0_IRQn);
   // processorStatus_eic7 =  SYS_INT_SourceDisable(EIC_EXTINT_7_IRQn);
    __set_BASEPRI(4 << (8 - __NVIC_PRIO_BITS));
}

void CRITICAL_SECTION_LEAVE(void)
{
    //SYS_INT_Restore( processorStatus );
    //SYS_INT_SourceRestore(EIC_EXTINT_0_IRQn,processorStatus_eic0);
    //SYS_INT_SourceRestore(EIC_EXTINT_7_IRQn,processorStatus_eic7);
    __set_BASEPRI(0U); // remove the BASEPRI masking
}

#if (ESF_PDI == SPI)
/*******************************************************************************
    Function:
        void SPIChipSelectDisable()

    Summary:
        Disable SPI chip select
*******************************************************************************/
static inline void SPIChipSelectDisable(void)
{
	SPI_CS_Set();
}

/*******************************************************************************
    Function:
        void SPIChipSelectEnable()

    Summary:
        Enable SPI chip select
*******************************************************************************/
static inline void SPIChipSelectEnable(void)
{
	SPI_CS_Clear();
}

void ECAT_SPI_Callback (uintptr_t context)
{
    //Transmission completed
    gchEtherCATQSPITransmission = true;
}

void EtherCAT_TransmissionFlagClear(void)
{
    //clear transmission flag to false
    gchEtherCATQSPITransmission = false;
}

#ifndef ESF_SPI_DMA_EN
static UINT8 EtherCAT_QSPITransmissionBusy(void)
{
    return (gchEtherCATQSPITransmission == false);
}
#endif
void EtherCAT_QSPI_CallbackRegistration(void)
{
    QSPI_CallbackRegister (ECAT_SPI_Callback, 0);
}
#endif

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
#if (ESF_PDI == SPI) 
#ifdef ESF_SPI_DMA_EN
    UINT8 u8Len = 4;
    
    SPIChipSelectEnable();
    
    /* Load the instruction */
    gau8DmaBuff[0] = CMD_SERIAL_READ;
    gau8DmaBuff[1] = (UINT8)HIBYTE(LAN925x_BYTE_ORDER_REG);
    gau8DmaBuff[2] = (UINT8)LOBYTE(LAN925x_BYTE_ORDER_REG);
   
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, SPI_WRITE_SETUP_BYTES);
    
    /* DMA Read*/
    DRV_SPIReceive(pu8Data, u8Len);

	SPIChipSelectDisable();
#else
    UINT8 u8Len = 4;
    UINT8 u8txData = 0, u8rxData = 0;
    UINT8 u8txLen = 1, u8rxLen = 1;
    
    SPIChipSelectEnable();
    
    while(QSPI_IsBusy());

    u8txData = CMD_SERIAL_READ;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    
    u8txData = (UINT8)HIBYTE(LAN925x_BYTE_ORDER_REG);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)LOBYTE(LAN925x_BYTE_ORDER_REG);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[1] = u8rxData;
	
	do
	{
		if (0x1 == u8Len)
		{
			u8txData = READ_TERMINATION_BYTE;
		}
        else
        {
            u8txData = 0;
        }
		QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		while(QSPI_IsBusy());
		*pu8Data++ = u8rxData;
	} while (--u8Len);

	SPIChipSelectDisable();
#endif
#elif (ESF_PDI == SQI)
    qspi_memory_xfer_t qspi_xfer;
    UINT8 u8dummy_cycle = 0;
    UINT16 u16XfrLen = 0;	
	UINT32 u32InstrAddr = 0;
    
    /* FAST READ require one dummy Byte */
    u8dummy_cycle = CMD_SPI_FAST_READ_DUMMY * QSPI_SPI_ONE_BYTE_CLK_COUNT;
    memset((void *)&qspi_xfer, 0, sizeof(qspi_memory_xfer_t));
    /* Load the instruction */
	qspi_xfer.instruction = CMD_FAST_READ;
    /* Setting single bit SPI, as Byte test register supports SPI */
    qspi_xfer.width = SINGLE_BIT_SPI;
    /* Configure the dummy cycles */
    qspi_xfer.dummy_cycles = u8dummy_cycle;
    
    u16XfrLen = DWORD_LENGTH;
    u32InstrAddr = LAN925x_BYTE_ORDER_REG;
    u32InstrAddr = (u32InstrAddr << 8) | u16XfrLen;
 
    QSPI_MemoryRead(&qspi_xfer, (UINT32 *)pu8Data, u16XfrLen, u32InstrAddr);

#endif
}

#if (ESF_PDI == SQI)

/*******************************************************************************
    Function:
        void ReBuild_SQI_SetCfg_data()

    Summary:
        This function configures the number of initial, per byte and per DWORD
        dummy bytes needed as per the current PDI frequency. 
*******************************************************************************/

void ReBuild_SQI_SetCfg_data ()
{
    UINT16 u16SQIClkPeriod = 0, u16SQIClkfreq = 0;
    UINT8 u8DummyBytes =0;
    
    u16SQIClkfreq = ESF_PDI_FREQUENCY;
    /* Get clock period in Nano seconds */
    u16SQIClkPeriod = CLK_PERIOD_1MHZ/u16SQIClkfreq;
    
    /* Fill the SQI related part in gau8DummyCntArr */
    /* SQI Fast read, index from 33, 34, 35 
     * as initial, intra DWORD  inter DWORD
     */
    u8DummyBytes = GetDummyBytesRequired (QUAD_SPI, IAT_DWRD, 0, u16SQIClkPeriod);
    //https://jira.microchip.com/browse/UNG_JUTLAND2-299
    //Fix is added to provide PDI counter error test
    //making dummy bytes calculated as DWORD aligned
#ifdef DUMMY_READ_EN
    if (u8DummyBytes % DWORD_LENGTH != 0) {
        /* As SQI , we make sure the dummy bytes required should be multiple of 4*/
        /* making round off to the next DWORD aligned value */
        u8DummyBytes += (DWORD_LENGTH - (u8DummyBytes % DWORD_LENGTH));
        gau8DummyCntArr[SQI_FASTREAD_INITIAL_OFFSET] = u8DummyBytes;
    }
#else
    gau8DummyCntArr[SQI_FASTREAD_INITIAL_OFFSET] = u8DummyBytes;
#endif
    /* SQI Write, index starts from 36, 37  38 
     * as Initial, Intra DWORD  Inter DWORD
     */
    u8DummyBytes = GetDummyBytesRequired (QUAD_SPI, IAT_NULL, 0, u16SQIClkPeriod);
    if (u8DummyBytes == 0x0) {
        /* Set minimum one dummy byte */
        /* SPECIAL CASE - Add 1 byte clock cycle count to byDummy
        * SAMD51 supports 24 bit and 32 bit addressing format
        * LAN925x expects 16bit addressing format
        * So In order to support SAMD51, converting the 16bit address to 24bit
        * treating the extra address byte as dummy cycle, 
        * so add the 1 byte dummy cycle from the requested.
        */
        gau8DummyCntArr[SQI_WRITE_INITIAL_OFFSET] = 0x1;
    } else {
        gau8DummyCntArr[SQI_WRITE_INITIAL_OFFSET] = u8DummyBytes;
    }
    
}

/*******************************************************************************
    Function:
        void SQI_SetConfiguration(UINT8 *dummyArr)

    Summary:
        This function configures the number of initial, per byte and per DWORD dummy
		bytes needed. 
*******************************************************************************/

void SQI_SetConfiguration(UINT8 *pu8DummyByteCnt)
{
    qspi_register_xfer_t qspi_xfer;
    UINT16 u16XfrLen;
    
    /* CMD_SPI_SETCFG does not require dummy Byte */
    memset((void *)&qspi_xfer, 0, sizeof(qspi_register_xfer_t));
    /* Load the instruction */
	qspi_xfer.instruction = CMD_SQI_SETCFG;
    /* Setting single bit SPI */
    qspi_xfer.width = SINGLE_BIT_SPI;
    
    u16XfrLen = SETCFG_MAX_DATA_BYTES;
 
    QSPI_RegisterWrite(&qspi_xfer, (UINT32 *)pu8DummyByteCnt, u16XfrLen);
}

/*******************************************************************************
    Function:
        void SQI_EnableQuadMode()

    Summary:
        This function Enable the SQI mode in slave, send ENABLE_SQI
*******************************************************************************/

void SQI_EnableQuadMode()
{
    qspi_command_xfer_t qspi_xfer;
    
    memset((void *)&qspi_xfer, 0, sizeof(qspi_command_xfer_t));
    /* Load the instruction */
	qspi_xfer.instruction = CMD_ENABLE_SQI;
    /* Setting single bit SPI */
    qspi_xfer.width = SINGLE_BIT_SPI;
    
    /* Sending address as 0, as we don't need to send address */
    QSPI_CommandWrite (&qspi_xfer, 0x0);
}

/*******************************************************************************
    Function:
        void SQI_DisableQuadMode()

    Summary:
        This function Disable the SQI mode in slave, send RST_QIO
*******************************************************************************/

void SQI_DisableQuadMode()
{
    qspi_command_xfer_t qspi_xfer;
    
    memset((void *)&qspi_xfer, 0, sizeof(qspi_command_xfer_t));
    /* Load the instruction */
	qspi_xfer.instruction = CMD_RESET_SQI;
    /* Setting single bit SPI */
    qspi_xfer.width = SINGLE_BIT_SPI;
    
    /* Sending address as 0, as we don't need to send address */
    QSPI_CommandWrite (&qspi_xfer, 0x0);
}

#endif

#if (ESF_PDI == SPI)

/*******************************************************************************
    Function:
        void ReBuild_SPI_SetCfg_data()

    Summary:
        This function configures the number of initial, per byte and per DWORD
        dummy bytes needed as per the current PDI frequency. 
*******************************************************************************/

void ReBuild_SPI_SetCfg_data ()
{
    UINT16 u16SPIClkPeriod = 0, u16SPIClkfreq = 0;
    
    u16SPIClkfreq = ESF_PDI_FREQUENCY;
    /* Get clock period in Nano seconds */
    u16SPIClkPeriod = CLK_PERIOD_1MHZ/u16SPIClkfreq;
    
    /* Fill the SPI related part in gau8DummyCntArr */
    /* SPI read, index from 0, 1, 2 
     * as initial, intra DWORD  inter DWORD
     */
    gau8DummyCntArr[SPI_READ_INITIAL_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_BYRD, 0, u16SPIClkPeriod);
    gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_BYRD, 6, u16SPIClkPeriod);
    gau8DummyCntArr[SPI_READ_INTER_DWORD_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_BYRD, 6, u16SPIClkPeriod);
    
    /* SPI Fast read, index from 3, 4, 5 
     * as initial, intra DWORD  inter DWORD
     */
    gau8DummyCntArr[SPI_FASTREAD_INITIAL_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_DWRD, 0, u16SPIClkPeriod);
    gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_DWRD, 30, u16SPIClkPeriod);
    gau8DummyCntArr[SPI_FASTREAD_INTER_DWORD_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_DWRD, 30, u16SPIClkPeriod);
    /* SPI Write, index starts from 18, 19, 20  
     * as Initial, Intra DWORD  Inter DWORD
     */
    gau8DummyCntArr[SPI_WRITE_INITIAL_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_NULL, 0, u16SPIClkPeriod);
    gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_BYWR, 8, u16SPIClkPeriod);
    gau8DummyCntArr[SPI_WRITE_INTER_DWORD_OFFSET] = GetDummyBytesRequired (SINGLE_SPI, IAT_DWDWR, 32, u16SPIClkPeriod);
   
    //https://jira.microchip.com/browse/UNG_JUTLAND2-334
    //Fix is added by making the Intra and Inter Dummy Bytes to 0
#ifndef INCLUDE_DUMMY
    gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET] = 0;
    gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET] = 0;
    gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET] = 0;
    
    gau8DummyCntArr[SPI_READ_INTER_DWORD_OFFSET] = 0;
    gau8DummyCntArr[SPI_FASTREAD_INTER_DWORD_OFFSET] = 0;
    gau8DummyCntArr[SPI_WRITE_INTER_DWORD_OFFSET] = 0;
#endif
}

/*******************************************************************************
    Function:
        UINT32 DMA_Buffsize_Calculate (UINT8 u8intra_byte_dummy, UINT8 u8inter_dword_dummy);

    Summary:
        This function is used to calculate the Buffer size after inclusion of dummy
        bytes
*******************************************************************************/
UINT32 DMA_Buffsize_Calculate (UINT8 u8Intra_Byte_Dummy, UINT8 u8Inter_Dword_Dummy, UINT32 u32Length)
{
    UINT32 u32Buffsize = 0, u32Total_Inter_Dword = 0; 
    
    /*u32Total_Inter_Dword corresponds to the total number of Inter Dword dummy bytes needed for a given Length
      For calculating u32Total_Inter_Dword the following example has been cited where Data byte(D),
      Intra_Byte_Dummy(I), Inter_Dword_Dummy(B). Considering I = 1 and B = 2
      For 8 bytes the pattern formed is: D I D I D I D B B D I D I D I D (u32Total_Inter_Dword = 2)
      For 10 bytes the pattern formed is: D I D I D I D B B D I D I D I D B B D I D (u32Total_Inter_Dword = 4)
      Since if u32Length is divisible by 4 inter_dword_dummy for last byte is not required.*/
    if(u32Length & 0x03)
    {
        u32Total_Inter_Dword = (u32Length / 4);
    }
    else
    {
        u32Total_Inter_Dword = (u32Length / 4) - 1;
    }

    /* From the above example u32Buffsize = u32Length + no. of (Intra_byte+ Inter_Dword) bytes needed
     * no.of Inter_Dword bytes needed = u32Total_Inter_Dword * inter_Dword_dummy for 4 bytes
     *no. of Intra_byte dummy neeed  = (u32Length - last byte - u32Total_Inter_Dword) * Intra_byte_dummy for each byte*/
    u32Buffsize = u32Length + ((u32Length- u32Total_Inter_Dword - 1) * u8Intra_Byte_Dummy) + (u32Total_Inter_Dword * u8Inter_Dword_Dummy);  
    
    return u32Buffsize;
}
/*******************************************************************************
    Function:
        void SPI_SetConfiguration(UINT8 *dummyArr)

    Summary:
        This function configures the number of initial, per byte and per DWORD dummy
		bytes needed. 
*******************************************************************************/

void SPI_SetConfiguration(UINT8 *pu8DummyByteCnt)
{
#ifdef ESF_SPI_DMA_EN
    UINT8 u8Len = 0, u8Itr = 0;
    
    u8Len = SETCFG_MAX_DATA_BYTES;
    u8Len += 1;
    
    /* First byte corresponds to Global data type value followed by the 39 bytes pu8DummyByteCnt array*/
    gau8DmaBuff[0]= CMD_SQI_SETCFG;
    
    for(u8Itr = 1;u8Itr <= 40;u8Itr += 1)
    {
        gau8DmaBuff[u8Itr] = pu8DummyByteCnt[u8Itr - 1];
    }

    SPIChipSelectEnable();
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8Len);
    
    SPIChipSelectDisable();
#else
    UINT8 u8Len = 0, u8txData = 0, u8txLen = 1;
    
    u8Len = SETCFG_MAX_DATA_BYTES;
    u8txData = CMD_SQI_SETCFG;

    SPIChipSelectEnable();
    
    while(QSPI_IsBusy());
	
    /* Send command */
    QSPI_Write(&u8txData, u8txLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    
    /* Now write set cfg data */
	do
	{
        QSPI_Write(pu8DummyByteCnt, u8txLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
        pu8DummyByteCnt++;
	} while (--u8Len);
    
    SPIChipSelectDisable();
#endif
}

/*******************************************************************************
    Function:
        void SPI_DisableQuadMode()

    Summary:
        This function Disable the SQI mode in slave, send RST_QIO
*******************************************************************************/

void SPI_DisableQuadMode()
{
#ifdef ESF_SPI_DMA_EN
    UINT8 u8txData = 0, u8txLen = 1;
    
    u8txData = CMD_RESET_SQI;
    /* DMA Write*/
    DRV_SPITransfer(&u8txData, u8txLen);
#else
    UINT8 u8txData = 0, u8txLen = 1;
    
    u8txData = CMD_RESET_SQI;
    
    SPIChipSelectEnable();
    
    while(QSPI_IsBusy());
	
    /* Send command */
    QSPI_Write(&u8txData, u8txLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    SPIChipSelectDisable();
#endif
}
#endif

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

void ECAT_SysTick_Handler(uintptr_t context)
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
    SYSTICK_TimerCallbackSet(ECAT_SysTick_Handler,(uintptr_t) NULL);
    SYSTICK_TimerStart();
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
	NVIC_DisableIRQ(SysTick_IRQn);
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
	NVIC_EnableIRQ(SysTick_IRQn);
}

#ifdef _IS_SPI_INDIRECT_MODE_ACCESS
/* 
    Function: LAN9252SPI_Write

    This function does Write Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Serial Write(0x02)' command supported by LAN9252 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80)
     
    Input : u16Adddr    -> Address of the register to be written
            *pu8Data    -> Pointer to the data that is to be written
            u32Length       -> Length of the data

    Output : None
	
	Note   : In LAN9252 Compatible SPI, all registers are DWORD aligned. Length will be fixed to 4. Hence,
			 there is no separate length argument.
*/

void LAN9252SPI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
#ifdef ESF_SPI_DMA_EN
    LAN9252SPI_DMA_Write(u16Addr, pu8Data, u32Length);
#else
    UINT8 u8dummy_clk_cnt = 0;
    UINT8 u8txData = 0, u8rxData = 0;
    UINT8 u8txLen = 1, u8rxLen = 1;

    SPIChipSelectEnable();
    
    while(QSPI_IsBusy());
	
    u8txData = CMD_SERIAL_WRITE;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    
    u8txData = (UINT8)(u16Addr >> 8);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)u16Addr;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[1] = u8rxData;

    /* Initial Dummy cycle added by dummy write */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		while(QSPI_IsBusy())
		{
			;
		}
	}
    
	do
	{
        u8txData = *pu8Data++;
        QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (1 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	} while (--u32Length);
   
    SPIChipSelectDisable();
#endif
}

/* 
    Function: LAN9252SPI_DMA_Write

    This function does Write Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Serial Write(0x02)' command supported by LAN9252 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80). The write is executed by DMA.
    The maximum configurable frequency is 80 MHz.
     
    Input : u16Adddr    -> Address of the register to be written
            *pu8Data    -> Pointer to the data that is to be written
            u32Length       -> Length of the data

    Output : None
	
	Note   : In LAN9252 Compatible SPI, all registers are DWORD aligned. Length will be fixed to 4. Hence,
			 there is no separate length argument.
*/

void    LAN9252SPI_DMA_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
#ifdef INCLUDE_DUMMY
    UINT8 u8Intra_Byte_Dummy = 0, u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0;
#endif
    UINT8 u8dummy_clk_cnt = 0,u8txLen = 1;
    UINT32 u32txSize = 1;
    
    SPIChipSelectEnable();
    
    /* Initial Dummy cycle added by dummy write is stored in u8dummy_clk_cnt */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INITIAL_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_WRITE_SETUP_BYTES + u8dummy_clk_cnt;
    
    gau8DmaBuff[0] = CMD_SERIAL_WRITE;
    gau8DmaBuff[1] = (UINT8)(u16Addr >> 8);
    gau8DmaBuff[2] = (UINT8)u16Addr;
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);
    
#ifdef INCLUDE_DUMMY
    /* Get the Intra Byte and Inter Dword dummy clock count */     
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
    u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_WRITE_INTER_DWORD_OFFSET];
    
    u32txSize = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length);
    
    /* Add Intra DWORD and Inter DWORD dummy clocks, avoid for last byte */
    for(u16Itr = 0; u16Itr < u32txSize;)
    {
        u16Dwordctr += 1;
        /* Store the data in the buff and skip the dummy byte positions*/
        gau8DmaBuff[u16Itr] = *pu8Data;
		pu8Data++;
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if((u16Dwordctr && 0x03) == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += u8Intra_Byte_Dummy + 1;
        }
        
    }
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u32txSize);
#else
    u32txSize = u32Length;
    /* No Dummy Bytes Included*/
    /* DMA Write*/
    DRV_SPITransfer(pu8Data, u32txSize);
#endif  
    SPIChipSelectDisable(); 
}
/* 
    Function: LAN9252SPI_Read

    This function does Read Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Serial Read(0x03)' command supported by LAN9252 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u32Length       -> Length of the data

    Output : None
	
	Note   : In LAN9252 Compatible SPI, all registers are DWORD aligned. Length will be fixed to 4. Hence,
			 there is no separate length argument.
*/

void LAN9252SPI_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
#ifdef ESF_SPI_DMA_EN
    LAN9252SPI_DMA_Read(u16Addr, pu8Data, u32Length);
#else
    UINT8 u8dummy_clk_cnt = 0;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
    
    SPIChipSelectEnable();
    
    while(QSPI_IsBusy());

    u8txData = CMD_SERIAL_READ;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    
    u8txData = (UINT8)(u16Addr >> 8);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)u16Addr;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[1] = u8rxData;
    
    /* Initial Dummy cycle added by dummy read */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		while(QSPI_IsBusy())
		{
			;
		}
	}
    
	do
	{
		if (1 == u32Length)
		{
			u8txData = READ_TERMINATION_BYTE;
		}
        else
        {
            u8txData = 0;
        }
		QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		while(QSPI_IsBusy())
		{
			;
		}
		*pu8Data++ = u8rxData;
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (1 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	} while (--u32Length);
    
	SPIChipSelectDisable();
#endif
}

/* 
    Function: LAN9252SPI_DMA_Read

    This function does Read Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Serial Read(0x03)' command supported by LAN9252 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80). The read is executed by DMA. The
 *  maximum configurable frequency for read is 30 MHz. Higher frequencies are to be done by fastread.
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u32Length       -> Length of the data

    Output : None
	
	Note   : In LAN9252 Compatible SPI, all registers are DWORD aligned. Length will be fixed to 4. Hence,
			 there is no separate length argument.
*/

void   LAN9252SPI_DMA_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
#ifdef INCLUDE_DUMMY
    UINT8 u8Intra_Byte_Dummy = 0, u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0;
#endif 
    UINT8 u8dummy_clk_cnt = 0, u8txLen = 1;
    UINT32 u32rxLen = 1;
    
    SPIChipSelectEnable();
    
    /* Initial Dummy cycle added by dummy read is stored in u8dummy_clk_cnt */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INITIAL_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_READ_SETUP_BYTES + u8dummy_clk_cnt;
    
    gau8DmaBuff[0] = CMD_SERIAL_READ;
    gau8DmaBuff[1] = (UINT8)(u16Addr >> 8);
    gau8DmaBuff[2] = (UINT8)u16Addr;
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);
    
#ifdef INCLUDE_DUMMY
    /* Get the Intra DWORD dummy clock count */
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
    u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_READ_INTER_DWORD_OFFSET];
    
    u32rxLen = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length);
    
    /* When the buffer is read it contains Intra DWORD and Inter DWORD dummy clocks in addition to Data */
    DRV_SPIReceive(gau8DmaBuff, u32rxLen);
    
    /* Extract only the data bytes and skip the other dummy bytes */
    for(u16Itr = 0; u16Itr < u32rxLen; )
    {
        u16Dwordctr += 1;
        /* Store the data in pu8Data and skip the dummy byte positions*/
        *pu8Data++ = gau8DmaBuff[u16Itr];
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if((u16Dwordctr && 0x03) == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += u8Intra_Byte_Dummy + 1;
        }
    }
#else
    u32rxLen = u32Length;
    /* No Dummy Bytes Included */
    /* DMA Read*/
    DRV_SPIReceive(pu8Data, u32rxLen);
#endif
    SPIChipSelectDisable();	 
}
/* 
    Function: LAN9252SPI_FastRead

    This function does Read Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Fast Read(0x0B)' command supported by LAN9252 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u32Length       -> Length of the data

    Output : None

*/

void LAN9252SPI_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
#ifdef ESF_SPI_DMA_EN
    LAN9252SPI_DMA_FastRead(u16Addr, pu8Data, u32Length);
#else
    UINT8 u8dummy_clk_cnt = 0;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;

	SPIChipSelectEnable();

	while(QSPI_IsBusy())
	{
		;
	}

	u8txData = CMD_FAST_READ;
	QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    
    u8txData = (UINT8)(u16Addr >> 8);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)u16Addr;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[1] = u8rxData;
    
	/* Send Transfer length */
	QSPI_Write(&u32Length, u8rxLen);
    QSPI_Sync_Wait();
	while(QSPI_IsBusy())
	{
		;
	}

    /* Initial Dummy cycle added by dummy read */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		while(QSPI_IsBusy())
		{
			;
		}
	}
	
	do
	{
		if (1 == u32Length)
		{
			u8txData = READ_TERMINATION_BYTE;
		}
        else
        {
            u8txData = 0;
        }
        QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
		*pu8Data++ = u8rxData;
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (1 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	} while (--u32Length);

	SPIChipSelectDisable();		
#endif
}

/* 
    Function: LAN9252SPI_DMA_FastRead

    This function does Read Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Fast Read(0x0B)' command supported by LAN9252 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80). The fastread is executed by DMA. The 
 *  maximum configurable frequency of 80 MHz.
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u32Length       -> Length of the data

    Output : None

*/

void   LAN9252SPI_DMA_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
#ifdef INCLUDE_DUMMY
    UINT8 u8Intra_Byte_Dummy = 0, u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0;
#endif
    UINT8 u8dummy_clk_cnt = 0,u8txLen = 1;
    UINT32 u32rxLen = 1;
	
    SPIChipSelectEnable();
     
    /* Initial Dummy cycle added by dummy fastread is stored in u8dummy_clk_cnt */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INITIAL_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_READ_SETUP_BYTES + u8dummy_clk_cnt + 1;
    
    gau8DmaBuff[0] = CMD_FAST_READ;
	gau8DmaBuff[1] = (UINT8)(u16Addr >> 8);
    gau8DmaBuff[2] = (UINT8)u16Addr;
    gau8DmaBuff[3] = u32Length;
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);  
    
#ifdef INCLUDE_DUMMY
	/* Get the Intra DWORD dummy clock count */
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
    u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTER_DWORD_OFFSET];
    
    u32rxLen = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length);
    
	 /* When the buffer is read it contains Intra DWORD and Inter DWORD dummy clocks in addition to Data */
    DRV_SPIReceive(gau8DmaBuff, u32rxLen);	

    /* Extract only the data bytes and skip the other dummy bytes */	
    for(u16Itr = 0; u16Itr < u32rxLen; )
    {
        u16Dwordctr += 1;
        /* Store the data in pu8Data and skip the dummy byte positions*/
        *pu8Data++ = gau8DmaBuff[u16Itr];
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if((u16Dwordctr && 0x03) == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += u8Intra_Byte_Dummy + 1;
        }
    }
#else
    u32rxLen = u32Length;
    /* No Dummy Bytes Included*/
    /* DMA Read*/
    DRV_SPIReceive(pu8Data,u32rxLen);
#endif
    SPIChipSelectDisable();
}
/* 
    Function: LAN9252SPI_ReadPDRAM

    This function does Read Access to Ether CAT Core Process RAM  using 'Serial Read(0x03)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr    -> Address of the RAM location to be read
            *pu8Data -> Pointer to the data that is to be read
			u32Length	 -> Number of bytes to be read from PDRAM location

    Output : None

*/

void LAN9252SPI_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length)
{
   UINT32_VAL u32Val;
   UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0;
    /* Address and length */
	u32Val.w[0] = u16Addr;
	u32Val.w[1] = u32Length;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* Read command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	u8StartAlignSize = (u16Addr & 0x3);
	u8EndAlignSize = (u32Length + u8StartAlignSize) & 0x3;
	if (u8EndAlignSize & 0x3){
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}
    
#ifdef ESF_SPI_DMA_EN
    LAN9252SPI_DMA_ReadPDRAM(pu8Data, u16Addr, u8StartAlignSize, u8EndAlignSize, u32Length);
#else
	UINT8 u8dummy_clk_cnt = 0;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
    
	
	/* Read SPI FIFO */
	SPIChipSelectEnable();
 
    while(QSPI_IsBusy());    

    u8txData = CMD_SERIAL_READ;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    
    u8txData = (UINT8)0x0;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)0x04;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[1] = u8rxData;
    
    /* Initial Dummy cycle added by dummy read */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		while(QSPI_IsBusy())
		{
			;
		}
	}

	while (u8StartAlignSize--)
	{
        /* Start align read byte */
        QSPI_Read(&u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u8StartAlignSize) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}
    

    
	while (u32Length--)
	{
		if (0 == u32Length)
		{
			u8txData = READ_TERMINATION_BYTE;
		}
        else
        {
            u8txData = 0;
        }
		QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy());
        *pu8Data++ = u8rxData;
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}

	while (u8EndAlignSize--)
	{
        /* End align size Byte */
    	QSPI_Read(&u8rxData, u8rxLen);  
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u8EndAlignSize) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}
    
	SPIChipSelectDisable();
#endif
}

/* 
    Function: LAN9252SPI_DMA_ReadPDRAM

    This function does Read Access to Ether CAT Core Process RAM  using 'Serial Read(0x03)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80). The read is executed by DMA. The maximum configurable frequency 
    for read is 30 MHz. Higher frequencies are to be done by fastread.
     
    Input : u16Addr    -> Address of the RAM location to be read
            *pu8Data -> Pointer to the data that is to be read
			u32Length	 -> Number of bytes to be read from PDRAM location

    Output : None

*/

void   LAN9252SPI_DMA_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT8 u8StartAlignSize, UINT8 u8EndAlignSize, UINT32 u32Length)
{
#ifdef INCLUDE_DUMMY
    UINT8 u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0; 
#endif
    UINT8 u8dummy_clk_cnt = 0, u8Intra_Byte_Dummy = 0, u8txLen = 1;
    UINT32 u32rxLen = 1;
    
	/* Read SPI FIFO */
	SPIChipSelectEnable();
 
    /* Initial Dummy cycle added by dummy read is stored in u8dummy_clk_cnt */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INITIAL_OFFSET];
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_READ_SETUP_BYTES + u8dummy_clk_cnt + u8StartAlignSize + (u8StartAlignSize * u8Intra_Byte_Dummy);  

    gau8DmaBuff[0] = CMD_SERIAL_READ;
    gau8DmaBuff[1] = (UINT8)0x0;
    gau8DmaBuff[2] = (UINT8)0x04;
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);
    
#ifdef INCLUDE_DUMMY
 /* Get the Intra DWORD dummy clock count */
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
    u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_READ_INTER_DWORD_OFFSET];
    
    u32rxLen = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length);
	
    /* When the buffer is read it contains Intra DWORD and Inter DWORD dummy clocks in addition to Data */
    DRV_SPIReceive(gau8DmaBuff, u32rxLen);
    
    for(u16Itr = 0; u16Itr < u32rxLen;)
    {
        u16Dwordctr += 1;
        /* Store the data in pu8Data and skip the dummy byte positions*/
        *pu8Data++ = gau8DmaBuff[u16Itr];
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if((u16Dwordctr && 0x03) == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += u8Intra_Byte_Dummy + 1;
        }
    }
#else 
    u32rxLen = u32Length;
    /* No Dummy Bytes Included */
    /* DMA Read*/
    DRV_SPIReceive(pu8Data,u32rxLen);
#endif
    
	/* Get the Intra DWORD dummy clock count */
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
    u8txLen = u8EndAlignSize + (u8EndAlignSize * u8Intra_Byte_Dummy);
	
    /* Add Intra DWORD dummy clocks, avoid for last byte */
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);
    
	SPIChipSelectDisable();
}
/* 
    Function: LAN9252SPI_FastReadPDRAM

    This function does Read Access to Ether CAT Core Process RAM  using 'Fast Read(0x0B)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr    -> Address of the RAM location to be read
            *pu8Data -> Pointer to the data that is to be read
			u32Length	 -> Number of bytes to be read from PDRAM location

    Output : None
*/

void LAN9252SPI_FastReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length)
{
    UINT32_VAL u32Val;
    UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0;
    UINT16 u16XfrLen = 0, u16TotalLen = 0;
    
    u8StartAlignSize = (u16Addr & 0x3);
	u8EndAlignSize = (u32Length & 0x3) + u8StartAlignSize;
	if (u8EndAlignSize & 0x3){
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}
	
	u16TotalLen = u32Length + u8StartAlignSize + u8EndAlignSize;
	
	/* From DOS, "For the one byte transfer length format,	bit 7 is low and bits 6-0 specify the 
	length up to 127 bytes. For the two byte transfer length format, bit 7 of the first byte
	is high and bits 6-0 specify the lower 7 bits of the length. Bits 6-0 of the of the second byte 
	field specify the upper 7 bits of the length with a maximum transfer length of 16,383 bytes (16K-1)" */ 
	if (u16TotalLen <= ONE_BYTE_MAX_XFR_LEN)
	{
		u16XfrLen = u16TotalLen; 
	}
	else  
	{
		u16XfrLen = (u16TotalLen & 0x7F) | 0x80;
		u16XfrLen |= ((u16TotalLen & 0x3F80) << 1);
	}
	
	/* Address and length */
	u32Val.w[0] = u16Addr;
	u32Val.w[1] = u32Length;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* Read command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

#ifdef ESF_SPI_DMA_EN
    LAN9252SPI_DMA_FastReadPDRAM(pu8Data, u16XfrLen, u8StartAlignSize, u8EndAlignSize, u32Length);
#else
	UINT8 u8dummy_clk_cnt = 0;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;

	/* Read SPI FIFO */
	SPIChipSelectEnable();

	while(QSPI_IsBusy())
	{
		;
	}

	u8txData = CMD_FAST_READ;
	QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    
    u8txData = (UINT8)0x0;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)0x04;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
	QSPI_Sync_Wait();
	while(QSPI_IsBusy())
    {
        ;
    }
	gEscALEvent.Byte[1] = u8rxData;

	/* Send Transfer length */
    u8txData = LOBYTE(u16XfrLen);
    QSPI_Write(&u8txData, 1);
    QSPI_Sync_Wait();
	while(QSPI_IsBusy())
	{
		;
	}

	/* Two byte Xfr length */
	if (u32Length > ONE_BYTE_MAX_XFR_LEN)
	{
        u8txData = HIBYTE(u16XfrLen);
        QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
	}
	
	/* Initial Dummy cycle added by dummy read */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		while(QSPI_IsBusy())
		{
			;
		}
	}
    
	while (u8StartAlignSize--)
	{
        /* Start align Byte */
        QSPI_Read(&u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u8StartAlignSize) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}


	while (u32Length--)
	{
		if (0 == u32Length)
		{
			u8txData = READ_TERMINATION_BYTE;
		}
        else
        {
            u8txData = 0;
        }
        QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy());
        *pu8Data++ = u8rxData;
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}

	while (u8EndAlignSize--)
	{
        /* End align size Byte */
        QSPI_Read(&u8rxData, u8rxLen); 
        QSPI_Sync_Wait();
        while(QSPI_IsBusy());
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u8EndAlignSize) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}

	SPIChipSelectDisable();
#endif
}

/* 
    Function: LAN9252SPI_DMA_FastReadPDRAM

    This function does Read Access to Ether CAT Core Process RAM  using 'Fast Read(0x0B)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80). The fastread is executed by DMA. The maximum configurable frequency 
    of 80 MHz.
     
    Input : u16Addr    -> Address of the RAM location to be read
            *pu8Data -> Pointer to the data that is to be read
			u32Length	 -> Number of bytes to be read from PDRAM location

    Output : None
*/

void    LAN9252SPI_DMA_FastReadPDRAM(UINT8 *pu8Data, UINT16 u16XfrLen, UINT8 u8StartAlignSize, UINT8 u8EndAlignSize, UINT32 u32Length)
{
   #ifdef INCLUDE_DUMMY
    UINT8 u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0;
#endif
    UINT8 u8dummy_clk_cnt = 0, u8Intra_Byte_Dummy = 0, u8txLen = 1;
    UINT32 u32rxLen = 1;
    
	/* Read SPI FIFO */
	SPIChipSelectEnable();
    
    /* Initial Dummy cycle added by dummy fastread is stored in u8dummy_clk_cnt */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INITIAL_OFFSET];
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_FASTREAD_SETUP_BYTES + u8dummy_clk_cnt + u8StartAlignSize + (u8StartAlignSize * u8Intra_Byte_Dummy);
	
    gau8DmaBuff[0] = CMD_FAST_READ;
	gau8DmaBuff[1] = (UINT8)0x0;
    gau8DmaBuff[2] = (UINT8)0x04;
	/* Send Transfer length */
    gau8DmaBuff[3] = LOBYTE(u16XfrLen);
	
    /* Two byte Xfr length */
	if (u32Length > ONE_BYTE_MAX_XFR_LEN)
	{
        gau8DmaBuff[4] = HIBYTE(u16XfrLen);
        /* DMA Write*/
        DRV_SPITransfer(gau8DmaBuff, u8txLen);
	}
    else
    {
        /* DMA Write*/
        DRV_SPITransfer(gau8DmaBuff, (u8txLen - 1));
    }
    
#ifdef INCLUDE_DUMMY
    /* Get the Intra DWORD dummy clock count */
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
    u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTER_DWORD_OFFSET];
    
    u32rxLen = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length); 
	
    /* When the buffer is read it contains Intra DWORD and Inter DWORD dummy clocks in addition to Data */
    DRV_SPIReceive(gau8DmaBuff, u32rxLen);
    
    /* Extract only the data bytes and skip the other dummy bytes */
    for(u16Itr = 0; u16Itr < u32rxLen;)
    {
        u16Dwordctr += 1;
        /* Store the data in pu8Data and skip the dummy byte positions*/
        *pu8Data++ = gau8DmaBuff[u16Itr];
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if(u16Dwordctr && 0x03 == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += u8Intra_Byte_Dummy + 1;
        }
    }
#else
    u32rxLen = u32Length;
    /* No Dummy Bytes Included*/
    /* DMA Read*/
    DRV_SPIReceive(pu8Data,u32rxLen);
#endif
    /* Get the Intra DWORD dummy clock count */
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
    u8txLen = u8EndAlignSize + (u8EndAlignSize * u8Intra_Byte_Dummy);
	
    /* Add Intra DWORD dummy clocks, avoid for last byte */
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);

	SPIChipSelectDisable(); 
}
/* 
    Function: LAN9252SPI_WritePDRAM

    This function does Write Access to Ether CAT Core Process RAM  using 'Serial Write(0x02)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr    -> Address of the RAM location to be written
            *pu8Data -> Pointer to the data that is to be written
			u32Length	 -> Number of bytes to be written to PDRAM location

    Output : None

*/

void LAN9252SPI_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT32 u32Length)
{
    UINT32_VAL u32Val;
    UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0;
    
    /* Address and length */
	u32Val.w[0] = u16Addr;
	u32Val.w[1] = u32Length;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* write command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
	
	u8StartAlignSize = (u16Addr & 0x3);
//	u8EndAlignSize = (u16Len & 3) + u8StartAlignSize;
	// Changed for a bug identified with HBI - Demux BSP
	u8EndAlignSize = (u32Length + u8StartAlignSize) & 0x3;
	if (u8EndAlignSize & 0x3){
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}
	
#ifdef ESF_SPI_DMA_EN
	LAN9252SPI_DMA_WritePDRAM(pu8Data, u16Addr, u8StartAlignSize, u8EndAlignSize, u32Length);
#else
	UINT8 u8dummy_clk_cnt = 0; 
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;

	/* Writing to FIFO */
	SPIChipSelectEnable();

    while(QSPI_IsBusy())
    {
        ;
    }

    u8txData = CMD_SERIAL_WRITE;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
	while(QSPI_IsBusy())
	{
		;
	}
    
	u8txData = (UINT8)0x0;
	QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
	while(QSPI_IsBusy())
	{
		;
	}
	gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)0x20;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[1] = u8rxData;
	
	/* Initial Dummy cycle added by dummy write */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		while(QSPI_IsBusy())
		{
			;
		}
	}
    
	while (u8StartAlignSize--)
	{
        QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        while((QSPI_IsBusy()))
        {
            ;
        }
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u8StartAlignSize) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}
    
	while (u32Length--)
	{
        u8txData = *pu8Data;
		QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy());
        pu8Data++;
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}

	while (u8EndAlignSize--)
	{        
        u8txData = 0x0;
		QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy());
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u8EndAlignSize) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                while(QSPI_IsBusy())
                {
                    ;
                }
            }
        }
	}
	
	SPIChipSelectDisable();	
#endif
}

/* 
    Function: LAN9252SPI_DMA_WritePDRAM

    This function does Write Access to Ether CAT Core Process RAM  using 'Serial Write(0x02)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80). The write is executed by DMA. The maximum configurable frequency is 80 MHz.
     
    Input : u16Addr    -> Address of the RAM location to be written
            *pu8Data -> Pointer to the data that is to be written
			u32Length	 -> Number of bytes to be written to PDRAM location

    Output : None

*/

void   LAN9252SPI_DMA_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT8 u8StartAlignSize, UINT8 u8EndAlignSize, UINT32 u32Length)
{
#ifdef INCLUDE_DUMMY
    UINT8 u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0;
#endif
    UINT8 u8dummy_clk_cnt = 0, u8Intra_Byte_Dummy = 0, u8txLen = 1;
    UINT32 u32txSize = 1;

	/* Writing to FIFO */
	SPIChipSelectEnable();

    /* Initial Dummy cycle added by dummy write is stored in u8dummy_clk_cnt */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INITIAL_OFFSET];
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_WRITE_SETUP_BYTES + u8dummy_clk_cnt + u8StartAlignSize + (u8StartAlignSize * u8Intra_Byte_Dummy);
    
    gau8DmaBuff[0] = CMD_SERIAL_WRITE;
    gau8DmaBuff[1] = (UINT8)0x0;
	gau8DmaBuff[2] = (UINT8)0x20;
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);
    
#ifdef INCLUDE_DUMMY	
/* Get the Intra DWORD dummy clock count */     
u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_WRITE_INTER_DWORD_OFFSET];
    
u32txSize = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length);

/* Add Intra DWORD and Inter DWORD dummy clocks, avoid for last byte */
 for(u16Itr = 0; u16Itr < u32txSize;)
    {
        u16Dwordctr += 1;
        /* Store the data in the buff and skip the dummy byte positions*/
        gau8DmaBuff[u16Itr] = *pu8Data;
		pu8Data++;
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if(u16Dwordctr && 0x03 == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += (u8Intra_Byte_Dummy + 1);
        
        }
    }

    /* DMA Write*/
	DRV_SPITransfer(gau8DmaBuff, u32txSize);
#else
    u32txSize = u32Length;
    /* No Dummy Bytes Included*/
    /* DMA Write*/
	DRV_SPITransfer(pu8Data, u32txSize);
#endif
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
    u8txLen = u8EndAlignSize + (u8EndAlignSize * u8Intra_Byte_Dummy);
	/* Add Intra DWORD dummy clocks, avoid for last byte */
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);
	
	SPIChipSelectDisable();
}
#endif

#if _IS_SPI_DIRECT_MODE_ACCESS
/* LAN9253 */
/* 
    Function: LAN9253SPI_Write

    This function does Write Access to Non-Ether CAT core CSR, Ether CAT Core CSR and Process RAM
	using 'Serial Write(0x02)' command supported by LAN9253 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9253 Compatible SPI (0x82)
     
    Input : u16Adddr    -> Address of the register to be written
            *pu8Data  -> Pointer to the data that is to be written
			u32Length  -> Number of bytes to be written 

    Output : None
	
	Note   : Since now SPI is running at 5MHz, Serial Write is successful without any dummy bytes or wait
			 signal. But, as the SPI clock speed increases, we have to follow either of these. 

*/

void LAN9253SPI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
    UINT32 u32ModLen = 0;
    
    /* Core CSR and Process RAM accesses can have any alignment and length */
	if (u16Addr < 0x3000)
	{
		/* DWORD Buffering - Applicable for Write only */
		if (u32Length > 1)
		{
			u16Addr |= 0xC000; 	/* addr[15:14]=11 */
		}
		else
		{
			/* Do Nothing */
		}
	}
	else
	{
		/* Non Core CSR length will be adjusted if it is not DWORD aligned */
		u32ModLen = u32Length % 4;
		if (1 == u32ModLen)
		{
			u32Length = u32Length + 3;
		}
		else if (2 == u32ModLen)
		{
			u32Length = u32Length + 2;
		}
		else if (3 == u32ModLen)
		{
			u32Length = u32Length + 1;
		}
		else
		{
			/* Do nothing if length is 0 since it is DWORD access */
		}
	}
    
#ifdef ESF_SPI_DMA_EN
    LAN9253SPI_DMA_Write(u16Addr, pu8Data, u32Length);
#else
#ifdef IS_SUPPORT_DUMMY_CYCLE
    UINT32 u8dummy_clk_cnt = 0;
#endif
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;

	SPIChipSelectEnable();

	MCHP_ESF_GPIO_SET(GPIO_T_MEA);	
	u8txData = CMD_SERIAL_WRITE;
	QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
	
    
	u8txData = (UINT8)(u16Addr >> 8);
	QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
	
	gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)u16Addr;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
	
	gEscALEvent.Byte[1] = u8rxData;
    MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);
#ifdef IS_SUPPORT_DUMMY_CYCLE    
	/* Initial Dummy cycle added by dummy read */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INITIAL_OFFSET];
	MCHP_ESF_GPIO_SET(GPIO_T_MEA);
    while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		
	} 
    #endif
    MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);
     	do
	{
        u8txData = *pu8Data++;
        QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
    
#ifdef IS_SUPPORT_DUMMY_CYCLE        
        /* Get the Intra DWORD dummy clock count */
        MCHP_ESF_GPIO_SET(GPIO_T_MEA);
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (1 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                
            }
        }
        MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);
#endif
	} while (--u32Length);
    MCHP_ESF_GPIO_SET(GPIO_T_MEA);
    MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);

	SPIChipSelectDisable();
#endif

}
/* 
    Function: LAN9253SPI_DMA_Write

    This function does Write Access to Non-Ether CAT core CSR, Ether CAT Core CSR and Process RAM
	using 'Serial Write(0x02)' command supported by LAN9253 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9253 Compatible SPI (0x82). The write is executed by DMA. The maximum
    configurable frequency is 80 MHz.
     
    Input : u16Adddr    -> Address of the register to be written
            *pu8Data  -> Pointer to the data that is to be written
			u32Length  -> Number of bytes to be written 

    Output : None
	
	Note   : Since now SPI is running at 5MHz, Serial Write is successful without any dummy bytes or wait
			 signal. But, as the SPI clock speed increases, we have to follow either of these. 

*/

 void   LAN9253SPI_DMA_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
 {
 #ifdef INCLUDE_DUMMY
    UINT8 u8Intra_Byte_Dummy = 0, u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0;
#endif
    UINT8 u8dummy_clk_cnt = 0,u8txLen = 1;
    UINT32 u32txSize = 1;

	SPIChipSelectEnable();

#ifdef IS_SUPPORT_DUMMY_CYCLE   
    /* Initial Dummy cycle added by dummy write is stored in u8dummy_clk_cnt */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INITIAL_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_WRITE_SETUP_BYTES + u8dummy_clk_cnt;
    
    gau8DmaBuff[0] = CMD_SERIAL_WRITE;
    gau8DmaBuff[1] = (UINT8)(u16Addr >> 8);
    gau8DmaBuff[2] = (UINT8)u16Addr;
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);
    
#ifdef INCLUDE_DUMMY
/* Get the Intra DWORD dummy clock count */     
u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_WRITE_INTER_DWORD_OFFSET];

u32txSize = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length);   

/* Add Intra DWORD and Inter DWORD dummy clocks, avoid for last byte */
 for(u16Itr = 0; u16Itr < u32txSize;)
    {
        u16Dwordctr += 1;
        /* Store the data in the buff and skip the dummy byte positions*/
        gau8DmaBuff[u16Itr] = *pu8Data;
		pu8Data++;
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if((u16Dwordctr & 0x03) == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += u8Intra_Byte_Dummy + 1;
        }
    }

    /* DMA Write*/
	DRV_SPITransfer(gau8DmaBuff, u32txSize);
    
#endif 
#else
    u32txSize = u32Length;
/* No Dummy Bytes Included*/
    /* DMA Write*/
	DRV_SPITransfer(pu8Data, u32txSize);
    
#endif
  
	SPIChipSelectDisable();
 }
/* 
    Function: LAN9253SPI_Read

    This function does Read Access to Non-Ether CAT core CSR, Ether CAT Core CSR and Process RAM
	using 'Serial Read(0x03)' command supported by LAN9253 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9253 Compatible SPI (0x82)
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u32Length   -> Length of the data

    Output : None

*/

void LAN9253SPI_Read(UINT16 u16Addr, UINT8 *pu8data, UINT32 u32Length)
{
    UINT32 u32ModLen = 0;
    
    /* Core CSR and Process RAM accesses can have any alignment and length */
	if (u16Addr < 0x3000)
	{
		if (u32Length>1)
		{
			/* Use Auto-increment if number of bytes to read is more than 1 */
			u16Addr |= 0x4000;			
		}

	}
	else
	{
		/* Non Core CSR length will be adjusted if it is not DWORD aligned */
		u32ModLen = u32Length % 4; 
		if (1 == u32ModLen)
		{
			u32Length = u32Length + 3; 
		}
		else if (2 == u32ModLen)
		{
			u32Length = u32Length + 2; 
		}
		else if (3 == u32ModLen)
		{
			u32Length = u32Length + 1; 
		}
		else 
		{
			/* Do nothing if length is 0 since it is DWORD access */
		}
	}
    
#ifdef ESF_SPI_DMA_EN
    LAN9253SPI_DMA_Read(u16Addr, pu8data, u32Length);
#else
#ifdef IS_SUPPORT_DUMMY_CYCLE	
	UINT8 u8dummy_clk_cnt = 0;
#endif
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
	
	SPIChipSelectEnable();

    u8txData = CMD_SERIAL_READ;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    
    
    u8txData = (UINT8)(u16Addr >> 8);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)u16Addr;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    
    gEscALEvent.Byte[1] = u8rxData;
#ifdef IS_SUPPORT_DUMMY_CYCLE    
	/* Initial Dummy cycle added by dummy read */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		
	}
#else
    QSPI_Read(&u8rxData, u8rxLen);
	QSPI_Sync_Wait();
#endif    
	do
	{
		if (1 == u32Length)
		{
            u8txData = READ_TERMINATION_BYTE;
		}
        else
        {
            u8txData = 0;
        }
        QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        
		*pu8data++ = u8rxData;
#ifdef IS_SUPPORT_DUMMY_CYCLE        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (1 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                
            }
        }
#endif
	} while (--u32Length);

	SPIChipSelectDisable();	
#endif
}

/* 
    Function: LAN9253SPI_DMA_Read

    This function does Read Access to Non-Ether CAT core CSR, Ether CAT Core CSR and Process RAM
	using 'Serial Read(0x03)' command supported by LAN9253 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9253 Compatible SPI (0x82). The read is executed by DMA. And the
 *  maximum configurable frequency for read is 30 MHz. Higher frequencies are to be done by fastread.
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u32Length   -> Length of the data

    Output : None

*/

void   LAN9253SPI_DMA_Read(UINT16 u16Addr, UINT8 *pu8data, UINT32 u32Length)
{
#ifdef INCLUDE_DUMMY	
	UINT8 u8Intra_Byte_Dummy = 0, u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0;
#endif
    UINT8 u8dummy_clk_cnt = 0,u8txLen = 1;
    UINT32 u32rxLen = 1;

	SPIChipSelectEnable();

#ifdef IS_SUPPORT_DUMMY_CYCLE 
     /* Initial Dummy cycle added by dummy read is stored in u8dummy_clk_cnt */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_READ_INITIAL_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_READ_SETUP_BYTES + u8dummy_clk_cnt;
    
    gau8DmaBuff[0] = CMD_SERIAL_READ;
    gau8DmaBuff[1] = (UINT8)(u16Addr >> 8);
    gau8DmaBuff[2] = (UINT8)u16Addr;
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);

#else
    u8txLen = 1;
    /* DMA Read*/
    DRV_SPIReceive(&gau8DmaBuff, u8txLen);
	
#endif    
    
#ifdef INCLUDE_DUMMY
 /* Get the Intra DWORD dummy clock count */
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_READ_INTRA_DWORD_OFFSET];
    u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_READ_INTER_DWORD_OFFSET];
    
    u32rxLen = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length); 
	
    /* When the buffer is read it contains Intra DWORD and Inter DWORD dummy clocks in addition to Data */
    DRV_SPIReceive(gau8DmaBuff, u32rxLen);
   
	/* Extract only the data bytes and skip the other dummy bytes */
    for(u16Itr = 0; u16Itr < u32rxLen;)
    {
        u16Dwordctr += 1;
        /* Store the data in pu8Data and skip the dummy byte positions*/
        *pu8data++ = gau8DmaBuff[u16Itr];
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if((u16Dwordctr & 0x03) == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += u8Intra_Byte_Dummy + 1;
        }
    }

#else 
    u32rxLen = u32Length ;
    /* No Dummy Bytes Included */
    /* DMA Read*/
    DRV_SPIReceive(pu8data, u32rxLen);
   
#endif
	SPIChipSelectDisable();
}
/* 
    Function: LAN9253SPI_FastRead

    This function does Read Access to Non-Ether CAT core CSR, Ether CAT Core CSR and Process RAM
	using 'Fast Read(0x0B)' command supported by LAN9253 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9253 Compatible SPI (0x82)
     
    Input : u16Addr    -> Address of the register to be read
            *pu8Data -> Pointer to the data that is to be read
			u32Length -> Number of bytes to be read 

*/

void LAN9253SPI_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
    UINT8 u8StartAlignSize = 0;
    UINT16 u16XfrLen = 0;
	UINT32 u32ModLen = 0;
    
    /* Core CSR and Process RAM accesses can have any alignment and length */
	if (u16Addr < 0x3000)
	{
		/* Use Auto-increment for incrementing byte address*/
		u16Addr |= 0x4000;			
		
		/* To calculate initial number of dummy bytes which is based on starting address */
		u8StartAlignSize = (u16Addr & 0x3); 
	}
	else 
	{  	/* System CSRs are DWORD aligned and are a DWORD in length. Non- DWORD aligned / non-DWORD length access 
	is not supported. */
		u32ModLen = u32Length % 4;
		if (1 == u32ModLen)
		{
			u32Length = u32Length + 3;
		}
		else if (2 == u32ModLen)
		{
			u32Length = u32Length + 2;
		}
		else if (3 == u32ModLen)
		{
			u32Length = u32Length + 1;
		}
		else
		{
			/* Do nothing is length is 0 */
		}		
	}

	/* From DOS, "For the one byte transfer length format,	bit 7 is low and bits 6-0 specify the 
	length up to 127 bytes. For the two byte transfer length format, bit 7 of the first byte
	is high and bits 6-0 specify the lower 7 bits of the length. Bits 6-0 of the of the second byte 
	field specify the upper 7 bits of the length with a maximum transfer length of 16,383 bytes (16K-1)" */ 
	if (u32Length <= ONE_BYTE_MAX_XFR_LEN)
	{
		u16XfrLen = u32Length; 
	}
	else  
	{
		u16XfrLen = (u32Length & 0x7F) | 0x80;
		u16XfrLen |= ((u32Length & 0x3F80) << 1);
	}
#ifdef ESF_SPI_DMA_EN
    LAN9253SPI_DMA_FastRead(u16Addr, pu8Data, u8StartAlignSize, u16XfrLen, u32Length);
#else
    UINT8 u8Itr = 0;
#ifdef IS_SUPPORT_DUMMY_CYCLE
    UINT8 u8dummy_clk_cnt = 0;
#endif
	UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
	
	SPIChipSelectEnable();
    
	MCHP_ESF_GPIO_SET(GPIO_T_MEA);
    u8txData = CMD_FAST_READ;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
	
    
	u8txData = (UINT8)(u16Addr >> 8);
	QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
	
	gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)u16Addr;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    
    gEscALEvent.Byte[1] = u8rxData;
	
    /* Send Transfer length */
    u8txData = (UINT8)(LOBYTE(u16XfrLen));
    QSPI_Write(&u8txData, u8txLen);
    QSPI_Sync_Wait();
    
	/* Two byte Xfr length */
	if (u32Length > ONE_BYTE_MAX_XFR_LEN)
	{
        u8txData = (UINT8)(HIBYTE(u16XfrLen));
        QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        
	}
    MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);
#ifdef IS_SUPPORT_DUMMY_CYCLE	
    /* Initial Dummy cycle added by dummy read */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INITIAL_OFFSET];
    
    MCHP_ESF_GPIO_SET(GPIO_T_MEA);
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		
	}
    MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);
#else
    QSPI_Read(&u8rxData, u8rxLen);
	QSPI_Sync_Wait();
#endif
	/* 1 default dummy + extra dummies based on address that needs to be accessed. 
	   As per UNG_JUTLAND2-104, "For Fast reads with Non DWORD aligned address, 
	   Dummy data will be sent before the actual data. 
	   So to read 2001 you will get a dummy byte and then data in address 2001. 
	   Sw needs to handle dummy data in case of non DWORD address reads" */
	for (u8Itr = 0; u8Itr < u8StartAlignSize; u8Itr++) 
	{
        
        QSPI_Read(&u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        
#ifdef IS_SUPPORT_DUMMY_CYCLE    
        MCHP_ESF_GPIO_SET(GPIO_T_MEA);
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
        while (u8dummy_clk_cnt--)
        {
            QSPI_Read(&u8rxData, u8rxLen);
            QSPI_Sync_Wait();               
        }
        MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);
#endif
	}
    
	
	do
	{
        
        QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        
		*pu8Data++ = u8rxData;
#ifdef IS_SUPPORT_DUMMY_CYCLE		
        MCHP_ESF_GPIO_SET(GPIO_T_MEA);
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (1 != u32Length) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                
            }
        }
        MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);
        
#endif
	} while (--u32Length);
	MCHP_ESF_GPIO_SET(GPIO_T_MEA);
    MCHP_ESF_GPIO_CLEAR(GPIO_T_MEA);
	SPIChipSelectDisable();
#endif
}

/* 
    Function: LAN9253SPI_DMA_FastRead

    This function does Read Access to Non-Ether CAT core CSR, Ether CAT Core CSR and Process RAM
	using 'Fast Read(0x0B)' command supported by LAN9253 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9253 Compatible SPI (0x82). The fastread is executed by DMA. The 
 *  maximum configurable frequency of 80 MHz.
     
    Input : u16Addr    -> Address of the register to be read
            *pu8Data -> Pointer to the data that is to be read
			u32Length -> Number of bytes to be read 

*/

void   LAN9253SPI_DMA_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8StartAlignSize, UINT16 u16XfrLen, UINT32 u32Length)
{
#ifdef INCLUDE_DUMMY
    UINT8 u8Inter_Dword_Dummy = 0;
    UINT16 u16Itr = 0, u16Dwordctr = 0;
#endif
	UINT8 u8dummy_clk_cnt = 0, u8Intra_Byte_Dummy = 0, u8txLen = 1;
	UINT32 u32rxLen = 1;
	
    SPIChipSelectEnable();
    
/* 1 default dummy + extra dummies based on address that needs to be accessed. 
	   As per UNG_JUTLAND2-104, "For Fast reads with Non DWORD aligned address, 
	   Dummy data will be sent before the actual data. 
	   So to read 2001 you will get a dummy byte and then data in address 2001. 
	   Sw needs to handle dummy data in case of non DWORD address reads" */	
#ifdef IS_SUPPORT_DUMMY_CYCLE 
    /* Initial Dummy cycle added by dummy fastread is stored in u8dummy_clk_cnt */
    u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INITIAL_OFFSET];
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
    
    /* Setup phase and Dummy phase is transmitted together by DMA*/
    u8txLen = SPI_FASTREAD_SETUP_BYTES + u8dummy_clk_cnt + u8StartAlignSize + (u8StartAlignSize * u8Intra_Byte_Dummy);
    
    gau8DmaBuff[0] = CMD_FAST_READ;
	gau8DmaBuff[1] = (UINT8)(u16Addr >> 8);
    gau8DmaBuff[2] = (UINT8)u16Addr;
    
    /* Send Transfer length */
    gau8DmaBuff[3] = (UINT8)(LOBYTE(u16XfrLen));
    
    
	/* Two byte Xfr length */
	if (u32Length > ONE_BYTE_MAX_XFR_LEN)
	{
        gau8DmaBuff[4] = (UINT8)(HIBYTE(u16XfrLen));
        /* DMA Write*/
        DRV_SPITransfer(gau8DmaBuff, u8txLen);
	}
  
    else
    {
        /* DMA Write*/
        DRV_SPITransfer(gau8DmaBuff, (u8txLen - 1));
    }
#else
    u8txLen = 1;
    /* DMA Read*/
    DRV_SPIReceive(&gau8DmaBuff, u8txLen);
#endif
	
#ifdef INCLUDE_DUMMY
    /* Get the Intra DWORD dummy clock count */
    u8Intra_Byte_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
    u8Inter_Dword_Dummy = gau8DummyCntArr[SPI_FASTREAD_INTER_DWORD_OFFSET];
    
    u32rxLen = DMA_Buffsize_Calculate (u8Intra_Byte_Dummy, u8Inter_Dword_Dummy, u32Length);
	
    /* When the buffer is read it contains Intra DWORD and Inter DWORD dummy clocks in addition to Data */
    DRV_SPIReceive(gau8DmaBuff, u32rxLen);
    
    /* Extract only the data bytes and skip the other dummy bytes */
    for(u16Itr = 0; u16Itr < u32rxLen;)
    {
        u16Dwordctr += 1;
        /* Store the data in pu8Data and skip the dummy byte positions*/
        *pu8Data++ = gau8DmaBuff[u16Itr];
        
        /*After every 4 bytes add Inter Dummy else Intra dummy*/
        if(u16Dwordctr && 0x03 == 0)
        {
            u16Itr += u8Inter_Dword_Dummy + 1;
            u16Dwordctr = 0;
        }
        else
        {
            u16Itr += u8Intra_Byte_Dummy + 1;
        }
    }

#else 
    u32rxLen = u32Length ;
    /* No Dummy Bytes Included */
    /* DMA Read*/
    DRV_SPIReceive(pu8Data,u32rxLen);
#endif
	SPIChipSelectDisable();
}
#endif

#ifdef _IS_SPI_BECKHOFF_MODE_ACCESS
/* 
    Function: BeckhoffSPI_Write

    This function does Write Access to Non-Ether CAT Core CSR, Ether CAT Core CSR and 
	Process RAM using Write(0x04) command supported by Beckhoff SPI. This function shall be used
	only when PDI is selected as Beckhoff SPI (0x05)
     
    Input : u16Addr    -> Address of the register/RAM location to be written
            *pu8Data -> Pointer to the data that is to be written
			u32Length -> Number of bytes to be written 

    Output : None
*/
	
void BeckhoffSPI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
    /* Non Ether CAT Core CSRs are always DWORD aligned and should be accessed by DWORD length */
	if (u16Addr >= 0x3000)
	{
		u32Length = 4; 
	}
#ifdef ESF_SPI_DMA_EN
    BeckhoffSPI_DMA_Write(u16Addr, pu8Data, u32Length);
#else
    UINT8 u8BeckhoffCmd = ESC_WR;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
	
	SPIChipSelectEnable();
	
	while(QSPI_IsBusy())
	{
		;
	}
	
	u8txData = (u16Addr & 0x1FE0) >> 5;
    
    
    
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = ((u16Addr & 0x001F) << 3) | 0x06;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[1] = u8rxData;
    
    u8txData = (HIBYTE(u16Addr) & 0xE0) | (u8BeckhoffCmd << 2);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    	
	do
	{
        u8txData = *pu8Data++;
        QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
	} while (--u32Length);
	
	SPIChipSelectDisable();
#endif
}

/* 
    Function: BeckhoffSPI_DMA_Write

    This function does Write Access to Non-Ether CAT Core CSR, Ether CAT Core CSR and 
	Process RAM using Write(0x04) command supported by Beckhoff SPI. This function shall be used
	only when PDI is selected as Beckhoff SPI (0x05). The write is executed by DMA. The maximum
    configurable frequency in beckhoff write is limited to 40 MHz.
     
    Input : u16Addr    -> Address of the register/RAM location to be written
            *pu8Data -> Pointer to the data that is to be written
			u32Length -> Number of bytes to be written 

    Output : None
*/

void   BeckhoffSPI_DMA_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
    UINT8 u8BeckhoffCmd = ESC_WR, u8txLen = 0;
    UINT16 u16Itr = 0;
    UINT32 u32txSize = 0;
	
	SPIChipSelectEnable();
	
    u32txSize = u32Length;
    
    /* Setup phase is transmitted together by DMA, No dummy phase in Beckhoff mode*/
    u8txLen = SPI_WRITE_SETUP_BYTES;  
	
	gau8DmaBuff[0] = (u16Addr & 0x1FE0) >> 5;
    gau8DmaBuff[1] = ((u16Addr & 0x001F) << 3) | 0x06;
    gau8DmaBuff[2] = (HIBYTE(u16Addr) & 0xE0) | (u8BeckhoffCmd << 2);
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u8txLen);
    
    for(u16Itr =0 ; u16Itr < u32Length; u16Itr += 1)
    {
        gau8DmaBuff[u16Itr] = *pu8Data;
		pu8Data++;
    }
    
    /* DMA Write*/
    DRV_SPITransfer(gau8DmaBuff, u32txSize);
    
	SPIChipSelectDisable();
}
/* 
    Function: BeckhoffSPI_Read

    This function does Read Access to Non-Ether CAT Core CSR, Ether CAT Core CSR and 
	Process RAM using 'Read(0x02)' command supported by Beckhoff SPI.
	This function shall be used only when PDI is selected as Beckhoff SPI (0x05)
     
    Input : u16Addr    -> Address of the register/RAM location to be written
            *pu8Data -> Pointer to the data that is to be written
			u32Length -> Number of bytes to be written 

    Output : None
*/

void BeckhoffSPI_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
    /* Non Ether CAT Core CSRs are always DWORD aligned and should be accessed by DWORD length */
	if (u16Addr >= 0x3000)
	{
		u32Length = 4;
	}
#ifdef ESF_SPI_DMA_EN
    BeckhoffSPI_DMA_Read(u16Addr, pu8Data, u32Length);
#else
    UINT8 u8BeckhoffCmd = ESC_RD_WAIT_STATE;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
		
	SPIChipSelectEnable();

	/* AL Event register bits will be outputted on SPI line - 0x220, 0x221 and 0x222 */
	while(QSPI_IsBusy())
	{
		;
	}

	u8txData = (u16Addr & 0x1FE0) >> 5;
	QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
	QSPI_Sync_Wait();
	while(QSPI_IsBusy())
	{
		;
	}
	gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = ((u16Addr & 0x001F) << 3) | 0x06;
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[1] = u8rxData;
    
    u8txData = (HIBYTE(u16Addr) & 0xE0) | (u8BeckhoffCmd << 2);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
	
    /* Master can either wait for 240ns time or use Wait state byte
     * after last byte of addr/cmd or 
     * before initiating the clock for data phase. */
    u8txData = WAIT_STATE_BYTE;
	QSPI_Write(&u8txData, u8txLen);
	QSPI_Sync_Wait();
	while(QSPI_IsBusy())
	{
		;
	}
	u8txData = 0;
	do
	{
		if (1 == u32Length)
		{
			u8txData = READ_TERMINATION_BYTE;
		}
		QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy())
        {
            ;
        }
		*pu8Data++ = u8rxData;
	} while (--u32Length);
	
	SPIChipSelectDisable();
#endif
}

/* 
    Function: BeckhoffSPI_DMA_Read

    This function does Read Access to Non-Ether CAT Core CSR, Ether CAT Core CSR and 
	Process RAM using 'Read(0x02)' command supported by Beckhoff SPI.
	This function shall be used only when PDI is selected as Beckhoff SPI (0x05).
    The read is implemented by DMA. The maximum configurable frequency for read is limited
    to 40 MHz for Beckhoff read.
     
    Input : u16Addr    -> Address of the register/RAM location to be written
            *pu8Data -> Pointer to the data that is to be written
			u32Length -> Number of bytes to be written 

    Output : None
*/

void   BeckhoffSPI_DMA_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{
    UINT8 u8BeckhoffCmd = ESC_RD_WAIT_STATE;
    	
	SPIChipSelectEnable();
    
	/* AL Event register bits will be outputted on SPI line - 0x220, 0x221 and 0x222 */
	gau8DmaBuff[0] = (u16Addr & 0x1FE0) >> 5;
	gau8DmaBuff[1] = ((u16Addr & 0x001F) << 3) | 0x06; 
    gau8DmaBuff[2] = (HIBYTE(u16Addr) & 0xE0) | (u8BeckhoffCmd << 2);
    
    /* Master can either wait for 240ns time or use Wait state byte
     * after last byte of addr/cmd or 
     * before initiating the clock for data phase. */
    
    gau8DmaBuff[3] = WAIT_STATE_BYTE;
    gau8DmaBuff[3+u32Length] = READ_TERMINATION_BYTE;
    
    memset(&gau8DmaBuff[4],0, u32Length);
    
    /* DMA Write*/
	DRV_SPITransfer(gau8DmaBuff, SPI_FASTREAD_SETUP_BYTES - 1);
    
    /* DMA Read*/
    DRV_SPIReceive(&gau8DmaBuff[4], u32Length);
    
    memcpy(pu8Data, &gau8DmaBuff[4],u32Length);

	SPIChipSelectDisable();
}
#endif

#ifdef _IS_SQI_INDIRECT_MODE_ACCESS
/* 
    Function: LAN9252SQI_Write

    This function does Write Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Serial Write(0x02)' command in Quad mode supported by 
    LAN9252 Compatible SQI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80)
     
    Input : u16Adddr    -> Address of the register to be written
            *pu8Data    -> Pointer to the data that is to be written
            u8Len       -> Length of the data to write

    Output : None
	
	Note   : In LAN9252 Compatible SQI, all registers are DWORD aligned. 
    Length will be fixed to 4. Hence, there is no separate length argument.
*/

void LAN9252SQI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8Len)
{
    qspi_memory_xfer_t qspi_xfer;
	UINT32 u32InstrAddr = 0;
   // UINT8 u8Dummy = 0;

    memset((void *)&qspi_xfer, 0, sizeof(qspi_memory_xfer_t));
	qspi_xfer.instruction = CMD_SERIAL_WRITE;
    qspi_xfer.width = QUAD_CMD;
    
    /* Get the dummy byte count */
    /* SPECIAL CASE - Reduce 1 byte clock cycle count from byDummy
     * SAMD51 supports 24 bit and 32 bit addressing format
     * LAN925x expects 16bit addressing format
     * So In order to support SAMD51, converting the 16bit address to 24bit
     * treating the extra address byte as dummy cycle, 
     * so reduce the 1 byte dummy cycle from the requested.
     */
    //u8Dummy = (gau8DummyCntArr[SQI_WRITE_INITIAL_OFFSET] - 1);
    u32InstrAddr = u16Addr;
    u32InstrAddr = u32InstrAddr << 8;

    /* Note - in case if inter/intra DWORD dummy clocks used
     * Added byDummy to wLen to avoid error "set but not used"
     * In our case byDummy always come as zero, so no change
     * require in destination memory
     */
    QSPI_MemoryWrite(&qspi_xfer, (UINT32 *)&pu8Data[0], u8Len, u32InstrAddr);
    
}

/* 
    Function: LAN9252SQI_Read

    This function does Read Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Fast Read(0x0B)' command supported by LAN9252 Compatible SPI. 
    This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u8Len       -> Length of the data to be read

    Output : None
	
	Note   : In LAN9252 Compatible SQI, all registers are DWORD aligned. 
            Length will be fixed to 4. Hence,
			there is no separate length argument.
*/

void LAN9252SQI_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8Len)
{
    qspi_memory_xfer_t qspi_xfer;
    UINT8 u8Dummy = 0;
	UINT32 u32InstrAddr = 0;
    
    memset((void *)&qspi_xfer, 0, sizeof(qspi_memory_xfer_t));
	qspi_xfer.instruction = CMD_FAST_READ;
    qspi_xfer.width = QUAD_CMD;
    
    /* Get the number of dummy bytes required */
    u8Dummy = gau8DummyCntArr[SQI_FASTREAD_INITIAL_OFFSET];
    u32InstrAddr = u16Addr;
    u32InstrAddr = (u32InstrAddr << 8) | u8Len;

    QSPI_MemoryRead(&qspi_xfer, (UINT32 *)&gau8rx_data[0], u8Len + u8Dummy, u32InstrAddr);

    //https://jira.microchip.com/browse/UNG_JUTLAND2-278
    //Fix is added for odd address failure
    u8Dummy += (u16Addr & 0x3);
    
    memcpy (pu8Data, gau8rx_data + u8Dummy, u8Len);
}

/* 
    Function: LAN9252SQI_ReadPDRAM

    This function does Read Access to Ether CAT Core Process RAM  using 
    'Fast Read(0x0B)' command supported by LAN9252 Compatible SQI.
    This function shall be used only when PDI is selected as
	LAN9252 Compatible SQI (0x80)
     
    Input : u16Addr    -> Address of the RAM location to be read
            *pu8Data -> Pointer to the data that is to be read
			u16Len	 -> Number of bytes to be read from PDRAM location

    Output : None

*/

void LAN9252SQI_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len)
{
	UINT32_VAL u32Val;
	UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0,u8Itr = 0;
    
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
    
    //https://jira.microchip.com/browse/UNG_JUTLAND2-278
    //Fix is added for odd address failure
    for (u8Itr = 0; u8Itr < u16Len; u8Itr++)
    {
       *pu8Data++ = u32Val.v[u8Itr+((u16Addr & 0x3))];
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

void LAN9252SQI_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len)
{
	UINT32_VAL u32Val;
	UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0;
    UINT8 *pu8Ptr;

	/* Address and length */
	u32Val.w[0] = u16Addr;
	u32Val.w[1] = u16Len;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* write command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
    
    u8StartAlignSize = (u16Addr & 0x3);
    //https://jira.microchip.com/browse/UNG_JUTLAND2-279
    u8EndAlignSize = (u16Len + u8StartAlignSize) & 0x3;
	if (u8EndAlignSize & 0x3){
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}
	pu8Ptr = pu8Data; 
	pu8Ptr = pu8Ptr - u8StartAlignSize; 
	
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_DATA_FIFO_REG, pu8Ptr, u16Len+u8StartAlignSize+u8EndAlignSize);
}
#endif

#ifdef _IS_SQI_DIRECT_MODE_ACCESS
/* LAN9253 */
/* 
    Function: LAN9253SQI_Write

    This function does Write Access to Non-Ether CAT core CSR, Ether CAT Core CSR and Process RAM
	using 'Serial Write(0x02)' command supported by LAN9253 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9253 Compatible SPI (0x82)
     
    Input : u16Adddr    -> Address of the register to be written
            *pu8Data  -> Pointer to the data that is to be written
			u32Length  -> Number of bytes to be written 

    Output : None
	
	Note   : Since now SPI is running at 5MHz, Serial Write is successful without any dummy bytes or wait
			 signal. But, as the SPI clock speed increases, we have to follow either of these. 

*/

void LAN9253SQI_Write(UINT16 u16Addr, UINT8 *pu8Data, UINT32 u32Length)
{	
	UINT32 u32ModLen = 0;
    qspi_memory_xfer_t qspi_xfer;
	UINT32 u32InstrAddr = 0;
    UINT8 u8Dummy = 0;    /* Disabled as write does not require dummy */

	/* Core CSR and Process RAM accesses can have any alignment and length */
	if (u16Addr < 0x3000)
	{
		/* DWORD Buffering - Applicable for Write only */
		if (u32Length > 1)
		{
			u16Addr |= 0xC000; 	/* addr[15:14]=11 */
		}
		else
		{
			/* Do Nothing */
		}
	}
	else
	{
		/* Non Core CSR length will be adjusted if it is not DWORD aligned */
		u32ModLen = u32Length % 4;
		if (1 == u32ModLen)
		{
			u32Length = u32Length + 3;
		}
		else if (2 == u32ModLen)
		{
			u32Length = u32Length + 2;
		}
		else if (3 == u32ModLen)
		{
			u32Length = u32Length + 1;
		}
		else
		{
			/* Do nothing if length is 0 since it is DWORD access */
		}
	}

	memset((void *)&qspi_xfer, 0, sizeof(qspi_memory_xfer_t));
	qspi_xfer.instruction = CMD_SERIAL_WRITE;
	qspi_xfer.width = QUAD_CMD;

	/* Get the dummy Byte count */
	/* SPECIAL CASE - Reduce 1 byte clock cycle count from byDummy
     * SAMD51 supports 24 bit and 32 bit addressing format
     * LAN925x expects 16bit addressing format
     * So In order to support SAMD51, converting the 16bit address to 24bit
     * treating the extra address byte as dummy cycle, 
     * so reduce the 1 byte dummy cycle from the requested.
     */
    u8Dummy = (gau8DummyCntArr[36] - 1);
    qspi_xfer.dummy_cycles = u8Dummy;
    u32InstrAddr = u16Addr;
    u32InstrAddr = u32InstrAddr << 8;

    QSPI_MemoryWrite(&qspi_xfer, (UINT32 *)&pu8Data[0], u32Length, u32InstrAddr);

}

/* 
    Function: LAN9253SQI_Read

    This function does Read Access to Non-Ether CAT core CSR, Ether CAT Core CSR and Process RAM
	using 'Fast Read(0x0B)' command supported by LAN9253 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9253 Compatible SPI (0x82)
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
 *          u32Length   -> Length of the data to be read

    Output : None

*/

void LAN9253SQI_Read(UINT16 u16Addr, UINT8 *pu8data, UINT32 u32Length)
{	
	UINT32 u32ModLen = 0;
    UINT8 u8Dummy = 0;
    qspi_memory_xfer_t qspi_xfer;
	UINT32 u32InstrAddr = 0;
	
	/* Core CSR and Process RAM accesses can have any alignment and length */
	if (u16Addr < 0x3000)
	{
		if (u32Length>1)
		{
			/* Use Auto-increment if number of bytes to read is more than 1 */
			u16Addr |= 0x4000;			
		}

	}
	else
	{
		/* Non Core CSR length will be adjusted if it is not DWORD aligned */
		u32ModLen = u32Length % 4; 
		if (1 == u32ModLen)
		{
			u32Length = u32Length + 3; 
		}
		else if (2 == u32ModLen)
		{
			u32Length = u32Length + 2; 
		}
		else if (3 == u32ModLen)
		{
			u32Length = u32Length + 1; 
		}
		else 
		{
			/* Do nothing if length is 0 since it is DWORD access */
		}
	}

	memset((void *)&gau8rx_data[0], 0, sizeof(gau8rx_data));
    memset((void *)&qspi_xfer, 0, sizeof(qspi_memory_xfer_t));
	qspi_xfer.instruction = CMD_FAST_READ;
    qspi_xfer.width = QUAD_CMD;

    //https://jira.microchip.com/browse/UNG_JUTLAND2-299
    //Fix is added to provide PDI error counter test
    //the transfer length should not contain dummy bytes length
#ifdef DUMMY_READ_EN
    qspi_xfer.dummy_cycles = u8Dummy;
    /* Get the number of dummy cycle required */
    u8Dummy = gau8DummyCntArr[SQI_FASTREAD_INITIAL_OFFSET];

    u32InstrAddr = u16Addr;
    u32InstrAddr = (u32InstrAddr << 8) | (u32Length);

    QSPI_MemoryRead(&qspi_xfer, (UINT32 *)&gau8rx_data[0], u32Length + u8Dummy, u32InstrAddr);
    
   //https://jira.microchip.com/browse/UNG_JUTLAND2-278
   //Fix is added for odd address failure
    u8Dummy += (u16Addr & 0x3);

    memcpy (pu8data, gau8rx_data + u8Dummy, u32Length);
#else
    /* Get the number of dummy cycle required */
    u8Dummy = gau8DummyCntArr[33];
    qspi_xfer.dummy_cycles = u8Dummy * QSPI_SQI_ONE_BYTE_CLK_COUNT;

    u32InstrAddr = u16Addr;
    u32InstrAddr = (u32InstrAddr << 8) | u32Length;

    QSPI_MemoryRead(&qspi_xfer, (UINT32 *)&gau8rx_data[0], u32Length, u32InstrAddr);
    
   //https://jira.microchip.com/browse/UNG_JUTLAND2-278
   //Fix is added for odd address failure
   // u8Dummy += (u16Addr & 0x3);
    
    memcpy (pu8data, gau8rx_data, u32Length);
#endif

}

#endif

/*******************************************************************************
    Function:
        void ESC_Sync1_cb()

    Summary:
        Interrupt service routine for the interrupt from SYNC0
*******************************************************************************/
void ESC_Sync0_cb(uintptr_t context)
{
	//MCHP_ESF_CRITICAL_SECTION_ENTER();
	Sync0_Isr();
	//MCHP_ESF_CRITICAL_SECTION_LEAVE();
}

/*******************************************************************************
    Function:
        void ESC_Sync1_cb()

    Summary:
        Interrupt service routine for the interrupt from SYNC1
*******************************************************************************/
void ESC_Sync1_cb(uintptr_t context)
{
//	MCHP_ESF_CRITICAL_SECTION_ENTER();
	Sync1_Isr();
//	MCHP_ESF_CRITICAL_SECTION_LEAVE();
}

/*******************************************************************************
    Function:
        void ESC_IRQ_cb()

    Summary:
        Interrupt service routine for the interrupt from ESC
*******************************************************************************/
void ESC_IRQ_cb(uintptr_t context)
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

void ESF_PDI_Init()
{
#if (ESF_PDI == SPI || ESF_PDI == SQI) && (!defined (BECKHOFF_MODE))
    UINT32 u32data;
#endif

#ifdef MEASURE_CYCLE_TIME
    /* These GPIO's used to measure the Tpdi and Tmcu */
    MCHP_ESF_GPIO_OUTPUT_EN(GPIO_T_PDI);
    MCHP_ESF_GPIO_OUTPUT_EN(GPIO_T_MCU);
    MCHP_ESF_GPIO_OUTPUT_EN(GPIO_T_MEA);
#endif
#if (ESF_PDI == SQI)
    
	do
	{
		MCHP_ESF_IS_PDI_FUNCTIONAL((UINT8 *)&u32data);
        if (u32data == 0xFFFFFFFF)
        {
            /* Reset SQIO mode */
            SQI_DisableQuadMode();
        }
	} while (0x87654321 != u32data);
    
	/* Update the SQI related config data as per the frequency */
	ReBuild_SQI_SetCfg_data ();
    
    /* SQI Set configuration for dummy cycle */
    SQI_SetConfiguration (gau8DummyCntArr);
                
    /* Send "Enable SQI" command for slave to switch to SQI mode */
    SQI_EnableQuadMode();
#elif (ESF_PDI == SPI)
    EtherCAT_QSPI_CallbackRegistration();
#ifndef BECKHOFF_MODE
    do
	{
		MCHP_ESF_IS_PDI_FUNCTIONAL((UINT8 *)&u32data);
        if (u32data == 0xFFFFFFFF)
        {
            /* Reset SQIO mode */
            SPI_DisableQuadMode();
        }
	} while (0x87654321 != u32data);
#ifdef IS_SUPPORT_DUMMY_CYCLE    
    /* Update the SQI related config data as per the frequency */
	ReBuild_SPI_SetCfg_data ();
    
    /* SQI Set configuration for dummy cycle */
    SPI_SetConfiguration (gau8DummyCntArr);
#endif
#endif
#endif

}

