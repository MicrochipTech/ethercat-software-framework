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

#if (ESF_PDI == SPI)

volatile CHAR gchEtherCATQSPITransmission = false;

void EtherCAT_TransmissionFlagClear(void);
void EtherCAT_QSPI_CallbackRegistration(void);

/* Function declarations */
static void SPIChipSelectDisable(void);
static void SPIChipSelectEnable(void);
static UINT8   EtherCAT_QSPITransmissionBusy(void);
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

static UINT8 EtherCAT_QSPITransmissionBusy(void)
{
    return (gchEtherCATQSPITransmission == false);
}

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
}

/*******************************************************************************
    Function:
        void SPI_DisableQuadMode()

    Summary:
        This function Disable the SQI mode in slave, send RST_QIO
*******************************************************************************/

void SPI_DisableQuadMode()
{
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
            u8Len       -> Length of the data

    Output : None
	
	Note   : In LAN9252 Compatible SPI, all registers are DWORD aligned. Length will be fixed to 4. Hence,
			 there is no separate length argument.
*/

void LAN9252SPI_Write(UINT16 u16Adddr, UINT8 *pu8Data, UINT8 u8Len)
{
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
    
    u8txData = (UINT8)(u16Adddr >> 8);
    QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
    QSPI_Sync_Wait();
    while(QSPI_IsBusy())
    {
        ;
    }
    gEscALEvent.Byte[0] = u8rxData;
    
    u8txData = (UINT8)u16Adddr;
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
        if (1 != u8Len) {
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
	} while (--u8Len);
   
    SPIChipSelectDisable();
}

/* 
    Function: LAN9252SPI_Read

    This function does Read Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Serial Read(0x03)' command supported by LAN9252 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u8Len       -> Length of the data

    Output : None
	
	Note   : In LAN9252 Compatible SPI, all registers are DWORD aligned. Length will be fixed to 4. Hence,
			 there is no separate length argument.
*/

void LAN9252SPI_Read(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8Len)
{
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
		if (1 == u8Len)
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
        if (1 != u8Len) {
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
	} while (--u8Len);
    
	SPIChipSelectDisable();
}

/* 
    Function: LAN9252SPI_FastRead

    This function does Read Access to Non-Ether CAT and Ether CAT Core CSR 
	using 'Fast Read(0x0B)' command supported by LAN9252 Compatible SPI. This function shall be used
	only when PDI is selected as LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr     -> Address of the register to be read
            *pu8Data    -> Pointer to the data that is to be read
            u8Len       -> Length of the data

    Output : None

*/

void LAN9252SPI_FastRead(UINT16 u16Addr, UINT8 *pu8Data, UINT8 u8Len)
{
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
	QSPI_Write(&u8Len, u8rxLen);
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
		if (1 == u8Len)
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
        if (1 != u8Len) {
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
	} while (--u8Len);

	SPIChipSelectDisable();		
}

/* 
    Function: LAN9252SPI_ReadPDRAM

    This function does Read Access to Ether CAT Core Process RAM  using 'Serial Read(0x03)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr    -> Address of the RAM location to be read
            *pu8Data -> Pointer to the data that is to be read
			u16Len	 -> Number of bytes to be read from PDRAM location

    Output : None

*/

void LAN9252SPI_ReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len)
{
	UINT32_VAL u32Val;
	UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0, u8dummy_clk_cnt = 0;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
    
	/* Address and length */
	u32Val.w[0] = u16Addr;
	u32Val.w[1] = u16Len;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* Read command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	u8StartAlignSize = (u16Addr & 0x3);
	u8EndAlignSize = (u16Len + u8StartAlignSize) & 0x3;
	if (u8EndAlignSize & 0x3){
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}

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
    

    
	while (u16Len--)
	{
		if (0 == u16Len)
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
        if (0 != u16Len) {
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
}

/* 
    Function: LAN9252SPI_FastReadPDRAM

    This function does Read Access to Ether CAT Core Process RAM  using 'Fast Read(0x0B)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr    -> Address of the RAM location to be read
            *pu8Data -> Pointer to the data that is to be read
			u16Len	 -> Number of bytes to be read from PDRAM location

    Output : None
*/

void LAN9252SPI_FastReadPDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len)
{
	UINT32_VAL u32Val;
	UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0, u8dummy_clk_cnt = 0;
	UINT16 u16XfrLen = 0, u16TotalLen = 0;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;

	u8StartAlignSize = (u16Addr & 0x3);
	u8EndAlignSize = (u16Len & 0x3) + u8StartAlignSize;
	if (u8EndAlignSize & 0x3){
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}
	
	u16TotalLen = u16Len + u8StartAlignSize + u8EndAlignSize;
	
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
	u32Val.w[1] = u16Len;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* Read command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_RD_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

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
	if (u16Len > ONE_BYTE_MAX_XFR_LEN)
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


	while (u16Len--)
	{
		if (0 == u16Len)
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
        if (0 != u16Len) {
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
}

/* 
    Function: LAN9252SPI_WritePDRAM

    This function does Write Access to Ether CAT Core Process RAM  using 'Serial Write(0x02)' command 
	supported by LAN9252 Compatible SPI. This function shall be used only when PDI is selected as
	LAN9252 Compatible SPI (0x80)
     
    Input : u16Addr    -> Address of the RAM location to be written
            *pu8Data -> Pointer to the data that is to be written
			u16Len	 -> Number of bytes to be written to PDRAM location

    Output : None

*/

void LAN9252SPI_WritePDRAM(UINT8 *pu8Data, UINT16 u16Addr, UINT16 u16Len)
{
	UINT32_VAL u32Val;
	UINT8 u8StartAlignSize = 0, u8EndAlignSize = 0, u8dummy_clk_cnt = 0; 
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;

	/* Address and length */
	u32Val.w[0] = u16Addr;
	u32Val.w[1] = u16Len;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_ADDR_LENGTH_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);

	/* write command */
	u32Val.Val = 0x80000000;
	MCHP_ESF_PDI_WRITE(LAN925x_ECAT_PRAM_WR_CMD_REG, (UINT8*)&u32Val.Val, DWORD_LENGTH);
	
	u8StartAlignSize = (u16Addr & 0x3);
//	u8EndAlignSize = (u16Len & 3) + u8StartAlignSize;
	// Changed for a bug identified with HBI - Demux BSP
	u8EndAlignSize = (u16Len + u8StartAlignSize) & 0x3;
	if (u8EndAlignSize & 0x3){
		u8EndAlignSize = (((u8EndAlignSize + 4) & 0xC) - u8EndAlignSize);
	}
	
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
    
	while (u16Len--)
	{
        u8txData = *pu8Data;
		QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        while(QSPI_IsBusy());
        pu8Data++;
        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (0 != u16Len) {
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
#ifdef IS_SUPPORT_DUMMY_CYCLE
    UINT32 u8dummy_clk_cnt = 0;
#endif
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;

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

	SPIChipSelectEnable();

		
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
#ifdef IS_SUPPORT_DUMMY_CYCLE    
	/* Initial Dummy cycle added by dummy read */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		
	}
#endif
	do
	{
        u8txData = *pu8Data++;
        QSPI_Write(&u8txData, u8txLen);
        QSPI_Sync_Wait();
        
#ifdef IS_SUPPORT_DUMMY_CYCLE        
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_WRITE_INTRA_DWORD_OFFSET];
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
#ifdef IS_SUPPORT_DUMMY_CYCLE	
	UINT8 u8dummy_clk_cnt = 0;
#endif
	UINT32 u32ModLen = 0;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
	
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
	UINT8 u8StartAlignSize = 0, u8Itr = 0;
#ifdef IS_SUPPORT_DUMMY_CYCLE
    UINT8 u8dummy_clk_cnt = 0;
#endif
	UINT16 u16XfrLen = 0;
	UINT32 u32ModLen = 0;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
	
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
	SPIChipSelectEnable();
	
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
#ifdef IS_SUPPORT_DUMMY_CYCLE	
    /* Initial Dummy cycle added by dummy read */
	u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INITIAL_OFFSET];
	while (u8dummy_clk_cnt--)
	{
		QSPI_Read(&u8rxData, u8rxLen);
		QSPI_Sync_Wait();
		
	}
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
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
        while (u8dummy_clk_cnt--)
        {
            QSPI_Read(&u8rxData, u8rxLen);
            QSPI_Sync_Wait();               
        }
#endif
	}
    
	
	do
	{
        QSPI_WriteRead(&u8txData, u8txLen, &u8rxData, u8rxLen);
        QSPI_Sync_Wait();
        
		*pu8Data++ = u8rxData;
#ifdef IS_SUPPORT_DUMMY_CYCLE		
        /* Get the Intra DWORD dummy clock count */
        u8dummy_clk_cnt = gau8DummyCntArr[SPI_FASTREAD_INTRA_DWORD_OFFSET];
        /* Add Intra DWORD dummy clocks, avoid for last byte */
        if (1 != u16XfrLen) {
            while (u8dummy_clk_cnt--)
            {
                QSPI_Read(&u8rxData, u8rxLen);
                QSPI_Sync_Wait();
                
            }
        }
#endif
	} while (--u16XfrLen);
	
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
	UINT8 u8BeckhoffCmd = ESC_WR;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
	
	/* Non Ether CAT Core CSRs are always DWORD aligned and should be accessed by DWORD length */
	if (u16Addr >= 0x3000)
	{
		u32Length = 4; 
	}
	
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
	UINT8 u8BeckhoffCmd = ESC_RD_WAIT_STATE;
    UINT8 u8txData = 0, u8txLen = 1;
    UINT8 u8rxData = 0, u8rxLen = 1;
	
	/* Non Ether CAT Core CSRs are always DWORD aligned and should be accessed by DWORD length */
	if (u16Addr >= 0x3000)
	{
		u32Length = 4;
	}
	
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
    UINT8 *p8Data = NULL;
    
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
    
    //UNG_J2_SIP-35 - creating memory from heap to read and corrected the receive buffer
    //UNG_JUTLAND2-317
    p8Data = (UINT8 *) malloc (sizeof(UINT8) * (u16Len+u8StartAlignSize+u8EndAlignSize));
    if (p8Data == NULL) {
        /* we simply return in case of failure,
         * caller will handle as it does not read anything
         */
        return;
    }

	MCHP_ESF_PDI_READ(LAN925x_ECAT_PRAM_RD_DATA_FIFO_REG, p8Data, u16Len+u8StartAlignSize+u8EndAlignSize);
    
    //https://jira.microchip.com/browse/UNG_JUTLAND2-278
    //Fix is added for odd address failure
    for (u8Itr = 0; u8Itr < u16Len; u8Itr++)
    {
       *pu8Data++ = p8Data[u8Itr + u8StartAlignSize];
    }
    free(p8Data);
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
