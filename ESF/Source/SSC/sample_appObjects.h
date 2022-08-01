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
* SubIndex 17 - Reference to 0x7010.17<br>
* SubIndex 18 - Reference to 0x7010.18<br>
* SubIndex 19 - Reference to 0x7010.19<br>
* SubIndex 20 - Reference to 0x7010.20<br>
* SubIndex 21 - Reference to 0x7010.21<br>
* SubIndex 22 - Reference to 0x7010.22<br>
* SubIndex 23 - Reference to 0x7010.23<br>
* SubIndex 24 - Reference to 0x7010.24<br>
* SubIndex 25 - Reference to 0x7010.25<br>
* SubIndex 26 - Reference to 0x7010.26<br>
* SubIndex 27 - Reference to 0x7010.27<br>
* SubIndex 28 - Reference to 0x7010.28<br>
* SubIndex 29 - Reference to 0x7010.29<br>
* SubIndex 30 - Reference to 0x7010.30<br>
* SubIndex 31 - Reference to 0x7010.31<br>
* SubIndex 32 - Reference to 0x7010.32<br>
* SubIndex 33 - Reference to 0x7010.33<br>
* SubIndex 34 - Reference to 0x7010.34<br>
* SubIndex 35 - Reference to 0x7010.35<br>
* SubIndex 36 - Reference to 0x7010.36<br>
* SubIndex 37 - Reference to 0x7010.37<br>
* SubIndex 38 - Reference to 0x7010.38<br>
* SubIndex 39 - Reference to 0x7010.39<br>
* SubIndex 40 - Reference to 0x7010.40<br>
* SubIndex 41 - Reference to 0x7010.41<br>
* SubIndex 42 - Reference to 0x7010.42<br>
* SubIndex 43 - Reference to 0x7010.43<br>
* SubIndex 44 - Reference to 0x7010.44<br>
* SubIndex 45 - Reference to 0x7010.45<br>
* SubIndex 46 - Reference to 0x7010.46<br>
* SubIndex 47 - Reference to 0x7010.47<br>
* SubIndex 48 - Reference to 0x7010.48<br>
* SubIndex 49 - Reference to 0x7010.49<br>
* SubIndex 50 - Reference to 0x7010.50<br>
* SubIndex 51 - Reference to 0x7010.51<br>
* SubIndex 52 - Reference to 0x7010.52<br>
* SubIndex 53 - Reference to 0x7010.53<br>
* SubIndex 54 - Reference to 0x7010.54<br>
* SubIndex 55 - Reference to 0x7010.55<br>
* SubIndex 56 - Reference to 0x7010.56<br>
* SubIndex 57 - Reference to 0x7010.57<br>
* SubIndex 58 - Reference to 0x7010.58<br>
* SubIndex 59 - Reference to 0x7010.59<br>
* SubIndex 60 - Reference to 0x7010.60<br>
* SubIndex 61 - Reference to 0x7010.61<br>
* SubIndex 62 - Reference to 0x7010.62<br>
* SubIndex 63 - Reference to 0x7010.63<br>
* SubIndex 64 - Reference to 0x7010.64<br>
* SubIndex 65 - Reference to 0x7010.65<br>
* SubIndex 66 - Reference to 0x7010.66<br>
* SubIndex 67 - Reference to 0x7010.67<br>
* SubIndex 68 - Reference to 0x7010.68<br>
* SubIndex 69 - Reference to 0x7010.69<br>
* SubIndex 70 - Reference to 0x7010.70<br>
* SubIndex 71 - Reference to 0x7010.71<br>
* SubIndex 72 - Reference to 0x7010.72<br>
* SubIndex 73 - Reference to 0x7010.73<br>
* SubIndex 74 - Reference to 0x7010.74<br>
* SubIndex 75 - Reference to 0x7010.75<br>
* SubIndex 76 - Reference to 0x7010.76<br>
* SubIndex 77 - Reference to 0x7010.77<br>
* SubIndex 78 - Reference to 0x7010.78<br>
* SubIndex 79 - Reference to 0x7010.79<br>
* SubIndex 80 - Reference to 0x7010.80<br>
* SubIndex 81 - Reference to 0x7010.81<br>
* SubIndex 82 - Reference to 0x7010.82<br>
* SubIndex 83 - Reference to 0x7010.83<br>
* SubIndex 84 - Reference to 0x7010.84<br>
* SubIndex 85 - Reference to 0x7010.85<br>
* SubIndex 86 - Reference to 0x7010.86<br>
* SubIndex 87 - Reference to 0x7010.87<br>
* SubIndex 88 - Reference to 0x7010.88<br>
* SubIndex 89 - Reference to 0x7010.89<br>
* SubIndex 90 - Reference to 0x7010.90<br>
* SubIndex 91 - Reference to 0x7010.91<br>
* SubIndex 92 - Reference to 0x7010.92<br>
* SubIndex 93 - Reference to 0x7010.93<br>
* SubIndex 94 - Reference to 0x7010.94<br>
* SubIndex 95 - Reference to 0x7010.95<br>
* SubIndex 96 - Reference to 0x7010.96<br>
* SubIndex 97 - Reference to 0x7010.97<br>
* SubIndex 98 - Reference to 0x7010.98<br>
* SubIndex 99 - Reference to 0x7010.99<br>
* SubIndex 100 - Reference to 0x7010.100<br>
* SubIndex 101 - Reference to 0x7010.101<br>
* SubIndex 102 - Reference to 0x7010.102<br>
* SubIndex 103 - Reference to 0x7010.103<br>
* SubIndex 104 - Reference to 0x7010.104<br>
* SubIndex 105 - Reference to 0x7010.105<br>
* SubIndex 106 - Reference to 0x7010.106<br>
* SubIndex 107 - Reference to 0x7010.107<br>
* SubIndex 108 - Reference to 0x7010.108<br>
* SubIndex 109 - Reference to 0x7010.109<br>
* SubIndex 110 - Reference to 0x7010.110<br>
* SubIndex 111 - Reference to 0x7010.111<br>
* SubIndex 112 - Reference to 0x7010.112<br>
* SubIndex 113 - Reference to 0x7010.113<br>
* SubIndex 114 - Reference to 0x7010.114<br>
* SubIndex 115 - Reference to 0x7010.115<br>
* SubIndex 116 - Reference to 0x7010.116<br>
* SubIndex 117 - Reference to 0x7010.117<br>
* SubIndex 118 - Reference to 0x7010.118<br>
* SubIndex 119 - Reference to 0x7010.119<br>
* SubIndex 120 - Reference to 0x7010.120<br>
* SubIndex 121 - Reference to 0x7010.121<br>
* SubIndex 122 - Reference to 0x7010.122<br>
* SubIndex 123 - Reference to 0x7010.123<br>
* SubIndex 124 - Reference to 0x7010.124<br>
* SubIndex 125 - Reference to 0x7010.125<br>
* SubIndex 126 - Reference to 0x7010.126<br>
* SubIndex 127 - Reference to 0x7010.127<br>
* SubIndex 128 - Reference to 0x7010.128<br>
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
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex16 - Reference to 0x7010.16 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex17 - Reference to 0x7010.17 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex18 - Reference to 0x7010.18 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex19 - Reference to 0x7010.19 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex20 - Reference to 0x7010.20 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex21 - Reference to 0x7010.21 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex22 - Reference to 0x7010.22 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex23 - Reference to 0x7010.23 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex24 - Reference to 0x7010.24 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex25 - Reference to 0x7010.25 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex26 - Reference to 0x7010.26 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex27 - Reference to 0x7010.27 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex28 - Reference to 0x7010.28 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex29 - Reference to 0x7010.29 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex30 - Reference to 0x7010.30 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex31 - Reference to 0x7010.31 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex32 - Reference to 0x7010.32 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex33 - Reference to 0x7010.33 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex34 - Reference to 0x7010.34 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex35 - Reference to 0x7010.35 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex36 - Reference to 0x7010.36 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex37 - Reference to 0x7010.37 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex38 - Reference to 0x7010.38 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex39 - Reference to 0x7010.39 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex40 - Reference to 0x7010.40 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex41 - Reference to 0x7010.41 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex42 - Reference to 0x7010.42 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex43 - Reference to 0x7010.43 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex44 - Reference to 0x7010.44 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex45 - Reference to 0x7010.45 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex46 - Reference to 0x7010.46 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex47 - Reference to 0x7010.47 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex48 - Reference to 0x7010.48 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex49 - Reference to 0x7010.49 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex50 - Reference to 0x7010.50 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex51 - Reference to 0x7010.51 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex52 - Reference to 0x7010.52 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex53 - Reference to 0x7010.53 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex54 - Reference to 0x7010.54 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex55 - Reference to 0x7010.55 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex56 - Reference to 0x7010.56 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex57 - Reference to 0x7010.57 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex58 - Reference to 0x7010.58 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex59 - Reference to 0x7010.59 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex60 - Reference to 0x7010.60 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex61 - Reference to 0x7010.61 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex62 - Reference to 0x7010.62 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex63 - Reference to 0x7010.63 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex64 - Reference to 0x7010.64 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex65 - Reference to 0x7010.65 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex66 - Reference to 0x7010.66 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex67 - Reference to 0x7010.67 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex68 - Reference to 0x7010.68 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex69 - Reference to 0x7010.69 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex70 - Reference to 0x7010.70 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex71 - Reference to 0x7010.71 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex72 - Reference to 0x7010.72 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex73 - Reference to 0x7010.73 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex74 - Reference to 0x7010.74 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex75 - Reference to 0x7010.75 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex76 - Reference to 0x7010.76 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex77 - Reference to 0x7010.77 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex78 - Reference to 0x7010.78 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex79 - Reference to 0x7010.79 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex80 - Reference to 0x7010.80 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex81 - Reference to 0x7010.81 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex82 - Reference to 0x7010.82 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex83 - Reference to 0x7010.83 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex84 - Reference to 0x7010.84 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex85 - Reference to 0x7010.85 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex86 - Reference to 0x7010.86 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex87 - Reference to 0x7010.87 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex88 - Reference to 0x7010.88 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex89 - Reference to 0x7010.89 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex90 - Reference to 0x7010.90 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex91 - Reference to 0x7010.91 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex92 - Reference to 0x7010.92 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex93 - Reference to 0x7010.93 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex94 - Reference to 0x7010.94 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex95 - Reference to 0x7010.95 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex96 - Reference to 0x7010.96 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex97 - Reference to 0x7010.97 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex98 - Reference to 0x7010.98 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex99 - Reference to 0x7010.99 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex100 - Reference to 0x7010.100 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex101 - Reference to 0x7010.101 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex102 - Reference to 0x7010.102 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex103 - Reference to 0x7010.103 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex104 - Reference to 0x7010.104 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex105 - Reference to 0x7010.105 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex106 - Reference to 0x7010.106 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex107 - Reference to 0x7010.107 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex108 - Reference to 0x7010.108 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex109 - Reference to 0x7010.109 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex110 - Reference to 0x7010.110 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex111 - Reference to 0x7010.111 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex112 - Reference to 0x7010.112 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex113 - Reference to 0x7010.113 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex114 - Reference to 0x7010.114 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex115 - Reference to 0x7010.115 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex116 - Reference to 0x7010.116 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex117 - Reference to 0x7010.117 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex118 - Reference to 0x7010.118 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex119 - Reference to 0x7010.119 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex120 - Reference to 0x7010.120 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex121 - Reference to 0x7010.121 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex122 - Reference to 0x7010.122 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex123 - Reference to 0x7010.123 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex124 - Reference to 0x7010.124 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex125 - Reference to 0x7010.125 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex126 - Reference to 0x7010.126 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex127 - Reference to 0x7010.127 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex128 - Reference to 0x7010.128 */

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
"SubIndex 016\000"
"SubIndex 017\000"
"SubIndex 018\000"
"SubIndex 019\000"
"SubIndex 020\000"
"SubIndex 021\000"
"SubIndex 022\000"
"SubIndex 023\000"
"SubIndex 024\000"
"SubIndex 025\000"
"SubIndex 026\000"
"SubIndex 027\000"
"SubIndex 028\000"
"SubIndex 029\000"
"SubIndex 030\000"
"SubIndex 031\000"
"SubIndex 032\000"
"SubIndex 033\000"
"SubIndex 034\000"
"SubIndex 035\000"
"SubIndex 036\000"
"SubIndex 037\000"
"SubIndex 038\000"
"SubIndex 039\000"
"SubIndex 040\000"
"SubIndex 041\000"
"SubIndex 042\000"
"SubIndex 043\000"
"SubIndex 044\000"
"SubIndex 045\000"
"SubIndex 046\000"
"SubIndex 047\000"
"SubIndex 048\000"
"SubIndex 049\000"
"SubIndex 050\000"
"SubIndex 051\000"
"SubIndex 052\000"
"SubIndex 053\000"
"SubIndex 054\000"
"SubIndex 055\000"
"SubIndex 056\000"
"SubIndex 057\000"
"SubIndex 058\000"
"SubIndex 059\000"
"SubIndex 060\000"
"SubIndex 061\000"
"SubIndex 062\000"
"SubIndex 063\000"
"SubIndex 064\000"
"SubIndex 065\000"
"SubIndex 066\000"
"SubIndex 067\000"
"SubIndex 068\000"
"SubIndex 069\000"
"SubIndex 070\000"
"SubIndex 071\000"
"SubIndex 072\000"
"SubIndex 073\000"
"SubIndex 074\000"
"SubIndex 075\000"
"SubIndex 076\000"
"SubIndex 077\000"
"SubIndex 078\000"
"SubIndex 079\000"
"SubIndex 080\000"
"SubIndex 081\000"
"SubIndex 082\000"
"SubIndex 083\000"
"SubIndex 084\000"
"SubIndex 085\000"
"SubIndex 086\000"
"SubIndex 087\000"
"SubIndex 088\000"
"SubIndex 089\000"
"SubIndex 090\000"
"SubIndex 091\000"
"SubIndex 092\000"
"SubIndex 093\000"
"SubIndex 094\000"
"SubIndex 095\000"
"SubIndex 096\000"
"SubIndex 097\000"
"SubIndex 098\000"
"SubIndex 099\000"
"SubIndex 100\000"
"SubIndex 101\000"
"SubIndex 102\000"
"SubIndex 103\000"
"SubIndex 104\000"
"SubIndex 105\000"
"SubIndex 106\000"
"SubIndex 107\000"
"SubIndex 108\000"
"SubIndex 109\000"
"SubIndex 110\000"
"SubIndex 111\000"
"SubIndex 112\000"
"SubIndex 113\000"
"SubIndex 114\000"
"SubIndex 115\000"
"SubIndex 116\000"
"SubIndex 117\000"
"SubIndex 118\000"
"SubIndex 119\000"
"SubIndex 120\000"
"SubIndex 121\000"
"SubIndex 122\000"
"SubIndex 123\000"
"SubIndex 124\000"
"SubIndex 125\000"
"SubIndex 126\000"
"SubIndex 127\000"
"SubIndex 128\000\377";
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
UINT32 SI17; /* Subindex17 - Reference to 0x7010.17 */
UINT32 SI18; /* Subindex18 - Reference to 0x7010.18 */
UINT32 SI19; /* Subindex19 - Reference to 0x7010.19 */
UINT32 SI20; /* Subindex20 - Reference to 0x7010.20 */
UINT32 SI21; /* Subindex21 - Reference to 0x7010.21 */
UINT32 SI22; /* Subindex22 - Reference to 0x7010.22 */
UINT32 SI23; /* Subindex23 - Reference to 0x7010.23 */
UINT32 SI24; /* Subindex24 - Reference to 0x7010.24 */
UINT32 SI25; /* Subindex25 - Reference to 0x7010.25 */
UINT32 SI26; /* Subindex26 - Reference to 0x7010.26 */
UINT32 SI27; /* Subindex27 - Reference to 0x7010.27 */
UINT32 SI28; /* Subindex28 - Reference to 0x7010.28 */
UINT32 SI29; /* Subindex29 - Reference to 0x7010.29 */
UINT32 SI30; /* Subindex30 - Reference to 0x7010.30 */
UINT32 SI31; /* Subindex31 - Reference to 0x7010.31 */
UINT32 SI32; /* Subindex32 - Reference to 0x7010.32 */
UINT32 SI33; /* Subindex33 - Reference to 0x7010.33 */
UINT32 SI34; /* Subindex34 - Reference to 0x7010.34 */
UINT32 SI35; /* Subindex35 - Reference to 0x7010.35 */
UINT32 SI36; /* Subindex36 - Reference to 0x7010.36 */
UINT32 SI37; /* Subindex37 - Reference to 0x7010.37 */
UINT32 SI38; /* Subindex38 - Reference to 0x7010.38 */
UINT32 SI39; /* Subindex39 - Reference to 0x7010.39 */
UINT32 SI40; /* Subindex40 - Reference to 0x7010.40 */
UINT32 SI41; /* Subindex41 - Reference to 0x7010.41 */
UINT32 SI42; /* Subindex42 - Reference to 0x7010.42 */
UINT32 SI43; /* Subindex43 - Reference to 0x7010.43 */
UINT32 SI44; /* Subindex44 - Reference to 0x7010.44 */
UINT32 SI45; /* Subindex45 - Reference to 0x7010.45 */
UINT32 SI46; /* Subindex46 - Reference to 0x7010.46 */
UINT32 SI47; /* Subindex47 - Reference to 0x7010.47 */
UINT32 SI48; /* Subindex48 - Reference to 0x7010.48 */
UINT32 SI49; /* Subindex49 - Reference to 0x7010.49 */
UINT32 SI50; /* Subindex50 - Reference to 0x7010.50 */
UINT32 SI51; /* Subindex51 - Reference to 0x7010.51 */
UINT32 SI52; /* Subindex52 - Reference to 0x7010.52 */
UINT32 SI53; /* Subindex53 - Reference to 0x7010.53 */
UINT32 SI54; /* Subindex54 - Reference to 0x7010.54 */
UINT32 SI55; /* Subindex55 - Reference to 0x7010.55 */
UINT32 SI56; /* Subindex56 - Reference to 0x7010.56 */
UINT32 SI57; /* Subindex57 - Reference to 0x7010.57 */
UINT32 SI58; /* Subindex58 - Reference to 0x7010.58 */
UINT32 SI59; /* Subindex59 - Reference to 0x7010.59 */
UINT32 SI60; /* Subindex60 - Reference to 0x7010.60 */
UINT32 SI61; /* Subindex61 - Reference to 0x7010.61 */
UINT32 SI62; /* Subindex62 - Reference to 0x7010.62 */
UINT32 SI63; /* Subindex63 - Reference to 0x7010.63 */
UINT32 SI64; /* Subindex64 - Reference to 0x7010.64 */
UINT32 SI65; /* Subindex65 - Reference to 0x7010.65 */
UINT32 SI66; /* Subindex66 - Reference to 0x7010.66 */
UINT32 SI67; /* Subindex67 - Reference to 0x7010.67 */
UINT32 SI68; /* Subindex68 - Reference to 0x7010.68 */
UINT32 SI69; /* Subindex69 - Reference to 0x7010.69 */
UINT32 SI70; /* Subindex70 - Reference to 0x7010.70 */
UINT32 SI71; /* Subindex71 - Reference to 0x7010.71 */
UINT32 SI72; /* Subindex72 - Reference to 0x7010.72 */
UINT32 SI73; /* Subindex73 - Reference to 0x7010.73 */
UINT32 SI74; /* Subindex74 - Reference to 0x7010.74 */
UINT32 SI75; /* Subindex75 - Reference to 0x7010.75 */
UINT32 SI76; /* Subindex76 - Reference to 0x7010.76 */
UINT32 SI77; /* Subindex77 - Reference to 0x7010.77 */
UINT32 SI78; /* Subindex78 - Reference to 0x7010.78 */
UINT32 SI79; /* Subindex79 - Reference to 0x7010.79 */
UINT32 SI80; /* Subindex80 - Reference to 0x7010.80 */
UINT32 SI81; /* Subindex81 - Reference to 0x7010.81 */
UINT32 SI82; /* Subindex82 - Reference to 0x7010.82 */
UINT32 SI83; /* Subindex83 - Reference to 0x7010.83 */
UINT32 SI84; /* Subindex84 - Reference to 0x7010.84 */
UINT32 SI85; /* Subindex85 - Reference to 0x7010.85 */
UINT32 SI86; /* Subindex86 - Reference to 0x7010.86 */
UINT32 SI87; /* Subindex87 - Reference to 0x7010.87 */
UINT32 SI88; /* Subindex88 - Reference to 0x7010.88 */
UINT32 SI89; /* Subindex89 - Reference to 0x7010.89 */
UINT32 SI90; /* Subindex90 - Reference to 0x7010.90 */
UINT32 SI91; /* Subindex91 - Reference to 0x7010.91 */
UINT32 SI92; /* Subindex92 - Reference to 0x7010.92 */
UINT32 SI93; /* Subindex93 - Reference to 0x7010.93 */
UINT32 SI94; /* Subindex94 - Reference to 0x7010.94 */
UINT32 SI95; /* Subindex95 - Reference to 0x7010.95 */
UINT32 SI96; /* Subindex96 - Reference to 0x7010.96 */
UINT32 SI97; /* Subindex97 - Reference to 0x7010.97 */
UINT32 SI98; /* Subindex98 - Reference to 0x7010.98 */
UINT32 SI99; /* Subindex99 - Reference to 0x7010.99 */
UINT32 SI100; /* Subindex100 - Reference to 0x7010.100 */
UINT32 SI101; /* Subindex101 - Reference to 0x7010.101 */
UINT32 SI102; /* Subindex102 - Reference to 0x7010.102 */
UINT32 SI103; /* Subindex103 - Reference to 0x7010.103 */
UINT32 SI104; /* Subindex104 - Reference to 0x7010.104 */
UINT32 SI105; /* Subindex105 - Reference to 0x7010.105 */
UINT32 SI106; /* Subindex106 - Reference to 0x7010.106 */
UINT32 SI107; /* Subindex107 - Reference to 0x7010.107 */
UINT32 SI108; /* Subindex108 - Reference to 0x7010.108 */
UINT32 SI109; /* Subindex109 - Reference to 0x7010.109 */
UINT32 SI110; /* Subindex110 - Reference to 0x7010.110 */
UINT32 SI111; /* Subindex111 - Reference to 0x7010.111 */
UINT32 SI112; /* Subindex112 - Reference to 0x7010.112 */
UINT32 SI113; /* Subindex113 - Reference to 0x7010.113 */
UINT32 SI114; /* Subindex114 - Reference to 0x7010.114 */
UINT32 SI115; /* Subindex115 - Reference to 0x7010.115 */
UINT32 SI116; /* Subindex116 - Reference to 0x7010.116 */
UINT32 SI117; /* Subindex117 - Reference to 0x7010.117 */
UINT32 SI118; /* Subindex118 - Reference to 0x7010.118 */
UINT32 SI119; /* Subindex119 - Reference to 0x7010.119 */
UINT32 SI120; /* Subindex120 - Reference to 0x7010.120 */
UINT32 SI121; /* Subindex121 - Reference to 0x7010.121 */
UINT32 SI122; /* Subindex122 - Reference to 0x7010.122 */
UINT32 SI123; /* Subindex123 - Reference to 0x7010.123 */
UINT32 SI124; /* Subindex124 - Reference to 0x7010.124 */
UINT32 SI125; /* Subindex125 - Reference to 0x7010.125 */
UINT32 SI126; /* Subindex126 - Reference to 0x7010.126 */
UINT32 SI127; /* Subindex127 - Reference to 0x7010.127 */
UINT32 SI128; /* Subindex128 - Reference to 0x7010.128 */
} OBJ_STRUCT_PACKED_END
TOBJ1601;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1601 OutputsProcessDataMapping0x1601
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={128,0x70100120,0x70100220,0x70100320,0x70100420,0x70100520,0x70100620,0x70100720,0x70100820,0x70100920,0x70100A20,0x70100B20,0x70100C20,0x70100D20,0x70100E20,0x70100F20,0x70101020,0x70101120,0x70101220,0x70101320,0x70101420,0x70101520,0x70101620,0x70101720,0x70101820,0x70101920,0x70101A20,0x70101B20,0x70101C20,0x70101D20,0x70101E20,0x70101F20,0x70102020,0x70102120,0x70102220,0x70102320,0x70102420,0x70102520,0x70102620,0x70102720,0x70102820,0x70102920,0x70102A20,0x70102B20,0x70102C20,0x70102D20,0x70102E20,0x70102F20,0x70103020,0x70103120,0x70103220,0x70103320,0x70103420,0x70103520,0x70103620,0x70103720,0x70103820,0x70103920,0x70103A20,0x70103B20,0x70103C20,0x70103D20,0x70103E20,0x70103F20,0x70104020,0x70104120,0x70104220,0x70104320,0x70104420,0x70104520,0x70104620,0x70104720,0x70104820,0x70104920,0x70104A20,0x70104B20,0x70104C20,0x70104D20,0x70104E20,0x70104F20,0x70105020,0x70105120,0x70105220,0x70105320,0x70105420,0x70105520,0x70105620,0x70105720,0x70105820,0x70105920,0x70105A20,0x70105B20,0x70105C20,0x70105D20,0x70105E20,0x70105F20,0x70106020,0x70106120,0x70106220,0x70106320,0x70106420,0x70106520,0x70106620,0x70106720,0x70106820,0x70106920,0x70106A20,0x70106B20,0x70106C20,0x70106D20,0x70106E20,0x70106F20,0x70107020,0x70107120,0x70107220,0x70107320,0x70107420,0x70107520,0x70107620,0x70107720,0x70107820,0x70107920,0x70107A20,0x70107B20,0x70107C20,0x70107D20,0x70107E20,0x70107F20,0x70108020}
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
* SubIndex 17 - Reference to 0x6000.17<br>
* SubIndex 18 - Reference to 0x6000.18<br>
* SubIndex 19 - Reference to 0x6000.19<br>
* SubIndex 20 - Reference to 0x6000.20<br>
* SubIndex 21 - Reference to 0x6000.21<br>
* SubIndex 22 - Reference to 0x6000.22<br>
* SubIndex 23 - Reference to 0x6000.23<br>
* SubIndex 24 - Reference to 0x6000.24<br>
* SubIndex 25 - Reference to 0x6000.25<br>
* SubIndex 26 - Reference to 0x6000.26<br>
* SubIndex 27 - Reference to 0x6000.27<br>
* SubIndex 28 - Reference to 0x6000.28<br>
* SubIndex 29 - Reference to 0x6000.29<br>
* SubIndex 30 - Reference to 0x6000.30<br>
* SubIndex 31 - Reference to 0x6000.31<br>
* SubIndex 32 - Reference to 0x6000.32<br>
* SubIndex 33 - Reference to 0x6000.33<br>
* SubIndex 34 - Reference to 0x6000.34<br>
* SubIndex 35 - Reference to 0x6000.35<br>
* SubIndex 36 - Reference to 0x6000.36<br>
* SubIndex 37 - Reference to 0x6000.37<br>
* SubIndex 38 - Reference to 0x6000.38<br>
* SubIndex 39 - Reference to 0x6000.39<br>
* SubIndex 40 - Reference to 0x6000.40<br>
* SubIndex 41 - Reference to 0x6000.41<br>
* SubIndex 42 - Reference to 0x6000.42<br>
* SubIndex 43 - Reference to 0x6000.43<br>
* SubIndex 44 - Reference to 0x6000.44<br>
* SubIndex 45 - Reference to 0x6000.45<br>
* SubIndex 46 - Reference to 0x6000.46<br>
* SubIndex 47 - Reference to 0x6000.47<br>
* SubIndex 48 - Reference to 0x6000.48<br>
* SubIndex 49 - Reference to 0x6000.49<br>
* SubIndex 50 - Reference to 0x6000.50<br>
* SubIndex 51 - Reference to 0x6000.51<br>
* SubIndex 52 - Reference to 0x6000.52<br>
* SubIndex 53 - Reference to 0x6000.53<br>
* SubIndex 54 - Reference to 0x6000.54<br>
* SubIndex 55 - Reference to 0x6000.55<br>
* SubIndex 56 - Reference to 0x6000.56<br>
* SubIndex 57 - Reference to 0x6000.57<br>
* SubIndex 58 - Reference to 0x6000.58<br>
* SubIndex 59 - Reference to 0x6000.59<br>
* SubIndex 60 - Reference to 0x6000.60<br>
* SubIndex 61 - Reference to 0x6000.61<br>
* SubIndex 62 - Reference to 0x6000.62<br>
* SubIndex 63 - Reference to 0x6000.63<br>
* SubIndex 64 - Reference to 0x6000.64<br>
* SubIndex 65 - Reference to 0x6000.65<br>
* SubIndex 66 - Reference to 0x6000.66<br>
* SubIndex 67 - Reference to 0x6000.67<br>
* SubIndex 68 - Reference to 0x6000.68<br>
* SubIndex 69 - Reference to 0x6000.69<br>
* SubIndex 70 - Reference to 0x6000.70<br>
* SubIndex 71 - Reference to 0x6000.71<br>
* SubIndex 72 - Reference to 0x6000.72<br>
* SubIndex 73 - Reference to 0x6000.73<br>
* SubIndex 74 - Reference to 0x6000.74<br>
* SubIndex 75 - Reference to 0x6000.75<br>
* SubIndex 76 - Reference to 0x6000.76<br>
* SubIndex 77 - Reference to 0x6000.77<br>
* SubIndex 78 - Reference to 0x6000.78<br>
* SubIndex 79 - Reference to 0x6000.79<br>
* SubIndex 80 - Reference to 0x6000.80<br>
* SubIndex 81 - Reference to 0x6000.81<br>
* SubIndex 82 - Reference to 0x6000.82<br>
* SubIndex 83 - Reference to 0x6000.83<br>
* SubIndex 84 - Reference to 0x6000.84<br>
* SubIndex 85 - Reference to 0x6000.85<br>
* SubIndex 86 - Reference to 0x6000.86<br>
* SubIndex 87 - Reference to 0x6000.87<br>
* SubIndex 88 - Reference to 0x6000.88<br>
* SubIndex 89 - Reference to 0x6000.89<br>
* SubIndex 90 - Reference to 0x6000.90<br>
* SubIndex 91 - Reference to 0x6000.91<br>
* SubIndex 92 - Reference to 0x6000.92<br>
* SubIndex 93 - Reference to 0x6000.93<br>
* SubIndex 94 - Reference to 0x6000.94<br>
* SubIndex 95 - Reference to 0x6000.95<br>
* SubIndex 96 - Reference to 0x6000.96<br>
* SubIndex 97 - Reference to 0x6000.97<br>
* SubIndex 98 - Reference to 0x6000.98<br>
* SubIndex 99 - Reference to 0x6000.99<br>
* SubIndex 100 - Reference to 0x6000.100<br>
* SubIndex 101 - Reference to 0x6000.101<br>
* SubIndex 102 - Reference to 0x6000.102<br>
* SubIndex 103 - Reference to 0x6000.103<br>
* SubIndex 104 - Reference to 0x6000.104<br>
* SubIndex 105 - Reference to 0x6000.105<br>
* SubIndex 106 - Reference to 0x6000.106<br>
* SubIndex 107 - Reference to 0x6000.107<br>
* SubIndex 108 - Reference to 0x6000.108<br>
* SubIndex 109 - Reference to 0x6000.109<br>
* SubIndex 110 - Reference to 0x6000.110<br>
* SubIndex 111 - Reference to 0x6000.111<br>
* SubIndex 112 - Reference to 0x6000.112<br>
* SubIndex 113 - Reference to 0x6000.113<br>
* SubIndex 114 - Reference to 0x6000.114<br>
* SubIndex 115 - Reference to 0x6000.115<br>
* SubIndex 116 - Reference to 0x6000.116<br>
* SubIndex 117 - Reference to 0x6000.117<br>
* SubIndex 118 - Reference to 0x6000.118<br>
* SubIndex 119 - Reference to 0x6000.119<br>
* SubIndex 120 - Reference to 0x6000.120<br>
* SubIndex 121 - Reference to 0x6000.121<br>
* SubIndex 122 - Reference to 0x6000.122<br>
* SubIndex 123 - Reference to 0x6000.123<br>
* SubIndex 124 - Reference to 0x6000.124<br>
* SubIndex 125 - Reference to 0x6000.125<br>
* SubIndex 126 - Reference to 0x6000.126<br>
* SubIndex 127 - Reference to 0x6000.127<br>
* SubIndex 128 - Reference to 0x6000.128<br>
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
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex16 - Reference to 0x6000.16 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex17 - Reference to 0x6000.17 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex18 - Reference to 0x6000.18 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex19 - Reference to 0x6000.19 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex20 - Reference to 0x6000.20 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex21 - Reference to 0x6000.21 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex22 - Reference to 0x6000.22 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex23 - Reference to 0x6000.23 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex24 - Reference to 0x6000.24 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex25 - Reference to 0x6000.25 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex26 - Reference to 0x6000.26 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex27 - Reference to 0x6000.27 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex28 - Reference to 0x6000.28 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex29 - Reference to 0x6000.29 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex30 - Reference to 0x6000.30 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex31 - Reference to 0x6000.31 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex32 - Reference to 0x6000.32 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex33 - Reference to 0x6000.33 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex34 - Reference to 0x6000.34 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex35 - Reference to 0x6000.35 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex36 - Reference to 0x6000.36 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex37 - Reference to 0x6000.37 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex38 - Reference to 0x6000.38 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex39 - Reference to 0x6000.39 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex40 - Reference to 0x6000.40 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex41 - Reference to 0x6000.41 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex42 - Reference to 0x6000.42 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex43 - Reference to 0x6000.43 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex44 - Reference to 0x6000.44 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex45 - Reference to 0x6000.45 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex46 - Reference to 0x6000.46 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex47 - Reference to 0x6000.47 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex48 - Reference to 0x6000.48 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex49 - Reference to 0x6000.49 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex50 - Reference to 0x6000.50 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex51 - Reference to 0x6000.51 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex52 - Reference to 0x6000.52 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex53 - Reference to 0x6000.53 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex54 - Reference to 0x6000.54 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex55 - Reference to 0x6000.55 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex56 - Reference to 0x6000.56 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex57 - Reference to 0x6000.57 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex58 - Reference to 0x6000.58 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex59 - Reference to 0x6000.59 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex60 - Reference to 0x6000.60 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex61 - Reference to 0x6000.61 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex62 - Reference to 0x6000.62 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex63 - Reference to 0x6000.63 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex64 - Reference to 0x6000.64 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex65 - Reference to 0x6000.65 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex66 - Reference to 0x6000.66 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex67 - Reference to 0x6000.67 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex68 - Reference to 0x6000.68 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex69 - Reference to 0x6000.69 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex70 - Reference to 0x6000.70 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex71 - Reference to 0x6000.71 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex72 - Reference to 0x6000.72 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex73 - Reference to 0x6000.73 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex74 - Reference to 0x6000.74 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex75 - Reference to 0x6000.75 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex76 - Reference to 0x6000.76 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex77 - Reference to 0x6000.77 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex78 - Reference to 0x6000.78 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex79 - Reference to 0x6000.79 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex80 - Reference to 0x6000.80 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex81 - Reference to 0x6000.81 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex82 - Reference to 0x6000.82 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex83 - Reference to 0x6000.83 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex84 - Reference to 0x6000.84 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex85 - Reference to 0x6000.85 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex86 - Reference to 0x6000.86 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex87 - Reference to 0x6000.87 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex88 - Reference to 0x6000.88 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex89 - Reference to 0x6000.89 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex90 - Reference to 0x6000.90 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex91 - Reference to 0x6000.91 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex92 - Reference to 0x6000.92 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex93 - Reference to 0x6000.93 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex94 - Reference to 0x6000.94 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex95 - Reference to 0x6000.95 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex96 - Reference to 0x6000.96 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex97 - Reference to 0x6000.97 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex98 - Reference to 0x6000.98 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex99 - Reference to 0x6000.99 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex100 - Reference to 0x6000.100 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex101 - Reference to 0x6000.101 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex102 - Reference to 0x6000.102 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex103 - Reference to 0x6000.103 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex104 - Reference to 0x6000.104 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex105 - Reference to 0x6000.105 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex106 - Reference to 0x6000.106 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex107 - Reference to 0x6000.107 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex108 - Reference to 0x6000.108 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex109 - Reference to 0x6000.109 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex110 - Reference to 0x6000.110 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex111 - Reference to 0x6000.111 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex112 - Reference to 0x6000.112 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex113 - Reference to 0x6000.113 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex114 - Reference to 0x6000.114 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex115 - Reference to 0x6000.115 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex116 - Reference to 0x6000.116 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex117 - Reference to 0x6000.117 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex118 - Reference to 0x6000.118 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex119 - Reference to 0x6000.119 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex120 - Reference to 0x6000.120 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex121 - Reference to 0x6000.121 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex122 - Reference to 0x6000.122 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex123 - Reference to 0x6000.123 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex124 - Reference to 0x6000.124 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex125 - Reference to 0x6000.125 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex126 - Reference to 0x6000.126 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex127 - Reference to 0x6000.127 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex128 - Reference to 0x6000.128 */

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
"SubIndex 016\000"
"SubIndex 017\000"
"SubIndex 018\000"
"SubIndex 019\000"
"SubIndex 020\000"
"SubIndex 021\000"
"SubIndex 022\000"
"SubIndex 023\000"
"SubIndex 024\000"
"SubIndex 025\000"
"SubIndex 026\000"
"SubIndex 027\000"
"SubIndex 028\000"
"SubIndex 029\000"
"SubIndex 030\000"
"SubIndex 031\000"
"SubIndex 032\000"
"SubIndex 033\000"
"SubIndex 034\000"
"SubIndex 035\000"
"SubIndex 036\000"
"SubIndex 037\000"
"SubIndex 038\000"
"SubIndex 039\000"
"SubIndex 040\000"
"SubIndex 041\000"
"SubIndex 042\000"
"SubIndex 043\000"
"SubIndex 044\000"
"SubIndex 045\000"
"SubIndex 046\000"
"SubIndex 047\000"
"SubIndex 048\000"
"SubIndex 049\000"
"SubIndex 050\000"
"SubIndex 051\000"
"SubIndex 052\000"
"SubIndex 053\000"
"SubIndex 054\000"
"SubIndex 055\000"
"SubIndex 056\000"
"SubIndex 057\000"
"SubIndex 058\000"
"SubIndex 059\000"
"SubIndex 060\000"
"SubIndex 061\000"
"SubIndex 062\000"
"SubIndex 063\000"
"SubIndex 064\000"
"SubIndex 065\000"
"SubIndex 066\000"
"SubIndex 067\000"
"SubIndex 068\000"
"SubIndex 069\000"
"SubIndex 070\000"
"SubIndex 071\000"
"SubIndex 072\000"
"SubIndex 073\000"
"SubIndex 074\000"
"SubIndex 075\000"
"SubIndex 076\000"
"SubIndex 077\000"
"SubIndex 078\000"
"SubIndex 079\000"
"SubIndex 080\000"
"SubIndex 081\000"
"SubIndex 082\000"
"SubIndex 083\000"
"SubIndex 084\000"
"SubIndex 085\000"
"SubIndex 086\000"
"SubIndex 087\000"
"SubIndex 088\000"
"SubIndex 089\000"
"SubIndex 090\000"
"SubIndex 091\000"
"SubIndex 092\000"
"SubIndex 093\000"
"SubIndex 094\000"
"SubIndex 095\000"
"SubIndex 096\000"
"SubIndex 097\000"
"SubIndex 098\000"
"SubIndex 099\000"
"SubIndex 100\000"
"SubIndex 101\000"
"SubIndex 102\000"
"SubIndex 103\000"
"SubIndex 104\000"
"SubIndex 105\000"
"SubIndex 106\000"
"SubIndex 107\000"
"SubIndex 108\000"
"SubIndex 109\000"
"SubIndex 110\000"
"SubIndex 111\000"
"SubIndex 112\000"
"SubIndex 113\000"
"SubIndex 114\000"
"SubIndex 115\000"
"SubIndex 116\000"
"SubIndex 117\000"
"SubIndex 118\000"
"SubIndex 119\000"
"SubIndex 120\000"
"SubIndex 121\000"
"SubIndex 122\000"
"SubIndex 123\000"
"SubIndex 124\000"
"SubIndex 125\000"
"SubIndex 126\000"
"SubIndex 127\000"
"SubIndex 128\000\377";
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
UINT32 SI17; /* Subindex17 - Reference to 0x6000.17 */
UINT32 SI18; /* Subindex18 - Reference to 0x6000.18 */
UINT32 SI19; /* Subindex19 - Reference to 0x6000.19 */
UINT32 SI20; /* Subindex20 - Reference to 0x6000.20 */
UINT32 SI21; /* Subindex21 - Reference to 0x6000.21 */
UINT32 SI22; /* Subindex22 - Reference to 0x6000.22 */
UINT32 SI23; /* Subindex23 - Reference to 0x6000.23 */
UINT32 SI24; /* Subindex24 - Reference to 0x6000.24 */
UINT32 SI25; /* Subindex25 - Reference to 0x6000.25 */
UINT32 SI26; /* Subindex26 - Reference to 0x6000.26 */
UINT32 SI27; /* Subindex27 - Reference to 0x6000.27 */
UINT32 SI28; /* Subindex28 - Reference to 0x6000.28 */
UINT32 SI29; /* Subindex29 - Reference to 0x6000.29 */
UINT32 SI30; /* Subindex30 - Reference to 0x6000.30 */
UINT32 SI31; /* Subindex31 - Reference to 0x6000.31 */
UINT32 SI32; /* Subindex32 - Reference to 0x6000.32 */
UINT32 SI33; /* Subindex33 - Reference to 0x6000.33 */
UINT32 SI34; /* Subindex34 - Reference to 0x6000.34 */
UINT32 SI35; /* Subindex35 - Reference to 0x6000.35 */
UINT32 SI36; /* Subindex36 - Reference to 0x6000.36 */
UINT32 SI37; /* Subindex37 - Reference to 0x6000.37 */
UINT32 SI38; /* Subindex38 - Reference to 0x6000.38 */
UINT32 SI39; /* Subindex39 - Reference to 0x6000.39 */
UINT32 SI40; /* Subindex40 - Reference to 0x6000.40 */
UINT32 SI41; /* Subindex41 - Reference to 0x6000.41 */
UINT32 SI42; /* Subindex42 - Reference to 0x6000.42 */
UINT32 SI43; /* Subindex43 - Reference to 0x6000.43 */
UINT32 SI44; /* Subindex44 - Reference to 0x6000.44 */
UINT32 SI45; /* Subindex45 - Reference to 0x6000.45 */
UINT32 SI46; /* Subindex46 - Reference to 0x6000.46 */
UINT32 SI47; /* Subindex47 - Reference to 0x6000.47 */
UINT32 SI48; /* Subindex48 - Reference to 0x6000.48 */
UINT32 SI49; /* Subindex49 - Reference to 0x6000.49 */
UINT32 SI50; /* Subindex50 - Reference to 0x6000.50 */
UINT32 SI51; /* Subindex51 - Reference to 0x6000.51 */
UINT32 SI52; /* Subindex52 - Reference to 0x6000.52 */
UINT32 SI53; /* Subindex53 - Reference to 0x6000.53 */
UINT32 SI54; /* Subindex54 - Reference to 0x6000.54 */
UINT32 SI55; /* Subindex55 - Reference to 0x6000.55 */
UINT32 SI56; /* Subindex56 - Reference to 0x6000.56 */
UINT32 SI57; /* Subindex57 - Reference to 0x6000.57 */
UINT32 SI58; /* Subindex58 - Reference to 0x6000.58 */
UINT32 SI59; /* Subindex59 - Reference to 0x6000.59 */
UINT32 SI60; /* Subindex60 - Reference to 0x6000.60 */
UINT32 SI61; /* Subindex61 - Reference to 0x6000.61 */
UINT32 SI62; /* Subindex62 - Reference to 0x6000.62 */
UINT32 SI63; /* Subindex63 - Reference to 0x6000.63 */
UINT32 SI64; /* Subindex64 - Reference to 0x6000.64 */
UINT32 SI65; /* Subindex65 - Reference to 0x6000.65 */
UINT32 SI66; /* Subindex66 - Reference to 0x6000.66 */
UINT32 SI67; /* Subindex67 - Reference to 0x6000.67 */
UINT32 SI68; /* Subindex68 - Reference to 0x6000.68 */
UINT32 SI69; /* Subindex69 - Reference to 0x6000.69 */
UINT32 SI70; /* Subindex70 - Reference to 0x6000.70 */
UINT32 SI71; /* Subindex71 - Reference to 0x6000.71 */
UINT32 SI72; /* Subindex72 - Reference to 0x6000.72 */
UINT32 SI73; /* Subindex73 - Reference to 0x6000.73 */
UINT32 SI74; /* Subindex74 - Reference to 0x6000.74 */
UINT32 SI75; /* Subindex75 - Reference to 0x6000.75 */
UINT32 SI76; /* Subindex76 - Reference to 0x6000.76 */
UINT32 SI77; /* Subindex77 - Reference to 0x6000.77 */
UINT32 SI78; /* Subindex78 - Reference to 0x6000.78 */
UINT32 SI79; /* Subindex79 - Reference to 0x6000.79 */
UINT32 SI80; /* Subindex80 - Reference to 0x6000.80 */
UINT32 SI81; /* Subindex81 - Reference to 0x6000.81 */
UINT32 SI82; /* Subindex82 - Reference to 0x6000.82 */
UINT32 SI83; /* Subindex83 - Reference to 0x6000.83 */
UINT32 SI84; /* Subindex84 - Reference to 0x6000.84 */
UINT32 SI85; /* Subindex85 - Reference to 0x6000.85 */
UINT32 SI86; /* Subindex86 - Reference to 0x6000.86 */
UINT32 SI87; /* Subindex87 - Reference to 0x6000.87 */
UINT32 SI88; /* Subindex88 - Reference to 0x6000.88 */
UINT32 SI89; /* Subindex89 - Reference to 0x6000.89 */
UINT32 SI90; /* Subindex90 - Reference to 0x6000.90 */
UINT32 SI91; /* Subindex91 - Reference to 0x6000.91 */
UINT32 SI92; /* Subindex92 - Reference to 0x6000.92 */
UINT32 SI93; /* Subindex93 - Reference to 0x6000.93 */
UINT32 SI94; /* Subindex94 - Reference to 0x6000.94 */
UINT32 SI95; /* Subindex95 - Reference to 0x6000.95 */
UINT32 SI96; /* Subindex96 - Reference to 0x6000.96 */
UINT32 SI97; /* Subindex97 - Reference to 0x6000.97 */
UINT32 SI98; /* Subindex98 - Reference to 0x6000.98 */
UINT32 SI99; /* Subindex99 - Reference to 0x6000.99 */
UINT32 SI100; /* Subindex100 - Reference to 0x6000.100 */
UINT32 SI101; /* Subindex101 - Reference to 0x6000.101 */
UINT32 SI102; /* Subindex102 - Reference to 0x6000.102 */
UINT32 SI103; /* Subindex103 - Reference to 0x6000.103 */
UINT32 SI104; /* Subindex104 - Reference to 0x6000.104 */
UINT32 SI105; /* Subindex105 - Reference to 0x6000.105 */
UINT32 SI106; /* Subindex106 - Reference to 0x6000.106 */
UINT32 SI107; /* Subindex107 - Reference to 0x6000.107 */
UINT32 SI108; /* Subindex108 - Reference to 0x6000.108 */
UINT32 SI109; /* Subindex109 - Reference to 0x6000.109 */
UINT32 SI110; /* Subindex110 - Reference to 0x6000.110 */
UINT32 SI111; /* Subindex111 - Reference to 0x6000.111 */
UINT32 SI112; /* Subindex112 - Reference to 0x6000.112 */
UINT32 SI113; /* Subindex113 - Reference to 0x6000.113 */
UINT32 SI114; /* Subindex114 - Reference to 0x6000.114 */
UINT32 SI115; /* Subindex115 - Reference to 0x6000.115 */
UINT32 SI116; /* Subindex116 - Reference to 0x6000.116 */
UINT32 SI117; /* Subindex117 - Reference to 0x6000.117 */
UINT32 SI118; /* Subindex118 - Reference to 0x6000.118 */
UINT32 SI119; /* Subindex119 - Reference to 0x6000.119 */
UINT32 SI120; /* Subindex120 - Reference to 0x6000.120 */
UINT32 SI121; /* Subindex121 - Reference to 0x6000.121 */
UINT32 SI122; /* Subindex122 - Reference to 0x6000.122 */
UINT32 SI123; /* Subindex123 - Reference to 0x6000.123 */
UINT32 SI124; /* Subindex124 - Reference to 0x6000.124 */
UINT32 SI125; /* Subindex125 - Reference to 0x6000.125 */
UINT32 SI126; /* Subindex126 - Reference to 0x6000.126 */
UINT32 SI127; /* Subindex127 - Reference to 0x6000.127 */
UINT32 SI128; /* Subindex128 - Reference to 0x6000.128 */
} OBJ_STRUCT_PACKED_END
TOBJ1A00;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A00 InputsProcessDataMapping0x1A00
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={128,0x60000120,0x60000220,0x60000320,0x60000420,0x60000520,0x60000620,0x60000720,0x60000820,0x60000920,0x60000A20,0x60000B20,0x60000C20,0x60000D20,0x60000E20,0x60000F20,0x60001020,0x60001120,0x60001220,0x60001320,0x60001420,0x60001520,0x60001620,0x60001720,0x60001820,0x60001920,0x60001A20,0x60001B20,0x60001C20,0x60001D20,0x60001E20,0x60001F20,0x60002020,0x60002120,0x60002220,0x60002320,0x60002420,0x60002520,0x60002620,0x60002720,0x60002820,0x60002920,0x60002A20,0x60002B20,0x60002C20,0x60002D20,0x60002E20,0x60002F20,0x60003020,0x60003120,0x60003220,0x60003320,0x60003420,0x60003520,0x60003620,0x60003720,0x60003820,0x60003920,0x60003A20,0x60003B20,0x60003C20,0x60003D20,0x60003E20,0x60003F20,0x60004020,0x60004120,0x60004220,0x60004320,0x60004420,0x60004520,0x60004620,0x60004720,0x60004820,0x60004920,0x60004A20,0x60004B20,0x60004C20,0x60004D20,0x60004E20,0x60004F20,0x60005020,0x60005120,0x60005220,0x60005320,0x60005420,0x60005520,0x60005620,0x60005720,0x60005820,0x60005920,0x60005A20,0x60005B20,0x60005C20,0x60005D20,0x60005E20,0x60005F20,0x60006020,0x60006120,0x60006220,0x60006320,0x60006420,0x60006520,0x60006620,0x60006720,0x60006820,0x60006920,0x60006A20,0x60006B20,0x60006C20,0x60006D20,0x60006E20,0x60006F20,0x60007020,0x60007120,0x60007220,0x60007320,0x60007420,0x60007520,0x60007620,0x60007720,0x60007820,0x60007920,0x60007A20,0x60007B20,0x60007C20,0x60007D20,0x60007E20,0x60007F20,0x60008020}
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
* SubIndex 17 - Counter17<br>
* SubIndex 18 - Counter18<br>
* SubIndex 19 - Counter19<br>
* SubIndex 20 - Counter20<br>
* SubIndex 21 - Counter21<br>
* SubIndex 22 - Counter22<br>
* SubIndex 23 - Counter23<br>
* SubIndex 24 - Counter24<br>
* SubIndex 25 - Counter25<br>
* SubIndex 26 - Counter26<br>
* SubIndex 27 - Counter27<br>
* SubIndex 28 - Counter28<br>
* SubIndex 29 - Counter29<br>
* SubIndex 30 - Counter30<br>
* SubIndex 31 - Counter31<br>
* SubIndex 32 - Counter32<br>
* SubIndex 33 - Counter33<br>
* SubIndex 34 - Counter34<br>
* SubIndex 35 - Counter35<br>
* SubIndex 36 - Counter36<br>
* SubIndex 37 - Counter37<br>
* SubIndex 38 - Counter38<br>
* SubIndex 39 - Counter39<br>
* SubIndex 40 - Counter40<br>
* SubIndex 41 - Counter41<br>
* SubIndex 42 - Counter42<br>
* SubIndex 43 - Counter43<br>
* SubIndex 44 - Counter44<br>
* SubIndex 45 - Counter45<br>
* SubIndex 46 - Counter46<br>
* SubIndex 47 - Counter47<br>
* SubIndex 48 - Counter48<br>
* SubIndex 49 - Counter49<br>
* SubIndex 50 - Counter50<br>
* SubIndex 51 - Counter51<br>
* SubIndex 52 - Counter52<br>
* SubIndex 53 - Counter53<br>
* SubIndex 54 - Counter54<br>
* SubIndex 55 - Counter55<br>
* SubIndex 56 - Counter56<br>
* SubIndex 57 - Counter57<br>
* SubIndex 58 - Counter58<br>
* SubIndex 59 - Counter59<br>
* SubIndex 60 - Counter60<br>
* SubIndex 61 - Counter61<br>
* SubIndex 62 - Counter62<br>
* SubIndex 63 - Counter63<br>
* SubIndex 64 - Counter64<br>
* SubIndex 65 - Counter65<br>
* SubIndex 66 - Counter66<br>
* SubIndex 67 - Counter67<br>
* SubIndex 68 - Counter68<br>
* SubIndex 69 - Counter69<br>
* SubIndex 70 - Counter70<br>
* SubIndex 71 - Counter71<br>
* SubIndex 72 - Counter72<br>
* SubIndex 73 - Counter73<br>
* SubIndex 74 - Counter74<br>
* SubIndex 75 - Counter75<br>
* SubIndex 76 - Counter76<br>
* SubIndex 77 - Counter77<br>
* SubIndex 78 - Counter78<br>
* SubIndex 79 - Counter79<br>
* SubIndex 80 - Counter80<br>
* SubIndex 81 - Counter81<br>
* SubIndex 82 - Counter82<br>
* SubIndex 83 - Counter83<br>
* SubIndex 84 - Counter84<br>
* SubIndex 85 - Counter85<br>
* SubIndex 86 - Counter86<br>
* SubIndex 87 - Counter87<br>
* SubIndex 88 - Counter88<br>
* SubIndex 89 - Counter89<br>
* SubIndex 90 - Counter90<br>
* SubIndex 91 - Counter91<br>
* SubIndex 92 - Counter92<br>
* SubIndex 93 - Counter93<br>
* SubIndex 94 - Counter94<br>
* SubIndex 95 - Counter95<br>
* SubIndex 96 - Counter96<br>
* SubIndex 97 - Counter97<br>
* SubIndex 98 - Counter98<br>
* SubIndex 99 - Counter99<br>
* SubIndex 100 - Counter100<br>
* SubIndex 101 - Counter101<br>
* SubIndex 102 - Counter102<br>
* SubIndex 103 - Counter103<br>
* SubIndex 104 - Counter104<br>
* SubIndex 105 - Counter105<br>
* SubIndex 106 - Counter106<br>
* SubIndex 107 - Counter107<br>
* SubIndex 108 - Counter108<br>
* SubIndex 109 - Counter109<br>
* SubIndex 110 - Counter110<br>
* SubIndex 111 - Counter111<br>
* SubIndex 112 - Counter112<br>
* SubIndex 113 - Counter113<br>
* SubIndex 114 - Counter114<br>
* SubIndex 115 - Counter115<br>
* SubIndex 116 - Counter116<br>
* SubIndex 117 - Counter117<br>
* SubIndex 118 - Counter118<br>
* SubIndex 119 - Counter119<br>
* SubIndex 120 - Counter120<br>
* SubIndex 121 - Counter121<br>
* SubIndex 122 - Counter122<br>
* SubIndex 123 - Counter123<br>
* SubIndex 124 - Counter124<br>
* SubIndex 125 - Counter125<br>
* SubIndex 126 - Counter126<br>
* SubIndex 127 - Counter127<br>
* SubIndex 128 - Counter128<br>
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
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex16 - Counter16 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex17 - Counter17 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex18 - Counter18 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex19 - Counter19 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex20 - Counter20 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex21 - Counter21 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex22 - Counter22 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex23 - Counter23 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex24 - Counter24 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex25 - Counter25 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex26 - Counter26 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex27 - Counter27 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex28 - Counter28 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex29 - Counter29 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex30 - Counter30 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex31 - Counter31 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex32 - Counter32 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex33 - Counter33 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex34 - Counter34 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex35 - Counter35 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex36 - Counter36 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex37 - Counter37 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex38 - Counter38 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex39 - Counter39 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex40 - Counter40 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex41 - Counter41 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex42 - Counter42 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex43 - Counter43 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex44 - Counter44 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex45 - Counter45 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex46 - Counter46 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex47 - Counter47 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex48 - Counter48 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex49 - Counter49 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex50 - Counter50 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex51 - Counter51 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex52 - Counter52 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex53 - Counter53 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex54 - Counter54 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex55 - Counter55 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex56 - Counter56 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex57 - Counter57 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex58 - Counter58 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex59 - Counter59 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex60 - Counter60 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex61 - Counter61 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex62 - Counter62 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex63 - Counter63 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex64 - Counter64 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex65 - Counter65 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex66 - Counter66 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex67 - Counter67 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex68 - Counter68 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex69 - Counter69 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex70 - Counter70 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex71 - Counter71 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex72 - Counter72 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex73 - Counter73 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex74 - Counter74 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex75 - Counter75 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex76 - Counter76 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex77 - Counter77 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex78 - Counter78 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex79 - Counter79 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex80 - Counter80 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex81 - Counter81 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex82 - Counter82 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex83 - Counter83 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex84 - Counter84 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex85 - Counter85 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex86 - Counter86 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex87 - Counter87 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex88 - Counter88 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex89 - Counter89 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex90 - Counter90 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex91 - Counter91 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex92 - Counter92 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex93 - Counter93 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex94 - Counter94 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex95 - Counter95 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex96 - Counter96 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex97 - Counter97 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex98 - Counter98 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex99 - Counter99 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex100 - Counter100 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex101 - Counter101 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex102 - Counter102 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex103 - Counter103 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex104 - Counter104 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex105 - Counter105 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex106 - Counter106 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex107 - Counter107 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex108 - Counter108 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex109 - Counter109 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex110 - Counter110 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex111 - Counter111 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex112 - Counter112 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex113 - Counter113 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex114 - Counter114 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex115 - Counter115 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex116 - Counter116 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex117 - Counter117 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex118 - Counter118 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex119 - Counter119 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex120 - Counter120 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex121 - Counter121 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex122 - Counter122 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex123 - Counter123 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex124 - Counter124 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex125 - Counter125 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex126 - Counter126 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex127 - Counter127 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }}; /* Subindex128 - Counter128 */

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
"Counter16\000"
"Counter17\000"
"Counter18\000"
"Counter19\000"
"Counter20\000"
"Counter21\000"
"Counter22\000"
"Counter23\000"
"Counter24\000"
"Counter25\000"
"Counter26\000"
"Counter27\000"
"Counter28\000"
"Counter29\000"
"Counter30\000"
"Counter31\000"
"Counter32\000"
"Counter33\000"
"Counter34\000"
"Counter35\000"
"Counter36\000"
"Counter37\000"
"Counter38\000"
"Counter39\000"
"Counter40\000"
"Counter41\000"
"Counter42\000"
"Counter43\000"
"Counter44\000"
"Counter45\000"
"Counter46\000"
"Counter47\000"
"Counter48\000"
"Counter49\000"
"Counter50\000"
"Counter51\000"
"Counter52\000"
"Counter53\000"
"Counter54\000"
"Counter55\000"
"Counter56\000"
"Counter57\000"
"Counter58\000"
"Counter59\000"
"Counter60\000"
"Counter61\000"
"Counter62\000"
"Counter63\000"
"Counter64\000"
"Counter65\000"
"Counter66\000"
"Counter67\000"
"Counter68\000"
"Counter69\000"
"Counter70\000"
"Counter71\000"
"Counter72\000"
"Counter73\000"
"Counter74\000"
"Counter75\000"
"Counter76\000"
"Counter77\000"
"Counter78\000"
"Counter79\000"
"Counter80\000"
"Counter81\000"
"Counter82\000"
"Counter83\000"
"Counter84\000"
"Counter85\000"
"Counter86\000"
"Counter87\000"
"Counter88\000"
"Counter89\000"
"Counter90\000"
"Counter91\000"
"Counter92\000"
"Counter93\000"
"Counter94\000"
"Counter95\000"
"Counter96\000"
"Counter97\000"
"Counter98\000"
"Counter99\000"
"Counter100\000"
"Counter101\000"
"Counter102\000"
"Counter103\000"
"Counter104\000"
"Counter105\000"
"Counter106\000"
"Counter107\000"
"Counter108\000"
"Counter109\000"
"Counter110\000"
"Counter111\000"
"Counter112\000"
"Counter113\000"
"Counter114\000"
"Counter115\000"
"Counter116\000"
"Counter117\000"
"Counter118\000"
"Counter119\000"
"Counter120\000"
"Counter121\000"
"Counter122\000"
"Counter123\000"
"Counter124\000"
"Counter125\000"
"Counter126\000"
"Counter127\000"
"Counter128\000\377";
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
UINT32 Counter17; /* Subindex17 - Counter17 */
UINT32 Counter18; /* Subindex18 - Counter18 */
UINT32 Counter19; /* Subindex19 - Counter19 */
UINT32 Counter20; /* Subindex20 - Counter20 */
UINT32 Counter21; /* Subindex21 - Counter21 */
UINT32 Counter22; /* Subindex22 - Counter22 */
UINT32 Counter23; /* Subindex23 - Counter23 */
UINT32 Counter24; /* Subindex24 - Counter24 */
UINT32 Counter25; /* Subindex25 - Counter25 */
UINT32 Counter26; /* Subindex26 - Counter26 */
UINT32 Counter27; /* Subindex27 - Counter27 */
UINT32 Counter28; /* Subindex28 - Counter28 */
UINT32 Counter29; /* Subindex29 - Counter29 */
UINT32 Counter30; /* Subindex30 - Counter30 */
UINT32 Counter31; /* Subindex31 - Counter31 */
UINT32 Counter32; /* Subindex32 - Counter32 */
UINT32 Counter33; /* Subindex33 - Counter33 */
UINT32 Counter34; /* Subindex34 - Counter34 */
UINT32 Counter35; /* Subindex35 - Counter35 */
UINT32 Counter36; /* Subindex36 - Counter36 */
UINT32 Counter37; /* Subindex37 - Counter37 */
UINT32 Counter38; /* Subindex38 - Counter38 */
UINT32 Counter39; /* Subindex39 - Counter39 */
UINT32 Counter40; /* Subindex40 - Counter40 */
UINT32 Counter41; /* Subindex41 - Counter41 */
UINT32 Counter42; /* Subindex42 - Counter42 */
UINT32 Counter43; /* Subindex43 - Counter43 */
UINT32 Counter44; /* Subindex44 - Counter44 */
UINT32 Counter45; /* Subindex45 - Counter45 */
UINT32 Counter46; /* Subindex46 - Counter46 */
UINT32 Counter47; /* Subindex47 - Counter47 */
UINT32 Counter48; /* Subindex48 - Counter48 */
UINT32 Counter49; /* Subindex49 - Counter49 */
UINT32 Counter50; /* Subindex50 - Counter50 */
UINT32 Counter51; /* Subindex51 - Counter51 */
UINT32 Counter52; /* Subindex52 - Counter52 */
UINT32 Counter53; /* Subindex53 - Counter53 */
UINT32 Counter54; /* Subindex54 - Counter54 */
UINT32 Counter55; /* Subindex55 - Counter55 */
UINT32 Counter56; /* Subindex56 - Counter56 */
UINT32 Counter57; /* Subindex57 - Counter57 */
UINT32 Counter58; /* Subindex58 - Counter58 */
UINT32 Counter59; /* Subindex59 - Counter59 */
UINT32 Counter60; /* Subindex60 - Counter60 */
UINT32 Counter61; /* Subindex61 - Counter61 */
UINT32 Counter62; /* Subindex62 - Counter62 */
UINT32 Counter63; /* Subindex63 - Counter63 */
UINT32 Counter64; /* Subindex64 - Counter64 */
UINT32 Counter65; /* Subindex65 - Counter65 */
UINT32 Counter66; /* Subindex66 - Counter66 */
UINT32 Counter67; /* Subindex67 - Counter67 */
UINT32 Counter68; /* Subindex68 - Counter68 */
UINT32 Counter69; /* Subindex69 - Counter69 */
UINT32 Counter70; /* Subindex70 - Counter70 */
UINT32 Counter71; /* Subindex71 - Counter71 */
UINT32 Counter72; /* Subindex72 - Counter72 */
UINT32 Counter73; /* Subindex73 - Counter73 */
UINT32 Counter74; /* Subindex74 - Counter74 */
UINT32 Counter75; /* Subindex75 - Counter75 */
UINT32 Counter76; /* Subindex76 - Counter76 */
UINT32 Counter77; /* Subindex77 - Counter77 */
UINT32 Counter78; /* Subindex78 - Counter78 */
UINT32 Counter79; /* Subindex79 - Counter79 */
UINT32 Counter80; /* Subindex80 - Counter80 */
UINT32 Counter81; /* Subindex81 - Counter81 */
UINT32 Counter82; /* Subindex82 - Counter82 */
UINT32 Counter83; /* Subindex83 - Counter83 */
UINT32 Counter84; /* Subindex84 - Counter84 */
UINT32 Counter85; /* Subindex85 - Counter85 */
UINT32 Counter86; /* Subindex86 - Counter86 */
UINT32 Counter87; /* Subindex87 - Counter87 */
UINT32 Counter88; /* Subindex88 - Counter88 */
UINT32 Counter89; /* Subindex89 - Counter89 */
UINT32 Counter90; /* Subindex90 - Counter90 */
UINT32 Counter91; /* Subindex91 - Counter91 */
UINT32 Counter92; /* Subindex92 - Counter92 */
UINT32 Counter93; /* Subindex93 - Counter93 */
UINT32 Counter94; /* Subindex94 - Counter94 */
UINT32 Counter95; /* Subindex95 - Counter95 */
UINT32 Counter96; /* Subindex96 - Counter96 */
UINT32 Counter97; /* Subindex97 - Counter97 */
UINT32 Counter98; /* Subindex98 - Counter98 */
UINT32 Counter99; /* Subindex99 - Counter99 */
UINT32 Counter100; /* Subindex100 - Counter100 */
UINT32 Counter101; /* Subindex101 - Counter101 */
UINT32 Counter102; /* Subindex102 - Counter102 */
UINT32 Counter103; /* Subindex103 - Counter103 */
UINT32 Counter104; /* Subindex104 - Counter104 */
UINT32 Counter105; /* Subindex105 - Counter105 */
UINT32 Counter106; /* Subindex106 - Counter106 */
UINT32 Counter107; /* Subindex107 - Counter107 */
UINT32 Counter108; /* Subindex108 - Counter108 */
UINT32 Counter109; /* Subindex109 - Counter109 */
UINT32 Counter110; /* Subindex110 - Counter110 */
UINT32 Counter111; /* Subindex111 - Counter111 */
UINT32 Counter112; /* Subindex112 - Counter112 */
UINT32 Counter113; /* Subindex113 - Counter113 */
UINT32 Counter114; /* Subindex114 - Counter114 */
UINT32 Counter115; /* Subindex115 - Counter115 */
UINT32 Counter116; /* Subindex116 - Counter116 */
UINT32 Counter117; /* Subindex117 - Counter117 */
UINT32 Counter118; /* Subindex118 - Counter118 */
UINT32 Counter119; /* Subindex119 - Counter119 */
UINT32 Counter120; /* Subindex120 - Counter120 */
UINT32 Counter121; /* Subindex121 - Counter121 */
UINT32 Counter122; /* Subindex122 - Counter122 */
UINT32 Counter123; /* Subindex123 - Counter123 */
UINT32 Counter124; /* Subindex124 - Counter124 */
UINT32 Counter125; /* Subindex125 - Counter125 */
UINT32 Counter126; /* Subindex126 - Counter126 */
UINT32 Counter127; /* Subindex127 - Counter127 */
UINT32 Counter128; /* Subindex128 - Counter128 */
} OBJ_STRUCT_PACKED_END
TOBJ6000;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6000 Inputs0x6000
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={128,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000}
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
* SubIndex 17 - Trigger17<br>
* SubIndex 18 - Trigger18<br>
* SubIndex 19 - Trigger19<br>
* SubIndex 20 - Trigger20<br>
* SubIndex 21 - Trigger21<br>
* SubIndex 22 - Trigger22<br>
* SubIndex 23 - Trigger23<br>
* SubIndex 24 - Trigger24<br>
* SubIndex 25 - Trigger25<br>
* SubIndex 26 - Trigger26<br>
* SubIndex 27 - Trigger27<br>
* SubIndex 28 - Trigger28<br>
* SubIndex 29 - Trigger29<br>
* SubIndex 30 - Trigger30<br>
* SubIndex 31 - Trigger31<br>
* SubIndex 32 - Trigger32<br>
* SubIndex 33 - Trigger33<br>
* SubIndex 34 - Trigger34<br>
* SubIndex 35 - Trigger35<br>
* SubIndex 36 - Trigger36<br>
* SubIndex 37 - Trigger37<br>
* SubIndex 38 - Trigger38<br>
* SubIndex 39 - Trigger39<br>
* SubIndex 40 - Trigger40<br>
* SubIndex 41 - Trigger41<br>
* SubIndex 42 - Trigger42<br>
* SubIndex 43 - Trigger43<br>
* SubIndex 44 - Trigger44<br>
* SubIndex 45 - Trigger45<br>
* SubIndex 46 - Trigger46<br>
* SubIndex 47 - Trigger47<br>
* SubIndex 48 - Trigger48<br>
* SubIndex 49 - Trigger49<br>
* SubIndex 50 - Trigger50<br>
* SubIndex 51 - Trigger51<br>
* SubIndex 52 - Trigger52<br>
* SubIndex 53 - Trigger53<br>
* SubIndex 54 - Trigger54<br>
* SubIndex 55 - Trigger55<br>
* SubIndex 56 - Trigger56<br>
* SubIndex 57 - Trigger57<br>
* SubIndex 58 - Trigger58<br>
* SubIndex 59 - Trigger59<br>
* SubIndex 60 - Trigger60<br>
* SubIndex 61 - Trigger61<br>
* SubIndex 62 - Trigger62<br>
* SubIndex 63 - Trigger63<br>
* SubIndex 64 - Trigger64<br>
* SubIndex 65 - Trigger65<br>
* SubIndex 66 - Trigger66<br>
* SubIndex 67 - Trigger67<br>
* SubIndex 68 - Trigger68<br>
* SubIndex 69 - Trigger69<br>
* SubIndex 70 - Trigger70<br>
* SubIndex 71 - Trigger71<br>
* SubIndex 72 - Trigger72<br>
* SubIndex 73 - Trigger73<br>
* SubIndex 74 - Trigger74<br>
* SubIndex 75 - Trigger75<br>
* SubIndex 76 - Trigger76<br>
* SubIndex 77 - Trigger77<br>
* SubIndex 78 - Trigger78<br>
* SubIndex 79 - Trigger79<br>
* SubIndex 80 - Trigger80<br>
* SubIndex 81 - Trigger81<br>
* SubIndex 82 - Trigger82<br>
* SubIndex 83 - Trigger83<br>
* SubIndex 84 - Trigger84<br>
* SubIndex 85 - Trigger85<br>
* SubIndex 86 - Trigger86<br>
* SubIndex 87 - Trigger87<br>
* SubIndex 88 - Trigger88<br>
* SubIndex 89 - Trigger89<br>
* SubIndex 90 - Trigger90<br>
* SubIndex 91 - Trigger91<br>
* SubIndex 92 - Trigger92<br>
* SubIndex 93 - Trigger93<br>
* SubIndex 94 - Trigger94<br>
* SubIndex 95 - Trigger95<br>
* SubIndex 96 - Trigger96<br>
* SubIndex 97 - Trigger97<br>
* SubIndex 98 - Trigger98<br>
* SubIndex 99 - Trigger99<br>
* SubIndex 100 - Trigger100<br>
* SubIndex 101 - Trigger101<br>
* SubIndex 102 - Trigger102<br>
* SubIndex 103 - Trigger103<br>
* SubIndex 104 - Trigger104<br>
* SubIndex 105 - Trigger105<br>
* SubIndex 106 - Trigger106<br>
* SubIndex 107 - Trigger107<br>
* SubIndex 108 - Trigger108<br>
* SubIndex 109 - Trigger109<br>
* SubIndex 110 - Trigger110<br>
* SubIndex 111 - Trigger111<br>
* SubIndex 112 - Trigger112<br>
* SubIndex 113 - Trigger113<br>
* SubIndex 114 - Trigger114<br>
* SubIndex 115 - Trigger115<br>
* SubIndex 116 - Trigger116<br>
* SubIndex 117 - Trigger117<br>
* SubIndex 118 - Trigger118<br>
* SubIndex 119 - Trigger119<br>
* SubIndex 120 - Trigger120<br>
* SubIndex 121 - Trigger121<br>
* SubIndex 122 - Trigger122<br>
* SubIndex 123 - Trigger123<br>
* SubIndex 124 - Trigger124<br>
* SubIndex 125 - Trigger125<br>
* SubIndex 126 - Trigger126<br>
* SubIndex 127 - Trigger127<br>
* SubIndex 128 - Trigger128<br>
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
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex16 - Trigger16 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex17 - Trigger17 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex18 - Trigger18 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex19 - Trigger19 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex20 - Trigger20 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex21 - Trigger21 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex22 - Trigger22 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex23 - Trigger23 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex24 - Trigger24 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex25 - Trigger25 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex26 - Trigger26 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex27 - Trigger27 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex28 - Trigger28 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex29 - Trigger29 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex30 - Trigger30 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex31 - Trigger31 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex32 - Trigger32 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex33 - Trigger33 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex34 - Trigger34 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex35 - Trigger35 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex36 - Trigger36 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex37 - Trigger37 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex38 - Trigger38 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex39 - Trigger39 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex40 - Trigger40 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex41 - Trigger41 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex42 - Trigger42 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex43 - Trigger43 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex44 - Trigger44 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex45 - Trigger45 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex46 - Trigger46 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex47 - Trigger47 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex48 - Trigger48 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex49 - Trigger49 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex50 - Trigger50 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex51 - Trigger51 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex52 - Trigger52 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex53 - Trigger53 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex54 - Trigger54 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex55 - Trigger55 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex56 - Trigger56 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex57 - Trigger57 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex58 - Trigger58 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex59 - Trigger59 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex60 - Trigger60 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex61 - Trigger61 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex62 - Trigger62 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex63 - Trigger63 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex64 - Trigger64 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex65 - Trigger65 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex66 - Trigger66 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex67 - Trigger67 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex68 - Trigger68 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex69 - Trigger69 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex70 - Trigger70 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex71 - Trigger71 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex72 - Trigger72 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex73 - Trigger73 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex74 - Trigger74 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex75 - Trigger75 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex76 - Trigger76 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex77 - Trigger77 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex78 - Trigger78 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex79 - Trigger79 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex80 - Trigger80 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex81 - Trigger81 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex82 - Trigger82 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex83 - Trigger83 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex84 - Trigger84 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex85 - Trigger85 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex86 - Trigger86 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex87 - Trigger87 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex88 - Trigger88 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex89 - Trigger89 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex90 - Trigger90 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex91 - Trigger91 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex92 - Trigger92 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex93 - Trigger93 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex94 - Trigger94 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex95 - Trigger95 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex96 - Trigger96 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex97 - Trigger97 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex98 - Trigger98 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex99 - Trigger99 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex100 - Trigger100 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex101 - Trigger101 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex102 - Trigger102 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex103 - Trigger103 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex104 - Trigger104 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex105 - Trigger105 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex106 - Trigger106 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex107 - Trigger107 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex108 - Trigger108 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex109 - Trigger109 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex110 - Trigger110 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex111 - Trigger111 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex112 - Trigger112 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex113 - Trigger113 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex114 - Trigger114 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex115 - Trigger115 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex116 - Trigger116 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex117 - Trigger117 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex118 - Trigger118 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex119 - Trigger119 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex120 - Trigger120 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex121 - Trigger121 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex122 - Trigger122 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex123 - Trigger123 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex124 - Trigger124 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex125 - Trigger125 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex126 - Trigger126 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex127 - Trigger127 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }}; /* Subindex128 - Trigger128 */

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
"Trigger16\000"
"Trigger17\000"
"Trigger18\000"
"Trigger19\000"
"Trigger20\000"
"Trigger21\000"
"Trigger22\000"
"Trigger23\000"
"Trigger24\000"
"Trigger25\000"
"Trigger26\000"
"Trigger27\000"
"Trigger28\000"
"Trigger29\000"
"Trigger30\000"
"Trigger31\000"
"Trigger32\000"
"Trigger33\000"
"Trigger34\000"
"Trigger35\000"
"Trigger36\000"
"Trigger37\000"
"Trigger38\000"
"Trigger39\000"
"Trigger40\000"
"Trigger41\000"
"Trigger42\000"
"Trigger43\000"
"Trigger44\000"
"Trigger45\000"
"Trigger46\000"
"Trigger47\000"
"Trigger48\000"
"Trigger49\000"
"Trigger50\000"
"Trigger51\000"
"Trigger52\000"
"Trigger53\000"
"Trigger54\000"
"Trigger55\000"
"Trigger56\000"
"Trigger57\000"
"Trigger58\000"
"Trigger59\000"
"Trigger60\000"
"Trigger61\000"
"Trigger62\000"
"Trigger63\000"
"Trigger64\000"
"Trigger65\000"
"Trigger66\000"
"Trigger67\000"
"Trigger68\000"
"Trigger69\000"
"Trigger70\000"
"Trigger71\000"
"Trigger72\000"
"Trigger73\000"
"Trigger74\000"
"Trigger75\000"
"Trigger76\000"
"Trigger77\000"
"Trigger78\000"
"Trigger79\000"
"Trigger80\000"
"Trigger81\000"
"Trigger82\000"
"Trigger83\000"
"Trigger84\000"
"Trigger85\000"
"Trigger86\000"
"Trigger87\000"
"Trigger88\000"
"Trigger89\000"
"Trigger90\000"
"Trigger91\000"
"Trigger92\000"
"Trigger93\000"
"Trigger94\000"
"Trigger95\000"
"Trigger96\000"
"Trigger97\000"
"Trigger98\000"
"Trigger99\000"
"Trigger100\000"
"Trigger101\000"
"Trigger102\000"
"Trigger103\000"
"Trigger104\000"
"Trigger105\000"
"Trigger106\000"
"Trigger107\000"
"Trigger108\000"
"Trigger109\000"
"Trigger110\000"
"Trigger111\000"
"Trigger112\000"
"Trigger113\000"
"Trigger114\000"
"Trigger115\000"
"Trigger116\000"
"Trigger117\000"
"Trigger118\000"
"Trigger119\000"
"Trigger120\000"
"Trigger121\000"
"Trigger122\000"
"Trigger123\000"
"Trigger124\000"
"Trigger125\000"
"Trigger126\000"
"Trigger127\000"
"Trigger128\000\377";
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
UINT32 Trigger17; /* Subindex17 - Trigger17 */
UINT32 Trigger18; /* Subindex18 - Trigger18 */
UINT32 Trigger19; /* Subindex19 - Trigger19 */
UINT32 Trigger20; /* Subindex20 - Trigger20 */
UINT32 Trigger21; /* Subindex21 - Trigger21 */
UINT32 Trigger22; /* Subindex22 - Trigger22 */
UINT32 Trigger23; /* Subindex23 - Trigger23 */
UINT32 Trigger24; /* Subindex24 - Trigger24 */
UINT32 Trigger25; /* Subindex25 - Trigger25 */
UINT32 Trigger26; /* Subindex26 - Trigger26 */
UINT32 Trigger27; /* Subindex27 - Trigger27 */
UINT32 Trigger28; /* Subindex28 - Trigger28 */
UINT32 Trigger29; /* Subindex29 - Trigger29 */
UINT32 Trigger30; /* Subindex30 - Trigger30 */
UINT32 Trigger31; /* Subindex31 - Trigger31 */
UINT32 Trigger32; /* Subindex32 - Trigger32 */
UINT32 Trigger33; /* Subindex33 - Trigger33 */
UINT32 Trigger34; /* Subindex34 - Trigger34 */
UINT32 Trigger35; /* Subindex35 - Trigger35 */
UINT32 Trigger36; /* Subindex36 - Trigger36 */
UINT32 Trigger37; /* Subindex37 - Trigger37 */
UINT32 Trigger38; /* Subindex38 - Trigger38 */
UINT32 Trigger39; /* Subindex39 - Trigger39 */
UINT32 Trigger40; /* Subindex40 - Trigger40 */
UINT32 Trigger41; /* Subindex41 - Trigger41 */
UINT32 Trigger42; /* Subindex42 - Trigger42 */
UINT32 Trigger43; /* Subindex43 - Trigger43 */
UINT32 Trigger44; /* Subindex44 - Trigger44 */
UINT32 Trigger45; /* Subindex45 - Trigger45 */
UINT32 Trigger46; /* Subindex46 - Trigger46 */
UINT32 Trigger47; /* Subindex47 - Trigger47 */
UINT32 Trigger48; /* Subindex48 - Trigger48 */
UINT32 Trigger49; /* Subindex49 - Trigger49 */
UINT32 Trigger50; /* Subindex50 - Trigger50 */
UINT32 Trigger51; /* Subindex51 - Trigger51 */
UINT32 Trigger52; /* Subindex52 - Trigger52 */
UINT32 Trigger53; /* Subindex53 - Trigger53 */
UINT32 Trigger54; /* Subindex54 - Trigger54 */
UINT32 Trigger55; /* Subindex55 - Trigger55 */
UINT32 Trigger56; /* Subindex56 - Trigger56 */
UINT32 Trigger57; /* Subindex57 - Trigger57 */
UINT32 Trigger58; /* Subindex58 - Trigger58 */
UINT32 Trigger59; /* Subindex59 - Trigger59 */
UINT32 Trigger60; /* Subindex60 - Trigger60 */
UINT32 Trigger61; /* Subindex61 - Trigger61 */
UINT32 Trigger62; /* Subindex62 - Trigger62 */
UINT32 Trigger63; /* Subindex63 - Trigger63 */
UINT32 Trigger64; /* Subindex64 - Trigger64 */
UINT32 Trigger65; /* Subindex65 - Trigger65 */
UINT32 Trigger66; /* Subindex66 - Trigger66 */
UINT32 Trigger67; /* Subindex67 - Trigger67 */
UINT32 Trigger68; /* Subindex68 - Trigger68 */
UINT32 Trigger69; /* Subindex69 - Trigger69 */
UINT32 Trigger70; /* Subindex70 - Trigger70 */
UINT32 Trigger71; /* Subindex71 - Trigger71 */
UINT32 Trigger72; /* Subindex72 - Trigger72 */
UINT32 Trigger73; /* Subindex73 - Trigger73 */
UINT32 Trigger74; /* Subindex74 - Trigger74 */
UINT32 Trigger75; /* Subindex75 - Trigger75 */
UINT32 Trigger76; /* Subindex76 - Trigger76 */
UINT32 Trigger77; /* Subindex77 - Trigger77 */
UINT32 Trigger78; /* Subindex78 - Trigger78 */
UINT32 Trigger79; /* Subindex79 - Trigger79 */
UINT32 Trigger80; /* Subindex80 - Trigger80 */
UINT32 Trigger81; /* Subindex81 - Trigger81 */
UINT32 Trigger82; /* Subindex82 - Trigger82 */
UINT32 Trigger83; /* Subindex83 - Trigger83 */
UINT32 Trigger84; /* Subindex84 - Trigger84 */
UINT32 Trigger85; /* Subindex85 - Trigger85 */
UINT32 Trigger86; /* Subindex86 - Trigger86 */
UINT32 Trigger87; /* Subindex87 - Trigger87 */
UINT32 Trigger88; /* Subindex88 - Trigger88 */
UINT32 Trigger89; /* Subindex89 - Trigger89 */
UINT32 Trigger90; /* Subindex90 - Trigger90 */
UINT32 Trigger91; /* Subindex91 - Trigger91 */
UINT32 Trigger92; /* Subindex92 - Trigger92 */
UINT32 Trigger93; /* Subindex93 - Trigger93 */
UINT32 Trigger94; /* Subindex94 - Trigger94 */
UINT32 Trigger95; /* Subindex95 - Trigger95 */
UINT32 Trigger96; /* Subindex96 - Trigger96 */
UINT32 Trigger97; /* Subindex97 - Trigger97 */
UINT32 Trigger98; /* Subindex98 - Trigger98 */
UINT32 Trigger99; /* Subindex99 - Trigger99 */
UINT32 Trigger100; /* Subindex100 - Trigger100 */
UINT32 Trigger101; /* Subindex101 - Trigger101 */
UINT32 Trigger102; /* Subindex102 - Trigger102 */
UINT32 Trigger103; /* Subindex103 - Trigger103 */
UINT32 Trigger104; /* Subindex104 - Trigger104 */
UINT32 Trigger105; /* Subindex105 - Trigger105 */
UINT32 Trigger106; /* Subindex106 - Trigger106 */
UINT32 Trigger107; /* Subindex107 - Trigger107 */
UINT32 Trigger108; /* Subindex108 - Trigger108 */
UINT32 Trigger109; /* Subindex109 - Trigger109 */
UINT32 Trigger110; /* Subindex110 - Trigger110 */
UINT32 Trigger111; /* Subindex111 - Trigger111 */
UINT32 Trigger112; /* Subindex112 - Trigger112 */
UINT32 Trigger113; /* Subindex113 - Trigger113 */
UINT32 Trigger114; /* Subindex114 - Trigger114 */
UINT32 Trigger115; /* Subindex115 - Trigger115 */
UINT32 Trigger116; /* Subindex116 - Trigger116 */
UINT32 Trigger117; /* Subindex117 - Trigger117 */
UINT32 Trigger118; /* Subindex118 - Trigger118 */
UINT32 Trigger119; /* Subindex119 - Trigger119 */
UINT32 Trigger120; /* Subindex120 - Trigger120 */
UINT32 Trigger121; /* Subindex121 - Trigger121 */
UINT32 Trigger122; /* Subindex122 - Trigger122 */
UINT32 Trigger123; /* Subindex123 - Trigger123 */
UINT32 Trigger124; /* Subindex124 - Trigger124 */
UINT32 Trigger125; /* Subindex125 - Trigger125 */
UINT32 Trigger126; /* Subindex126 - Trigger126 */
UINT32 Trigger127; /* Subindex127 - Trigger127 */
UINT32 Trigger128; /* Subindex128 - Trigger128 */
} OBJ_STRUCT_PACKED_END
TOBJ7010;
#endif //#ifndef _SAMPLE_APP_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7010 Outputs0x7010
#if defined(_SAMPLE_APP_) && (_SAMPLE_APP_ == 1)
={128,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000}
#endif
;
/** @}*/







#ifdef _OBJD_
TOBJECT    OBJMEM ApplicationObjDic[] = {
/* Object 0x1601 */
{NULL , NULL ,  0x1601 , {DEFTYPE_PDOMAPPING , 128 | (OBJCODE_REC << 8)} , asEntryDesc0x1601 , aName0x1601 , &OutputsProcessDataMapping0x1601 , NULL , NULL , 0x0000 },
/* Object 0x1A00 */
{NULL , NULL ,  0x1A00 , {DEFTYPE_PDOMAPPING , 128 | (OBJCODE_REC << 8)} , asEntryDesc0x1A00 , aName0x1A00 , &InputsProcessDataMapping0x1A00 , NULL , NULL , 0x0000 },
/* Object 0x1C12 */
{NULL , NULL ,  0x1C12 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C12 , aName0x1C12 , &sRxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x1C13 */
{NULL , NULL ,  0x1C13 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C13 , aName0x1C13 , &sTxPDOassign , NULL , NULL , 0x0000 },
/* Object 0x6000 */
{NULL , NULL ,  0x6000 , {DEFTYPE_RECORD , 128 | (OBJCODE_REC << 8)} , asEntryDesc0x6000 , aName0x6000 , &Inputs0x6000 , NULL , NULL , 0x0000 },
/* Object 0x7010 */
{NULL , NULL ,  0x7010 , {DEFTYPE_RECORD , 128 | (OBJCODE_REC << 8)} , asEntryDesc0x7010 , aName0x7010 , &Outputs0x7010 , NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};
#endif    //#ifdef _OBJD_
#undef PROTO

/** @}*/
#define _SAMPLE_APP_OBJECTS_H_
