/*
* This source file is part of the EtherCAT Slave Stack Code licensed by Beckhoff Automation GmbH & Co KG, 33415 Verl, Germany.
* The corresponding license agreement applies. This hint shall not be removed.
*/

/**
* \addtogroup sample_app sample_app
* @{
*/

/**
\file sample_appObjects
\author ET9300Utilities.ApplicationHandler (Version 1.5.0.0) | EthercatSSC@beckhoff.com

\brief sample_app specific objects<br>
\brief NOTE : This file will be overwritten if a new object dictionary is generated!<br>
*/

#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
#define PROTO
#else
#define PROTO extern
#endif
/******************************************************************************
*                    Object 0x1601 : Outputs process data mapping
******************************************************************************/
/**
* \addtogroup 0x1601 0x1601 | Outputs process data mapping
* @{
* \brief Object 0x1601 (Outputs process data mapping) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Reference to 0x7010.1<br>
* SubIndex 2 - Reference to 0x7010.2<br>
* SubIndex 3 - Reference to 0x7010.3<br>
* SubIndex 4 - Reference to 0x7010.4<br>
* SubIndex 5 - Reference to 0x7010.5<br>
* SubIndex 6 - Reference to 0x7010.6<br>
* SubIndex 7 - Reference to 0x7010.7<br>
* SubIndex 8 - Reference to 0x7010.8<br>
* SubIndex 9 - Reference to 0x7010.9<br>
* SubIndex 10 - Reference to 0x7010.10<br>
* SubIndex 11 - Reference to 0x7010.11<br>
* SubIndex 12 - Reference to 0x7010.12<br>
* SubIndex 13 - Reference to 0x7010.13<br>
* SubIndex 14 - Reference to 0x7010.14<br>
* SubIndex 15 - Reference to 0x7010.15<br>
* SubIndex 16 - Reference to 0x7010.16<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1601[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Reference to 0x7010.1 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Reference to 0x7010.2 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Reference to 0x7010.3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Reference to 0x7010.4 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Reference to 0x7010.5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Reference to 0x7010.6 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Reference to 0x7010.7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Reference to 0x7010.8 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - Reference to 0x7010.9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex10 - Reference to 0x7010.10 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex11 - Reference to 0x7010.11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex12 - Reference to 0x7010.12 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex13 - Reference to 0x7010.13 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex14 - Reference to 0x7010.14 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex15 - Reference to 0x7010.15 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex16 - Reference to 0x7010.16 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1601[] = "Outputs process data mapping\000"
"SubIndex 001\000"
"SubIndex 002\000"
"SubIndex 003\000"
"SubIndex 004\000"
"SubIndex 005\000"
"SubIndex 006\000"
"SubIndex 007\000"
"SubIndex 008\000"
"SubIndex 009\000"
"SubIndex 010\000"
"SubIndex 011\000"
"SubIndex 012\000"
"SubIndex 013\000"
"SubIndex 014\000"
"SubIndex 015\000"
"SubIndex 016\000\377";
#endif //#ifdef _OBJD_

#ifndef _SAMPLE_APP_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 - Reference to 0x7010.1 */
UINT32 SI2; /* Subindex2 - Reference to 0x7010.2 */
UINT32 SI3; /* Subindex3 - Reference to 0x7010.3 */
UINT32 SI4; /* Subindex4 - Reference to 0x7010.4 */
UINT32 SI5; /* Subindex5 - Reference to 0x7010.5 */
UINT32 SI6; /* Subindex6 - Reference to 0x7010.6 */
UINT32 SI7; /* Subindex7 - Reference to 0x7010.7 */
UINT32 SI8; /* Subindex8 - Reference to 0x7010.8 */
UINT32 SI9; /* Subindex9 - Reference to 0x7010.9 */
UINT32 SI10; /* Subindex10 - Reference to 0x7010.10 */
UINT32 SI11; /* Subindex11 - Reference to 0x7010.11 */
UINT32 SI12; /* Subindex12 - Reference to 0x7010.12 */
UINT32 SI13; /* Subindex13 - Reference to 0x7010.13 */
UINT32 SI14; /* Subindex14 - Reference to 0x7010.14 */
UINT32 SI15; /* Subindex15 - Reference to 0x7010.15 */
UINT32 SI16; /* Subindex16 - Reference to 0x7010.16 */
} OBJ_STRUCT_PACKED_END
TOBJ1601;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1601 OutputsProcessDataMapping0x1601
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={16,0x70100120,0x70100220,0x70100320,0x70100420,0x70100520,0x70100620,0x70100720,0x70100820,0x70100920,0x70100A20,0x70100B20,0x70100C20,0x70100D20,0x70100E20,0x70100F20,0x70101020}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A00 : Inputs process data mapping
******************************************************************************/
/**
* \addtogroup 0x1A00 0x1A00 | Inputs process data mapping
* @{
* \brief Object 0x1A00 (Inputs process data mapping) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Reference to 0x6000.1<br>
* SubIndex 2 - Reference to 0x6000.2<br>
* SubIndex 3 - Reference to 0x6000.3<br>
* SubIndex 4 - Reference to 0x6000.4<br>
* SubIndex 5 - Reference to 0x6000.5<br>
* SubIndex 6 - Reference to 0x6000.6<br>
* SubIndex 7 - Reference to 0x6000.7<br>
* SubIndex 8 - Reference to 0x6000.8<br>
* SubIndex 9 - Reference to 0x6000.9<br>
* SubIndex 10 - Reference to 0x6000.10<br>
* SubIndex 11 - Reference to 0x6000.11<br>
* SubIndex 12 - Reference to 0x6000.12<br>
* SubIndex 13 - Reference to 0x6000.13<br>
* SubIndex 14 - Reference to 0x6000.14<br>
* SubIndex 15 - Reference to 0x6000.15<br>
* SubIndex 16 - Reference to 0x6000.16<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A00[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Reference to 0x6000.1 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Reference to 0x6000.2 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Reference to 0x6000.3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Reference to 0x6000.4 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Reference to 0x6000.5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Reference to 0x6000.6 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Reference to 0x6000.7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Reference to 0x6000.8 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex9 - Reference to 0x6000.9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex10 - Reference to 0x6000.10 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex11 - Reference to 0x6000.11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex12 - Reference to 0x6000.12 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex13 - Reference to 0x6000.13 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex14 - Reference to 0x6000.14 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex15 - Reference to 0x6000.15 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex16 - Reference to 0x6000.16 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A00[] = "Inputs process data mapping\000"
"SubIndex 001\000"
"SubIndex 002\000"
"SubIndex 003\000"
"SubIndex 004\000"
"SubIndex 005\000"
"SubIndex 006\000"
"SubIndex 007\000"
"SubIndex 008\000"
"SubIndex 009\000"
"SubIndex 010\000"
"SubIndex 011\000"
"SubIndex 012\000"
"SubIndex 013\000"
"SubIndex 014\000"
"SubIndex 015\000"
"SubIndex 016\000\377";
#endif //#ifdef _OBJD_

#ifndef _SAMPLE_APP_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 - Reference to 0x6000.1 */
UINT32 SI2; /* Subindex2 - Reference to 0x6000.2 */
UINT32 SI3; /* Subindex3 - Reference to 0x6000.3 */
UINT32 SI4; /* Subindex4 - Reference to 0x6000.4 */
UINT32 SI5; /* Subindex5 - Reference to 0x6000.5 */
UINT32 SI6; /* Subindex6 - Reference to 0x6000.6 */
UINT32 SI7; /* Subindex7 - Reference to 0x6000.7 */
UINT32 SI8; /* Subindex8 - Reference to 0x6000.8 */
UINT32 SI9; /* Subindex9 - Reference to 0x6000.9 */
UINT32 SI10; /* Subindex10 - Reference to 0x6000.10 */
UINT32 SI11; /* Subindex11 - Reference to 0x6000.11 */
UINT32 SI12; /* Subindex12 - Reference to 0x6000.12 */
UINT32 SI13; /* Subindex13 - Reference to 0x6000.13 */
UINT32 SI14; /* Subindex14 - Reference to 0x6000.14 */
UINT32 SI15; /* Subindex15 - Reference to 0x6000.15 */
UINT32 SI16; /* Subindex16 - Reference to 0x6000.16 */
} OBJ_STRUCT_PACKED_END
TOBJ1A00;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A00 InputsProcessDataMapping0x1A00
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={16,0x60000120,0x60000220,0x60000320,0x60000420,0x60000520,0x60000620,0x60000720,0x60000820,0x60000920,0x60000A20,0x60000B20,0x60000C20,0x60000D20,0x60000E20,0x60000F20,0x60001020}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C12 : SyncManager 2 assignment
******************************************************************************/
/**
* \addtogroup 0x1C12 0x1C12 | SyncManager 2 assignment
* @{
* \brief Object 0x1C12 (SyncManager 2 assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C12[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C12[] = "SyncManager 2 assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _SAMPLE_APP_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C12;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C12 sRxPDOassign
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={1,{0x1601}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C13 : SyncManager 3 assignment
******************************************************************************/
/**
* \addtogroup 0x1C13 0x1C13 | SyncManager 3 assignment
* @{
* \brief Object 0x1C13 (SyncManager 3 assignment) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C13[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C13[] = "SyncManager 3 assignment\000\377";
#endif //#ifdef _OBJD_

#ifndef _SAMPLE_APP_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C13;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C13 sTxPDOassign
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={1,{0x1A00}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6000 : Inputs
******************************************************************************/
/**
* \addtogroup 0x6000 0x6000 | Inputs
* @{
* \brief Object 0x6000 (Inputs) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Counter<br>
* SubIndex 2 - Counter2<br>
* SubIndex 3 - Counter3<br>
* SubIndex 4 - Counter4<br>
* SubIndex 5 - Counter5<br>
* SubIndex 6 - Counter6<br>
* SubIndex 7 - Counter7<br>
* SubIndex 8 - Counter8<br>
* SubIndex 9 - Counter9<br>
* SubIndex 10 - Counter10<br>
* SubIndex 11 - Counter11<br>
* SubIndex 12 - Counter12<br>
* SubIndex 13 - Counter13<br>
* SubIndex 14 - Counter14<br>
* SubIndex 15 - Counter15<br>
* SubIndex 16 - Counter16<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex1 - Counter */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex2 - Counter2 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex3 - Counter3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex4 - Counter4 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex5 - Counter5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex6 - Counter6 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex7 - Counter7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex8 - Counter8 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex9 - Counter9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex10 - Counter10 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex11 - Counter11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex12 - Counter12 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex13 - Counter13 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex14 - Counter14 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex15 - Counter15 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }}; /* Subindex16 - Counter16 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6000[] = "Inputs\000"
"Counter\000"
"Counter2\000"
"Counter3\000"
"Counter4\000"
"Counter5\000"
"Counter6\000"
"Counter7\000"
"Counter8\000"
"Counter9\000"
"Counter10\000"
"Counter11\000"
"Counter12\000"
"Counter13\000"
"Counter14\000"
"Counter15\000"
"Counter16\000\377";
#endif //#ifdef _OBJD_

#ifndef _SAMPLE_APP_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Counter; /* Subindex1 - Counter */
UINT32 Counter2; /* Subindex2 - Counter2 */
UINT32 Counter3; /* Subindex3 - Counter3 */
UINT32 Counter4; /* Subindex4 - Counter4 */
UINT32 Counter5; /* Subindex5 - Counter5 */
UINT32 Counter6; /* Subindex6 - Counter6 */
UINT32 Counter7; /* Subindex7 - Counter7 */
UINT32 Counter8; /* Subindex8 - Counter8 */
UINT32 Counter9; /* Subindex9 - Counter9 */
UINT32 Counter10; /* Subindex10 - Counter10 */
UINT32 Counter11; /* Subindex11 - Counter11 */
UINT32 Counter12; /* Subindex12 - Counter12 */
UINT32 Counter13; /* Subindex13 - Counter13 */
UINT32 Counter14; /* Subindex14 - Counter14 */
UINT32 Counter15; /* Subindex15 - Counter15 */
UINT32 Counter16; /* Subindex16 - Counter16 */
} OBJ_STRUCT_PACKED_END
TOBJ6000;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6000 Inputs0x6000
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={16,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7010 : Outputs
******************************************************************************/
/**
* \addtogroup 0x7010 0x7010 | Outputs
* @{
* \brief Object 0x7010 (Outputs) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Trigger<br>
* SubIndex 2 - Trigger2 <br>
* SubIndex 3 - Trigger3<br>
* SubIndex 4 - Trigger4<br>
* SubIndex 5 - Trigger5<br>
* SubIndex 6 - Trigger6<br>
* SubIndex 7 - Trigger7<br>
* SubIndex 8 - Trigger8<br>
* SubIndex 9 - Trigger9<br>
* SubIndex 10 - Trigger10<br>
* SubIndex 11 - Trigger11<br>
* SubIndex 12 - Trigger12<br>
* SubIndex 13 - Trigger13<br>
* SubIndex 14 - Trigger14<br>
* SubIndex 15 - Trigger15<br>
* SubIndex 16 - Trigger16<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7010[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex1 - Trigger */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex2 - Trigger2  */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex3 - Trigger3 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex4 - Trigger4 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex5 - Trigger5 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex6 - Trigger6 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex7 - Trigger7 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex8 - Trigger8 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex9 - Trigger9 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex10 - Trigger10 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex11 - Trigger11 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex12 - Trigger12 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex13 - Trigger13 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex14 - Trigger14 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex15 - Trigger15 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }}; /* Subindex16 - Trigger16 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x7010[] = "Outputs\000"
"Trigger\000"
"Trigger2 \000"
"Trigger3\000"
"Trigger4\000"
"Trigger5\000"
"Trigger6\000"
"Trigger7\000"
"Trigger8\000"
"Trigger9\000"
"Trigger10\000"
"Trigger11\000"
"Trigger12\000"
"Trigger13\000"
"Trigger14\000"
"Trigger15\000"
"Trigger16\000\377";
#endif //#ifdef _OBJD_

#ifndef _SAMPLE_APP_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Trigger; /* Subindex1 - Trigger */
UINT32 Trigger2; /* Subindex2 - Trigger2  */
UINT32 Trigger3; /* Subindex3 - Trigger3 */
UINT32 Trigger4; /* Subindex4 - Trigger4 */
UINT32 Trigger5; /* Subindex5 - Trigger5 */
UINT32 Trigger6; /* Subindex6 - Trigger6 */
UINT32 Trigger7; /* Subindex7 - Trigger7 */
UINT32 Trigger8; /* Subindex8 - Trigger8 */
UINT32 Trigger9; /* Subindex9 - Trigger9 */
UINT32 Trigger10; /* Subindex10 - Trigger10 */
UINT32 Trigger11; /* Subindex11 - Trigger11 */
UINT32 Trigger12; /* Subindex12 - Trigger12 */
UINT32 Trigger13; /* Subindex13 - Trigger13 */
UINT32 Trigger14; /* Subindex14 - Trigger14 */
UINT32 Trigger15; /* Subindex15 - Trigger15 */
UINT32 Trigger16; /* Subindex16 - Trigger16 */
} OBJ_STRUCT_PACKED_END
TOBJ7010;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7010 Outputs0x7010
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={16,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000}
#endif
;
/** @}*/







#ifdef _OBJD_
TOBJECT    OBJMEM ApplicationObjDic[] = {
/* Object 0x1601 */
{NULL , NULL ,  0x1601 , {DEFTYPE_PDOMAPPING , 16 | (OBJCODE_REC << 8)} , asEntryDesc0x1601 , aName0x1601 , &OutputsProcessDataMapping0x1601 , NULL , NULL , 0x0000 },
/* Object 0x1A00 */
{NULL , NULL ,  0x1A00 , {DEFTYPE_PDOMAPPING , 16 | (OBJCODE_REC << 8)} , asEntryDesc0x1A00 , aName0x1A00 , &InputsProcessDataMapping0x1A00 , NULL , NULL , 0x0000 },
/* Object 0x1C12 */
{NULL , NULL ,  0x1C12 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C12 , aName0x1C12 , &sRxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x1C13 */
{NULL , NULL ,  0x1C13 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C13 , aName0x1C13 , &sTxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x6000 */
{NULL , NULL ,  0x6000 , {DEFTYPE_RECORD , 16 | (OBJCODE_REC << 8)} , asEntryDesc0x6000 , aName0x6000 , &Inputs0x6000 , NULL , NULL , 0x0000 },
/* Object 0x7010 */
{NULL , NULL ,  0x7010 , {DEFTYPE_RECORD , 16 | (OBJCODE_REC << 8)} , asEntryDesc0x7010 , aName0x7010 , &Outputs0x7010 , NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};
#endif    //#ifdef _OBJD_
#undef PROTO

/** @}*/
#define _SAMPLE_APP_OBJECTS_H_
