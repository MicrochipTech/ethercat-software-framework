/*
 * ESF_Config.h
 *
 * Created: 1/31/2020 10:25:52 AM
 *  Author: I52915
 */ 


#ifndef ESF_CONFIG_H
#define ESF_CONFIG_H

/*
 * ESF_PDI - EtherCAT Software Framework Process Data Interface
 * The PDI can be selected as per the user.
 * The PDI can be as SPI, QSPI & HBI, etc.,
 * All the ESF Hooks API's work based on the PDI selection
 */

#define HBI     1

#define ESF_PDI		HBI

#ifdef DIRECT_MODE

#define HBI_DIRECT_MODE

//#define _IS_HBI_DEMUX_8BIT_SUPPORT


#endif

#ifdef DEBUG_MODE

#define ESF_HBI_DEBUG

/* Enables the ESC init test code, Verify Byte order registers */
#define ESC_INIT_TEST

/* Debug HBI Direct mode, Uncomment to enable */
//#define DEBUG_HBI_DIRECT_MODE

/* Enables the ESC PDRAM test code */
//#define ESC_PDRAM_TEST

/* Enables the PDI Access test code */
//#define PDI_ACCESS_TEST

/* Enables the ESC Access test code, read & write */
//#define ESC_ACCESS_TEST
    
#endif

/* EEPROM Emulation Feature can be enabled by uncommenting below macro */
//#define _IS_EEPROM_EMULATION_SUPPORT               1

#endif /* ESF_CONFIG_H */