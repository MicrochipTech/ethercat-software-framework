/*-------------------------------------------------------------------------
 * PIC32MX230F064D processor header
 * Build date : Jul 28 2020
 *
 * Copyright (C) 2022, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution. Publication is not required when this file 
 *         is used in an embedded application.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#pragma once
#ifndef __32MX230F064D_H
#define __32MX230F064D_H

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS)

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define WDTCON WDTCON
extern volatile uint32_t   WDTCON __attribute__((section("sfrs"), address(0xBF800000)));
typedef union {
  struct {
    uint32_t WDTCLR:1;
    uint32_t WDTWINEN:1;
    uint32_t SWDTPS:5;
    uint32_t :8;
    uint32_t ON:1;
  };
  struct {
    uint32_t :2;
    uint32_t SWDTPS0:1;
    uint32_t SWDTPS1:1;
    uint32_t SWDTPS2:1;
    uint32_t SWDTPS3:1;
    uint32_t SWDTPS4:1;
  };
  struct {
    uint32_t :2;
    uint32_t WDTPSTA:5;
  };
  struct {
    uint32_t :2;
    uint32_t WDTPS:5;
  };
  struct {
    uint32_t w:32;
  };
} __WDTCONbits_t;
extern volatile __WDTCONbits_t WDTCONbits __asm__ ("WDTCON") __attribute__((section("sfrs"), address(0xBF800000)));
extern volatile uint32_t        WDTCONCLR __attribute__((section("sfrs"),address(0xBF800004)));
extern volatile uint32_t        WDTCONSET __attribute__((section("sfrs"),address(0xBF800008)));
extern volatile uint32_t        WDTCONINV __attribute__((section("sfrs"),address(0xBF80000C)));
#define RTCCON RTCCON
extern volatile uint32_t   RTCCON __attribute__((section("sfrs"), address(0xBF800200)));
typedef union {
  struct {
    uint32_t RTCOE:1;
    uint32_t HALFSEC:1;
    uint32_t RTCSYNC:1;
    uint32_t RTCWREN:1;
    uint32_t :2;
    uint32_t RTCCLKON:1;
    uint32_t RTSECSEL:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t CAL:10;
  };
  struct {
    uint32_t w:32;
  };
} __RTCCONbits_t;
extern volatile __RTCCONbits_t RTCCONbits __asm__ ("RTCCON") __attribute__((section("sfrs"), address(0xBF800200)));
extern volatile uint32_t        RTCCONCLR __attribute__((section("sfrs"),address(0xBF800204)));
extern volatile uint32_t        RTCCONSET __attribute__((section("sfrs"),address(0xBF800208)));
extern volatile uint32_t        RTCCONINV __attribute__((section("sfrs"),address(0xBF80020C)));
#define RTCALRM RTCALRM
extern volatile uint32_t   RTCALRM __attribute__((section("sfrs"), address(0xBF800210)));
typedef union {
  struct {
    uint32_t ARPT:8;
    uint32_t AMASK:4;
    uint32_t ALRMSYNC:1;
    uint32_t PIV:1;
    uint32_t CHIME:1;
    uint32_t ALRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __RTCALRMbits_t;
extern volatile __RTCALRMbits_t RTCALRMbits __asm__ ("RTCALRM") __attribute__((section("sfrs"), address(0xBF800210)));
extern volatile uint32_t        RTCALRMCLR __attribute__((section("sfrs"),address(0xBF800214)));
extern volatile uint32_t        RTCALRMSET __attribute__((section("sfrs"),address(0xBF800218)));
extern volatile uint32_t        RTCALRMINV __attribute__((section("sfrs"),address(0xBF80021C)));
#define RTCTIME RTCTIME
extern volatile uint32_t   RTCTIME __attribute__((section("sfrs"), address(0xBF800220)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SEC01:4;
    uint32_t SEC10:4;
    uint32_t MIN01:4;
    uint32_t MIN10:4;
    uint32_t HR01:4;
    uint32_t HR10:4;
  };
  struct {
    uint32_t w:32;
  };
} __RTCTIMEbits_t;
extern volatile __RTCTIMEbits_t RTCTIMEbits __asm__ ("RTCTIME") __attribute__((section("sfrs"), address(0xBF800220)));
extern volatile uint32_t        RTCTIMECLR __attribute__((section("sfrs"),address(0xBF800224)));
extern volatile uint32_t        RTCTIMESET __attribute__((section("sfrs"),address(0xBF800228)));
extern volatile uint32_t        RTCTIMEINV __attribute__((section("sfrs"),address(0xBF80022C)));
#define RTCDATE RTCDATE
extern volatile uint32_t   RTCDATE __attribute__((section("sfrs"), address(0xBF800230)));
typedef union {
  struct {
    uint32_t WDAY01:4;
    uint32_t :4;
    uint32_t DAY01:4;
    uint32_t DAY10:4;
    uint32_t MONTH01:4;
    uint32_t MONTH10:4;
    uint32_t YEAR01:4;
    uint32_t YEAR10:4;
  };
  struct {
    uint32_t w:32;
  };
} __RTCDATEbits_t;
extern volatile __RTCDATEbits_t RTCDATEbits __asm__ ("RTCDATE") __attribute__((section("sfrs"), address(0xBF800230)));
extern volatile uint32_t        RTCDATECLR __attribute__((section("sfrs"),address(0xBF800234)));
extern volatile uint32_t        RTCDATESET __attribute__((section("sfrs"),address(0xBF800238)));
extern volatile uint32_t        RTCDATEINV __attribute__((section("sfrs"),address(0xBF80023C)));
#define ALRMTIME ALRMTIME
extern volatile uint32_t   ALRMTIME __attribute__((section("sfrs"), address(0xBF800240)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SEC01:4;
    uint32_t SEC10:4;
    uint32_t MIN01:4;
    uint32_t MIN10:4;
    uint32_t HR01:4;
    uint32_t HR10:4;
  };
  struct {
    uint32_t w:32;
  };
} __ALRMTIMEbits_t;
extern volatile __ALRMTIMEbits_t ALRMTIMEbits __asm__ ("ALRMTIME") __attribute__((section("sfrs"), address(0xBF800240)));
extern volatile uint32_t        ALRMTIMECLR __attribute__((section("sfrs"),address(0xBF800244)));
extern volatile uint32_t        ALRMTIMESET __attribute__((section("sfrs"),address(0xBF800248)));
extern volatile uint32_t        ALRMTIMEINV __attribute__((section("sfrs"),address(0xBF80024C)));
#define ALRMDATE ALRMDATE
extern volatile uint32_t   ALRMDATE __attribute__((section("sfrs"), address(0xBF800250)));
typedef union {
  struct {
    uint32_t WDAY01:4;
    uint32_t :4;
    uint32_t DAY01:4;
    uint32_t DAY10:4;
    uint32_t MONTH01:4;
    uint32_t MONTH10:4;
  };
  struct {
    uint32_t w:32;
  };
} __ALRMDATEbits_t;
extern volatile __ALRMDATEbits_t ALRMDATEbits __asm__ ("ALRMDATE") __attribute__((section("sfrs"), address(0xBF800250)));
extern volatile uint32_t        ALRMDATECLR __attribute__((section("sfrs"),address(0xBF800254)));
extern volatile uint32_t        ALRMDATESET __attribute__((section("sfrs"),address(0xBF800258)));
extern volatile uint32_t        ALRMDATEINV __attribute__((section("sfrs"),address(0xBF80025C)));
#define T1CON T1CON
extern volatile uint32_t   T1CON __attribute__((section("sfrs"), address(0xBF800600)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t TSYNC:1;
    uint32_t :1;
    uint32_t TCKPS:2;
    uint32_t :1;
    uint32_t TGATE:1;
    uint32_t :3;
    uint32_t TWIP:1;
    uint32_t TWDIS:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t T1CONbits __asm__ ("T1CON") __attribute__((section("sfrs"), address(0xBF800600)));
extern volatile uint32_t        T1CONCLR __attribute__((section("sfrs"),address(0xBF800604)));
extern volatile uint32_t        T1CONSET __attribute__((section("sfrs"),address(0xBF800608)));
extern volatile uint32_t        T1CONINV __attribute__((section("sfrs"),address(0xBF80060C)));
#define TMR1 TMR1
extern volatile uint32_t   TMR1 __attribute__((section("sfrs"), address(0xBF800610)));
extern volatile uint32_t        TMR1CLR __attribute__((section("sfrs"),address(0xBF800614)));
extern volatile uint32_t        TMR1SET __attribute__((section("sfrs"),address(0xBF800618)));
extern volatile uint32_t        TMR1INV __attribute__((section("sfrs"),address(0xBF80061C)));
#define PR1 PR1
extern volatile uint32_t   PR1 __attribute__((section("sfrs"), address(0xBF800620)));
extern volatile uint32_t        PR1CLR __attribute__((section("sfrs"),address(0xBF800624)));
extern volatile uint32_t        PR1SET __attribute__((section("sfrs"),address(0xBF800628)));
extern volatile uint32_t        PR1INV __attribute__((section("sfrs"),address(0xBF80062C)));
#define T2CON T2CON
extern volatile uint32_t   T2CON __attribute__((section("sfrs"), address(0xBF800800)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :1;
    uint32_t T32:1;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T2CONbits_t;
extern volatile __T2CONbits_t T2CONbits __asm__ ("T2CON") __attribute__((section("sfrs"), address(0xBF800800)));
extern volatile uint32_t        T2CONCLR __attribute__((section("sfrs"),address(0xBF800804)));
extern volatile uint32_t        T2CONSET __attribute__((section("sfrs"),address(0xBF800808)));
extern volatile uint32_t        T2CONINV __attribute__((section("sfrs"),address(0xBF80080C)));
#define TMR2 TMR2
extern volatile uint32_t   TMR2 __attribute__((section("sfrs"), address(0xBF800810)));
extern volatile uint32_t        TMR2CLR __attribute__((section("sfrs"),address(0xBF800814)));
extern volatile uint32_t        TMR2SET __attribute__((section("sfrs"),address(0xBF800818)));
extern volatile uint32_t        TMR2INV __attribute__((section("sfrs"),address(0xBF80081C)));
#define PR2 PR2
extern volatile uint32_t   PR2 __attribute__((section("sfrs"), address(0xBF800820)));
extern volatile uint32_t        PR2CLR __attribute__((section("sfrs"),address(0xBF800824)));
extern volatile uint32_t        PR2SET __attribute__((section("sfrs"),address(0xBF800828)));
extern volatile uint32_t        PR2INV __attribute__((section("sfrs"),address(0xBF80082C)));
#define T3CON T3CON
extern volatile uint32_t   T3CON __attribute__((section("sfrs"), address(0xBF800A00)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :2;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T3CONbits_t;
extern volatile __T3CONbits_t T3CONbits __asm__ ("T3CON") __attribute__((section("sfrs"), address(0xBF800A00)));
extern volatile uint32_t        T3CONCLR __attribute__((section("sfrs"),address(0xBF800A04)));
extern volatile uint32_t        T3CONSET __attribute__((section("sfrs"),address(0xBF800A08)));
extern volatile uint32_t        T3CONINV __attribute__((section("sfrs"),address(0xBF800A0C)));
#define TMR3 TMR3
extern volatile uint32_t   TMR3 __attribute__((section("sfrs"), address(0xBF800A10)));
extern volatile uint32_t        TMR3CLR __attribute__((section("sfrs"),address(0xBF800A14)));
extern volatile uint32_t        TMR3SET __attribute__((section("sfrs"),address(0xBF800A18)));
extern volatile uint32_t        TMR3INV __attribute__((section("sfrs"),address(0xBF800A1C)));
#define PR3 PR3
extern volatile uint32_t   PR3 __attribute__((section("sfrs"), address(0xBF800A20)));
extern volatile uint32_t        PR3CLR __attribute__((section("sfrs"),address(0xBF800A24)));
extern volatile uint32_t        PR3SET __attribute__((section("sfrs"),address(0xBF800A28)));
extern volatile uint32_t        PR3INV __attribute__((section("sfrs"),address(0xBF800A2C)));
#define T4CON T4CON
extern volatile uint32_t   T4CON __attribute__((section("sfrs"), address(0xBF800C00)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :1;
    uint32_t T32:1;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T4CONbits_t;
extern volatile __T4CONbits_t T4CONbits __asm__ ("T4CON") __attribute__((section("sfrs"), address(0xBF800C00)));
extern volatile uint32_t        T4CONCLR __attribute__((section("sfrs"),address(0xBF800C04)));
extern volatile uint32_t        T4CONSET __attribute__((section("sfrs"),address(0xBF800C08)));
extern volatile uint32_t        T4CONINV __attribute__((section("sfrs"),address(0xBF800C0C)));
#define TMR4 TMR4
extern volatile uint32_t   TMR4 __attribute__((section("sfrs"), address(0xBF800C10)));
extern volatile uint32_t        TMR4CLR __attribute__((section("sfrs"),address(0xBF800C14)));
extern volatile uint32_t        TMR4SET __attribute__((section("sfrs"),address(0xBF800C18)));
extern volatile uint32_t        TMR4INV __attribute__((section("sfrs"),address(0xBF800C1C)));
#define PR4 PR4
extern volatile uint32_t   PR4 __attribute__((section("sfrs"), address(0xBF800C20)));
extern volatile uint32_t        PR4CLR __attribute__((section("sfrs"),address(0xBF800C24)));
extern volatile uint32_t        PR4SET __attribute__((section("sfrs"),address(0xBF800C28)));
extern volatile uint32_t        PR4INV __attribute__((section("sfrs"),address(0xBF800C2C)));
#define T5CON T5CON
extern volatile uint32_t   T5CON __attribute__((section("sfrs"), address(0xBF800E00)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :2;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T5CONbits_t;
extern volatile __T5CONbits_t T5CONbits __asm__ ("T5CON") __attribute__((section("sfrs"), address(0xBF800E00)));
extern volatile uint32_t        T5CONCLR __attribute__((section("sfrs"),address(0xBF800E04)));
extern volatile uint32_t        T5CONSET __attribute__((section("sfrs"),address(0xBF800E08)));
extern volatile uint32_t        T5CONINV __attribute__((section("sfrs"),address(0xBF800E0C)));
#define TMR5 TMR5
extern volatile uint32_t   TMR5 __attribute__((section("sfrs"), address(0xBF800E10)));
extern volatile uint32_t        TMR5CLR __attribute__((section("sfrs"),address(0xBF800E14)));
extern volatile uint32_t        TMR5SET __attribute__((section("sfrs"),address(0xBF800E18)));
extern volatile uint32_t        TMR5INV __attribute__((section("sfrs"),address(0xBF800E1C)));
#define PR5 PR5
extern volatile uint32_t   PR5 __attribute__((section("sfrs"), address(0xBF800E20)));
extern volatile uint32_t        PR5CLR __attribute__((section("sfrs"),address(0xBF800E24)));
extern volatile uint32_t        PR5SET __attribute__((section("sfrs"),address(0xBF800E28)));
extern volatile uint32_t        PR5INV __attribute__((section("sfrs"),address(0xBF800E2C)));
#define IC1CON IC1CON
extern volatile uint32_t   IC1CON __attribute__((section("sfrs"), address(0xBF802000)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC1CONbits_t;
extern volatile __IC1CONbits_t IC1CONbits __asm__ ("IC1CON") __attribute__((section("sfrs"), address(0xBF802000)));
extern volatile uint32_t        IC1CONCLR __attribute__((section("sfrs"),address(0xBF802004)));
extern volatile uint32_t        IC1CONSET __attribute__((section("sfrs"),address(0xBF802008)));
extern volatile uint32_t        IC1CONINV __attribute__((section("sfrs"),address(0xBF80200C)));
#define IC1BUF IC1BUF
extern volatile uint32_t   IC1BUF __attribute__((section("sfrs"), address(0xBF802010)));
#define IC2CON IC2CON
extern volatile uint32_t   IC2CON __attribute__((section("sfrs"), address(0xBF802200)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC2CONbits_t;
extern volatile __IC2CONbits_t IC2CONbits __asm__ ("IC2CON") __attribute__((section("sfrs"), address(0xBF802200)));
extern volatile uint32_t        IC2CONCLR __attribute__((section("sfrs"),address(0xBF802204)));
extern volatile uint32_t        IC2CONSET __attribute__((section("sfrs"),address(0xBF802208)));
extern volatile uint32_t        IC2CONINV __attribute__((section("sfrs"),address(0xBF80220C)));
#define IC2BUF IC2BUF
extern volatile uint32_t   IC2BUF __attribute__((section("sfrs"), address(0xBF802210)));
#define IC3CON IC3CON
extern volatile uint32_t   IC3CON __attribute__((section("sfrs"), address(0xBF802400)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC3CONbits_t;
extern volatile __IC3CONbits_t IC3CONbits __asm__ ("IC3CON") __attribute__((section("sfrs"), address(0xBF802400)));
extern volatile uint32_t        IC3CONCLR __attribute__((section("sfrs"),address(0xBF802404)));
extern volatile uint32_t        IC3CONSET __attribute__((section("sfrs"),address(0xBF802408)));
extern volatile uint32_t        IC3CONINV __attribute__((section("sfrs"),address(0xBF80240C)));
#define IC3BUF IC3BUF
extern volatile uint32_t   IC3BUF __attribute__((section("sfrs"), address(0xBF802410)));
#define IC4CON IC4CON
extern volatile uint32_t   IC4CON __attribute__((section("sfrs"), address(0xBF802600)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC4CONbits_t;
extern volatile __IC4CONbits_t IC4CONbits __asm__ ("IC4CON") __attribute__((section("sfrs"), address(0xBF802600)));
extern volatile uint32_t        IC4CONCLR __attribute__((section("sfrs"),address(0xBF802604)));
extern volatile uint32_t        IC4CONSET __attribute__((section("sfrs"),address(0xBF802608)));
extern volatile uint32_t        IC4CONINV __attribute__((section("sfrs"),address(0xBF80260C)));
#define IC4BUF IC4BUF
extern volatile uint32_t   IC4BUF __attribute__((section("sfrs"), address(0xBF802610)));
#define IC5CON IC5CON
extern volatile uint32_t   IC5CON __attribute__((section("sfrs"), address(0xBF802800)));
typedef union {
  struct {
    uint32_t ICM:3;
    uint32_t ICBNE:1;
    uint32_t ICOV:1;
    uint32_t ICI:2;
    uint32_t ICTMR:1;
    uint32_t C32:1;
    uint32_t FEDGE:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t ICM0:1;
    uint32_t ICM1:1;
    uint32_t ICM2:1;
    uint32_t :2;
    uint32_t ICI0:1;
    uint32_t ICI1:1;
  };
  struct {
    uint32_t :13;
    uint32_t ICSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __IC5CONbits_t;
extern volatile __IC5CONbits_t IC5CONbits __asm__ ("IC5CON") __attribute__((section("sfrs"), address(0xBF802800)));
extern volatile uint32_t        IC5CONCLR __attribute__((section("sfrs"),address(0xBF802804)));
extern volatile uint32_t        IC5CONSET __attribute__((section("sfrs"),address(0xBF802808)));
extern volatile uint32_t        IC5CONINV __attribute__((section("sfrs"),address(0xBF80280C)));
#define IC5BUF IC5BUF
extern volatile uint32_t   IC5BUF __attribute__((section("sfrs"), address(0xBF802810)));
#define OC1CON OC1CON
extern volatile uint32_t   OC1CON __attribute__((section("sfrs"), address(0xBF803000)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC1CONbits_t;
extern volatile __OC1CONbits_t OC1CONbits __asm__ ("OC1CON") __attribute__((section("sfrs"), address(0xBF803000)));
extern volatile uint32_t        OC1CONCLR __attribute__((section("sfrs"),address(0xBF803004)));
extern volatile uint32_t        OC1CONSET __attribute__((section("sfrs"),address(0xBF803008)));
extern volatile uint32_t        OC1CONINV __attribute__((section("sfrs"),address(0xBF80300C)));
#define OC1R OC1R
extern volatile uint32_t   OC1R __attribute__((section("sfrs"), address(0xBF803010)));
extern volatile uint32_t        OC1RCLR __attribute__((section("sfrs"),address(0xBF803014)));
extern volatile uint32_t        OC1RSET __attribute__((section("sfrs"),address(0xBF803018)));
extern volatile uint32_t        OC1RINV __attribute__((section("sfrs"),address(0xBF80301C)));
#define OC1RS OC1RS
extern volatile uint32_t   OC1RS __attribute__((section("sfrs"), address(0xBF803020)));
extern volatile uint32_t        OC1RSCLR __attribute__((section("sfrs"),address(0xBF803024)));
extern volatile uint32_t        OC1RSSET __attribute__((section("sfrs"),address(0xBF803028)));
extern volatile uint32_t        OC1RSINV __attribute__((section("sfrs"),address(0xBF80302C)));
#define OC2CON OC2CON
extern volatile uint32_t   OC2CON __attribute__((section("sfrs"), address(0xBF803200)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC2CONbits_t;
extern volatile __OC2CONbits_t OC2CONbits __asm__ ("OC2CON") __attribute__((section("sfrs"), address(0xBF803200)));
extern volatile uint32_t        OC2CONCLR __attribute__((section("sfrs"),address(0xBF803204)));
extern volatile uint32_t        OC2CONSET __attribute__((section("sfrs"),address(0xBF803208)));
extern volatile uint32_t        OC2CONINV __attribute__((section("sfrs"),address(0xBF80320C)));
#define OC2R OC2R
extern volatile uint32_t   OC2R __attribute__((section("sfrs"), address(0xBF803210)));
extern volatile uint32_t        OC2RCLR __attribute__((section("sfrs"),address(0xBF803214)));
extern volatile uint32_t        OC2RSET __attribute__((section("sfrs"),address(0xBF803218)));
extern volatile uint32_t        OC2RINV __attribute__((section("sfrs"),address(0xBF80321C)));
#define OC2RS OC2RS
extern volatile uint32_t   OC2RS __attribute__((section("sfrs"), address(0xBF803220)));
extern volatile uint32_t        OC2RSCLR __attribute__((section("sfrs"),address(0xBF803224)));
extern volatile uint32_t        OC2RSSET __attribute__((section("sfrs"),address(0xBF803228)));
extern volatile uint32_t        OC2RSINV __attribute__((section("sfrs"),address(0xBF80322C)));
#define OC3CON OC3CON
extern volatile uint32_t   OC3CON __attribute__((section("sfrs"), address(0xBF803400)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC3CONbits_t;
extern volatile __OC3CONbits_t OC3CONbits __asm__ ("OC3CON") __attribute__((section("sfrs"), address(0xBF803400)));
extern volatile uint32_t        OC3CONCLR __attribute__((section("sfrs"),address(0xBF803404)));
extern volatile uint32_t        OC3CONSET __attribute__((section("sfrs"),address(0xBF803408)));
extern volatile uint32_t        OC3CONINV __attribute__((section("sfrs"),address(0xBF80340C)));
#define OC3R OC3R
extern volatile uint32_t   OC3R __attribute__((section("sfrs"), address(0xBF803410)));
extern volatile uint32_t        OC3RCLR __attribute__((section("sfrs"),address(0xBF803414)));
extern volatile uint32_t        OC3RSET __attribute__((section("sfrs"),address(0xBF803418)));
extern volatile uint32_t        OC3RINV __attribute__((section("sfrs"),address(0xBF80341C)));
#define OC3RS OC3RS
extern volatile uint32_t   OC3RS __attribute__((section("sfrs"), address(0xBF803420)));
extern volatile uint32_t        OC3RSCLR __attribute__((section("sfrs"),address(0xBF803424)));
extern volatile uint32_t        OC3RSSET __attribute__((section("sfrs"),address(0xBF803428)));
extern volatile uint32_t        OC3RSINV __attribute__((section("sfrs"),address(0xBF80342C)));
#define OC4CON OC4CON
extern volatile uint32_t   OC4CON __attribute__((section("sfrs"), address(0xBF803600)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC4CONbits_t;
extern volatile __OC4CONbits_t OC4CONbits __asm__ ("OC4CON") __attribute__((section("sfrs"), address(0xBF803600)));
extern volatile uint32_t        OC4CONCLR __attribute__((section("sfrs"),address(0xBF803604)));
extern volatile uint32_t        OC4CONSET __attribute__((section("sfrs"),address(0xBF803608)));
extern volatile uint32_t        OC4CONINV __attribute__((section("sfrs"),address(0xBF80360C)));
#define OC4R OC4R
extern volatile uint32_t   OC4R __attribute__((section("sfrs"), address(0xBF803610)));
extern volatile uint32_t        OC4RCLR __attribute__((section("sfrs"),address(0xBF803614)));
extern volatile uint32_t        OC4RSET __attribute__((section("sfrs"),address(0xBF803618)));
extern volatile uint32_t        OC4RINV __attribute__((section("sfrs"),address(0xBF80361C)));
#define OC4RS OC4RS
extern volatile uint32_t   OC4RS __attribute__((section("sfrs"), address(0xBF803620)));
extern volatile uint32_t        OC4RSCLR __attribute__((section("sfrs"),address(0xBF803624)));
extern volatile uint32_t        OC4RSSET __attribute__((section("sfrs"),address(0xBF803628)));
extern volatile uint32_t        OC4RSINV __attribute__((section("sfrs"),address(0xBF80362C)));
#define OC5CON OC5CON
extern volatile uint32_t   OC5CON __attribute__((section("sfrs"), address(0xBF803800)));
typedef union {
  struct {
    uint32_t OCM:3;
    uint32_t OCTSEL:1;
    uint32_t OCFLT:1;
    uint32_t OC32:1;
    uint32_t :7;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t OCM0:1;
    uint32_t OCM1:1;
    uint32_t OCM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t OCSIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __OC5CONbits_t;
extern volatile __OC5CONbits_t OC5CONbits __asm__ ("OC5CON") __attribute__((section("sfrs"), address(0xBF803800)));
extern volatile uint32_t        OC5CONCLR __attribute__((section("sfrs"),address(0xBF803804)));
extern volatile uint32_t        OC5CONSET __attribute__((section("sfrs"),address(0xBF803808)));
extern volatile uint32_t        OC5CONINV __attribute__((section("sfrs"),address(0xBF80380C)));
#define OC5R OC5R
extern volatile uint32_t   OC5R __attribute__((section("sfrs"), address(0xBF803810)));
extern volatile uint32_t        OC5RCLR __attribute__((section("sfrs"),address(0xBF803814)));
extern volatile uint32_t        OC5RSET __attribute__((section("sfrs"),address(0xBF803818)));
extern volatile uint32_t        OC5RINV __attribute__((section("sfrs"),address(0xBF80381C)));
#define OC5RS OC5RS
extern volatile uint32_t   OC5RS __attribute__((section("sfrs"), address(0xBF803820)));
extern volatile uint32_t        OC5RSCLR __attribute__((section("sfrs"),address(0xBF803824)));
extern volatile uint32_t        OC5RSSET __attribute__((section("sfrs"),address(0xBF803828)));
extern volatile uint32_t        OC5RSINV __attribute__((section("sfrs"),address(0xBF80382C)));
#define I2C1ACON I2C1ACON
extern volatile uint32_t   I2C1ACON __attribute__((section("sfrs"), address(0xBF805000)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __I2C1ACONbits_t;
extern volatile __I2C1ACONbits_t I2C1ACONbits __asm__ ("I2C1ACON") __attribute__((section("sfrs"), address(0xBF805000)));
#define I2C1CON I2C1CON
extern volatile uint32_t   I2C1CON __attribute__((section("sfrs"), address(0xBF805000)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __I2C1CONbits_t;
extern volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON") __attribute__((section("sfrs"), address(0xBF805000)));
extern volatile uint32_t        I2C1ACONCLR __attribute__((section("sfrs"),address(0xBF805004)));
extern volatile uint32_t        I2C1CONCLR __attribute__((section("sfrs"),address(0xBF805004)));
extern volatile uint32_t        I2C1ACONSET __attribute__((section("sfrs"),address(0xBF805008)));
extern volatile uint32_t        I2C1CONSET __attribute__((section("sfrs"),address(0xBF805008)));
extern volatile uint32_t        I2C1ACONINV __attribute__((section("sfrs"),address(0xBF80500C)));
extern volatile uint32_t        I2C1CONINV __attribute__((section("sfrs"),address(0xBF80500C)));
#define I2C1ASTAT I2C1ASTAT
extern volatile uint32_t   I2C1ASTAT __attribute__((section("sfrs"), address(0xBF805010)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :3;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
  struct {
    uint32_t w:32;
  };
} __I2C1ASTATbits_t;
extern volatile __I2C1ASTATbits_t I2C1ASTATbits __asm__ ("I2C1ASTAT") __attribute__((section("sfrs"), address(0xBF805010)));
#define I2C1STAT I2C1STAT
extern volatile uint32_t   I2C1STAT __attribute__((section("sfrs"), address(0xBF805010)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :3;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
  struct {
    uint32_t w:32;
  };
} __I2C1STATbits_t;
extern volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT") __attribute__((section("sfrs"), address(0xBF805010)));
extern volatile uint32_t        I2C1ASTATCLR __attribute__((section("sfrs"),address(0xBF805014)));
extern volatile uint32_t        I2C1STATCLR __attribute__((section("sfrs"),address(0xBF805014)));
extern volatile uint32_t        I2C1ASTATSET __attribute__((section("sfrs"),address(0xBF805018)));
extern volatile uint32_t        I2C1STATSET __attribute__((section("sfrs"),address(0xBF805018)));
extern volatile uint32_t        I2C1ASTATINV __attribute__((section("sfrs"),address(0xBF80501C)));
extern volatile uint32_t        I2C1STATINV __attribute__((section("sfrs"),address(0xBF80501C)));
#define I2C1AADD I2C1AADD
extern volatile uint32_t   I2C1AADD __attribute__((section("sfrs"), address(0xBF805020)));
#define I2C1ADD I2C1ADD
extern volatile uint32_t   I2C1ADD __attribute__((section("sfrs"), address(0xBF805020)));
extern volatile uint32_t        I2C1AADDCLR __attribute__((section("sfrs"),address(0xBF805024)));
extern volatile uint32_t        I2C1ADDCLR __attribute__((section("sfrs"),address(0xBF805024)));
extern volatile uint32_t        I2C1AADDSET __attribute__((section("sfrs"),address(0xBF805028)));
extern volatile uint32_t        I2C1ADDSET __attribute__((section("sfrs"),address(0xBF805028)));
extern volatile uint32_t        I2C1AADDINV __attribute__((section("sfrs"),address(0xBF80502C)));
extern volatile uint32_t        I2C1ADDINV __attribute__((section("sfrs"),address(0xBF80502C)));
#define I2C1AMSK I2C1AMSK
extern volatile uint32_t   I2C1AMSK __attribute__((section("sfrs"), address(0xBF805030)));
#define I2C1MSK I2C1MSK
extern volatile uint32_t   I2C1MSK __attribute__((section("sfrs"), address(0xBF805030)));
extern volatile uint32_t        I2C1AMSKCLR __attribute__((section("sfrs"),address(0xBF805034)));
extern volatile uint32_t        I2C1MSKCLR __attribute__((section("sfrs"),address(0xBF805034)));
extern volatile uint32_t        I2C1AMSKSET __attribute__((section("sfrs"),address(0xBF805038)));
extern volatile uint32_t        I2C1MSKSET __attribute__((section("sfrs"),address(0xBF805038)));
extern volatile uint32_t        I2C1AMSKINV __attribute__((section("sfrs"),address(0xBF80503C)));
extern volatile uint32_t        I2C1MSKINV __attribute__((section("sfrs"),address(0xBF80503C)));
#define I2C1ABRG I2C1ABRG
extern volatile uint32_t   I2C1ABRG __attribute__((section("sfrs"), address(0xBF805040)));
#define I2C1BRG I2C1BRG
extern volatile uint32_t   I2C1BRG __attribute__((section("sfrs"), address(0xBF805040)));
extern volatile uint32_t        I2C1ABRGCLR __attribute__((section("sfrs"),address(0xBF805044)));
extern volatile uint32_t        I2C1BRGCLR __attribute__((section("sfrs"),address(0xBF805044)));
extern volatile uint32_t        I2C1ABRGSET __attribute__((section("sfrs"),address(0xBF805048)));
extern volatile uint32_t        I2C1BRGSET __attribute__((section("sfrs"),address(0xBF805048)));
extern volatile uint32_t        I2C1ABRGINV __attribute__((section("sfrs"),address(0xBF80504C)));
extern volatile uint32_t        I2C1BRGINV __attribute__((section("sfrs"),address(0xBF80504C)));
#define I2C1ATRN I2C1ATRN
extern volatile uint32_t   I2C1ATRN __attribute__((section("sfrs"), address(0xBF805050)));
#define I2C1TRN I2C1TRN
extern volatile uint32_t   I2C1TRN __attribute__((section("sfrs"), address(0xBF805050)));
extern volatile uint32_t        I2C1ATRNCLR __attribute__((section("sfrs"),address(0xBF805054)));
extern volatile uint32_t        I2C1TRNCLR __attribute__((section("sfrs"),address(0xBF805054)));
extern volatile uint32_t        I2C1ATRNSET __attribute__((section("sfrs"),address(0xBF805058)));
extern volatile uint32_t        I2C1TRNSET __attribute__((section("sfrs"),address(0xBF805058)));
extern volatile uint32_t        I2C1ATRNINV __attribute__((section("sfrs"),address(0xBF80505C)));
extern volatile uint32_t        I2C1TRNINV __attribute__((section("sfrs"),address(0xBF80505C)));
#define I2C1ARCV I2C1ARCV
extern volatile uint32_t   I2C1ARCV __attribute__((section("sfrs"), address(0xBF805060)));
#define I2C1RCV I2C1RCV
extern volatile uint32_t   I2C1RCV __attribute__((section("sfrs"), address(0xBF805060)));
#define I2C2ACON I2C2ACON
extern volatile uint32_t   I2C2ACON __attribute__((section("sfrs"), address(0xBF805100)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __I2C2ACONbits_t;
extern volatile __I2C2ACONbits_t I2C2ACONbits __asm__ ("I2C2ACON") __attribute__((section("sfrs"), address(0xBF805100)));
#define I2C2CON I2C2CON
extern volatile uint32_t   I2C2CON __attribute__((section("sfrs"), address(0xBF805100)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __I2C2CONbits_t;
extern volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON") __attribute__((section("sfrs"), address(0xBF805100)));
extern volatile uint32_t        I2C2ACONCLR __attribute__((section("sfrs"),address(0xBF805104)));
extern volatile uint32_t        I2C2CONCLR __attribute__((section("sfrs"),address(0xBF805104)));
extern volatile uint32_t        I2C2ACONSET __attribute__((section("sfrs"),address(0xBF805108)));
extern volatile uint32_t        I2C2CONSET __attribute__((section("sfrs"),address(0xBF805108)));
extern volatile uint32_t        I2C2ACONINV __attribute__((section("sfrs"),address(0xBF80510C)));
extern volatile uint32_t        I2C2CONINV __attribute__((section("sfrs"),address(0xBF80510C)));
#define I2C2ASTAT I2C2ASTAT
extern volatile uint32_t   I2C2ASTAT __attribute__((section("sfrs"), address(0xBF805110)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :3;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
  struct {
    uint32_t w:32;
  };
} __I2C2ASTATbits_t;
extern volatile __I2C2ASTATbits_t I2C2ASTATbits __asm__ ("I2C2ASTAT") __attribute__((section("sfrs"), address(0xBF805110)));
#define I2C2STAT I2C2STAT
extern volatile uint32_t   I2C2STAT __attribute__((section("sfrs"), address(0xBF805110)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :3;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
  struct {
    uint32_t w:32;
  };
} __I2C2STATbits_t;
extern volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT") __attribute__((section("sfrs"), address(0xBF805110)));
extern volatile uint32_t        I2C2ASTATCLR __attribute__((section("sfrs"),address(0xBF805114)));
extern volatile uint32_t        I2C2STATCLR __attribute__((section("sfrs"),address(0xBF805114)));
extern volatile uint32_t        I2C2ASTATSET __attribute__((section("sfrs"),address(0xBF805118)));
extern volatile uint32_t        I2C2STATSET __attribute__((section("sfrs"),address(0xBF805118)));
extern volatile uint32_t        I2C2ASTATINV __attribute__((section("sfrs"),address(0xBF80511C)));
extern volatile uint32_t        I2C2STATINV __attribute__((section("sfrs"),address(0xBF80511C)));
#define I2C2AADD I2C2AADD
extern volatile uint32_t   I2C2AADD __attribute__((section("sfrs"), address(0xBF805120)));
#define I2C2ADD I2C2ADD
extern volatile uint32_t   I2C2ADD __attribute__((section("sfrs"), address(0xBF805120)));
extern volatile uint32_t        I2C2AADDCLR __attribute__((section("sfrs"),address(0xBF805124)));
extern volatile uint32_t        I2C2ADDCLR __attribute__((section("sfrs"),address(0xBF805124)));
extern volatile uint32_t        I2C2AADDSET __attribute__((section("sfrs"),address(0xBF805128)));
extern volatile uint32_t        I2C2ADDSET __attribute__((section("sfrs"),address(0xBF805128)));
extern volatile uint32_t        I2C2AADDINV __attribute__((section("sfrs"),address(0xBF80512C)));
extern volatile uint32_t        I2C2ADDINV __attribute__((section("sfrs"),address(0xBF80512C)));
#define I2C2AMSK I2C2AMSK
extern volatile uint32_t   I2C2AMSK __attribute__((section("sfrs"), address(0xBF805130)));
#define I2C2MSK I2C2MSK
extern volatile uint32_t   I2C2MSK __attribute__((section("sfrs"), address(0xBF805130)));
extern volatile uint32_t        I2C2AMSKCLR __attribute__((section("sfrs"),address(0xBF805134)));
extern volatile uint32_t        I2C2MSKCLR __attribute__((section("sfrs"),address(0xBF805134)));
extern volatile uint32_t        I2C2AMSKSET __attribute__((section("sfrs"),address(0xBF805138)));
extern volatile uint32_t        I2C2MSKSET __attribute__((section("sfrs"),address(0xBF805138)));
extern volatile uint32_t        I2C2AMSKINV __attribute__((section("sfrs"),address(0xBF80513C)));
extern volatile uint32_t        I2C2MSKINV __attribute__((section("sfrs"),address(0xBF80513C)));
#define I2C2ABRG I2C2ABRG
extern volatile uint32_t   I2C2ABRG __attribute__((section("sfrs"), address(0xBF805140)));
#define I2C2BRG I2C2BRG
extern volatile uint32_t   I2C2BRG __attribute__((section("sfrs"), address(0xBF805140)));
extern volatile uint32_t        I2C2ABRGCLR __attribute__((section("sfrs"),address(0xBF805144)));
extern volatile uint32_t        I2C2BRGCLR __attribute__((section("sfrs"),address(0xBF805144)));
extern volatile uint32_t        I2C2ABRGSET __attribute__((section("sfrs"),address(0xBF805148)));
extern volatile uint32_t        I2C2BRGSET __attribute__((section("sfrs"),address(0xBF805148)));
extern volatile uint32_t        I2C2ABRGINV __attribute__((section("sfrs"),address(0xBF80514C)));
extern volatile uint32_t        I2C2BRGINV __attribute__((section("sfrs"),address(0xBF80514C)));
#define I2C2ATRN I2C2ATRN
extern volatile uint32_t   I2C2ATRN __attribute__((section("sfrs"), address(0xBF805150)));
#define I2C2TRN I2C2TRN
extern volatile uint32_t   I2C2TRN __attribute__((section("sfrs"), address(0xBF805150)));
extern volatile uint32_t        I2C2ATRNCLR __attribute__((section("sfrs"),address(0xBF805154)));
extern volatile uint32_t        I2C2TRNCLR __attribute__((section("sfrs"),address(0xBF805154)));
extern volatile uint32_t        I2C2ATRNSET __attribute__((section("sfrs"),address(0xBF805158)));
extern volatile uint32_t        I2C2TRNSET __attribute__((section("sfrs"),address(0xBF805158)));
extern volatile uint32_t        I2C2ATRNINV __attribute__((section("sfrs"),address(0xBF80515C)));
extern volatile uint32_t        I2C2TRNINV __attribute__((section("sfrs"),address(0xBF80515C)));
#define I2C2ARCV I2C2ARCV
extern volatile uint32_t   I2C2ARCV __attribute__((section("sfrs"), address(0xBF805160)));
#define I2C2RCV I2C2RCV
extern volatile uint32_t   I2C2RCV __attribute__((section("sfrs"), address(0xBF805160)));
#define SPI1CON SPI1CON
extern volatile uint32_t   SPI1CON __attribute__((section("sfrs"), address(0xBF805800)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1CONbits_t;
extern volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON") __attribute__((section("sfrs"), address(0xBF805800)));
extern volatile uint32_t        SPI1CONCLR __attribute__((section("sfrs"),address(0xBF805804)));
extern volatile uint32_t        SPI1CONSET __attribute__((section("sfrs"),address(0xBF805808)));
extern volatile uint32_t        SPI1CONINV __attribute__((section("sfrs"),address(0xBF80580C)));
#define SPI1STAT SPI1STAT
extern volatile uint32_t   SPI1STAT __attribute__((section("sfrs"), address(0xBF805810)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1STATbits_t;
extern volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT") __attribute__((section("sfrs"), address(0xBF805810)));
extern volatile uint32_t        SPI1STATCLR __attribute__((section("sfrs"),address(0xBF805814)));
extern volatile uint32_t        SPI1STATSET __attribute__((section("sfrs"),address(0xBF805818)));
extern volatile uint32_t        SPI1STATINV __attribute__((section("sfrs"),address(0xBF80581C)));
#define SPI1BUF SPI1BUF
extern volatile uint32_t   SPI1BUF __attribute__((section("sfrs"), address(0xBF805820)));
#define SPI1BRG SPI1BRG
extern volatile uint32_t   SPI1BRG __attribute__((section("sfrs"), address(0xBF805830)));
extern volatile uint32_t        SPI1BRGCLR __attribute__((section("sfrs"),address(0xBF805834)));
extern volatile uint32_t        SPI1BRGSET __attribute__((section("sfrs"),address(0xBF805838)));
extern volatile uint32_t        SPI1BRGINV __attribute__((section("sfrs"),address(0xBF80583C)));
#define SPI1CON2 SPI1CON2
extern volatile uint32_t   SPI1CON2 __attribute__((section("sfrs"), address(0xBF805840)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1CON2bits_t;
extern volatile __SPI1CON2bits_t SPI1CON2bits __asm__ ("SPI1CON2") __attribute__((section("sfrs"), address(0xBF805840)));
extern volatile uint32_t        SPI1CON2CLR __attribute__((section("sfrs"),address(0xBF805844)));
extern volatile uint32_t        SPI1CON2SET __attribute__((section("sfrs"),address(0xBF805848)));
extern volatile uint32_t        SPI1CON2INV __attribute__((section("sfrs"),address(0xBF80584C)));
#define SPI2CON SPI2CON
extern volatile uint32_t   SPI2CON __attribute__((section("sfrs"), address(0xBF805A00)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2CONbits_t;
extern volatile __SPI2CONbits_t SPI2CONbits __asm__ ("SPI2CON") __attribute__((section("sfrs"), address(0xBF805A00)));
extern volatile uint32_t        SPI2CONCLR __attribute__((section("sfrs"),address(0xBF805A04)));
extern volatile uint32_t        SPI2CONSET __attribute__((section("sfrs"),address(0xBF805A08)));
extern volatile uint32_t        SPI2CONINV __attribute__((section("sfrs"),address(0xBF805A0C)));
#define SPI2STAT SPI2STAT
extern volatile uint32_t   SPI2STAT __attribute__((section("sfrs"), address(0xBF805A10)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2STATbits_t;
extern volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT") __attribute__((section("sfrs"), address(0xBF805A10)));
extern volatile uint32_t        SPI2STATCLR __attribute__((section("sfrs"),address(0xBF805A14)));
extern volatile uint32_t        SPI2STATSET __attribute__((section("sfrs"),address(0xBF805A18)));
extern volatile uint32_t        SPI2STATINV __attribute__((section("sfrs"),address(0xBF805A1C)));
#define SPI2BUF SPI2BUF
extern volatile uint32_t   SPI2BUF __attribute__((section("sfrs"), address(0xBF805A20)));
#define SPI2BRG SPI2BRG
extern volatile uint32_t   SPI2BRG __attribute__((section("sfrs"), address(0xBF805A30)));
extern volatile uint32_t        SPI2BRGCLR __attribute__((section("sfrs"),address(0xBF805A34)));
extern volatile uint32_t        SPI2BRGSET __attribute__((section("sfrs"),address(0xBF805A38)));
extern volatile uint32_t        SPI2BRGINV __attribute__((section("sfrs"),address(0xBF805A3C)));
#define SPI2CON2 SPI2CON2
extern volatile uint32_t   SPI2CON2 __attribute__((section("sfrs"), address(0xBF805A40)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2CON2bits_t;
extern volatile __SPI2CON2bits_t SPI2CON2bits __asm__ ("SPI2CON2") __attribute__((section("sfrs"), address(0xBF805A40)));
extern volatile uint32_t        SPI2CON2CLR __attribute__((section("sfrs"),address(0xBF805A44)));
extern volatile uint32_t        SPI2CON2SET __attribute__((section("sfrs"),address(0xBF805A48)));
extern volatile uint32_t        SPI2CON2INV __attribute__((section("sfrs"),address(0xBF805A4C)));
#define U1AMODE U1AMODE
extern volatile uint32_t   U1AMODE __attribute__((section("sfrs"), address(0xBF806000)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U1AMODEbits_t;
extern volatile __U1AMODEbits_t U1AMODEbits __asm__ ("U1AMODE") __attribute__((section("sfrs"), address(0xBF806000)));
#define U1MODE U1MODE
extern volatile uint32_t   U1MODE __attribute__((section("sfrs"), address(0xBF806000)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U1MODEbits_t;
extern volatile __U1MODEbits_t U1MODEbits __asm__ ("U1MODE") __attribute__((section("sfrs"), address(0xBF806000)));
extern volatile uint32_t        U1AMODECLR __attribute__((section("sfrs"),address(0xBF806004)));
extern volatile uint32_t        U1MODECLR __attribute__((section("sfrs"),address(0xBF806004)));
extern volatile uint32_t        U1AMODESET __attribute__((section("sfrs"),address(0xBF806008)));
extern volatile uint32_t        U1MODESET __attribute__((section("sfrs"),address(0xBF806008)));
extern volatile uint32_t        U1AMODEINV __attribute__((section("sfrs"),address(0xBF80600C)));
extern volatile uint32_t        U1MODEINV __attribute__((section("sfrs"),address(0xBF80600C)));
#define U1ASTA U1ASTA
extern volatile uint32_t   U1ASTA __attribute__((section("sfrs"), address(0xBF806010)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U1ASTAbits_t;
extern volatile __U1ASTAbits_t U1ASTAbits __asm__ ("U1ASTA") __attribute__((section("sfrs"), address(0xBF806010)));
#define U1STA U1STA
extern volatile uint32_t   U1STA __attribute__((section("sfrs"), address(0xBF806010)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U1STAbits_t;
extern volatile __U1STAbits_t U1STAbits __asm__ ("U1STA") __attribute__((section("sfrs"), address(0xBF806010)));
extern volatile uint32_t        U1ASTACLR __attribute__((section("sfrs"),address(0xBF806014)));
extern volatile uint32_t        U1STACLR __attribute__((section("sfrs"),address(0xBF806014)));
extern volatile uint32_t        U1ASTASET __attribute__((section("sfrs"),address(0xBF806018)));
extern volatile uint32_t        U1STASET __attribute__((section("sfrs"),address(0xBF806018)));
extern volatile uint32_t        U1ASTAINV __attribute__((section("sfrs"),address(0xBF80601C)));
extern volatile uint32_t        U1STAINV __attribute__((section("sfrs"),address(0xBF80601C)));
#define U1ATXREG U1ATXREG
extern volatile uint32_t   U1ATXREG __attribute__((section("sfrs"), address(0xBF806020)));
#define U1TXREG U1TXREG
extern volatile uint32_t   U1TXREG __attribute__((section("sfrs"), address(0xBF806020)));
#define U1ARXREG U1ARXREG
extern volatile uint32_t   U1ARXREG __attribute__((section("sfrs"), address(0xBF806030)));
#define U1RXREG U1RXREG
extern volatile uint32_t   U1RXREG __attribute__((section("sfrs"), address(0xBF806030)));
#define U1ABRG U1ABRG
extern volatile uint32_t   U1ABRG __attribute__((section("sfrs"), address(0xBF806040)));
#define U1BRG U1BRG
extern volatile uint32_t   U1BRG __attribute__((section("sfrs"), address(0xBF806040)));
extern volatile uint32_t        U1ABRGCLR __attribute__((section("sfrs"),address(0xBF806044)));
extern volatile uint32_t        U1BRGCLR __attribute__((section("sfrs"),address(0xBF806044)));
extern volatile uint32_t        U1ABRGSET __attribute__((section("sfrs"),address(0xBF806048)));
extern volatile uint32_t        U1BRGSET __attribute__((section("sfrs"),address(0xBF806048)));
extern volatile uint32_t        U1ABRGINV __attribute__((section("sfrs"),address(0xBF80604C)));
extern volatile uint32_t        U1BRGINV __attribute__((section("sfrs"),address(0xBF80604C)));
#define U2MODE U2MODE
extern volatile uint32_t   U2MODE __attribute__((section("sfrs"), address(0xBF806200)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U2MODEbits_t;
extern volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE") __attribute__((section("sfrs"), address(0xBF806200)));
#define U3AMODE U3AMODE
extern volatile uint32_t   U3AMODE __attribute__((section("sfrs"), address(0xBF806200)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U3AMODEbits_t;
extern volatile __U3AMODEbits_t U3AMODEbits __asm__ ("U3AMODE") __attribute__((section("sfrs"), address(0xBF806200)));
extern volatile uint32_t        U2MODECLR __attribute__((section("sfrs"),address(0xBF806204)));
extern volatile uint32_t        U3AMODECLR __attribute__((section("sfrs"),address(0xBF806204)));
extern volatile uint32_t        U2MODESET __attribute__((section("sfrs"),address(0xBF806208)));
extern volatile uint32_t        U3AMODESET __attribute__((section("sfrs"),address(0xBF806208)));
extern volatile uint32_t        U2MODEINV __attribute__((section("sfrs"),address(0xBF80620C)));
extern volatile uint32_t        U3AMODEINV __attribute__((section("sfrs"),address(0xBF80620C)));
#define U2STA U2STA
extern volatile uint32_t   U2STA __attribute__((section("sfrs"), address(0xBF806210)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U2STAbits_t;
extern volatile __U2STAbits_t U2STAbits __asm__ ("U2STA") __attribute__((section("sfrs"), address(0xBF806210)));
#define U3ASTA U3ASTA
extern volatile uint32_t   U3ASTA __attribute__((section("sfrs"), address(0xBF806210)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t ADM_EN:1;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U3ASTAbits_t;
extern volatile __U3ASTAbits_t U3ASTAbits __asm__ ("U3ASTA") __attribute__((section("sfrs"), address(0xBF806210)));
extern volatile uint32_t        U2STACLR __attribute__((section("sfrs"),address(0xBF806214)));
extern volatile uint32_t        U3ASTACLR __attribute__((section("sfrs"),address(0xBF806214)));
extern volatile uint32_t        U2STASET __attribute__((section("sfrs"),address(0xBF806218)));
extern volatile uint32_t        U3ASTASET __attribute__((section("sfrs"),address(0xBF806218)));
extern volatile uint32_t        U2STAINV __attribute__((section("sfrs"),address(0xBF80621C)));
extern volatile uint32_t        U3ASTAINV __attribute__((section("sfrs"),address(0xBF80621C)));
#define U2TXREG U2TXREG
extern volatile uint32_t   U2TXREG __attribute__((section("sfrs"), address(0xBF806220)));
#define U3ATXREG U3ATXREG
extern volatile uint32_t   U3ATXREG __attribute__((section("sfrs"), address(0xBF806220)));
#define U2RXREG U2RXREG
extern volatile uint32_t   U2RXREG __attribute__((section("sfrs"), address(0xBF806230)));
#define U3ARXREG U3ARXREG
extern volatile uint32_t   U3ARXREG __attribute__((section("sfrs"), address(0xBF806230)));
#define U2BRG U2BRG
extern volatile uint32_t   U2BRG __attribute__((section("sfrs"), address(0xBF806240)));
#define U3ABRG U3ABRG
extern volatile uint32_t   U3ABRG __attribute__((section("sfrs"), address(0xBF806240)));
extern volatile uint32_t        U2BRGCLR __attribute__((section("sfrs"),address(0xBF806244)));
extern volatile uint32_t        U3ABRGCLR __attribute__((section("sfrs"),address(0xBF806244)));
extern volatile uint32_t        U2BRGSET __attribute__((section("sfrs"),address(0xBF806248)));
extern volatile uint32_t        U3ABRGSET __attribute__((section("sfrs"),address(0xBF806248)));
extern volatile uint32_t        U2BRGINV __attribute__((section("sfrs"),address(0xBF80624C)));
extern volatile uint32_t        U3ABRGINV __attribute__((section("sfrs"),address(0xBF80624C)));
#define PMCON PMCON
extern volatile uint32_t   PMCON __attribute__((section("sfrs"), address(0xBF807000)));
typedef union {
  struct {
    uint32_t RDSP:1;
    uint32_t WRSP:1;
    uint32_t :1;
    uint32_t CS1P:1;
    uint32_t :1;
    uint32_t ALP:1;
    uint32_t CSF:2;
    uint32_t PTRDEN:1;
    uint32_t PTWREN:1;
    uint32_t PMPTTL:1;
    uint32_t ADRMUX:2;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :6;
    uint32_t CSF0:1;
    uint32_t CSF1:1;
    uint32_t :3;
    uint32_t ADRMUX0:1;
    uint32_t ADRMUX1:1;
  };
  struct {
    uint32_t :13;
    uint32_t PSIDL:1;
    uint32_t :1;
    uint32_t PMPEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMCONbits_t;
extern volatile __PMCONbits_t PMCONbits __asm__ ("PMCON") __attribute__((section("sfrs"), address(0xBF807000)));
extern volatile uint32_t        PMCONCLR __attribute__((section("sfrs"),address(0xBF807004)));
extern volatile uint32_t        PMCONSET __attribute__((section("sfrs"),address(0xBF807008)));
extern volatile uint32_t        PMCONINV __attribute__((section("sfrs"),address(0xBF80700C)));
#define PMMODE PMMODE
extern volatile uint32_t   PMMODE __attribute__((section("sfrs"), address(0xBF807010)));
typedef union {
  struct {
    uint32_t WAITE:2;
    uint32_t WAITM:4;
    uint32_t WAITB:2;
    uint32_t MODE:2;
    uint32_t :1;
    uint32_t INCM:2;
    uint32_t IRQM:2;
    uint32_t BUSY:1;
  };
  struct {
    uint32_t WAITE0:1;
    uint32_t WAITE1:1;
    uint32_t WAITM0:1;
    uint32_t WAITM1:1;
    uint32_t WAITM2:1;
    uint32_t WAITM3:1;
    uint32_t WAITB0:1;
    uint32_t WAITB1:1;
    uint32_t MODE0:1;
    uint32_t MODE1:1;
    uint32_t :1;
    uint32_t INCM0:1;
    uint32_t INCM1:1;
    uint32_t IRQM0:1;
    uint32_t IRQM1:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMMODEbits_t;
extern volatile __PMMODEbits_t PMMODEbits __asm__ ("PMMODE") __attribute__((section("sfrs"), address(0xBF807010)));
extern volatile uint32_t        PMMODECLR __attribute__((section("sfrs"),address(0xBF807014)));
extern volatile uint32_t        PMMODESET __attribute__((section("sfrs"),address(0xBF807018)));
extern volatile uint32_t        PMMODEINV __attribute__((section("sfrs"),address(0xBF80701C)));
#define PMADDR PMADDR
extern volatile uint32_t   PMADDR __attribute__((section("sfrs"), address(0xBF807020)));
typedef union {
  struct {
    uint32_t ADDR:14;
    uint32_t CS:2;
  };
  struct {
    uint32_t PADDR:14;
  };
  struct {
    uint32_t :14;
    uint32_t CS1:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMADDRbits_t;
extern volatile __PMADDRbits_t PMADDRbits __asm__ ("PMADDR") __attribute__((section("sfrs"), address(0xBF807020)));
extern volatile uint32_t        PMADDRCLR __attribute__((section("sfrs"),address(0xBF807024)));
extern volatile uint32_t        PMADDRSET __attribute__((section("sfrs"),address(0xBF807028)));
extern volatile uint32_t        PMADDRINV __attribute__((section("sfrs"),address(0xBF80702C)));
#define PMDOUT PMDOUT
extern volatile uint32_t   PMDOUT __attribute__((section("sfrs"), address(0xBF807030)));
typedef union {
  struct {
    uint32_t DATAOUT:32;
  };
  struct {
    uint32_t w:32;
  };
} __PMDOUTbits_t;
extern volatile __PMDOUTbits_t PMDOUTbits __asm__ ("PMDOUT") __attribute__((section("sfrs"), address(0xBF807030)));
extern volatile uint32_t        PMDOUTCLR __attribute__((section("sfrs"),address(0xBF807034)));
extern volatile uint32_t        PMDOUTSET __attribute__((section("sfrs"),address(0xBF807038)));
extern volatile uint32_t        PMDOUTINV __attribute__((section("sfrs"),address(0xBF80703C)));
#define PMDIN PMDIN
extern volatile uint32_t   PMDIN __attribute__((section("sfrs"), address(0xBF807040)));
typedef union {
  struct {
    uint32_t DATAIN:32;
  };
  struct {
    uint32_t w:32;
  };
} __PMDINbits_t;
extern volatile __PMDINbits_t PMDINbits __asm__ ("PMDIN") __attribute__((section("sfrs"), address(0xBF807040)));
extern volatile uint32_t        PMDINCLR __attribute__((section("sfrs"),address(0xBF807044)));
extern volatile uint32_t        PMDINSET __attribute__((section("sfrs"),address(0xBF807048)));
extern volatile uint32_t        PMDININV __attribute__((section("sfrs"),address(0xBF80704C)));
#define PMAEN PMAEN
extern volatile uint32_t   PMAEN __attribute__((section("sfrs"), address(0xBF807050)));
typedef union {
  struct {
    uint32_t PTEN:16;
  };
  struct {
    uint32_t PTEN0:1;
    uint32_t PTEN1:1;
    uint32_t PTEN2:1;
    uint32_t PTEN3:1;
    uint32_t PTEN4:1;
    uint32_t PTEN5:1;
    uint32_t PTEN6:1;
    uint32_t PTEN7:1;
    uint32_t PTEN8:1;
    uint32_t PTEN9:1;
    uint32_t PTEN10:1;
    uint32_t PTEN11:1;
    uint32_t PTEN12:1;
    uint32_t PTEN13:1;
    uint32_t PTEN14:1;
    uint32_t PTEN15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMAENbits_t;
extern volatile __PMAENbits_t PMAENbits __asm__ ("PMAEN") __attribute__((section("sfrs"), address(0xBF807050)));
extern volatile uint32_t        PMAENCLR __attribute__((section("sfrs"),address(0xBF807054)));
extern volatile uint32_t        PMAENSET __attribute__((section("sfrs"),address(0xBF807058)));
extern volatile uint32_t        PMAENINV __attribute__((section("sfrs"),address(0xBF80705C)));
#define PMSTAT PMSTAT
extern volatile uint32_t   PMSTAT __attribute__((section("sfrs"), address(0xBF807060)));
typedef union {
  struct {
    uint32_t OB0E:1;
    uint32_t OB1E:1;
    uint32_t OB2E:1;
    uint32_t OB3E:1;
    uint32_t :2;
    uint32_t OBUF:1;
    uint32_t OBE:1;
    uint32_t IB0F:1;
    uint32_t IB1F:1;
    uint32_t IB2F:1;
    uint32_t IB3F:1;
    uint32_t :2;
    uint32_t IBOV:1;
    uint32_t IBF:1;
  };
  struct {
    uint32_t w:32;
  };
} __PMSTATbits_t;
extern volatile __PMSTATbits_t PMSTATbits __asm__ ("PMSTAT") __attribute__((section("sfrs"), address(0xBF807060)));
extern volatile uint32_t        PMSTATCLR __attribute__((section("sfrs"),address(0xBF807064)));
extern volatile uint32_t        PMSTATSET __attribute__((section("sfrs"),address(0xBF807068)));
extern volatile uint32_t        PMSTATINV __attribute__((section("sfrs"),address(0xBF80706C)));
#define AD1CON1 AD1CON1
extern volatile uint32_t   AD1CON1 __attribute__((section("sfrs"), address(0xBF809000)));
typedef union {
  struct {
    uint32_t DONE:1;
    uint32_t SAMP:1;
    uint32_t ASAM:1;
    uint32_t :1;
    uint32_t CLRASAM:1;
    uint32_t SSRC:3;
    uint32_t FORM:3;
    uint32_t :2;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :5;
    uint32_t SSRC0:1;
    uint32_t SSRC1:1;
    uint32_t SSRC2:1;
    uint32_t FORM0:1;
    uint32_t FORM1:1;
    uint32_t FORM2:1;
  };
  struct {
    uint32_t :13;
    uint32_t ADSIDL:1;
    uint32_t :1;
    uint32_t ADON:1;
  };
  struct {
    uint32_t w:32;
  };
} __AD1CON1bits_t;
extern volatile __AD1CON1bits_t AD1CON1bits __asm__ ("AD1CON1") __attribute__((section("sfrs"), address(0xBF809000)));
extern volatile uint32_t        AD1CON1CLR __attribute__((section("sfrs"),address(0xBF809004)));
extern volatile uint32_t        AD1CON1SET __attribute__((section("sfrs"),address(0xBF809008)));
extern volatile uint32_t        AD1CON1INV __attribute__((section("sfrs"),address(0xBF80900C)));
#define AD1CON2 AD1CON2
extern volatile uint32_t   AD1CON2 __attribute__((section("sfrs"), address(0xBF809010)));
typedef union {
  struct {
    uint32_t ALTS:1;
    uint32_t BUFM:1;
    uint32_t SMPI:4;
    uint32_t :1;
    uint32_t BUFS:1;
    uint32_t :2;
    uint32_t CSCNA:1;
    uint32_t :1;
    uint32_t OFFCAL:1;
    uint32_t VCFG:3;
  };
  struct {
    uint32_t :2;
    uint32_t SMPI0:1;
    uint32_t SMPI1:1;
    uint32_t SMPI2:1;
    uint32_t SMPI3:1;
    uint32_t :7;
    uint32_t VCFG0:1;
    uint32_t VCFG1:1;
    uint32_t VCFG2:1;
  };
  struct {
    uint32_t w:32;
  };
} __AD1CON2bits_t;
extern volatile __AD1CON2bits_t AD1CON2bits __asm__ ("AD1CON2") __attribute__((section("sfrs"), address(0xBF809010)));
extern volatile uint32_t        AD1CON2CLR __attribute__((section("sfrs"),address(0xBF809014)));
extern volatile uint32_t        AD1CON2SET __attribute__((section("sfrs"),address(0xBF809018)));
extern volatile uint32_t        AD1CON2INV __attribute__((section("sfrs"),address(0xBF80901C)));
#define AD1CON3 AD1CON3
extern volatile uint32_t   AD1CON3 __attribute__((section("sfrs"), address(0xBF809020)));
typedef union {
  struct {
    uint32_t ADCS:8;
    uint32_t SAMC:5;
    uint32_t :2;
    uint32_t ADRC:1;
  };
  struct {
    uint32_t ADCS0:1;
    uint32_t ADCS1:1;
    uint32_t ADCS2:1;
    uint32_t ADCS3:1;
    uint32_t ADCS4:1;
    uint32_t ADCS5:1;
    uint32_t ADCS6:1;
    uint32_t ADCS7:1;
    uint32_t SAMC0:1;
    uint32_t SAMC1:1;
    uint32_t SAMC2:1;
    uint32_t SAMC3:1;
    uint32_t SAMC4:1;
  };
  struct {
    uint32_t w:32;
  };
} __AD1CON3bits_t;
extern volatile __AD1CON3bits_t AD1CON3bits __asm__ ("AD1CON3") __attribute__((section("sfrs"), address(0xBF809020)));
extern volatile uint32_t        AD1CON3CLR __attribute__((section("sfrs"),address(0xBF809024)));
extern volatile uint32_t        AD1CON3SET __attribute__((section("sfrs"),address(0xBF809028)));
extern volatile uint32_t        AD1CON3INV __attribute__((section("sfrs"),address(0xBF80902C)));
#define AD1CHS AD1CHS
extern volatile uint32_t   AD1CHS __attribute__((section("sfrs"), address(0xBF809040)));
typedef union {
  struct {
    uint32_t :16;
    uint32_t CH0SA:4;
    uint32_t :3;
    uint32_t CH0NA:1;
    uint32_t CH0SB:4;
    uint32_t :3;
    uint32_t CH0NB:1;
  };
  struct {
    uint32_t :16;
    uint32_t CH0SA0:1;
    uint32_t CH0SA1:1;
    uint32_t CH0SA2:1;
    uint32_t CH0SA3:1;
    uint32_t :4;
    uint32_t CH0SB0:1;
    uint32_t CH0SB1:1;
    uint32_t CH0SB2:1;
    uint32_t CH0SB3:1;
  };
  struct {
    uint32_t w:32;
  };
} __AD1CHSbits_t;
extern volatile __AD1CHSbits_t AD1CHSbits __asm__ ("AD1CHS") __attribute__((section("sfrs"), address(0xBF809040)));
extern volatile uint32_t        AD1CHSCLR __attribute__((section("sfrs"),address(0xBF809044)));
extern volatile uint32_t        AD1CHSSET __attribute__((section("sfrs"),address(0xBF809048)));
extern volatile uint32_t        AD1CHSINV __attribute__((section("sfrs"),address(0xBF80904C)));
#define AD1CSSL AD1CSSL
extern volatile uint32_t   AD1CSSL __attribute__((section("sfrs"), address(0xBF809050)));
typedef union {
  struct {
    uint32_t CSSL:16;
  };
  struct {
    uint32_t CSSL0:1;
    uint32_t CSSL1:1;
    uint32_t CSSL2:1;
    uint32_t CSSL3:1;
    uint32_t CSSL4:1;
    uint32_t CSSL5:1;
    uint32_t CSSL6:1;
    uint32_t CSSL7:1;
    uint32_t CSSL8:1;
    uint32_t CSSL9:1;
    uint32_t CSSL10:1;
    uint32_t CSSL11:1;
    uint32_t CSSL12:1;
    uint32_t CSSL13:1;
    uint32_t CSSL14:1;
    uint32_t CSSL15:1;
  };
  struct {
    uint32_t w:32;
  };
} __AD1CSSLbits_t;
extern volatile __AD1CSSLbits_t AD1CSSLbits __asm__ ("AD1CSSL") __attribute__((section("sfrs"), address(0xBF809050)));
extern volatile uint32_t        AD1CSSLCLR __attribute__((section("sfrs"),address(0xBF809054)));
extern volatile uint32_t        AD1CSSLSET __attribute__((section("sfrs"),address(0xBF809058)));
extern volatile uint32_t        AD1CSSLINV __attribute__((section("sfrs"),address(0xBF80905C)));
#define ADC1BUF0 ADC1BUF0
extern volatile uint32_t   ADC1BUF0 __attribute__((section("sfrs"), address(0xBF809070)));
#define ADC1BUF1 ADC1BUF1
extern volatile uint32_t   ADC1BUF1 __attribute__((section("sfrs"), address(0xBF809080)));
#define ADC1BUF2 ADC1BUF2
extern volatile uint32_t   ADC1BUF2 __attribute__((section("sfrs"), address(0xBF809090)));
#define ADC1BUF3 ADC1BUF3
extern volatile uint32_t   ADC1BUF3 __attribute__((section("sfrs"), address(0xBF8090A0)));
#define ADC1BUF4 ADC1BUF4
extern volatile uint32_t   ADC1BUF4 __attribute__((section("sfrs"), address(0xBF8090B0)));
#define ADC1BUF5 ADC1BUF5
extern volatile uint32_t   ADC1BUF5 __attribute__((section("sfrs"), address(0xBF8090C0)));
#define ADC1BUF6 ADC1BUF6
extern volatile uint32_t   ADC1BUF6 __attribute__((section("sfrs"), address(0xBF8090D0)));
#define ADC1BUF7 ADC1BUF7
extern volatile uint32_t   ADC1BUF7 __attribute__((section("sfrs"), address(0xBF8090E0)));
#define ADC1BUF8 ADC1BUF8
extern volatile uint32_t   ADC1BUF8 __attribute__((section("sfrs"), address(0xBF8090F0)));
#define ADC1BUF9 ADC1BUF9
extern volatile uint32_t   ADC1BUF9 __attribute__((section("sfrs"), address(0xBF809100)));
#define ADC1BUFA ADC1BUFA
extern volatile uint32_t   ADC1BUFA __attribute__((section("sfrs"), address(0xBF809110)));
#define ADC1BUFB ADC1BUFB
extern volatile uint32_t   ADC1BUFB __attribute__((section("sfrs"), address(0xBF809120)));
#define ADC1BUFC ADC1BUFC
extern volatile uint32_t   ADC1BUFC __attribute__((section("sfrs"), address(0xBF809130)));
#define ADC1BUFD ADC1BUFD
extern volatile uint32_t   ADC1BUFD __attribute__((section("sfrs"), address(0xBF809140)));
#define ADC1BUFE ADC1BUFE
extern volatile uint32_t   ADC1BUFE __attribute__((section("sfrs"), address(0xBF809150)));
#define ADC1BUFF ADC1BUFF
extern volatile uint32_t   ADC1BUFF __attribute__((section("sfrs"), address(0xBF809160)));
#define CVRCON CVRCON
extern volatile uint32_t   CVRCON __attribute__((section("sfrs"), address(0xBF809800)));
typedef union {
  struct {
    uint32_t CVR:4;
    uint32_t CVRSS:1;
    uint32_t CVRR:1;
    uint32_t CVROE:1;
    uint32_t :8;
    uint32_t ON:1;
  };
  struct {
    uint32_t CVR0:1;
    uint32_t CVR1:1;
    uint32_t CVR2:1;
    uint32_t CVR3:1;
  };
  struct {
    uint32_t w:32;
  };
} __CVRCONbits_t;
extern volatile __CVRCONbits_t CVRCONbits __asm__ ("CVRCON") __attribute__((section("sfrs"), address(0xBF809800)));
extern volatile uint32_t        CVRCONCLR __attribute__((section("sfrs"),address(0xBF809804)));
extern volatile uint32_t        CVRCONSET __attribute__((section("sfrs"),address(0xBF809808)));
extern volatile uint32_t        CVRCONINV __attribute__((section("sfrs"),address(0xBF80980C)));
#define CM1CON CM1CON
extern volatile uint32_t   CM1CON __attribute__((section("sfrs"), address(0xBF80A000)));
typedef union {
  struct {
    uint32_t CCH:2;
    uint32_t :2;
    uint32_t CREF:1;
    uint32_t :1;
    uint32_t EVPOL:2;
    uint32_t COUT:1;
    uint32_t :4;
    uint32_t CPOL:1;
    uint32_t COE:1;
    uint32_t ON:1;
  };
  struct {
    uint32_t CCH0:1;
    uint32_t CCH1:1;
    uint32_t :4;
    uint32_t EVPOL0:1;
    uint32_t EVPOL1:1;
  };
  struct {
    uint32_t w:32;
  };
} __CM1CONbits_t;
extern volatile __CM1CONbits_t CM1CONbits __asm__ ("CM1CON") __attribute__((section("sfrs"), address(0xBF80A000)));
extern volatile uint32_t        CM1CONCLR __attribute__((section("sfrs"),address(0xBF80A004)));
extern volatile uint32_t        CM1CONSET __attribute__((section("sfrs"),address(0xBF80A008)));
extern volatile uint32_t        CM1CONINV __attribute__((section("sfrs"),address(0xBF80A00C)));
#define CM2CON CM2CON
extern volatile uint32_t   CM2CON __attribute__((section("sfrs"), address(0xBF80A010)));
typedef union {
  struct {
    uint32_t CCH:2;
    uint32_t :2;
    uint32_t CREF:1;
    uint32_t :1;
    uint32_t EVPOL:2;
    uint32_t COUT:1;
    uint32_t :4;
    uint32_t CPOL:1;
    uint32_t COE:1;
    uint32_t ON:1;
  };
  struct {
    uint32_t CCH0:1;
    uint32_t CCH1:1;
    uint32_t :4;
    uint32_t EVPOL0:1;
    uint32_t EVPOL1:1;
  };
  struct {
    uint32_t w:32;
  };
} __CM2CONbits_t;
extern volatile __CM2CONbits_t CM2CONbits __asm__ ("CM2CON") __attribute__((section("sfrs"), address(0xBF80A010)));
extern volatile uint32_t        CM2CONCLR __attribute__((section("sfrs"),address(0xBF80A014)));
extern volatile uint32_t        CM2CONSET __attribute__((section("sfrs"),address(0xBF80A018)));
extern volatile uint32_t        CM2CONINV __attribute__((section("sfrs"),address(0xBF80A01C)));
#define CM3CON CM3CON
extern volatile uint32_t   CM3CON __attribute__((section("sfrs"), address(0xBF80A020)));
typedef union {
  struct {
    uint32_t CCH:2;
    uint32_t :2;
    uint32_t CREF:1;
    uint32_t :1;
    uint32_t EVPOL:2;
    uint32_t COUT:1;
    uint32_t :4;
    uint32_t CPOL:1;
    uint32_t COE:1;
    uint32_t ON:1;
  };
  struct {
    uint32_t CCH0:1;
    uint32_t CCH1:1;
    uint32_t :4;
    uint32_t EVPOL0:1;
    uint32_t EVPOL1:1;
  };
  struct {
    uint32_t w:32;
  };
} __CM3CONbits_t;
extern volatile __CM3CONbits_t CM3CONbits __asm__ ("CM3CON") __attribute__((section("sfrs"), address(0xBF80A020)));
extern volatile uint32_t        CM3CONCLR __attribute__((section("sfrs"),address(0xBF80A024)));
extern volatile uint32_t        CM3CONSET __attribute__((section("sfrs"),address(0xBF80A028)));
extern volatile uint32_t        CM3CONINV __attribute__((section("sfrs"),address(0xBF80A02C)));
#define CMSTAT CMSTAT
extern volatile uint32_t   CMSTAT __attribute__((section("sfrs"), address(0xBF80A060)));
typedef union {
  struct {
    uint32_t C1OUT:1;
    uint32_t C2OUT:1;
    uint32_t C3OUT:1;
    uint32_t :10;
    uint32_t SIDL:1;
  };
  struct {
    uint32_t w:32;
  };
} __CMSTATbits_t;
extern volatile __CMSTATbits_t CMSTATbits __asm__ ("CMSTAT") __attribute__((section("sfrs"), address(0xBF80A060)));
extern volatile uint32_t        CMSTATCLR __attribute__((section("sfrs"),address(0xBF80A064)));
extern volatile uint32_t        CMSTATSET __attribute__((section("sfrs"),address(0xBF80A068)));
extern volatile uint32_t        CMSTATINV __attribute__((section("sfrs"),address(0xBF80A06C)));
#define CTMUCON CTMUCON
extern volatile uint32_t   CTMUCON __attribute__((section("sfrs"), address(0xBF80A200)));
typedef union {
  struct {
    uint32_t IRNG:2;
    uint32_t ITRIM:6;
    uint32_t CTTRIG:1;
    uint32_t IDISSEN:1;
    uint32_t EDGSEQEN:1;
    uint32_t EDGEN:1;
    uint32_t TGEN:1;
    uint32_t CTMUSIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t :2;
    uint32_t EDG2SEL:4;
    uint32_t EDG2POL:1;
    uint32_t EDG2MOD:1;
    uint32_t EDG1STAT:1;
    uint32_t EDG2STAT:1;
    uint32_t EDG1SEL:4;
    uint32_t EDG1POL:1;
    uint32_t EDG1MOD:1;
  };
  struct {
    uint32_t w:32;
  };
} __CTMUCONbits_t;
extern volatile __CTMUCONbits_t CTMUCONbits __asm__ ("CTMUCON") __attribute__((section("sfrs"), address(0xBF80A200)));
extern volatile uint32_t        CTMUCONCLR __attribute__((section("sfrs"),address(0xBF80A204)));
extern volatile uint32_t        CTMUCONSET __attribute__((section("sfrs"),address(0xBF80A208)));
extern volatile uint32_t        CTMUCONINV __attribute__((section("sfrs"),address(0xBF80A20C)));
#define OSCCON OSCCON
extern volatile uint32_t   OSCCON __attribute__((section("sfrs"), address(0xBF80F000)));
typedef union {
  struct {
    uint32_t OSWEN:1;
    uint32_t SOSCEN:1;
    uint32_t UFRCEN:1;
    uint32_t CF:1;
    uint32_t SLPEN:1;
    uint32_t SLOCK:1;
    uint32_t ULOCK:1;
    uint32_t CLKLOCK:1;
    uint32_t NOSC:3;
    uint32_t :1;
    uint32_t COSC:3;
    uint32_t :1;
    uint32_t PLLMULT:3;
    uint32_t PBDIV:2;
    uint32_t PBDIVRDY:1;
    uint32_t SOSCRDY:1;
    uint32_t :1;
    uint32_t FRCDIV:3;
    uint32_t PLLODIV:3;
  };
  struct {
    uint32_t :8;
    uint32_t NOSC0:1;
    uint32_t NOSC1:1;
    uint32_t NOSC2:1;
    uint32_t :1;
    uint32_t COSC0:1;
    uint32_t COSC1:1;
    uint32_t COSC2:1;
    uint32_t :1;
    uint32_t PLLMULT0:1;
    uint32_t PLLMULT1:1;
    uint32_t PLLMULT2:1;
    uint32_t PBDIV0:1;
    uint32_t PBDIV1:1;
    uint32_t :3;
    uint32_t FRCDIV0:1;
    uint32_t FRCDIV1:1;
    uint32_t FRCDIV2:1;
    uint32_t PLLODIV0:1;
    uint32_t PLLODIV1:1;
    uint32_t PLLODIV2:1;
  };
  struct {
    uint32_t w:32;
  };
} __OSCCONbits_t;
extern volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON") __attribute__((section("sfrs"), address(0xBF80F000)));
extern volatile uint32_t        OSCCONCLR __attribute__((section("sfrs"),address(0xBF80F004)));
extern volatile uint32_t        OSCCONSET __attribute__((section("sfrs"),address(0xBF80F008)));
extern volatile uint32_t        OSCCONINV __attribute__((section("sfrs"),address(0xBF80F00C)));
#define OSCTUN OSCTUN
extern volatile uint32_t   OSCTUN __attribute__((section("sfrs"), address(0xBF80F010)));
typedef union {
  struct {
    uint32_t TUN:6;
  };
  struct {
    uint32_t TUN0:1;
    uint32_t TUN1:1;
    uint32_t TUN2:1;
    uint32_t TUN3:1;
    uint32_t TUN4:1;
    uint32_t TUN5:1;
  };
  struct {
    uint32_t w:32;
  };
} __OSCTUNbits_t;
extern volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN") __attribute__((section("sfrs"), address(0xBF80F010)));
extern volatile uint32_t        OSCTUNCLR __attribute__((section("sfrs"),address(0xBF80F014)));
extern volatile uint32_t        OSCTUNSET __attribute__((section("sfrs"),address(0xBF80F018)));
extern volatile uint32_t        OSCTUNINV __attribute__((section("sfrs"),address(0xBF80F01C)));
#define REFOCON REFOCON
extern volatile uint32_t   REFOCON __attribute__((section("sfrs"), address(0xBF80F020)));
typedef union {
  struct {
    uint32_t ROSEL:4;
    uint32_t :4;
    uint32_t ACTIVE:1;
    uint32_t DIVSWEN:1;
    uint32_t :1;
    uint32_t RSLP:1;
    uint32_t OE:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t RODIV:15;
  };
  struct {
    uint32_t w:32;
  };
} __REFOCONbits_t;
extern volatile __REFOCONbits_t REFOCONbits __asm__ ("REFOCON") __attribute__((section("sfrs"), address(0xBF80F020)));
extern volatile uint32_t        REFOCONCLR __attribute__((section("sfrs"),address(0xBF80F024)));
extern volatile uint32_t        REFOCONSET __attribute__((section("sfrs"),address(0xBF80F028)));
extern volatile uint32_t        REFOCONINV __attribute__((section("sfrs"),address(0xBF80F02C)));
#define REFOTRIM REFOTRIM
extern volatile uint32_t   REFOTRIM __attribute__((section("sfrs"), address(0xBF80F030)));
typedef union {
  struct {
    uint32_t :23;
    uint32_t ROTRIM:9;
  };
  struct {
    uint32_t w:32;
  };
} __REFOTRIMbits_t;
extern volatile __REFOTRIMbits_t REFOTRIMbits __asm__ ("REFOTRIM") __attribute__((section("sfrs"), address(0xBF80F030)));
extern volatile uint32_t        REFOTRIMCLR __attribute__((section("sfrs"),address(0xBF80F034)));
extern volatile uint32_t        REFOTRIMSET __attribute__((section("sfrs"),address(0xBF80F038)));
extern volatile uint32_t        REFOTRIMINV __attribute__((section("sfrs"),address(0xBF80F03C)));
#define CFGCON CFGCON
extern volatile uint32_t   CFGCON __attribute__((section("sfrs"), address(0xBF80F200)));
typedef struct {
  uint32_t TDOEN:1;
  uint32_t :2;
  uint32_t JTAGEN:1;
  uint32_t :8;
  uint32_t PMDLOCK:1;
  uint32_t IOLOCK:1;
} __CFGCONbits_t;
extern volatile __CFGCONbits_t CFGCONbits __asm__ ("CFGCON") __attribute__((section("sfrs"), address(0xBF80F200)));
#define DDPCON DDPCON
extern volatile uint32_t   DDPCON __attribute__((section("sfrs"), address(0xBF80F200)));
typedef struct {
  uint32_t TDOEN:1;
  uint32_t :2;
  uint32_t JTAGEN:1;
  uint32_t :8;
  uint32_t PMDLOCK:1;
  uint32_t IOLOCK:1;
} __DDPCONbits_t;
extern volatile __DDPCONbits_t DDPCONbits __asm__ ("DDPCON") __attribute__((section("sfrs"), address(0xBF80F200)));
#define DEVID DEVID
extern volatile uint32_t   DEVID __attribute__((section("sfrs"), address(0xBF80F220)));
typedef struct {
  uint32_t DEVID:28;
  uint32_t VER:4;
} __DEVIDbits_t;
extern volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID") __attribute__((section("sfrs"), address(0xBF80F220)));
#define SYSKEY SYSKEY
extern volatile uint32_t   SYSKEY __attribute__((section("sfrs"), address(0xBF80F230)));
extern volatile uint32_t        SYSKEYCLR __attribute__((section("sfrs"),address(0xBF80F234)));
extern volatile uint32_t        SYSKEYSET __attribute__((section("sfrs"),address(0xBF80F238)));
extern volatile uint32_t        SYSKEYINV __attribute__((section("sfrs"),address(0xBF80F23C)));
#define PMD1 PMD1
extern volatile uint32_t   PMD1 __attribute__((section("sfrs"), address(0xBF80F240)));
typedef struct {
  uint32_t AD1MD:1;
  uint32_t :7;
  uint32_t CTMUMD:1;
  uint32_t :3;
  uint32_t CVRMD:1;
} __PMD1bits_t;
extern volatile __PMD1bits_t PMD1bits __asm__ ("PMD1") __attribute__((section("sfrs"), address(0xBF80F240)));
extern volatile uint32_t        PMD1CLR __attribute__((section("sfrs"),address(0xBF80F244)));
extern volatile uint32_t        PMD1SET __attribute__((section("sfrs"),address(0xBF80F248)));
extern volatile uint32_t        PMD1INV __attribute__((section("sfrs"),address(0xBF80F24C)));
#define PMD2 PMD2
extern volatile uint32_t   PMD2 __attribute__((section("sfrs"), address(0xBF80F250)));
typedef struct {
  uint32_t CMP1MD:1;
  uint32_t CMP2MD:1;
  uint32_t CMP3MD:1;
} __PMD2bits_t;
extern volatile __PMD2bits_t PMD2bits __asm__ ("PMD2") __attribute__((section("sfrs"), address(0xBF80F250)));
extern volatile uint32_t        PMD2CLR __attribute__((section("sfrs"),address(0xBF80F254)));
extern volatile uint32_t        PMD2SET __attribute__((section("sfrs"),address(0xBF80F258)));
extern volatile uint32_t        PMD2INV __attribute__((section("sfrs"),address(0xBF80F25C)));
#define PMD3 PMD3
extern volatile uint32_t   PMD3 __attribute__((section("sfrs"), address(0xBF80F260)));
typedef struct {
  uint32_t IC1MD:1;
  uint32_t IC2MD:1;
  uint32_t IC3MD:1;
  uint32_t IC4MD:1;
  uint32_t IC5MD:1;
  uint32_t :11;
  uint32_t OC1MD:1;
  uint32_t OC2MD:1;
  uint32_t OC3MD:1;
  uint32_t OC4MD:1;
  uint32_t OC5MD:1;
} __PMD3bits_t;
extern volatile __PMD3bits_t PMD3bits __asm__ ("PMD3") __attribute__((section("sfrs"), address(0xBF80F260)));
extern volatile uint32_t        PMD3CLR __attribute__((section("sfrs"),address(0xBF80F264)));
extern volatile uint32_t        PMD3SET __attribute__((section("sfrs"),address(0xBF80F268)));
extern volatile uint32_t        PMD3INV __attribute__((section("sfrs"),address(0xBF80F26C)));
#define PMD4 PMD4
extern volatile uint32_t   PMD4 __attribute__((section("sfrs"), address(0xBF80F270)));
typedef struct {
  uint32_t T1MD:1;
  uint32_t T2MD:1;
  uint32_t T3MD:1;
  uint32_t T4MD:1;
  uint32_t T5MD:1;
} __PMD4bits_t;
extern volatile __PMD4bits_t PMD4bits __asm__ ("PMD4") __attribute__((section("sfrs"), address(0xBF80F270)));
extern volatile uint32_t        PMD4CLR __attribute__((section("sfrs"),address(0xBF80F274)));
extern volatile uint32_t        PMD4SET __attribute__((section("sfrs"),address(0xBF80F278)));
extern volatile uint32_t        PMD4INV __attribute__((section("sfrs"),address(0xBF80F27C)));
#define PMD5 PMD5
extern volatile uint32_t   PMD5 __attribute__((section("sfrs"), address(0xBF80F280)));
typedef union {
  struct {
    uint32_t U1MD:1;
    uint32_t U2MD:1;
    uint32_t :6;
    uint32_t SPI1MD:1;
    uint32_t SPI2MD:1;
    uint32_t :6;
    uint32_t I2C1MD:1;
    uint32_t I2C2MD:1;
    uint32_t :6;
    uint32_t USB1MD:1;
  };
  struct {
    uint32_t :24;
    uint32_t USBMD:1;
  };
} __PMD5bits_t;
extern volatile __PMD5bits_t PMD5bits __asm__ ("PMD5") __attribute__((section("sfrs"), address(0xBF80F280)));
extern volatile uint32_t        PMD5CLR __attribute__((section("sfrs"),address(0xBF80F284)));
extern volatile uint32_t        PMD5SET __attribute__((section("sfrs"),address(0xBF80F288)));
extern volatile uint32_t        PMD5INV __attribute__((section("sfrs"),address(0xBF80F28C)));
#define PMD6 PMD6
extern volatile uint32_t   PMD6 __attribute__((section("sfrs"), address(0xBF80F290)));
typedef struct {
  uint32_t RTCCMD:1;
  uint32_t REFOMD:1;
  uint32_t :14;
  uint32_t PMPMD:1;
} __PMD6bits_t;
extern volatile __PMD6bits_t PMD6bits __asm__ ("PMD6") __attribute__((section("sfrs"), address(0xBF80F290)));
extern volatile uint32_t        PMD6CLR __attribute__((section("sfrs"),address(0xBF80F294)));
extern volatile uint32_t        PMD6SET __attribute__((section("sfrs"),address(0xBF80F298)));
extern volatile uint32_t        PMD6INV __attribute__((section("sfrs"),address(0xBF80F29C)));
#define NVMCON NVMCON
extern volatile uint32_t   NVMCON __attribute__((section("sfrs"), address(0xBF80F400)));
typedef union {
  struct {
    uint32_t NVMOP:4;
    uint32_t :7;
    uint32_t LVDSTAT:1;
    uint32_t LVDERR:1;
    uint32_t WRERR:1;
    uint32_t WREN:1;
    uint32_t WR:1;
  };
  struct {
    uint32_t NVMOP0:1;
    uint32_t NVMOP1:1;
    uint32_t NVMOP2:1;
    uint32_t NVMOP3:1;
  };
  struct {
    uint32_t PROGOP:4;
  };
  struct {
    uint32_t PROGOP0:1;
    uint32_t PROGOP1:1;
    uint32_t PROGOP2:1;
    uint32_t PROGOP3:1;
  };
  struct {
    uint32_t w:32;
  };
} __NVMCONbits_t;
extern volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON") __attribute__((section("sfrs"), address(0xBF80F400)));
extern volatile uint32_t        NVMCONCLR __attribute__((section("sfrs"),address(0xBF80F404)));
extern volatile uint32_t        NVMCONSET __attribute__((section("sfrs"),address(0xBF80F408)));
extern volatile uint32_t        NVMCONINV __attribute__((section("sfrs"),address(0xBF80F40C)));
#define NVMKEY NVMKEY
extern volatile uint32_t   NVMKEY __attribute__((section("sfrs"), address(0xBF80F410)));
#define NVMADDR NVMADDR
extern volatile uint32_t   NVMADDR __attribute__((section("sfrs"), address(0xBF80F420)));
extern volatile uint32_t        NVMADDRCLR __attribute__((section("sfrs"),address(0xBF80F424)));
extern volatile uint32_t        NVMADDRSET __attribute__((section("sfrs"),address(0xBF80F428)));
extern volatile uint32_t        NVMADDRINV __attribute__((section("sfrs"),address(0xBF80F42C)));
#define NVMDATA NVMDATA
extern volatile uint32_t   NVMDATA __attribute__((section("sfrs"), address(0xBF80F430)));
#define NVMSRCADDR NVMSRCADDR
extern volatile uint32_t   NVMSRCADDR __attribute__((section("sfrs"), address(0xBF80F440)));
#define RCON RCON
extern volatile uint32_t   RCON __attribute__((section("sfrs"), address(0xBF80F600)));
typedef union {
  struct {
    uint32_t POR:1;
    uint32_t BOR:1;
    uint32_t IDLE:1;
    uint32_t SLEEP:1;
    uint32_t WDTO:1;
    uint32_t :1;
    uint32_t SWR:1;
    uint32_t EXTR:1;
    uint32_t VREGS:1;
    uint32_t CMR:1;
  };
  struct {
    uint32_t w:32;
  };
} __RCONbits_t;
extern volatile __RCONbits_t RCONbits __asm__ ("RCON") __attribute__((section("sfrs"), address(0xBF80F600)));
extern volatile uint32_t        RCONCLR __attribute__((section("sfrs"),address(0xBF80F604)));
extern volatile uint32_t        RCONSET __attribute__((section("sfrs"),address(0xBF80F608)));
extern volatile uint32_t        RCONINV __attribute__((section("sfrs"),address(0xBF80F60C)));
#define RSWRST RSWRST
extern volatile uint32_t   RSWRST __attribute__((section("sfrs"), address(0xBF80F610)));
typedef union {
  struct {
    uint32_t SWRST:1;
  };
  struct {
    uint32_t w:32;
  };
} __RSWRSTbits_t;
extern volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST") __attribute__((section("sfrs"), address(0xBF80F610)));
extern volatile uint32_t        RSWRSTCLR __attribute__((section("sfrs"),address(0xBF80F614)));
extern volatile uint32_t        RSWRSTSET __attribute__((section("sfrs"),address(0xBF80F618)));
extern volatile uint32_t        RSWRSTINV __attribute__((section("sfrs"),address(0xBF80F61C)));
#define INT1R INT1R
extern volatile uint32_t   INT1R __attribute__((section("sfrs"), address(0xBF80FA04)));
typedef struct {
  uint32_t INT1R:4;
} __INT1Rbits_t;
extern volatile __INT1Rbits_t INT1Rbits __asm__ ("INT1R") __attribute__((section("sfrs"), address(0xBF80FA04)));
#define INT2R INT2R
extern volatile uint32_t   INT2R __attribute__((section("sfrs"), address(0xBF80FA08)));
typedef struct {
  uint32_t INT2R:4;
} __INT2Rbits_t;
extern volatile __INT2Rbits_t INT2Rbits __asm__ ("INT2R") __attribute__((section("sfrs"), address(0xBF80FA08)));
#define INT3R INT3R
extern volatile uint32_t   INT3R __attribute__((section("sfrs"), address(0xBF80FA0C)));
typedef struct {
  uint32_t INT3R:4;
} __INT3Rbits_t;
extern volatile __INT3Rbits_t INT3Rbits __asm__ ("INT3R") __attribute__((section("sfrs"), address(0xBF80FA0C)));
#define INT4R INT4R
extern volatile uint32_t   INT4R __attribute__((section("sfrs"), address(0xBF80FA10)));
typedef struct {
  uint32_t INT4R:4;
} __INT4Rbits_t;
extern volatile __INT4Rbits_t INT4Rbits __asm__ ("INT4R") __attribute__((section("sfrs"), address(0xBF80FA10)));
#define T2CKR T2CKR
extern volatile uint32_t   T2CKR __attribute__((section("sfrs"), address(0xBF80FA18)));
typedef struct {
  uint32_t T2CKR:4;
} __T2CKRbits_t;
extern volatile __T2CKRbits_t T2CKRbits __asm__ ("T2CKR") __attribute__((section("sfrs"), address(0xBF80FA18)));
#define T3CKR T3CKR
extern volatile uint32_t   T3CKR __attribute__((section("sfrs"), address(0xBF80FA1C)));
typedef struct {
  uint32_t T3CKR:4;
} __T3CKRbits_t;
extern volatile __T3CKRbits_t T3CKRbits __asm__ ("T3CKR") __attribute__((section("sfrs"), address(0xBF80FA1C)));
#define T4CKR T4CKR
extern volatile uint32_t   T4CKR __attribute__((section("sfrs"), address(0xBF80FA20)));
typedef struct {
  uint32_t T4CKR:4;
} __T4CKRbits_t;
extern volatile __T4CKRbits_t T4CKRbits __asm__ ("T4CKR") __attribute__((section("sfrs"), address(0xBF80FA20)));
#define T5CKR T5CKR
extern volatile uint32_t   T5CKR __attribute__((section("sfrs"), address(0xBF80FA24)));
typedef struct {
  uint32_t T5CKR:4;
} __T5CKRbits_t;
extern volatile __T5CKRbits_t T5CKRbits __asm__ ("T5CKR") __attribute__((section("sfrs"), address(0xBF80FA24)));
#define IC1R IC1R
extern volatile uint32_t   IC1R __attribute__((section("sfrs"), address(0xBF80FA28)));
typedef struct {
  uint32_t IC1R:4;
} __IC1Rbits_t;
extern volatile __IC1Rbits_t IC1Rbits __asm__ ("IC1R") __attribute__((section("sfrs"), address(0xBF80FA28)));
#define IC2R IC2R
extern volatile uint32_t   IC2R __attribute__((section("sfrs"), address(0xBF80FA2C)));
typedef struct {
  uint32_t IC2R:4;
} __IC2Rbits_t;
extern volatile __IC2Rbits_t IC2Rbits __asm__ ("IC2R") __attribute__((section("sfrs"), address(0xBF80FA2C)));
#define IC3R IC3R
extern volatile uint32_t   IC3R __attribute__((section("sfrs"), address(0xBF80FA30)));
typedef struct {
  uint32_t IC3R:4;
} __IC3Rbits_t;
extern volatile __IC3Rbits_t IC3Rbits __asm__ ("IC3R") __attribute__((section("sfrs"), address(0xBF80FA30)));
#define IC4R IC4R
extern volatile uint32_t   IC4R __attribute__((section("sfrs"), address(0xBF80FA34)));
typedef struct {
  uint32_t IC4R:4;
} __IC4Rbits_t;
extern volatile __IC4Rbits_t IC4Rbits __asm__ ("IC4R") __attribute__((section("sfrs"), address(0xBF80FA34)));
#define IC5R IC5R
extern volatile uint32_t   IC5R __attribute__((section("sfrs"), address(0xBF80FA38)));
typedef struct {
  uint32_t IC5R:4;
} __IC5Rbits_t;
extern volatile __IC5Rbits_t IC5Rbits __asm__ ("IC5R") __attribute__((section("sfrs"), address(0xBF80FA38)));
#define OCFAR OCFAR
extern volatile uint32_t   OCFAR __attribute__((section("sfrs"), address(0xBF80FA48)));
typedef struct {
  uint32_t OCFAR:4;
} __OCFARbits_t;
extern volatile __OCFARbits_t OCFARbits __asm__ ("OCFAR") __attribute__((section("sfrs"), address(0xBF80FA48)));
#define OCFBR OCFBR
extern volatile uint32_t   OCFBR __attribute__((section("sfrs"), address(0xBF80FA4C)));
typedef struct {
  uint32_t OCFBR:4;
} __OCFBRbits_t;
extern volatile __OCFBRbits_t OCFBRbits __asm__ ("OCFBR") __attribute__((section("sfrs"), address(0xBF80FA4C)));
#define U1RXR U1RXR
extern volatile uint32_t   U1RXR __attribute__((section("sfrs"), address(0xBF80FA50)));
typedef struct {
  uint32_t U1RXR:4;
} __U1RXRbits_t;
extern volatile __U1RXRbits_t U1RXRbits __asm__ ("U1RXR") __attribute__((section("sfrs"), address(0xBF80FA50)));
#define U1CTSR U1CTSR
extern volatile uint32_t   U1CTSR __attribute__((section("sfrs"), address(0xBF80FA54)));
typedef struct {
  uint32_t U1CTSR:4;
} __U1CTSRbits_t;
extern volatile __U1CTSRbits_t U1CTSRbits __asm__ ("U1CTSR") __attribute__((section("sfrs"), address(0xBF80FA54)));
#define U2RXR U2RXR
extern volatile uint32_t   U2RXR __attribute__((section("sfrs"), address(0xBF80FA58)));
typedef struct {
  uint32_t U2RXR:4;
} __U2RXRbits_t;
extern volatile __U2RXRbits_t U2RXRbits __asm__ ("U2RXR") __attribute__((section("sfrs"), address(0xBF80FA58)));
#define U2CTSR U2CTSR
extern volatile uint32_t   U2CTSR __attribute__((section("sfrs"), address(0xBF80FA5C)));
typedef struct {
  uint32_t U2CTSR:4;
} __U2CTSRbits_t;
extern volatile __U2CTSRbits_t U2CTSRbits __asm__ ("U2CTSR") __attribute__((section("sfrs"), address(0xBF80FA5C)));
#define SDI1R SDI1R
extern volatile uint32_t   SDI1R __attribute__((section("sfrs"), address(0xBF80FA84)));
typedef struct {
  uint32_t SDI1R:4;
} __SDI1Rbits_t;
extern volatile __SDI1Rbits_t SDI1Rbits __asm__ ("SDI1R") __attribute__((section("sfrs"), address(0xBF80FA84)));
#define SS1R SS1R
extern volatile uint32_t   SS1R __attribute__((section("sfrs"), address(0xBF80FA88)));
typedef struct {
  uint32_t SS1R:4;
} __SS1Rbits_t;
extern volatile __SS1Rbits_t SS1Rbits __asm__ ("SS1R") __attribute__((section("sfrs"), address(0xBF80FA88)));
#define SDI2R SDI2R
extern volatile uint32_t   SDI2R __attribute__((section("sfrs"), address(0xBF80FA90)));
typedef struct {
  uint32_t SDI2R:4;
} __SDI2Rbits_t;
extern volatile __SDI2Rbits_t SDI2Rbits __asm__ ("SDI2R") __attribute__((section("sfrs"), address(0xBF80FA90)));
#define SS2R SS2R
extern volatile uint32_t   SS2R __attribute__((section("sfrs"), address(0xBF80FA94)));
typedef struct {
  uint32_t SS2R:4;
} __SS2Rbits_t;
extern volatile __SS2Rbits_t SS2Rbits __asm__ ("SS2R") __attribute__((section("sfrs"), address(0xBF80FA94)));
#define REFCLKIR REFCLKIR
extern volatile uint32_t   REFCLKIR __attribute__((section("sfrs"), address(0xBF80FAB8)));
typedef struct {
  uint32_t REFCLKIR:4;
} __REFCLKIRbits_t;
extern volatile __REFCLKIRbits_t REFCLKIRbits __asm__ ("REFCLKIR") __attribute__((section("sfrs"), address(0xBF80FAB8)));
#define RPA0R RPA0R
extern volatile uint32_t   RPA0R __attribute__((section("sfrs"), address(0xBF80FB00)));
typedef struct {
  uint32_t RPA0R:4;
} __RPA0Rbits_t;
extern volatile __RPA0Rbits_t RPA0Rbits __asm__ ("RPA0R") __attribute__((section("sfrs"), address(0xBF80FB00)));
#define RPA1R RPA1R
extern volatile uint32_t   RPA1R __attribute__((section("sfrs"), address(0xBF80FB04)));
typedef struct {
  uint32_t RPA1R:4;
} __RPA1Rbits_t;
extern volatile __RPA1Rbits_t RPA1Rbits __asm__ ("RPA1R") __attribute__((section("sfrs"), address(0xBF80FB04)));
#define RPA2R RPA2R
extern volatile uint32_t   RPA2R __attribute__((section("sfrs"), address(0xBF80FB08)));
typedef struct {
  uint32_t RPA2R:4;
} __RPA2Rbits_t;
extern volatile __RPA2Rbits_t RPA2Rbits __asm__ ("RPA2R") __attribute__((section("sfrs"), address(0xBF80FB08)));
#define RPA3R RPA3R
extern volatile uint32_t   RPA3R __attribute__((section("sfrs"), address(0xBF80FB0C)));
typedef struct {
  uint32_t RPA3R:4;
} __RPA3Rbits_t;
extern volatile __RPA3Rbits_t RPA3Rbits __asm__ ("RPA3R") __attribute__((section("sfrs"), address(0xBF80FB0C)));
#define RPA4R RPA4R
extern volatile uint32_t   RPA4R __attribute__((section("sfrs"), address(0xBF80FB10)));
typedef struct {
  uint32_t RPA4R:4;
} __RPA4Rbits_t;
extern volatile __RPA4Rbits_t RPA4Rbits __asm__ ("RPA4R") __attribute__((section("sfrs"), address(0xBF80FB10)));
#define RPA8R RPA8R
extern volatile uint32_t   RPA8R __attribute__((section("sfrs"), address(0xBF80FB20)));
typedef struct {
  uint32_t RPA8R:4;
} __RPA8Rbits_t;
extern volatile __RPA8Rbits_t RPA8Rbits __asm__ ("RPA8R") __attribute__((section("sfrs"), address(0xBF80FB20)));
#define RPA9R RPA9R
extern volatile uint32_t   RPA9R __attribute__((section("sfrs"), address(0xBF80FB24)));
typedef struct {
  uint32_t RPA9R:4;
} __RPA9Rbits_t;
extern volatile __RPA9Rbits_t RPA9Rbits __asm__ ("RPA9R") __attribute__((section("sfrs"), address(0xBF80FB24)));
#define RPB0R RPB0R
extern volatile uint32_t   RPB0R __attribute__((section("sfrs"), address(0xBF80FB2C)));
typedef struct {
  uint32_t RPB0R:4;
} __RPB0Rbits_t;
extern volatile __RPB0Rbits_t RPB0Rbits __asm__ ("RPB0R") __attribute__((section("sfrs"), address(0xBF80FB2C)));
#define RPB1R RPB1R
extern volatile uint32_t   RPB1R __attribute__((section("sfrs"), address(0xBF80FB30)));
typedef struct {
  uint32_t RPB1R:4;
} __RPB1Rbits_t;
extern volatile __RPB1Rbits_t RPB1Rbits __asm__ ("RPB1R") __attribute__((section("sfrs"), address(0xBF80FB30)));
#define RPB2R RPB2R
extern volatile uint32_t   RPB2R __attribute__((section("sfrs"), address(0xBF80FB34)));
typedef struct {
  uint32_t RPB2R:4;
} __RPB2Rbits_t;
extern volatile __RPB2Rbits_t RPB2Rbits __asm__ ("RPB2R") __attribute__((section("sfrs"), address(0xBF80FB34)));
#define RPB3R RPB3R
extern volatile uint32_t   RPB3R __attribute__((section("sfrs"), address(0xBF80FB38)));
typedef struct {
  uint32_t RPB3R:4;
} __RPB3Rbits_t;
extern volatile __RPB3Rbits_t RPB3Rbits __asm__ ("RPB3R") __attribute__((section("sfrs"), address(0xBF80FB38)));
#define RPB4R RPB4R
extern volatile uint32_t   RPB4R __attribute__((section("sfrs"), address(0xBF80FB3C)));
typedef struct {
  uint32_t RPB4R:4;
} __RPB4Rbits_t;
extern volatile __RPB4Rbits_t RPB4Rbits __asm__ ("RPB4R") __attribute__((section("sfrs"), address(0xBF80FB3C)));
#define RPB5R RPB5R
extern volatile uint32_t   RPB5R __attribute__((section("sfrs"), address(0xBF80FB40)));
typedef struct {
  uint32_t RPB5R:4;
} __RPB5Rbits_t;
extern volatile __RPB5Rbits_t RPB5Rbits __asm__ ("RPB5R") __attribute__((section("sfrs"), address(0xBF80FB40)));
#define RPB7R RPB7R
extern volatile uint32_t   RPB7R __attribute__((section("sfrs"), address(0xBF80FB48)));
typedef struct {
  uint32_t RPB7R:4;
} __RPB7Rbits_t;
extern volatile __RPB7Rbits_t RPB7Rbits __asm__ ("RPB7R") __attribute__((section("sfrs"), address(0xBF80FB48)));
#define RPB8R RPB8R
extern volatile uint32_t   RPB8R __attribute__((section("sfrs"), address(0xBF80FB4C)));
typedef struct {
  uint32_t RPB8R:4;
} __RPB8Rbits_t;
extern volatile __RPB8Rbits_t RPB8Rbits __asm__ ("RPB8R") __attribute__((section("sfrs"), address(0xBF80FB4C)));
#define RPB9R RPB9R
extern volatile uint32_t   RPB9R __attribute__((section("sfrs"), address(0xBF80FB50)));
typedef struct {
  uint32_t RPB9R:4;
} __RPB9Rbits_t;
extern volatile __RPB9Rbits_t RPB9Rbits __asm__ ("RPB9R") __attribute__((section("sfrs"), address(0xBF80FB50)));
#define RPB10R RPB10R
extern volatile uint32_t   RPB10R __attribute__((section("sfrs"), address(0xBF80FB54)));
typedef struct {
  uint32_t RPB10R:4;
} __RPB10Rbits_t;
extern volatile __RPB10Rbits_t RPB10Rbits __asm__ ("RPB10R") __attribute__((section("sfrs"), address(0xBF80FB54)));
#define RPB11R RPB11R
extern volatile uint32_t   RPB11R __attribute__((section("sfrs"), address(0xBF80FB58)));
typedef struct {
  uint32_t RPB11R:4;
} __RPB11Rbits_t;
extern volatile __RPB11Rbits_t RPB11Rbits __asm__ ("RPB11R") __attribute__((section("sfrs"), address(0xBF80FB58)));
#define RPB13R RPB13R
extern volatile uint32_t   RPB13R __attribute__((section("sfrs"), address(0xBF80FB60)));
typedef struct {
  uint32_t RPB13R:4;
} __RPB13Rbits_t;
extern volatile __RPB13Rbits_t RPB13Rbits __asm__ ("RPB13R") __attribute__((section("sfrs"), address(0xBF80FB60)));
#define RPB14R RPB14R
extern volatile uint32_t   RPB14R __attribute__((section("sfrs"), address(0xBF80FB64)));
typedef struct {
  uint32_t RPB14R:4;
} __RPB14Rbits_t;
extern volatile __RPB14Rbits_t RPB14Rbits __asm__ ("RPB14R") __attribute__((section("sfrs"), address(0xBF80FB64)));
#define RPB15R RPB15R
extern volatile uint32_t   RPB15R __attribute__((section("sfrs"), address(0xBF80FB68)));
typedef struct {
  uint32_t RPB15R:4;
} __RPB15Rbits_t;
extern volatile __RPB15Rbits_t RPB15Rbits __asm__ ("RPB15R") __attribute__((section("sfrs"), address(0xBF80FB68)));
#define RPC0R RPC0R
extern volatile uint32_t   RPC0R __attribute__((section("sfrs"), address(0xBF80FB6C)));
typedef struct {
  uint32_t RPC0R:4;
} __RPC0Rbits_t;
extern volatile __RPC0Rbits_t RPC0Rbits __asm__ ("RPC0R") __attribute__((section("sfrs"), address(0xBF80FB6C)));
#define RPC1R RPC1R
extern volatile uint32_t   RPC1R __attribute__((section("sfrs"), address(0xBF80FB70)));
typedef struct {
  uint32_t RPC1R:4;
} __RPC1Rbits_t;
extern volatile __RPC1Rbits_t RPC1Rbits __asm__ ("RPC1R") __attribute__((section("sfrs"), address(0xBF80FB70)));
#define RPC2R RPC2R
extern volatile uint32_t   RPC2R __attribute__((section("sfrs"), address(0xBF80FB74)));
typedef struct {
  uint32_t RPC2R:4;
} __RPC2Rbits_t;
extern volatile __RPC2Rbits_t RPC2Rbits __asm__ ("RPC2R") __attribute__((section("sfrs"), address(0xBF80FB74)));
#define RPC3R RPC3R
extern volatile uint32_t   RPC3R __attribute__((section("sfrs"), address(0xBF80FB78)));
typedef struct {
  uint32_t RPC3R:4;
} __RPC3Rbits_t;
extern volatile __RPC3Rbits_t RPC3Rbits __asm__ ("RPC3R") __attribute__((section("sfrs"), address(0xBF80FB78)));
#define RPC4R RPC4R
extern volatile uint32_t   RPC4R __attribute__((section("sfrs"), address(0xBF80FB7C)));
typedef struct {
  uint32_t RPC4R:4;
} __RPC4Rbits_t;
extern volatile __RPC4Rbits_t RPC4Rbits __asm__ ("RPC4R") __attribute__((section("sfrs"), address(0xBF80FB7C)));
#define RPC5R RPC5R
extern volatile uint32_t   RPC5R __attribute__((section("sfrs"), address(0xBF80FB80)));
typedef struct {
  uint32_t RPC5R:4;
} __RPC5Rbits_t;
extern volatile __RPC5Rbits_t RPC5Rbits __asm__ ("RPC5R") __attribute__((section("sfrs"), address(0xBF80FB80)));
#define RPC6R RPC6R
extern volatile uint32_t   RPC6R __attribute__((section("sfrs"), address(0xBF80FB84)));
typedef struct {
  uint32_t RPC6R:4;
} __RPC6Rbits_t;
extern volatile __RPC6Rbits_t RPC6Rbits __asm__ ("RPC6R") __attribute__((section("sfrs"), address(0xBF80FB84)));
#define RPC7R RPC7R
extern volatile uint32_t   RPC7R __attribute__((section("sfrs"), address(0xBF80FB88)));
typedef struct {
  uint32_t RPC7R:4;
} __RPC7Rbits_t;
extern volatile __RPC7Rbits_t RPC7Rbits __asm__ ("RPC7R") __attribute__((section("sfrs"), address(0xBF80FB88)));
#define RPC8R RPC8R
extern volatile uint32_t   RPC8R __attribute__((section("sfrs"), address(0xBF80FB8C)));
typedef struct {
  uint32_t RPC8R:4;
} __RPC8Rbits_t;
extern volatile __RPC8Rbits_t RPC8Rbits __asm__ ("RPC8R") __attribute__((section("sfrs"), address(0xBF80FB8C)));
#define RPC9R RPC9R
extern volatile uint32_t   RPC9R __attribute__((section("sfrs"), address(0xBF80FB90)));
typedef struct {
  uint32_t RPC9R:4;
} __RPC9Rbits_t;
extern volatile __RPC9Rbits_t RPC9Rbits __asm__ ("RPC9R") __attribute__((section("sfrs"), address(0xBF80FB90)));
#define INTCON INTCON
extern volatile uint32_t   INTCON __attribute__((section("sfrs"), address(0xBF881000)));
typedef union {
  struct {
    uint32_t INT0EP:1;
    uint32_t INT1EP:1;
    uint32_t INT2EP:1;
    uint32_t INT3EP:1;
    uint32_t INT4EP:1;
    uint32_t :3;
    uint32_t TPC:3;
    uint32_t :1;
    uint32_t MVEC:1;
    uint32_t :3;
    uint32_t SS0:1;
  };
  struct {
    uint32_t w:32;
  };
} __INTCONbits_t;
extern volatile __INTCONbits_t INTCONbits __asm__ ("INTCON") __attribute__((section("sfrs"), address(0xBF881000)));
extern volatile uint32_t        INTCONCLR __attribute__((section("sfrs"),address(0xBF881004)));
extern volatile uint32_t        INTCONSET __attribute__((section("sfrs"),address(0xBF881008)));
extern volatile uint32_t        INTCONINV __attribute__((section("sfrs"),address(0xBF88100C)));
#define INTSTAT INTSTAT
extern volatile uint32_t   INTSTAT __attribute__((section("sfrs"), address(0xBF881010)));
typedef struct {
  uint32_t VEC:6;
  uint32_t :2;
  uint32_t SRIPL:3;
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT") __attribute__((section("sfrs"), address(0xBF881010)));
#define IPTMR IPTMR
extern volatile uint32_t   IPTMR __attribute__((section("sfrs"), address(0xBF881020)));
extern volatile uint32_t        IPTMRCLR __attribute__((section("sfrs"),address(0xBF881024)));
extern volatile uint32_t        IPTMRSET __attribute__((section("sfrs"),address(0xBF881028)));
extern volatile uint32_t        IPTMRINV __attribute__((section("sfrs"),address(0xBF88102C)));
#define IFS0 IFS0
extern volatile uint32_t   IFS0 __attribute__((section("sfrs"), address(0xBF881030)));
typedef union {
  struct {
    uint32_t CTIF:1;
    uint32_t CS0IF:1;
    uint32_t CS1IF:1;
    uint32_t INT0IF:1;
    uint32_t T1IF:1;
    uint32_t IC1EIF:1;
    uint32_t IC1IF:1;
    uint32_t OC1IF:1;
    uint32_t INT1IF:1;
    uint32_t T2IF:1;
    uint32_t IC2EIF:1;
    uint32_t IC2IF:1;
    uint32_t OC2IF:1;
    uint32_t INT2IF:1;
    uint32_t T3IF:1;
    uint32_t IC3EIF:1;
    uint32_t IC3IF:1;
    uint32_t OC3IF:1;
    uint32_t INT3IF:1;
    uint32_t T4IF:1;
    uint32_t IC4EIF:1;
    uint32_t IC4IF:1;
    uint32_t OC4IF:1;
    uint32_t INT4IF:1;
    uint32_t T5IF:1;
    uint32_t IC5EIF:1;
    uint32_t IC5IF:1;
    uint32_t OC5IF:1;
    uint32_t AD1IF:1;
    uint32_t FSCMIF:1;
    uint32_t RTCCIF:1;
    uint32_t FCEIF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS0bits_t;
extern volatile __IFS0bits_t IFS0bits __asm__ ("IFS0") __attribute__((section("sfrs"), address(0xBF881030)));
extern volatile uint32_t        IFS0CLR __attribute__((section("sfrs"),address(0xBF881034)));
extern volatile uint32_t        IFS0SET __attribute__((section("sfrs"),address(0xBF881038)));
extern volatile uint32_t        IFS0INV __attribute__((section("sfrs"),address(0xBF88103C)));
#define IFS1 IFS1
extern volatile uint32_t   IFS1 __attribute__((section("sfrs"), address(0xBF881040)));
typedef union {
  struct {
    uint32_t CMP1IF:1;
    uint32_t CMP2IF:1;
    uint32_t CMP3IF:1;
    uint32_t USBIF:1;
    uint32_t SPI1EIF:1;
    uint32_t SPI1RXIF:1;
    uint32_t SPI1TXIF:1;
    uint32_t U1EIF:1;
    uint32_t U1RXIF:1;
    uint32_t U1TXIF:1;
    uint32_t I2C1BIF:1;
    uint32_t I2C1SIF:1;
    uint32_t I2C1MIF:1;
    uint32_t CNAIF:1;
    uint32_t CNBIF:1;
    uint32_t CNCIF:1;
    uint32_t PMPIF:1;
    uint32_t PMPEIF:1;
    uint32_t SPI2EIF:1;
    uint32_t SPI2RXIF:1;
    uint32_t SPI2TXIF:1;
    uint32_t U2EIF:1;
    uint32_t U2RXIF:1;
    uint32_t U2TXIF:1;
    uint32_t I2C2BIF:1;
    uint32_t I2C2SIF:1;
    uint32_t I2C2MIF:1;
    uint32_t CTMUIF:1;
    uint32_t DMA0IF:1;
    uint32_t DMA1IF:1;
    uint32_t DMA2IF:1;
    uint32_t DMA3IF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS1bits_t;
extern volatile __IFS1bits_t IFS1bits __asm__ ("IFS1") __attribute__((section("sfrs"), address(0xBF881040)));
extern volatile uint32_t        IFS1CLR __attribute__((section("sfrs"),address(0xBF881044)));
extern volatile uint32_t        IFS1SET __attribute__((section("sfrs"),address(0xBF881048)));
extern volatile uint32_t        IFS1INV __attribute__((section("sfrs"),address(0xBF88104C)));
#define IEC0 IEC0
extern volatile uint32_t   IEC0 __attribute__((section("sfrs"), address(0xBF881060)));
typedef union {
  struct {
    uint32_t CTIE:1;
    uint32_t CS0IE:1;
    uint32_t CS1IE:1;
    uint32_t INT0IE:1;
    uint32_t T1IE:1;
    uint32_t IC1EIE:1;
    uint32_t IC1IE:1;
    uint32_t OC1IE:1;
    uint32_t INT1IE:1;
    uint32_t T2IE:1;
    uint32_t IC2EIE:1;
    uint32_t IC2IE:1;
    uint32_t OC2IE:1;
    uint32_t INT2IE:1;
    uint32_t T3IE:1;
    uint32_t IC3EIE:1;
    uint32_t IC3IE:1;
    uint32_t OC3IE:1;
    uint32_t INT3IE:1;
    uint32_t T4IE:1;
    uint32_t IC4EIE:1;
    uint32_t IC4IE:1;
    uint32_t OC4IE:1;
    uint32_t INT4IE:1;
    uint32_t T5IE:1;
    uint32_t IC5EIE:1;
    uint32_t IC5IE:1;
    uint32_t OC5IE:1;
    uint32_t AD1IE:1;
    uint32_t FSCMIE:1;
    uint32_t RTCCIE:1;
    uint32_t FCEIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC0bits_t;
extern volatile __IEC0bits_t IEC0bits __asm__ ("IEC0") __attribute__((section("sfrs"), address(0xBF881060)));
extern volatile uint32_t        IEC0CLR __attribute__((section("sfrs"),address(0xBF881064)));
extern volatile uint32_t        IEC0SET __attribute__((section("sfrs"),address(0xBF881068)));
extern volatile uint32_t        IEC0INV __attribute__((section("sfrs"),address(0xBF88106C)));
#define IEC1 IEC1
extern volatile uint32_t   IEC1 __attribute__((section("sfrs"), address(0xBF881070)));
typedef union {
  struct {
    uint32_t CMP1IE:1;
    uint32_t CMP2IE:1;
    uint32_t CMP3IE:1;
    uint32_t USBIE:1;
    uint32_t SPI1EIE:1;
    uint32_t SPI1RXIE:1;
    uint32_t SPI1TXIE:1;
    uint32_t U1EIE:1;
    uint32_t U1RXIE:1;
    uint32_t U1TXIE:1;
    uint32_t I2C1BIE:1;
    uint32_t I2C1SIE:1;
    uint32_t I2C1MIE:1;
    uint32_t CNAIE:1;
    uint32_t CNBIE:1;
    uint32_t CNCIE:1;
    uint32_t PMPIE:1;
    uint32_t PMPEIE:1;
    uint32_t SPI2EIE:1;
    uint32_t SPI2RXIE:1;
    uint32_t SPI2TXIE:1;
    uint32_t U2EIE:1;
    uint32_t U2RXIE:1;
    uint32_t U2TXIE:1;
    uint32_t I2C2BIE:1;
    uint32_t I2C2SIE:1;
    uint32_t I2C2MIE:1;
    uint32_t CTMUIE:1;
    uint32_t DMA0IE:1;
    uint32_t DMA1IE:1;
    uint32_t DMA2IE:1;
    uint32_t DMA3IE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC1bits_t;
extern volatile __IEC1bits_t IEC1bits __asm__ ("IEC1") __attribute__((section("sfrs"), address(0xBF881070)));
extern volatile uint32_t        IEC1CLR __attribute__((section("sfrs"),address(0xBF881074)));
extern volatile uint32_t        IEC1SET __attribute__((section("sfrs"),address(0xBF881078)));
extern volatile uint32_t        IEC1INV __attribute__((section("sfrs"),address(0xBF88107C)));
#define IPC0 IPC0
extern volatile uint32_t   IPC0 __attribute__((section("sfrs"), address(0xBF881090)));
typedef union {
  struct {
    uint32_t CTIS:2;
    uint32_t CTIP:3;
    uint32_t :3;
    uint32_t CS0IS:2;
    uint32_t CS0IP:3;
    uint32_t :3;
    uint32_t CS1IS:2;
    uint32_t CS1IP:3;
    uint32_t :3;
    uint32_t INT0IS:2;
    uint32_t INT0IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC0bits_t;
extern volatile __IPC0bits_t IPC0bits __asm__ ("IPC0") __attribute__((section("sfrs"), address(0xBF881090)));
extern volatile uint32_t        IPC0CLR __attribute__((section("sfrs"),address(0xBF881094)));
extern volatile uint32_t        IPC0SET __attribute__((section("sfrs"),address(0xBF881098)));
extern volatile uint32_t        IPC0INV __attribute__((section("sfrs"),address(0xBF88109C)));
#define IPC1 IPC1
extern volatile uint32_t   IPC1 __attribute__((section("sfrs"), address(0xBF8810A0)));
typedef union {
  struct {
    uint32_t T1IS:2;
    uint32_t T1IP:3;
    uint32_t :3;
    uint32_t IC1IS:2;
    uint32_t IC1IP:3;
    uint32_t :3;
    uint32_t OC1IS:2;
    uint32_t OC1IP:3;
    uint32_t :3;
    uint32_t INT1IS:2;
    uint32_t INT1IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC1bits_t;
extern volatile __IPC1bits_t IPC1bits __asm__ ("IPC1") __attribute__((section("sfrs"), address(0xBF8810A0)));
extern volatile uint32_t        IPC1CLR __attribute__((section("sfrs"),address(0xBF8810A4)));
extern volatile uint32_t        IPC1SET __attribute__((section("sfrs"),address(0xBF8810A8)));
extern volatile uint32_t        IPC1INV __attribute__((section("sfrs"),address(0xBF8810AC)));
#define IPC2 IPC2
extern volatile uint32_t   IPC2 __attribute__((section("sfrs"), address(0xBF8810B0)));
typedef union {
  struct {
    uint32_t T2IS:2;
    uint32_t T2IP:3;
    uint32_t :3;
    uint32_t IC2IS:2;
    uint32_t IC2IP:3;
    uint32_t :3;
    uint32_t OC2IS:2;
    uint32_t OC2IP:3;
    uint32_t :3;
    uint32_t INT2IS:2;
    uint32_t INT2IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC2bits_t;
extern volatile __IPC2bits_t IPC2bits __asm__ ("IPC2") __attribute__((section("sfrs"), address(0xBF8810B0)));
extern volatile uint32_t        IPC2CLR __attribute__((section("sfrs"),address(0xBF8810B4)));
extern volatile uint32_t        IPC2SET __attribute__((section("sfrs"),address(0xBF8810B8)));
extern volatile uint32_t        IPC2INV __attribute__((section("sfrs"),address(0xBF8810BC)));
#define IPC3 IPC3
extern volatile uint32_t   IPC3 __attribute__((section("sfrs"), address(0xBF8810C0)));
typedef union {
  struct {
    uint32_t T3IS:2;
    uint32_t T3IP:3;
    uint32_t :3;
    uint32_t IC3IS:2;
    uint32_t IC3IP:3;
    uint32_t :3;
    uint32_t OC3IS:2;
    uint32_t OC3IP:3;
    uint32_t :3;
    uint32_t INT3IS:2;
    uint32_t INT3IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC3bits_t;
extern volatile __IPC3bits_t IPC3bits __asm__ ("IPC3") __attribute__((section("sfrs"), address(0xBF8810C0)));
extern volatile uint32_t        IPC3CLR __attribute__((section("sfrs"),address(0xBF8810C4)));
extern volatile uint32_t        IPC3SET __attribute__((section("sfrs"),address(0xBF8810C8)));
extern volatile uint32_t        IPC3INV __attribute__((section("sfrs"),address(0xBF8810CC)));
#define IPC4 IPC4
extern volatile uint32_t   IPC4 __attribute__((section("sfrs"), address(0xBF8810D0)));
typedef union {
  struct {
    uint32_t T4IS:2;
    uint32_t T4IP:3;
    uint32_t :3;
    uint32_t IC4IS:2;
    uint32_t IC4IP:3;
    uint32_t :3;
    uint32_t OC4IS:2;
    uint32_t OC4IP:3;
    uint32_t :3;
    uint32_t INT4IS:2;
    uint32_t INT4IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC4bits_t;
extern volatile __IPC4bits_t IPC4bits __asm__ ("IPC4") __attribute__((section("sfrs"), address(0xBF8810D0)));
extern volatile uint32_t        IPC4CLR __attribute__((section("sfrs"),address(0xBF8810D4)));
extern volatile uint32_t        IPC4SET __attribute__((section("sfrs"),address(0xBF8810D8)));
extern volatile uint32_t        IPC4INV __attribute__((section("sfrs"),address(0xBF8810DC)));
#define IPC5 IPC5
extern volatile uint32_t   IPC5 __attribute__((section("sfrs"), address(0xBF8810E0)));
typedef union {
  struct {
    uint32_t T5IS:2;
    uint32_t T5IP:3;
    uint32_t :3;
    uint32_t IC5IS:2;
    uint32_t IC5IP:3;
    uint32_t :3;
    uint32_t OC5IS:2;
    uint32_t OC5IP:3;
    uint32_t :3;
    uint32_t AD1IS:2;
    uint32_t AD1IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC5bits_t;
extern volatile __IPC5bits_t IPC5bits __asm__ ("IPC5") __attribute__((section("sfrs"), address(0xBF8810E0)));
extern volatile uint32_t        IPC5CLR __attribute__((section("sfrs"),address(0xBF8810E4)));
extern volatile uint32_t        IPC5SET __attribute__((section("sfrs"),address(0xBF8810E8)));
extern volatile uint32_t        IPC5INV __attribute__((section("sfrs"),address(0xBF8810EC)));
#define IPC6 IPC6
extern volatile uint32_t   IPC6 __attribute__((section("sfrs"), address(0xBF8810F0)));
typedef union {
  struct {
    uint32_t FSCMIS:2;
    uint32_t FSCMIP:3;
    uint32_t :3;
    uint32_t RTCCIS:2;
    uint32_t RTCCIP:3;
    uint32_t :3;
    uint32_t FCEIS:2;
    uint32_t FCEIP:3;
    uint32_t :3;
    uint32_t CMP1IS:2;
    uint32_t CMP1IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC6bits_t;
extern volatile __IPC6bits_t IPC6bits __asm__ ("IPC6") __attribute__((section("sfrs"), address(0xBF8810F0)));
extern volatile uint32_t        IPC6CLR __attribute__((section("sfrs"),address(0xBF8810F4)));
extern volatile uint32_t        IPC6SET __attribute__((section("sfrs"),address(0xBF8810F8)));
extern volatile uint32_t        IPC6INV __attribute__((section("sfrs"),address(0xBF8810FC)));
#define IPC7 IPC7
extern volatile uint32_t   IPC7 __attribute__((section("sfrs"), address(0xBF881100)));
typedef union {
  struct {
    uint32_t CMP2IS:2;
    uint32_t CMP2IP:3;
    uint32_t :3;
    uint32_t CMP3IS:2;
    uint32_t CMP3IP:3;
    uint32_t :3;
    uint32_t USBIS:2;
    uint32_t USBIP:3;
    uint32_t :3;
    uint32_t SPI1IS:2;
    uint32_t SPI1IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC7bits_t;
extern volatile __IPC7bits_t IPC7bits __asm__ ("IPC7") __attribute__((section("sfrs"), address(0xBF881100)));
extern volatile uint32_t        IPC7CLR __attribute__((section("sfrs"),address(0xBF881104)));
extern volatile uint32_t        IPC7SET __attribute__((section("sfrs"),address(0xBF881108)));
extern volatile uint32_t        IPC7INV __attribute__((section("sfrs"),address(0xBF88110C)));
#define IPC8 IPC8
extern volatile uint32_t   IPC8 __attribute__((section("sfrs"), address(0xBF881110)));
typedef union {
  struct {
    uint32_t U1IS:2;
    uint32_t U1IP:3;
    uint32_t :3;
    uint32_t I2C1IS:2;
    uint32_t I2C1IP:3;
    uint32_t :3;
    uint32_t CNIS:2;
    uint32_t CNIP:3;
    uint32_t :3;
    uint32_t PMPIS:2;
    uint32_t PMPIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC8bits_t;
extern volatile __IPC8bits_t IPC8bits __asm__ ("IPC8") __attribute__((section("sfrs"), address(0xBF881110)));
extern volatile uint32_t        IPC8CLR __attribute__((section("sfrs"),address(0xBF881114)));
extern volatile uint32_t        IPC8SET __attribute__((section("sfrs"),address(0xBF881118)));
extern volatile uint32_t        IPC8INV __attribute__((section("sfrs"),address(0xBF88111C)));
#define IPC9 IPC9
extern volatile uint32_t   IPC9 __attribute__((section("sfrs"), address(0xBF881120)));
typedef union {
  struct {
    uint32_t SPI2IS:2;
    uint32_t SPI2IP:3;
    uint32_t :3;
    uint32_t U2IS:2;
    uint32_t U2IP:3;
    uint32_t :3;
    uint32_t I2C2IS:2;
    uint32_t I2C2IP:3;
    uint32_t :3;
    uint32_t CTMUIS:2;
    uint32_t CTMUIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC9bits_t;
extern volatile __IPC9bits_t IPC9bits __asm__ ("IPC9") __attribute__((section("sfrs"), address(0xBF881120)));
extern volatile uint32_t        IPC9CLR __attribute__((section("sfrs"),address(0xBF881124)));
extern volatile uint32_t        IPC9SET __attribute__((section("sfrs"),address(0xBF881128)));
extern volatile uint32_t        IPC9INV __attribute__((section("sfrs"),address(0xBF88112C)));
#define IPC10 IPC10
extern volatile uint32_t   IPC10 __attribute__((section("sfrs"), address(0xBF881130)));
typedef union {
  struct {
    uint32_t DMA0IS:2;
    uint32_t DMA0IP:3;
    uint32_t :3;
    uint32_t DMA1IS:2;
    uint32_t DMA1IP:3;
    uint32_t :3;
    uint32_t DMA2IS:2;
    uint32_t DMA2IP:3;
    uint32_t :3;
    uint32_t DMA3IS:2;
    uint32_t DMA3IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC10bits_t;
extern volatile __IPC10bits_t IPC10bits __asm__ ("IPC10") __attribute__((section("sfrs"), address(0xBF881130)));
extern volatile uint32_t        IPC10CLR __attribute__((section("sfrs"),address(0xBF881134)));
extern volatile uint32_t        IPC10SET __attribute__((section("sfrs"),address(0xBF881138)));
extern volatile uint32_t        IPC10INV __attribute__((section("sfrs"),address(0xBF88113C)));
#define BMXCON BMXCON
extern volatile uint32_t   BMXCON __attribute__((section("sfrs"), address(0xBF882000)));
typedef union {
  struct {
    uint32_t BMXARB:3;
    uint32_t :3;
    uint32_t BMXWSDRM:1;
    uint32_t :9;
    uint32_t BMXERRIS:1;
    uint32_t BMXERRDS:1;
    uint32_t BMXERRDMA:1;
    uint32_t BMXERRICD:1;
    uint32_t BMXERRIXI:1;
    uint32_t :5;
    uint32_t BMXCHEDMA:1;
  };
  struct {
    uint32_t w:32;
  };
} __BMXCONbits_t;
extern volatile __BMXCONbits_t BMXCONbits __asm__ ("BMXCON") __attribute__((section("sfrs"), address(0xBF882000)));
extern volatile uint32_t        BMXCONCLR __attribute__((section("sfrs"),address(0xBF882004)));
extern volatile uint32_t        BMXCONSET __attribute__((section("sfrs"),address(0xBF882008)));
extern volatile uint32_t        BMXCONINV __attribute__((section("sfrs"),address(0xBF88200C)));
#define BMXDKPBA BMXDKPBA
extern volatile uint32_t   BMXDKPBA __attribute__((section("sfrs"), address(0xBF882010)));
extern volatile uint32_t        BMXDKPBACLR __attribute__((section("sfrs"),address(0xBF882014)));
extern volatile uint32_t        BMXDKPBASET __attribute__((section("sfrs"),address(0xBF882018)));
extern volatile uint32_t        BMXDKPBAINV __attribute__((section("sfrs"),address(0xBF88201C)));
#define BMXDUDBA BMXDUDBA
extern volatile uint32_t   BMXDUDBA __attribute__((section("sfrs"), address(0xBF882020)));
extern volatile uint32_t        BMXDUDBACLR __attribute__((section("sfrs"),address(0xBF882024)));
extern volatile uint32_t        BMXDUDBASET __attribute__((section("sfrs"),address(0xBF882028)));
extern volatile uint32_t        BMXDUDBAINV __attribute__((section("sfrs"),address(0xBF88202C)));
#define BMXDUPBA BMXDUPBA
extern volatile uint32_t   BMXDUPBA __attribute__((section("sfrs"), address(0xBF882030)));
extern volatile uint32_t        BMXDUPBACLR __attribute__((section("sfrs"),address(0xBF882034)));
extern volatile uint32_t        BMXDUPBASET __attribute__((section("sfrs"),address(0xBF882038)));
extern volatile uint32_t        BMXDUPBAINV __attribute__((section("sfrs"),address(0xBF88203C)));
#define BMXDRMSZ BMXDRMSZ
extern volatile uint32_t   BMXDRMSZ __attribute__((section("sfrs"), address(0xBF882040)));
#define BMXPUPBA BMXPUPBA
extern volatile uint32_t   BMXPUPBA __attribute__((section("sfrs"), address(0xBF882050)));
extern volatile uint32_t        BMXPUPBACLR __attribute__((section("sfrs"),address(0xBF882054)));
extern volatile uint32_t        BMXPUPBASET __attribute__((section("sfrs"),address(0xBF882058)));
extern volatile uint32_t        BMXPUPBAINV __attribute__((section("sfrs"),address(0xBF88205C)));
#define BMXPFMSZ BMXPFMSZ
extern volatile uint32_t   BMXPFMSZ __attribute__((section("sfrs"), address(0xBF882060)));
#define BMXBOOTSZ BMXBOOTSZ
extern volatile uint32_t   BMXBOOTSZ __attribute__((section("sfrs"), address(0xBF882070)));
#define DMACON DMACON
extern volatile uint32_t   DMACON __attribute__((section("sfrs"), address(0xBF883000)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t DMABUSY:1;
    uint32_t SUSPEND:1;
    uint32_t :2;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __DMACONbits_t;
extern volatile __DMACONbits_t DMACONbits __asm__ ("DMACON") __attribute__((section("sfrs"), address(0xBF883000)));
extern volatile uint32_t        DMACONCLR __attribute__((section("sfrs"),address(0xBF883004)));
extern volatile uint32_t        DMACONSET __attribute__((section("sfrs"),address(0xBF883008)));
extern volatile uint32_t        DMACONINV __attribute__((section("sfrs"),address(0xBF88300C)));
#define DMASTAT DMASTAT
extern volatile uint32_t   DMASTAT __attribute__((section("sfrs"), address(0xBF883010)));
typedef union {
  struct {
    uint32_t DMACH:3;
    uint32_t RDWR:1;
  };
  struct {
    uint32_t w:32;
  };
} __DMASTATbits_t;
extern volatile __DMASTATbits_t DMASTATbits __asm__ ("DMASTAT") __attribute__((section("sfrs"), address(0xBF883010)));
extern volatile uint32_t        DMASTATCLR __attribute__((section("sfrs"),address(0xBF883014)));
extern volatile uint32_t        DMASTATSET __attribute__((section("sfrs"),address(0xBF883018)));
extern volatile uint32_t        DMASTATINV __attribute__((section("sfrs"),address(0xBF88301C)));
#define DMAADDR DMAADDR
extern volatile uint32_t   DMAADDR __attribute__((section("sfrs"), address(0xBF883020)));
extern volatile uint32_t        DMAADDRCLR __attribute__((section("sfrs"),address(0xBF883024)));
extern volatile uint32_t        DMAADDRSET __attribute__((section("sfrs"),address(0xBF883028)));
extern volatile uint32_t        DMAADDRINV __attribute__((section("sfrs"),address(0xBF88302C)));
#define DCRCCON DCRCCON
extern volatile uint32_t   DCRCCON __attribute__((section("sfrs"), address(0xBF883030)));
typedef union {
  struct {
    uint32_t CRCCH:3;
    uint32_t :2;
    uint32_t CRCTYP:1;
    uint32_t CRCAPP:1;
    uint32_t CRCEN:1;
    uint32_t PLEN:5;
    uint32_t :11;
    uint32_t BITO:1;
    uint32_t :2;
    uint32_t WBO:1;
    uint32_t BYTO:2;
  };
  struct {
    uint32_t w:32;
  };
} __DCRCCONbits_t;
extern volatile __DCRCCONbits_t DCRCCONbits __asm__ ("DCRCCON") __attribute__((section("sfrs"), address(0xBF883030)));
extern volatile uint32_t        DCRCCONCLR __attribute__((section("sfrs"),address(0xBF883034)));
extern volatile uint32_t        DCRCCONSET __attribute__((section("sfrs"),address(0xBF883038)));
extern volatile uint32_t        DCRCCONINV __attribute__((section("sfrs"),address(0xBF88303C)));
#define DCRCDATA DCRCDATA
extern volatile uint32_t   DCRCDATA __attribute__((section("sfrs"), address(0xBF883040)));
extern volatile uint32_t        DCRCDATACLR __attribute__((section("sfrs"),address(0xBF883044)));
extern volatile uint32_t        DCRCDATASET __attribute__((section("sfrs"),address(0xBF883048)));
extern volatile uint32_t        DCRCDATAINV __attribute__((section("sfrs"),address(0xBF88304C)));
#define DCRCXOR DCRCXOR
extern volatile uint32_t   DCRCXOR __attribute__((section("sfrs"), address(0xBF883050)));
extern volatile uint32_t        DCRCXORCLR __attribute__((section("sfrs"),address(0xBF883054)));
extern volatile uint32_t        DCRCXORSET __attribute__((section("sfrs"),address(0xBF883058)));
extern volatile uint32_t        DCRCXORINV __attribute__((section("sfrs"),address(0xBF88305C)));
#define DCH0CON DCH0CON
extern volatile uint32_t   DCH0CON __attribute__((section("sfrs"), address(0xBF883060)));
typedef union {
  struct {
    uint32_t CHPRI:2;
    uint32_t CHEDET:1;
    uint32_t :1;
    uint32_t CHAEN:1;
    uint32_t CHCHN:1;
    uint32_t CHAED:1;
    uint32_t CHEN:1;
    uint32_t CHCHNS:1;
    uint32_t :6;
    uint32_t CHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH0CONbits_t;
extern volatile __DCH0CONbits_t DCH0CONbits __asm__ ("DCH0CON") __attribute__((section("sfrs"), address(0xBF883060)));
extern volatile uint32_t        DCH0CONCLR __attribute__((section("sfrs"),address(0xBF883064)));
extern volatile uint32_t        DCH0CONSET __attribute__((section("sfrs"),address(0xBF883068)));
extern volatile uint32_t        DCH0CONINV __attribute__((section("sfrs"),address(0xBF88306C)));
#define DCH0ECON DCH0ECON
extern volatile uint32_t   DCH0ECON __attribute__((section("sfrs"), address(0xBF883070)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t AIRQEN:1;
    uint32_t SIRQEN:1;
    uint32_t PATEN:1;
    uint32_t CABORT:1;
    uint32_t CFORCE:1;
    uint32_t CHSIRQ:8;
    uint32_t CHAIRQ:8;
  };
  struct {
    uint32_t w:32;
  };
} __DCH0ECONbits_t;
extern volatile __DCH0ECONbits_t DCH0ECONbits __asm__ ("DCH0ECON") __attribute__((section("sfrs"), address(0xBF883070)));
extern volatile uint32_t        DCH0ECONCLR __attribute__((section("sfrs"),address(0xBF883074)));
extern volatile uint32_t        DCH0ECONSET __attribute__((section("sfrs"),address(0xBF883078)));
extern volatile uint32_t        DCH0ECONINV __attribute__((section("sfrs"),address(0xBF88307C)));
#define DCH0INT DCH0INT
extern volatile uint32_t   DCH0INT __attribute__((section("sfrs"), address(0xBF883080)));
typedef union {
  struct {
    uint32_t CHERIF:1;
    uint32_t CHTAIF:1;
    uint32_t CHCCIF:1;
    uint32_t CHBCIF:1;
    uint32_t CHDHIF:1;
    uint32_t CHDDIF:1;
    uint32_t CHSHIF:1;
    uint32_t CHSDIF:1;
    uint32_t :8;
    uint32_t CHERIE:1;
    uint32_t CHTAIE:1;
    uint32_t CHCCIE:1;
    uint32_t CHBCIE:1;
    uint32_t CHDHIE:1;
    uint32_t CHDDIE:1;
    uint32_t CHSHIE:1;
    uint32_t CHSDIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH0INTbits_t;
extern volatile __DCH0INTbits_t DCH0INTbits __asm__ ("DCH0INT") __attribute__((section("sfrs"), address(0xBF883080)));
extern volatile uint32_t        DCH0INTCLR __attribute__((section("sfrs"),address(0xBF883084)));
extern volatile uint32_t        DCH0INTSET __attribute__((section("sfrs"),address(0xBF883088)));
extern volatile uint32_t        DCH0INTINV __attribute__((section("sfrs"),address(0xBF88308C)));
#define DCH0SSA DCH0SSA
extern volatile uint32_t   DCH0SSA __attribute__((section("sfrs"), address(0xBF883090)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH0SSAbits_t;
extern volatile __DCH0SSAbits_t DCH0SSAbits __asm__ ("DCH0SSA") __attribute__((section("sfrs"), address(0xBF883090)));
extern volatile uint32_t        DCH0SSACLR __attribute__((section("sfrs"),address(0xBF883094)));
extern volatile uint32_t        DCH0SSASET __attribute__((section("sfrs"),address(0xBF883098)));
extern volatile uint32_t        DCH0SSAINV __attribute__((section("sfrs"),address(0xBF88309C)));
#define DCH0DSA DCH0DSA
extern volatile uint32_t   DCH0DSA __attribute__((section("sfrs"), address(0xBF8830A0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH0DSAbits_t;
extern volatile __DCH0DSAbits_t DCH0DSAbits __asm__ ("DCH0DSA") __attribute__((section("sfrs"), address(0xBF8830A0)));
extern volatile uint32_t        DCH0DSACLR __attribute__((section("sfrs"),address(0xBF8830A4)));
extern volatile uint32_t        DCH0DSASET __attribute__((section("sfrs"),address(0xBF8830A8)));
extern volatile uint32_t        DCH0DSAINV __attribute__((section("sfrs"),address(0xBF8830AC)));
#define DCH0SSIZ DCH0SSIZ
extern volatile uint32_t   DCH0SSIZ __attribute__((section("sfrs"), address(0xBF8830B0)));
extern volatile uint32_t        DCH0SSIZCLR __attribute__((section("sfrs"),address(0xBF8830B4)));
extern volatile uint32_t        DCH0SSIZSET __attribute__((section("sfrs"),address(0xBF8830B8)));
extern volatile uint32_t        DCH0SSIZINV __attribute__((section("sfrs"),address(0xBF8830BC)));
#define DCH0DSIZ DCH0DSIZ
extern volatile uint32_t   DCH0DSIZ __attribute__((section("sfrs"), address(0xBF8830C0)));
extern volatile uint32_t        DCH0DSIZCLR __attribute__((section("sfrs"),address(0xBF8830C4)));
extern volatile uint32_t        DCH0DSIZSET __attribute__((section("sfrs"),address(0xBF8830C8)));
extern volatile uint32_t        DCH0DSIZINV __attribute__((section("sfrs"),address(0xBF8830CC)));
#define DCH0SPTR DCH0SPTR
extern volatile uint32_t   DCH0SPTR __attribute__((section("sfrs"), address(0xBF8830D0)));
extern volatile uint32_t        DCH0SPTRCLR __attribute__((section("sfrs"),address(0xBF8830D4)));
extern volatile uint32_t        DCH0SPTRSET __attribute__((section("sfrs"),address(0xBF8830D8)));
extern volatile uint32_t        DCH0SPTRINV __attribute__((section("sfrs"),address(0xBF8830DC)));
#define DCH0DPTR DCH0DPTR
extern volatile uint32_t   DCH0DPTR __attribute__((section("sfrs"), address(0xBF8830E0)));
extern volatile uint32_t        DCH0DPTRCLR __attribute__((section("sfrs"),address(0xBF8830E4)));
extern volatile uint32_t        DCH0DPTRSET __attribute__((section("sfrs"),address(0xBF8830E8)));
extern volatile uint32_t        DCH0DPTRINV __attribute__((section("sfrs"),address(0xBF8830EC)));
#define DCH0CSIZ DCH0CSIZ
extern volatile uint32_t   DCH0CSIZ __attribute__((section("sfrs"), address(0xBF8830F0)));
extern volatile uint32_t        DCH0CSIZCLR __attribute__((section("sfrs"),address(0xBF8830F4)));
extern volatile uint32_t        DCH0CSIZSET __attribute__((section("sfrs"),address(0xBF8830F8)));
extern volatile uint32_t        DCH0CSIZINV __attribute__((section("sfrs"),address(0xBF8830FC)));
#define DCH0CPTR DCH0CPTR
extern volatile uint32_t   DCH0CPTR __attribute__((section("sfrs"), address(0xBF883100)));
extern volatile uint32_t        DCH0CPTRCLR __attribute__((section("sfrs"),address(0xBF883104)));
extern volatile uint32_t        DCH0CPTRSET __attribute__((section("sfrs"),address(0xBF883108)));
extern volatile uint32_t        DCH0CPTRINV __attribute__((section("sfrs"),address(0xBF88310C)));
#define DCH0DAT DCH0DAT
extern volatile uint32_t   DCH0DAT __attribute__((section("sfrs"), address(0xBF883110)));
extern volatile uint32_t        DCH0DATCLR __attribute__((section("sfrs"),address(0xBF883114)));
extern volatile uint32_t        DCH0DATSET __attribute__((section("sfrs"),address(0xBF883118)));
extern volatile uint32_t        DCH0DATINV __attribute__((section("sfrs"),address(0xBF88311C)));
#define DCH1CON DCH1CON
extern volatile uint32_t   DCH1CON __attribute__((section("sfrs"), address(0xBF883120)));
typedef union {
  struct {
    uint32_t CHPRI:2;
    uint32_t CHEDET:1;
    uint32_t :1;
    uint32_t CHAEN:1;
    uint32_t CHCHN:1;
    uint32_t CHAED:1;
    uint32_t CHEN:1;
    uint32_t CHCHNS:1;
    uint32_t :6;
    uint32_t CHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH1CONbits_t;
extern volatile __DCH1CONbits_t DCH1CONbits __asm__ ("DCH1CON") __attribute__((section("sfrs"), address(0xBF883120)));
extern volatile uint32_t        DCH1CONCLR __attribute__((section("sfrs"),address(0xBF883124)));
extern volatile uint32_t        DCH1CONSET __attribute__((section("sfrs"),address(0xBF883128)));
extern volatile uint32_t        DCH1CONINV __attribute__((section("sfrs"),address(0xBF88312C)));
#define DCH1ECON DCH1ECON
extern volatile uint32_t   DCH1ECON __attribute__((section("sfrs"), address(0xBF883130)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t AIRQEN:1;
    uint32_t SIRQEN:1;
    uint32_t PATEN:1;
    uint32_t CABORT:1;
    uint32_t CFORCE:1;
    uint32_t CHSIRQ:8;
    uint32_t CHAIRQ:8;
  };
  struct {
    uint32_t w:32;
  };
} __DCH1ECONbits_t;
extern volatile __DCH1ECONbits_t DCH1ECONbits __asm__ ("DCH1ECON") __attribute__((section("sfrs"), address(0xBF883130)));
extern volatile uint32_t        DCH1ECONCLR __attribute__((section("sfrs"),address(0xBF883134)));
extern volatile uint32_t        DCH1ECONSET __attribute__((section("sfrs"),address(0xBF883138)));
extern volatile uint32_t        DCH1ECONINV __attribute__((section("sfrs"),address(0xBF88313C)));
#define DCH1INT DCH1INT
extern volatile uint32_t   DCH1INT __attribute__((section("sfrs"), address(0xBF883140)));
typedef union {
  struct {
    uint32_t CHERIF:1;
    uint32_t CHTAIF:1;
    uint32_t CHCCIF:1;
    uint32_t CHBCIF:1;
    uint32_t CHDHIF:1;
    uint32_t CHDDIF:1;
    uint32_t CHSHIF:1;
    uint32_t CHSDIF:1;
    uint32_t :8;
    uint32_t CHERIE:1;
    uint32_t CHTAIE:1;
    uint32_t CHCCIE:1;
    uint32_t CHBCIE:1;
    uint32_t CHDHIE:1;
    uint32_t CHDDIE:1;
    uint32_t CHSHIE:1;
    uint32_t CHSDIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH1INTbits_t;
extern volatile __DCH1INTbits_t DCH1INTbits __asm__ ("DCH1INT") __attribute__((section("sfrs"), address(0xBF883140)));
extern volatile uint32_t        DCH1INTCLR __attribute__((section("sfrs"),address(0xBF883144)));
extern volatile uint32_t        DCH1INTSET __attribute__((section("sfrs"),address(0xBF883148)));
extern volatile uint32_t        DCH1INTINV __attribute__((section("sfrs"),address(0xBF88314C)));
#define DCH1SSA DCH1SSA
extern volatile uint32_t   DCH1SSA __attribute__((section("sfrs"), address(0xBF883150)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH1SSAbits_t;
extern volatile __DCH1SSAbits_t DCH1SSAbits __asm__ ("DCH1SSA") __attribute__((section("sfrs"), address(0xBF883150)));
extern volatile uint32_t        DCH1SSACLR __attribute__((section("sfrs"),address(0xBF883154)));
extern volatile uint32_t        DCH1SSASET __attribute__((section("sfrs"),address(0xBF883158)));
extern volatile uint32_t        DCH1SSAINV __attribute__((section("sfrs"),address(0xBF88315C)));
#define DCH1DSA DCH1DSA
extern volatile uint32_t   DCH1DSA __attribute__((section("sfrs"), address(0xBF883160)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH1DSAbits_t;
extern volatile __DCH1DSAbits_t DCH1DSAbits __asm__ ("DCH1DSA") __attribute__((section("sfrs"), address(0xBF883160)));
extern volatile uint32_t        DCH1DSACLR __attribute__((section("sfrs"),address(0xBF883164)));
extern volatile uint32_t        DCH1DSASET __attribute__((section("sfrs"),address(0xBF883168)));
extern volatile uint32_t        DCH1DSAINV __attribute__((section("sfrs"),address(0xBF88316C)));
#define DCH1SSIZ DCH1SSIZ
extern volatile uint32_t   DCH1SSIZ __attribute__((section("sfrs"), address(0xBF883170)));
extern volatile uint32_t        DCH1SSIZCLR __attribute__((section("sfrs"),address(0xBF883174)));
extern volatile uint32_t        DCH1SSIZSET __attribute__((section("sfrs"),address(0xBF883178)));
extern volatile uint32_t        DCH1SSIZINV __attribute__((section("sfrs"),address(0xBF88317C)));
#define DCH1DSIZ DCH1DSIZ
extern volatile uint32_t   DCH1DSIZ __attribute__((section("sfrs"), address(0xBF883180)));
extern volatile uint32_t        DCH1DSIZCLR __attribute__((section("sfrs"),address(0xBF883184)));
extern volatile uint32_t        DCH1DSIZSET __attribute__((section("sfrs"),address(0xBF883188)));
extern volatile uint32_t        DCH1DSIZINV __attribute__((section("sfrs"),address(0xBF88318C)));
#define DCH1SPTR DCH1SPTR
extern volatile uint32_t   DCH1SPTR __attribute__((section("sfrs"), address(0xBF883190)));
extern volatile uint32_t        DCH1SPTRCLR __attribute__((section("sfrs"),address(0xBF883194)));
extern volatile uint32_t        DCH1SPTRSET __attribute__((section("sfrs"),address(0xBF883198)));
extern volatile uint32_t        DCH1SPTRINV __attribute__((section("sfrs"),address(0xBF88319C)));
#define DCH1DPTR DCH1DPTR
extern volatile uint32_t   DCH1DPTR __attribute__((section("sfrs"), address(0xBF8831A0)));
extern volatile uint32_t        DCH1DPTRCLR __attribute__((section("sfrs"),address(0xBF8831A4)));
extern volatile uint32_t        DCH1DPTRSET __attribute__((section("sfrs"),address(0xBF8831A8)));
extern volatile uint32_t        DCH1DPTRINV __attribute__((section("sfrs"),address(0xBF8831AC)));
#define DCH1CSIZ DCH1CSIZ
extern volatile uint32_t   DCH1CSIZ __attribute__((section("sfrs"), address(0xBF8831B0)));
extern volatile uint32_t        DCH1CSIZCLR __attribute__((section("sfrs"),address(0xBF8831B4)));
extern volatile uint32_t        DCH1CSIZSET __attribute__((section("sfrs"),address(0xBF8831B8)));
extern volatile uint32_t        DCH1CSIZINV __attribute__((section("sfrs"),address(0xBF8831BC)));
#define DCH1CPTR DCH1CPTR
extern volatile uint32_t   DCH1CPTR __attribute__((section("sfrs"), address(0xBF8831C0)));
extern volatile uint32_t        DCH1CPTRCLR __attribute__((section("sfrs"),address(0xBF8831C4)));
extern volatile uint32_t        DCH1CPTRSET __attribute__((section("sfrs"),address(0xBF8831C8)));
extern volatile uint32_t        DCH1CPTRINV __attribute__((section("sfrs"),address(0xBF8831CC)));
#define DCH1DAT DCH1DAT
extern volatile uint32_t   DCH1DAT __attribute__((section("sfrs"), address(0xBF8831D0)));
extern volatile uint32_t        DCH1DATCLR __attribute__((section("sfrs"),address(0xBF8831D4)));
extern volatile uint32_t        DCH1DATSET __attribute__((section("sfrs"),address(0xBF8831D8)));
extern volatile uint32_t        DCH1DATINV __attribute__((section("sfrs"),address(0xBF8831DC)));
#define DCH2CON DCH2CON
extern volatile uint32_t   DCH2CON __attribute__((section("sfrs"), address(0xBF8831E0)));
typedef union {
  struct {
    uint32_t CHPRI:2;
    uint32_t CHEDET:1;
    uint32_t :1;
    uint32_t CHAEN:1;
    uint32_t CHCHN:1;
    uint32_t CHAED:1;
    uint32_t CHEN:1;
    uint32_t CHCHNS:1;
    uint32_t :6;
    uint32_t CHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH2CONbits_t;
extern volatile __DCH2CONbits_t DCH2CONbits __asm__ ("DCH2CON") __attribute__((section("sfrs"), address(0xBF8831E0)));
extern volatile uint32_t        DCH2CONCLR __attribute__((section("sfrs"),address(0xBF8831E4)));
extern volatile uint32_t        DCH2CONSET __attribute__((section("sfrs"),address(0xBF8831E8)));
extern volatile uint32_t        DCH2CONINV __attribute__((section("sfrs"),address(0xBF8831EC)));
#define DCH2ECON DCH2ECON
extern volatile uint32_t   DCH2ECON __attribute__((section("sfrs"), address(0xBF8831F0)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t AIRQEN:1;
    uint32_t SIRQEN:1;
    uint32_t PATEN:1;
    uint32_t CABORT:1;
    uint32_t CFORCE:1;
    uint32_t CHSIRQ:8;
    uint32_t CHAIRQ:8;
  };
  struct {
    uint32_t w:32;
  };
} __DCH2ECONbits_t;
extern volatile __DCH2ECONbits_t DCH2ECONbits __asm__ ("DCH2ECON") __attribute__((section("sfrs"), address(0xBF8831F0)));
extern volatile uint32_t        DCH2ECONCLR __attribute__((section("sfrs"),address(0xBF8831F4)));
extern volatile uint32_t        DCH2ECONSET __attribute__((section("sfrs"),address(0xBF8831F8)));
extern volatile uint32_t        DCH2ECONINV __attribute__((section("sfrs"),address(0xBF8831FC)));
#define DCH2INT DCH2INT
extern volatile uint32_t   DCH2INT __attribute__((section("sfrs"), address(0xBF883200)));
typedef union {
  struct {
    uint32_t CHERIF:1;
    uint32_t CHTAIF:1;
    uint32_t CHCCIF:1;
    uint32_t CHBCIF:1;
    uint32_t CHDHIF:1;
    uint32_t CHDDIF:1;
    uint32_t CHSHIF:1;
    uint32_t CHSDIF:1;
    uint32_t :8;
    uint32_t CHERIE:1;
    uint32_t CHTAIE:1;
    uint32_t CHCCIE:1;
    uint32_t CHBCIE:1;
    uint32_t CHDHIE:1;
    uint32_t CHDDIE:1;
    uint32_t CHSHIE:1;
    uint32_t CHSDIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH2INTbits_t;
extern volatile __DCH2INTbits_t DCH2INTbits __asm__ ("DCH2INT") __attribute__((section("sfrs"), address(0xBF883200)));
extern volatile uint32_t        DCH2INTCLR __attribute__((section("sfrs"),address(0xBF883204)));
extern volatile uint32_t        DCH2INTSET __attribute__((section("sfrs"),address(0xBF883208)));
extern volatile uint32_t        DCH2INTINV __attribute__((section("sfrs"),address(0xBF88320C)));
#define DCH2SSA DCH2SSA
extern volatile uint32_t   DCH2SSA __attribute__((section("sfrs"), address(0xBF883210)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH2SSAbits_t;
extern volatile __DCH2SSAbits_t DCH2SSAbits __asm__ ("DCH2SSA") __attribute__((section("sfrs"), address(0xBF883210)));
extern volatile uint32_t        DCH2SSACLR __attribute__((section("sfrs"),address(0xBF883214)));
extern volatile uint32_t        DCH2SSASET __attribute__((section("sfrs"),address(0xBF883218)));
extern volatile uint32_t        DCH2SSAINV __attribute__((section("sfrs"),address(0xBF88321C)));
#define DCH2DSA DCH2DSA
extern volatile uint32_t   DCH2DSA __attribute__((section("sfrs"), address(0xBF883220)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH2DSAbits_t;
extern volatile __DCH2DSAbits_t DCH2DSAbits __asm__ ("DCH2DSA") __attribute__((section("sfrs"), address(0xBF883220)));
extern volatile uint32_t        DCH2DSACLR __attribute__((section("sfrs"),address(0xBF883224)));
extern volatile uint32_t        DCH2DSASET __attribute__((section("sfrs"),address(0xBF883228)));
extern volatile uint32_t        DCH2DSAINV __attribute__((section("sfrs"),address(0xBF88322C)));
#define DCH2SSIZ DCH2SSIZ
extern volatile uint32_t   DCH2SSIZ __attribute__((section("sfrs"), address(0xBF883230)));
extern volatile uint32_t        DCH2SSIZCLR __attribute__((section("sfrs"),address(0xBF883234)));
extern volatile uint32_t        DCH2SSIZSET __attribute__((section("sfrs"),address(0xBF883238)));
extern volatile uint32_t        DCH2SSIZINV __attribute__((section("sfrs"),address(0xBF88323C)));
#define DCH2DSIZ DCH2DSIZ
extern volatile uint32_t   DCH2DSIZ __attribute__((section("sfrs"), address(0xBF883240)));
extern volatile uint32_t        DCH2DSIZCLR __attribute__((section("sfrs"),address(0xBF883244)));
extern volatile uint32_t        DCH2DSIZSET __attribute__((section("sfrs"),address(0xBF883248)));
extern volatile uint32_t        DCH2DSIZINV __attribute__((section("sfrs"),address(0xBF88324C)));
#define DCH2SPTR DCH2SPTR
extern volatile uint32_t   DCH2SPTR __attribute__((section("sfrs"), address(0xBF883250)));
extern volatile uint32_t        DCH2SPTRCLR __attribute__((section("sfrs"),address(0xBF883254)));
extern volatile uint32_t        DCH2SPTRSET __attribute__((section("sfrs"),address(0xBF883258)));
extern volatile uint32_t        DCH2SPTRINV __attribute__((section("sfrs"),address(0xBF88325C)));
#define DCH2DPTR DCH2DPTR
extern volatile uint32_t   DCH2DPTR __attribute__((section("sfrs"), address(0xBF883260)));
extern volatile uint32_t        DCH2DPTRCLR __attribute__((section("sfrs"),address(0xBF883264)));
extern volatile uint32_t        DCH2DPTRSET __attribute__((section("sfrs"),address(0xBF883268)));
extern volatile uint32_t        DCH2DPTRINV __attribute__((section("sfrs"),address(0xBF88326C)));
#define DCH2CSIZ DCH2CSIZ
extern volatile uint32_t   DCH2CSIZ __attribute__((section("sfrs"), address(0xBF883270)));
extern volatile uint32_t        DCH2CSIZCLR __attribute__((section("sfrs"),address(0xBF883274)));
extern volatile uint32_t        DCH2CSIZSET __attribute__((section("sfrs"),address(0xBF883278)));
extern volatile uint32_t        DCH2CSIZINV __attribute__((section("sfrs"),address(0xBF88327C)));
#define DCH2CPTR DCH2CPTR
extern volatile uint32_t   DCH2CPTR __attribute__((section("sfrs"), address(0xBF883280)));
extern volatile uint32_t        DCH2CPTRCLR __attribute__((section("sfrs"),address(0xBF883284)));
extern volatile uint32_t        DCH2CPTRSET __attribute__((section("sfrs"),address(0xBF883288)));
extern volatile uint32_t        DCH2CPTRINV __attribute__((section("sfrs"),address(0xBF88328C)));
#define DCH2DAT DCH2DAT
extern volatile uint32_t   DCH2DAT __attribute__((section("sfrs"), address(0xBF883290)));
extern volatile uint32_t        DCH2DATCLR __attribute__((section("sfrs"),address(0xBF883294)));
extern volatile uint32_t        DCH2DATSET __attribute__((section("sfrs"),address(0xBF883298)));
extern volatile uint32_t        DCH2DATINV __attribute__((section("sfrs"),address(0xBF88329C)));
#define DCH3CON DCH3CON
extern volatile uint32_t   DCH3CON __attribute__((section("sfrs"), address(0xBF8832A0)));
typedef union {
  struct {
    uint32_t CHPRI:2;
    uint32_t CHEDET:1;
    uint32_t :1;
    uint32_t CHAEN:1;
    uint32_t CHCHN:1;
    uint32_t CHAED:1;
    uint32_t CHEN:1;
    uint32_t CHCHNS:1;
    uint32_t :6;
    uint32_t CHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH3CONbits_t;
extern volatile __DCH3CONbits_t DCH3CONbits __asm__ ("DCH3CON") __attribute__((section("sfrs"), address(0xBF8832A0)));
extern volatile uint32_t        DCH3CONCLR __attribute__((section("sfrs"),address(0xBF8832A4)));
extern volatile uint32_t        DCH3CONSET __attribute__((section("sfrs"),address(0xBF8832A8)));
extern volatile uint32_t        DCH3CONINV __attribute__((section("sfrs"),address(0xBF8832AC)));
#define DCH3ECON DCH3ECON
extern volatile uint32_t   DCH3ECON __attribute__((section("sfrs"), address(0xBF8832B0)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t AIRQEN:1;
    uint32_t SIRQEN:1;
    uint32_t PATEN:1;
    uint32_t CABORT:1;
    uint32_t CFORCE:1;
    uint32_t CHSIRQ:8;
    uint32_t CHAIRQ:8;
  };
  struct {
    uint32_t w:32;
  };
} __DCH3ECONbits_t;
extern volatile __DCH3ECONbits_t DCH3ECONbits __asm__ ("DCH3ECON") __attribute__((section("sfrs"), address(0xBF8832B0)));
extern volatile uint32_t        DCH3ECONCLR __attribute__((section("sfrs"),address(0xBF8832B4)));
extern volatile uint32_t        DCH3ECONSET __attribute__((section("sfrs"),address(0xBF8832B8)));
extern volatile uint32_t        DCH3ECONINV __attribute__((section("sfrs"),address(0xBF8832BC)));
#define DCH3INT DCH3INT
extern volatile uint32_t   DCH3INT __attribute__((section("sfrs"), address(0xBF8832C0)));
typedef union {
  struct {
    uint32_t CHERIF:1;
    uint32_t CHTAIF:1;
    uint32_t CHCCIF:1;
    uint32_t CHBCIF:1;
    uint32_t CHDHIF:1;
    uint32_t CHDDIF:1;
    uint32_t CHSHIF:1;
    uint32_t CHSDIF:1;
    uint32_t :8;
    uint32_t CHERIE:1;
    uint32_t CHTAIE:1;
    uint32_t CHCCIE:1;
    uint32_t CHBCIE:1;
    uint32_t CHDHIE:1;
    uint32_t CHDDIE:1;
    uint32_t CHSHIE:1;
    uint32_t CHSDIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH3INTbits_t;
extern volatile __DCH3INTbits_t DCH3INTbits __asm__ ("DCH3INT") __attribute__((section("sfrs"), address(0xBF8832C0)));
extern volatile uint32_t        DCH3INTCLR __attribute__((section("sfrs"),address(0xBF8832C4)));
extern volatile uint32_t        DCH3INTSET __attribute__((section("sfrs"),address(0xBF8832C8)));
extern volatile uint32_t        DCH3INTINV __attribute__((section("sfrs"),address(0xBF8832CC)));
#define DCH3SSA DCH3SSA
extern volatile uint32_t   DCH3SSA __attribute__((section("sfrs"), address(0xBF8832D0)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH3SSAbits_t;
extern volatile __DCH3SSAbits_t DCH3SSAbits __asm__ ("DCH3SSA") __attribute__((section("sfrs"), address(0xBF8832D0)));
extern volatile uint32_t        DCH3SSACLR __attribute__((section("sfrs"),address(0xBF8832D4)));
extern volatile uint32_t        DCH3SSASET __attribute__((section("sfrs"),address(0xBF8832D8)));
extern volatile uint32_t        DCH3SSAINV __attribute__((section("sfrs"),address(0xBF8832DC)));
#define DCH3DSA DCH3DSA
extern volatile uint32_t   DCH3DSA __attribute__((section("sfrs"), address(0xBF8832E0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH3DSAbits_t;
extern volatile __DCH3DSAbits_t DCH3DSAbits __asm__ ("DCH3DSA") __attribute__((section("sfrs"), address(0xBF8832E0)));
extern volatile uint32_t        DCH3DSACLR __attribute__((section("sfrs"),address(0xBF8832E4)));
extern volatile uint32_t        DCH3DSASET __attribute__((section("sfrs"),address(0xBF8832E8)));
extern volatile uint32_t        DCH3DSAINV __attribute__((section("sfrs"),address(0xBF8832EC)));
#define DCH3SSIZ DCH3SSIZ
extern volatile uint32_t   DCH3SSIZ __attribute__((section("sfrs"), address(0xBF8832F0)));
extern volatile uint32_t        DCH3SSIZCLR __attribute__((section("sfrs"),address(0xBF8832F4)));
extern volatile uint32_t        DCH3SSIZSET __attribute__((section("sfrs"),address(0xBF8832F8)));
extern volatile uint32_t        DCH3SSIZINV __attribute__((section("sfrs"),address(0xBF8832FC)));
#define DCH3DSIZ DCH3DSIZ
extern volatile uint32_t   DCH3DSIZ __attribute__((section("sfrs"), address(0xBF883300)));
extern volatile uint32_t        DCH3DSIZCLR __attribute__((section("sfrs"),address(0xBF883304)));
extern volatile uint32_t        DCH3DSIZSET __attribute__((section("sfrs"),address(0xBF883308)));
extern volatile uint32_t        DCH3DSIZINV __attribute__((section("sfrs"),address(0xBF88330C)));
#define DCH3SPTR DCH3SPTR
extern volatile uint32_t   DCH3SPTR __attribute__((section("sfrs"), address(0xBF883310)));
extern volatile uint32_t        DCH3SPTRCLR __attribute__((section("sfrs"),address(0xBF883314)));
extern volatile uint32_t        DCH3SPTRSET __attribute__((section("sfrs"),address(0xBF883318)));
extern volatile uint32_t        DCH3SPTRINV __attribute__((section("sfrs"),address(0xBF88331C)));
#define DCH3DPTR DCH3DPTR
extern volatile uint32_t   DCH3DPTR __attribute__((section("sfrs"), address(0xBF883320)));
extern volatile uint32_t        DCH3DPTRCLR __attribute__((section("sfrs"),address(0xBF883324)));
extern volatile uint32_t        DCH3DPTRSET __attribute__((section("sfrs"),address(0xBF883328)));
extern volatile uint32_t        DCH3DPTRINV __attribute__((section("sfrs"),address(0xBF88332C)));
#define DCH3CSIZ DCH3CSIZ
extern volatile uint32_t   DCH3CSIZ __attribute__((section("sfrs"), address(0xBF883330)));
extern volatile uint32_t        DCH3CSIZCLR __attribute__((section("sfrs"),address(0xBF883334)));
extern volatile uint32_t        DCH3CSIZSET __attribute__((section("sfrs"),address(0xBF883338)));
extern volatile uint32_t        DCH3CSIZINV __attribute__((section("sfrs"),address(0xBF88333C)));
#define DCH3CPTR DCH3CPTR
extern volatile uint32_t   DCH3CPTR __attribute__((section("sfrs"), address(0xBF883340)));
extern volatile uint32_t        DCH3CPTRCLR __attribute__((section("sfrs"),address(0xBF883344)));
extern volatile uint32_t        DCH3CPTRSET __attribute__((section("sfrs"),address(0xBF883348)));
extern volatile uint32_t        DCH3CPTRINV __attribute__((section("sfrs"),address(0xBF88334C)));
#define DCH3DAT DCH3DAT
extern volatile uint32_t   DCH3DAT __attribute__((section("sfrs"), address(0xBF883350)));
extern volatile uint32_t        DCH3DATCLR __attribute__((section("sfrs"),address(0xBF883354)));
extern volatile uint32_t        DCH3DATSET __attribute__((section("sfrs"),address(0xBF883358)));
extern volatile uint32_t        DCH3DATINV __attribute__((section("sfrs"),address(0xBF88335C)));
#define U1OTGIR U1OTGIR
extern volatile uint32_t   U1OTGIR __attribute__((section("sfrs"), address(0xBF885040)));
typedef struct {
  uint32_t VBUSVDIF:1;
  uint32_t :1;
  uint32_t SESENDIF:1;
  uint32_t SESVDIF:1;
  uint32_t ACTVIF:1;
  uint32_t LSTATEIF:1;
  uint32_t T1MSECIF:1;
  uint32_t IDIF:1;
} __U1OTGIRbits_t;
extern volatile __U1OTGIRbits_t U1OTGIRbits __asm__ ("U1OTGIR") __attribute__((section("sfrs"), address(0xBF885040)));
extern volatile uint32_t        U1OTGIRCLR __attribute__((section("sfrs"),address(0xBF885044)));
#define U1OTGIE U1OTGIE
extern volatile uint32_t   U1OTGIE __attribute__((section("sfrs"), address(0xBF885050)));
typedef struct {
  uint32_t VBUSVDIE:1;
  uint32_t :1;
  uint32_t SESENDIE:1;
  uint32_t SESVDIE:1;
  uint32_t ACTVIE:1;
  uint32_t LSTATEIE:1;
  uint32_t T1MSECIE:1;
  uint32_t IDIE:1;
} __U1OTGIEbits_t;
extern volatile __U1OTGIEbits_t U1OTGIEbits __asm__ ("U1OTGIE") __attribute__((section("sfrs"), address(0xBF885050)));
extern volatile uint32_t        U1OTGIECLR __attribute__((section("sfrs"),address(0xBF885054)));
extern volatile uint32_t        U1OTGIESET __attribute__((section("sfrs"),address(0xBF885058)));
extern volatile uint32_t        U1OTGIEINV __attribute__((section("sfrs"),address(0xBF88505C)));
#define U1OTGSTAT U1OTGSTAT
extern volatile uint32_t   U1OTGSTAT __attribute__((section("sfrs"), address(0xBF885060)));
typedef struct {
  uint32_t VBUSVD:1;
  uint32_t :1;
  uint32_t SESEND:1;
  uint32_t SESVD:1;
  uint32_t :1;
  uint32_t LSTATE:1;
  uint32_t :1;
  uint32_t ID:1;
} __U1OTGSTATbits_t;
extern volatile __U1OTGSTATbits_t U1OTGSTATbits __asm__ ("U1OTGSTAT") __attribute__((section("sfrs"), address(0xBF885060)));
#define U1OTGCON U1OTGCON
extern volatile uint32_t   U1OTGCON __attribute__((section("sfrs"), address(0xBF885070)));
typedef struct {
  uint32_t VBUSDIS:1;
  uint32_t VBUSCHG:1;
  uint32_t OTGEN:1;
  uint32_t VBUSON:1;
  uint32_t DMPULDWN:1;
  uint32_t DPPULDWN:1;
  uint32_t DMPULUP:1;
  uint32_t DPPULUP:1;
} __U1OTGCONbits_t;
extern volatile __U1OTGCONbits_t U1OTGCONbits __asm__ ("U1OTGCON") __attribute__((section("sfrs"), address(0xBF885070)));
extern volatile uint32_t        U1OTGCONCLR __attribute__((section("sfrs"),address(0xBF885074)));
extern volatile uint32_t        U1OTGCONSET __attribute__((section("sfrs"),address(0xBF885078)));
extern volatile uint32_t        U1OTGCONINV __attribute__((section("sfrs"),address(0xBF88507C)));
#define U1PWRC U1PWRC
extern volatile uint32_t   U1PWRC __attribute__((section("sfrs"), address(0xBF885080)));
typedef struct {
  uint32_t USBPWR:1;
  uint32_t USUSPEND:1;
  uint32_t :1;
  uint32_t USBBUSY:1;
  uint32_t USLPGRD:1;
  uint32_t :2;
  uint32_t UACTPND:1;
} __U1PWRCbits_t;
extern volatile __U1PWRCbits_t U1PWRCbits __asm__ ("U1PWRC") __attribute__((section("sfrs"), address(0xBF885080)));
extern volatile uint32_t        U1PWRCCLR __attribute__((section("sfrs"),address(0xBF885084)));
extern volatile uint32_t        U1PWRCSET __attribute__((section("sfrs"),address(0xBF885088)));
extern volatile uint32_t        U1PWRCINV __attribute__((section("sfrs"),address(0xBF88508C)));
#define U1IR U1IR
extern volatile uint32_t   U1IR __attribute__((section("sfrs"), address(0xBF885200)));
typedef union {
  struct {
    uint32_t URSTIF_DETACHIF:1;
    uint32_t UERRIF:1;
    uint32_t SOFIF:1;
    uint32_t TRNIF:1;
    uint32_t IDLEIF:1;
    uint32_t RESUMEIF:1;
    uint32_t ATTACHIF:1;
    uint32_t STALLIF:1;
  };
  struct {
    uint32_t DETACHIF:1;
  };
  struct {
    uint32_t URSTIF:1;
  };
} __U1IRbits_t;
extern volatile __U1IRbits_t U1IRbits __asm__ ("U1IR") __attribute__((section("sfrs"), address(0xBF885200)));
extern volatile uint32_t        U1IRCLR __attribute__((section("sfrs"),address(0xBF885204)));
#define U1IE U1IE
extern volatile uint32_t   U1IE __attribute__((section("sfrs"), address(0xBF885210)));
typedef union {
  struct {
    uint32_t URSTIE_DETACHIE:1;
    uint32_t UERRIE:1;
    uint32_t SOFIE:1;
    uint32_t TRNIE:1;
    uint32_t IDLEIE:1;
    uint32_t RESUMEIE:1;
    uint32_t ATTACHIE:1;
    uint32_t STALLIE:1;
  };
  struct {
    uint32_t DETACHIE:1;
  };
  struct {
    uint32_t URSTIE:1;
  };
} __U1IEbits_t;
extern volatile __U1IEbits_t U1IEbits __asm__ ("U1IE") __attribute__((section("sfrs"), address(0xBF885210)));
extern volatile uint32_t        U1IECLR __attribute__((section("sfrs"),address(0xBF885214)));
extern volatile uint32_t        U1IESET __attribute__((section("sfrs"),address(0xBF885218)));
extern volatile uint32_t        U1IEINV __attribute__((section("sfrs"),address(0xBF88521C)));
#define U1EIR U1EIR
extern volatile uint32_t   U1EIR __attribute__((section("sfrs"), address(0xBF885220)));
typedef union {
  struct {
    uint32_t PIDEF:1;
    uint32_t CRC5EF_EOFEF:1;
    uint32_t CRC16EF:1;
    uint32_t DFN8EF:1;
    uint32_t BTOEF:1;
    uint32_t DMAEF:1;
    uint32_t BMXEF:1;
    uint32_t BTSEF:1;
  };
  struct {
    uint32_t :1;
    uint32_t CRC5EF:1;
  };
  struct {
    uint32_t :1;
    uint32_t EOFEF:1;
  };
} __U1EIRbits_t;
extern volatile __U1EIRbits_t U1EIRbits __asm__ ("U1EIR") __attribute__((section("sfrs"), address(0xBF885220)));
extern volatile uint32_t        U1EIRCLR __attribute__((section("sfrs"),address(0xBF885224)));
#define U1EIE U1EIE
extern volatile uint32_t   U1EIE __attribute__((section("sfrs"), address(0xBF885230)));
typedef union {
  struct {
    uint32_t PIDEE:1;
    uint32_t CRC5EE_EOFEE:1;
    uint32_t CRC16EE:1;
    uint32_t DFN8EE:1;
    uint32_t BTOEE:1;
    uint32_t DMAEE:1;
    uint32_t BMXEE:1;
    uint32_t BTSEE:1;
  };
  struct {
    uint32_t :1;
    uint32_t CRC5EE:1;
  };
  struct {
    uint32_t :1;
    uint32_t EOFEE:1;
  };
} __U1EIEbits_t;
extern volatile __U1EIEbits_t U1EIEbits __asm__ ("U1EIE") __attribute__((section("sfrs"), address(0xBF885230)));
extern volatile uint32_t        U1EIECLR __attribute__((section("sfrs"),address(0xBF885234)));
extern volatile uint32_t        U1EIESET __attribute__((section("sfrs"),address(0xBF885238)));
extern volatile uint32_t        U1EIEINV __attribute__((section("sfrs"),address(0xBF88523C)));
#define U1STAT U1STAT
extern volatile uint32_t   U1STAT __attribute__((section("sfrs"), address(0xBF885240)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t PPBI:1;
    uint32_t DIR:1;
    uint32_t ENDPT:4;
  };
  struct {
    uint32_t :4;
    uint32_t ENDPT0:1;
    uint32_t ENDPT1:1;
    uint32_t ENDPT2:1;
    uint32_t ENDPT3:1;
  };
} __U1STATbits_t;
extern volatile __U1STATbits_t U1STATbits __asm__ ("U1STAT") __attribute__((section("sfrs"), address(0xBF885240)));
#define U1CON U1CON
extern volatile uint32_t   U1CON __attribute__((section("sfrs"), address(0xBF885250)));
typedef union {
  struct {
    uint32_t USBEN_SOFEN:1;
    uint32_t PPBRST:1;
    uint32_t RESUME:1;
    uint32_t HOSTEN:1;
    uint32_t USBRST:1;
    uint32_t PKTDIS_TOKBUSY:1;
    uint32_t SE0:1;
    uint32_t JSTATE:1;
  };
  struct {
    uint32_t USBEN:1;
  };
  struct {
    uint32_t SOFEN:1;
    uint32_t :4;
    uint32_t PKTDIS:1;
  };
  struct {
    uint32_t :5;
    uint32_t TOKBUSY:1;
  };
} __U1CONbits_t;
extern volatile __U1CONbits_t U1CONbits __asm__ ("U1CON") __attribute__((section("sfrs"), address(0xBF885250)));
extern volatile uint32_t        U1CONCLR __attribute__((section("sfrs"),address(0xBF885254)));
extern volatile uint32_t        U1CONSET __attribute__((section("sfrs"),address(0xBF885258)));
extern volatile uint32_t        U1CONINV __attribute__((section("sfrs"),address(0xBF88525C)));
#define U1ADDR U1ADDR
extern volatile uint32_t   U1ADDR __attribute__((section("sfrs"), address(0xBF885260)));
typedef union {
  struct {
    uint32_t DEVADDR:7;
    uint32_t LSPDEN:1;
  };
  struct {
    uint32_t DEVADDR0:1;
    uint32_t DEVADDR1:1;
    uint32_t DEVADDR2:1;
    uint32_t DEVADDR3:1;
    uint32_t DEVADDR4:1;
    uint32_t DEVADDR5:1;
    uint32_t DEVADDR6:1;
  };
} __U1ADDRbits_t;
extern volatile __U1ADDRbits_t U1ADDRbits __asm__ ("U1ADDR") __attribute__((section("sfrs"), address(0xBF885260)));
extern volatile uint32_t        U1ADDRCLR __attribute__((section("sfrs"),address(0xBF885264)));
extern volatile uint32_t        U1ADDRSET __attribute__((section("sfrs"),address(0xBF885268)));
extern volatile uint32_t        U1ADDRINV __attribute__((section("sfrs"),address(0xBF88526C)));
#define U1BDTP1 U1BDTP1
extern volatile uint32_t   U1BDTP1 __attribute__((section("sfrs"), address(0xBF885270)));
typedef struct {
  uint32_t :1;
  uint32_t BDTPTRL:7;
} __U1BDTP1bits_t;
extern volatile __U1BDTP1bits_t U1BDTP1bits __asm__ ("U1BDTP1") __attribute__((section("sfrs"), address(0xBF885270)));
extern volatile uint32_t        U1BDTP1CLR __attribute__((section("sfrs"),address(0xBF885274)));
extern volatile uint32_t        U1BDTP1SET __attribute__((section("sfrs"),address(0xBF885278)));
extern volatile uint32_t        U1BDTP1INV __attribute__((section("sfrs"),address(0xBF88527C)));
#define U1FRML U1FRML
extern volatile uint32_t   U1FRML __attribute__((section("sfrs"), address(0xBF885280)));
typedef union {
  struct {
    uint32_t FRML:8;
  };
  struct {
    uint32_t FRM0:1;
    uint32_t FRM1:1;
    uint32_t FRM2:1;
    uint32_t FRM3:1;
    uint32_t FRM4:1;
    uint32_t FRM5:1;
    uint32_t FRM6:1;
    uint32_t FRM7:1;
  };
} __U1FRMLbits_t;
extern volatile __U1FRMLbits_t U1FRMLbits __asm__ ("U1FRML") __attribute__((section("sfrs"), address(0xBF885280)));
#define U1FRMH U1FRMH
extern volatile uint32_t   U1FRMH __attribute__((section("sfrs"), address(0xBF885290)));
typedef union {
  struct {
    uint32_t FRMH:3;
  };
  struct {
    uint32_t FRM8:1;
    uint32_t FRM9:1;
    uint32_t FRM10:1;
  };
} __U1FRMHbits_t;
extern volatile __U1FRMHbits_t U1FRMHbits __asm__ ("U1FRMH") __attribute__((section("sfrs"), address(0xBF885290)));
#define U1TOK U1TOK
extern volatile uint32_t   U1TOK __attribute__((section("sfrs"), address(0xBF8852A0)));
typedef union {
  struct {
    uint32_t EP:4;
    uint32_t PID:4;
  };
  struct {
    uint32_t EP0:1;
  };
  struct {
    uint32_t :1;
    uint32_t EP1:1;
    uint32_t EP2:1;
    uint32_t EP3:1;
    uint32_t PID0:1;
  };
  struct {
    uint32_t :5;
    uint32_t PID1:1;
    uint32_t PID2:1;
    uint32_t PID3:1;
  };
} __U1TOKbits_t;
extern volatile __U1TOKbits_t U1TOKbits __asm__ ("U1TOK") __attribute__((section("sfrs"), address(0xBF8852A0)));
extern volatile uint32_t        U1TOKCLR __attribute__((section("sfrs"),address(0xBF8852A4)));
extern volatile uint32_t        U1TOKSET __attribute__((section("sfrs"),address(0xBF8852A8)));
extern volatile uint32_t        U1TOKINV __attribute__((section("sfrs"),address(0xBF8852AC)));
#define U1SOF U1SOF
extern volatile uint32_t   U1SOF __attribute__((section("sfrs"), address(0xBF8852B0)));
typedef struct {
  uint32_t CNT:8;
} __U1SOFbits_t;
extern volatile __U1SOFbits_t U1SOFbits __asm__ ("U1SOF") __attribute__((section("sfrs"), address(0xBF8852B0)));
extern volatile uint32_t        U1SOFCLR __attribute__((section("sfrs"),address(0xBF8852B4)));
extern volatile uint32_t        U1SOFSET __attribute__((section("sfrs"),address(0xBF8852B8)));
extern volatile uint32_t        U1SOFINV __attribute__((section("sfrs"),address(0xBF8852BC)));
#define U1BDTP2 U1BDTP2
extern volatile uint32_t   U1BDTP2 __attribute__((section("sfrs"), address(0xBF8852C0)));
typedef struct {
  uint32_t BDTPTRH:8;
} __U1BDTP2bits_t;
extern volatile __U1BDTP2bits_t U1BDTP2bits __asm__ ("U1BDTP2") __attribute__((section("sfrs"), address(0xBF8852C0)));
extern volatile uint32_t        U1BDTP2CLR __attribute__((section("sfrs"),address(0xBF8852C4)));
extern volatile uint32_t        U1BDTP2SET __attribute__((section("sfrs"),address(0xBF8852C8)));
extern volatile uint32_t        U1BDTP2INV __attribute__((section("sfrs"),address(0xBF8852CC)));
#define U1BDTP3 U1BDTP3
extern volatile uint32_t   U1BDTP3 __attribute__((section("sfrs"), address(0xBF8852D0)));
typedef struct {
  uint32_t BDTPTRU:8;
} __U1BDTP3bits_t;
extern volatile __U1BDTP3bits_t U1BDTP3bits __asm__ ("U1BDTP3") __attribute__((section("sfrs"), address(0xBF8852D0)));
extern volatile uint32_t        U1BDTP3CLR __attribute__((section("sfrs"),address(0xBF8852D4)));
extern volatile uint32_t        U1BDTP3SET __attribute__((section("sfrs"),address(0xBF8852D8)));
extern volatile uint32_t        U1BDTP3INV __attribute__((section("sfrs"),address(0xBF8852DC)));
#define U1CNFG1 U1CNFG1
extern volatile uint32_t   U1CNFG1 __attribute__((section("sfrs"), address(0xBF8852E0)));
typedef struct {
  uint32_t UASUSPND:1;
  uint32_t :3;
  uint32_t USBSIDL:1;
  uint32_t :1;
  uint32_t UOEMON:1;
  uint32_t UTEYE:1;
} __U1CNFG1bits_t;
extern volatile __U1CNFG1bits_t U1CNFG1bits __asm__ ("U1CNFG1") __attribute__((section("sfrs"), address(0xBF8852E0)));
extern volatile uint32_t        U1CNFG1CLR __attribute__((section("sfrs"),address(0xBF8852E4)));
extern volatile uint32_t        U1CNFG1SET __attribute__((section("sfrs"),address(0xBF8852E8)));
extern volatile uint32_t        U1CNFG1INV __attribute__((section("sfrs"),address(0xBF8852EC)));
#define U1EP0 U1EP0
extern volatile uint32_t   U1EP0 __attribute__((section("sfrs"), address(0xBF885300)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
  uint32_t :1;
  uint32_t RETRYDIS:1;
  uint32_t LSPD:1;
} __U1EP0bits_t;
extern volatile __U1EP0bits_t U1EP0bits __asm__ ("U1EP0") __attribute__((section("sfrs"), address(0xBF885300)));
extern volatile uint32_t        U1EP0CLR __attribute__((section("sfrs"),address(0xBF885304)));
extern volatile uint32_t        U1EP0SET __attribute__((section("sfrs"),address(0xBF885308)));
extern volatile uint32_t        U1EP0INV __attribute__((section("sfrs"),address(0xBF88530C)));
#define U1EP1 U1EP1
extern volatile uint32_t   U1EP1 __attribute__((section("sfrs"), address(0xBF885310)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP1bits_t;
extern volatile __U1EP1bits_t U1EP1bits __asm__ ("U1EP1") __attribute__((section("sfrs"), address(0xBF885310)));
extern volatile uint32_t        U1EP1CLR __attribute__((section("sfrs"),address(0xBF885314)));
extern volatile uint32_t        U1EP1SET __attribute__((section("sfrs"),address(0xBF885318)));
extern volatile uint32_t        U1EP1INV __attribute__((section("sfrs"),address(0xBF88531C)));
#define U1EP2 U1EP2
extern volatile uint32_t   U1EP2 __attribute__((section("sfrs"), address(0xBF885320)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP2bits_t;
extern volatile __U1EP2bits_t U1EP2bits __asm__ ("U1EP2") __attribute__((section("sfrs"), address(0xBF885320)));
extern volatile uint32_t        U1EP2CLR __attribute__((section("sfrs"),address(0xBF885324)));
extern volatile uint32_t        U1EP2SET __attribute__((section("sfrs"),address(0xBF885328)));
extern volatile uint32_t        U1EP2INV __attribute__((section("sfrs"),address(0xBF88532C)));
#define U1EP3 U1EP3
extern volatile uint32_t   U1EP3 __attribute__((section("sfrs"), address(0xBF885330)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP3bits_t;
extern volatile __U1EP3bits_t U1EP3bits __asm__ ("U1EP3") __attribute__((section("sfrs"), address(0xBF885330)));
extern volatile uint32_t        U1EP3CLR __attribute__((section("sfrs"),address(0xBF885334)));
extern volatile uint32_t        U1EP3SET __attribute__((section("sfrs"),address(0xBF885338)));
extern volatile uint32_t        U1EP3INV __attribute__((section("sfrs"),address(0xBF88533C)));
#define U1EP4 U1EP4
extern volatile uint32_t   U1EP4 __attribute__((section("sfrs"), address(0xBF885340)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP4bits_t;
extern volatile __U1EP4bits_t U1EP4bits __asm__ ("U1EP4") __attribute__((section("sfrs"), address(0xBF885340)));
extern volatile uint32_t        U1EP4CLR __attribute__((section("sfrs"),address(0xBF885344)));
extern volatile uint32_t        U1EP4SET __attribute__((section("sfrs"),address(0xBF885348)));
extern volatile uint32_t        U1EP4INV __attribute__((section("sfrs"),address(0xBF88534C)));
#define U1EP5 U1EP5
extern volatile uint32_t   U1EP5 __attribute__((section("sfrs"), address(0xBF885350)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP5bits_t;
extern volatile __U1EP5bits_t U1EP5bits __asm__ ("U1EP5") __attribute__((section("sfrs"), address(0xBF885350)));
extern volatile uint32_t        U1EP5CLR __attribute__((section("sfrs"),address(0xBF885354)));
extern volatile uint32_t        U1EP5SET __attribute__((section("sfrs"),address(0xBF885358)));
extern volatile uint32_t        U1EP5INV __attribute__((section("sfrs"),address(0xBF88535C)));
#define U1EP6 U1EP6
extern volatile uint32_t   U1EP6 __attribute__((section("sfrs"), address(0xBF885360)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP6bits_t;
extern volatile __U1EP6bits_t U1EP6bits __asm__ ("U1EP6") __attribute__((section("sfrs"), address(0xBF885360)));
extern volatile uint32_t        U1EP6CLR __attribute__((section("sfrs"),address(0xBF885364)));
extern volatile uint32_t        U1EP6SET __attribute__((section("sfrs"),address(0xBF885368)));
extern volatile uint32_t        U1EP6INV __attribute__((section("sfrs"),address(0xBF88536C)));
#define U1EP7 U1EP7
extern volatile uint32_t   U1EP7 __attribute__((section("sfrs"), address(0xBF885370)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP7bits_t;
extern volatile __U1EP7bits_t U1EP7bits __asm__ ("U1EP7") __attribute__((section("sfrs"), address(0xBF885370)));
extern volatile uint32_t        U1EP7CLR __attribute__((section("sfrs"),address(0xBF885374)));
extern volatile uint32_t        U1EP7SET __attribute__((section("sfrs"),address(0xBF885378)));
extern volatile uint32_t        U1EP7INV __attribute__((section("sfrs"),address(0xBF88537C)));
#define U1EP8 U1EP8
extern volatile uint32_t   U1EP8 __attribute__((section("sfrs"), address(0xBF885380)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP8bits_t;
extern volatile __U1EP8bits_t U1EP8bits __asm__ ("U1EP8") __attribute__((section("sfrs"), address(0xBF885380)));
extern volatile uint32_t        U1EP8CLR __attribute__((section("sfrs"),address(0xBF885384)));
extern volatile uint32_t        U1EP8SET __attribute__((section("sfrs"),address(0xBF885388)));
extern volatile uint32_t        U1EP8INV __attribute__((section("sfrs"),address(0xBF88538C)));
#define U1EP9 U1EP9
extern volatile uint32_t   U1EP9 __attribute__((section("sfrs"), address(0xBF885390)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP9bits_t;
extern volatile __U1EP9bits_t U1EP9bits __asm__ ("U1EP9") __attribute__((section("sfrs"), address(0xBF885390)));
extern volatile uint32_t        U1EP9CLR __attribute__((section("sfrs"),address(0xBF885394)));
extern volatile uint32_t        U1EP9SET __attribute__((section("sfrs"),address(0xBF885398)));
extern volatile uint32_t        U1EP9INV __attribute__((section("sfrs"),address(0xBF88539C)));
#define U1EP10 U1EP10
extern volatile uint32_t   U1EP10 __attribute__((section("sfrs"), address(0xBF8853A0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP10bits_t;
extern volatile __U1EP10bits_t U1EP10bits __asm__ ("U1EP10") __attribute__((section("sfrs"), address(0xBF8853A0)));
extern volatile uint32_t        U1EP10CLR __attribute__((section("sfrs"),address(0xBF8853A4)));
extern volatile uint32_t        U1EP10SET __attribute__((section("sfrs"),address(0xBF8853A8)));
extern volatile uint32_t        U1EP10INV __attribute__((section("sfrs"),address(0xBF8853AC)));
#define U1EP11 U1EP11
extern volatile uint32_t   U1EP11 __attribute__((section("sfrs"), address(0xBF8853B0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP11bits_t;
extern volatile __U1EP11bits_t U1EP11bits __asm__ ("U1EP11") __attribute__((section("sfrs"), address(0xBF8853B0)));
extern volatile uint32_t        U1EP11CLR __attribute__((section("sfrs"),address(0xBF8853B4)));
extern volatile uint32_t        U1EP11SET __attribute__((section("sfrs"),address(0xBF8853B8)));
extern volatile uint32_t        U1EP11INV __attribute__((section("sfrs"),address(0xBF8853BC)));
#define U1EP12 U1EP12
extern volatile uint32_t   U1EP12 __attribute__((section("sfrs"), address(0xBF8853C0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP12bits_t;
extern volatile __U1EP12bits_t U1EP12bits __asm__ ("U1EP12") __attribute__((section("sfrs"), address(0xBF8853C0)));
extern volatile uint32_t        U1EP12CLR __attribute__((section("sfrs"),address(0xBF8853C4)));
extern volatile uint32_t        U1EP12SET __attribute__((section("sfrs"),address(0xBF8853C8)));
extern volatile uint32_t        U1EP12INV __attribute__((section("sfrs"),address(0xBF8853CC)));
#define U1EP13 U1EP13
extern volatile uint32_t   U1EP13 __attribute__((section("sfrs"), address(0xBF8853D0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP13bits_t;
extern volatile __U1EP13bits_t U1EP13bits __asm__ ("U1EP13") __attribute__((section("sfrs"), address(0xBF8853D0)));
extern volatile uint32_t        U1EP13CLR __attribute__((section("sfrs"),address(0xBF8853D4)));
extern volatile uint32_t        U1EP13SET __attribute__((section("sfrs"),address(0xBF8853D8)));
extern volatile uint32_t        U1EP13INV __attribute__((section("sfrs"),address(0xBF8853DC)));
#define U1EP14 U1EP14
extern volatile uint32_t   U1EP14 __attribute__((section("sfrs"), address(0xBF8853E0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP14bits_t;
extern volatile __U1EP14bits_t U1EP14bits __asm__ ("U1EP14") __attribute__((section("sfrs"), address(0xBF8853E0)));
extern volatile uint32_t        U1EP14CLR __attribute__((section("sfrs"),address(0xBF8853E4)));
extern volatile uint32_t        U1EP14SET __attribute__((section("sfrs"),address(0xBF8853E8)));
extern volatile uint32_t        U1EP14INV __attribute__((section("sfrs"),address(0xBF8853EC)));
#define U1EP15 U1EP15
extern volatile uint32_t   U1EP15 __attribute__((section("sfrs"), address(0xBF8853F0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP15bits_t;
extern volatile __U1EP15bits_t U1EP15bits __asm__ ("U1EP15") __attribute__((section("sfrs"), address(0xBF8853F0)));
extern volatile uint32_t        U1EP15CLR __attribute__((section("sfrs"),address(0xBF8853F4)));
extern volatile uint32_t        U1EP15SET __attribute__((section("sfrs"),address(0xBF8853F8)));
extern volatile uint32_t        U1EP15INV __attribute__((section("sfrs"),address(0xBF8853FC)));
#define ANSELA ANSELA
extern volatile uint32_t   ANSELA __attribute__((section("sfrs"), address(0xBF886000)));
typedef union {
  struct {
    uint32_t ANSA0:1;
    uint32_t ANSA1:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELAbits_t;
extern volatile __ANSELAbits_t ANSELAbits __asm__ ("ANSELA") __attribute__((section("sfrs"), address(0xBF886000)));
extern volatile uint32_t        ANSELACLR __attribute__((section("sfrs"),address(0xBF886004)));
extern volatile uint32_t        ANSELASET __attribute__((section("sfrs"),address(0xBF886008)));
extern volatile uint32_t        ANSELAINV __attribute__((section("sfrs"),address(0xBF88600C)));
#define TRISA TRISA
extern volatile uint32_t   TRISA __attribute__((section("sfrs"), address(0xBF886010)));
typedef union {
  struct {
    uint32_t TRISA0:1;
    uint32_t TRISA1:1;
    uint32_t TRISA2:1;
    uint32_t TRISA3:1;
    uint32_t TRISA4:1;
    uint32_t :2;
    uint32_t TRISA7:1;
    uint32_t TRISA8:1;
    uint32_t TRISA9:1;
    uint32_t TRISA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t TRISAbits __asm__ ("TRISA") __attribute__((section("sfrs"), address(0xBF886010)));
extern volatile uint32_t        TRISACLR __attribute__((section("sfrs"),address(0xBF886014)));
extern volatile uint32_t        TRISASET __attribute__((section("sfrs"),address(0xBF886018)));
extern volatile uint32_t        TRISAINV __attribute__((section("sfrs"),address(0xBF88601C)));
#define PORTA PORTA
extern volatile uint32_t   PORTA __attribute__((section("sfrs"), address(0xBF886020)));
typedef union {
  struct {
    uint32_t RA0:1;
    uint32_t RA1:1;
    uint32_t RA2:1;
    uint32_t RA3:1;
    uint32_t RA4:1;
    uint32_t :2;
    uint32_t RA7:1;
    uint32_t RA8:1;
    uint32_t RA9:1;
    uint32_t RA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t PORTAbits __asm__ ("PORTA") __attribute__((section("sfrs"), address(0xBF886020)));
extern volatile uint32_t        PORTACLR __attribute__((section("sfrs"),address(0xBF886024)));
extern volatile uint32_t        PORTASET __attribute__((section("sfrs"),address(0xBF886028)));
extern volatile uint32_t        PORTAINV __attribute__((section("sfrs"),address(0xBF88602C)));
#define LATA LATA
extern volatile uint32_t   LATA __attribute__((section("sfrs"), address(0xBF886030)));
typedef union {
  struct {
    uint32_t LATA0:1;
    uint32_t LATA1:1;
    uint32_t LATA2:1;
    uint32_t LATA3:1;
    uint32_t LATA4:1;
    uint32_t :2;
    uint32_t LATA7:1;
    uint32_t LATA8:1;
    uint32_t LATA9:1;
    uint32_t LATA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATAbits_t;
extern volatile __LATAbits_t LATAbits __asm__ ("LATA") __attribute__((section("sfrs"), address(0xBF886030)));
extern volatile uint32_t        LATACLR __attribute__((section("sfrs"),address(0xBF886034)));
extern volatile uint32_t        LATASET __attribute__((section("sfrs"),address(0xBF886038)));
extern volatile uint32_t        LATAINV __attribute__((section("sfrs"),address(0xBF88603C)));
#define ODCA ODCA
extern volatile uint32_t   ODCA __attribute__((section("sfrs"), address(0xBF886040)));
typedef union {
  struct {
    uint32_t :7;
    uint32_t ODCA7:1;
    uint32_t ODCA8:1;
    uint32_t ODCA9:1;
    uint32_t ODCA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCAbits_t;
extern volatile __ODCAbits_t ODCAbits __asm__ ("ODCA") __attribute__((section("sfrs"), address(0xBF886040)));
extern volatile uint32_t        ODCACLR __attribute__((section("sfrs"),address(0xBF886044)));
extern volatile uint32_t        ODCASET __attribute__((section("sfrs"),address(0xBF886048)));
extern volatile uint32_t        ODCAINV __attribute__((section("sfrs"),address(0xBF88604C)));
#define CNPUA CNPUA
extern volatile uint32_t   CNPUA __attribute__((section("sfrs"), address(0xBF886050)));
typedef union {
  struct {
    uint32_t CNPUA0:1;
    uint32_t CNPUA1:1;
    uint32_t CNPUA2:1;
    uint32_t CNPUA3:1;
    uint32_t CNPUA4:1;
    uint32_t :2;
    uint32_t CNPUA7:1;
    uint32_t CNPUA8:1;
    uint32_t CNPUA9:1;
    uint32_t CNPUA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUAbits_t;
extern volatile __CNPUAbits_t CNPUAbits __asm__ ("CNPUA") __attribute__((section("sfrs"), address(0xBF886050)));
extern volatile uint32_t        CNPUACLR __attribute__((section("sfrs"),address(0xBF886054)));
extern volatile uint32_t        CNPUASET __attribute__((section("sfrs"),address(0xBF886058)));
extern volatile uint32_t        CNPUAINV __attribute__((section("sfrs"),address(0xBF88605C)));
#define CNPDA CNPDA
extern volatile uint32_t   CNPDA __attribute__((section("sfrs"), address(0xBF886060)));
typedef union {
  struct {
    uint32_t CNPDA0:1;
    uint32_t CNPDA1:1;
    uint32_t CNPDA2:1;
    uint32_t CNPDA3:1;
    uint32_t CNPDA4:1;
    uint32_t :2;
    uint32_t CNPDA7:1;
    uint32_t CNPDA8:1;
    uint32_t CNPDA9:1;
    uint32_t CNPDA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDAbits_t;
extern volatile __CNPDAbits_t CNPDAbits __asm__ ("CNPDA") __attribute__((section("sfrs"), address(0xBF886060)));
extern volatile uint32_t        CNPDACLR __attribute__((section("sfrs"),address(0xBF886064)));
extern volatile uint32_t        CNPDASET __attribute__((section("sfrs"),address(0xBF886068)));
extern volatile uint32_t        CNPDAINV __attribute__((section("sfrs"),address(0xBF88606C)));
#define CNCONA CNCONA
extern volatile uint32_t   CNCONA __attribute__((section("sfrs"), address(0xBF886070)));
typedef union {
  struct {
    uint32_t :13;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONAbits_t;
extern volatile __CNCONAbits_t CNCONAbits __asm__ ("CNCONA") __attribute__((section("sfrs"), address(0xBF886070)));
extern volatile uint32_t        CNCONACLR __attribute__((section("sfrs"),address(0xBF886074)));
extern volatile uint32_t        CNCONASET __attribute__((section("sfrs"),address(0xBF886078)));
extern volatile uint32_t        CNCONAINV __attribute__((section("sfrs"),address(0xBF88607C)));
#define CNENA CNENA
extern volatile uint32_t   CNENA __attribute__((section("sfrs"), address(0xBF886080)));
typedef union {
  struct {
    uint32_t CNIEA0:1;
    uint32_t CNIEA1:1;
    uint32_t CNIEA2:1;
    uint32_t CNIEA3:1;
    uint32_t CNIEA4:1;
    uint32_t :2;
    uint32_t CNIEA7:1;
    uint32_t CNIEA8:1;
    uint32_t CNIEA9:1;
    uint32_t CNIEA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENAbits_t;
extern volatile __CNENAbits_t CNENAbits __asm__ ("CNENA") __attribute__((section("sfrs"), address(0xBF886080)));
extern volatile uint32_t        CNENACLR __attribute__((section("sfrs"),address(0xBF886084)));
extern volatile uint32_t        CNENASET __attribute__((section("sfrs"),address(0xBF886088)));
extern volatile uint32_t        CNENAINV __attribute__((section("sfrs"),address(0xBF88608C)));
#define CNSTATA CNSTATA
extern volatile uint32_t   CNSTATA __attribute__((section("sfrs"), address(0xBF886090)));
typedef union {
  struct {
    uint32_t CNSTATA0:1;
    uint32_t CNSTATA1:1;
    uint32_t CNSTATA2:1;
    uint32_t CNSTATA3:1;
    uint32_t CNSTATA4:1;
    uint32_t :2;
    uint32_t CNSTATA7:1;
    uint32_t CNSTATA8:1;
    uint32_t CNSTATA9:1;
    uint32_t CNSTATA10:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATAbits_t;
extern volatile __CNSTATAbits_t CNSTATAbits __asm__ ("CNSTATA") __attribute__((section("sfrs"), address(0xBF886090)));
extern volatile uint32_t        CNSTATACLR __attribute__((section("sfrs"),address(0xBF886094)));
extern volatile uint32_t        CNSTATASET __attribute__((section("sfrs"),address(0xBF886098)));
extern volatile uint32_t        CNSTATAINV __attribute__((section("sfrs"),address(0xBF88609C)));
#define ANSELB ANSELB
extern volatile uint32_t   ANSELB __attribute__((section("sfrs"), address(0xBF886100)));
typedef union {
  struct {
    uint32_t ANSB0:1;
    uint32_t ANSB1:1;
    uint32_t ANSB2:1;
    uint32_t ANSB3:1;
    uint32_t :9;
    uint32_t ANSB13:1;
    uint32_t ANSB14:1;
    uint32_t ANSB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELBbits_t;
extern volatile __ANSELBbits_t ANSELBbits __asm__ ("ANSELB") __attribute__((section("sfrs"), address(0xBF886100)));
extern volatile uint32_t        ANSELBCLR __attribute__((section("sfrs"),address(0xBF886104)));
extern volatile uint32_t        ANSELBSET __attribute__((section("sfrs"),address(0xBF886108)));
extern volatile uint32_t        ANSELBINV __attribute__((section("sfrs"),address(0xBF88610C)));
#define TRISB TRISB
extern volatile uint32_t   TRISB __attribute__((section("sfrs"), address(0xBF886110)));
typedef union {
  struct {
    uint32_t TRISB0:1;
    uint32_t TRISB1:1;
    uint32_t TRISB2:1;
    uint32_t TRISB3:1;
    uint32_t TRISB4:1;
    uint32_t TRISB5:1;
    uint32_t :1;
    uint32_t TRISB7:1;
    uint32_t TRISB8:1;
    uint32_t TRISB9:1;
    uint32_t TRISB10:1;
    uint32_t TRISB11:1;
    uint32_t :1;
    uint32_t TRISB13:1;
    uint32_t TRISB14:1;
    uint32_t TRISB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISBbits_t;
extern volatile __TRISBbits_t TRISBbits __asm__ ("TRISB") __attribute__((section("sfrs"), address(0xBF886110)));
extern volatile uint32_t        TRISBCLR __attribute__((section("sfrs"),address(0xBF886114)));
extern volatile uint32_t        TRISBSET __attribute__((section("sfrs"),address(0xBF886118)));
extern volatile uint32_t        TRISBINV __attribute__((section("sfrs"),address(0xBF88611C)));
#define PORTB PORTB
extern volatile uint32_t   PORTB __attribute__((section("sfrs"), address(0xBF886120)));
typedef union {
  struct {
    uint32_t RB0:1;
    uint32_t RB1:1;
    uint32_t RB2:1;
    uint32_t RB3:1;
    uint32_t RB4:1;
    uint32_t RB5:1;
    uint32_t :1;
    uint32_t RB7:1;
    uint32_t RB8:1;
    uint32_t RB9:1;
    uint32_t RB10:1;
    uint32_t RB11:1;
    uint32_t :1;
    uint32_t RB13:1;
    uint32_t RB14:1;
    uint32_t RB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTBbits_t;
extern volatile __PORTBbits_t PORTBbits __asm__ ("PORTB") __attribute__((section("sfrs"), address(0xBF886120)));
extern volatile uint32_t        PORTBCLR __attribute__((section("sfrs"),address(0xBF886124)));
extern volatile uint32_t        PORTBSET __attribute__((section("sfrs"),address(0xBF886128)));
extern volatile uint32_t        PORTBINV __attribute__((section("sfrs"),address(0xBF88612C)));
#define LATB LATB
extern volatile uint32_t   LATB __attribute__((section("sfrs"), address(0xBF886130)));
typedef union {
  struct {
    uint32_t LATB0:1;
    uint32_t LATB1:1;
    uint32_t LATB2:1;
    uint32_t LATB3:1;
    uint32_t LATB4:1;
    uint32_t LATB5:1;
    uint32_t :1;
    uint32_t LATB7:1;
    uint32_t LATB8:1;
    uint32_t LATB9:1;
    uint32_t LATB10:1;
    uint32_t LATB11:1;
    uint32_t :1;
    uint32_t LATB13:1;
    uint32_t LATB14:1;
    uint32_t LATB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATBbits_t;
extern volatile __LATBbits_t LATBbits __asm__ ("LATB") __attribute__((section("sfrs"), address(0xBF886130)));
extern volatile uint32_t        LATBCLR __attribute__((section("sfrs"),address(0xBF886134)));
extern volatile uint32_t        LATBSET __attribute__((section("sfrs"),address(0xBF886138)));
extern volatile uint32_t        LATBINV __attribute__((section("sfrs"),address(0xBF88613C)));
#define ODCB ODCB
extern volatile uint32_t   ODCB __attribute__((section("sfrs"), address(0xBF886140)));
typedef union {
  struct {
    uint32_t ODCB0:1;
    uint32_t ODCB1:1;
    uint32_t ODCB2:1;
    uint32_t ODCB3:1;
    uint32_t ODCB4:1;
    uint32_t ODCB5:1;
    uint32_t :1;
    uint32_t ODCB7:1;
    uint32_t ODCB8:1;
    uint32_t ODCB9:1;
    uint32_t ODCB10:1;
    uint32_t ODCB11:1;
    uint32_t :1;
    uint32_t ODCB13:1;
    uint32_t ODCB14:1;
    uint32_t ODCB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCBbits_t;
extern volatile __ODCBbits_t ODCBbits __asm__ ("ODCB") __attribute__((section("sfrs"), address(0xBF886140)));
extern volatile uint32_t        ODCBCLR __attribute__((section("sfrs"),address(0xBF886144)));
extern volatile uint32_t        ODCBSET __attribute__((section("sfrs"),address(0xBF886148)));
extern volatile uint32_t        ODCBINV __attribute__((section("sfrs"),address(0xBF88614C)));
#define CNPUB CNPUB
extern volatile uint32_t   CNPUB __attribute__((section("sfrs"), address(0xBF886150)));
typedef union {
  struct {
    uint32_t CNPUB0:1;
    uint32_t CNPUB1:1;
    uint32_t CNPUB2:1;
    uint32_t CNPUB3:1;
    uint32_t CNPUB4:1;
    uint32_t CNPUB5:1;
    uint32_t :1;
    uint32_t CNPUB7:1;
    uint32_t CNPUB8:1;
    uint32_t CNPUB9:1;
    uint32_t CNPUB10:1;
    uint32_t CNPUB11:1;
    uint32_t :1;
    uint32_t CNPUB13:1;
    uint32_t CNPUB14:1;
    uint32_t CNPUB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUBbits_t;
extern volatile __CNPUBbits_t CNPUBbits __asm__ ("CNPUB") __attribute__((section("sfrs"), address(0xBF886150)));
extern volatile uint32_t        CNPUBCLR __attribute__((section("sfrs"),address(0xBF886154)));
extern volatile uint32_t        CNPUBSET __attribute__((section("sfrs"),address(0xBF886158)));
extern volatile uint32_t        CNPUBINV __attribute__((section("sfrs"),address(0xBF88615C)));
#define CNPDB CNPDB
extern volatile uint32_t   CNPDB __attribute__((section("sfrs"), address(0xBF886160)));
typedef union {
  struct {
    uint32_t CNPDB0:1;
    uint32_t CNPDB1:1;
    uint32_t CNPDB2:1;
    uint32_t CNPDB3:1;
    uint32_t CNPDB4:1;
    uint32_t CNPDB5:1;
    uint32_t :1;
    uint32_t CNPDB7:1;
    uint32_t CNPDB8:1;
    uint32_t CNPDB9:1;
    uint32_t CNPDB10:1;
    uint32_t CNPDB11:1;
    uint32_t :1;
    uint32_t CNPDB13:1;
    uint32_t CNPDB14:1;
    uint32_t CNPDB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDBbits_t;
extern volatile __CNPDBbits_t CNPDBbits __asm__ ("CNPDB") __attribute__((section("sfrs"), address(0xBF886160)));
extern volatile uint32_t        CNPDBCLR __attribute__((section("sfrs"),address(0xBF886164)));
extern volatile uint32_t        CNPDBSET __attribute__((section("sfrs"),address(0xBF886168)));
extern volatile uint32_t        CNPDBINV __attribute__((section("sfrs"),address(0xBF88616C)));
#define CNCONB CNCONB
extern volatile uint32_t   CNCONB __attribute__((section("sfrs"), address(0xBF886170)));
typedef union {
  struct {
    uint32_t :13;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONBbits_t;
extern volatile __CNCONBbits_t CNCONBbits __asm__ ("CNCONB") __attribute__((section("sfrs"), address(0xBF886170)));
extern volatile uint32_t        CNCONBCLR __attribute__((section("sfrs"),address(0xBF886174)));
extern volatile uint32_t        CNCONBSET __attribute__((section("sfrs"),address(0xBF886178)));
extern volatile uint32_t        CNCONBINV __attribute__((section("sfrs"),address(0xBF88617C)));
#define CNENB CNENB
extern volatile uint32_t   CNENB __attribute__((section("sfrs"), address(0xBF886180)));
typedef union {
  struct {
    uint32_t CNIEB0:1;
    uint32_t CNIEB1:1;
    uint32_t CNIEB2:1;
    uint32_t CNIEB3:1;
    uint32_t CNIEB4:1;
    uint32_t CNIEB5:1;
    uint32_t :1;
    uint32_t CNIEB7:1;
    uint32_t CNIEB8:1;
    uint32_t CNIEB9:1;
    uint32_t CNIEB10:1;
    uint32_t CNIEB11:1;
    uint32_t :1;
    uint32_t CNIEB13:1;
    uint32_t CNIEB14:1;
    uint32_t CNIEB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENBbits_t;
extern volatile __CNENBbits_t CNENBbits __asm__ ("CNENB") __attribute__((section("sfrs"), address(0xBF886180)));
extern volatile uint32_t        CNENBCLR __attribute__((section("sfrs"),address(0xBF886184)));
extern volatile uint32_t        CNENBSET __attribute__((section("sfrs"),address(0xBF886188)));
extern volatile uint32_t        CNENBINV __attribute__((section("sfrs"),address(0xBF88618C)));
#define CNSTATB CNSTATB
extern volatile uint32_t   CNSTATB __attribute__((section("sfrs"), address(0xBF886190)));
typedef union {
  struct {
    uint32_t CNSTATB0:1;
    uint32_t CNSTATB1:1;
    uint32_t CNSTATB2:1;
    uint32_t CNSTATB3:1;
    uint32_t CNSTATB4:1;
    uint32_t CNSTATB5:1;
    uint32_t :1;
    uint32_t CNSTATB7:1;
    uint32_t CNSTATB8:1;
    uint32_t CNSTATB9:1;
    uint32_t CNSTATB10:1;
    uint32_t CNSTATB11:1;
    uint32_t :1;
    uint32_t CNSTATB13:1;
    uint32_t CNSTATB14:1;
    uint32_t CNSTATB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATBbits_t;
extern volatile __CNSTATBbits_t CNSTATBbits __asm__ ("CNSTATB") __attribute__((section("sfrs"), address(0xBF886190)));
extern volatile uint32_t        CNSTATBCLR __attribute__((section("sfrs"),address(0xBF886194)));
extern volatile uint32_t        CNSTATBSET __attribute__((section("sfrs"),address(0xBF886198)));
extern volatile uint32_t        CNSTATBINV __attribute__((section("sfrs"),address(0xBF88619C)));
#define ANSELC ANSELC
extern volatile uint32_t   ANSELC __attribute__((section("sfrs"), address(0xBF886200)));
typedef union {
  struct {
    uint32_t ANSC0:1;
    uint32_t ANSC1:1;
    uint32_t ANSC2:1;
    uint32_t ANSC3:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELCbits_t;
extern volatile __ANSELCbits_t ANSELCbits __asm__ ("ANSELC") __attribute__((section("sfrs"), address(0xBF886200)));
extern volatile uint32_t        ANSELCCLR __attribute__((section("sfrs"),address(0xBF886204)));
extern volatile uint32_t        ANSELCSET __attribute__((section("sfrs"),address(0xBF886208)));
extern volatile uint32_t        ANSELCINV __attribute__((section("sfrs"),address(0xBF88620C)));
#define TRISC TRISC
extern volatile uint32_t   TRISC __attribute__((section("sfrs"), address(0xBF886210)));
typedef union {
  struct {
    uint32_t TRISC0:1;
    uint32_t TRISC1:1;
    uint32_t TRISC2:1;
    uint32_t TRISC3:1;
    uint32_t TRISC4:1;
    uint32_t TRISC5:1;
    uint32_t TRISC6:1;
    uint32_t TRISC7:1;
    uint32_t TRISC8:1;
    uint32_t TRISC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t TRISCbits __asm__ ("TRISC") __attribute__((section("sfrs"), address(0xBF886210)));
extern volatile uint32_t        TRISCCLR __attribute__((section("sfrs"),address(0xBF886214)));
extern volatile uint32_t        TRISCSET __attribute__((section("sfrs"),address(0xBF886218)));
extern volatile uint32_t        TRISCINV __attribute__((section("sfrs"),address(0xBF88621C)));
#define PORTC PORTC
extern volatile uint32_t   PORTC __attribute__((section("sfrs"), address(0xBF886220)));
typedef union {
  struct {
    uint32_t RC0:1;
    uint32_t RC1:1;
    uint32_t RC2:1;
    uint32_t RC3:1;
    uint32_t RC4:1;
    uint32_t RC5:1;
    uint32_t RC6:1;
    uint32_t RC7:1;
    uint32_t RC8:1;
    uint32_t RC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t PORTCbits __asm__ ("PORTC") __attribute__((section("sfrs"), address(0xBF886220)));
extern volatile uint32_t        PORTCCLR __attribute__((section("sfrs"),address(0xBF886224)));
extern volatile uint32_t        PORTCSET __attribute__((section("sfrs"),address(0xBF886228)));
extern volatile uint32_t        PORTCINV __attribute__((section("sfrs"),address(0xBF88622C)));
#define LATC LATC
extern volatile uint32_t   LATC __attribute__((section("sfrs"), address(0xBF886230)));
typedef union {
  struct {
    uint32_t LATC0:1;
    uint32_t LATC1:1;
    uint32_t LATC2:1;
    uint32_t LATC3:1;
    uint32_t LATC4:1;
    uint32_t LATC5:1;
    uint32_t LATC6:1;
    uint32_t LATC7:1;
    uint32_t LATC8:1;
    uint32_t LATC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATCbits_t;
extern volatile __LATCbits_t LATCbits __asm__ ("LATC") __attribute__((section("sfrs"), address(0xBF886230)));
extern volatile uint32_t        LATCCLR __attribute__((section("sfrs"),address(0xBF886234)));
extern volatile uint32_t        LATCSET __attribute__((section("sfrs"),address(0xBF886238)));
extern volatile uint32_t        LATCINV __attribute__((section("sfrs"),address(0xBF88623C)));
#define ODCC ODCC
extern volatile uint32_t   ODCC __attribute__((section("sfrs"), address(0xBF886240)));
typedef union {
  struct {
    uint32_t :4;
    uint32_t ODCC4:1;
    uint32_t ODCC5:1;
    uint32_t ODCC6:1;
    uint32_t ODCC7:1;
    uint32_t ODCC8:1;
    uint32_t ODCC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCCbits_t;
extern volatile __ODCCbits_t ODCCbits __asm__ ("ODCC") __attribute__((section("sfrs"), address(0xBF886240)));
extern volatile uint32_t        ODCCCLR __attribute__((section("sfrs"),address(0xBF886244)));
extern volatile uint32_t        ODCCSET __attribute__((section("sfrs"),address(0xBF886248)));
extern volatile uint32_t        ODCCINV __attribute__((section("sfrs"),address(0xBF88624C)));
#define CNPUC CNPUC
extern volatile uint32_t   CNPUC __attribute__((section("sfrs"), address(0xBF886250)));
typedef union {
  struct {
    uint32_t CNPUC0:1;
    uint32_t CNPUC1:1;
    uint32_t CNPUC2:1;
    uint32_t CNPUC3:1;
    uint32_t CNPUC4:1;
    uint32_t CNPUC5:1;
    uint32_t CNPUC6:1;
    uint32_t CNPUC7:1;
    uint32_t CNPUC8:1;
    uint32_t CNPUC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUCbits_t;
extern volatile __CNPUCbits_t CNPUCbits __asm__ ("CNPUC") __attribute__((section("sfrs"), address(0xBF886250)));
extern volatile uint32_t        CNPUCCLR __attribute__((section("sfrs"),address(0xBF886254)));
extern volatile uint32_t        CNPUCSET __attribute__((section("sfrs"),address(0xBF886258)));
extern volatile uint32_t        CNPUCINV __attribute__((section("sfrs"),address(0xBF88625C)));
#define CNPDC CNPDC
extern volatile uint32_t   CNPDC __attribute__((section("sfrs"), address(0xBF886260)));
typedef union {
  struct {
    uint32_t CNPDC0:1;
    uint32_t CNPDC1:1;
    uint32_t CNPDC2:1;
    uint32_t CNPDC3:1;
    uint32_t CNPDC4:1;
    uint32_t CNPDC5:1;
    uint32_t CNPDC6:1;
    uint32_t CNPDC7:1;
    uint32_t CNPDC8:1;
    uint32_t CNPDC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDCbits_t;
extern volatile __CNPDCbits_t CNPDCbits __asm__ ("CNPDC") __attribute__((section("sfrs"), address(0xBF886260)));
extern volatile uint32_t        CNPDCCLR __attribute__((section("sfrs"),address(0xBF886264)));
extern volatile uint32_t        CNPDCSET __attribute__((section("sfrs"),address(0xBF886268)));
extern volatile uint32_t        CNPDCINV __attribute__((section("sfrs"),address(0xBF88626C)));
#define CNCONC CNCONC
extern volatile uint32_t   CNCONC __attribute__((section("sfrs"), address(0xBF886270)));
typedef union {
  struct {
    uint32_t :13;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONCbits_t;
extern volatile __CNCONCbits_t CNCONCbits __asm__ ("CNCONC") __attribute__((section("sfrs"), address(0xBF886270)));
extern volatile uint32_t        CNCONCCLR __attribute__((section("sfrs"),address(0xBF886274)));
extern volatile uint32_t        CNCONCSET __attribute__((section("sfrs"),address(0xBF886278)));
extern volatile uint32_t        CNCONCINV __attribute__((section("sfrs"),address(0xBF88627C)));
#define CNENC CNENC
extern volatile uint32_t   CNENC __attribute__((section("sfrs"), address(0xBF886280)));
typedef union {
  struct {
    uint32_t CNIEC0:1;
    uint32_t CNIEC1:1;
    uint32_t CNIEC2:1;
    uint32_t CNIEC3:1;
    uint32_t CNIEC4:1;
    uint32_t CNIEC5:1;
    uint32_t CNIEC6:1;
    uint32_t CNIEC7:1;
    uint32_t CNIEC8:1;
    uint32_t CNIEC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENCbits_t;
extern volatile __CNENCbits_t CNENCbits __asm__ ("CNENC") __attribute__((section("sfrs"), address(0xBF886280)));
extern volatile uint32_t        CNENCCLR __attribute__((section("sfrs"),address(0xBF886284)));
extern volatile uint32_t        CNENCSET __attribute__((section("sfrs"),address(0xBF886288)));
extern volatile uint32_t        CNENCINV __attribute__((section("sfrs"),address(0xBF88628C)));
#define CNSTATC CNSTATC
extern volatile uint32_t   CNSTATC __attribute__((section("sfrs"), address(0xBF886290)));
typedef union {
  struct {
    uint32_t CNSTATC0:1;
    uint32_t CNSTATC1:1;
    uint32_t CNSTATC2:1;
    uint32_t CNSTATC3:1;
    uint32_t CNSTATC4:1;
    uint32_t CNSTATC5:1;
    uint32_t CNSTATC6:1;
    uint32_t CNSTATC7:1;
    uint32_t CNSTATC8:1;
    uint32_t CNSTATC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATCbits_t;
extern volatile __CNSTATCbits_t CNSTATCbits __asm__ ("CNSTATC") __attribute__((section("sfrs"), address(0xBF886290)));
extern volatile uint32_t        CNSTATCCLR __attribute__((section("sfrs"),address(0xBF886294)));
extern volatile uint32_t        CNSTATCSET __attribute__((section("sfrs"),address(0xBF886298)));
extern volatile uint32_t        CNSTATCINV __attribute__((section("sfrs"),address(0xBF88629C)));
#define DEVCFG3 DEVCFG3
extern volatile uint32_t   DEVCFG3 __attribute__((section("sfrs"), address(0xBFC00BF0)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t :12;
    uint32_t PMDL1WAY:1;
    uint32_t IOL1WAY:1;
    uint32_t FUSBIDIO:1;
    uint32_t FVBUSONIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG3bits_t;
extern volatile __DEVCFG3bits_t DEVCFG3bits __asm__ ("DEVCFG3") __attribute__((section("sfrs"), address(0xBFC00BF0)));
#define DEVCFG2 DEVCFG2
extern volatile uint32_t   DEVCFG2 __attribute__((section("sfrs"), address(0xBFC00BF4)));
typedef union {
  struct {
    uint32_t FPLLIDIV:3;
    uint32_t :1;
    uint32_t FPLLMUL:3;
    uint32_t :1;
    uint32_t UPLLIDIV:3;
    uint32_t :4;
    uint32_t UPLLEN:1;
    uint32_t FPLLODIV:3;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG2bits_t;
extern volatile __DEVCFG2bits_t DEVCFG2bits __asm__ ("DEVCFG2") __attribute__((section("sfrs"), address(0xBFC00BF4)));
#define DEVCFG1 DEVCFG1
extern volatile uint32_t   DEVCFG1 __attribute__((section("sfrs"), address(0xBFC00BF8)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t :2;
    uint32_t FSOSCEN:1;
    uint32_t :1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :1;
    uint32_t FPBDIV:2;
    uint32_t FCKSM:2;
    uint32_t WDTPS:5;
    uint32_t :1;
    uint32_t WINDIS:1;
    uint32_t FWDTEN:1;
    uint32_t FWDTWINSZ:2;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG1bits_t;
extern volatile __DEVCFG1bits_t DEVCFG1bits __asm__ ("DEVCFG1") __attribute__((section("sfrs"), address(0xBFC00BF8)));
#define DEVCFG0 DEVCFG0
extern volatile uint32_t   DEVCFG0 __attribute__((section("sfrs"), address(0xBFC00BFC)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t JTAGEN:1;
    uint32_t ICESEL:2;
    uint32_t :5;
    uint32_t PWP:6;
    uint32_t :8;
    uint32_t BWP:1;
    uint32_t :3;
    uint32_t CP:1;
  };
  struct {
    uint32_t FDEBUG:2;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG0bits_t;
extern volatile __DEVCFG0bits_t DEVCFG0bits __asm__ ("DEVCFG0") __attribute__((section("sfrs"), address(0xBFC00BFC)));
#ifdef __cplusplus
}
#endif

#elif defined (__LANGUAGE_ASSEMBLY__)
  .extern WDTCON           /* 0xBF800000 */
  .extern WDTCONCLR        /* 0xBF800004 */
  .extern WDTCONSET        /* 0xBF800008 */
  .extern WDTCONINV        /* 0xBF80000C */
  .extern RTCCON           /* 0xBF800200 */
  .extern RTCCONCLR        /* 0xBF800204 */
  .extern RTCCONSET        /* 0xBF800208 */
  .extern RTCCONINV        /* 0xBF80020C */
  .extern RTCALRM          /* 0xBF800210 */
  .extern RTCALRMCLR       /* 0xBF800214 */
  .extern RTCALRMSET       /* 0xBF800218 */
  .extern RTCALRMINV       /* 0xBF80021C */
  .extern RTCTIME          /* 0xBF800220 */
  .extern RTCTIMECLR       /* 0xBF800224 */
  .extern RTCTIMESET       /* 0xBF800228 */
  .extern RTCTIMEINV       /* 0xBF80022C */
  .extern RTCDATE          /* 0xBF800230 */
  .extern RTCDATECLR       /* 0xBF800234 */
  .extern RTCDATESET       /* 0xBF800238 */
  .extern RTCDATEINV       /* 0xBF80023C */
  .extern ALRMTIME         /* 0xBF800240 */
  .extern ALRMTIMECLR      /* 0xBF800244 */
  .extern ALRMTIMESET      /* 0xBF800248 */
  .extern ALRMTIMEINV      /* 0xBF80024C */
  .extern ALRMDATE         /* 0xBF800250 */
  .extern ALRMDATECLR      /* 0xBF800254 */
  .extern ALRMDATESET      /* 0xBF800258 */
  .extern ALRMDATEINV      /* 0xBF80025C */
  .extern T1CON            /* 0xBF800600 */
  .extern T1CONCLR         /* 0xBF800604 */
  .extern T1CONSET         /* 0xBF800608 */
  .extern T1CONINV         /* 0xBF80060C */
  .extern TMR1             /* 0xBF800610 */
  .extern TMR1CLR          /* 0xBF800614 */
  .extern TMR1SET          /* 0xBF800618 */
  .extern TMR1INV          /* 0xBF80061C */
  .extern PR1              /* 0xBF800620 */
  .extern PR1CLR           /* 0xBF800624 */
  .extern PR1SET           /* 0xBF800628 */
  .extern PR1INV           /* 0xBF80062C */
  .extern T2CON            /* 0xBF800800 */
  .extern T2CONCLR         /* 0xBF800804 */
  .extern T2CONSET         /* 0xBF800808 */
  .extern T2CONINV         /* 0xBF80080C */
  .extern TMR2             /* 0xBF800810 */
  .extern TMR2CLR          /* 0xBF800814 */
  .extern TMR2SET          /* 0xBF800818 */
  .extern TMR2INV          /* 0xBF80081C */
  .extern PR2              /* 0xBF800820 */
  .extern PR2CLR           /* 0xBF800824 */
  .extern PR2SET           /* 0xBF800828 */
  .extern PR2INV           /* 0xBF80082C */
  .extern T3CON            /* 0xBF800A00 */
  .extern T3CONCLR         /* 0xBF800A04 */
  .extern T3CONSET         /* 0xBF800A08 */
  .extern T3CONINV         /* 0xBF800A0C */
  .extern TMR3             /* 0xBF800A10 */
  .extern TMR3CLR          /* 0xBF800A14 */
  .extern TMR3SET          /* 0xBF800A18 */
  .extern TMR3INV          /* 0xBF800A1C */
  .extern PR3              /* 0xBF800A20 */
  .extern PR3CLR           /* 0xBF800A24 */
  .extern PR3SET           /* 0xBF800A28 */
  .extern PR3INV           /* 0xBF800A2C */
  .extern T4CON            /* 0xBF800C00 */
  .extern T4CONCLR         /* 0xBF800C04 */
  .extern T4CONSET         /* 0xBF800C08 */
  .extern T4CONINV         /* 0xBF800C0C */
  .extern TMR4             /* 0xBF800C10 */
  .extern TMR4CLR          /* 0xBF800C14 */
  .extern TMR4SET          /* 0xBF800C18 */
  .extern TMR4INV          /* 0xBF800C1C */
  .extern PR4              /* 0xBF800C20 */
  .extern PR4CLR           /* 0xBF800C24 */
  .extern PR4SET           /* 0xBF800C28 */
  .extern PR4INV           /* 0xBF800C2C */
  .extern T5CON            /* 0xBF800E00 */
  .extern T5CONCLR         /* 0xBF800E04 */
  .extern T5CONSET         /* 0xBF800E08 */
  .extern T5CONINV         /* 0xBF800E0C */
  .extern TMR5             /* 0xBF800E10 */
  .extern TMR5CLR          /* 0xBF800E14 */
  .extern TMR5SET          /* 0xBF800E18 */
  .extern TMR5INV          /* 0xBF800E1C */
  .extern PR5              /* 0xBF800E20 */
  .extern PR5CLR           /* 0xBF800E24 */
  .extern PR5SET           /* 0xBF800E28 */
  .extern PR5INV           /* 0xBF800E2C */
  .extern IC1CON           /* 0xBF802000 */
  .extern IC1CONCLR        /* 0xBF802004 */
  .extern IC1CONSET        /* 0xBF802008 */
  .extern IC1CONINV        /* 0xBF80200C */
  .extern IC1BUF           /* 0xBF802010 */
  .extern IC2CON           /* 0xBF802200 */
  .extern IC2CONCLR        /* 0xBF802204 */
  .extern IC2CONSET        /* 0xBF802208 */
  .extern IC2CONINV        /* 0xBF80220C */
  .extern IC2BUF           /* 0xBF802210 */
  .extern IC3CON           /* 0xBF802400 */
  .extern IC3CONCLR        /* 0xBF802404 */
  .extern IC3CONSET        /* 0xBF802408 */
  .extern IC3CONINV        /* 0xBF80240C */
  .extern IC3BUF           /* 0xBF802410 */
  .extern IC4CON           /* 0xBF802600 */
  .extern IC4CONCLR        /* 0xBF802604 */
  .extern IC4CONSET        /* 0xBF802608 */
  .extern IC4CONINV        /* 0xBF80260C */
  .extern IC4BUF           /* 0xBF802610 */
  .extern IC5CON           /* 0xBF802800 */
  .extern IC5CONCLR        /* 0xBF802804 */
  .extern IC5CONSET        /* 0xBF802808 */
  .extern IC5CONINV        /* 0xBF80280C */
  .extern IC5BUF           /* 0xBF802810 */
  .extern OC1CON           /* 0xBF803000 */
  .extern OC1CONCLR        /* 0xBF803004 */
  .extern OC1CONSET        /* 0xBF803008 */
  .extern OC1CONINV        /* 0xBF80300C */
  .extern OC1R             /* 0xBF803010 */
  .extern OC1RCLR          /* 0xBF803014 */
  .extern OC1RSET          /* 0xBF803018 */
  .extern OC1RINV          /* 0xBF80301C */
  .extern OC1RS            /* 0xBF803020 */
  .extern OC1RSCLR         /* 0xBF803024 */
  .extern OC1RSSET         /* 0xBF803028 */
  .extern OC1RSINV         /* 0xBF80302C */
  .extern OC2CON           /* 0xBF803200 */
  .extern OC2CONCLR        /* 0xBF803204 */
  .extern OC2CONSET        /* 0xBF803208 */
  .extern OC2CONINV        /* 0xBF80320C */
  .extern OC2R             /* 0xBF803210 */
  .extern OC2RCLR          /* 0xBF803214 */
  .extern OC2RSET          /* 0xBF803218 */
  .extern OC2RINV          /* 0xBF80321C */
  .extern OC2RS            /* 0xBF803220 */
  .extern OC2RSCLR         /* 0xBF803224 */
  .extern OC2RSSET         /* 0xBF803228 */
  .extern OC2RSINV         /* 0xBF80322C */
  .extern OC3CON           /* 0xBF803400 */
  .extern OC3CONCLR        /* 0xBF803404 */
  .extern OC3CONSET        /* 0xBF803408 */
  .extern OC3CONINV        /* 0xBF80340C */
  .extern OC3R             /* 0xBF803410 */
  .extern OC3RCLR          /* 0xBF803414 */
  .extern OC3RSET          /* 0xBF803418 */
  .extern OC3RINV          /* 0xBF80341C */
  .extern OC3RS            /* 0xBF803420 */
  .extern OC3RSCLR         /* 0xBF803424 */
  .extern OC3RSSET         /* 0xBF803428 */
  .extern OC3RSINV         /* 0xBF80342C */
  .extern OC4CON           /* 0xBF803600 */
  .extern OC4CONCLR        /* 0xBF803604 */
  .extern OC4CONSET        /* 0xBF803608 */
  .extern OC4CONINV        /* 0xBF80360C */
  .extern OC4R             /* 0xBF803610 */
  .extern OC4RCLR          /* 0xBF803614 */
  .extern OC4RSET          /* 0xBF803618 */
  .extern OC4RINV          /* 0xBF80361C */
  .extern OC4RS            /* 0xBF803620 */
  .extern OC4RSCLR         /* 0xBF803624 */
  .extern OC4RSSET         /* 0xBF803628 */
  .extern OC4RSINV         /* 0xBF80362C */
  .extern OC5CON           /* 0xBF803800 */
  .extern OC5CONCLR        /* 0xBF803804 */
  .extern OC5CONSET        /* 0xBF803808 */
  .extern OC5CONINV        /* 0xBF80380C */
  .extern OC5R             /* 0xBF803810 */
  .extern OC5RCLR          /* 0xBF803814 */
  .extern OC5RSET          /* 0xBF803818 */
  .extern OC5RINV          /* 0xBF80381C */
  .extern OC5RS            /* 0xBF803820 */
  .extern OC5RSCLR         /* 0xBF803824 */
  .extern OC5RSSET         /* 0xBF803828 */
  .extern OC5RSINV         /* 0xBF80382C */
  .extern I2C1CON          /* 0xBF805000 */
  .extern I2C1ACON         /* 0xBF805000 */
  .extern I2C1CONCLR       /* 0xBF805004 */
  .extern I2C1ACONCLR      /* 0xBF805004 */
  .extern I2C1CONSET       /* 0xBF805008 */
  .extern I2C1ACONSET      /* 0xBF805008 */
  .extern I2C1CONINV       /* 0xBF80500C */
  .extern I2C1ACONINV      /* 0xBF80500C */
  .extern I2C1STAT         /* 0xBF805010 */
  .extern I2C1ASTAT        /* 0xBF805010 */
  .extern I2C1STATCLR      /* 0xBF805014 */
  .extern I2C1ASTATCLR     /* 0xBF805014 */
  .extern I2C1STATSET      /* 0xBF805018 */
  .extern I2C1ASTATSET     /* 0xBF805018 */
  .extern I2C1STATINV      /* 0xBF80501C */
  .extern I2C1ASTATINV     /* 0xBF80501C */
  .extern I2C1ADD          /* 0xBF805020 */
  .extern I2C1AADD         /* 0xBF805020 */
  .extern I2C1ADDCLR       /* 0xBF805024 */
  .extern I2C1AADDCLR      /* 0xBF805024 */
  .extern I2C1ADDSET       /* 0xBF805028 */
  .extern I2C1AADDSET      /* 0xBF805028 */
  .extern I2C1ADDINV       /* 0xBF80502C */
  .extern I2C1AADDINV      /* 0xBF80502C */
  .extern I2C1MSK          /* 0xBF805030 */
  .extern I2C1AMSK         /* 0xBF805030 */
  .extern I2C1MSKCLR       /* 0xBF805034 */
  .extern I2C1AMSKCLR      /* 0xBF805034 */
  .extern I2C1MSKSET       /* 0xBF805038 */
  .extern I2C1AMSKSET      /* 0xBF805038 */
  .extern I2C1MSKINV       /* 0xBF80503C */
  .extern I2C1AMSKINV      /* 0xBF80503C */
  .extern I2C1BRG          /* 0xBF805040 */
  .extern I2C1ABRG         /* 0xBF805040 */
  .extern I2C1BRGCLR       /* 0xBF805044 */
  .extern I2C1ABRGCLR      /* 0xBF805044 */
  .extern I2C1BRGSET       /* 0xBF805048 */
  .extern I2C1ABRGSET      /* 0xBF805048 */
  .extern I2C1BRGINV       /* 0xBF80504C */
  .extern I2C1ABRGINV      /* 0xBF80504C */
  .extern I2C1TRN          /* 0xBF805050 */
  .extern I2C1ATRN         /* 0xBF805050 */
  .extern I2C1TRNCLR       /* 0xBF805054 */
  .extern I2C1ATRNCLR      /* 0xBF805054 */
  .extern I2C1TRNSET       /* 0xBF805058 */
  .extern I2C1ATRNSET      /* 0xBF805058 */
  .extern I2C1TRNINV       /* 0xBF80505C */
  .extern I2C1ATRNINV      /* 0xBF80505C */
  .extern I2C1RCV          /* 0xBF805060 */
  .extern I2C1ARCV         /* 0xBF805060 */
  .extern I2C2CON          /* 0xBF805100 */
  .extern I2C2ACON         /* 0xBF805100 */
  .extern I2C2CONCLR       /* 0xBF805104 */
  .extern I2C2ACONCLR      /* 0xBF805104 */
  .extern I2C2CONSET       /* 0xBF805108 */
  .extern I2C2ACONSET      /* 0xBF805108 */
  .extern I2C2CONINV       /* 0xBF80510C */
  .extern I2C2ACONINV      /* 0xBF80510C */
  .extern I2C2STAT         /* 0xBF805110 */
  .extern I2C2ASTAT        /* 0xBF805110 */
  .extern I2C2STATCLR      /* 0xBF805114 */
  .extern I2C2ASTATCLR     /* 0xBF805114 */
  .extern I2C2STATSET      /* 0xBF805118 */
  .extern I2C2ASTATSET     /* 0xBF805118 */
  .extern I2C2STATINV      /* 0xBF80511C */
  .extern I2C2ASTATINV     /* 0xBF80511C */
  .extern I2C2ADD          /* 0xBF805120 */
  .extern I2C2AADD         /* 0xBF805120 */
  .extern I2C2ADDCLR       /* 0xBF805124 */
  .extern I2C2AADDCLR      /* 0xBF805124 */
  .extern I2C2ADDSET       /* 0xBF805128 */
  .extern I2C2AADDSET      /* 0xBF805128 */
  .extern I2C2ADDINV       /* 0xBF80512C */
  .extern I2C2AADDINV      /* 0xBF80512C */
  .extern I2C2MSK          /* 0xBF805130 */
  .extern I2C2AMSK         /* 0xBF805130 */
  .extern I2C2MSKCLR       /* 0xBF805134 */
  .extern I2C2AMSKCLR      /* 0xBF805134 */
  .extern I2C2MSKSET       /* 0xBF805138 */
  .extern I2C2AMSKSET      /* 0xBF805138 */
  .extern I2C2MSKINV       /* 0xBF80513C */
  .extern I2C2AMSKINV      /* 0xBF80513C */
  .extern I2C2BRG          /* 0xBF805140 */
  .extern I2C2ABRG         /* 0xBF805140 */
  .extern I2C2BRGCLR       /* 0xBF805144 */
  .extern I2C2ABRGCLR      /* 0xBF805144 */
  .extern I2C2BRGSET       /* 0xBF805148 */
  .extern I2C2ABRGSET      /* 0xBF805148 */
  .extern I2C2BRGINV       /* 0xBF80514C */
  .extern I2C2ABRGINV      /* 0xBF80514C */
  .extern I2C2TRN          /* 0xBF805150 */
  .extern I2C2ATRN         /* 0xBF805150 */
  .extern I2C2TRNCLR       /* 0xBF805154 */
  .extern I2C2ATRNCLR      /* 0xBF805154 */
  .extern I2C2TRNSET       /* 0xBF805158 */
  .extern I2C2ATRNSET      /* 0xBF805158 */
  .extern I2C2TRNINV       /* 0xBF80515C */
  .extern I2C2ATRNINV      /* 0xBF80515C */
  .extern I2C2RCV          /* 0xBF805160 */
  .extern I2C2ARCV         /* 0xBF805160 */
  .extern SPI1CON          /* 0xBF805800 */
  .extern SPI1CONCLR       /* 0xBF805804 */
  .extern SPI1CONSET       /* 0xBF805808 */
  .extern SPI1CONINV       /* 0xBF80580C */
  .extern SPI1STAT         /* 0xBF805810 */
  .extern SPI1STATCLR      /* 0xBF805814 */
  .extern SPI1STATSET      /* 0xBF805818 */
  .extern SPI1STATINV      /* 0xBF80581C */
  .extern SPI1BUF          /* 0xBF805820 */
  .extern SPI1BRG          /* 0xBF805830 */
  .extern SPI1BRGCLR       /* 0xBF805834 */
  .extern SPI1BRGSET       /* 0xBF805838 */
  .extern SPI1BRGINV       /* 0xBF80583C */
  .extern SPI1CON2         /* 0xBF805840 */
  .extern SPI1CON2CLR      /* 0xBF805844 */
  .extern SPI1CON2SET      /* 0xBF805848 */
  .extern SPI1CON2INV      /* 0xBF80584C */
  .extern SPI2CON          /* 0xBF805A00 */
  .extern SPI2CONCLR       /* 0xBF805A04 */
  .extern SPI2CONSET       /* 0xBF805A08 */
  .extern SPI2CONINV       /* 0xBF805A0C */
  .extern SPI2STAT         /* 0xBF805A10 */
  .extern SPI2STATCLR      /* 0xBF805A14 */
  .extern SPI2STATSET      /* 0xBF805A18 */
  .extern SPI2STATINV      /* 0xBF805A1C */
  .extern SPI2BUF          /* 0xBF805A20 */
  .extern SPI2BRG          /* 0xBF805A30 */
  .extern SPI2BRGCLR       /* 0xBF805A34 */
  .extern SPI2BRGSET       /* 0xBF805A38 */
  .extern SPI2BRGINV       /* 0xBF805A3C */
  .extern SPI2CON2         /* 0xBF805A40 */
  .extern SPI2CON2CLR      /* 0xBF805A44 */
  .extern SPI2CON2SET      /* 0xBF805A48 */
  .extern SPI2CON2INV      /* 0xBF805A4C */
  .extern U1MODE           /* 0xBF806000 */
  .extern U1AMODE          /* 0xBF806000 */
  .extern U1MODECLR        /* 0xBF806004 */
  .extern U1AMODECLR       /* 0xBF806004 */
  .extern U1MODESET        /* 0xBF806008 */
  .extern U1AMODESET       /* 0xBF806008 */
  .extern U1MODEINV        /* 0xBF80600C */
  .extern U1AMODEINV       /* 0xBF80600C */
  .extern U1STA            /* 0xBF806010 */
  .extern U1ASTA           /* 0xBF806010 */
  .extern U1STACLR         /* 0xBF806014 */
  .extern U1ASTACLR        /* 0xBF806014 */
  .extern U1STASET         /* 0xBF806018 */
  .extern U1ASTASET        /* 0xBF806018 */
  .extern U1STAINV         /* 0xBF80601C */
  .extern U1ASTAINV        /* 0xBF80601C */
  .extern U1TXREG          /* 0xBF806020 */
  .extern U1ATXREG         /* 0xBF806020 */
  .extern U1RXREG          /* 0xBF806030 */
  .extern U1ARXREG         /* 0xBF806030 */
  .extern U1BRG            /* 0xBF806040 */
  .extern U1ABRG           /* 0xBF806040 */
  .extern U1BRGCLR         /* 0xBF806044 */
  .extern U1ABRGCLR        /* 0xBF806044 */
  .extern U1BRGSET         /* 0xBF806048 */
  .extern U1ABRGSET        /* 0xBF806048 */
  .extern U1BRGINV         /* 0xBF80604C */
  .extern U1ABRGINV        /* 0xBF80604C */
  .extern U2MODE           /* 0xBF806200 */
  .extern U3AMODE          /* 0xBF806200 */
  .extern U2MODECLR        /* 0xBF806204 */
  .extern U3AMODECLR       /* 0xBF806204 */
  .extern U2MODESET        /* 0xBF806208 */
  .extern U3AMODESET       /* 0xBF806208 */
  .extern U2MODEINV        /* 0xBF80620C */
  .extern U3AMODEINV       /* 0xBF80620C */
  .extern U2STA            /* 0xBF806210 */
  .extern U3ASTA           /* 0xBF806210 */
  .extern U2STACLR         /* 0xBF806214 */
  .extern U3ASTACLR        /* 0xBF806214 */
  .extern U2STASET         /* 0xBF806218 */
  .extern U3ASTASET        /* 0xBF806218 */
  .extern U2STAINV         /* 0xBF80621C */
  .extern U3ASTAINV        /* 0xBF80621C */
  .extern U2TXREG          /* 0xBF806220 */
  .extern U3ATXREG         /* 0xBF806220 */
  .extern U2RXREG          /* 0xBF806230 */
  .extern U3ARXREG         /* 0xBF806230 */
  .extern U2BRG            /* 0xBF806240 */
  .extern U3ABRG           /* 0xBF806240 */
  .extern U2BRGCLR         /* 0xBF806244 */
  .extern U3ABRGCLR        /* 0xBF806244 */
  .extern U2BRGSET         /* 0xBF806248 */
  .extern U3ABRGSET        /* 0xBF806248 */
  .extern U2BRGINV         /* 0xBF80624C */
  .extern U3ABRGINV        /* 0xBF80624C */
  .extern PMCON            /* 0xBF807000 */
  .extern PMCONCLR         /* 0xBF807004 */
  .extern PMCONSET         /* 0xBF807008 */
  .extern PMCONINV         /* 0xBF80700C */
  .extern PMMODE           /* 0xBF807010 */
  .extern PMMODECLR        /* 0xBF807014 */
  .extern PMMODESET        /* 0xBF807018 */
  .extern PMMODEINV        /* 0xBF80701C */
  .extern PMADDR           /* 0xBF807020 */
  .extern PMADDRCLR        /* 0xBF807024 */
  .extern PMADDRSET        /* 0xBF807028 */
  .extern PMADDRINV        /* 0xBF80702C */
  .extern PMDOUT           /* 0xBF807030 */
  .extern PMDOUTCLR        /* 0xBF807034 */
  .extern PMDOUTSET        /* 0xBF807038 */
  .extern PMDOUTINV        /* 0xBF80703C */
  .extern PMDIN            /* 0xBF807040 */
  .extern PMDINCLR         /* 0xBF807044 */
  .extern PMDINSET         /* 0xBF807048 */
  .extern PMDININV         /* 0xBF80704C */
  .extern PMAEN            /* 0xBF807050 */
  .extern PMAENCLR         /* 0xBF807054 */
  .extern PMAENSET         /* 0xBF807058 */
  .extern PMAENINV         /* 0xBF80705C */
  .extern PMSTAT           /* 0xBF807060 */
  .extern PMSTATCLR        /* 0xBF807064 */
  .extern PMSTATSET        /* 0xBF807068 */
  .extern PMSTATINV        /* 0xBF80706C */
  .extern AD1CON1          /* 0xBF809000 */
  .extern AD1CON1CLR       /* 0xBF809004 */
  .extern AD1CON1SET       /* 0xBF809008 */
  .extern AD1CON1INV       /* 0xBF80900C */
  .extern AD1CON2          /* 0xBF809010 */
  .extern AD1CON2CLR       /* 0xBF809014 */
  .extern AD1CON2SET       /* 0xBF809018 */
  .extern AD1CON2INV       /* 0xBF80901C */
  .extern AD1CON3          /* 0xBF809020 */
  .extern AD1CON3CLR       /* 0xBF809024 */
  .extern AD1CON3SET       /* 0xBF809028 */
  .extern AD1CON3INV       /* 0xBF80902C */
  .extern AD1CHS           /* 0xBF809040 */
  .extern AD1CHSCLR        /* 0xBF809044 */
  .extern AD1CHSSET        /* 0xBF809048 */
  .extern AD1CHSINV        /* 0xBF80904C */
  .extern AD1CSSL          /* 0xBF809050 */
  .extern AD1CSSLCLR       /* 0xBF809054 */
  .extern AD1CSSLSET       /* 0xBF809058 */
  .extern AD1CSSLINV       /* 0xBF80905C */
  .extern ADC1BUF0         /* 0xBF809070 */
  .extern ADC1BUF1         /* 0xBF809080 */
  .extern ADC1BUF2         /* 0xBF809090 */
  .extern ADC1BUF3         /* 0xBF8090A0 */
  .extern ADC1BUF4         /* 0xBF8090B0 */
  .extern ADC1BUF5         /* 0xBF8090C0 */
  .extern ADC1BUF6         /* 0xBF8090D0 */
  .extern ADC1BUF7         /* 0xBF8090E0 */
  .extern ADC1BUF8         /* 0xBF8090F0 */
  .extern ADC1BUF9         /* 0xBF809100 */
  .extern ADC1BUFA         /* 0xBF809110 */
  .extern ADC1BUFB         /* 0xBF809120 */
  .extern ADC1BUFC         /* 0xBF809130 */
  .extern ADC1BUFD         /* 0xBF809140 */
  .extern ADC1BUFE         /* 0xBF809150 */
  .extern ADC1BUFF         /* 0xBF809160 */
  .extern CVRCON           /* 0xBF809800 */
  .extern CVRCONCLR        /* 0xBF809804 */
  .extern CVRCONSET        /* 0xBF809808 */
  .extern CVRCONINV        /* 0xBF80980C */
  .extern CM1CON           /* 0xBF80A000 */
  .extern CM1CONCLR        /* 0xBF80A004 */
  .extern CM1CONSET        /* 0xBF80A008 */
  .extern CM1CONINV        /* 0xBF80A00C */
  .extern CM2CON           /* 0xBF80A010 */
  .extern CM2CONCLR        /* 0xBF80A014 */
  .extern CM2CONSET        /* 0xBF80A018 */
  .extern CM2CONINV        /* 0xBF80A01C */
  .extern CM3CON           /* 0xBF80A020 */
  .extern CM3CONCLR        /* 0xBF80A024 */
  .extern CM3CONSET        /* 0xBF80A028 */
  .extern CM3CONINV        /* 0xBF80A02C */
  .extern CMSTAT           /* 0xBF80A060 */
  .extern CMSTATCLR        /* 0xBF80A064 */
  .extern CMSTATSET        /* 0xBF80A068 */
  .extern CMSTATINV        /* 0xBF80A06C */
  .extern CTMUCON          /* 0xBF80A200 */
  .extern CTMUCONCLR       /* 0xBF80A204 */
  .extern CTMUCONSET       /* 0xBF80A208 */
  .extern CTMUCONINV       /* 0xBF80A20C */
  .extern OSCCON           /* 0xBF80F000 */
  .extern OSCCONCLR        /* 0xBF80F004 */
  .extern OSCCONSET        /* 0xBF80F008 */
  .extern OSCCONINV        /* 0xBF80F00C */
  .extern OSCTUN           /* 0xBF80F010 */
  .extern OSCTUNCLR        /* 0xBF80F014 */
  .extern OSCTUNSET        /* 0xBF80F018 */
  .extern OSCTUNINV        /* 0xBF80F01C */
  .extern REFOCON          /* 0xBF80F020 */
  .extern REFOCONCLR       /* 0xBF80F024 */
  .extern REFOCONSET       /* 0xBF80F028 */
  .extern REFOCONINV       /* 0xBF80F02C */
  .extern REFOTRIM         /* 0xBF80F030 */
  .extern REFOTRIMCLR      /* 0xBF80F034 */
  .extern REFOTRIMSET      /* 0xBF80F038 */
  .extern REFOTRIMINV      /* 0xBF80F03C */
  .extern CFGCON           /* 0xBF80F200 */
  .extern DDPCON           /* 0xBF80F200 */
  .extern DEVID            /* 0xBF80F220 */
  .extern SYSKEY           /* 0xBF80F230 */
  .extern SYSKEYCLR        /* 0xBF80F234 */
  .extern SYSKEYSET        /* 0xBF80F238 */
  .extern SYSKEYINV        /* 0xBF80F23C */
  .extern PMD1             /* 0xBF80F240 */
  .extern PMD1CLR          /* 0xBF80F244 */
  .extern PMD1SET          /* 0xBF80F248 */
  .extern PMD1INV          /* 0xBF80F24C */
  .extern PMD2             /* 0xBF80F250 */
  .extern PMD2CLR          /* 0xBF80F254 */
  .extern PMD2SET          /* 0xBF80F258 */
  .extern PMD2INV          /* 0xBF80F25C */
  .extern PMD3             /* 0xBF80F260 */
  .extern PMD3CLR          /* 0xBF80F264 */
  .extern PMD3SET          /* 0xBF80F268 */
  .extern PMD3INV          /* 0xBF80F26C */
  .extern PMD4             /* 0xBF80F270 */
  .extern PMD4CLR          /* 0xBF80F274 */
  .extern PMD4SET          /* 0xBF80F278 */
  .extern PMD4INV          /* 0xBF80F27C */
  .extern PMD5             /* 0xBF80F280 */
  .extern PMD5CLR          /* 0xBF80F284 */
  .extern PMD5SET          /* 0xBF80F288 */
  .extern PMD5INV          /* 0xBF80F28C */
  .extern PMD6             /* 0xBF80F290 */
  .extern PMD6CLR          /* 0xBF80F294 */
  .extern PMD6SET          /* 0xBF80F298 */
  .extern PMD6INV          /* 0xBF80F29C */
  .extern NVMCON           /* 0xBF80F400 */
  .extern NVMCONCLR        /* 0xBF80F404 */
  .extern NVMCONSET        /* 0xBF80F408 */
  .extern NVMCONINV        /* 0xBF80F40C */
  .extern NVMKEY           /* 0xBF80F410 */
  .extern NVMADDR          /* 0xBF80F420 */
  .extern NVMADDRCLR       /* 0xBF80F424 */
  .extern NVMADDRSET       /* 0xBF80F428 */
  .extern NVMADDRINV       /* 0xBF80F42C */
  .extern NVMDATA          /* 0xBF80F430 */
  .extern NVMSRCADDR       /* 0xBF80F440 */
  .extern RCON             /* 0xBF80F600 */
  .extern RCONCLR          /* 0xBF80F604 */
  .extern RCONSET          /* 0xBF80F608 */
  .extern RCONINV          /* 0xBF80F60C */
  .extern RSWRST           /* 0xBF80F610 */
  .extern RSWRSTCLR        /* 0xBF80F614 */
  .extern RSWRSTSET        /* 0xBF80F618 */
  .extern RSWRSTINV        /* 0xBF80F61C */
  .extern INT1R            /* 0xBF80FA04 */
  .extern INT2R            /* 0xBF80FA08 */
  .extern INT3R            /* 0xBF80FA0C */
  .extern INT4R            /* 0xBF80FA10 */
  .extern T2CKR            /* 0xBF80FA18 */
  .extern T3CKR            /* 0xBF80FA1C */
  .extern T4CKR            /* 0xBF80FA20 */
  .extern T5CKR            /* 0xBF80FA24 */
  .extern IC1R             /* 0xBF80FA28 */
  .extern IC2R             /* 0xBF80FA2C */
  .extern IC3R             /* 0xBF80FA30 */
  .extern IC4R             /* 0xBF80FA34 */
  .extern IC5R             /* 0xBF80FA38 */
  .extern OCFAR            /* 0xBF80FA48 */
  .extern OCFBR            /* 0xBF80FA4C */
  .extern U1RXR            /* 0xBF80FA50 */
  .extern U1CTSR           /* 0xBF80FA54 */
  .extern U2RXR            /* 0xBF80FA58 */
  .extern U2CTSR           /* 0xBF80FA5C */
  .extern SDI1R            /* 0xBF80FA84 */
  .extern SS1R             /* 0xBF80FA88 */
  .extern SDI2R            /* 0xBF80FA90 */
  .extern SS2R             /* 0xBF80FA94 */
  .extern REFCLKIR         /* 0xBF80FAB8 */
  .extern RPA0R            /* 0xBF80FB00 */
  .extern RPA1R            /* 0xBF80FB04 */
  .extern RPA2R            /* 0xBF80FB08 */
  .extern RPA3R            /* 0xBF80FB0C */
  .extern RPA4R            /* 0xBF80FB10 */
  .extern RPA8R            /* 0xBF80FB20 */
  .extern RPA9R            /* 0xBF80FB24 */
  .extern RPB0R            /* 0xBF80FB2C */
  .extern RPB1R            /* 0xBF80FB30 */
  .extern RPB2R            /* 0xBF80FB34 */
  .extern RPB3R            /* 0xBF80FB38 */
  .extern RPB4R            /* 0xBF80FB3C */
  .extern RPB5R            /* 0xBF80FB40 */
  .extern RPB7R            /* 0xBF80FB48 */
  .extern RPB8R            /* 0xBF80FB4C */
  .extern RPB9R            /* 0xBF80FB50 */
  .extern RPB10R           /* 0xBF80FB54 */
  .extern RPB11R           /* 0xBF80FB58 */
  .extern RPB13R           /* 0xBF80FB60 */
  .extern RPB14R           /* 0xBF80FB64 */
  .extern RPB15R           /* 0xBF80FB68 */
  .extern RPC0R            /* 0xBF80FB6C */
  .extern RPC1R            /* 0xBF80FB70 */
  .extern RPC2R            /* 0xBF80FB74 */
  .extern RPC3R            /* 0xBF80FB78 */
  .extern RPC4R            /* 0xBF80FB7C */
  .extern RPC5R            /* 0xBF80FB80 */
  .extern RPC6R            /* 0xBF80FB84 */
  .extern RPC7R            /* 0xBF80FB88 */
  .extern RPC8R            /* 0xBF80FB8C */
  .extern RPC9R            /* 0xBF80FB90 */
  .extern INTCON           /* 0xBF881000 */
  .extern INTCONCLR        /* 0xBF881004 */
  .extern INTCONSET        /* 0xBF881008 */
  .extern INTCONINV        /* 0xBF88100C */
  .extern INTSTAT          /* 0xBF881010 */
  .extern IPTMR            /* 0xBF881020 */
  .extern IPTMRCLR         /* 0xBF881024 */
  .extern IPTMRSET         /* 0xBF881028 */
  .extern IPTMRINV         /* 0xBF88102C */
  .extern IFS0             /* 0xBF881030 */
  .extern IFS0CLR          /* 0xBF881034 */
  .extern IFS0SET          /* 0xBF881038 */
  .extern IFS0INV          /* 0xBF88103C */
  .extern IFS1             /* 0xBF881040 */
  .extern IFS1CLR          /* 0xBF881044 */
  .extern IFS1SET          /* 0xBF881048 */
  .extern IFS1INV          /* 0xBF88104C */
  .extern IEC0             /* 0xBF881060 */
  .extern IEC0CLR          /* 0xBF881064 */
  .extern IEC0SET          /* 0xBF881068 */
  .extern IEC0INV          /* 0xBF88106C */
  .extern IEC1             /* 0xBF881070 */
  .extern IEC1CLR          /* 0xBF881074 */
  .extern IEC1SET          /* 0xBF881078 */
  .extern IEC1INV          /* 0xBF88107C */
  .extern IPC0             /* 0xBF881090 */
  .extern IPC0CLR          /* 0xBF881094 */
  .extern IPC0SET          /* 0xBF881098 */
  .extern IPC0INV          /* 0xBF88109C */
  .extern IPC1             /* 0xBF8810A0 */
  .extern IPC1CLR          /* 0xBF8810A4 */
  .extern IPC1SET          /* 0xBF8810A8 */
  .extern IPC1INV          /* 0xBF8810AC */
  .extern IPC2             /* 0xBF8810B0 */
  .extern IPC2CLR          /* 0xBF8810B4 */
  .extern IPC2SET          /* 0xBF8810B8 */
  .extern IPC2INV          /* 0xBF8810BC */
  .extern IPC3             /* 0xBF8810C0 */
  .extern IPC3CLR          /* 0xBF8810C4 */
  .extern IPC3SET          /* 0xBF8810C8 */
  .extern IPC3INV          /* 0xBF8810CC */
  .extern IPC4             /* 0xBF8810D0 */
  .extern IPC4CLR          /* 0xBF8810D4 */
  .extern IPC4SET          /* 0xBF8810D8 */
  .extern IPC4INV          /* 0xBF8810DC */
  .extern IPC5             /* 0xBF8810E0 */
  .extern IPC5CLR          /* 0xBF8810E4 */
  .extern IPC5SET          /* 0xBF8810E8 */
  .extern IPC5INV          /* 0xBF8810EC */
  .extern IPC6             /* 0xBF8810F0 */
  .extern IPC6CLR          /* 0xBF8810F4 */
  .extern IPC6SET          /* 0xBF8810F8 */
  .extern IPC6INV          /* 0xBF8810FC */
  .extern IPC7             /* 0xBF881100 */
  .extern IPC7CLR          /* 0xBF881104 */
  .extern IPC7SET          /* 0xBF881108 */
  .extern IPC7INV          /* 0xBF88110C */
  .extern IPC8             /* 0xBF881110 */
  .extern IPC8CLR          /* 0xBF881114 */
  .extern IPC8SET          /* 0xBF881118 */
  .extern IPC8INV          /* 0xBF88111C */
  .extern IPC9             /* 0xBF881120 */
  .extern IPC9CLR          /* 0xBF881124 */
  .extern IPC9SET          /* 0xBF881128 */
  .extern IPC9INV          /* 0xBF88112C */
  .extern IPC10            /* 0xBF881130 */
  .extern IPC10CLR         /* 0xBF881134 */
  .extern IPC10SET         /* 0xBF881138 */
  .extern IPC10INV         /* 0xBF88113C */
  .extern BMXCON           /* 0xBF882000 */
  .extern BMXCONCLR        /* 0xBF882004 */
  .extern BMXCONSET        /* 0xBF882008 */
  .extern BMXCONINV        /* 0xBF88200C */
  .extern BMXDKPBA         /* 0xBF882010 */
  .extern BMXDKPBACLR      /* 0xBF882014 */
  .extern BMXDKPBASET      /* 0xBF882018 */
  .extern BMXDKPBAINV      /* 0xBF88201C */
  .extern BMXDUDBA         /* 0xBF882020 */
  .extern BMXDUDBACLR      /* 0xBF882024 */
  .extern BMXDUDBASET      /* 0xBF882028 */
  .extern BMXDUDBAINV      /* 0xBF88202C */
  .extern BMXDUPBA         /* 0xBF882030 */
  .extern BMXDUPBACLR      /* 0xBF882034 */
  .extern BMXDUPBASET      /* 0xBF882038 */
  .extern BMXDUPBAINV      /* 0xBF88203C */
  .extern BMXDRMSZ         /* 0xBF882040 */
  .extern BMXPUPBA         /* 0xBF882050 */
  .extern BMXPUPBACLR      /* 0xBF882054 */
  .extern BMXPUPBASET      /* 0xBF882058 */
  .extern BMXPUPBAINV      /* 0xBF88205C */
  .extern BMXPFMSZ         /* 0xBF882060 */
  .extern BMXBOOTSZ        /* 0xBF882070 */
  .extern DMACON           /* 0xBF883000 */
  .extern DMACONCLR        /* 0xBF883004 */
  .extern DMACONSET        /* 0xBF883008 */
  .extern DMACONINV        /* 0xBF88300C */
  .extern DMASTAT          /* 0xBF883010 */
  .extern DMASTATCLR       /* 0xBF883014 */
  .extern DMASTATSET       /* 0xBF883018 */
  .extern DMASTATINV       /* 0xBF88301C */
  .extern DMAADDR          /* 0xBF883020 */
  .extern DMAADDRCLR       /* 0xBF883024 */
  .extern DMAADDRSET       /* 0xBF883028 */
  .extern DMAADDRINV       /* 0xBF88302C */
  .extern DCRCCON          /* 0xBF883030 */
  .extern DCRCCONCLR       /* 0xBF883034 */
  .extern DCRCCONSET       /* 0xBF883038 */
  .extern DCRCCONINV       /* 0xBF88303C */
  .extern DCRCDATA         /* 0xBF883040 */
  .extern DCRCDATACLR      /* 0xBF883044 */
  .extern DCRCDATASET      /* 0xBF883048 */
  .extern DCRCDATAINV      /* 0xBF88304C */
  .extern DCRCXOR          /* 0xBF883050 */
  .extern DCRCXORCLR       /* 0xBF883054 */
  .extern DCRCXORSET       /* 0xBF883058 */
  .extern DCRCXORINV       /* 0xBF88305C */
  .extern DCH0CON          /* 0xBF883060 */
  .extern DCH0CONCLR       /* 0xBF883064 */
  .extern DCH0CONSET       /* 0xBF883068 */
  .extern DCH0CONINV       /* 0xBF88306C */
  .extern DCH0ECON         /* 0xBF883070 */
  .extern DCH0ECONCLR      /* 0xBF883074 */
  .extern DCH0ECONSET      /* 0xBF883078 */
  .extern DCH0ECONINV      /* 0xBF88307C */
  .extern DCH0INT          /* 0xBF883080 */
  .extern DCH0INTCLR       /* 0xBF883084 */
  .extern DCH0INTSET       /* 0xBF883088 */
  .extern DCH0INTINV       /* 0xBF88308C */
  .extern DCH0SSA          /* 0xBF883090 */
  .extern DCH0SSACLR       /* 0xBF883094 */
  .extern DCH0SSASET       /* 0xBF883098 */
  .extern DCH0SSAINV       /* 0xBF88309C */
  .extern DCH0DSA          /* 0xBF8830A0 */
  .extern DCH0DSACLR       /* 0xBF8830A4 */
  .extern DCH0DSASET       /* 0xBF8830A8 */
  .extern DCH0DSAINV       /* 0xBF8830AC */
  .extern DCH0SSIZ         /* 0xBF8830B0 */
  .extern DCH0SSIZCLR      /* 0xBF8830B4 */
  .extern DCH0SSIZSET      /* 0xBF8830B8 */
  .extern DCH0SSIZINV      /* 0xBF8830BC */
  .extern DCH0DSIZ         /* 0xBF8830C0 */
  .extern DCH0DSIZCLR      /* 0xBF8830C4 */
  .extern DCH0DSIZSET      /* 0xBF8830C8 */
  .extern DCH0DSIZINV      /* 0xBF8830CC */
  .extern DCH0SPTR         /* 0xBF8830D0 */
  .extern DCH0SPTRCLR      /* 0xBF8830D4 */
  .extern DCH0SPTRSET      /* 0xBF8830D8 */
  .extern DCH0SPTRINV      /* 0xBF8830DC */
  .extern DCH0DPTR         /* 0xBF8830E0 */
  .extern DCH0DPTRCLR      /* 0xBF8830E4 */
  .extern DCH0DPTRSET      /* 0xBF8830E8 */
  .extern DCH0DPTRINV      /* 0xBF8830EC */
  .extern DCH0CSIZ         /* 0xBF8830F0 */
  .extern DCH0CSIZCLR      /* 0xBF8830F4 */
  .extern DCH0CSIZSET      /* 0xBF8830F8 */
  .extern DCH0CSIZINV      /* 0xBF8830FC */
  .extern DCH0CPTR         /* 0xBF883100 */
  .extern DCH0CPTRCLR      /* 0xBF883104 */
  .extern DCH0CPTRSET      /* 0xBF883108 */
  .extern DCH0CPTRINV      /* 0xBF88310C */
  .extern DCH0DAT          /* 0xBF883110 */
  .extern DCH0DATCLR       /* 0xBF883114 */
  .extern DCH0DATSET       /* 0xBF883118 */
  .extern DCH0DATINV       /* 0xBF88311C */
  .extern DCH1CON          /* 0xBF883120 */
  .extern DCH1CONCLR       /* 0xBF883124 */
  .extern DCH1CONSET       /* 0xBF883128 */
  .extern DCH1CONINV       /* 0xBF88312C */
  .extern DCH1ECON         /* 0xBF883130 */
  .extern DCH1ECONCLR      /* 0xBF883134 */
  .extern DCH1ECONSET      /* 0xBF883138 */
  .extern DCH1ECONINV      /* 0xBF88313C */
  .extern DCH1INT          /* 0xBF883140 */
  .extern DCH1INTCLR       /* 0xBF883144 */
  .extern DCH1INTSET       /* 0xBF883148 */
  .extern DCH1INTINV       /* 0xBF88314C */
  .extern DCH1SSA          /* 0xBF883150 */
  .extern DCH1SSACLR       /* 0xBF883154 */
  .extern DCH1SSASET       /* 0xBF883158 */
  .extern DCH1SSAINV       /* 0xBF88315C */
  .extern DCH1DSA          /* 0xBF883160 */
  .extern DCH1DSACLR       /* 0xBF883164 */
  .extern DCH1DSASET       /* 0xBF883168 */
  .extern DCH1DSAINV       /* 0xBF88316C */
  .extern DCH1SSIZ         /* 0xBF883170 */
  .extern DCH1SSIZCLR      /* 0xBF883174 */
  .extern DCH1SSIZSET      /* 0xBF883178 */
  .extern DCH1SSIZINV      /* 0xBF88317C */
  .extern DCH1DSIZ         /* 0xBF883180 */
  .extern DCH1DSIZCLR      /* 0xBF883184 */
  .extern DCH1DSIZSET      /* 0xBF883188 */
  .extern DCH1DSIZINV      /* 0xBF88318C */
  .extern DCH1SPTR         /* 0xBF883190 */
  .extern DCH1SPTRCLR      /* 0xBF883194 */
  .extern DCH1SPTRSET      /* 0xBF883198 */
  .extern DCH1SPTRINV      /* 0xBF88319C */
  .extern DCH1DPTR         /* 0xBF8831A0 */
  .extern DCH1DPTRCLR      /* 0xBF8831A4 */
  .extern DCH1DPTRSET      /* 0xBF8831A8 */
  .extern DCH1DPTRINV      /* 0xBF8831AC */
  .extern DCH1CSIZ         /* 0xBF8831B0 */
  .extern DCH1CSIZCLR      /* 0xBF8831B4 */
  .extern DCH1CSIZSET      /* 0xBF8831B8 */
  .extern DCH1CSIZINV      /* 0xBF8831BC */
  .extern DCH1CPTR         /* 0xBF8831C0 */
  .extern DCH1CPTRCLR      /* 0xBF8831C4 */
  .extern DCH1CPTRSET      /* 0xBF8831C8 */
  .extern DCH1CPTRINV      /* 0xBF8831CC */
  .extern DCH1DAT          /* 0xBF8831D0 */
  .extern DCH1DATCLR       /* 0xBF8831D4 */
  .extern DCH1DATSET       /* 0xBF8831D8 */
  .extern DCH1DATINV       /* 0xBF8831DC */
  .extern DCH2CON          /* 0xBF8831E0 */
  .extern DCH2CONCLR       /* 0xBF8831E4 */
  .extern DCH2CONSET       /* 0xBF8831E8 */
  .extern DCH2CONINV       /* 0xBF8831EC */
  .extern DCH2ECON         /* 0xBF8831F0 */
  .extern DCH2ECONCLR      /* 0xBF8831F4 */
  .extern DCH2ECONSET      /* 0xBF8831F8 */
  .extern DCH2ECONINV      /* 0xBF8831FC */
  .extern DCH2INT          /* 0xBF883200 */
  .extern DCH2INTCLR       /* 0xBF883204 */
  .extern DCH2INTSET       /* 0xBF883208 */
  .extern DCH2INTINV       /* 0xBF88320C */
  .extern DCH2SSA          /* 0xBF883210 */
  .extern DCH2SSACLR       /* 0xBF883214 */
  .extern DCH2SSASET       /* 0xBF883218 */
  .extern DCH2SSAINV       /* 0xBF88321C */
  .extern DCH2DSA          /* 0xBF883220 */
  .extern DCH2DSACLR       /* 0xBF883224 */
  .extern DCH2DSASET       /* 0xBF883228 */
  .extern DCH2DSAINV       /* 0xBF88322C */
  .extern DCH2SSIZ         /* 0xBF883230 */
  .extern DCH2SSIZCLR      /* 0xBF883234 */
  .extern DCH2SSIZSET      /* 0xBF883238 */
  .extern DCH2SSIZINV      /* 0xBF88323C */
  .extern DCH2DSIZ         /* 0xBF883240 */
  .extern DCH2DSIZCLR      /* 0xBF883244 */
  .extern DCH2DSIZSET      /* 0xBF883248 */
  .extern DCH2DSIZINV      /* 0xBF88324C */
  .extern DCH2SPTR         /* 0xBF883250 */
  .extern DCH2SPTRCLR      /* 0xBF883254 */
  .extern DCH2SPTRSET      /* 0xBF883258 */
  .extern DCH2SPTRINV      /* 0xBF88325C */
  .extern DCH2DPTR         /* 0xBF883260 */
  .extern DCH2DPTRCLR      /* 0xBF883264 */
  .extern DCH2DPTRSET      /* 0xBF883268 */
  .extern DCH2DPTRINV      /* 0xBF88326C */
  .extern DCH2CSIZ         /* 0xBF883270 */
  .extern DCH2CSIZCLR      /* 0xBF883274 */
  .extern DCH2CSIZSET      /* 0xBF883278 */
  .extern DCH2CSIZINV      /* 0xBF88327C */
  .extern DCH2CPTR         /* 0xBF883280 */
  .extern DCH2CPTRCLR      /* 0xBF883284 */
  .extern DCH2CPTRSET      /* 0xBF883288 */
  .extern DCH2CPTRINV      /* 0xBF88328C */
  .extern DCH2DAT          /* 0xBF883290 */
  .extern DCH2DATCLR       /* 0xBF883294 */
  .extern DCH2DATSET       /* 0xBF883298 */
  .extern DCH2DATINV       /* 0xBF88329C */
  .extern DCH3CON          /* 0xBF8832A0 */
  .extern DCH3CONCLR       /* 0xBF8832A4 */
  .extern DCH3CONSET       /* 0xBF8832A8 */
  .extern DCH3CONINV       /* 0xBF8832AC */
  .extern DCH3ECON         /* 0xBF8832B0 */
  .extern DCH3ECONCLR      /* 0xBF8832B4 */
  .extern DCH3ECONSET      /* 0xBF8832B8 */
  .extern DCH3ECONINV      /* 0xBF8832BC */
  .extern DCH3INT          /* 0xBF8832C0 */
  .extern DCH3INTCLR       /* 0xBF8832C4 */
  .extern DCH3INTSET       /* 0xBF8832C8 */
  .extern DCH3INTINV       /* 0xBF8832CC */
  .extern DCH3SSA          /* 0xBF8832D0 */
  .extern DCH3SSACLR       /* 0xBF8832D4 */
  .extern DCH3SSASET       /* 0xBF8832D8 */
  .extern DCH3SSAINV       /* 0xBF8832DC */
  .extern DCH3DSA          /* 0xBF8832E0 */
  .extern DCH3DSACLR       /* 0xBF8832E4 */
  .extern DCH3DSASET       /* 0xBF8832E8 */
  .extern DCH3DSAINV       /* 0xBF8832EC */
  .extern DCH3SSIZ         /* 0xBF8832F0 */
  .extern DCH3SSIZCLR      /* 0xBF8832F4 */
  .extern DCH3SSIZSET      /* 0xBF8832F8 */
  .extern DCH3SSIZINV      /* 0xBF8832FC */
  .extern DCH3DSIZ         /* 0xBF883300 */
  .extern DCH3DSIZCLR      /* 0xBF883304 */
  .extern DCH3DSIZSET      /* 0xBF883308 */
  .extern DCH3DSIZINV      /* 0xBF88330C */
  .extern DCH3SPTR         /* 0xBF883310 */
  .extern DCH3SPTRCLR      /* 0xBF883314 */
  .extern DCH3SPTRSET      /* 0xBF883318 */
  .extern DCH3SPTRINV      /* 0xBF88331C */
  .extern DCH3DPTR         /* 0xBF883320 */
  .extern DCH3DPTRCLR      /* 0xBF883324 */
  .extern DCH3DPTRSET      /* 0xBF883328 */
  .extern DCH3DPTRINV      /* 0xBF88332C */
  .extern DCH3CSIZ         /* 0xBF883330 */
  .extern DCH3CSIZCLR      /* 0xBF883334 */
  .extern DCH3CSIZSET      /* 0xBF883338 */
  .extern DCH3CSIZINV      /* 0xBF88333C */
  .extern DCH3CPTR         /* 0xBF883340 */
  .extern DCH3CPTRCLR      /* 0xBF883344 */
  .extern DCH3CPTRSET      /* 0xBF883348 */
  .extern DCH3CPTRINV      /* 0xBF88334C */
  .extern DCH3DAT          /* 0xBF883350 */
  .extern DCH3DATCLR       /* 0xBF883354 */
  .extern DCH3DATSET       /* 0xBF883358 */
  .extern DCH3DATINV       /* 0xBF88335C */
  .extern U1OTGIR          /* 0xBF885040 */
  .extern U1OTGIRCLR       /* 0xBF885044 */
  .extern U1OTGIE          /* 0xBF885050 */
  .extern U1OTGIECLR       /* 0xBF885054 */
  .extern U1OTGIESET       /* 0xBF885058 */
  .extern U1OTGIEINV       /* 0xBF88505C */
  .extern U1OTGSTAT        /* 0xBF885060 */
  .extern U1OTGCON         /* 0xBF885070 */
  .extern U1OTGCONCLR      /* 0xBF885074 */
  .extern U1OTGCONSET      /* 0xBF885078 */
  .extern U1OTGCONINV      /* 0xBF88507C */
  .extern U1PWRC           /* 0xBF885080 */
  .extern U1PWRCCLR        /* 0xBF885084 */
  .extern U1PWRCSET        /* 0xBF885088 */
  .extern U1PWRCINV        /* 0xBF88508C */
  .extern U1IR             /* 0xBF885200 */
  .extern U1IRCLR          /* 0xBF885204 */
  .extern U1IE             /* 0xBF885210 */
  .extern U1IECLR          /* 0xBF885214 */
  .extern U1IESET          /* 0xBF885218 */
  .extern U1IEINV          /* 0xBF88521C */
  .extern U1EIR            /* 0xBF885220 */
  .extern U1EIRCLR         /* 0xBF885224 */
  .extern U1EIE            /* 0xBF885230 */
  .extern U1EIECLR         /* 0xBF885234 */
  .extern U1EIESET         /* 0xBF885238 */
  .extern U1EIEINV         /* 0xBF88523C */
  .extern U1STAT           /* 0xBF885240 */
  .extern U1CON            /* 0xBF885250 */
  .extern U1CONCLR         /* 0xBF885254 */
  .extern U1CONSET         /* 0xBF885258 */
  .extern U1CONINV         /* 0xBF88525C */
  .extern U1ADDR           /* 0xBF885260 */
  .extern U1ADDRCLR        /* 0xBF885264 */
  .extern U1ADDRSET        /* 0xBF885268 */
  .extern U1ADDRINV        /* 0xBF88526C */
  .extern U1BDTP1          /* 0xBF885270 */
  .extern U1BDTP1CLR       /* 0xBF885274 */
  .extern U1BDTP1SET       /* 0xBF885278 */
  .extern U1BDTP1INV       /* 0xBF88527C */
  .extern U1FRML           /* 0xBF885280 */
  .extern U1FRMH           /* 0xBF885290 */
  .extern U1TOK            /* 0xBF8852A0 */
  .extern U1TOKCLR         /* 0xBF8852A4 */
  .extern U1TOKSET         /* 0xBF8852A8 */
  .extern U1TOKINV         /* 0xBF8852AC */
  .extern U1SOF            /* 0xBF8852B0 */
  .extern U1SOFCLR         /* 0xBF8852B4 */
  .extern U1SOFSET         /* 0xBF8852B8 */
  .extern U1SOFINV         /* 0xBF8852BC */
  .extern U1BDTP2          /* 0xBF8852C0 */
  .extern U1BDTP2CLR       /* 0xBF8852C4 */
  .extern U1BDTP2SET       /* 0xBF8852C8 */
  .extern U1BDTP2INV       /* 0xBF8852CC */
  .extern U1BDTP3          /* 0xBF8852D0 */
  .extern U1BDTP3CLR       /* 0xBF8852D4 */
  .extern U1BDTP3SET       /* 0xBF8852D8 */
  .extern U1BDTP3INV       /* 0xBF8852DC */
  .extern U1CNFG1          /* 0xBF8852E0 */
  .extern U1CNFG1CLR       /* 0xBF8852E4 */
  .extern U1CNFG1SET       /* 0xBF8852E8 */
  .extern U1CNFG1INV       /* 0xBF8852EC */
  .extern U1EP0            /* 0xBF885300 */
  .extern U1EP0CLR         /* 0xBF885304 */
  .extern U1EP0SET         /* 0xBF885308 */
  .extern U1EP0INV         /* 0xBF88530C */
  .extern U1EP1            /* 0xBF885310 */
  .extern U1EP1CLR         /* 0xBF885314 */
  .extern U1EP1SET         /* 0xBF885318 */
  .extern U1EP1INV         /* 0xBF88531C */
  .extern U1EP2            /* 0xBF885320 */
  .extern U1EP2CLR         /* 0xBF885324 */
  .extern U1EP2SET         /* 0xBF885328 */
  .extern U1EP2INV         /* 0xBF88532C */
  .extern U1EP3            /* 0xBF885330 */
  .extern U1EP3CLR         /* 0xBF885334 */
  .extern U1EP3SET         /* 0xBF885338 */
  .extern U1EP3INV         /* 0xBF88533C */
  .extern U1EP4            /* 0xBF885340 */
  .extern U1EP4CLR         /* 0xBF885344 */
  .extern U1EP4SET         /* 0xBF885348 */
  .extern U1EP4INV         /* 0xBF88534C */
  .extern U1EP5            /* 0xBF885350 */
  .extern U1EP5CLR         /* 0xBF885354 */
  .extern U1EP5SET         /* 0xBF885358 */
  .extern U1EP5INV         /* 0xBF88535C */
  .extern U1EP6            /* 0xBF885360 */
  .extern U1EP6CLR         /* 0xBF885364 */
  .extern U1EP6SET         /* 0xBF885368 */
  .extern U1EP6INV         /* 0xBF88536C */
  .extern U1EP7            /* 0xBF885370 */
  .extern U1EP7CLR         /* 0xBF885374 */
  .extern U1EP7SET         /* 0xBF885378 */
  .extern U1EP7INV         /* 0xBF88537C */
  .extern U1EP8            /* 0xBF885380 */
  .extern U1EP8CLR         /* 0xBF885384 */
  .extern U1EP8SET         /* 0xBF885388 */
  .extern U1EP8INV         /* 0xBF88538C */
  .extern U1EP9            /* 0xBF885390 */
  .extern U1EP9CLR         /* 0xBF885394 */
  .extern U1EP9SET         /* 0xBF885398 */
  .extern U1EP9INV         /* 0xBF88539C */
  .extern U1EP10           /* 0xBF8853A0 */
  .extern U1EP10CLR        /* 0xBF8853A4 */
  .extern U1EP10SET        /* 0xBF8853A8 */
  .extern U1EP10INV        /* 0xBF8853AC */
  .extern U1EP11           /* 0xBF8853B0 */
  .extern U1EP11CLR        /* 0xBF8853B4 */
  .extern U1EP11SET        /* 0xBF8853B8 */
  .extern U1EP11INV        /* 0xBF8853BC */
  .extern U1EP12           /* 0xBF8853C0 */
  .extern U1EP12CLR        /* 0xBF8853C4 */
  .extern U1EP12SET        /* 0xBF8853C8 */
  .extern U1EP12INV        /* 0xBF8853CC */
  .extern U1EP13           /* 0xBF8853D0 */
  .extern U1EP13CLR        /* 0xBF8853D4 */
  .extern U1EP13SET        /* 0xBF8853D8 */
  .extern U1EP13INV        /* 0xBF8853DC */
  .extern U1EP14           /* 0xBF8853E0 */
  .extern U1EP14CLR        /* 0xBF8853E4 */
  .extern U1EP14SET        /* 0xBF8853E8 */
  .extern U1EP14INV        /* 0xBF8853EC */
  .extern U1EP15           /* 0xBF8853F0 */
  .extern U1EP15CLR        /* 0xBF8853F4 */
  .extern U1EP15SET        /* 0xBF8853F8 */
  .extern U1EP15INV        /* 0xBF8853FC */
  .extern ANSELA           /* 0xBF886000 */
  .extern ANSELACLR        /* 0xBF886004 */
  .extern ANSELASET        /* 0xBF886008 */
  .extern ANSELAINV        /* 0xBF88600C */
  .extern TRISA            /* 0xBF886010 */
  .extern TRISACLR         /* 0xBF886014 */
  .extern TRISASET         /* 0xBF886018 */
  .extern TRISAINV         /* 0xBF88601C */
  .extern PORTA            /* 0xBF886020 */
  .extern PORTACLR         /* 0xBF886024 */
  .extern PORTASET         /* 0xBF886028 */
  .extern PORTAINV         /* 0xBF88602C */
  .extern LATA             /* 0xBF886030 */
  .extern LATACLR          /* 0xBF886034 */
  .extern LATASET          /* 0xBF886038 */
  .extern LATAINV          /* 0xBF88603C */
  .extern ODCA             /* 0xBF886040 */
  .extern ODCACLR          /* 0xBF886044 */
  .extern ODCASET          /* 0xBF886048 */
  .extern ODCAINV          /* 0xBF88604C */
  .extern CNPUA            /* 0xBF886050 */
  .extern CNPUACLR         /* 0xBF886054 */
  .extern CNPUASET         /* 0xBF886058 */
  .extern CNPUAINV         /* 0xBF88605C */
  .extern CNPDA            /* 0xBF886060 */
  .extern CNPDACLR         /* 0xBF886064 */
  .extern CNPDASET         /* 0xBF886068 */
  .extern CNPDAINV         /* 0xBF88606C */
  .extern CNCONA           /* 0xBF886070 */
  .extern CNCONACLR        /* 0xBF886074 */
  .extern CNCONASET        /* 0xBF886078 */
  .extern CNCONAINV        /* 0xBF88607C */
  .extern CNENA            /* 0xBF886080 */
  .extern CNENACLR         /* 0xBF886084 */
  .extern CNENASET         /* 0xBF886088 */
  .extern CNENAINV         /* 0xBF88608C */
  .extern CNSTATA          /* 0xBF886090 */
  .extern CNSTATACLR       /* 0xBF886094 */
  .extern CNSTATASET       /* 0xBF886098 */
  .extern CNSTATAINV       /* 0xBF88609C */
  .extern ANSELB           /* 0xBF886100 */
  .extern ANSELBCLR        /* 0xBF886104 */
  .extern ANSELBSET        /* 0xBF886108 */
  .extern ANSELBINV        /* 0xBF88610C */
  .extern TRISB            /* 0xBF886110 */
  .extern TRISBCLR         /* 0xBF886114 */
  .extern TRISBSET         /* 0xBF886118 */
  .extern TRISBINV         /* 0xBF88611C */
  .extern PORTB            /* 0xBF886120 */
  .extern PORTBCLR         /* 0xBF886124 */
  .extern PORTBSET         /* 0xBF886128 */
  .extern PORTBINV         /* 0xBF88612C */
  .extern LATB             /* 0xBF886130 */
  .extern LATBCLR          /* 0xBF886134 */
  .extern LATBSET          /* 0xBF886138 */
  .extern LATBINV          /* 0xBF88613C */
  .extern ODCB             /* 0xBF886140 */
  .extern ODCBCLR          /* 0xBF886144 */
  .extern ODCBSET          /* 0xBF886148 */
  .extern ODCBINV          /* 0xBF88614C */
  .extern CNPUB            /* 0xBF886150 */
  .extern CNPUBCLR         /* 0xBF886154 */
  .extern CNPUBSET         /* 0xBF886158 */
  .extern CNPUBINV         /* 0xBF88615C */
  .extern CNPDB            /* 0xBF886160 */
  .extern CNPDBCLR         /* 0xBF886164 */
  .extern CNPDBSET         /* 0xBF886168 */
  .extern CNPDBINV         /* 0xBF88616C */
  .extern CNCONB           /* 0xBF886170 */
  .extern CNCONBCLR        /* 0xBF886174 */
  .extern CNCONBSET        /* 0xBF886178 */
  .extern CNCONBINV        /* 0xBF88617C */
  .extern CNENB            /* 0xBF886180 */
  .extern CNENBCLR         /* 0xBF886184 */
  .extern CNENBSET         /* 0xBF886188 */
  .extern CNENBINV         /* 0xBF88618C */
  .extern CNSTATB          /* 0xBF886190 */
  .extern CNSTATBCLR       /* 0xBF886194 */
  .extern CNSTATBSET       /* 0xBF886198 */
  .extern CNSTATBINV       /* 0xBF88619C */
  .extern ANSELC           /* 0xBF886200 */
  .extern ANSELCCLR        /* 0xBF886204 */
  .extern ANSELCSET        /* 0xBF886208 */
  .extern ANSELCINV        /* 0xBF88620C */
  .extern TRISC            /* 0xBF886210 */
  .extern TRISCCLR         /* 0xBF886214 */
  .extern TRISCSET         /* 0xBF886218 */
  .extern TRISCINV         /* 0xBF88621C */
  .extern PORTC            /* 0xBF886220 */
  .extern PORTCCLR         /* 0xBF886224 */
  .extern PORTCSET         /* 0xBF886228 */
  .extern PORTCINV         /* 0xBF88622C */
  .extern LATC             /* 0xBF886230 */
  .extern LATCCLR          /* 0xBF886234 */
  .extern LATCSET          /* 0xBF886238 */
  .extern LATCINV          /* 0xBF88623C */
  .extern ODCC             /* 0xBF886240 */
  .extern ODCCCLR          /* 0xBF886244 */
  .extern ODCCSET          /* 0xBF886248 */
  .extern ODCCINV          /* 0xBF88624C */
  .extern CNPUC            /* 0xBF886250 */
  .extern CNPUCCLR         /* 0xBF886254 */
  .extern CNPUCSET         /* 0xBF886258 */
  .extern CNPUCINV         /* 0xBF88625C */
  .extern CNPDC            /* 0xBF886260 */
  .extern CNPDCCLR         /* 0xBF886264 */
  .extern CNPDCSET         /* 0xBF886268 */
  .extern CNPDCINV         /* 0xBF88626C */
  .extern CNCONC           /* 0xBF886270 */
  .extern CNCONCCLR        /* 0xBF886274 */
  .extern CNCONCSET        /* 0xBF886278 */
  .extern CNCONCINV        /* 0xBF88627C */
  .extern CNENC            /* 0xBF886280 */
  .extern CNENCCLR         /* 0xBF886284 */
  .extern CNENCSET         /* 0xBF886288 */
  .extern CNENCINV         /* 0xBF88628C */
  .extern CNSTATC          /* 0xBF886290 */
  .extern CNSTATCCLR       /* 0xBF886294 */
  .extern CNSTATCSET       /* 0xBF886298 */
  .extern CNSTATCINV       /* 0xBF88629C */
  .extern DEVCFG3          /* 0xBFC00BF0 */
  .extern DEVCFG2          /* 0xBFC00BF4 */
  .extern DEVCFG1          /* 0xBFC00BF8 */
  .extern DEVCFG0          /* 0xBFC00BFC */
#else
#error Unknown language!
#endif

#define _WDTCON_WDTCLR_POSITION                  0x00000000
#define _WDTCON_WDTCLR_MASK                      0x00000001
#define _WDTCON_WDTCLR_LENGTH                    0x00000001

#define _WDTCON_WDTWINEN_POSITION                0x00000001
#define _WDTCON_WDTWINEN_MASK                    0x00000002
#define _WDTCON_WDTWINEN_LENGTH                  0x00000001

#define _WDTCON_SWDTPS_POSITION                  0x00000002
#define _WDTCON_SWDTPS_MASK                      0x0000007C
#define _WDTCON_SWDTPS_LENGTH                    0x00000005

#define _WDTCON_ON_POSITION                      0x0000000F
#define _WDTCON_ON_MASK                          0x00008000
#define _WDTCON_ON_LENGTH                        0x00000001

#define _WDTCON_SWDTPS0_POSITION                 0x00000002
#define _WDTCON_SWDTPS0_MASK                     0x00000004
#define _WDTCON_SWDTPS0_LENGTH                   0x00000001

#define _WDTCON_SWDTPS1_POSITION                 0x00000003
#define _WDTCON_SWDTPS1_MASK                     0x00000008
#define _WDTCON_SWDTPS1_LENGTH                   0x00000001

#define _WDTCON_SWDTPS2_POSITION                 0x00000004
#define _WDTCON_SWDTPS2_MASK                     0x00000010
#define _WDTCON_SWDTPS2_LENGTH                   0x00000001

#define _WDTCON_SWDTPS3_POSITION                 0x00000005
#define _WDTCON_SWDTPS3_MASK                     0x00000020
#define _WDTCON_SWDTPS3_LENGTH                   0x00000001

#define _WDTCON_SWDTPS4_POSITION                 0x00000006
#define _WDTCON_SWDTPS4_MASK                     0x00000040
#define _WDTCON_SWDTPS4_LENGTH                   0x00000001

#define _WDTCON_WDTPSTA_POSITION                 0x00000002
#define _WDTCON_WDTPSTA_MASK                     0x0000007C
#define _WDTCON_WDTPSTA_LENGTH                   0x00000005

#define _WDTCON_WDTPS_POSITION                   0x00000002
#define _WDTCON_WDTPS_MASK                       0x0000007C
#define _WDTCON_WDTPS_LENGTH                     0x00000005

#define _WDTCON_w_POSITION                       0x00000000
#define _WDTCON_w_MASK                           0xFFFFFFFF
#define _WDTCON_w_LENGTH                         0x00000020

#define _RTCCON_RTCOE_POSITION                   0x00000000
#define _RTCCON_RTCOE_MASK                       0x00000001
#define _RTCCON_RTCOE_LENGTH                     0x00000001

#define _RTCCON_HALFSEC_POSITION                 0x00000001
#define _RTCCON_HALFSEC_MASK                     0x00000002
#define _RTCCON_HALFSEC_LENGTH                   0x00000001

#define _RTCCON_RTCSYNC_POSITION                 0x00000002
#define _RTCCON_RTCSYNC_MASK                     0x00000004
#define _RTCCON_RTCSYNC_LENGTH                   0x00000001

#define _RTCCON_RTCWREN_POSITION                 0x00000003
#define _RTCCON_RTCWREN_MASK                     0x00000008
#define _RTCCON_RTCWREN_LENGTH                   0x00000001

#define _RTCCON_RTCCLKON_POSITION                0x00000006
#define _RTCCON_RTCCLKON_MASK                    0x00000040
#define _RTCCON_RTCCLKON_LENGTH                  0x00000001

#define _RTCCON_RTSECSEL_POSITION                0x00000007
#define _RTCCON_RTSECSEL_MASK                    0x00000080
#define _RTCCON_RTSECSEL_LENGTH                  0x00000001

#define _RTCCON_SIDL_POSITION                    0x0000000D
#define _RTCCON_SIDL_MASK                        0x00002000
#define _RTCCON_SIDL_LENGTH                      0x00000001

#define _RTCCON_ON_POSITION                      0x0000000F
#define _RTCCON_ON_MASK                          0x00008000
#define _RTCCON_ON_LENGTH                        0x00000001

#define _RTCCON_CAL_POSITION                     0x00000010
#define _RTCCON_CAL_MASK                         0x03FF0000
#define _RTCCON_CAL_LENGTH                       0x0000000A

#define _RTCCON_w_POSITION                       0x00000000
#define _RTCCON_w_MASK                           0xFFFFFFFF
#define _RTCCON_w_LENGTH                         0x00000020

#define _RTCALRM_ARPT_POSITION                   0x00000000
#define _RTCALRM_ARPT_MASK                       0x000000FF
#define _RTCALRM_ARPT_LENGTH                     0x00000008

#define _RTCALRM_AMASK_POSITION                  0x00000008
#define _RTCALRM_AMASK_MASK                      0x00000F00
#define _RTCALRM_AMASK_LENGTH                    0x00000004

#define _RTCALRM_ALRMSYNC_POSITION               0x0000000C
#define _RTCALRM_ALRMSYNC_MASK                   0x00001000
#define _RTCALRM_ALRMSYNC_LENGTH                 0x00000001

#define _RTCALRM_PIV_POSITION                    0x0000000D
#define _RTCALRM_PIV_MASK                        0x00002000
#define _RTCALRM_PIV_LENGTH                      0x00000001

#define _RTCALRM_CHIME_POSITION                  0x0000000E
#define _RTCALRM_CHIME_MASK                      0x00004000
#define _RTCALRM_CHIME_LENGTH                    0x00000001

#define _RTCALRM_ALRMEN_POSITION                 0x0000000F
#define _RTCALRM_ALRMEN_MASK                     0x00008000
#define _RTCALRM_ALRMEN_LENGTH                   0x00000001

#define _RTCALRM_w_POSITION                      0x00000000
#define _RTCALRM_w_MASK                          0xFFFFFFFF
#define _RTCALRM_w_LENGTH                        0x00000020

#define _RTCTIME_SEC01_POSITION                  0x00000008
#define _RTCTIME_SEC01_MASK                      0x00000F00
#define _RTCTIME_SEC01_LENGTH                    0x00000004

#define _RTCTIME_SEC10_POSITION                  0x0000000C
#define _RTCTIME_SEC10_MASK                      0x0000F000
#define _RTCTIME_SEC10_LENGTH                    0x00000004

#define _RTCTIME_MIN01_POSITION                  0x00000010
#define _RTCTIME_MIN01_MASK                      0x000F0000
#define _RTCTIME_MIN01_LENGTH                    0x00000004

#define _RTCTIME_MIN10_POSITION                  0x00000014
#define _RTCTIME_MIN10_MASK                      0x00F00000
#define _RTCTIME_MIN10_LENGTH                    0x00000004

#define _RTCTIME_HR01_POSITION                   0x00000018
#define _RTCTIME_HR01_MASK                       0x0F000000
#define _RTCTIME_HR01_LENGTH                     0x00000004

#define _RTCTIME_HR10_POSITION                   0x0000001C
#define _RTCTIME_HR10_MASK                       0xF0000000
#define _RTCTIME_HR10_LENGTH                     0x00000004

#define _RTCTIME_w_POSITION                      0x00000000
#define _RTCTIME_w_MASK                          0xFFFFFFFF
#define _RTCTIME_w_LENGTH                        0x00000020

#define _RTCDATE_WDAY01_POSITION                 0x00000000
#define _RTCDATE_WDAY01_MASK                     0x0000000F
#define _RTCDATE_WDAY01_LENGTH                   0x00000004

#define _RTCDATE_DAY01_POSITION                  0x00000008
#define _RTCDATE_DAY01_MASK                      0x00000F00
#define _RTCDATE_DAY01_LENGTH                    0x00000004

#define _RTCDATE_DAY10_POSITION                  0x0000000C
#define _RTCDATE_DAY10_MASK                      0x0000F000
#define _RTCDATE_DAY10_LENGTH                    0x00000004

#define _RTCDATE_MONTH01_POSITION                0x00000010
#define _RTCDATE_MONTH01_MASK                    0x000F0000
#define _RTCDATE_MONTH01_LENGTH                  0x00000004

#define _RTCDATE_MONTH10_POSITION                0x00000014
#define _RTCDATE_MONTH10_MASK                    0x00F00000
#define _RTCDATE_MONTH10_LENGTH                  0x00000004

#define _RTCDATE_YEAR01_POSITION                 0x00000018
#define _RTCDATE_YEAR01_MASK                     0x0F000000
#define _RTCDATE_YEAR01_LENGTH                   0x00000004

#define _RTCDATE_YEAR10_POSITION                 0x0000001C
#define _RTCDATE_YEAR10_MASK                     0xF0000000
#define _RTCDATE_YEAR10_LENGTH                   0x00000004

#define _RTCDATE_w_POSITION                      0x00000000
#define _RTCDATE_w_MASK                          0xFFFFFFFF
#define _RTCDATE_w_LENGTH                        0x00000020

#define _ALRMTIME_SEC01_POSITION                 0x00000008
#define _ALRMTIME_SEC01_MASK                     0x00000F00
#define _ALRMTIME_SEC01_LENGTH                   0x00000004

#define _ALRMTIME_SEC10_POSITION                 0x0000000C
#define _ALRMTIME_SEC10_MASK                     0x0000F000
#define _ALRMTIME_SEC10_LENGTH                   0x00000004

#define _ALRMTIME_MIN01_POSITION                 0x00000010
#define _ALRMTIME_MIN01_MASK                     0x000F0000
#define _ALRMTIME_MIN01_LENGTH                   0x00000004

#define _ALRMTIME_MIN10_POSITION                 0x00000014
#define _ALRMTIME_MIN10_MASK                     0x00F00000
#define _ALRMTIME_MIN10_LENGTH                   0x00000004

#define _ALRMTIME_HR01_POSITION                  0x00000018
#define _ALRMTIME_HR01_MASK                      0x0F000000
#define _ALRMTIME_HR01_LENGTH                    0x00000004

#define _ALRMTIME_HR10_POSITION                  0x0000001C
#define _ALRMTIME_HR10_MASK                      0xF0000000
#define _ALRMTIME_HR10_LENGTH                    0x00000004

#define _ALRMTIME_w_POSITION                     0x00000000
#define _ALRMTIME_w_MASK                         0xFFFFFFFF
#define _ALRMTIME_w_LENGTH                       0x00000020

#define _ALRMDATE_WDAY01_POSITION                0x00000000
#define _ALRMDATE_WDAY01_MASK                    0x0000000F
#define _ALRMDATE_WDAY01_LENGTH                  0x00000004

#define _ALRMDATE_DAY01_POSITION                 0x00000008
#define _ALRMDATE_DAY01_MASK                     0x00000F00
#define _ALRMDATE_DAY01_LENGTH                   0x00000004

#define _ALRMDATE_DAY10_POSITION                 0x0000000C
#define _ALRMDATE_DAY10_MASK                     0x0000F000
#define _ALRMDATE_DAY10_LENGTH                   0x00000004

#define _ALRMDATE_MONTH01_POSITION               0x00000010
#define _ALRMDATE_MONTH01_MASK                   0x000F0000
#define _ALRMDATE_MONTH01_LENGTH                 0x00000004

#define _ALRMDATE_MONTH10_POSITION               0x00000014
#define _ALRMDATE_MONTH10_MASK                   0x00F00000
#define _ALRMDATE_MONTH10_LENGTH                 0x00000004

#define _ALRMDATE_w_POSITION                     0x00000000
#define _ALRMDATE_w_MASK                         0xFFFFFFFF
#define _ALRMDATE_w_LENGTH                       0x00000020

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000007
#define _T1CON_TGATE_MASK                        0x00000080
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TWIP_POSITION                     0x0000000B
#define _T1CON_TWIP_MASK                         0x00000800
#define _T1CON_TWIP_LENGTH                       0x00000001

#define _T1CON_TWDIS_POSITION                    0x0000000C
#define _T1CON_TWDIS_MASK                        0x00001000
#define _T1CON_TWDIS_LENGTH                      0x00000001

#define _T1CON_SIDL_POSITION                     0x0000000D
#define _T1CON_SIDL_MASK                         0x00002000
#define _T1CON_SIDL_LENGTH                       0x00000001

#define _T1CON_ON_POSITION                       0x0000000F
#define _T1CON_ON_MASK                           0x00008000
#define _T1CON_ON_LENGTH                         0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_w_POSITION                        0x00000000
#define _T1CON_w_MASK                            0xFFFFFFFF
#define _T1CON_w_LENGTH                          0x00000020

#define _T2CON_TCS_POSITION                      0x00000001
#define _T2CON_TCS_MASK                          0x00000002
#define _T2CON_TCS_LENGTH                        0x00000001

#define _T2CON_T32_POSITION                      0x00000003
#define _T2CON_T32_MASK                          0x00000008
#define _T2CON_T32_LENGTH                        0x00000001

#define _T2CON_TCKPS_POSITION                    0x00000004
#define _T2CON_TCKPS_MASK                        0x00000070
#define _T2CON_TCKPS_LENGTH                      0x00000003

#define _T2CON_TGATE_POSITION                    0x00000007
#define _T2CON_TGATE_MASK                        0x00000080
#define _T2CON_TGATE_LENGTH                      0x00000001

#define _T2CON_SIDL_POSITION                     0x0000000D
#define _T2CON_SIDL_MASK                         0x00002000
#define _T2CON_SIDL_LENGTH                       0x00000001

#define _T2CON_ON_POSITION                       0x0000000F
#define _T2CON_ON_MASK                           0x00008000
#define _T2CON_ON_LENGTH                         0x00000001

#define _T2CON_TCKPS0_POSITION                   0x00000004
#define _T2CON_TCKPS0_MASK                       0x00000010
#define _T2CON_TCKPS0_LENGTH                     0x00000001

#define _T2CON_TCKPS1_POSITION                   0x00000005
#define _T2CON_TCKPS1_MASK                       0x00000020
#define _T2CON_TCKPS1_LENGTH                     0x00000001

#define _T2CON_TCKPS2_POSITION                   0x00000006
#define _T2CON_TCKPS2_MASK                       0x00000040
#define _T2CON_TCKPS2_LENGTH                     0x00000001

#define _T2CON_TSIDL_POSITION                    0x0000000D
#define _T2CON_TSIDL_MASK                        0x00002000
#define _T2CON_TSIDL_LENGTH                      0x00000001

#define _T2CON_TON_POSITION                      0x0000000F
#define _T2CON_TON_MASK                          0x00008000
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_w_POSITION                        0x00000000
#define _T2CON_w_MASK                            0xFFFFFFFF
#define _T2CON_w_LENGTH                          0x00000020

#define _T3CON_TCS_POSITION                      0x00000001
#define _T3CON_TCS_MASK                          0x00000002
#define _T3CON_TCS_LENGTH                        0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000070
#define _T3CON_TCKPS_LENGTH                      0x00000003

#define _T3CON_TGATE_POSITION                    0x00000007
#define _T3CON_TGATE_MASK                        0x00000080
#define _T3CON_TGATE_LENGTH                      0x00000001

#define _T3CON_SIDL_POSITION                     0x0000000D
#define _T3CON_SIDL_MASK                         0x00002000
#define _T3CON_SIDL_LENGTH                       0x00000001

#define _T3CON_ON_POSITION                       0x0000000F
#define _T3CON_ON_MASK                           0x00008000
#define _T3CON_ON_LENGTH                         0x00000001

#define _T3CON_TCKPS0_POSITION                   0x00000004
#define _T3CON_TCKPS0_MASK                       0x00000010
#define _T3CON_TCKPS0_LENGTH                     0x00000001

#define _T3CON_TCKPS1_POSITION                   0x00000005
#define _T3CON_TCKPS1_MASK                       0x00000020
#define _T3CON_TCKPS1_LENGTH                     0x00000001

#define _T3CON_TCKPS2_POSITION                   0x00000006
#define _T3CON_TCKPS2_MASK                       0x00000040
#define _T3CON_TCKPS2_LENGTH                     0x00000001

#define _T3CON_TSIDL_POSITION                    0x0000000D
#define _T3CON_TSIDL_MASK                        0x00002000
#define _T3CON_TSIDL_LENGTH                      0x00000001

#define _T3CON_TON_POSITION                      0x0000000F
#define _T3CON_TON_MASK                          0x00008000
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_w_POSITION                        0x00000000
#define _T3CON_w_MASK                            0xFFFFFFFF
#define _T3CON_w_LENGTH                          0x00000020

#define _T4CON_TCS_POSITION                      0x00000001
#define _T4CON_TCS_MASK                          0x00000002
#define _T4CON_TCS_LENGTH                        0x00000001

#define _T4CON_T32_POSITION                      0x00000003
#define _T4CON_T32_MASK                          0x00000008
#define _T4CON_T32_LENGTH                        0x00000001

#define _T4CON_TCKPS_POSITION                    0x00000004
#define _T4CON_TCKPS_MASK                        0x00000070
#define _T4CON_TCKPS_LENGTH                      0x00000003

#define _T4CON_TGATE_POSITION                    0x00000007
#define _T4CON_TGATE_MASK                        0x00000080
#define _T4CON_TGATE_LENGTH                      0x00000001

#define _T4CON_SIDL_POSITION                     0x0000000D
#define _T4CON_SIDL_MASK                         0x00002000
#define _T4CON_SIDL_LENGTH                       0x00000001

#define _T4CON_ON_POSITION                       0x0000000F
#define _T4CON_ON_MASK                           0x00008000
#define _T4CON_ON_LENGTH                         0x00000001

#define _T4CON_TCKPS0_POSITION                   0x00000004
#define _T4CON_TCKPS0_MASK                       0x00000010
#define _T4CON_TCKPS0_LENGTH                     0x00000001

#define _T4CON_TCKPS1_POSITION                   0x00000005
#define _T4CON_TCKPS1_MASK                       0x00000020
#define _T4CON_TCKPS1_LENGTH                     0x00000001

#define _T4CON_TCKPS2_POSITION                   0x00000006
#define _T4CON_TCKPS2_MASK                       0x00000040
#define _T4CON_TCKPS2_LENGTH                     0x00000001

#define _T4CON_TSIDL_POSITION                    0x0000000D
#define _T4CON_TSIDL_MASK                        0x00002000
#define _T4CON_TSIDL_LENGTH                      0x00000001

#define _T4CON_TON_POSITION                      0x0000000F
#define _T4CON_TON_MASK                          0x00008000
#define _T4CON_TON_LENGTH                        0x00000001

#define _T4CON_w_POSITION                        0x00000000
#define _T4CON_w_MASK                            0xFFFFFFFF
#define _T4CON_w_LENGTH                          0x00000020

#define _T5CON_TCS_POSITION                      0x00000001
#define _T5CON_TCS_MASK                          0x00000002
#define _T5CON_TCS_LENGTH                        0x00000001

#define _T5CON_TCKPS_POSITION                    0x00000004
#define _T5CON_TCKPS_MASK                        0x00000070
#define _T5CON_TCKPS_LENGTH                      0x00000003

#define _T5CON_TGATE_POSITION                    0x00000007
#define _T5CON_TGATE_MASK                        0x00000080
#define _T5CON_TGATE_LENGTH                      0x00000001

#define _T5CON_SIDL_POSITION                     0x0000000D
#define _T5CON_SIDL_MASK                         0x00002000
#define _T5CON_SIDL_LENGTH                       0x00000001

#define _T5CON_ON_POSITION                       0x0000000F
#define _T5CON_ON_MASK                           0x00008000
#define _T5CON_ON_LENGTH                         0x00000001

#define _T5CON_TCKPS0_POSITION                   0x00000004
#define _T5CON_TCKPS0_MASK                       0x00000010
#define _T5CON_TCKPS0_LENGTH                     0x00000001

#define _T5CON_TCKPS1_POSITION                   0x00000005
#define _T5CON_TCKPS1_MASK                       0x00000020
#define _T5CON_TCKPS1_LENGTH                     0x00000001

#define _T5CON_TCKPS2_POSITION                   0x00000006
#define _T5CON_TCKPS2_MASK                       0x00000040
#define _T5CON_TCKPS2_LENGTH                     0x00000001

#define _T5CON_TSIDL_POSITION                    0x0000000D
#define _T5CON_TSIDL_MASK                        0x00002000
#define _T5CON_TSIDL_LENGTH                      0x00000001

#define _T5CON_TON_POSITION                      0x0000000F
#define _T5CON_TON_MASK                          0x00008000
#define _T5CON_TON_LENGTH                        0x00000001

#define _T5CON_w_POSITION                        0x00000000
#define _T5CON_w_MASK                            0xFFFFFFFF
#define _T5CON_w_LENGTH                          0x00000020

#define _IC1CON_ICM_POSITION                     0x00000000
#define _IC1CON_ICM_MASK                         0x00000007
#define _IC1CON_ICM_LENGTH                       0x00000003

#define _IC1CON_ICBNE_POSITION                   0x00000003
#define _IC1CON_ICBNE_MASK                       0x00000008
#define _IC1CON_ICBNE_LENGTH                     0x00000001

#define _IC1CON_ICOV_POSITION                    0x00000004
#define _IC1CON_ICOV_MASK                        0x00000010
#define _IC1CON_ICOV_LENGTH                      0x00000001

#define _IC1CON_ICI_POSITION                     0x00000005
#define _IC1CON_ICI_MASK                         0x00000060
#define _IC1CON_ICI_LENGTH                       0x00000002

#define _IC1CON_ICTMR_POSITION                   0x00000007
#define _IC1CON_ICTMR_MASK                       0x00000080
#define _IC1CON_ICTMR_LENGTH                     0x00000001

#define _IC1CON_C32_POSITION                     0x00000008
#define _IC1CON_C32_MASK                         0x00000100
#define _IC1CON_C32_LENGTH                       0x00000001

#define _IC1CON_FEDGE_POSITION                   0x00000009
#define _IC1CON_FEDGE_MASK                       0x00000200
#define _IC1CON_FEDGE_LENGTH                     0x00000001

#define _IC1CON_SIDL_POSITION                    0x0000000D
#define _IC1CON_SIDL_MASK                        0x00002000
#define _IC1CON_SIDL_LENGTH                      0x00000001

#define _IC1CON_ON_POSITION                      0x0000000F
#define _IC1CON_ON_MASK                          0x00008000
#define _IC1CON_ON_LENGTH                        0x00000001

#define _IC1CON_ICM0_POSITION                    0x00000000
#define _IC1CON_ICM0_MASK                        0x00000001
#define _IC1CON_ICM0_LENGTH                      0x00000001

#define _IC1CON_ICM1_POSITION                    0x00000001
#define _IC1CON_ICM1_MASK                        0x00000002
#define _IC1CON_ICM1_LENGTH                      0x00000001

#define _IC1CON_ICM2_POSITION                    0x00000002
#define _IC1CON_ICM2_MASK                        0x00000004
#define _IC1CON_ICM2_LENGTH                      0x00000001

#define _IC1CON_ICI0_POSITION                    0x00000005
#define _IC1CON_ICI0_MASK                        0x00000020
#define _IC1CON_ICI0_LENGTH                      0x00000001

#define _IC1CON_ICI1_POSITION                    0x00000006
#define _IC1CON_ICI1_MASK                        0x00000040
#define _IC1CON_ICI1_LENGTH                      0x00000001

#define _IC1CON_ICSIDL_POSITION                  0x0000000D
#define _IC1CON_ICSIDL_MASK                      0x00002000
#define _IC1CON_ICSIDL_LENGTH                    0x00000001

#define _IC1CON_w_POSITION                       0x00000000
#define _IC1CON_w_MASK                           0xFFFFFFFF
#define _IC1CON_w_LENGTH                         0x00000020

#define _IC2CON_ICM_POSITION                     0x00000000
#define _IC2CON_ICM_MASK                         0x00000007
#define _IC2CON_ICM_LENGTH                       0x00000003

#define _IC2CON_ICBNE_POSITION                   0x00000003
#define _IC2CON_ICBNE_MASK                       0x00000008
#define _IC2CON_ICBNE_LENGTH                     0x00000001

#define _IC2CON_ICOV_POSITION                    0x00000004
#define _IC2CON_ICOV_MASK                        0x00000010
#define _IC2CON_ICOV_LENGTH                      0x00000001

#define _IC2CON_ICI_POSITION                     0x00000005
#define _IC2CON_ICI_MASK                         0x00000060
#define _IC2CON_ICI_LENGTH                       0x00000002

#define _IC2CON_ICTMR_POSITION                   0x00000007
#define _IC2CON_ICTMR_MASK                       0x00000080
#define _IC2CON_ICTMR_LENGTH                     0x00000001

#define _IC2CON_C32_POSITION                     0x00000008
#define _IC2CON_C32_MASK                         0x00000100
#define _IC2CON_C32_LENGTH                       0x00000001

#define _IC2CON_FEDGE_POSITION                   0x00000009
#define _IC2CON_FEDGE_MASK                       0x00000200
#define _IC2CON_FEDGE_LENGTH                     0x00000001

#define _IC2CON_SIDL_POSITION                    0x0000000D
#define _IC2CON_SIDL_MASK                        0x00002000
#define _IC2CON_SIDL_LENGTH                      0x00000001

#define _IC2CON_ON_POSITION                      0x0000000F
#define _IC2CON_ON_MASK                          0x00008000
#define _IC2CON_ON_LENGTH                        0x00000001

#define _IC2CON_ICM0_POSITION                    0x00000000
#define _IC2CON_ICM0_MASK                        0x00000001
#define _IC2CON_ICM0_LENGTH                      0x00000001

#define _IC2CON_ICM1_POSITION                    0x00000001
#define _IC2CON_ICM1_MASK                        0x00000002
#define _IC2CON_ICM1_LENGTH                      0x00000001

#define _IC2CON_ICM2_POSITION                    0x00000002
#define _IC2CON_ICM2_MASK                        0x00000004
#define _IC2CON_ICM2_LENGTH                      0x00000001

#define _IC2CON_ICI0_POSITION                    0x00000005
#define _IC2CON_ICI0_MASK                        0x00000020
#define _IC2CON_ICI0_LENGTH                      0x00000001

#define _IC2CON_ICI1_POSITION                    0x00000006
#define _IC2CON_ICI1_MASK                        0x00000040
#define _IC2CON_ICI1_LENGTH                      0x00000001

#define _IC2CON_ICSIDL_POSITION                  0x0000000D
#define _IC2CON_ICSIDL_MASK                      0x00002000
#define _IC2CON_ICSIDL_LENGTH                    0x00000001

#define _IC2CON_w_POSITION                       0x00000000
#define _IC2CON_w_MASK                           0xFFFFFFFF
#define _IC2CON_w_LENGTH                         0x00000020

#define _IC3CON_ICM_POSITION                     0x00000000
#define _IC3CON_ICM_MASK                         0x00000007
#define _IC3CON_ICM_LENGTH                       0x00000003

#define _IC3CON_ICBNE_POSITION                   0x00000003
#define _IC3CON_ICBNE_MASK                       0x00000008
#define _IC3CON_ICBNE_LENGTH                     0x00000001

#define _IC3CON_ICOV_POSITION                    0x00000004
#define _IC3CON_ICOV_MASK                        0x00000010
#define _IC3CON_ICOV_LENGTH                      0x00000001

#define _IC3CON_ICI_POSITION                     0x00000005
#define _IC3CON_ICI_MASK                         0x00000060
#define _IC3CON_ICI_LENGTH                       0x00000002

#define _IC3CON_ICTMR_POSITION                   0x00000007
#define _IC3CON_ICTMR_MASK                       0x00000080
#define _IC3CON_ICTMR_LENGTH                     0x00000001

#define _IC3CON_C32_POSITION                     0x00000008
#define _IC3CON_C32_MASK                         0x00000100
#define _IC3CON_C32_LENGTH                       0x00000001

#define _IC3CON_FEDGE_POSITION                   0x00000009
#define _IC3CON_FEDGE_MASK                       0x00000200
#define _IC3CON_FEDGE_LENGTH                     0x00000001

#define _IC3CON_SIDL_POSITION                    0x0000000D
#define _IC3CON_SIDL_MASK                        0x00002000
#define _IC3CON_SIDL_LENGTH                      0x00000001

#define _IC3CON_ON_POSITION                      0x0000000F
#define _IC3CON_ON_MASK                          0x00008000
#define _IC3CON_ON_LENGTH                        0x00000001

#define _IC3CON_ICM0_POSITION                    0x00000000
#define _IC3CON_ICM0_MASK                        0x00000001
#define _IC3CON_ICM0_LENGTH                      0x00000001

#define _IC3CON_ICM1_POSITION                    0x00000001
#define _IC3CON_ICM1_MASK                        0x00000002
#define _IC3CON_ICM1_LENGTH                      0x00000001

#define _IC3CON_ICM2_POSITION                    0x00000002
#define _IC3CON_ICM2_MASK                        0x00000004
#define _IC3CON_ICM2_LENGTH                      0x00000001

#define _IC3CON_ICI0_POSITION                    0x00000005
#define _IC3CON_ICI0_MASK                        0x00000020
#define _IC3CON_ICI0_LENGTH                      0x00000001

#define _IC3CON_ICI1_POSITION                    0x00000006
#define _IC3CON_ICI1_MASK                        0x00000040
#define _IC3CON_ICI1_LENGTH                      0x00000001

#define _IC3CON_ICSIDL_POSITION                  0x0000000D
#define _IC3CON_ICSIDL_MASK                      0x00002000
#define _IC3CON_ICSIDL_LENGTH                    0x00000001

#define _IC3CON_w_POSITION                       0x00000000
#define _IC3CON_w_MASK                           0xFFFFFFFF
#define _IC3CON_w_LENGTH                         0x00000020

#define _IC4CON_ICM_POSITION                     0x00000000
#define _IC4CON_ICM_MASK                         0x00000007
#define _IC4CON_ICM_LENGTH                       0x00000003

#define _IC4CON_ICBNE_POSITION                   0x00000003
#define _IC4CON_ICBNE_MASK                       0x00000008
#define _IC4CON_ICBNE_LENGTH                     0x00000001

#define _IC4CON_ICOV_POSITION                    0x00000004
#define _IC4CON_ICOV_MASK                        0x00000010
#define _IC4CON_ICOV_LENGTH                      0x00000001

#define _IC4CON_ICI_POSITION                     0x00000005
#define _IC4CON_ICI_MASK                         0x00000060
#define _IC4CON_ICI_LENGTH                       0x00000002

#define _IC4CON_ICTMR_POSITION                   0x00000007
#define _IC4CON_ICTMR_MASK                       0x00000080
#define _IC4CON_ICTMR_LENGTH                     0x00000001

#define _IC4CON_C32_POSITION                     0x00000008
#define _IC4CON_C32_MASK                         0x00000100
#define _IC4CON_C32_LENGTH                       0x00000001

#define _IC4CON_FEDGE_POSITION                   0x00000009
#define _IC4CON_FEDGE_MASK                       0x00000200
#define _IC4CON_FEDGE_LENGTH                     0x00000001

#define _IC4CON_SIDL_POSITION                    0x0000000D
#define _IC4CON_SIDL_MASK                        0x00002000
#define _IC4CON_SIDL_LENGTH                      0x00000001

#define _IC4CON_ON_POSITION                      0x0000000F
#define _IC4CON_ON_MASK                          0x00008000
#define _IC4CON_ON_LENGTH                        0x00000001

#define _IC4CON_ICM0_POSITION                    0x00000000
#define _IC4CON_ICM0_MASK                        0x00000001
#define _IC4CON_ICM0_LENGTH                      0x00000001

#define _IC4CON_ICM1_POSITION                    0x00000001
#define _IC4CON_ICM1_MASK                        0x00000002
#define _IC4CON_ICM1_LENGTH                      0x00000001

#define _IC4CON_ICM2_POSITION                    0x00000002
#define _IC4CON_ICM2_MASK                        0x00000004
#define _IC4CON_ICM2_LENGTH                      0x00000001

#define _IC4CON_ICI0_POSITION                    0x00000005
#define _IC4CON_ICI0_MASK                        0x00000020
#define _IC4CON_ICI0_LENGTH                      0x00000001

#define _IC4CON_ICI1_POSITION                    0x00000006
#define _IC4CON_ICI1_MASK                        0x00000040
#define _IC4CON_ICI1_LENGTH                      0x00000001

#define _IC4CON_ICSIDL_POSITION                  0x0000000D
#define _IC4CON_ICSIDL_MASK                      0x00002000
#define _IC4CON_ICSIDL_LENGTH                    0x00000001

#define _IC4CON_w_POSITION                       0x00000000
#define _IC4CON_w_MASK                           0xFFFFFFFF
#define _IC4CON_w_LENGTH                         0x00000020

#define _IC5CON_ICM_POSITION                     0x00000000
#define _IC5CON_ICM_MASK                         0x00000007
#define _IC5CON_ICM_LENGTH                       0x00000003

#define _IC5CON_ICBNE_POSITION                   0x00000003
#define _IC5CON_ICBNE_MASK                       0x00000008
#define _IC5CON_ICBNE_LENGTH                     0x00000001

#define _IC5CON_ICOV_POSITION                    0x00000004
#define _IC5CON_ICOV_MASK                        0x00000010
#define _IC5CON_ICOV_LENGTH                      0x00000001

#define _IC5CON_ICI_POSITION                     0x00000005
#define _IC5CON_ICI_MASK                         0x00000060
#define _IC5CON_ICI_LENGTH                       0x00000002

#define _IC5CON_ICTMR_POSITION                   0x00000007
#define _IC5CON_ICTMR_MASK                       0x00000080
#define _IC5CON_ICTMR_LENGTH                     0x00000001

#define _IC5CON_C32_POSITION                     0x00000008
#define _IC5CON_C32_MASK                         0x00000100
#define _IC5CON_C32_LENGTH                       0x00000001

#define _IC5CON_FEDGE_POSITION                   0x00000009
#define _IC5CON_FEDGE_MASK                       0x00000200
#define _IC5CON_FEDGE_LENGTH                     0x00000001

#define _IC5CON_SIDL_POSITION                    0x0000000D
#define _IC5CON_SIDL_MASK                        0x00002000
#define _IC5CON_SIDL_LENGTH                      0x00000001

#define _IC5CON_ON_POSITION                      0x0000000F
#define _IC5CON_ON_MASK                          0x00008000
#define _IC5CON_ON_LENGTH                        0x00000001

#define _IC5CON_ICM0_POSITION                    0x00000000
#define _IC5CON_ICM0_MASK                        0x00000001
#define _IC5CON_ICM0_LENGTH                      0x00000001

#define _IC5CON_ICM1_POSITION                    0x00000001
#define _IC5CON_ICM1_MASK                        0x00000002
#define _IC5CON_ICM1_LENGTH                      0x00000001

#define _IC5CON_ICM2_POSITION                    0x00000002
#define _IC5CON_ICM2_MASK                        0x00000004
#define _IC5CON_ICM2_LENGTH                      0x00000001

#define _IC5CON_ICI0_POSITION                    0x00000005
#define _IC5CON_ICI0_MASK                        0x00000020
#define _IC5CON_ICI0_LENGTH                      0x00000001

#define _IC5CON_ICI1_POSITION                    0x00000006
#define _IC5CON_ICI1_MASK                        0x00000040
#define _IC5CON_ICI1_LENGTH                      0x00000001

#define _IC5CON_ICSIDL_POSITION                  0x0000000D
#define _IC5CON_ICSIDL_MASK                      0x00002000
#define _IC5CON_ICSIDL_LENGTH                    0x00000001

#define _IC5CON_w_POSITION                       0x00000000
#define _IC5CON_w_MASK                           0xFFFFFFFF
#define _IC5CON_w_LENGTH                         0x00000020

#define _OC1CON_OCM_POSITION                     0x00000000
#define _OC1CON_OCM_MASK                         0x00000007
#define _OC1CON_OCM_LENGTH                       0x00000003

#define _OC1CON_OCTSEL_POSITION                  0x00000003
#define _OC1CON_OCTSEL_MASK                      0x00000008
#define _OC1CON_OCTSEL_LENGTH                    0x00000001

#define _OC1CON_OCFLT_POSITION                   0x00000004
#define _OC1CON_OCFLT_MASK                       0x00000010
#define _OC1CON_OCFLT_LENGTH                     0x00000001

#define _OC1CON_OC32_POSITION                    0x00000005
#define _OC1CON_OC32_MASK                        0x00000020
#define _OC1CON_OC32_LENGTH                      0x00000001

#define _OC1CON_SIDL_POSITION                    0x0000000D
#define _OC1CON_SIDL_MASK                        0x00002000
#define _OC1CON_SIDL_LENGTH                      0x00000001

#define _OC1CON_ON_POSITION                      0x0000000F
#define _OC1CON_ON_MASK                          0x00008000
#define _OC1CON_ON_LENGTH                        0x00000001

#define _OC1CON_OCM0_POSITION                    0x00000000
#define _OC1CON_OCM0_MASK                        0x00000001
#define _OC1CON_OCM0_LENGTH                      0x00000001

#define _OC1CON_OCM1_POSITION                    0x00000001
#define _OC1CON_OCM1_MASK                        0x00000002
#define _OC1CON_OCM1_LENGTH                      0x00000001

#define _OC1CON_OCM2_POSITION                    0x00000002
#define _OC1CON_OCM2_MASK                        0x00000004
#define _OC1CON_OCM2_LENGTH                      0x00000001

#define _OC1CON_OCSIDL_POSITION                  0x0000000D
#define _OC1CON_OCSIDL_MASK                      0x00002000
#define _OC1CON_OCSIDL_LENGTH                    0x00000001

#define _OC1CON_w_POSITION                       0x00000000
#define _OC1CON_w_MASK                           0xFFFFFFFF
#define _OC1CON_w_LENGTH                         0x00000020

#define _OC2CON_OCM_POSITION                     0x00000000
#define _OC2CON_OCM_MASK                         0x00000007
#define _OC2CON_OCM_LENGTH                       0x00000003

#define _OC2CON_OCTSEL_POSITION                  0x00000003
#define _OC2CON_OCTSEL_MASK                      0x00000008
#define _OC2CON_OCTSEL_LENGTH                    0x00000001

#define _OC2CON_OCFLT_POSITION                   0x00000004
#define _OC2CON_OCFLT_MASK                       0x00000010
#define _OC2CON_OCFLT_LENGTH                     0x00000001

#define _OC2CON_OC32_POSITION                    0x00000005
#define _OC2CON_OC32_MASK                        0x00000020
#define _OC2CON_OC32_LENGTH                      0x00000001

#define _OC2CON_SIDL_POSITION                    0x0000000D
#define _OC2CON_SIDL_MASK                        0x00002000
#define _OC2CON_SIDL_LENGTH                      0x00000001

#define _OC2CON_ON_POSITION                      0x0000000F
#define _OC2CON_ON_MASK                          0x00008000
#define _OC2CON_ON_LENGTH                        0x00000001

#define _OC2CON_OCM0_POSITION                    0x00000000
#define _OC2CON_OCM0_MASK                        0x00000001
#define _OC2CON_OCM0_LENGTH                      0x00000001

#define _OC2CON_OCM1_POSITION                    0x00000001
#define _OC2CON_OCM1_MASK                        0x00000002
#define _OC2CON_OCM1_LENGTH                      0x00000001

#define _OC2CON_OCM2_POSITION                    0x00000002
#define _OC2CON_OCM2_MASK                        0x00000004
#define _OC2CON_OCM2_LENGTH                      0x00000001

#define _OC2CON_OCSIDL_POSITION                  0x0000000D
#define _OC2CON_OCSIDL_MASK                      0x00002000
#define _OC2CON_OCSIDL_LENGTH                    0x00000001

#define _OC2CON_w_POSITION                       0x00000000
#define _OC2CON_w_MASK                           0xFFFFFFFF
#define _OC2CON_w_LENGTH                         0x00000020

#define _OC3CON_OCM_POSITION                     0x00000000
#define _OC3CON_OCM_MASK                         0x00000007
#define _OC3CON_OCM_LENGTH                       0x00000003

#define _OC3CON_OCTSEL_POSITION                  0x00000003
#define _OC3CON_OCTSEL_MASK                      0x00000008
#define _OC3CON_OCTSEL_LENGTH                    0x00000001

#define _OC3CON_OCFLT_POSITION                   0x00000004
#define _OC3CON_OCFLT_MASK                       0x00000010
#define _OC3CON_OCFLT_LENGTH                     0x00000001

#define _OC3CON_OC32_POSITION                    0x00000005
#define _OC3CON_OC32_MASK                        0x00000020
#define _OC3CON_OC32_LENGTH                      0x00000001

#define _OC3CON_SIDL_POSITION                    0x0000000D
#define _OC3CON_SIDL_MASK                        0x00002000
#define _OC3CON_SIDL_LENGTH                      0x00000001

#define _OC3CON_ON_POSITION                      0x0000000F
#define _OC3CON_ON_MASK                          0x00008000
#define _OC3CON_ON_LENGTH                        0x00000001

#define _OC3CON_OCM0_POSITION                    0x00000000
#define _OC3CON_OCM0_MASK                        0x00000001
#define _OC3CON_OCM0_LENGTH                      0x00000001

#define _OC3CON_OCM1_POSITION                    0x00000001
#define _OC3CON_OCM1_MASK                        0x00000002
#define _OC3CON_OCM1_LENGTH                      0x00000001

#define _OC3CON_OCM2_POSITION                    0x00000002
#define _OC3CON_OCM2_MASK                        0x00000004
#define _OC3CON_OCM2_LENGTH                      0x00000001

#define _OC3CON_OCSIDL_POSITION                  0x0000000D
#define _OC3CON_OCSIDL_MASK                      0x00002000
#define _OC3CON_OCSIDL_LENGTH                    0x00000001

#define _OC3CON_w_POSITION                       0x00000000
#define _OC3CON_w_MASK                           0xFFFFFFFF
#define _OC3CON_w_LENGTH                         0x00000020

#define _OC4CON_OCM_POSITION                     0x00000000
#define _OC4CON_OCM_MASK                         0x00000007
#define _OC4CON_OCM_LENGTH                       0x00000003

#define _OC4CON_OCTSEL_POSITION                  0x00000003
#define _OC4CON_OCTSEL_MASK                      0x00000008
#define _OC4CON_OCTSEL_LENGTH                    0x00000001

#define _OC4CON_OCFLT_POSITION                   0x00000004
#define _OC4CON_OCFLT_MASK                       0x00000010
#define _OC4CON_OCFLT_LENGTH                     0x00000001

#define _OC4CON_OC32_POSITION                    0x00000005
#define _OC4CON_OC32_MASK                        0x00000020
#define _OC4CON_OC32_LENGTH                      0x00000001

#define _OC4CON_SIDL_POSITION                    0x0000000D
#define _OC4CON_SIDL_MASK                        0x00002000
#define _OC4CON_SIDL_LENGTH                      0x00000001

#define _OC4CON_ON_POSITION                      0x0000000F
#define _OC4CON_ON_MASK                          0x00008000
#define _OC4CON_ON_LENGTH                        0x00000001

#define _OC4CON_OCM0_POSITION                    0x00000000
#define _OC4CON_OCM0_MASK                        0x00000001
#define _OC4CON_OCM0_LENGTH                      0x00000001

#define _OC4CON_OCM1_POSITION                    0x00000001
#define _OC4CON_OCM1_MASK                        0x00000002
#define _OC4CON_OCM1_LENGTH                      0x00000001

#define _OC4CON_OCM2_POSITION                    0x00000002
#define _OC4CON_OCM2_MASK                        0x00000004
#define _OC4CON_OCM2_LENGTH                      0x00000001

#define _OC4CON_OCSIDL_POSITION                  0x0000000D
#define _OC4CON_OCSIDL_MASK                      0x00002000
#define _OC4CON_OCSIDL_LENGTH                    0x00000001

#define _OC4CON_w_POSITION                       0x00000000
#define _OC4CON_w_MASK                           0xFFFFFFFF
#define _OC4CON_w_LENGTH                         0x00000020

#define _OC5CON_OCM_POSITION                     0x00000000
#define _OC5CON_OCM_MASK                         0x00000007
#define _OC5CON_OCM_LENGTH                       0x00000003

#define _OC5CON_OCTSEL_POSITION                  0x00000003
#define _OC5CON_OCTSEL_MASK                      0x00000008
#define _OC5CON_OCTSEL_LENGTH                    0x00000001

#define _OC5CON_OCFLT_POSITION                   0x00000004
#define _OC5CON_OCFLT_MASK                       0x00000010
#define _OC5CON_OCFLT_LENGTH                     0x00000001

#define _OC5CON_OC32_POSITION                    0x00000005
#define _OC5CON_OC32_MASK                        0x00000020
#define _OC5CON_OC32_LENGTH                      0x00000001

#define _OC5CON_SIDL_POSITION                    0x0000000D
#define _OC5CON_SIDL_MASK                        0x00002000
#define _OC5CON_SIDL_LENGTH                      0x00000001

#define _OC5CON_ON_POSITION                      0x0000000F
#define _OC5CON_ON_MASK                          0x00008000
#define _OC5CON_ON_LENGTH                        0x00000001

#define _OC5CON_OCM0_POSITION                    0x00000000
#define _OC5CON_OCM0_MASK                        0x00000001
#define _OC5CON_OCM0_LENGTH                      0x00000001

#define _OC5CON_OCM1_POSITION                    0x00000001
#define _OC5CON_OCM1_MASK                        0x00000002
#define _OC5CON_OCM1_LENGTH                      0x00000001

#define _OC5CON_OCM2_POSITION                    0x00000002
#define _OC5CON_OCM2_MASK                        0x00000004
#define _OC5CON_OCM2_LENGTH                      0x00000001

#define _OC5CON_OCSIDL_POSITION                  0x0000000D
#define _OC5CON_OCSIDL_MASK                      0x00002000
#define _OC5CON_OCSIDL_LENGTH                    0x00000001

#define _OC5CON_w_POSITION                       0x00000000
#define _OC5CON_w_MASK                           0xFFFFFFFF
#define _OC5CON_w_LENGTH                         0x00000020

#define _I2C1ACON_SEN_POSITION                   0x00000000
#define _I2C1ACON_SEN_MASK                       0x00000001
#define _I2C1ACON_SEN_LENGTH                     0x00000001

#define _I2C1ACON_RSEN_POSITION                  0x00000001
#define _I2C1ACON_RSEN_MASK                      0x00000002
#define _I2C1ACON_RSEN_LENGTH                    0x00000001

#define _I2C1ACON_PEN_POSITION                   0x00000002
#define _I2C1ACON_PEN_MASK                       0x00000004
#define _I2C1ACON_PEN_LENGTH                     0x00000001

#define _I2C1ACON_RCEN_POSITION                  0x00000003
#define _I2C1ACON_RCEN_MASK                      0x00000008
#define _I2C1ACON_RCEN_LENGTH                    0x00000001

#define _I2C1ACON_ACKEN_POSITION                 0x00000004
#define _I2C1ACON_ACKEN_MASK                     0x00000010
#define _I2C1ACON_ACKEN_LENGTH                   0x00000001

#define _I2C1ACON_ACKDT_POSITION                 0x00000005
#define _I2C1ACON_ACKDT_MASK                     0x00000020
#define _I2C1ACON_ACKDT_LENGTH                   0x00000001

#define _I2C1ACON_STREN_POSITION                 0x00000006
#define _I2C1ACON_STREN_MASK                     0x00000040
#define _I2C1ACON_STREN_LENGTH                   0x00000001

#define _I2C1ACON_GCEN_POSITION                  0x00000007
#define _I2C1ACON_GCEN_MASK                      0x00000080
#define _I2C1ACON_GCEN_LENGTH                    0x00000001

#define _I2C1ACON_SMEN_POSITION                  0x00000008
#define _I2C1ACON_SMEN_MASK                      0x00000100
#define _I2C1ACON_SMEN_LENGTH                    0x00000001

#define _I2C1ACON_DISSLW_POSITION                0x00000009
#define _I2C1ACON_DISSLW_MASK                    0x00000200
#define _I2C1ACON_DISSLW_LENGTH                  0x00000001

#define _I2C1ACON_A10M_POSITION                  0x0000000A
#define _I2C1ACON_A10M_MASK                      0x00000400
#define _I2C1ACON_A10M_LENGTH                    0x00000001

#define _I2C1ACON_STRICT_POSITION                0x0000000B
#define _I2C1ACON_STRICT_MASK                    0x00000800
#define _I2C1ACON_STRICT_LENGTH                  0x00000001

#define _I2C1ACON_SCLREL_POSITION                0x0000000C
#define _I2C1ACON_SCLREL_MASK                    0x00001000
#define _I2C1ACON_SCLREL_LENGTH                  0x00000001

#define _I2C1ACON_SIDL_POSITION                  0x0000000D
#define _I2C1ACON_SIDL_MASK                      0x00002000
#define _I2C1ACON_SIDL_LENGTH                    0x00000001

#define _I2C1ACON_ON_POSITION                    0x0000000F
#define _I2C1ACON_ON_MASK                        0x00008000
#define _I2C1ACON_ON_LENGTH                      0x00000001

#define _I2C1ACON_IPMIEN_POSITION                0x0000000B
#define _I2C1ACON_IPMIEN_MASK                    0x00000800
#define _I2C1ACON_IPMIEN_LENGTH                  0x00000001

#define _I2C1ACON_I2CSIDL_POSITION               0x0000000D
#define _I2C1ACON_I2CSIDL_MASK                   0x00002000
#define _I2C1ACON_I2CSIDL_LENGTH                 0x00000001

#define _I2C1ACON_I2CEN_POSITION                 0x0000000F
#define _I2C1ACON_I2CEN_MASK                     0x00008000
#define _I2C1ACON_I2CEN_LENGTH                   0x00000001

#define _I2C1ACON_w_POSITION                     0x00000000
#define _I2C1ACON_w_MASK                         0xFFFFFFFF
#define _I2C1ACON_w_LENGTH                       0x00000020

#define _I2C1CON_SEN_POSITION                    0x00000000
#define _I2C1CON_SEN_MASK                        0x00000001
#define _I2C1CON_SEN_LENGTH                      0x00000001

#define _I2C1CON_RSEN_POSITION                   0x00000001
#define _I2C1CON_RSEN_MASK                       0x00000002
#define _I2C1CON_RSEN_LENGTH                     0x00000001

#define _I2C1CON_PEN_POSITION                    0x00000002
#define _I2C1CON_PEN_MASK                        0x00000004
#define _I2C1CON_PEN_LENGTH                      0x00000001

#define _I2C1CON_RCEN_POSITION                   0x00000003
#define _I2C1CON_RCEN_MASK                       0x00000008
#define _I2C1CON_RCEN_LENGTH                     0x00000001

#define _I2C1CON_ACKEN_POSITION                  0x00000004
#define _I2C1CON_ACKEN_MASK                      0x00000010
#define _I2C1CON_ACKEN_LENGTH                    0x00000001

#define _I2C1CON_ACKDT_POSITION                  0x00000005
#define _I2C1CON_ACKDT_MASK                      0x00000020
#define _I2C1CON_ACKDT_LENGTH                    0x00000001

#define _I2C1CON_STREN_POSITION                  0x00000006
#define _I2C1CON_STREN_MASK                      0x00000040
#define _I2C1CON_STREN_LENGTH                    0x00000001

#define _I2C1CON_GCEN_POSITION                   0x00000007
#define _I2C1CON_GCEN_MASK                       0x00000080
#define _I2C1CON_GCEN_LENGTH                     0x00000001

#define _I2C1CON_SMEN_POSITION                   0x00000008
#define _I2C1CON_SMEN_MASK                       0x00000100
#define _I2C1CON_SMEN_LENGTH                     0x00000001

#define _I2C1CON_DISSLW_POSITION                 0x00000009
#define _I2C1CON_DISSLW_MASK                     0x00000200
#define _I2C1CON_DISSLW_LENGTH                   0x00000001

#define _I2C1CON_A10M_POSITION                   0x0000000A
#define _I2C1CON_A10M_MASK                       0x00000400
#define _I2C1CON_A10M_LENGTH                     0x00000001

#define _I2C1CON_STRICT_POSITION                 0x0000000B
#define _I2C1CON_STRICT_MASK                     0x00000800
#define _I2C1CON_STRICT_LENGTH                   0x00000001

#define _I2C1CON_SCLREL_POSITION                 0x0000000C
#define _I2C1CON_SCLREL_MASK                     0x00001000
#define _I2C1CON_SCLREL_LENGTH                   0x00000001

#define _I2C1CON_SIDL_POSITION                   0x0000000D
#define _I2C1CON_SIDL_MASK                       0x00002000
#define _I2C1CON_SIDL_LENGTH                     0x00000001

#define _I2C1CON_ON_POSITION                     0x0000000F
#define _I2C1CON_ON_MASK                         0x00008000
#define _I2C1CON_ON_LENGTH                       0x00000001

#define _I2C1CON_IPMIEN_POSITION                 0x0000000B
#define _I2C1CON_IPMIEN_MASK                     0x00000800
#define _I2C1CON_IPMIEN_LENGTH                   0x00000001

#define _I2C1CON_I2CSIDL_POSITION                0x0000000D
#define _I2C1CON_I2CSIDL_MASK                    0x00002000
#define _I2C1CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C1CON_I2CEN_POSITION                  0x0000000F
#define _I2C1CON_I2CEN_MASK                      0x00008000
#define _I2C1CON_I2CEN_LENGTH                    0x00000001

#define _I2C1CON_w_POSITION                      0x00000000
#define _I2C1CON_w_MASK                          0xFFFFFFFF
#define _I2C1CON_w_LENGTH                        0x00000020

#define _I2C1ASTAT_TBF_POSITION                  0x00000000
#define _I2C1ASTAT_TBF_MASK                      0x00000001
#define _I2C1ASTAT_TBF_LENGTH                    0x00000001

#define _I2C1ASTAT_RBF_POSITION                  0x00000001
#define _I2C1ASTAT_RBF_MASK                      0x00000002
#define _I2C1ASTAT_RBF_LENGTH                    0x00000001

#define _I2C1ASTAT_R_W_POSITION                  0x00000002
#define _I2C1ASTAT_R_W_MASK                      0x00000004
#define _I2C1ASTAT_R_W_LENGTH                    0x00000001

#define _I2C1ASTAT_S_POSITION                    0x00000003
#define _I2C1ASTAT_S_MASK                        0x00000008
#define _I2C1ASTAT_S_LENGTH                      0x00000001

#define _I2C1ASTAT_P_POSITION                    0x00000004
#define _I2C1ASTAT_P_MASK                        0x00000010
#define _I2C1ASTAT_P_LENGTH                      0x00000001

#define _I2C1ASTAT_D_A_POSITION                  0x00000005
#define _I2C1ASTAT_D_A_MASK                      0x00000020
#define _I2C1ASTAT_D_A_LENGTH                    0x00000001

#define _I2C1ASTAT_I2COV_POSITION                0x00000006
#define _I2C1ASTAT_I2COV_MASK                    0x00000040
#define _I2C1ASTAT_I2COV_LENGTH                  0x00000001

#define _I2C1ASTAT_IWCOL_POSITION                0x00000007
#define _I2C1ASTAT_IWCOL_MASK                    0x00000080
#define _I2C1ASTAT_IWCOL_LENGTH                  0x00000001

#define _I2C1ASTAT_ADD10_POSITION                0x00000008
#define _I2C1ASTAT_ADD10_MASK                    0x00000100
#define _I2C1ASTAT_ADD10_LENGTH                  0x00000001

#define _I2C1ASTAT_GCSTAT_POSITION               0x00000009
#define _I2C1ASTAT_GCSTAT_MASK                   0x00000200
#define _I2C1ASTAT_GCSTAT_LENGTH                 0x00000001

#define _I2C1ASTAT_BCL_POSITION                  0x0000000A
#define _I2C1ASTAT_BCL_MASK                      0x00000400
#define _I2C1ASTAT_BCL_LENGTH                    0x00000001

#define _I2C1ASTAT_TRSTAT_POSITION               0x0000000E
#define _I2C1ASTAT_TRSTAT_MASK                   0x00004000
#define _I2C1ASTAT_TRSTAT_LENGTH                 0x00000001

#define _I2C1ASTAT_ACKSTAT_POSITION              0x0000000F
#define _I2C1ASTAT_ACKSTAT_MASK                  0x00008000
#define _I2C1ASTAT_ACKSTAT_LENGTH                0x00000001

#define _I2C1ASTAT_I2CPOV_POSITION               0x00000006
#define _I2C1ASTAT_I2CPOV_MASK                   0x00000040
#define _I2C1ASTAT_I2CPOV_LENGTH                 0x00000001

#define _I2C1ASTAT_w_POSITION                    0x00000000
#define _I2C1ASTAT_w_MASK                        0xFFFFFFFF
#define _I2C1ASTAT_w_LENGTH                      0x00000020

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C1STAT_I2COV_POSITION                 0x00000006
#define _I2C1STAT_I2COV_MASK                     0x00000040
#define _I2C1STAT_I2COV_LENGTH                   0x00000001

#define _I2C1STAT_IWCOL_POSITION                 0x00000007
#define _I2C1STAT_IWCOL_MASK                     0x00000080
#define _I2C1STAT_IWCOL_LENGTH                   0x00000001

#define _I2C1STAT_ADD10_POSITION                 0x00000008
#define _I2C1STAT_ADD10_MASK                     0x00000100
#define _I2C1STAT_ADD10_LENGTH                   0x00000001

#define _I2C1STAT_GCSTAT_POSITION                0x00000009
#define _I2C1STAT_GCSTAT_MASK                    0x00000200
#define _I2C1STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C1STAT_BCL_POSITION                   0x0000000A
#define _I2C1STAT_BCL_MASK                       0x00000400
#define _I2C1STAT_BCL_LENGTH                     0x00000001

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C1STAT_I2CPOV_POSITION                0x00000006
#define _I2C1STAT_I2CPOV_MASK                    0x00000040
#define _I2C1STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C1STAT_w_POSITION                     0x00000000
#define _I2C1STAT_w_MASK                         0xFFFFFFFF
#define _I2C1STAT_w_LENGTH                       0x00000020

#define _I2C2ACON_SEN_POSITION                   0x00000000
#define _I2C2ACON_SEN_MASK                       0x00000001
#define _I2C2ACON_SEN_LENGTH                     0x00000001

#define _I2C2ACON_RSEN_POSITION                  0x00000001
#define _I2C2ACON_RSEN_MASK                      0x00000002
#define _I2C2ACON_RSEN_LENGTH                    0x00000001

#define _I2C2ACON_PEN_POSITION                   0x00000002
#define _I2C2ACON_PEN_MASK                       0x00000004
#define _I2C2ACON_PEN_LENGTH                     0x00000001

#define _I2C2ACON_RCEN_POSITION                  0x00000003
#define _I2C2ACON_RCEN_MASK                      0x00000008
#define _I2C2ACON_RCEN_LENGTH                    0x00000001

#define _I2C2ACON_ACKEN_POSITION                 0x00000004
#define _I2C2ACON_ACKEN_MASK                     0x00000010
#define _I2C2ACON_ACKEN_LENGTH                   0x00000001

#define _I2C2ACON_ACKDT_POSITION                 0x00000005
#define _I2C2ACON_ACKDT_MASK                     0x00000020
#define _I2C2ACON_ACKDT_LENGTH                   0x00000001

#define _I2C2ACON_STREN_POSITION                 0x00000006
#define _I2C2ACON_STREN_MASK                     0x00000040
#define _I2C2ACON_STREN_LENGTH                   0x00000001

#define _I2C2ACON_GCEN_POSITION                  0x00000007
#define _I2C2ACON_GCEN_MASK                      0x00000080
#define _I2C2ACON_GCEN_LENGTH                    0x00000001

#define _I2C2ACON_SMEN_POSITION                  0x00000008
#define _I2C2ACON_SMEN_MASK                      0x00000100
#define _I2C2ACON_SMEN_LENGTH                    0x00000001

#define _I2C2ACON_DISSLW_POSITION                0x00000009
#define _I2C2ACON_DISSLW_MASK                    0x00000200
#define _I2C2ACON_DISSLW_LENGTH                  0x00000001

#define _I2C2ACON_A10M_POSITION                  0x0000000A
#define _I2C2ACON_A10M_MASK                      0x00000400
#define _I2C2ACON_A10M_LENGTH                    0x00000001

#define _I2C2ACON_STRICT_POSITION                0x0000000B
#define _I2C2ACON_STRICT_MASK                    0x00000800
#define _I2C2ACON_STRICT_LENGTH                  0x00000001

#define _I2C2ACON_SCLREL_POSITION                0x0000000C
#define _I2C2ACON_SCLREL_MASK                    0x00001000
#define _I2C2ACON_SCLREL_LENGTH                  0x00000001

#define _I2C2ACON_SIDL_POSITION                  0x0000000D
#define _I2C2ACON_SIDL_MASK                      0x00002000
#define _I2C2ACON_SIDL_LENGTH                    0x00000001

#define _I2C2ACON_ON_POSITION                    0x0000000F
#define _I2C2ACON_ON_MASK                        0x00008000
#define _I2C2ACON_ON_LENGTH                      0x00000001

#define _I2C2ACON_IPMIEN_POSITION                0x0000000B
#define _I2C2ACON_IPMIEN_MASK                    0x00000800
#define _I2C2ACON_IPMIEN_LENGTH                  0x00000001

#define _I2C2ACON_I2CSIDL_POSITION               0x0000000D
#define _I2C2ACON_I2CSIDL_MASK                   0x00002000
#define _I2C2ACON_I2CSIDL_LENGTH                 0x00000001

#define _I2C2ACON_I2CEN_POSITION                 0x0000000F
#define _I2C2ACON_I2CEN_MASK                     0x00008000
#define _I2C2ACON_I2CEN_LENGTH                   0x00000001

#define _I2C2ACON_w_POSITION                     0x00000000
#define _I2C2ACON_w_MASK                         0xFFFFFFFF
#define _I2C2ACON_w_LENGTH                       0x00000020

#define _I2C2CON_SEN_POSITION                    0x00000000
#define _I2C2CON_SEN_MASK                        0x00000001
#define _I2C2CON_SEN_LENGTH                      0x00000001

#define _I2C2CON_RSEN_POSITION                   0x00000001
#define _I2C2CON_RSEN_MASK                       0x00000002
#define _I2C2CON_RSEN_LENGTH                     0x00000001

#define _I2C2CON_PEN_POSITION                    0x00000002
#define _I2C2CON_PEN_MASK                        0x00000004
#define _I2C2CON_PEN_LENGTH                      0x00000001

#define _I2C2CON_RCEN_POSITION                   0x00000003
#define _I2C2CON_RCEN_MASK                       0x00000008
#define _I2C2CON_RCEN_LENGTH                     0x00000001

#define _I2C2CON_ACKEN_POSITION                  0x00000004
#define _I2C2CON_ACKEN_MASK                      0x00000010
#define _I2C2CON_ACKEN_LENGTH                    0x00000001

#define _I2C2CON_ACKDT_POSITION                  0x00000005
#define _I2C2CON_ACKDT_MASK                      0x00000020
#define _I2C2CON_ACKDT_LENGTH                    0x00000001

#define _I2C2CON_STREN_POSITION                  0x00000006
#define _I2C2CON_STREN_MASK                      0x00000040
#define _I2C2CON_STREN_LENGTH                    0x00000001

#define _I2C2CON_GCEN_POSITION                   0x00000007
#define _I2C2CON_GCEN_MASK                       0x00000080
#define _I2C2CON_GCEN_LENGTH                     0x00000001

#define _I2C2CON_SMEN_POSITION                   0x00000008
#define _I2C2CON_SMEN_MASK                       0x00000100
#define _I2C2CON_SMEN_LENGTH                     0x00000001

#define _I2C2CON_DISSLW_POSITION                 0x00000009
#define _I2C2CON_DISSLW_MASK                     0x00000200
#define _I2C2CON_DISSLW_LENGTH                   0x00000001

#define _I2C2CON_A10M_POSITION                   0x0000000A
#define _I2C2CON_A10M_MASK                       0x00000400
#define _I2C2CON_A10M_LENGTH                     0x00000001

#define _I2C2CON_STRICT_POSITION                 0x0000000B
#define _I2C2CON_STRICT_MASK                     0x00000800
#define _I2C2CON_STRICT_LENGTH                   0x00000001

#define _I2C2CON_SCLREL_POSITION                 0x0000000C
#define _I2C2CON_SCLREL_MASK                     0x00001000
#define _I2C2CON_SCLREL_LENGTH                   0x00000001

#define _I2C2CON_SIDL_POSITION                   0x0000000D
#define _I2C2CON_SIDL_MASK                       0x00002000
#define _I2C2CON_SIDL_LENGTH                     0x00000001

#define _I2C2CON_ON_POSITION                     0x0000000F
#define _I2C2CON_ON_MASK                         0x00008000
#define _I2C2CON_ON_LENGTH                       0x00000001

#define _I2C2CON_IPMIEN_POSITION                 0x0000000B
#define _I2C2CON_IPMIEN_MASK                     0x00000800
#define _I2C2CON_IPMIEN_LENGTH                   0x00000001

#define _I2C2CON_I2CSIDL_POSITION                0x0000000D
#define _I2C2CON_I2CSIDL_MASK                    0x00002000
#define _I2C2CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C2CON_I2CEN_POSITION                  0x0000000F
#define _I2C2CON_I2CEN_MASK                      0x00008000
#define _I2C2CON_I2CEN_LENGTH                    0x00000001

#define _I2C2CON_w_POSITION                      0x00000000
#define _I2C2CON_w_MASK                          0xFFFFFFFF
#define _I2C2CON_w_LENGTH                        0x00000020

#define _I2C2ASTAT_TBF_POSITION                  0x00000000
#define _I2C2ASTAT_TBF_MASK                      0x00000001
#define _I2C2ASTAT_TBF_LENGTH                    0x00000001

#define _I2C2ASTAT_RBF_POSITION                  0x00000001
#define _I2C2ASTAT_RBF_MASK                      0x00000002
#define _I2C2ASTAT_RBF_LENGTH                    0x00000001

#define _I2C2ASTAT_R_W_POSITION                  0x00000002
#define _I2C2ASTAT_R_W_MASK                      0x00000004
#define _I2C2ASTAT_R_W_LENGTH                    0x00000001

#define _I2C2ASTAT_S_POSITION                    0x00000003
#define _I2C2ASTAT_S_MASK                        0x00000008
#define _I2C2ASTAT_S_LENGTH                      0x00000001

#define _I2C2ASTAT_P_POSITION                    0x00000004
#define _I2C2ASTAT_P_MASK                        0x00000010
#define _I2C2ASTAT_P_LENGTH                      0x00000001

#define _I2C2ASTAT_D_A_POSITION                  0x00000005
#define _I2C2ASTAT_D_A_MASK                      0x00000020
#define _I2C2ASTAT_D_A_LENGTH                    0x00000001

#define _I2C2ASTAT_I2COV_POSITION                0x00000006
#define _I2C2ASTAT_I2COV_MASK                    0x00000040
#define _I2C2ASTAT_I2COV_LENGTH                  0x00000001

#define _I2C2ASTAT_IWCOL_POSITION                0x00000007
#define _I2C2ASTAT_IWCOL_MASK                    0x00000080
#define _I2C2ASTAT_IWCOL_LENGTH                  0x00000001

#define _I2C2ASTAT_ADD10_POSITION                0x00000008
#define _I2C2ASTAT_ADD10_MASK                    0x00000100
#define _I2C2ASTAT_ADD10_LENGTH                  0x00000001

#define _I2C2ASTAT_GCSTAT_POSITION               0x00000009
#define _I2C2ASTAT_GCSTAT_MASK                   0x00000200
#define _I2C2ASTAT_GCSTAT_LENGTH                 0x00000001

#define _I2C2ASTAT_BCL_POSITION                  0x0000000A
#define _I2C2ASTAT_BCL_MASK                      0x00000400
#define _I2C2ASTAT_BCL_LENGTH                    0x00000001

#define _I2C2ASTAT_TRSTAT_POSITION               0x0000000E
#define _I2C2ASTAT_TRSTAT_MASK                   0x00004000
#define _I2C2ASTAT_TRSTAT_LENGTH                 0x00000001

#define _I2C2ASTAT_ACKSTAT_POSITION              0x0000000F
#define _I2C2ASTAT_ACKSTAT_MASK                  0x00008000
#define _I2C2ASTAT_ACKSTAT_LENGTH                0x00000001

#define _I2C2ASTAT_I2CPOV_POSITION               0x00000006
#define _I2C2ASTAT_I2CPOV_MASK                   0x00000040
#define _I2C2ASTAT_I2CPOV_LENGTH                 0x00000001

#define _I2C2ASTAT_w_POSITION                    0x00000000
#define _I2C2ASTAT_w_MASK                        0xFFFFFFFF
#define _I2C2ASTAT_w_LENGTH                      0x00000020

#define _I2C2STAT_TBF_POSITION                   0x00000000
#define _I2C2STAT_TBF_MASK                       0x00000001
#define _I2C2STAT_TBF_LENGTH                     0x00000001

#define _I2C2STAT_RBF_POSITION                   0x00000001
#define _I2C2STAT_RBF_MASK                       0x00000002
#define _I2C2STAT_RBF_LENGTH                     0x00000001

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _I2C2STAT_I2COV_POSITION                 0x00000006
#define _I2C2STAT_I2COV_MASK                     0x00000040
#define _I2C2STAT_I2COV_LENGTH                   0x00000001

#define _I2C2STAT_IWCOL_POSITION                 0x00000007
#define _I2C2STAT_IWCOL_MASK                     0x00000080
#define _I2C2STAT_IWCOL_LENGTH                   0x00000001

#define _I2C2STAT_ADD10_POSITION                 0x00000008
#define _I2C2STAT_ADD10_MASK                     0x00000100
#define _I2C2STAT_ADD10_LENGTH                   0x00000001

#define _I2C2STAT_GCSTAT_POSITION                0x00000009
#define _I2C2STAT_GCSTAT_MASK                    0x00000200
#define _I2C2STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C2STAT_BCL_POSITION                   0x0000000A
#define _I2C2STAT_BCL_MASK                       0x00000400
#define _I2C2STAT_BCL_LENGTH                     0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2STAT_I2CPOV_POSITION                0x00000006
#define _I2C2STAT_I2CPOV_MASK                    0x00000040
#define _I2C2STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C2STAT_w_POSITION                     0x00000000
#define _I2C2STAT_w_MASK                         0xFFFFFFFF
#define _I2C2STAT_w_LENGTH                       0x00000020

#define _SPI1CON_SRXISEL_POSITION                0x00000000
#define _SPI1CON_SRXISEL_MASK                    0x00000003
#define _SPI1CON_SRXISEL_LENGTH                  0x00000002

#define _SPI1CON_STXISEL_POSITION                0x00000002
#define _SPI1CON_STXISEL_MASK                    0x0000000C
#define _SPI1CON_STXISEL_LENGTH                  0x00000002

#define _SPI1CON_DISSDI_POSITION                 0x00000004
#define _SPI1CON_DISSDI_MASK                     0x00000010
#define _SPI1CON_DISSDI_LENGTH                   0x00000001

#define _SPI1CON_MSTEN_POSITION                  0x00000005
#define _SPI1CON_MSTEN_MASK                      0x00000020
#define _SPI1CON_MSTEN_LENGTH                    0x00000001

#define _SPI1CON_CKP_POSITION                    0x00000006
#define _SPI1CON_CKP_MASK                        0x00000040
#define _SPI1CON_CKP_LENGTH                      0x00000001

#define _SPI1CON_SSEN_POSITION                   0x00000007
#define _SPI1CON_SSEN_MASK                       0x00000080
#define _SPI1CON_SSEN_LENGTH                     0x00000001

#define _SPI1CON_CKE_POSITION                    0x00000008
#define _SPI1CON_CKE_MASK                        0x00000100
#define _SPI1CON_CKE_LENGTH                      0x00000001

#define _SPI1CON_SMP_POSITION                    0x00000009
#define _SPI1CON_SMP_MASK                        0x00000200
#define _SPI1CON_SMP_LENGTH                      0x00000001

#define _SPI1CON_MODE16_POSITION                 0x0000000A
#define _SPI1CON_MODE16_MASK                     0x00000400
#define _SPI1CON_MODE16_LENGTH                   0x00000001

#define _SPI1CON_MODE32_POSITION                 0x0000000B
#define _SPI1CON_MODE32_MASK                     0x00000800
#define _SPI1CON_MODE32_LENGTH                   0x00000001

#define _SPI1CON_DISSDO_POSITION                 0x0000000C
#define _SPI1CON_DISSDO_MASK                     0x00001000
#define _SPI1CON_DISSDO_LENGTH                   0x00000001

#define _SPI1CON_SIDL_POSITION                   0x0000000D
#define _SPI1CON_SIDL_MASK                       0x00002000
#define _SPI1CON_SIDL_LENGTH                     0x00000001

#define _SPI1CON_ON_POSITION                     0x0000000F
#define _SPI1CON_ON_MASK                         0x00008000
#define _SPI1CON_ON_LENGTH                       0x00000001

#define _SPI1CON_ENHBUF_POSITION                 0x00000010
#define _SPI1CON_ENHBUF_MASK                     0x00010000
#define _SPI1CON_ENHBUF_LENGTH                   0x00000001

#define _SPI1CON_SPIFE_POSITION                  0x00000011
#define _SPI1CON_SPIFE_MASK                      0x00020000
#define _SPI1CON_SPIFE_LENGTH                    0x00000001

#define _SPI1CON_MCLKSEL_POSITION                0x00000017
#define _SPI1CON_MCLKSEL_MASK                    0x00800000
#define _SPI1CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI1CON_FRMCNT_POSITION                 0x00000018
#define _SPI1CON_FRMCNT_MASK                     0x07000000
#define _SPI1CON_FRMCNT_LENGTH                   0x00000003

#define _SPI1CON_FRMSYPW_POSITION                0x0000001B
#define _SPI1CON_FRMSYPW_MASK                    0x08000000
#define _SPI1CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI1CON_MSSEN_POSITION                  0x0000001C
#define _SPI1CON_MSSEN_MASK                      0x10000000
#define _SPI1CON_MSSEN_LENGTH                    0x00000001

#define _SPI1CON_FRMPOL_POSITION                 0x0000001D
#define _SPI1CON_FRMPOL_MASK                     0x20000000
#define _SPI1CON_FRMPOL_LENGTH                   0x00000001

#define _SPI1CON_FRMSYNC_POSITION                0x0000001E
#define _SPI1CON_FRMSYNC_MASK                    0x40000000
#define _SPI1CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI1CON_FRMEN_POSITION                  0x0000001F
#define _SPI1CON_FRMEN_MASK                      0x80000000
#define _SPI1CON_FRMEN_LENGTH                    0x00000001

#define _SPI1CON_w_POSITION                      0x00000000
#define _SPI1CON_w_MASK                          0xFFFFFFFF
#define _SPI1CON_w_LENGTH                        0x00000020

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBE_POSITION                0x00000003
#define _SPI1STAT_SPITBE_MASK                    0x00000008
#define _SPI1STAT_SPITBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIRBE_POSITION                0x00000005
#define _SPI1STAT_SPIRBE_MASK                    0x00000020
#define _SPI1STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMT_POSITION                  0x00000007
#define _SPI1STAT_SRMT_MASK                      0x00000080
#define _SPI1STAT_SRMT_LENGTH                    0x00000001

#define _SPI1STAT_SPITUR_POSITION                0x00000008
#define _SPI1STAT_SPITUR_MASK                    0x00000100
#define _SPI1STAT_SPITUR_LENGTH                  0x00000001

#define _SPI1STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI1STAT_SPIBUSY_MASK                   0x00000800
#define _SPI1STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI1STAT_FRMERR_POSITION                0x0000000C
#define _SPI1STAT_FRMERR_MASK                    0x00001000
#define _SPI1STAT_FRMERR_LENGTH                  0x00000001

#define _SPI1STAT_TXBUFELM_POSITION              0x00000010
#define _SPI1STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI1STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_RXBUFELM_POSITION              0x00000018
#define _SPI1STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI1STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_w_POSITION                     0x00000000
#define _SPI1STAT_w_MASK                         0xFFFFFFFF
#define _SPI1STAT_w_LENGTH                       0x00000020

#define _SPI1CON2_AUDMOD_POSITION                0x00000000
#define _SPI1CON2_AUDMOD_MASK                    0x00000003
#define _SPI1CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI1CON2_AUDMONO_POSITION               0x00000003
#define _SPI1CON2_AUDMONO_MASK                   0x00000008
#define _SPI1CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI1CON2_AUDEN_POSITION                 0x00000007
#define _SPI1CON2_AUDEN_MASK                     0x00000080
#define _SPI1CON2_AUDEN_LENGTH                   0x00000001

#define _SPI1CON2_IGNTUR_POSITION                0x00000008
#define _SPI1CON2_IGNTUR_MASK                    0x00000100
#define _SPI1CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI1CON2_IGNROV_POSITION                0x00000009
#define _SPI1CON2_IGNROV_MASK                    0x00000200
#define _SPI1CON2_IGNROV_LENGTH                  0x00000001

#define _SPI1CON2_SPITUREN_POSITION              0x0000000A
#define _SPI1CON2_SPITUREN_MASK                  0x00000400
#define _SPI1CON2_SPITUREN_LENGTH                0x00000001

#define _SPI1CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI1CON2_SPIROVEN_MASK                  0x00000800
#define _SPI1CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI1CON2_FRMERREN_POSITION              0x0000000C
#define _SPI1CON2_FRMERREN_MASK                  0x00001000
#define _SPI1CON2_FRMERREN_LENGTH                0x00000001

#define _SPI1CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI1CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI1CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI1CON2_AUDMOD0_POSITION               0x00000000
#define _SPI1CON2_AUDMOD0_MASK                   0x00000001
#define _SPI1CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI1CON2_AUDMOD1_POSITION               0x00000001
#define _SPI1CON2_AUDMOD1_MASK                   0x00000002
#define _SPI1CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI1CON2_w_POSITION                     0x00000000
#define _SPI1CON2_w_MASK                         0xFFFFFFFF
#define _SPI1CON2_w_LENGTH                       0x00000020

#define _SPI2CON_SRXISEL_POSITION                0x00000000
#define _SPI2CON_SRXISEL_MASK                    0x00000003
#define _SPI2CON_SRXISEL_LENGTH                  0x00000002

#define _SPI2CON_STXISEL_POSITION                0x00000002
#define _SPI2CON_STXISEL_MASK                    0x0000000C
#define _SPI2CON_STXISEL_LENGTH                  0x00000002

#define _SPI2CON_DISSDI_POSITION                 0x00000004
#define _SPI2CON_DISSDI_MASK                     0x00000010
#define _SPI2CON_DISSDI_LENGTH                   0x00000001

#define _SPI2CON_MSTEN_POSITION                  0x00000005
#define _SPI2CON_MSTEN_MASK                      0x00000020
#define _SPI2CON_MSTEN_LENGTH                    0x00000001

#define _SPI2CON_CKP_POSITION                    0x00000006
#define _SPI2CON_CKP_MASK                        0x00000040
#define _SPI2CON_CKP_LENGTH                      0x00000001

#define _SPI2CON_SSEN_POSITION                   0x00000007
#define _SPI2CON_SSEN_MASK                       0x00000080
#define _SPI2CON_SSEN_LENGTH                     0x00000001

#define _SPI2CON_CKE_POSITION                    0x00000008
#define _SPI2CON_CKE_MASK                        0x00000100
#define _SPI2CON_CKE_LENGTH                      0x00000001

#define _SPI2CON_SMP_POSITION                    0x00000009
#define _SPI2CON_SMP_MASK                        0x00000200
#define _SPI2CON_SMP_LENGTH                      0x00000001

#define _SPI2CON_MODE16_POSITION                 0x0000000A
#define _SPI2CON_MODE16_MASK                     0x00000400
#define _SPI2CON_MODE16_LENGTH                   0x00000001

#define _SPI2CON_MODE32_POSITION                 0x0000000B
#define _SPI2CON_MODE32_MASK                     0x00000800
#define _SPI2CON_MODE32_LENGTH                   0x00000001

#define _SPI2CON_DISSDO_POSITION                 0x0000000C
#define _SPI2CON_DISSDO_MASK                     0x00001000
#define _SPI2CON_DISSDO_LENGTH                   0x00000001

#define _SPI2CON_SIDL_POSITION                   0x0000000D
#define _SPI2CON_SIDL_MASK                       0x00002000
#define _SPI2CON_SIDL_LENGTH                     0x00000001

#define _SPI2CON_ON_POSITION                     0x0000000F
#define _SPI2CON_ON_MASK                         0x00008000
#define _SPI2CON_ON_LENGTH                       0x00000001

#define _SPI2CON_ENHBUF_POSITION                 0x00000010
#define _SPI2CON_ENHBUF_MASK                     0x00010000
#define _SPI2CON_ENHBUF_LENGTH                   0x00000001

#define _SPI2CON_SPIFE_POSITION                  0x00000011
#define _SPI2CON_SPIFE_MASK                      0x00020000
#define _SPI2CON_SPIFE_LENGTH                    0x00000001

#define _SPI2CON_MCLKSEL_POSITION                0x00000017
#define _SPI2CON_MCLKSEL_MASK                    0x00800000
#define _SPI2CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI2CON_FRMCNT_POSITION                 0x00000018
#define _SPI2CON_FRMCNT_MASK                     0x07000000
#define _SPI2CON_FRMCNT_LENGTH                   0x00000003

#define _SPI2CON_FRMSYPW_POSITION                0x0000001B
#define _SPI2CON_FRMSYPW_MASK                    0x08000000
#define _SPI2CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI2CON_MSSEN_POSITION                  0x0000001C
#define _SPI2CON_MSSEN_MASK                      0x10000000
#define _SPI2CON_MSSEN_LENGTH                    0x00000001

#define _SPI2CON_FRMPOL_POSITION                 0x0000001D
#define _SPI2CON_FRMPOL_MASK                     0x20000000
#define _SPI2CON_FRMPOL_LENGTH                   0x00000001

#define _SPI2CON_FRMSYNC_POSITION                0x0000001E
#define _SPI2CON_FRMSYNC_MASK                    0x40000000
#define _SPI2CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI2CON_FRMEN_POSITION                  0x0000001F
#define _SPI2CON_FRMEN_MASK                      0x80000000
#define _SPI2CON_FRMEN_LENGTH                    0x00000001

#define _SPI2CON_w_POSITION                      0x00000000
#define _SPI2CON_w_MASK                          0xFFFFFFFF
#define _SPI2CON_w_LENGTH                        0x00000020

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBE_POSITION                0x00000003
#define _SPI2STAT_SPITBE_MASK                    0x00000008
#define _SPI2STAT_SPITBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIRBE_POSITION                0x00000005
#define _SPI2STAT_SPIRBE_MASK                    0x00000020
#define _SPI2STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMT_POSITION                  0x00000007
#define _SPI2STAT_SRMT_MASK                      0x00000080
#define _SPI2STAT_SRMT_LENGTH                    0x00000001

#define _SPI2STAT_SPITUR_POSITION                0x00000008
#define _SPI2STAT_SPITUR_MASK                    0x00000100
#define _SPI2STAT_SPITUR_LENGTH                  0x00000001

#define _SPI2STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI2STAT_SPIBUSY_MASK                   0x00000800
#define _SPI2STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI2STAT_FRMERR_POSITION                0x0000000C
#define _SPI2STAT_FRMERR_MASK                    0x00001000
#define _SPI2STAT_FRMERR_LENGTH                  0x00000001

#define _SPI2STAT_TXBUFELM_POSITION              0x00000010
#define _SPI2STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI2STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_RXBUFELM_POSITION              0x00000018
#define _SPI2STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI2STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_w_POSITION                     0x00000000
#define _SPI2STAT_w_MASK                         0xFFFFFFFF
#define _SPI2STAT_w_LENGTH                       0x00000020

#define _SPI2CON2_AUDMOD_POSITION                0x00000000
#define _SPI2CON2_AUDMOD_MASK                    0x00000003
#define _SPI2CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI2CON2_AUDMONO_POSITION               0x00000003
#define _SPI2CON2_AUDMONO_MASK                   0x00000008
#define _SPI2CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI2CON2_AUDEN_POSITION                 0x00000007
#define _SPI2CON2_AUDEN_MASK                     0x00000080
#define _SPI2CON2_AUDEN_LENGTH                   0x00000001

#define _SPI2CON2_IGNTUR_POSITION                0x00000008
#define _SPI2CON2_IGNTUR_MASK                    0x00000100
#define _SPI2CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI2CON2_IGNROV_POSITION                0x00000009
#define _SPI2CON2_IGNROV_MASK                    0x00000200
#define _SPI2CON2_IGNROV_LENGTH                  0x00000001

#define _SPI2CON2_SPITUREN_POSITION              0x0000000A
#define _SPI2CON2_SPITUREN_MASK                  0x00000400
#define _SPI2CON2_SPITUREN_LENGTH                0x00000001

#define _SPI2CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI2CON2_SPIROVEN_MASK                  0x00000800
#define _SPI2CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI2CON2_FRMERREN_POSITION              0x0000000C
#define _SPI2CON2_FRMERREN_MASK                  0x00001000
#define _SPI2CON2_FRMERREN_LENGTH                0x00000001

#define _SPI2CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI2CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI2CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI2CON2_AUDMOD0_POSITION               0x00000000
#define _SPI2CON2_AUDMOD0_MASK                   0x00000001
#define _SPI2CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI2CON2_AUDMOD1_POSITION               0x00000001
#define _SPI2CON2_AUDMOD1_MASK                   0x00000002
#define _SPI2CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI2CON2_w_POSITION                     0x00000000
#define _SPI2CON2_w_MASK                         0xFFFFFFFF
#define _SPI2CON2_w_LENGTH                       0x00000020

#define _U1AMODE_STSEL_POSITION                  0x00000000
#define _U1AMODE_STSEL_MASK                      0x00000001
#define _U1AMODE_STSEL_LENGTH                    0x00000001

#define _U1AMODE_PDSEL_POSITION                  0x00000001
#define _U1AMODE_PDSEL_MASK                      0x00000006
#define _U1AMODE_PDSEL_LENGTH                    0x00000002

#define _U1AMODE_BRGH_POSITION                   0x00000003
#define _U1AMODE_BRGH_MASK                       0x00000008
#define _U1AMODE_BRGH_LENGTH                     0x00000001

#define _U1AMODE_RXINV_POSITION                  0x00000004
#define _U1AMODE_RXINV_MASK                      0x00000010
#define _U1AMODE_RXINV_LENGTH                    0x00000001

#define _U1AMODE_ABAUD_POSITION                  0x00000005
#define _U1AMODE_ABAUD_MASK                      0x00000020
#define _U1AMODE_ABAUD_LENGTH                    0x00000001

#define _U1AMODE_LPBACK_POSITION                 0x00000006
#define _U1AMODE_LPBACK_MASK                     0x00000040
#define _U1AMODE_LPBACK_LENGTH                   0x00000001

#define _U1AMODE_WAKE_POSITION                   0x00000007
#define _U1AMODE_WAKE_MASK                       0x00000080
#define _U1AMODE_WAKE_LENGTH                     0x00000001

#define _U1AMODE_UEN_POSITION                    0x00000008
#define _U1AMODE_UEN_MASK                        0x00000300
#define _U1AMODE_UEN_LENGTH                      0x00000002

#define _U1AMODE_RTSMD_POSITION                  0x0000000B
#define _U1AMODE_RTSMD_MASK                      0x00000800
#define _U1AMODE_RTSMD_LENGTH                    0x00000001

#define _U1AMODE_IREN_POSITION                   0x0000000C
#define _U1AMODE_IREN_MASK                       0x00001000
#define _U1AMODE_IREN_LENGTH                     0x00000001

#define _U1AMODE_SIDL_POSITION                   0x0000000D
#define _U1AMODE_SIDL_MASK                       0x00002000
#define _U1AMODE_SIDL_LENGTH                     0x00000001

#define _U1AMODE_ON_POSITION                     0x0000000F
#define _U1AMODE_ON_MASK                         0x00008000
#define _U1AMODE_ON_LENGTH                       0x00000001

#define _U1AMODE_PDSEL0_POSITION                 0x00000001
#define _U1AMODE_PDSEL0_MASK                     0x00000002
#define _U1AMODE_PDSEL0_LENGTH                   0x00000001

#define _U1AMODE_PDSEL1_POSITION                 0x00000002
#define _U1AMODE_PDSEL1_MASK                     0x00000004
#define _U1AMODE_PDSEL1_LENGTH                   0x00000001

#define _U1AMODE_UEN0_POSITION                   0x00000008
#define _U1AMODE_UEN0_MASK                       0x00000100
#define _U1AMODE_UEN0_LENGTH                     0x00000001

#define _U1AMODE_UEN1_POSITION                   0x00000009
#define _U1AMODE_UEN1_MASK                       0x00000200
#define _U1AMODE_UEN1_LENGTH                     0x00000001

#define _U1AMODE_USIDL_POSITION                  0x0000000D
#define _U1AMODE_USIDL_MASK                      0x00002000
#define _U1AMODE_USIDL_LENGTH                    0x00000001

#define _U1AMODE_UARTEN_POSITION                 0x0000000F
#define _U1AMODE_UARTEN_MASK                     0x00008000
#define _U1AMODE_UARTEN_LENGTH                   0x00000001

#define _U1AMODE_w_POSITION                      0x00000000
#define _U1AMODE_w_MASK                          0xFFFFFFFF
#define _U1AMODE_w_LENGTH                        0x00000020

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

#define _U1MODE_SIDL_POSITION                    0x0000000D
#define _U1MODE_SIDL_MASK                        0x00002000
#define _U1MODE_SIDL_LENGTH                      0x00000001

#define _U1MODE_ON_POSITION                      0x0000000F
#define _U1MODE_ON_MASK                          0x00008000
#define _U1MODE_ON_LENGTH                        0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_w_POSITION                       0x00000000
#define _U1MODE_w_MASK                           0xFFFFFFFF
#define _U1MODE_w_LENGTH                         0x00000020

#define _U1ASTA_URXDA_POSITION                   0x00000000
#define _U1ASTA_URXDA_MASK                       0x00000001
#define _U1ASTA_URXDA_LENGTH                     0x00000001

#define _U1ASTA_OERR_POSITION                    0x00000001
#define _U1ASTA_OERR_MASK                        0x00000002
#define _U1ASTA_OERR_LENGTH                      0x00000001

#define _U1ASTA_FERR_POSITION                    0x00000002
#define _U1ASTA_FERR_MASK                        0x00000004
#define _U1ASTA_FERR_LENGTH                      0x00000001

#define _U1ASTA_PERR_POSITION                    0x00000003
#define _U1ASTA_PERR_MASK                        0x00000008
#define _U1ASTA_PERR_LENGTH                      0x00000001

#define _U1ASTA_RIDLE_POSITION                   0x00000004
#define _U1ASTA_RIDLE_MASK                       0x00000010
#define _U1ASTA_RIDLE_LENGTH                     0x00000001

#define _U1ASTA_ADDEN_POSITION                   0x00000005
#define _U1ASTA_ADDEN_MASK                       0x00000020
#define _U1ASTA_ADDEN_LENGTH                     0x00000001

#define _U1ASTA_URXISEL_POSITION                 0x00000006
#define _U1ASTA_URXISEL_MASK                     0x000000C0
#define _U1ASTA_URXISEL_LENGTH                   0x00000002

#define _U1ASTA_TRMT_POSITION                    0x00000008
#define _U1ASTA_TRMT_MASK                        0x00000100
#define _U1ASTA_TRMT_LENGTH                      0x00000001

#define _U1ASTA_UTXBF_POSITION                   0x00000009
#define _U1ASTA_UTXBF_MASK                       0x00000200
#define _U1ASTA_UTXBF_LENGTH                     0x00000001

#define _U1ASTA_UTXEN_POSITION                   0x0000000A
#define _U1ASTA_UTXEN_MASK                       0x00000400
#define _U1ASTA_UTXEN_LENGTH                     0x00000001

#define _U1ASTA_UTXBRK_POSITION                  0x0000000B
#define _U1ASTA_UTXBRK_MASK                      0x00000800
#define _U1ASTA_UTXBRK_LENGTH                    0x00000001

#define _U1ASTA_URXEN_POSITION                   0x0000000C
#define _U1ASTA_URXEN_MASK                       0x00001000
#define _U1ASTA_URXEN_LENGTH                     0x00000001

#define _U1ASTA_UTXINV_POSITION                  0x0000000D
#define _U1ASTA_UTXINV_MASK                      0x00002000
#define _U1ASTA_UTXINV_LENGTH                    0x00000001

#define _U1ASTA_UTXISEL_POSITION                 0x0000000E
#define _U1ASTA_UTXISEL_MASK                     0x0000C000
#define _U1ASTA_UTXISEL_LENGTH                   0x00000002

#define _U1ASTA_ADDR_POSITION                    0x00000010
#define _U1ASTA_ADDR_MASK                        0x00FF0000
#define _U1ASTA_ADDR_LENGTH                      0x00000008

#define _U1ASTA_ADM_EN_POSITION                  0x00000018
#define _U1ASTA_ADM_EN_MASK                      0x01000000
#define _U1ASTA_ADM_EN_LENGTH                    0x00000001

#define _U1ASTA_URXISEL0_POSITION                0x00000006
#define _U1ASTA_URXISEL0_MASK                    0x00000040
#define _U1ASTA_URXISEL0_LENGTH                  0x00000001

#define _U1ASTA_URXISEL1_POSITION                0x00000007
#define _U1ASTA_URXISEL1_MASK                    0x00000080
#define _U1ASTA_URXISEL1_LENGTH                  0x00000001

#define _U1ASTA_UTXISEL0_POSITION                0x0000000E
#define _U1ASTA_UTXISEL0_MASK                    0x00004000
#define _U1ASTA_UTXISEL0_LENGTH                  0x00000001

#define _U1ASTA_UTXISEL1_POSITION                0x0000000F
#define _U1ASTA_UTXISEL1_MASK                    0x00008000
#define _U1ASTA_UTXISEL1_LENGTH                  0x00000001

#define _U1ASTA_UTXSEL_POSITION                  0x0000000E
#define _U1ASTA_UTXSEL_MASK                      0x0000C000
#define _U1ASTA_UTXSEL_LENGTH                    0x00000002

#define _U1ASTA_w_POSITION                       0x00000000
#define _U1ASTA_w_MASK                           0xFFFFFFFF
#define _U1ASTA_w_LENGTH                         0x00000020

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_URXEN_POSITION                    0x0000000C
#define _U1STA_URXEN_MASK                        0x00001000
#define _U1STA_URXEN_LENGTH                      0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000D
#define _U1STA_UTXINV_MASK                       0x00002000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL_POSITION                  0x0000000E
#define _U1STA_UTXISEL_MASK                      0x0000C000
#define _U1STA_UTXISEL_LENGTH                    0x00000002

#define _U1STA_ADDR_POSITION                     0x00000010
#define _U1STA_ADDR_MASK                         0x00FF0000
#define _U1STA_ADDR_LENGTH                       0x00000008

#define _U1STA_ADM_EN_POSITION                   0x00000018
#define _U1STA_ADM_EN_MASK                       0x01000000
#define _U1STA_ADM_EN_LENGTH                     0x00000001

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXISEL0_POSITION                 0x0000000E
#define _U1STA_UTXISEL0_MASK                     0x00004000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXSEL_POSITION                   0x0000000E
#define _U1STA_UTXSEL_MASK                       0x0000C000
#define _U1STA_UTXSEL_LENGTH                     0x00000002

#define _U1STA_w_POSITION                        0x00000000
#define _U1STA_w_MASK                            0xFFFFFFFF
#define _U1STA_w_LENGTH                          0x00000020

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_SIDL_POSITION                    0x0000000D
#define _U2MODE_SIDL_MASK                        0x00002000
#define _U2MODE_SIDL_LENGTH                      0x00000001

#define _U2MODE_ON_POSITION                      0x0000000F
#define _U2MODE_ON_MASK                          0x00008000
#define _U2MODE_ON_LENGTH                        0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_w_POSITION                       0x00000000
#define _U2MODE_w_MASK                           0xFFFFFFFF
#define _U2MODE_w_LENGTH                         0x00000020

#define _U3AMODE_STSEL_POSITION                  0x00000000
#define _U3AMODE_STSEL_MASK                      0x00000001
#define _U3AMODE_STSEL_LENGTH                    0x00000001

#define _U3AMODE_PDSEL_POSITION                  0x00000001
#define _U3AMODE_PDSEL_MASK                      0x00000006
#define _U3AMODE_PDSEL_LENGTH                    0x00000002

#define _U3AMODE_BRGH_POSITION                   0x00000003
#define _U3AMODE_BRGH_MASK                       0x00000008
#define _U3AMODE_BRGH_LENGTH                     0x00000001

#define _U3AMODE_RXINV_POSITION                  0x00000004
#define _U3AMODE_RXINV_MASK                      0x00000010
#define _U3AMODE_RXINV_LENGTH                    0x00000001

#define _U3AMODE_ABAUD_POSITION                  0x00000005
#define _U3AMODE_ABAUD_MASK                      0x00000020
#define _U3AMODE_ABAUD_LENGTH                    0x00000001

#define _U3AMODE_LPBACK_POSITION                 0x00000006
#define _U3AMODE_LPBACK_MASK                     0x00000040
#define _U3AMODE_LPBACK_LENGTH                   0x00000001

#define _U3AMODE_WAKE_POSITION                   0x00000007
#define _U3AMODE_WAKE_MASK                       0x00000080
#define _U3AMODE_WAKE_LENGTH                     0x00000001

#define _U3AMODE_UEN_POSITION                    0x00000008
#define _U3AMODE_UEN_MASK                        0x00000300
#define _U3AMODE_UEN_LENGTH                      0x00000002

#define _U3AMODE_RTSMD_POSITION                  0x0000000B
#define _U3AMODE_RTSMD_MASK                      0x00000800
#define _U3AMODE_RTSMD_LENGTH                    0x00000001

#define _U3AMODE_IREN_POSITION                   0x0000000C
#define _U3AMODE_IREN_MASK                       0x00001000
#define _U3AMODE_IREN_LENGTH                     0x00000001

#define _U3AMODE_SIDL_POSITION                   0x0000000D
#define _U3AMODE_SIDL_MASK                       0x00002000
#define _U3AMODE_SIDL_LENGTH                     0x00000001

#define _U3AMODE_ON_POSITION                     0x0000000F
#define _U3AMODE_ON_MASK                         0x00008000
#define _U3AMODE_ON_LENGTH                       0x00000001

#define _U3AMODE_PDSEL0_POSITION                 0x00000001
#define _U3AMODE_PDSEL0_MASK                     0x00000002
#define _U3AMODE_PDSEL0_LENGTH                   0x00000001

#define _U3AMODE_PDSEL1_POSITION                 0x00000002
#define _U3AMODE_PDSEL1_MASK                     0x00000004
#define _U3AMODE_PDSEL1_LENGTH                   0x00000001

#define _U3AMODE_UEN0_POSITION                   0x00000008
#define _U3AMODE_UEN0_MASK                       0x00000100
#define _U3AMODE_UEN0_LENGTH                     0x00000001

#define _U3AMODE_UEN1_POSITION                   0x00000009
#define _U3AMODE_UEN1_MASK                       0x00000200
#define _U3AMODE_UEN1_LENGTH                     0x00000001

#define _U3AMODE_USIDL_POSITION                  0x0000000D
#define _U3AMODE_USIDL_MASK                      0x00002000
#define _U3AMODE_USIDL_LENGTH                    0x00000001

#define _U3AMODE_UARTEN_POSITION                 0x0000000F
#define _U3AMODE_UARTEN_MASK                     0x00008000
#define _U3AMODE_UARTEN_LENGTH                   0x00000001

#define _U3AMODE_w_POSITION                      0x00000000
#define _U3AMODE_w_MASK                          0xFFFFFFFF
#define _U3AMODE_w_LENGTH                        0x00000020

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_URXEN_POSITION                    0x0000000C
#define _U2STA_URXEN_MASK                        0x00001000
#define _U2STA_URXEN_LENGTH                      0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000D
#define _U2STA_UTXINV_MASK                       0x00002000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL_POSITION                  0x0000000E
#define _U2STA_UTXISEL_MASK                      0x0000C000
#define _U2STA_UTXISEL_LENGTH                    0x00000002

#define _U2STA_ADDR_POSITION                     0x00000010
#define _U2STA_ADDR_MASK                         0x00FF0000
#define _U2STA_ADDR_LENGTH                       0x00000008

#define _U2STA_ADM_EN_POSITION                   0x00000018
#define _U2STA_ADM_EN_MASK                       0x01000000
#define _U2STA_ADM_EN_LENGTH                     0x00000001

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000E
#define _U2STA_UTXISEL0_MASK                     0x00004000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXSEL_POSITION                   0x0000000E
#define _U2STA_UTXSEL_MASK                       0x0000C000
#define _U2STA_UTXSEL_LENGTH                     0x00000002

#define _U2STA_w_POSITION                        0x00000000
#define _U2STA_w_MASK                            0xFFFFFFFF
#define _U2STA_w_LENGTH                          0x00000020

#define _U3ASTA_URXDA_POSITION                   0x00000000
#define _U3ASTA_URXDA_MASK                       0x00000001
#define _U3ASTA_URXDA_LENGTH                     0x00000001

#define _U3ASTA_OERR_POSITION                    0x00000001
#define _U3ASTA_OERR_MASK                        0x00000002
#define _U3ASTA_OERR_LENGTH                      0x00000001

#define _U3ASTA_FERR_POSITION                    0x00000002
#define _U3ASTA_FERR_MASK                        0x00000004
#define _U3ASTA_FERR_LENGTH                      0x00000001

#define _U3ASTA_PERR_POSITION                    0x00000003
#define _U3ASTA_PERR_MASK                        0x00000008
#define _U3ASTA_PERR_LENGTH                      0x00000001

#define _U3ASTA_RIDLE_POSITION                   0x00000004
#define _U3ASTA_RIDLE_MASK                       0x00000010
#define _U3ASTA_RIDLE_LENGTH                     0x00000001

#define _U3ASTA_ADDEN_POSITION                   0x00000005
#define _U3ASTA_ADDEN_MASK                       0x00000020
#define _U3ASTA_ADDEN_LENGTH                     0x00000001

#define _U3ASTA_URXISEL_POSITION                 0x00000006
#define _U3ASTA_URXISEL_MASK                     0x000000C0
#define _U3ASTA_URXISEL_LENGTH                   0x00000002

#define _U3ASTA_TRMT_POSITION                    0x00000008
#define _U3ASTA_TRMT_MASK                        0x00000100
#define _U3ASTA_TRMT_LENGTH                      0x00000001

#define _U3ASTA_UTXBF_POSITION                   0x00000009
#define _U3ASTA_UTXBF_MASK                       0x00000200
#define _U3ASTA_UTXBF_LENGTH                     0x00000001

#define _U3ASTA_UTXEN_POSITION                   0x0000000A
#define _U3ASTA_UTXEN_MASK                       0x00000400
#define _U3ASTA_UTXEN_LENGTH                     0x00000001

#define _U3ASTA_UTXBRK_POSITION                  0x0000000B
#define _U3ASTA_UTXBRK_MASK                      0x00000800
#define _U3ASTA_UTXBRK_LENGTH                    0x00000001

#define _U3ASTA_URXEN_POSITION                   0x0000000C
#define _U3ASTA_URXEN_MASK                       0x00001000
#define _U3ASTA_URXEN_LENGTH                     0x00000001

#define _U3ASTA_UTXINV_POSITION                  0x0000000D
#define _U3ASTA_UTXINV_MASK                      0x00002000
#define _U3ASTA_UTXINV_LENGTH                    0x00000001

#define _U3ASTA_UTXISEL_POSITION                 0x0000000E
#define _U3ASTA_UTXISEL_MASK                     0x0000C000
#define _U3ASTA_UTXISEL_LENGTH                   0x00000002

#define _U3ASTA_ADDR_POSITION                    0x00000010
#define _U3ASTA_ADDR_MASK                        0x00FF0000
#define _U3ASTA_ADDR_LENGTH                      0x00000008

#define _U3ASTA_ADM_EN_POSITION                  0x00000018
#define _U3ASTA_ADM_EN_MASK                      0x01000000
#define _U3ASTA_ADM_EN_LENGTH                    0x00000001

#define _U3ASTA_URXISEL0_POSITION                0x00000006
#define _U3ASTA_URXISEL0_MASK                    0x00000040
#define _U3ASTA_URXISEL0_LENGTH                  0x00000001

#define _U3ASTA_URXISEL1_POSITION                0x00000007
#define _U3ASTA_URXISEL1_MASK                    0x00000080
#define _U3ASTA_URXISEL1_LENGTH                  0x00000001

#define _U3ASTA_UTXISEL0_POSITION                0x0000000E
#define _U3ASTA_UTXISEL0_MASK                    0x00004000
#define _U3ASTA_UTXISEL0_LENGTH                  0x00000001

#define _U3ASTA_UTXISEL1_POSITION                0x0000000F
#define _U3ASTA_UTXISEL1_MASK                    0x00008000
#define _U3ASTA_UTXISEL1_LENGTH                  0x00000001

#define _U3ASTA_UTXSEL_POSITION                  0x0000000E
#define _U3ASTA_UTXSEL_MASK                      0x0000C000
#define _U3ASTA_UTXSEL_LENGTH                    0x00000002

#define _U3ASTA_w_POSITION                       0x00000000
#define _U3ASTA_w_MASK                           0xFFFFFFFF
#define _U3ASTA_w_LENGTH                         0x00000020

#define _PMCON_RDSP_POSITION                     0x00000000
#define _PMCON_RDSP_MASK                         0x00000001
#define _PMCON_RDSP_LENGTH                       0x00000001

#define _PMCON_WRSP_POSITION                     0x00000001
#define _PMCON_WRSP_MASK                         0x00000002
#define _PMCON_WRSP_LENGTH                       0x00000001

#define _PMCON_CS1P_POSITION                     0x00000003
#define _PMCON_CS1P_MASK                         0x00000008
#define _PMCON_CS1P_LENGTH                       0x00000001

#define _PMCON_ALP_POSITION                      0x00000005
#define _PMCON_ALP_MASK                          0x00000020
#define _PMCON_ALP_LENGTH                        0x00000001

#define _PMCON_CSF_POSITION                      0x00000006
#define _PMCON_CSF_MASK                          0x000000C0
#define _PMCON_CSF_LENGTH                        0x00000002

#define _PMCON_PTRDEN_POSITION                   0x00000008
#define _PMCON_PTRDEN_MASK                       0x00000100
#define _PMCON_PTRDEN_LENGTH                     0x00000001

#define _PMCON_PTWREN_POSITION                   0x00000009
#define _PMCON_PTWREN_MASK                       0x00000200
#define _PMCON_PTWREN_LENGTH                     0x00000001

#define _PMCON_PMPTTL_POSITION                   0x0000000A
#define _PMCON_PMPTTL_MASK                       0x00000400
#define _PMCON_PMPTTL_LENGTH                     0x00000001

#define _PMCON_ADRMUX_POSITION                   0x0000000B
#define _PMCON_ADRMUX_MASK                       0x00001800
#define _PMCON_ADRMUX_LENGTH                     0x00000002

#define _PMCON_SIDL_POSITION                     0x0000000D
#define _PMCON_SIDL_MASK                         0x00002000
#define _PMCON_SIDL_LENGTH                       0x00000001

#define _PMCON_ON_POSITION                       0x0000000F
#define _PMCON_ON_MASK                           0x00008000
#define _PMCON_ON_LENGTH                         0x00000001

#define _PMCON_CSF0_POSITION                     0x00000006
#define _PMCON_CSF0_MASK                         0x00000040
#define _PMCON_CSF0_LENGTH                       0x00000001

#define _PMCON_CSF1_POSITION                     0x00000007
#define _PMCON_CSF1_MASK                         0x00000080
#define _PMCON_CSF1_LENGTH                       0x00000001

#define _PMCON_ADRMUX0_POSITION                  0x0000000B
#define _PMCON_ADRMUX0_MASK                      0x00000800
#define _PMCON_ADRMUX0_LENGTH                    0x00000001

#define _PMCON_ADRMUX1_POSITION                  0x0000000C
#define _PMCON_ADRMUX1_MASK                      0x00001000
#define _PMCON_ADRMUX1_LENGTH                    0x00000001

#define _PMCON_PSIDL_POSITION                    0x0000000D
#define _PMCON_PSIDL_MASK                        0x00002000
#define _PMCON_PSIDL_LENGTH                      0x00000001

#define _PMCON_PMPEN_POSITION                    0x0000000F
#define _PMCON_PMPEN_MASK                        0x00008000
#define _PMCON_PMPEN_LENGTH                      0x00000001

#define _PMCON_w_POSITION                        0x00000000
#define _PMCON_w_MASK                            0xFFFFFFFF
#define _PMCON_w_LENGTH                          0x00000020

#define _PMMODE_WAITE_POSITION                   0x00000000
#define _PMMODE_WAITE_MASK                       0x00000003
#define _PMMODE_WAITE_LENGTH                     0x00000002

#define _PMMODE_WAITM_POSITION                   0x00000002
#define _PMMODE_WAITM_MASK                       0x0000003C
#define _PMMODE_WAITM_LENGTH                     0x00000004

#define _PMMODE_WAITB_POSITION                   0x00000006
#define _PMMODE_WAITB_MASK                       0x000000C0
#define _PMMODE_WAITB_LENGTH                     0x00000002

#define _PMMODE_MODE_POSITION                    0x00000008
#define _PMMODE_MODE_MASK                        0x00000300
#define _PMMODE_MODE_LENGTH                      0x00000002

#define _PMMODE_INCM_POSITION                    0x0000000B
#define _PMMODE_INCM_MASK                        0x00001800
#define _PMMODE_INCM_LENGTH                      0x00000002

#define _PMMODE_IRQM_POSITION                    0x0000000D
#define _PMMODE_IRQM_MASK                        0x00006000
#define _PMMODE_IRQM_LENGTH                      0x00000002

#define _PMMODE_BUSY_POSITION                    0x0000000F
#define _PMMODE_BUSY_MASK                        0x00008000
#define _PMMODE_BUSY_LENGTH                      0x00000001

#define _PMMODE_WAITE0_POSITION                  0x00000000
#define _PMMODE_WAITE0_MASK                      0x00000001
#define _PMMODE_WAITE0_LENGTH                    0x00000001

#define _PMMODE_WAITE1_POSITION                  0x00000001
#define _PMMODE_WAITE1_MASK                      0x00000002
#define _PMMODE_WAITE1_LENGTH                    0x00000001

#define _PMMODE_WAITM0_POSITION                  0x00000002
#define _PMMODE_WAITM0_MASK                      0x00000004
#define _PMMODE_WAITM0_LENGTH                    0x00000001

#define _PMMODE_WAITM1_POSITION                  0x00000003
#define _PMMODE_WAITM1_MASK                      0x00000008
#define _PMMODE_WAITM1_LENGTH                    0x00000001

#define _PMMODE_WAITM2_POSITION                  0x00000004
#define _PMMODE_WAITM2_MASK                      0x00000010
#define _PMMODE_WAITM2_LENGTH                    0x00000001

#define _PMMODE_WAITM3_POSITION                  0x00000005
#define _PMMODE_WAITM3_MASK                      0x00000020
#define _PMMODE_WAITM3_LENGTH                    0x00000001

#define _PMMODE_WAITB0_POSITION                  0x00000006
#define _PMMODE_WAITB0_MASK                      0x00000040
#define _PMMODE_WAITB0_LENGTH                    0x00000001

#define _PMMODE_WAITB1_POSITION                  0x00000007
#define _PMMODE_WAITB1_MASK                      0x00000080
#define _PMMODE_WAITB1_LENGTH                    0x00000001

#define _PMMODE_MODE0_POSITION                   0x00000008
#define _PMMODE_MODE0_MASK                       0x00000100
#define _PMMODE_MODE0_LENGTH                     0x00000001

#define _PMMODE_MODE1_POSITION                   0x00000009
#define _PMMODE_MODE1_MASK                       0x00000200
#define _PMMODE_MODE1_LENGTH                     0x00000001

#define _PMMODE_INCM0_POSITION                   0x0000000B
#define _PMMODE_INCM0_MASK                       0x00000800
#define _PMMODE_INCM0_LENGTH                     0x00000001

#define _PMMODE_INCM1_POSITION                   0x0000000C
#define _PMMODE_INCM1_MASK                       0x00001000
#define _PMMODE_INCM1_LENGTH                     0x00000001

#define _PMMODE_IRQM0_POSITION                   0x0000000D
#define _PMMODE_IRQM0_MASK                       0x00002000
#define _PMMODE_IRQM0_LENGTH                     0x00000001

#define _PMMODE_IRQM1_POSITION                   0x0000000E
#define _PMMODE_IRQM1_MASK                       0x00004000
#define _PMMODE_IRQM1_LENGTH                     0x00000001

#define _PMMODE_w_POSITION                       0x00000000
#define _PMMODE_w_MASK                           0xFFFFFFFF
#define _PMMODE_w_LENGTH                         0x00000020

#define _PMADDR_ADDR_POSITION                    0x00000000
#define _PMADDR_ADDR_MASK                        0x00003FFF
#define _PMADDR_ADDR_LENGTH                      0x0000000E

#define _PMADDR_CS_POSITION                      0x0000000E
#define _PMADDR_CS_MASK                          0x0000C000
#define _PMADDR_CS_LENGTH                        0x00000002

#define _PMADDR_PADDR_POSITION                   0x00000000
#define _PMADDR_PADDR_MASK                       0x00003FFF
#define _PMADDR_PADDR_LENGTH                     0x0000000E

#define _PMADDR_CS1_POSITION                     0x0000000E
#define _PMADDR_CS1_MASK                         0x00004000
#define _PMADDR_CS1_LENGTH                       0x00000001

#define _PMADDR_w_POSITION                       0x00000000
#define _PMADDR_w_MASK                           0xFFFFFFFF
#define _PMADDR_w_LENGTH                         0x00000020

#define _PMDOUT_DATAOUT_POSITION                 0x00000000
#define _PMDOUT_DATAOUT_MASK                     0xFFFFFFFF
#define _PMDOUT_DATAOUT_LENGTH                   0x00000020

#define _PMDOUT_w_POSITION                       0x00000000
#define _PMDOUT_w_MASK                           0xFFFFFFFF
#define _PMDOUT_w_LENGTH                         0x00000020

#define _PMDIN_DATAIN_POSITION                   0x00000000
#define _PMDIN_DATAIN_MASK                       0xFFFFFFFF
#define _PMDIN_DATAIN_LENGTH                     0x00000020

#define _PMDIN_w_POSITION                        0x00000000
#define _PMDIN_w_MASK                            0xFFFFFFFF
#define _PMDIN_w_LENGTH                          0x00000020

#define _PMAEN_PTEN_POSITION                     0x00000000
#define _PMAEN_PTEN_MASK                         0x0000FFFF
#define _PMAEN_PTEN_LENGTH                       0x00000010

#define _PMAEN_PTEN0_POSITION                    0x00000000
#define _PMAEN_PTEN0_MASK                        0x00000001
#define _PMAEN_PTEN0_LENGTH                      0x00000001

#define _PMAEN_PTEN1_POSITION                    0x00000001
#define _PMAEN_PTEN1_MASK                        0x00000002
#define _PMAEN_PTEN1_LENGTH                      0x00000001

#define _PMAEN_PTEN2_POSITION                    0x00000002
#define _PMAEN_PTEN2_MASK                        0x00000004
#define _PMAEN_PTEN2_LENGTH                      0x00000001

#define _PMAEN_PTEN3_POSITION                    0x00000003
#define _PMAEN_PTEN3_MASK                        0x00000008
#define _PMAEN_PTEN3_LENGTH                      0x00000001

#define _PMAEN_PTEN4_POSITION                    0x00000004
#define _PMAEN_PTEN4_MASK                        0x00000010
#define _PMAEN_PTEN4_LENGTH                      0x00000001

#define _PMAEN_PTEN5_POSITION                    0x00000005
#define _PMAEN_PTEN5_MASK                        0x00000020
#define _PMAEN_PTEN5_LENGTH                      0x00000001

#define _PMAEN_PTEN6_POSITION                    0x00000006
#define _PMAEN_PTEN6_MASK                        0x00000040
#define _PMAEN_PTEN6_LENGTH                      0x00000001

#define _PMAEN_PTEN7_POSITION                    0x00000007
#define _PMAEN_PTEN7_MASK                        0x00000080
#define _PMAEN_PTEN7_LENGTH                      0x00000001

#define _PMAEN_PTEN8_POSITION                    0x00000008
#define _PMAEN_PTEN8_MASK                        0x00000100
#define _PMAEN_PTEN8_LENGTH                      0x00000001

#define _PMAEN_PTEN9_POSITION                    0x00000009
#define _PMAEN_PTEN9_MASK                        0x00000200
#define _PMAEN_PTEN9_LENGTH                      0x00000001

#define _PMAEN_PTEN10_POSITION                   0x0000000A
#define _PMAEN_PTEN10_MASK                       0x00000400
#define _PMAEN_PTEN10_LENGTH                     0x00000001

#define _PMAEN_PTEN11_POSITION                   0x0000000B
#define _PMAEN_PTEN11_MASK                       0x00000800
#define _PMAEN_PTEN11_LENGTH                     0x00000001

#define _PMAEN_PTEN12_POSITION                   0x0000000C
#define _PMAEN_PTEN12_MASK                       0x00001000
#define _PMAEN_PTEN12_LENGTH                     0x00000001

#define _PMAEN_PTEN13_POSITION                   0x0000000D
#define _PMAEN_PTEN13_MASK                       0x00002000
#define _PMAEN_PTEN13_LENGTH                     0x00000001

#define _PMAEN_PTEN14_POSITION                   0x0000000E
#define _PMAEN_PTEN14_MASK                       0x00004000
#define _PMAEN_PTEN14_LENGTH                     0x00000001

#define _PMAEN_PTEN15_POSITION                   0x0000000F
#define _PMAEN_PTEN15_MASK                       0x00008000
#define _PMAEN_PTEN15_LENGTH                     0x00000001

#define _PMAEN_w_POSITION                        0x00000000
#define _PMAEN_w_MASK                            0xFFFFFFFF
#define _PMAEN_w_LENGTH                          0x00000020

#define _PMSTAT_OB0E_POSITION                    0x00000000
#define _PMSTAT_OB0E_MASK                        0x00000001
#define _PMSTAT_OB0E_LENGTH                      0x00000001

#define _PMSTAT_OB1E_POSITION                    0x00000001
#define _PMSTAT_OB1E_MASK                        0x00000002
#define _PMSTAT_OB1E_LENGTH                      0x00000001

#define _PMSTAT_OB2E_POSITION                    0x00000002
#define _PMSTAT_OB2E_MASK                        0x00000004
#define _PMSTAT_OB2E_LENGTH                      0x00000001

#define _PMSTAT_OB3E_POSITION                    0x00000003
#define _PMSTAT_OB3E_MASK                        0x00000008
#define _PMSTAT_OB3E_LENGTH                      0x00000001

#define _PMSTAT_OBUF_POSITION                    0x00000006
#define _PMSTAT_OBUF_MASK                        0x00000040
#define _PMSTAT_OBUF_LENGTH                      0x00000001

#define _PMSTAT_OBE_POSITION                     0x00000007
#define _PMSTAT_OBE_MASK                         0x00000080
#define _PMSTAT_OBE_LENGTH                       0x00000001

#define _PMSTAT_IB0F_POSITION                    0x00000008
#define _PMSTAT_IB0F_MASK                        0x00000100
#define _PMSTAT_IB0F_LENGTH                      0x00000001

#define _PMSTAT_IB1F_POSITION                    0x00000009
#define _PMSTAT_IB1F_MASK                        0x00000200
#define _PMSTAT_IB1F_LENGTH                      0x00000001

#define _PMSTAT_IB2F_POSITION                    0x0000000A
#define _PMSTAT_IB2F_MASK                        0x00000400
#define _PMSTAT_IB2F_LENGTH                      0x00000001

#define _PMSTAT_IB3F_POSITION                    0x0000000B
#define _PMSTAT_IB3F_MASK                        0x00000800
#define _PMSTAT_IB3F_LENGTH                      0x00000001

#define _PMSTAT_IBOV_POSITION                    0x0000000E
#define _PMSTAT_IBOV_MASK                        0x00004000
#define _PMSTAT_IBOV_LENGTH                      0x00000001

#define _PMSTAT_IBF_POSITION                     0x0000000F
#define _PMSTAT_IBF_MASK                         0x00008000
#define _PMSTAT_IBF_LENGTH                       0x00000001

#define _PMSTAT_w_POSITION                       0x00000000
#define _PMSTAT_w_MASK                           0xFFFFFFFF
#define _PMSTAT_w_LENGTH                         0x00000020

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_CLRASAM_POSITION                0x00000004
#define _AD1CON1_CLRASAM_MASK                    0x00000010
#define _AD1CON1_CLRASAM_LENGTH                  0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000005
#define _AD1CON1_SSRC_MASK                       0x000000E0
#define _AD1CON1_SSRC_LENGTH                     0x00000003

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000700
#define _AD1CON1_FORM_LENGTH                     0x00000003

#define _AD1CON1_SIDL_POSITION                   0x0000000D
#define _AD1CON1_SIDL_MASK                       0x00002000
#define _AD1CON1_SIDL_LENGTH                     0x00000001

#define _AD1CON1_ON_POSITION                     0x0000000F
#define _AD1CON1_ON_MASK                         0x00008000
#define _AD1CON1_ON_LENGTH                       0x00000001

#define _AD1CON1_SSRC0_POSITION                  0x00000005
#define _AD1CON1_SSRC0_MASK                      0x00000020
#define _AD1CON1_SSRC0_LENGTH                    0x00000001

#define _AD1CON1_SSRC1_POSITION                  0x00000006
#define _AD1CON1_SSRC1_MASK                      0x00000040
#define _AD1CON1_SSRC1_LENGTH                    0x00000001

#define _AD1CON1_SSRC2_POSITION                  0x00000007
#define _AD1CON1_SSRC2_MASK                      0x00000080
#define _AD1CON1_SSRC2_LENGTH                    0x00000001

#define _AD1CON1_FORM0_POSITION                  0x00000008
#define _AD1CON1_FORM0_MASK                      0x00000100
#define _AD1CON1_FORM0_LENGTH                    0x00000001

#define _AD1CON1_FORM1_POSITION                  0x00000009
#define _AD1CON1_FORM1_MASK                      0x00000200
#define _AD1CON1_FORM1_LENGTH                    0x00000001

#define _AD1CON1_FORM2_POSITION                  0x0000000A
#define _AD1CON1_FORM2_MASK                      0x00000400
#define _AD1CON1_FORM2_LENGTH                    0x00000001

#define _AD1CON1_ADSIDL_POSITION                 0x0000000D
#define _AD1CON1_ADSIDL_MASK                     0x00002000
#define _AD1CON1_ADSIDL_LENGTH                   0x00000001

#define _AD1CON1_ADON_POSITION                   0x0000000F
#define _AD1CON1_ADON_MASK                       0x00008000
#define _AD1CON1_ADON_LENGTH                     0x00000001

#define _AD1CON1_w_POSITION                      0x00000000
#define _AD1CON1_w_MASK                          0xFFFFFFFF
#define _AD1CON1_w_LENGTH                        0x00000020

#define _AD1CON2_ALTS_POSITION                   0x00000000
#define _AD1CON2_ALTS_MASK                       0x00000001
#define _AD1CON2_ALTS_LENGTH                     0x00000001

#define _AD1CON2_BUFM_POSITION                   0x00000001
#define _AD1CON2_BUFM_MASK                       0x00000002
#define _AD1CON2_BUFM_LENGTH                     0x00000001

#define _AD1CON2_SMPI_POSITION                   0x00000002
#define _AD1CON2_SMPI_MASK                       0x0000003C
#define _AD1CON2_SMPI_LENGTH                     0x00000004

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

#define _AD1CON2_VCFG_POSITION                   0x0000000D
#define _AD1CON2_VCFG_MASK                       0x0000E000
#define _AD1CON2_VCFG_LENGTH                     0x00000003

#define _AD1CON2_SMPI0_POSITION                  0x00000002
#define _AD1CON2_SMPI0_MASK                      0x00000004
#define _AD1CON2_SMPI0_LENGTH                    0x00000001

#define _AD1CON2_SMPI1_POSITION                  0x00000003
#define _AD1CON2_SMPI1_MASK                      0x00000008
#define _AD1CON2_SMPI1_LENGTH                    0x00000001

#define _AD1CON2_SMPI2_POSITION                  0x00000004
#define _AD1CON2_SMPI2_MASK                      0x00000010
#define _AD1CON2_SMPI2_LENGTH                    0x00000001

#define _AD1CON2_SMPI3_POSITION                  0x00000005
#define _AD1CON2_SMPI3_MASK                      0x00000020
#define _AD1CON2_SMPI3_LENGTH                    0x00000001

#define _AD1CON2_VCFG0_POSITION                  0x0000000D
#define _AD1CON2_VCFG0_MASK                      0x00002000
#define _AD1CON2_VCFG0_LENGTH                    0x00000001

#define _AD1CON2_VCFG1_POSITION                  0x0000000E
#define _AD1CON2_VCFG1_MASK                      0x00004000
#define _AD1CON2_VCFG1_LENGTH                    0x00000001

#define _AD1CON2_VCFG2_POSITION                  0x0000000F
#define _AD1CON2_VCFG2_MASK                      0x00008000
#define _AD1CON2_VCFG2_LENGTH                    0x00000001

#define _AD1CON2_w_POSITION                      0x00000000
#define _AD1CON2_w_MASK                          0xFFFFFFFF
#define _AD1CON2_w_LENGTH                        0x00000020

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_ADRC_POSITION                   0x0000000F
#define _AD1CON3_ADRC_MASK                       0x00008000
#define _AD1CON3_ADRC_LENGTH                     0x00000001

#define _AD1CON3_ADCS0_POSITION                  0x00000000
#define _AD1CON3_ADCS0_MASK                      0x00000001
#define _AD1CON3_ADCS0_LENGTH                    0x00000001

#define _AD1CON3_ADCS1_POSITION                  0x00000001
#define _AD1CON3_ADCS1_MASK                      0x00000002
#define _AD1CON3_ADCS1_LENGTH                    0x00000001

#define _AD1CON3_ADCS2_POSITION                  0x00000002
#define _AD1CON3_ADCS2_MASK                      0x00000004
#define _AD1CON3_ADCS2_LENGTH                    0x00000001

#define _AD1CON3_ADCS3_POSITION                  0x00000003
#define _AD1CON3_ADCS3_MASK                      0x00000008
#define _AD1CON3_ADCS3_LENGTH                    0x00000001

#define _AD1CON3_ADCS4_POSITION                  0x00000004
#define _AD1CON3_ADCS4_MASK                      0x00000010
#define _AD1CON3_ADCS4_LENGTH                    0x00000001

#define _AD1CON3_ADCS5_POSITION                  0x00000005
#define _AD1CON3_ADCS5_MASK                      0x00000020
#define _AD1CON3_ADCS5_LENGTH                    0x00000001

#define _AD1CON3_ADCS6_POSITION                  0x00000006
#define _AD1CON3_ADCS6_MASK                      0x00000040
#define _AD1CON3_ADCS6_LENGTH                    0x00000001

#define _AD1CON3_ADCS7_POSITION                  0x00000007
#define _AD1CON3_ADCS7_MASK                      0x00000080
#define _AD1CON3_ADCS7_LENGTH                    0x00000001

#define _AD1CON3_SAMC0_POSITION                  0x00000008
#define _AD1CON3_SAMC0_MASK                      0x00000100
#define _AD1CON3_SAMC0_LENGTH                    0x00000001

#define _AD1CON3_SAMC1_POSITION                  0x00000009
#define _AD1CON3_SAMC1_MASK                      0x00000200
#define _AD1CON3_SAMC1_LENGTH                    0x00000001

#define _AD1CON3_SAMC2_POSITION                  0x0000000A
#define _AD1CON3_SAMC2_MASK                      0x00000400
#define _AD1CON3_SAMC2_LENGTH                    0x00000001

#define _AD1CON3_SAMC3_POSITION                  0x0000000B
#define _AD1CON3_SAMC3_MASK                      0x00000800
#define _AD1CON3_SAMC3_LENGTH                    0x00000001

#define _AD1CON3_SAMC4_POSITION                  0x0000000C
#define _AD1CON3_SAMC4_MASK                      0x00001000
#define _AD1CON3_SAMC4_LENGTH                    0x00000001

#define _AD1CON3_w_POSITION                      0x00000000
#define _AD1CON3_w_MASK                          0xFFFFFFFF
#define _AD1CON3_w_LENGTH                        0x00000020

#define _AD1CHS_CH0SA_POSITION                   0x00000010
#define _AD1CHS_CH0SA_MASK                       0x000F0000
#define _AD1CHS_CH0SA_LENGTH                     0x00000004

#define _AD1CHS_CH0NA_POSITION                   0x00000017
#define _AD1CHS_CH0NA_MASK                       0x00800000
#define _AD1CHS_CH0NA_LENGTH                     0x00000001

#define _AD1CHS_CH0SB_POSITION                   0x00000018
#define _AD1CHS_CH0SB_MASK                       0x0F000000
#define _AD1CHS_CH0SB_LENGTH                     0x00000004

#define _AD1CHS_CH0NB_POSITION                   0x0000001F
#define _AD1CHS_CH0NB_MASK                       0x80000000
#define _AD1CHS_CH0NB_LENGTH                     0x00000001

#define _AD1CHS_CH0SA0_POSITION                  0x00000010
#define _AD1CHS_CH0SA0_MASK                      0x00010000
#define _AD1CHS_CH0SA0_LENGTH                    0x00000001

#define _AD1CHS_CH0SA1_POSITION                  0x00000011
#define _AD1CHS_CH0SA1_MASK                      0x00020000
#define _AD1CHS_CH0SA1_LENGTH                    0x00000001

#define _AD1CHS_CH0SA2_POSITION                  0x00000012
#define _AD1CHS_CH0SA2_MASK                      0x00040000
#define _AD1CHS_CH0SA2_LENGTH                    0x00000001

#define _AD1CHS_CH0SA3_POSITION                  0x00000013
#define _AD1CHS_CH0SA3_MASK                      0x00080000
#define _AD1CHS_CH0SA3_LENGTH                    0x00000001

#define _AD1CHS_CH0SB0_POSITION                  0x00000018
#define _AD1CHS_CH0SB0_MASK                      0x01000000
#define _AD1CHS_CH0SB0_LENGTH                    0x00000001

#define _AD1CHS_CH0SB1_POSITION                  0x00000019
#define _AD1CHS_CH0SB1_MASK                      0x02000000
#define _AD1CHS_CH0SB1_LENGTH                    0x00000001

#define _AD1CHS_CH0SB2_POSITION                  0x0000001A
#define _AD1CHS_CH0SB2_MASK                      0x04000000
#define _AD1CHS_CH0SB2_LENGTH                    0x00000001

#define _AD1CHS_CH0SB3_POSITION                  0x0000001B
#define _AD1CHS_CH0SB3_MASK                      0x08000000
#define _AD1CHS_CH0SB3_LENGTH                    0x00000001

#define _AD1CHS_w_POSITION                       0x00000000
#define _AD1CHS_w_MASK                           0xFFFFFFFF
#define _AD1CHS_w_LENGTH                         0x00000020

#define _AD1CSSL_CSSL_POSITION                   0x00000000
#define _AD1CSSL_CSSL_MASK                       0x0000FFFF
#define _AD1CSSL_CSSL_LENGTH                     0x00000010

#define _AD1CSSL_CSSL0_POSITION                  0x00000000
#define _AD1CSSL_CSSL0_MASK                      0x00000001
#define _AD1CSSL_CSSL0_LENGTH                    0x00000001

#define _AD1CSSL_CSSL1_POSITION                  0x00000001
#define _AD1CSSL_CSSL1_MASK                      0x00000002
#define _AD1CSSL_CSSL1_LENGTH                    0x00000001

#define _AD1CSSL_CSSL2_POSITION                  0x00000002
#define _AD1CSSL_CSSL2_MASK                      0x00000004
#define _AD1CSSL_CSSL2_LENGTH                    0x00000001

#define _AD1CSSL_CSSL3_POSITION                  0x00000003
#define _AD1CSSL_CSSL3_MASK                      0x00000008
#define _AD1CSSL_CSSL3_LENGTH                    0x00000001

#define _AD1CSSL_CSSL4_POSITION                  0x00000004
#define _AD1CSSL_CSSL4_MASK                      0x00000010
#define _AD1CSSL_CSSL4_LENGTH                    0x00000001

#define _AD1CSSL_CSSL5_POSITION                  0x00000005
#define _AD1CSSL_CSSL5_MASK                      0x00000020
#define _AD1CSSL_CSSL5_LENGTH                    0x00000001

#define _AD1CSSL_CSSL6_POSITION                  0x00000006
#define _AD1CSSL_CSSL6_MASK                      0x00000040
#define _AD1CSSL_CSSL6_LENGTH                    0x00000001

#define _AD1CSSL_CSSL7_POSITION                  0x00000007
#define _AD1CSSL_CSSL7_MASK                      0x00000080
#define _AD1CSSL_CSSL7_LENGTH                    0x00000001

#define _AD1CSSL_CSSL8_POSITION                  0x00000008
#define _AD1CSSL_CSSL8_MASK                      0x00000100
#define _AD1CSSL_CSSL8_LENGTH                    0x00000001

#define _AD1CSSL_CSSL9_POSITION                  0x00000009
#define _AD1CSSL_CSSL9_MASK                      0x00000200
#define _AD1CSSL_CSSL9_LENGTH                    0x00000001

#define _AD1CSSL_CSSL10_POSITION                 0x0000000A
#define _AD1CSSL_CSSL10_MASK                     0x00000400
#define _AD1CSSL_CSSL10_LENGTH                   0x00000001

#define _AD1CSSL_CSSL11_POSITION                 0x0000000B
#define _AD1CSSL_CSSL11_MASK                     0x00000800
#define _AD1CSSL_CSSL11_LENGTH                   0x00000001

#define _AD1CSSL_CSSL12_POSITION                 0x0000000C
#define _AD1CSSL_CSSL12_MASK                     0x00001000
#define _AD1CSSL_CSSL12_LENGTH                   0x00000001

#define _AD1CSSL_CSSL13_POSITION                 0x0000000D
#define _AD1CSSL_CSSL13_MASK                     0x00002000
#define _AD1CSSL_CSSL13_LENGTH                   0x00000001

#define _AD1CSSL_CSSL14_POSITION                 0x0000000E
#define _AD1CSSL_CSSL14_MASK                     0x00004000
#define _AD1CSSL_CSSL14_LENGTH                   0x00000001

#define _AD1CSSL_CSSL15_POSITION                 0x0000000F
#define _AD1CSSL_CSSL15_MASK                     0x00008000
#define _AD1CSSL_CSSL15_LENGTH                   0x00000001

#define _AD1CSSL_w_POSITION                      0x00000000
#define _AD1CSSL_w_MASK                          0xFFFFFFFF
#define _AD1CSSL_w_LENGTH                        0x00000020

#define _CVRCON_CVR_POSITION                     0x00000000
#define _CVRCON_CVR_MASK                         0x0000000F
#define _CVRCON_CVR_LENGTH                       0x00000004

#define _CVRCON_CVRSS_POSITION                   0x00000004
#define _CVRCON_CVRSS_MASK                       0x00000010
#define _CVRCON_CVRSS_LENGTH                     0x00000001

#define _CVRCON_CVRR_POSITION                    0x00000005
#define _CVRCON_CVRR_MASK                        0x00000020
#define _CVRCON_CVRR_LENGTH                      0x00000001

#define _CVRCON_CVROE_POSITION                   0x00000006
#define _CVRCON_CVROE_MASK                       0x00000040
#define _CVRCON_CVROE_LENGTH                     0x00000001

#define _CVRCON_ON_POSITION                      0x0000000F
#define _CVRCON_ON_MASK                          0x00008000
#define _CVRCON_ON_LENGTH                        0x00000001

#define _CVRCON_CVR0_POSITION                    0x00000000
#define _CVRCON_CVR0_MASK                        0x00000001
#define _CVRCON_CVR0_LENGTH                      0x00000001

#define _CVRCON_CVR1_POSITION                    0x00000001
#define _CVRCON_CVR1_MASK                        0x00000002
#define _CVRCON_CVR1_LENGTH                      0x00000001

#define _CVRCON_CVR2_POSITION                    0x00000002
#define _CVRCON_CVR2_MASK                        0x00000004
#define _CVRCON_CVR2_LENGTH                      0x00000001

#define _CVRCON_CVR3_POSITION                    0x00000003
#define _CVRCON_CVR3_MASK                        0x00000008
#define _CVRCON_CVR3_LENGTH                      0x00000001

#define _CVRCON_w_POSITION                       0x00000000
#define _CVRCON_w_MASK                           0xFFFFFFFF
#define _CVRCON_w_LENGTH                         0x00000020

#define _CM1CON_CCH_POSITION                     0x00000000
#define _CM1CON_CCH_MASK                         0x00000003
#define _CM1CON_CCH_LENGTH                       0x00000002

#define _CM1CON_CREF_POSITION                    0x00000004
#define _CM1CON_CREF_MASK                        0x00000010
#define _CM1CON_CREF_LENGTH                      0x00000001

#define _CM1CON_EVPOL_POSITION                   0x00000006
#define _CM1CON_EVPOL_MASK                       0x000000C0
#define _CM1CON_EVPOL_LENGTH                     0x00000002

#define _CM1CON_COUT_POSITION                    0x00000008
#define _CM1CON_COUT_MASK                        0x00000100
#define _CM1CON_COUT_LENGTH                      0x00000001

#define _CM1CON_CPOL_POSITION                    0x0000000D
#define _CM1CON_CPOL_MASK                        0x00002000
#define _CM1CON_CPOL_LENGTH                      0x00000001

#define _CM1CON_COE_POSITION                     0x0000000E
#define _CM1CON_COE_MASK                         0x00004000
#define _CM1CON_COE_LENGTH                       0x00000001

#define _CM1CON_ON_POSITION                      0x0000000F
#define _CM1CON_ON_MASK                          0x00008000
#define _CM1CON_ON_LENGTH                        0x00000001

#define _CM1CON_CCH0_POSITION                    0x00000000
#define _CM1CON_CCH0_MASK                        0x00000001
#define _CM1CON_CCH0_LENGTH                      0x00000001

#define _CM1CON_CCH1_POSITION                    0x00000001
#define _CM1CON_CCH1_MASK                        0x00000002
#define _CM1CON_CCH1_LENGTH                      0x00000001

#define _CM1CON_EVPOL0_POSITION                  0x00000006
#define _CM1CON_EVPOL0_MASK                      0x00000040
#define _CM1CON_EVPOL0_LENGTH                    0x00000001

#define _CM1CON_EVPOL1_POSITION                  0x00000007
#define _CM1CON_EVPOL1_MASK                      0x00000080
#define _CM1CON_EVPOL1_LENGTH                    0x00000001

#define _CM1CON_w_POSITION                       0x00000000
#define _CM1CON_w_MASK                           0xFFFFFFFF
#define _CM1CON_w_LENGTH                         0x00000020

#define _CM2CON_CCH_POSITION                     0x00000000
#define _CM2CON_CCH_MASK                         0x00000003
#define _CM2CON_CCH_LENGTH                       0x00000002

#define _CM2CON_CREF_POSITION                    0x00000004
#define _CM2CON_CREF_MASK                        0x00000010
#define _CM2CON_CREF_LENGTH                      0x00000001

#define _CM2CON_EVPOL_POSITION                   0x00000006
#define _CM2CON_EVPOL_MASK                       0x000000C0
#define _CM2CON_EVPOL_LENGTH                     0x00000002

#define _CM2CON_COUT_POSITION                    0x00000008
#define _CM2CON_COUT_MASK                        0x00000100
#define _CM2CON_COUT_LENGTH                      0x00000001

#define _CM2CON_CPOL_POSITION                    0x0000000D
#define _CM2CON_CPOL_MASK                        0x00002000
#define _CM2CON_CPOL_LENGTH                      0x00000001

#define _CM2CON_COE_POSITION                     0x0000000E
#define _CM2CON_COE_MASK                         0x00004000
#define _CM2CON_COE_LENGTH                       0x00000001

#define _CM2CON_ON_POSITION                      0x0000000F
#define _CM2CON_ON_MASK                          0x00008000
#define _CM2CON_ON_LENGTH                        0x00000001

#define _CM2CON_CCH0_POSITION                    0x00000000
#define _CM2CON_CCH0_MASK                        0x00000001
#define _CM2CON_CCH0_LENGTH                      0x00000001

#define _CM2CON_CCH1_POSITION                    0x00000001
#define _CM2CON_CCH1_MASK                        0x00000002
#define _CM2CON_CCH1_LENGTH                      0x00000001

#define _CM2CON_EVPOL0_POSITION                  0x00000006
#define _CM2CON_EVPOL0_MASK                      0x00000040
#define _CM2CON_EVPOL0_LENGTH                    0x00000001

#define _CM2CON_EVPOL1_POSITION                  0x00000007
#define _CM2CON_EVPOL1_MASK                      0x00000080
#define _CM2CON_EVPOL1_LENGTH                    0x00000001

#define _CM2CON_w_POSITION                       0x00000000
#define _CM2CON_w_MASK                           0xFFFFFFFF
#define _CM2CON_w_LENGTH                         0x00000020

#define _CM3CON_CCH_POSITION                     0x00000000
#define _CM3CON_CCH_MASK                         0x00000003
#define _CM3CON_CCH_LENGTH                       0x00000002

#define _CM3CON_CREF_POSITION                    0x00000004
#define _CM3CON_CREF_MASK                        0x00000010
#define _CM3CON_CREF_LENGTH                      0x00000001

#define _CM3CON_EVPOL_POSITION                   0x00000006
#define _CM3CON_EVPOL_MASK                       0x000000C0
#define _CM3CON_EVPOL_LENGTH                     0x00000002

#define _CM3CON_COUT_POSITION                    0x00000008
#define _CM3CON_COUT_MASK                        0x00000100
#define _CM3CON_COUT_LENGTH                      0x00000001

#define _CM3CON_CPOL_POSITION                    0x0000000D
#define _CM3CON_CPOL_MASK                        0x00002000
#define _CM3CON_CPOL_LENGTH                      0x00000001

#define _CM3CON_COE_POSITION                     0x0000000E
#define _CM3CON_COE_MASK                         0x00004000
#define _CM3CON_COE_LENGTH                       0x00000001

#define _CM3CON_ON_POSITION                      0x0000000F
#define _CM3CON_ON_MASK                          0x00008000
#define _CM3CON_ON_LENGTH                        0x00000001

#define _CM3CON_CCH0_POSITION                    0x00000000
#define _CM3CON_CCH0_MASK                        0x00000001
#define _CM3CON_CCH0_LENGTH                      0x00000001

#define _CM3CON_CCH1_POSITION                    0x00000001
#define _CM3CON_CCH1_MASK                        0x00000002
#define _CM3CON_CCH1_LENGTH                      0x00000001

#define _CM3CON_EVPOL0_POSITION                  0x00000006
#define _CM3CON_EVPOL0_MASK                      0x00000040
#define _CM3CON_EVPOL0_LENGTH                    0x00000001

#define _CM3CON_EVPOL1_POSITION                  0x00000007
#define _CM3CON_EVPOL1_MASK                      0x00000080
#define _CM3CON_EVPOL1_LENGTH                    0x00000001

#define _CM3CON_w_POSITION                       0x00000000
#define _CM3CON_w_MASK                           0xFFFFFFFF
#define _CM3CON_w_LENGTH                         0x00000020

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_C3OUT_POSITION                   0x00000002
#define _CMSTAT_C3OUT_MASK                       0x00000004
#define _CMSTAT_C3OUT_LENGTH                     0x00000001

#define _CMSTAT_SIDL_POSITION                    0x0000000D
#define _CMSTAT_SIDL_MASK                        0x00002000
#define _CMSTAT_SIDL_LENGTH                      0x00000001

#define _CMSTAT_w_POSITION                       0x00000000
#define _CMSTAT_w_MASK                           0xFFFFFFFF
#define _CMSTAT_w_LENGTH                         0x00000020

#define _CTMUCON_IRNG_POSITION                   0x00000000
#define _CTMUCON_IRNG_MASK                       0x00000003
#define _CTMUCON_IRNG_LENGTH                     0x00000002

#define _CTMUCON_ITRIM_POSITION                  0x00000002
#define _CTMUCON_ITRIM_MASK                      0x000000FC
#define _CTMUCON_ITRIM_LENGTH                    0x00000006

#define _CTMUCON_CTTRIG_POSITION                 0x00000008
#define _CTMUCON_CTTRIG_MASK                     0x00000100
#define _CTMUCON_CTTRIG_LENGTH                   0x00000001

#define _CTMUCON_IDISSEN_POSITION                0x00000009
#define _CTMUCON_IDISSEN_MASK                    0x00000200
#define _CTMUCON_IDISSEN_LENGTH                  0x00000001

#define _CTMUCON_EDGSEQEN_POSITION               0x0000000A
#define _CTMUCON_EDGSEQEN_MASK                   0x00000400
#define _CTMUCON_EDGSEQEN_LENGTH                 0x00000001

#define _CTMUCON_EDGEN_POSITION                  0x0000000B
#define _CTMUCON_EDGEN_MASK                      0x00000800
#define _CTMUCON_EDGEN_LENGTH                    0x00000001

#define _CTMUCON_TGEN_POSITION                   0x0000000C
#define _CTMUCON_TGEN_MASK                       0x00001000
#define _CTMUCON_TGEN_LENGTH                     0x00000001

#define _CTMUCON_CTMUSIDL_POSITION               0x0000000D
#define _CTMUCON_CTMUSIDL_MASK                   0x00002000
#define _CTMUCON_CTMUSIDL_LENGTH                 0x00000001

#define _CTMUCON_ON_POSITION                     0x0000000F
#define _CTMUCON_ON_MASK                         0x00008000
#define _CTMUCON_ON_LENGTH                       0x00000001

#define _CTMUCON_EDG2SEL_POSITION                0x00000012
#define _CTMUCON_EDG2SEL_MASK                    0x003C0000
#define _CTMUCON_EDG2SEL_LENGTH                  0x00000004

#define _CTMUCON_EDG2POL_POSITION                0x00000016
#define _CTMUCON_EDG2POL_MASK                    0x00400000
#define _CTMUCON_EDG2POL_LENGTH                  0x00000001

#define _CTMUCON_EDG2MOD_POSITION                0x00000017
#define _CTMUCON_EDG2MOD_MASK                    0x00800000
#define _CTMUCON_EDG2MOD_LENGTH                  0x00000001

#define _CTMUCON_EDG1STAT_POSITION               0x00000018
#define _CTMUCON_EDG1STAT_MASK                   0x01000000
#define _CTMUCON_EDG1STAT_LENGTH                 0x00000001

#define _CTMUCON_EDG2STAT_POSITION               0x00000019
#define _CTMUCON_EDG2STAT_MASK                   0x02000000
#define _CTMUCON_EDG2STAT_LENGTH                 0x00000001

#define _CTMUCON_EDG1SEL_POSITION                0x0000001A
#define _CTMUCON_EDG1SEL_MASK                    0x3C000000
#define _CTMUCON_EDG1SEL_LENGTH                  0x00000004

#define _CTMUCON_EDG1POL_POSITION                0x0000001E
#define _CTMUCON_EDG1POL_MASK                    0x40000000
#define _CTMUCON_EDG1POL_LENGTH                  0x00000001

#define _CTMUCON_EDG1MOD_POSITION                0x0000001F
#define _CTMUCON_EDG1MOD_MASK                    0x80000000
#define _CTMUCON_EDG1MOD_LENGTH                  0x00000001

#define _CTMUCON_w_POSITION                      0x00000000
#define _CTMUCON_w_MASK                          0xFFFFFFFF
#define _CTMUCON_w_LENGTH                        0x00000020

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_UFRCEN_POSITION                  0x00000002
#define _OSCCON_UFRCEN_MASK                      0x00000004
#define _OSCCON_UFRCEN_LENGTH                    0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_SLPEN_POSITION                   0x00000004
#define _OSCCON_SLPEN_MASK                       0x00000010
#define _OSCCON_SLPEN_LENGTH                     0x00000001

#define _OSCCON_SLOCK_POSITION                   0x00000005
#define _OSCCON_SLOCK_MASK                       0x00000020
#define _OSCCON_SLOCK_LENGTH                     0x00000001

#define _OSCCON_ULOCK_POSITION                   0x00000006
#define _OSCCON_ULOCK_MASK                       0x00000040
#define _OSCCON_ULOCK_LENGTH                     0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_PLLMULT_POSITION                 0x00000010
#define _OSCCON_PLLMULT_MASK                     0x00070000
#define _OSCCON_PLLMULT_LENGTH                   0x00000003

#define _OSCCON_PBDIV_POSITION                   0x00000013
#define _OSCCON_PBDIV_MASK                       0x00180000
#define _OSCCON_PBDIV_LENGTH                     0x00000002

#define _OSCCON_PBDIVRDY_POSITION                0x00000015
#define _OSCCON_PBDIVRDY_MASK                    0x00200000
#define _OSCCON_PBDIVRDY_LENGTH                  0x00000001

#define _OSCCON_SOSCRDY_POSITION                 0x00000016
#define _OSCCON_SOSCRDY_MASK                     0x00400000
#define _OSCCON_SOSCRDY_LENGTH                   0x00000001

#define _OSCCON_FRCDIV_POSITION                  0x00000018
#define _OSCCON_FRCDIV_MASK                      0x07000000
#define _OSCCON_FRCDIV_LENGTH                    0x00000003

#define _OSCCON_PLLODIV_POSITION                 0x0000001B
#define _OSCCON_PLLODIV_MASK                     0x38000000
#define _OSCCON_PLLODIV_LENGTH                   0x00000003

#define _OSCCON_NOSC0_POSITION                   0x00000008
#define _OSCCON_NOSC0_MASK                       0x00000100
#define _OSCCON_NOSC0_LENGTH                     0x00000001

#define _OSCCON_NOSC1_POSITION                   0x00000009
#define _OSCCON_NOSC1_MASK                       0x00000200
#define _OSCCON_NOSC1_LENGTH                     0x00000001

#define _OSCCON_NOSC2_POSITION                   0x0000000A
#define _OSCCON_NOSC2_MASK                       0x00000400
#define _OSCCON_NOSC2_LENGTH                     0x00000001

#define _OSCCON_COSC0_POSITION                   0x0000000C
#define _OSCCON_COSC0_MASK                       0x00001000
#define _OSCCON_COSC0_LENGTH                     0x00000001

#define _OSCCON_COSC1_POSITION                   0x0000000D
#define _OSCCON_COSC1_MASK                       0x00002000
#define _OSCCON_COSC1_LENGTH                     0x00000001

#define _OSCCON_COSC2_POSITION                   0x0000000E
#define _OSCCON_COSC2_MASK                       0x00004000
#define _OSCCON_COSC2_LENGTH                     0x00000001

#define _OSCCON_PLLMULT0_POSITION                0x00000010
#define _OSCCON_PLLMULT0_MASK                    0x00010000
#define _OSCCON_PLLMULT0_LENGTH                  0x00000001

#define _OSCCON_PLLMULT1_POSITION                0x00000011
#define _OSCCON_PLLMULT1_MASK                    0x00020000
#define _OSCCON_PLLMULT1_LENGTH                  0x00000001

#define _OSCCON_PLLMULT2_POSITION                0x00000012
#define _OSCCON_PLLMULT2_MASK                    0x00040000
#define _OSCCON_PLLMULT2_LENGTH                  0x00000001

#define _OSCCON_PBDIV0_POSITION                  0x00000013
#define _OSCCON_PBDIV0_MASK                      0x00080000
#define _OSCCON_PBDIV0_LENGTH                    0x00000001

#define _OSCCON_PBDIV1_POSITION                  0x00000014
#define _OSCCON_PBDIV1_MASK                      0x00100000
#define _OSCCON_PBDIV1_LENGTH                    0x00000001

#define _OSCCON_FRCDIV0_POSITION                 0x00000018
#define _OSCCON_FRCDIV0_MASK                     0x01000000
#define _OSCCON_FRCDIV0_LENGTH                   0x00000001

#define _OSCCON_FRCDIV1_POSITION                 0x00000019
#define _OSCCON_FRCDIV1_MASK                     0x02000000
#define _OSCCON_FRCDIV1_LENGTH                   0x00000001

#define _OSCCON_FRCDIV2_POSITION                 0x0000001A
#define _OSCCON_FRCDIV2_MASK                     0x04000000
#define _OSCCON_FRCDIV2_LENGTH                   0x00000001

#define _OSCCON_PLLODIV0_POSITION                0x0000001B
#define _OSCCON_PLLODIV0_MASK                    0x08000000
#define _OSCCON_PLLODIV0_LENGTH                  0x00000001

#define _OSCCON_PLLODIV1_POSITION                0x0000001C
#define _OSCCON_PLLODIV1_MASK                    0x10000000
#define _OSCCON_PLLODIV1_LENGTH                  0x00000001

#define _OSCCON_PLLODIV2_POSITION                0x0000001D
#define _OSCCON_PLLODIV2_MASK                    0x20000000
#define _OSCCON_PLLODIV2_LENGTH                  0x00000001

#define _OSCCON_w_POSITION                       0x00000000
#define _OSCCON_w_MASK                           0xFFFFFFFF
#define _OSCCON_w_LENGTH                         0x00000020

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _OSCTUN_TUN0_POSITION                    0x00000000
#define _OSCTUN_TUN0_MASK                        0x00000001
#define _OSCTUN_TUN0_LENGTH                      0x00000001

#define _OSCTUN_TUN1_POSITION                    0x00000001
#define _OSCTUN_TUN1_MASK                        0x00000002
#define _OSCTUN_TUN1_LENGTH                      0x00000001

#define _OSCTUN_TUN2_POSITION                    0x00000002
#define _OSCTUN_TUN2_MASK                        0x00000004
#define _OSCTUN_TUN2_LENGTH                      0x00000001

#define _OSCTUN_TUN3_POSITION                    0x00000003
#define _OSCTUN_TUN3_MASK                        0x00000008
#define _OSCTUN_TUN3_LENGTH                      0x00000001

#define _OSCTUN_TUN4_POSITION                    0x00000004
#define _OSCTUN_TUN4_MASK                        0x00000010
#define _OSCTUN_TUN4_LENGTH                      0x00000001

#define _OSCTUN_TUN5_POSITION                    0x00000005
#define _OSCTUN_TUN5_MASK                        0x00000020
#define _OSCTUN_TUN5_LENGTH                      0x00000001

#define _OSCTUN_w_POSITION                       0x00000000
#define _OSCTUN_w_MASK                           0xFFFFFFFF
#define _OSCTUN_w_LENGTH                         0x00000020

#define _REFOCON_ROSEL_POSITION                  0x00000000
#define _REFOCON_ROSEL_MASK                      0x0000000F
#define _REFOCON_ROSEL_LENGTH                    0x00000004

#define _REFOCON_ACTIVE_POSITION                 0x00000008
#define _REFOCON_ACTIVE_MASK                     0x00000100
#define _REFOCON_ACTIVE_LENGTH                   0x00000001

#define _REFOCON_DIVSWEN_POSITION                0x00000009
#define _REFOCON_DIVSWEN_MASK                    0x00000200
#define _REFOCON_DIVSWEN_LENGTH                  0x00000001

#define _REFOCON_RSLP_POSITION                   0x0000000B
#define _REFOCON_RSLP_MASK                       0x00000800
#define _REFOCON_RSLP_LENGTH                     0x00000001

#define _REFOCON_OE_POSITION                     0x0000000C
#define _REFOCON_OE_MASK                         0x00001000
#define _REFOCON_OE_LENGTH                       0x00000001

#define _REFOCON_SIDL_POSITION                   0x0000000D
#define _REFOCON_SIDL_MASK                       0x00002000
#define _REFOCON_SIDL_LENGTH                     0x00000001

#define _REFOCON_ON_POSITION                     0x0000000F
#define _REFOCON_ON_MASK                         0x00008000
#define _REFOCON_ON_LENGTH                       0x00000001

#define _REFOCON_RODIV_POSITION                  0x00000010
#define _REFOCON_RODIV_MASK                      0x7FFF0000
#define _REFOCON_RODIV_LENGTH                    0x0000000F

#define _REFOCON_w_POSITION                      0x00000000
#define _REFOCON_w_MASK                          0xFFFFFFFF
#define _REFOCON_w_LENGTH                        0x00000020

#define _REFOTRIM_ROTRIM_POSITION                0x00000017
#define _REFOTRIM_ROTRIM_MASK                    0xFF800000
#define _REFOTRIM_ROTRIM_LENGTH                  0x00000009

#define _REFOTRIM_w_POSITION                     0x00000000
#define _REFOTRIM_w_MASK                         0xFFFFFFFF
#define _REFOTRIM_w_LENGTH                       0x00000020

#define _CFGCON_TDOEN_POSITION                   0x00000000
#define _CFGCON_TDOEN_MASK                       0x00000001
#define _CFGCON_TDOEN_LENGTH                     0x00000001

#define _CFGCON_JTAGEN_POSITION                  0x00000003
#define _CFGCON_JTAGEN_MASK                      0x00000008
#define _CFGCON_JTAGEN_LENGTH                    0x00000001

#define _CFGCON_PMDLOCK_POSITION                 0x0000000C
#define _CFGCON_PMDLOCK_MASK                     0x00001000
#define _CFGCON_PMDLOCK_LENGTH                   0x00000001

#define _CFGCON_IOLOCK_POSITION                  0x0000000D
#define _CFGCON_IOLOCK_MASK                      0x00002000
#define _CFGCON_IOLOCK_LENGTH                    0x00000001

#define _DDPCON_TDOEN_POSITION                   0x00000000
#define _DDPCON_TDOEN_MASK                       0x00000001
#define _DDPCON_TDOEN_LENGTH                     0x00000001

#define _DDPCON_JTAGEN_POSITION                  0x00000003
#define _DDPCON_JTAGEN_MASK                      0x00000008
#define _DDPCON_JTAGEN_LENGTH                    0x00000001

#define _DDPCON_PMDLOCK_POSITION                 0x0000000C
#define _DDPCON_PMDLOCK_MASK                     0x00001000
#define _DDPCON_PMDLOCK_LENGTH                   0x00000001

#define _DDPCON_IOLOCK_POSITION                  0x0000000D
#define _DDPCON_IOLOCK_MASK                      0x00002000
#define _DDPCON_IOLOCK_LENGTH                    0x00000001

#define _DEVID_DEVID_POSITION                    0x00000000
#define _DEVID_DEVID_MASK                        0x0FFFFFFF
#define _DEVID_DEVID_LENGTH                      0x0000001C

#define _DEVID_VER_POSITION                      0x0000001C
#define _DEVID_VER_MASK                          0xF0000000
#define _DEVID_VER_LENGTH                        0x00000004

#define _PMD1_AD1MD_POSITION                     0x00000000
#define _PMD1_AD1MD_MASK                         0x00000001
#define _PMD1_AD1MD_LENGTH                       0x00000001

#define _PMD1_CTMUMD_POSITION                    0x00000008
#define _PMD1_CTMUMD_MASK                        0x00000100
#define _PMD1_CTMUMD_LENGTH                      0x00000001

#define _PMD1_CVRMD_POSITION                     0x0000000C
#define _PMD1_CVRMD_MASK                         0x00001000
#define _PMD1_CVRMD_LENGTH                       0x00000001

#define _PMD2_CMP1MD_POSITION                    0x00000000
#define _PMD2_CMP1MD_MASK                        0x00000001
#define _PMD2_CMP1MD_LENGTH                      0x00000001

#define _PMD2_CMP2MD_POSITION                    0x00000001
#define _PMD2_CMP2MD_MASK                        0x00000002
#define _PMD2_CMP2MD_LENGTH                      0x00000001

#define _PMD2_CMP3MD_POSITION                    0x00000002
#define _PMD2_CMP3MD_MASK                        0x00000004
#define _PMD2_CMP3MD_LENGTH                      0x00000001

#define _PMD3_IC1MD_POSITION                     0x00000000
#define _PMD3_IC1MD_MASK                         0x00000001
#define _PMD3_IC1MD_LENGTH                       0x00000001

#define _PMD3_IC2MD_POSITION                     0x00000001
#define _PMD3_IC2MD_MASK                         0x00000002
#define _PMD3_IC2MD_LENGTH                       0x00000001

#define _PMD3_IC3MD_POSITION                     0x00000002
#define _PMD3_IC3MD_MASK                         0x00000004
#define _PMD3_IC3MD_LENGTH                       0x00000001

#define _PMD3_IC4MD_POSITION                     0x00000003
#define _PMD3_IC4MD_MASK                         0x00000008
#define _PMD3_IC4MD_LENGTH                       0x00000001

#define _PMD3_IC5MD_POSITION                     0x00000004
#define _PMD3_IC5MD_MASK                         0x00000010
#define _PMD3_IC5MD_LENGTH                       0x00000001

#define _PMD3_OC1MD_POSITION                     0x00000010
#define _PMD3_OC1MD_MASK                         0x00010000
#define _PMD3_OC1MD_LENGTH                       0x00000001

#define _PMD3_OC2MD_POSITION                     0x00000011
#define _PMD3_OC2MD_MASK                         0x00020000
#define _PMD3_OC2MD_LENGTH                       0x00000001

#define _PMD3_OC3MD_POSITION                     0x00000012
#define _PMD3_OC3MD_MASK                         0x00040000
#define _PMD3_OC3MD_LENGTH                       0x00000001

#define _PMD3_OC4MD_POSITION                     0x00000013
#define _PMD3_OC4MD_MASK                         0x00080000
#define _PMD3_OC4MD_LENGTH                       0x00000001

#define _PMD3_OC5MD_POSITION                     0x00000014
#define _PMD3_OC5MD_MASK                         0x00100000
#define _PMD3_OC5MD_LENGTH                       0x00000001

#define _PMD4_T1MD_POSITION                      0x00000000
#define _PMD4_T1MD_MASK                          0x00000001
#define _PMD4_T1MD_LENGTH                        0x00000001

#define _PMD4_T2MD_POSITION                      0x00000001
#define _PMD4_T2MD_MASK                          0x00000002
#define _PMD4_T2MD_LENGTH                        0x00000001

#define _PMD4_T3MD_POSITION                      0x00000002
#define _PMD4_T3MD_MASK                          0x00000004
#define _PMD4_T3MD_LENGTH                        0x00000001

#define _PMD4_T4MD_POSITION                      0x00000003
#define _PMD4_T4MD_MASK                          0x00000008
#define _PMD4_T4MD_LENGTH                        0x00000001

#define _PMD4_T5MD_POSITION                      0x00000004
#define _PMD4_T5MD_MASK                          0x00000010
#define _PMD4_T5MD_LENGTH                        0x00000001

#define _PMD5_U1MD_POSITION                      0x00000000
#define _PMD5_U1MD_MASK                          0x00000001
#define _PMD5_U1MD_LENGTH                        0x00000001

#define _PMD5_U2MD_POSITION                      0x00000001
#define _PMD5_U2MD_MASK                          0x00000002
#define _PMD5_U2MD_LENGTH                        0x00000001

#define _PMD5_SPI1MD_POSITION                    0x00000008
#define _PMD5_SPI1MD_MASK                        0x00000100
#define _PMD5_SPI1MD_LENGTH                      0x00000001

#define _PMD5_SPI2MD_POSITION                    0x00000009
#define _PMD5_SPI2MD_MASK                        0x00000200
#define _PMD5_SPI2MD_LENGTH                      0x00000001

#define _PMD5_I2C1MD_POSITION                    0x00000010
#define _PMD5_I2C1MD_MASK                        0x00010000
#define _PMD5_I2C1MD_LENGTH                      0x00000001

#define _PMD5_I2C2MD_POSITION                    0x00000011
#define _PMD5_I2C2MD_MASK                        0x00020000
#define _PMD5_I2C2MD_LENGTH                      0x00000001

#define _PMD5_USB1MD_POSITION                    0x00000018
#define _PMD5_USB1MD_MASK                        0x01000000
#define _PMD5_USB1MD_LENGTH                      0x00000001

#define _PMD5_USBMD_POSITION                     0x00000018
#define _PMD5_USBMD_MASK                         0x01000000
#define _PMD5_USBMD_LENGTH                       0x00000001

#define _PMD6_RTCCMD_POSITION                    0x00000000
#define _PMD6_RTCCMD_MASK                        0x00000001
#define _PMD6_RTCCMD_LENGTH                      0x00000001

#define _PMD6_REFOMD_POSITION                    0x00000001
#define _PMD6_REFOMD_MASK                        0x00000002
#define _PMD6_REFOMD_LENGTH                      0x00000001

#define _PMD6_PMPMD_POSITION                     0x00000010
#define _PMD6_PMPMD_MASK                         0x00010000
#define _PMD6_PMPMD_LENGTH                       0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_LVDSTAT_POSITION                 0x0000000B
#define _NVMCON_LVDSTAT_MASK                     0x00000800
#define _NVMCON_LVDSTAT_LENGTH                   0x00000001

#define _NVMCON_LVDERR_POSITION                  0x0000000C
#define _NVMCON_LVDERR_MASK                      0x00001000
#define _NVMCON_LVDERR_LENGTH                    0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMCON_NVMOP0_POSITION                  0x00000000
#define _NVMCON_NVMOP0_MASK                      0x00000001
#define _NVMCON_NVMOP0_LENGTH                    0x00000001

#define _NVMCON_NVMOP1_POSITION                  0x00000001
#define _NVMCON_NVMOP1_MASK                      0x00000002
#define _NVMCON_NVMOP1_LENGTH                    0x00000001

#define _NVMCON_NVMOP2_POSITION                  0x00000002
#define _NVMCON_NVMOP2_MASK                      0x00000004
#define _NVMCON_NVMOP2_LENGTH                    0x00000001

#define _NVMCON_NVMOP3_POSITION                  0x00000003
#define _NVMCON_NVMOP3_MASK                      0x00000008
#define _NVMCON_NVMOP3_LENGTH                    0x00000001

#define _NVMCON_PROGOP_POSITION                  0x00000000
#define _NVMCON_PROGOP_MASK                      0x0000000F
#define _NVMCON_PROGOP_LENGTH                    0x00000004

#define _NVMCON_PROGOP0_POSITION                 0x00000000
#define _NVMCON_PROGOP0_MASK                     0x00000001
#define _NVMCON_PROGOP0_LENGTH                   0x00000001

#define _NVMCON_PROGOP1_POSITION                 0x00000001
#define _NVMCON_PROGOP1_MASK                     0x00000002
#define _NVMCON_PROGOP1_LENGTH                   0x00000001

#define _NVMCON_PROGOP2_POSITION                 0x00000002
#define _NVMCON_PROGOP2_MASK                     0x00000004
#define _NVMCON_PROGOP2_LENGTH                   0x00000001

#define _NVMCON_PROGOP3_POSITION                 0x00000003
#define _NVMCON_PROGOP3_MASK                     0x00000008
#define _NVMCON_PROGOP3_LENGTH                   0x00000001

#define _NVMCON_w_POSITION                       0x00000000
#define _NVMCON_w_MASK                           0xFFFFFFFF
#define _NVMCON_w_LENGTH                         0x00000020

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_VREGS_POSITION                     0x00000008
#define _RCON_VREGS_MASK                         0x00000100
#define _RCON_VREGS_LENGTH                       0x00000001

#define _RCON_CMR_POSITION                       0x00000009
#define _RCON_CMR_MASK                           0x00000200
#define _RCON_CMR_LENGTH                         0x00000001

#define _RCON_w_POSITION                         0x00000000
#define _RCON_w_MASK                             0xFFFFFFFF
#define _RCON_w_LENGTH                           0x00000020

#define _RSWRST_SWRST_POSITION                   0x00000000
#define _RSWRST_SWRST_MASK                       0x00000001
#define _RSWRST_SWRST_LENGTH                     0x00000001

#define _RSWRST_w_POSITION                       0x00000000
#define _RSWRST_w_MASK                           0xFFFFFFFF
#define _RSWRST_w_LENGTH                         0x00000020

#define _INT1R_INT1R_POSITION                    0x00000000
#define _INT1R_INT1R_MASK                        0x0000000F
#define _INT1R_INT1R_LENGTH                      0x00000004

#define _INT2R_INT2R_POSITION                    0x00000000
#define _INT2R_INT2R_MASK                        0x0000000F
#define _INT2R_INT2R_LENGTH                      0x00000004

#define _INT3R_INT3R_POSITION                    0x00000000
#define _INT3R_INT3R_MASK                        0x0000000F
#define _INT3R_INT3R_LENGTH                      0x00000004

#define _INT4R_INT4R_POSITION                    0x00000000
#define _INT4R_INT4R_MASK                        0x0000000F
#define _INT4R_INT4R_LENGTH                      0x00000004

#define _T2CKR_T2CKR_POSITION                    0x00000000
#define _T2CKR_T2CKR_MASK                        0x0000000F
#define _T2CKR_T2CKR_LENGTH                      0x00000004

#define _T3CKR_T3CKR_POSITION                    0x00000000
#define _T3CKR_T3CKR_MASK                        0x0000000F
#define _T3CKR_T3CKR_LENGTH                      0x00000004

#define _T4CKR_T4CKR_POSITION                    0x00000000
#define _T4CKR_T4CKR_MASK                        0x0000000F
#define _T4CKR_T4CKR_LENGTH                      0x00000004

#define _T5CKR_T5CKR_POSITION                    0x00000000
#define _T5CKR_T5CKR_MASK                        0x0000000F
#define _T5CKR_T5CKR_LENGTH                      0x00000004

#define _IC1R_IC1R_POSITION                      0x00000000
#define _IC1R_IC1R_MASK                          0x0000000F
#define _IC1R_IC1R_LENGTH                        0x00000004

#define _IC2R_IC2R_POSITION                      0x00000000
#define _IC2R_IC2R_MASK                          0x0000000F
#define _IC2R_IC2R_LENGTH                        0x00000004

#define _IC3R_IC3R_POSITION                      0x00000000
#define _IC3R_IC3R_MASK                          0x0000000F
#define _IC3R_IC3R_LENGTH                        0x00000004

#define _IC4R_IC4R_POSITION                      0x00000000
#define _IC4R_IC4R_MASK                          0x0000000F
#define _IC4R_IC4R_LENGTH                        0x00000004

#define _IC5R_IC5R_POSITION                      0x00000000
#define _IC5R_IC5R_MASK                          0x0000000F
#define _IC5R_IC5R_LENGTH                        0x00000004

#define _OCFAR_OCFAR_POSITION                    0x00000000
#define _OCFAR_OCFAR_MASK                        0x0000000F
#define _OCFAR_OCFAR_LENGTH                      0x00000004

#define _OCFBR_OCFBR_POSITION                    0x00000000
#define _OCFBR_OCFBR_MASK                        0x0000000F
#define _OCFBR_OCFBR_LENGTH                      0x00000004

#define _U1RXR_U1RXR_POSITION                    0x00000000
#define _U1RXR_U1RXR_MASK                        0x0000000F
#define _U1RXR_U1RXR_LENGTH                      0x00000004

#define _U1CTSR_U1CTSR_POSITION                  0x00000000
#define _U1CTSR_U1CTSR_MASK                      0x0000000F
#define _U1CTSR_U1CTSR_LENGTH                    0x00000004

#define _U2RXR_U2RXR_POSITION                    0x00000000
#define _U2RXR_U2RXR_MASK                        0x0000000F
#define _U2RXR_U2RXR_LENGTH                      0x00000004

#define _U2CTSR_U2CTSR_POSITION                  0x00000000
#define _U2CTSR_U2CTSR_MASK                      0x0000000F
#define _U2CTSR_U2CTSR_LENGTH                    0x00000004

#define _SDI1R_SDI1R_POSITION                    0x00000000
#define _SDI1R_SDI1R_MASK                        0x0000000F
#define _SDI1R_SDI1R_LENGTH                      0x00000004

#define _SS1R_SS1R_POSITION                      0x00000000
#define _SS1R_SS1R_MASK                          0x0000000F
#define _SS1R_SS1R_LENGTH                        0x00000004

#define _SDI2R_SDI2R_POSITION                    0x00000000
#define _SDI2R_SDI2R_MASK                        0x0000000F
#define _SDI2R_SDI2R_LENGTH                      0x00000004

#define _SS2R_SS2R_POSITION                      0x00000000
#define _SS2R_SS2R_MASK                          0x0000000F
#define _SS2R_SS2R_LENGTH                        0x00000004

#define _REFCLKIR_REFCLKIR_POSITION              0x00000000
#define _REFCLKIR_REFCLKIR_MASK                  0x0000000F
#define _REFCLKIR_REFCLKIR_LENGTH                0x00000004

#define _RPA0R_RPA0R_POSITION                    0x00000000
#define _RPA0R_RPA0R_MASK                        0x0000000F
#define _RPA0R_RPA0R_LENGTH                      0x00000004

#define _RPA1R_RPA1R_POSITION                    0x00000000
#define _RPA1R_RPA1R_MASK                        0x0000000F
#define _RPA1R_RPA1R_LENGTH                      0x00000004

#define _RPA2R_RPA2R_POSITION                    0x00000000
#define _RPA2R_RPA2R_MASK                        0x0000000F
#define _RPA2R_RPA2R_LENGTH                      0x00000004

#define _RPA3R_RPA3R_POSITION                    0x00000000
#define _RPA3R_RPA3R_MASK                        0x0000000F
#define _RPA3R_RPA3R_LENGTH                      0x00000004

#define _RPA4R_RPA4R_POSITION                    0x00000000
#define _RPA4R_RPA4R_MASK                        0x0000000F
#define _RPA4R_RPA4R_LENGTH                      0x00000004

#define _RPA8R_RPA8R_POSITION                    0x00000000
#define _RPA8R_RPA8R_MASK                        0x0000000F
#define _RPA8R_RPA8R_LENGTH                      0x00000004

#define _RPA9R_RPA9R_POSITION                    0x00000000
#define _RPA9R_RPA9R_MASK                        0x0000000F
#define _RPA9R_RPA9R_LENGTH                      0x00000004

#define _RPB0R_RPB0R_POSITION                    0x00000000
#define _RPB0R_RPB0R_MASK                        0x0000000F
#define _RPB0R_RPB0R_LENGTH                      0x00000004

#define _RPB1R_RPB1R_POSITION                    0x00000000
#define _RPB1R_RPB1R_MASK                        0x0000000F
#define _RPB1R_RPB1R_LENGTH                      0x00000004

#define _RPB2R_RPB2R_POSITION                    0x00000000
#define _RPB2R_RPB2R_MASK                        0x0000000F
#define _RPB2R_RPB2R_LENGTH                      0x00000004

#define _RPB3R_RPB3R_POSITION                    0x00000000
#define _RPB3R_RPB3R_MASK                        0x0000000F
#define _RPB3R_RPB3R_LENGTH                      0x00000004

#define _RPB4R_RPB4R_POSITION                    0x00000000
#define _RPB4R_RPB4R_MASK                        0x0000000F
#define _RPB4R_RPB4R_LENGTH                      0x00000004

#define _RPB5R_RPB5R_POSITION                    0x00000000
#define _RPB5R_RPB5R_MASK                        0x0000000F
#define _RPB5R_RPB5R_LENGTH                      0x00000004

#define _RPB7R_RPB7R_POSITION                    0x00000000
#define _RPB7R_RPB7R_MASK                        0x0000000F
#define _RPB7R_RPB7R_LENGTH                      0x00000004

#define _RPB8R_RPB8R_POSITION                    0x00000000
#define _RPB8R_RPB8R_MASK                        0x0000000F
#define _RPB8R_RPB8R_LENGTH                      0x00000004

#define _RPB9R_RPB9R_POSITION                    0x00000000
#define _RPB9R_RPB9R_MASK                        0x0000000F
#define _RPB9R_RPB9R_LENGTH                      0x00000004

#define _RPB10R_RPB10R_POSITION                  0x00000000
#define _RPB10R_RPB10R_MASK                      0x0000000F
#define _RPB10R_RPB10R_LENGTH                    0x00000004

#define _RPB11R_RPB11R_POSITION                  0x00000000
#define _RPB11R_RPB11R_MASK                      0x0000000F
#define _RPB11R_RPB11R_LENGTH                    0x00000004

#define _RPB13R_RPB13R_POSITION                  0x00000000
#define _RPB13R_RPB13R_MASK                      0x0000000F
#define _RPB13R_RPB13R_LENGTH                    0x00000004

#define _RPB14R_RPB14R_POSITION                  0x00000000
#define _RPB14R_RPB14R_MASK                      0x0000000F
#define _RPB14R_RPB14R_LENGTH                    0x00000004

#define _RPB15R_RPB15R_POSITION                  0x00000000
#define _RPB15R_RPB15R_MASK                      0x0000000F
#define _RPB15R_RPB15R_LENGTH                    0x00000004

#define _RPC0R_RPC0R_POSITION                    0x00000000
#define _RPC0R_RPC0R_MASK                        0x0000000F
#define _RPC0R_RPC0R_LENGTH                      0x00000004

#define _RPC1R_RPC1R_POSITION                    0x00000000
#define _RPC1R_RPC1R_MASK                        0x0000000F
#define _RPC1R_RPC1R_LENGTH                      0x00000004

#define _RPC2R_RPC2R_POSITION                    0x00000000
#define _RPC2R_RPC2R_MASK                        0x0000000F
#define _RPC2R_RPC2R_LENGTH                      0x00000004

#define _RPC3R_RPC3R_POSITION                    0x00000000
#define _RPC3R_RPC3R_MASK                        0x0000000F
#define _RPC3R_RPC3R_LENGTH                      0x00000004

#define _RPC4R_RPC4R_POSITION                    0x00000000
#define _RPC4R_RPC4R_MASK                        0x0000000F
#define _RPC4R_RPC4R_LENGTH                      0x00000004

#define _RPC5R_RPC5R_POSITION                    0x00000000
#define _RPC5R_RPC5R_MASK                        0x0000000F
#define _RPC5R_RPC5R_LENGTH                      0x00000004

#define _RPC6R_RPC6R_POSITION                    0x00000000
#define _RPC6R_RPC6R_MASK                        0x0000000F
#define _RPC6R_RPC6R_LENGTH                      0x00000004

#define _RPC7R_RPC7R_POSITION                    0x00000000
#define _RPC7R_RPC7R_MASK                        0x0000000F
#define _RPC7R_RPC7R_LENGTH                      0x00000004

#define _RPC8R_RPC8R_POSITION                    0x00000000
#define _RPC8R_RPC8R_MASK                        0x0000000F
#define _RPC8R_RPC8R_LENGTH                      0x00000004

#define _RPC9R_RPC9R_POSITION                    0x00000000
#define _RPC9R_RPC9R_MASK                        0x0000000F
#define _RPC9R_RPC9R_LENGTH                      0x00000004

#define _INTCON_INT0EP_POSITION                  0x00000000
#define _INTCON_INT0EP_MASK                      0x00000001
#define _INTCON_INT0EP_LENGTH                    0x00000001

#define _INTCON_INT1EP_POSITION                  0x00000001
#define _INTCON_INT1EP_MASK                      0x00000002
#define _INTCON_INT1EP_LENGTH                    0x00000001

#define _INTCON_INT2EP_POSITION                  0x00000002
#define _INTCON_INT2EP_MASK                      0x00000004
#define _INTCON_INT2EP_LENGTH                    0x00000001

#define _INTCON_INT3EP_POSITION                  0x00000003
#define _INTCON_INT3EP_MASK                      0x00000008
#define _INTCON_INT3EP_LENGTH                    0x00000001

#define _INTCON_INT4EP_POSITION                  0x00000004
#define _INTCON_INT4EP_MASK                      0x00000010
#define _INTCON_INT4EP_LENGTH                    0x00000001

#define _INTCON_TPC_POSITION                     0x00000008
#define _INTCON_TPC_MASK                         0x00000700
#define _INTCON_TPC_LENGTH                       0x00000003

#define _INTCON_MVEC_POSITION                    0x0000000C
#define _INTCON_MVEC_MASK                        0x00001000
#define _INTCON_MVEC_LENGTH                      0x00000001

#define _INTCON_SS0_POSITION                     0x00000010
#define _INTCON_SS0_MASK                         0x00010000
#define _INTCON_SS0_LENGTH                       0x00000001

#define _INTCON_w_POSITION                       0x00000000
#define _INTCON_w_MASK                           0xFFFFFFFF
#define _INTCON_w_LENGTH                         0x00000020

#define _INTSTAT_VEC_POSITION                    0x00000000
#define _INTSTAT_VEC_MASK                        0x0000003F
#define _INTSTAT_VEC_LENGTH                      0x00000006

#define _INTSTAT_SRIPL_POSITION                  0x00000008
#define _INTSTAT_SRIPL_MASK                      0x00000700
#define _INTSTAT_SRIPL_LENGTH                    0x00000003

#define _IFS0_CTIF_POSITION                      0x00000000
#define _IFS0_CTIF_MASK                          0x00000001
#define _IFS0_CTIF_LENGTH                        0x00000001

#define _IFS0_CS0IF_POSITION                     0x00000001
#define _IFS0_CS0IF_MASK                         0x00000002
#define _IFS0_CS0IF_LENGTH                       0x00000001

#define _IFS0_CS1IF_POSITION                     0x00000002
#define _IFS0_CS1IF_MASK                         0x00000004
#define _IFS0_CS1IF_LENGTH                       0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000003
#define _IFS0_INT0IF_MASK                        0x00000008
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_T1IF_POSITION                      0x00000004
#define _IFS0_T1IF_MASK                          0x00000010
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_IC1EIF_POSITION                    0x00000005
#define _IFS0_IC1EIF_MASK                        0x00000020
#define _IFS0_IC1EIF_LENGTH                      0x00000001

#define _IFS0_IC1IF_POSITION                     0x00000006
#define _IFS0_IC1IF_MASK                         0x00000040
#define _IFS0_IC1IF_LENGTH                       0x00000001

#define _IFS0_OC1IF_POSITION                     0x00000007
#define _IFS0_OC1IF_MASK                         0x00000080
#define _IFS0_OC1IF_LENGTH                       0x00000001

#define _IFS0_INT1IF_POSITION                    0x00000008
#define _IFS0_INT1IF_MASK                        0x00000100
#define _IFS0_INT1IF_LENGTH                      0x00000001

#define _IFS0_T2IF_POSITION                      0x00000009
#define _IFS0_T2IF_MASK                          0x00000200
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_IC2EIF_POSITION                    0x0000000A
#define _IFS0_IC2EIF_MASK                        0x00000400
#define _IFS0_IC2EIF_LENGTH                      0x00000001

#define _IFS0_IC2IF_POSITION                     0x0000000B
#define _IFS0_IC2IF_MASK                         0x00000800
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x0000000C
#define _IFS0_OC2IF_MASK                         0x00001000
#define _IFS0_OC2IF_LENGTH                       0x00000001

#define _IFS0_INT2IF_POSITION                    0x0000000D
#define _IFS0_INT2IF_MASK                        0x00002000
#define _IFS0_INT2IF_LENGTH                      0x00000001

#define _IFS0_T3IF_POSITION                      0x0000000E
#define _IFS0_T3IF_MASK                          0x00004000
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_IC3EIF_POSITION                    0x0000000F
#define _IFS0_IC3EIF_MASK                        0x00008000
#define _IFS0_IC3EIF_LENGTH                      0x00000001

#define _IFS0_IC3IF_POSITION                     0x00000010
#define _IFS0_IC3IF_MASK                         0x00010000
#define _IFS0_IC3IF_LENGTH                       0x00000001

#define _IFS0_OC3IF_POSITION                     0x00000011
#define _IFS0_OC3IF_MASK                         0x00020000
#define _IFS0_OC3IF_LENGTH                       0x00000001

#define _IFS0_INT3IF_POSITION                    0x00000012
#define _IFS0_INT3IF_MASK                        0x00040000
#define _IFS0_INT3IF_LENGTH                      0x00000001

#define _IFS0_T4IF_POSITION                      0x00000013
#define _IFS0_T4IF_MASK                          0x00080000
#define _IFS0_T4IF_LENGTH                        0x00000001

#define _IFS0_IC4EIF_POSITION                    0x00000014
#define _IFS0_IC4EIF_MASK                        0x00100000
#define _IFS0_IC4EIF_LENGTH                      0x00000001

#define _IFS0_IC4IF_POSITION                     0x00000015
#define _IFS0_IC4IF_MASK                         0x00200000
#define _IFS0_IC4IF_LENGTH                       0x00000001

#define _IFS0_OC4IF_POSITION                     0x00000016
#define _IFS0_OC4IF_MASK                         0x00400000
#define _IFS0_OC4IF_LENGTH                       0x00000001

#define _IFS0_INT4IF_POSITION                    0x00000017
#define _IFS0_INT4IF_MASK                        0x00800000
#define _IFS0_INT4IF_LENGTH                      0x00000001

#define _IFS0_T5IF_POSITION                      0x00000018
#define _IFS0_T5IF_MASK                          0x01000000
#define _IFS0_T5IF_LENGTH                        0x00000001

#define _IFS0_IC5EIF_POSITION                    0x00000019
#define _IFS0_IC5EIF_MASK                        0x02000000
#define _IFS0_IC5EIF_LENGTH                      0x00000001

#define _IFS0_IC5IF_POSITION                     0x0000001A
#define _IFS0_IC5IF_MASK                         0x04000000
#define _IFS0_IC5IF_LENGTH                       0x00000001

#define _IFS0_OC5IF_POSITION                     0x0000001B
#define _IFS0_OC5IF_MASK                         0x08000000
#define _IFS0_OC5IF_LENGTH                       0x00000001

#define _IFS0_AD1IF_POSITION                     0x0000001C
#define _IFS0_AD1IF_MASK                         0x10000000
#define _IFS0_AD1IF_LENGTH                       0x00000001

#define _IFS0_FSCMIF_POSITION                    0x0000001D
#define _IFS0_FSCMIF_MASK                        0x20000000
#define _IFS0_FSCMIF_LENGTH                      0x00000001

#define _IFS0_RTCCIF_POSITION                    0x0000001E
#define _IFS0_RTCCIF_MASK                        0x40000000
#define _IFS0_RTCCIF_LENGTH                      0x00000001

#define _IFS0_FCEIF_POSITION                     0x0000001F
#define _IFS0_FCEIF_MASK                         0x80000000
#define _IFS0_FCEIF_LENGTH                       0x00000001

#define _IFS0_w_POSITION                         0x00000000
#define _IFS0_w_MASK                             0xFFFFFFFF
#define _IFS0_w_LENGTH                           0x00000020

#define _IFS1_CMP1IF_POSITION                    0x00000000
#define _IFS1_CMP1IF_MASK                        0x00000001
#define _IFS1_CMP1IF_LENGTH                      0x00000001

#define _IFS1_CMP2IF_POSITION                    0x00000001
#define _IFS1_CMP2IF_MASK                        0x00000002
#define _IFS1_CMP2IF_LENGTH                      0x00000001

#define _IFS1_CMP3IF_POSITION                    0x00000002
#define _IFS1_CMP3IF_MASK                        0x00000004
#define _IFS1_CMP3IF_LENGTH                      0x00000001

#define _IFS1_USBIF_POSITION                     0x00000003
#define _IFS1_USBIF_MASK                         0x00000008
#define _IFS1_USBIF_LENGTH                       0x00000001

#define _IFS1_SPI1EIF_POSITION                   0x00000004
#define _IFS1_SPI1EIF_MASK                       0x00000010
#define _IFS1_SPI1EIF_LENGTH                     0x00000001

#define _IFS1_SPI1RXIF_POSITION                  0x00000005
#define _IFS1_SPI1RXIF_MASK                      0x00000020
#define _IFS1_SPI1RXIF_LENGTH                    0x00000001

#define _IFS1_SPI1TXIF_POSITION                  0x00000006
#define _IFS1_SPI1TXIF_MASK                      0x00000040
#define _IFS1_SPI1TXIF_LENGTH                    0x00000001

#define _IFS1_U1EIF_POSITION                     0x00000007
#define _IFS1_U1EIF_MASK                         0x00000080
#define _IFS1_U1EIF_LENGTH                       0x00000001

#define _IFS1_U1RXIF_POSITION                    0x00000008
#define _IFS1_U1RXIF_MASK                        0x00000100
#define _IFS1_U1RXIF_LENGTH                      0x00000001

#define _IFS1_U1TXIF_POSITION                    0x00000009
#define _IFS1_U1TXIF_MASK                        0x00000200
#define _IFS1_U1TXIF_LENGTH                      0x00000001

#define _IFS1_I2C1BIF_POSITION                   0x0000000A
#define _IFS1_I2C1BIF_MASK                       0x00000400
#define _IFS1_I2C1BIF_LENGTH                     0x00000001

#define _IFS1_I2C1SIF_POSITION                   0x0000000B
#define _IFS1_I2C1SIF_MASK                       0x00000800
#define _IFS1_I2C1SIF_LENGTH                     0x00000001

#define _IFS1_I2C1MIF_POSITION                   0x0000000C
#define _IFS1_I2C1MIF_MASK                       0x00001000
#define _IFS1_I2C1MIF_LENGTH                     0x00000001

#define _IFS1_CNAIF_POSITION                     0x0000000D
#define _IFS1_CNAIF_MASK                         0x00002000
#define _IFS1_CNAIF_LENGTH                       0x00000001

#define _IFS1_CNBIF_POSITION                     0x0000000E
#define _IFS1_CNBIF_MASK                         0x00004000
#define _IFS1_CNBIF_LENGTH                       0x00000001

#define _IFS1_CNCIF_POSITION                     0x0000000F
#define _IFS1_CNCIF_MASK                         0x00008000
#define _IFS1_CNCIF_LENGTH                       0x00000001

#define _IFS1_PMPIF_POSITION                     0x00000010
#define _IFS1_PMPIF_MASK                         0x00010000
#define _IFS1_PMPIF_LENGTH                       0x00000001

#define _IFS1_PMPEIF_POSITION                    0x00000011
#define _IFS1_PMPEIF_MASK                        0x00020000
#define _IFS1_PMPEIF_LENGTH                      0x00000001

#define _IFS1_SPI2EIF_POSITION                   0x00000012
#define _IFS1_SPI2EIF_MASK                       0x00040000
#define _IFS1_SPI2EIF_LENGTH                     0x00000001

#define _IFS1_SPI2RXIF_POSITION                  0x00000013
#define _IFS1_SPI2RXIF_MASK                      0x00080000
#define _IFS1_SPI2RXIF_LENGTH                    0x00000001

#define _IFS1_SPI2TXIF_POSITION                  0x00000014
#define _IFS1_SPI2TXIF_MASK                      0x00100000
#define _IFS1_SPI2TXIF_LENGTH                    0x00000001

#define _IFS1_U2EIF_POSITION                     0x00000015
#define _IFS1_U2EIF_MASK                         0x00200000
#define _IFS1_U2EIF_LENGTH                       0x00000001

#define _IFS1_U2RXIF_POSITION                    0x00000016
#define _IFS1_U2RXIF_MASK                        0x00400000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x00000017
#define _IFS1_U2TXIF_MASK                        0x00800000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS1_I2C2BIF_POSITION                   0x00000018
#define _IFS1_I2C2BIF_MASK                       0x01000000
#define _IFS1_I2C2BIF_LENGTH                     0x00000001

#define _IFS1_I2C2SIF_POSITION                   0x00000019
#define _IFS1_I2C2SIF_MASK                       0x02000000
#define _IFS1_I2C2SIF_LENGTH                     0x00000001

#define _IFS1_I2C2MIF_POSITION                   0x0000001A
#define _IFS1_I2C2MIF_MASK                       0x04000000
#define _IFS1_I2C2MIF_LENGTH                     0x00000001

#define _IFS1_CTMUIF_POSITION                    0x0000001B
#define _IFS1_CTMUIF_MASK                        0x08000000
#define _IFS1_CTMUIF_LENGTH                      0x00000001

#define _IFS1_DMA0IF_POSITION                    0x0000001C
#define _IFS1_DMA0IF_MASK                        0x10000000
#define _IFS1_DMA0IF_LENGTH                      0x00000001

#define _IFS1_DMA1IF_POSITION                    0x0000001D
#define _IFS1_DMA1IF_MASK                        0x20000000
#define _IFS1_DMA1IF_LENGTH                      0x00000001

#define _IFS1_DMA2IF_POSITION                    0x0000001E
#define _IFS1_DMA2IF_MASK                        0x40000000
#define _IFS1_DMA2IF_LENGTH                      0x00000001

#define _IFS1_DMA3IF_POSITION                    0x0000001F
#define _IFS1_DMA3IF_MASK                        0x80000000
#define _IFS1_DMA3IF_LENGTH                      0x00000001

#define _IFS1_w_POSITION                         0x00000000
#define _IFS1_w_MASK                             0xFFFFFFFF
#define _IFS1_w_LENGTH                           0x00000020

#define _IEC0_CTIE_POSITION                      0x00000000
#define _IEC0_CTIE_MASK                          0x00000001
#define _IEC0_CTIE_LENGTH                        0x00000001

#define _IEC0_CS0IE_POSITION                     0x00000001
#define _IEC0_CS0IE_MASK                         0x00000002
#define _IEC0_CS0IE_LENGTH                       0x00000001

#define _IEC0_CS1IE_POSITION                     0x00000002
#define _IEC0_CS1IE_MASK                         0x00000004
#define _IEC0_CS1IE_LENGTH                       0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000003
#define _IEC0_INT0IE_MASK                        0x00000008
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_T1IE_POSITION                      0x00000004
#define _IEC0_T1IE_MASK                          0x00000010
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_IC1EIE_POSITION                    0x00000005
#define _IEC0_IC1EIE_MASK                        0x00000020
#define _IEC0_IC1EIE_LENGTH                      0x00000001

#define _IEC0_IC1IE_POSITION                     0x00000006
#define _IEC0_IC1IE_MASK                         0x00000040
#define _IEC0_IC1IE_LENGTH                       0x00000001

#define _IEC0_OC1IE_POSITION                     0x00000007
#define _IEC0_OC1IE_MASK                         0x00000080
#define _IEC0_OC1IE_LENGTH                       0x00000001

#define _IEC0_INT1IE_POSITION                    0x00000008
#define _IEC0_INT1IE_MASK                        0x00000100
#define _IEC0_INT1IE_LENGTH                      0x00000001

#define _IEC0_T2IE_POSITION                      0x00000009
#define _IEC0_T2IE_MASK                          0x00000200
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_IC2EIE_POSITION                    0x0000000A
#define _IEC0_IC2EIE_MASK                        0x00000400
#define _IEC0_IC2EIE_LENGTH                      0x00000001

#define _IEC0_IC2IE_POSITION                     0x0000000B
#define _IEC0_IC2IE_MASK                         0x00000800
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x0000000C
#define _IEC0_OC2IE_MASK                         0x00001000
#define _IEC0_OC2IE_LENGTH                       0x00000001

#define _IEC0_INT2IE_POSITION                    0x0000000D
#define _IEC0_INT2IE_MASK                        0x00002000
#define _IEC0_INT2IE_LENGTH                      0x00000001

#define _IEC0_T3IE_POSITION                      0x0000000E
#define _IEC0_T3IE_MASK                          0x00004000
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_IC3EIE_POSITION                    0x0000000F
#define _IEC0_IC3EIE_MASK                        0x00008000
#define _IEC0_IC3EIE_LENGTH                      0x00000001

#define _IEC0_IC3IE_POSITION                     0x00000010
#define _IEC0_IC3IE_MASK                         0x00010000
#define _IEC0_IC3IE_LENGTH                       0x00000001

#define _IEC0_OC3IE_POSITION                     0x00000011
#define _IEC0_OC3IE_MASK                         0x00020000
#define _IEC0_OC3IE_LENGTH                       0x00000001

#define _IEC0_INT3IE_POSITION                    0x00000012
#define _IEC0_INT3IE_MASK                        0x00040000
#define _IEC0_INT3IE_LENGTH                      0x00000001

#define _IEC0_T4IE_POSITION                      0x00000013
#define _IEC0_T4IE_MASK                          0x00080000
#define _IEC0_T4IE_LENGTH                        0x00000001

#define _IEC0_IC4EIE_POSITION                    0x00000014
#define _IEC0_IC4EIE_MASK                        0x00100000
#define _IEC0_IC4EIE_LENGTH                      0x00000001

#define _IEC0_IC4IE_POSITION                     0x00000015
#define _IEC0_IC4IE_MASK                         0x00200000
#define _IEC0_IC4IE_LENGTH                       0x00000001

#define _IEC0_OC4IE_POSITION                     0x00000016
#define _IEC0_OC4IE_MASK                         0x00400000
#define _IEC0_OC4IE_LENGTH                       0x00000001

#define _IEC0_INT4IE_POSITION                    0x00000017
#define _IEC0_INT4IE_MASK                        0x00800000
#define _IEC0_INT4IE_LENGTH                      0x00000001

#define _IEC0_T5IE_POSITION                      0x00000018
#define _IEC0_T5IE_MASK                          0x01000000
#define _IEC0_T5IE_LENGTH                        0x00000001

#define _IEC0_IC5EIE_POSITION                    0x00000019
#define _IEC0_IC5EIE_MASK                        0x02000000
#define _IEC0_IC5EIE_LENGTH                      0x00000001

#define _IEC0_IC5IE_POSITION                     0x0000001A
#define _IEC0_IC5IE_MASK                         0x04000000
#define _IEC0_IC5IE_LENGTH                       0x00000001

#define _IEC0_OC5IE_POSITION                     0x0000001B
#define _IEC0_OC5IE_MASK                         0x08000000
#define _IEC0_OC5IE_LENGTH                       0x00000001

#define _IEC0_AD1IE_POSITION                     0x0000001C
#define _IEC0_AD1IE_MASK                         0x10000000
#define _IEC0_AD1IE_LENGTH                       0x00000001

#define _IEC0_FSCMIE_POSITION                    0x0000001D
#define _IEC0_FSCMIE_MASK                        0x20000000
#define _IEC0_FSCMIE_LENGTH                      0x00000001

#define _IEC0_RTCCIE_POSITION                    0x0000001E
#define _IEC0_RTCCIE_MASK                        0x40000000
#define _IEC0_RTCCIE_LENGTH                      0x00000001

#define _IEC0_FCEIE_POSITION                     0x0000001F
#define _IEC0_FCEIE_MASK                         0x80000000
#define _IEC0_FCEIE_LENGTH                       0x00000001

#define _IEC0_w_POSITION                         0x00000000
#define _IEC0_w_MASK                             0xFFFFFFFF
#define _IEC0_w_LENGTH                           0x00000020

#define _IEC1_CMP1IE_POSITION                    0x00000000
#define _IEC1_CMP1IE_MASK                        0x00000001
#define _IEC1_CMP1IE_LENGTH                      0x00000001

#define _IEC1_CMP2IE_POSITION                    0x00000001
#define _IEC1_CMP2IE_MASK                        0x00000002
#define _IEC1_CMP2IE_LENGTH                      0x00000001

#define _IEC1_CMP3IE_POSITION                    0x00000002
#define _IEC1_CMP3IE_MASK                        0x00000004
#define _IEC1_CMP3IE_LENGTH                      0x00000001

#define _IEC1_USBIE_POSITION                     0x00000003
#define _IEC1_USBIE_MASK                         0x00000008
#define _IEC1_USBIE_LENGTH                       0x00000001

#define _IEC1_SPI1EIE_POSITION                   0x00000004
#define _IEC1_SPI1EIE_MASK                       0x00000010
#define _IEC1_SPI1EIE_LENGTH                     0x00000001

#define _IEC1_SPI1RXIE_POSITION                  0x00000005
#define _IEC1_SPI1RXIE_MASK                      0x00000020
#define _IEC1_SPI1RXIE_LENGTH                    0x00000001

#define _IEC1_SPI1TXIE_POSITION                  0x00000006
#define _IEC1_SPI1TXIE_MASK                      0x00000040
#define _IEC1_SPI1TXIE_LENGTH                    0x00000001

#define _IEC1_U1EIE_POSITION                     0x00000007
#define _IEC1_U1EIE_MASK                         0x00000080
#define _IEC1_U1EIE_LENGTH                       0x00000001

#define _IEC1_U1RXIE_POSITION                    0x00000008
#define _IEC1_U1RXIE_MASK                        0x00000100
#define _IEC1_U1RXIE_LENGTH                      0x00000001

#define _IEC1_U1TXIE_POSITION                    0x00000009
#define _IEC1_U1TXIE_MASK                        0x00000200
#define _IEC1_U1TXIE_LENGTH                      0x00000001

#define _IEC1_I2C1BIE_POSITION                   0x0000000A
#define _IEC1_I2C1BIE_MASK                       0x00000400
#define _IEC1_I2C1BIE_LENGTH                     0x00000001

#define _IEC1_I2C1SIE_POSITION                   0x0000000B
#define _IEC1_I2C1SIE_MASK                       0x00000800
#define _IEC1_I2C1SIE_LENGTH                     0x00000001

#define _IEC1_I2C1MIE_POSITION                   0x0000000C
#define _IEC1_I2C1MIE_MASK                       0x00001000
#define _IEC1_I2C1MIE_LENGTH                     0x00000001

#define _IEC1_CNAIE_POSITION                     0x0000000D
#define _IEC1_CNAIE_MASK                         0x00002000
#define _IEC1_CNAIE_LENGTH                       0x00000001

#define _IEC1_CNBIE_POSITION                     0x0000000E
#define _IEC1_CNBIE_MASK                         0x00004000
#define _IEC1_CNBIE_LENGTH                       0x00000001

#define _IEC1_CNCIE_POSITION                     0x0000000F
#define _IEC1_CNCIE_MASK                         0x00008000
#define _IEC1_CNCIE_LENGTH                       0x00000001

#define _IEC1_PMPIE_POSITION                     0x00000010
#define _IEC1_PMPIE_MASK                         0x00010000
#define _IEC1_PMPIE_LENGTH                       0x00000001

#define _IEC1_PMPEIE_POSITION                    0x00000011
#define _IEC1_PMPEIE_MASK                        0x00020000
#define _IEC1_PMPEIE_LENGTH                      0x00000001

#define _IEC1_SPI2EIE_POSITION                   0x00000012
#define _IEC1_SPI2EIE_MASK                       0x00040000
#define _IEC1_SPI2EIE_LENGTH                     0x00000001

#define _IEC1_SPI2RXIE_POSITION                  0x00000013
#define _IEC1_SPI2RXIE_MASK                      0x00080000
#define _IEC1_SPI2RXIE_LENGTH                    0x00000001

#define _IEC1_SPI2TXIE_POSITION                  0x00000014
#define _IEC1_SPI2TXIE_MASK                      0x00100000
#define _IEC1_SPI2TXIE_LENGTH                    0x00000001

#define _IEC1_U2EIE_POSITION                     0x00000015
#define _IEC1_U2EIE_MASK                         0x00200000
#define _IEC1_U2EIE_LENGTH                       0x00000001

#define _IEC1_U2RXIE_POSITION                    0x00000016
#define _IEC1_U2RXIE_MASK                        0x00400000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x00000017
#define _IEC1_U2TXIE_MASK                        0x00800000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC1_I2C2BIE_POSITION                   0x00000018
#define _IEC1_I2C2BIE_MASK                       0x01000000
#define _IEC1_I2C2BIE_LENGTH                     0x00000001

#define _IEC1_I2C2SIE_POSITION                   0x00000019
#define _IEC1_I2C2SIE_MASK                       0x02000000
#define _IEC1_I2C2SIE_LENGTH                     0x00000001

#define _IEC1_I2C2MIE_POSITION                   0x0000001A
#define _IEC1_I2C2MIE_MASK                       0x04000000
#define _IEC1_I2C2MIE_LENGTH                     0x00000001

#define _IEC1_CTMUIE_POSITION                    0x0000001B
#define _IEC1_CTMUIE_MASK                        0x08000000
#define _IEC1_CTMUIE_LENGTH                      0x00000001

#define _IEC1_DMA0IE_POSITION                    0x0000001C
#define _IEC1_DMA0IE_MASK                        0x10000000
#define _IEC1_DMA0IE_LENGTH                      0x00000001

#define _IEC1_DMA1IE_POSITION                    0x0000001D
#define _IEC1_DMA1IE_MASK                        0x20000000
#define _IEC1_DMA1IE_LENGTH                      0x00000001

#define _IEC1_DMA2IE_POSITION                    0x0000001E
#define _IEC1_DMA2IE_MASK                        0x40000000
#define _IEC1_DMA2IE_LENGTH                      0x00000001

#define _IEC1_DMA3IE_POSITION                    0x0000001F
#define _IEC1_DMA3IE_MASK                        0x80000000
#define _IEC1_DMA3IE_LENGTH                      0x00000001

#define _IEC1_w_POSITION                         0x00000000
#define _IEC1_w_MASK                             0xFFFFFFFF
#define _IEC1_w_LENGTH                           0x00000020

#define _IPC0_CTIS_POSITION                      0x00000000
#define _IPC0_CTIS_MASK                          0x00000003
#define _IPC0_CTIS_LENGTH                        0x00000002

#define _IPC0_CTIP_POSITION                      0x00000002
#define _IPC0_CTIP_MASK                          0x0000001C
#define _IPC0_CTIP_LENGTH                        0x00000003

#define _IPC0_CS0IS_POSITION                     0x00000008
#define _IPC0_CS0IS_MASK                         0x00000300
#define _IPC0_CS0IS_LENGTH                       0x00000002

#define _IPC0_CS0IP_POSITION                     0x0000000A
#define _IPC0_CS0IP_MASK                         0x00001C00
#define _IPC0_CS0IP_LENGTH                       0x00000003

#define _IPC0_CS1IS_POSITION                     0x00000010
#define _IPC0_CS1IS_MASK                         0x00030000
#define _IPC0_CS1IS_LENGTH                       0x00000002

#define _IPC0_CS1IP_POSITION                     0x00000012
#define _IPC0_CS1IP_MASK                         0x001C0000
#define _IPC0_CS1IP_LENGTH                       0x00000003

#define _IPC0_INT0IS_POSITION                    0x00000018
#define _IPC0_INT0IS_MASK                        0x03000000
#define _IPC0_INT0IS_LENGTH                      0x00000002

#define _IPC0_INT0IP_POSITION                    0x0000001A
#define _IPC0_INT0IP_MASK                        0x1C000000
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC0_w_POSITION                         0x00000000
#define _IPC0_w_MASK                             0xFFFFFFFF
#define _IPC0_w_LENGTH                           0x00000020

#define _IPC1_T1IS_POSITION                      0x00000000
#define _IPC1_T1IS_MASK                          0x00000003
#define _IPC1_T1IS_LENGTH                        0x00000002

#define _IPC1_T1IP_POSITION                      0x00000002
#define _IPC1_T1IP_MASK                          0x0000001C
#define _IPC1_T1IP_LENGTH                        0x00000003

#define _IPC1_IC1IS_POSITION                     0x00000008
#define _IPC1_IC1IS_MASK                         0x00000300
#define _IPC1_IC1IS_LENGTH                       0x00000002

#define _IPC1_IC1IP_POSITION                     0x0000000A
#define _IPC1_IC1IP_MASK                         0x00001C00
#define _IPC1_IC1IP_LENGTH                       0x00000003

#define _IPC1_OC1IS_POSITION                     0x00000010
#define _IPC1_OC1IS_MASK                         0x00030000
#define _IPC1_OC1IS_LENGTH                       0x00000002

#define _IPC1_OC1IP_POSITION                     0x00000012
#define _IPC1_OC1IP_MASK                         0x001C0000
#define _IPC1_OC1IP_LENGTH                       0x00000003

#define _IPC1_INT1IS_POSITION                    0x00000018
#define _IPC1_INT1IS_MASK                        0x03000000
#define _IPC1_INT1IS_LENGTH                      0x00000002

#define _IPC1_INT1IP_POSITION                    0x0000001A
#define _IPC1_INT1IP_MASK                        0x1C000000
#define _IPC1_INT1IP_LENGTH                      0x00000003

#define _IPC1_w_POSITION                         0x00000000
#define _IPC1_w_MASK                             0xFFFFFFFF
#define _IPC1_w_LENGTH                           0x00000020

#define _IPC2_T2IS_POSITION                      0x00000000
#define _IPC2_T2IS_MASK                          0x00000003
#define _IPC2_T2IS_LENGTH                        0x00000002

#define _IPC2_T2IP_POSITION                      0x00000002
#define _IPC2_T2IP_MASK                          0x0000001C
#define _IPC2_T2IP_LENGTH                        0x00000003

#define _IPC2_IC2IS_POSITION                     0x00000008
#define _IPC2_IC2IS_MASK                         0x00000300
#define _IPC2_IC2IS_LENGTH                       0x00000002

#define _IPC2_IC2IP_POSITION                     0x0000000A
#define _IPC2_IC2IP_MASK                         0x00001C00
#define _IPC2_IC2IP_LENGTH                       0x00000003

#define _IPC2_OC2IS_POSITION                     0x00000010
#define _IPC2_OC2IS_MASK                         0x00030000
#define _IPC2_OC2IS_LENGTH                       0x00000002

#define _IPC2_OC2IP_POSITION                     0x00000012
#define _IPC2_OC2IP_MASK                         0x001C0000
#define _IPC2_OC2IP_LENGTH                       0x00000003

#define _IPC2_INT2IS_POSITION                    0x00000018
#define _IPC2_INT2IS_MASK                        0x03000000
#define _IPC2_INT2IS_LENGTH                      0x00000002

#define _IPC2_INT2IP_POSITION                    0x0000001A
#define _IPC2_INT2IP_MASK                        0x1C000000
#define _IPC2_INT2IP_LENGTH                      0x00000003

#define _IPC2_w_POSITION                         0x00000000
#define _IPC2_w_MASK                             0xFFFFFFFF
#define _IPC2_w_LENGTH                           0x00000020

#define _IPC3_T3IS_POSITION                      0x00000000
#define _IPC3_T3IS_MASK                          0x00000003
#define _IPC3_T3IS_LENGTH                        0x00000002

#define _IPC3_T3IP_POSITION                      0x00000002
#define _IPC3_T3IP_MASK                          0x0000001C
#define _IPC3_T3IP_LENGTH                        0x00000003

#define _IPC3_IC3IS_POSITION                     0x00000008
#define _IPC3_IC3IS_MASK                         0x00000300
#define _IPC3_IC3IS_LENGTH                       0x00000002

#define _IPC3_IC3IP_POSITION                     0x0000000A
#define _IPC3_IC3IP_MASK                         0x00001C00
#define _IPC3_IC3IP_LENGTH                       0x00000003

#define _IPC3_OC3IS_POSITION                     0x00000010
#define _IPC3_OC3IS_MASK                         0x00030000
#define _IPC3_OC3IS_LENGTH                       0x00000002

#define _IPC3_OC3IP_POSITION                     0x00000012
#define _IPC3_OC3IP_MASK                         0x001C0000
#define _IPC3_OC3IP_LENGTH                       0x00000003

#define _IPC3_INT3IS_POSITION                    0x00000018
#define _IPC3_INT3IS_MASK                        0x03000000
#define _IPC3_INT3IS_LENGTH                      0x00000002

#define _IPC3_INT3IP_POSITION                    0x0000001A
#define _IPC3_INT3IP_MASK                        0x1C000000
#define _IPC3_INT3IP_LENGTH                      0x00000003

#define _IPC3_w_POSITION                         0x00000000
#define _IPC3_w_MASK                             0xFFFFFFFF
#define _IPC3_w_LENGTH                           0x00000020

#define _IPC4_T4IS_POSITION                      0x00000000
#define _IPC4_T4IS_MASK                          0x00000003
#define _IPC4_T4IS_LENGTH                        0x00000002

#define _IPC4_T4IP_POSITION                      0x00000002
#define _IPC4_T4IP_MASK                          0x0000001C
#define _IPC4_T4IP_LENGTH                        0x00000003

#define _IPC4_IC4IS_POSITION                     0x00000008
#define _IPC4_IC4IS_MASK                         0x00000300
#define _IPC4_IC4IS_LENGTH                       0x00000002

#define _IPC4_IC4IP_POSITION                     0x0000000A
#define _IPC4_IC4IP_MASK                         0x00001C00
#define _IPC4_IC4IP_LENGTH                       0x00000003

#define _IPC4_OC4IS_POSITION                     0x00000010
#define _IPC4_OC4IS_MASK                         0x00030000
#define _IPC4_OC4IS_LENGTH                       0x00000002

#define _IPC4_OC4IP_POSITION                     0x00000012
#define _IPC4_OC4IP_MASK                         0x001C0000
#define _IPC4_OC4IP_LENGTH                       0x00000003

#define _IPC4_INT4IS_POSITION                    0x00000018
#define _IPC4_INT4IS_MASK                        0x03000000
#define _IPC4_INT4IS_LENGTH                      0x00000002

#define _IPC4_INT4IP_POSITION                    0x0000001A
#define _IPC4_INT4IP_MASK                        0x1C000000
#define _IPC4_INT4IP_LENGTH                      0x00000003

#define _IPC4_w_POSITION                         0x00000000
#define _IPC4_w_MASK                             0xFFFFFFFF
#define _IPC4_w_LENGTH                           0x00000020

#define _IPC5_T5IS_POSITION                      0x00000000
#define _IPC5_T5IS_MASK                          0x00000003
#define _IPC5_T5IS_LENGTH                        0x00000002

#define _IPC5_T5IP_POSITION                      0x00000002
#define _IPC5_T5IP_MASK                          0x0000001C
#define _IPC5_T5IP_LENGTH                        0x00000003

#define _IPC5_IC5IS_POSITION                     0x00000008
#define _IPC5_IC5IS_MASK                         0x00000300
#define _IPC5_IC5IS_LENGTH                       0x00000002

#define _IPC5_IC5IP_POSITION                     0x0000000A
#define _IPC5_IC5IP_MASK                         0x00001C00
#define _IPC5_IC5IP_LENGTH                       0x00000003

#define _IPC5_OC5IS_POSITION                     0x00000010
#define _IPC5_OC5IS_MASK                         0x00030000
#define _IPC5_OC5IS_LENGTH                       0x00000002

#define _IPC5_OC5IP_POSITION                     0x00000012
#define _IPC5_OC5IP_MASK                         0x001C0000
#define _IPC5_OC5IP_LENGTH                       0x00000003

#define _IPC5_AD1IS_POSITION                     0x00000018
#define _IPC5_AD1IS_MASK                         0x03000000
#define _IPC5_AD1IS_LENGTH                       0x00000002

#define _IPC5_AD1IP_POSITION                     0x0000001A
#define _IPC5_AD1IP_MASK                         0x1C000000
#define _IPC5_AD1IP_LENGTH                       0x00000003

#define _IPC5_w_POSITION                         0x00000000
#define _IPC5_w_MASK                             0xFFFFFFFF
#define _IPC5_w_LENGTH                           0x00000020

#define _IPC6_FSCMIS_POSITION                    0x00000000
#define _IPC6_FSCMIS_MASK                        0x00000003
#define _IPC6_FSCMIS_LENGTH                      0x00000002

#define _IPC6_FSCMIP_POSITION                    0x00000002
#define _IPC6_FSCMIP_MASK                        0x0000001C
#define _IPC6_FSCMIP_LENGTH                      0x00000003

#define _IPC6_RTCCIS_POSITION                    0x00000008
#define _IPC6_RTCCIS_MASK                        0x00000300
#define _IPC6_RTCCIS_LENGTH                      0x00000002

#define _IPC6_RTCCIP_POSITION                    0x0000000A
#define _IPC6_RTCCIP_MASK                        0x00001C00
#define _IPC6_RTCCIP_LENGTH                      0x00000003

#define _IPC6_FCEIS_POSITION                     0x00000010
#define _IPC6_FCEIS_MASK                         0x00030000
#define _IPC6_FCEIS_LENGTH                       0x00000002

#define _IPC6_FCEIP_POSITION                     0x00000012
#define _IPC6_FCEIP_MASK                         0x001C0000
#define _IPC6_FCEIP_LENGTH                       0x00000003

#define _IPC6_CMP1IS_POSITION                    0x00000018
#define _IPC6_CMP1IS_MASK                        0x03000000
#define _IPC6_CMP1IS_LENGTH                      0x00000002

#define _IPC6_CMP1IP_POSITION                    0x0000001A
#define _IPC6_CMP1IP_MASK                        0x1C000000
#define _IPC6_CMP1IP_LENGTH                      0x00000003

#define _IPC6_w_POSITION                         0x00000000
#define _IPC6_w_MASK                             0xFFFFFFFF
#define _IPC6_w_LENGTH                           0x00000020

#define _IPC7_CMP2IS_POSITION                    0x00000000
#define _IPC7_CMP2IS_MASK                        0x00000003
#define _IPC7_CMP2IS_LENGTH                      0x00000002

#define _IPC7_CMP2IP_POSITION                    0x00000002
#define _IPC7_CMP2IP_MASK                        0x0000001C
#define _IPC7_CMP2IP_LENGTH                      0x00000003

#define _IPC7_CMP3IS_POSITION                    0x00000008
#define _IPC7_CMP3IS_MASK                        0x00000300
#define _IPC7_CMP3IS_LENGTH                      0x00000002

#define _IPC7_CMP3IP_POSITION                    0x0000000A
#define _IPC7_CMP3IP_MASK                        0x00001C00
#define _IPC7_CMP3IP_LENGTH                      0x00000003

#define _IPC7_USBIS_POSITION                     0x00000010
#define _IPC7_USBIS_MASK                         0x00030000
#define _IPC7_USBIS_LENGTH                       0x00000002

#define _IPC7_USBIP_POSITION                     0x00000012
#define _IPC7_USBIP_MASK                         0x001C0000
#define _IPC7_USBIP_LENGTH                       0x00000003

#define _IPC7_SPI1IS_POSITION                    0x00000018
#define _IPC7_SPI1IS_MASK                        0x03000000
#define _IPC7_SPI1IS_LENGTH                      0x00000002

#define _IPC7_SPI1IP_POSITION                    0x0000001A
#define _IPC7_SPI1IP_MASK                        0x1C000000
#define _IPC7_SPI1IP_LENGTH                      0x00000003

#define _IPC7_w_POSITION                         0x00000000
#define _IPC7_w_MASK                             0xFFFFFFFF
#define _IPC7_w_LENGTH                           0x00000020

#define _IPC8_U1IS_POSITION                      0x00000000
#define _IPC8_U1IS_MASK                          0x00000003
#define _IPC8_U1IS_LENGTH                        0x00000002

#define _IPC8_U1IP_POSITION                      0x00000002
#define _IPC8_U1IP_MASK                          0x0000001C
#define _IPC8_U1IP_LENGTH                        0x00000003

#define _IPC8_I2C1IS_POSITION                    0x00000008
#define _IPC8_I2C1IS_MASK                        0x00000300
#define _IPC8_I2C1IS_LENGTH                      0x00000002

#define _IPC8_I2C1IP_POSITION                    0x0000000A
#define _IPC8_I2C1IP_MASK                        0x00001C00
#define _IPC8_I2C1IP_LENGTH                      0x00000003

#define _IPC8_CNIS_POSITION                      0x00000010
#define _IPC8_CNIS_MASK                          0x00030000
#define _IPC8_CNIS_LENGTH                        0x00000002

#define _IPC8_CNIP_POSITION                      0x00000012
#define _IPC8_CNIP_MASK                          0x001C0000
#define _IPC8_CNIP_LENGTH                        0x00000003

#define _IPC8_PMPIS_POSITION                     0x00000018
#define _IPC8_PMPIS_MASK                         0x03000000
#define _IPC8_PMPIS_LENGTH                       0x00000002

#define _IPC8_PMPIP_POSITION                     0x0000001A
#define _IPC8_PMPIP_MASK                         0x1C000000
#define _IPC8_PMPIP_LENGTH                       0x00000003

#define _IPC8_w_POSITION                         0x00000000
#define _IPC8_w_MASK                             0xFFFFFFFF
#define _IPC8_w_LENGTH                           0x00000020

#define _IPC9_SPI2IS_POSITION                    0x00000000
#define _IPC9_SPI2IS_MASK                        0x00000003
#define _IPC9_SPI2IS_LENGTH                      0x00000002

#define _IPC9_SPI2IP_POSITION                    0x00000002
#define _IPC9_SPI2IP_MASK                        0x0000001C
#define _IPC9_SPI2IP_LENGTH                      0x00000003

#define _IPC9_U2IS_POSITION                      0x00000008
#define _IPC9_U2IS_MASK                          0x00000300
#define _IPC9_U2IS_LENGTH                        0x00000002

#define _IPC9_U2IP_POSITION                      0x0000000A
#define _IPC9_U2IP_MASK                          0x00001C00
#define _IPC9_U2IP_LENGTH                        0x00000003

#define _IPC9_I2C2IS_POSITION                    0x00000010
#define _IPC9_I2C2IS_MASK                        0x00030000
#define _IPC9_I2C2IS_LENGTH                      0x00000002

#define _IPC9_I2C2IP_POSITION                    0x00000012
#define _IPC9_I2C2IP_MASK                        0x001C0000
#define _IPC9_I2C2IP_LENGTH                      0x00000003

#define _IPC9_CTMUIS_POSITION                    0x00000018
#define _IPC9_CTMUIS_MASK                        0x03000000
#define _IPC9_CTMUIS_LENGTH                      0x00000002

#define _IPC9_CTMUIP_POSITION                    0x0000001A
#define _IPC9_CTMUIP_MASK                        0x1C000000
#define _IPC9_CTMUIP_LENGTH                      0x00000003

#define _IPC9_w_POSITION                         0x00000000
#define _IPC9_w_MASK                             0xFFFFFFFF
#define _IPC9_w_LENGTH                           0x00000020

#define _IPC10_DMA0IS_POSITION                   0x00000000
#define _IPC10_DMA0IS_MASK                       0x00000003
#define _IPC10_DMA0IS_LENGTH                     0x00000002

#define _IPC10_DMA0IP_POSITION                   0x00000002
#define _IPC10_DMA0IP_MASK                       0x0000001C
#define _IPC10_DMA0IP_LENGTH                     0x00000003

#define _IPC10_DMA1IS_POSITION                   0x00000008
#define _IPC10_DMA1IS_MASK                       0x00000300
#define _IPC10_DMA1IS_LENGTH                     0x00000002

#define _IPC10_DMA1IP_POSITION                   0x0000000A
#define _IPC10_DMA1IP_MASK                       0x00001C00
#define _IPC10_DMA1IP_LENGTH                     0x00000003

#define _IPC10_DMA2IS_POSITION                   0x00000010
#define _IPC10_DMA2IS_MASK                       0x00030000
#define _IPC10_DMA2IS_LENGTH                     0x00000002

#define _IPC10_DMA2IP_POSITION                   0x00000012
#define _IPC10_DMA2IP_MASK                       0x001C0000
#define _IPC10_DMA2IP_LENGTH                     0x00000003

#define _IPC10_DMA3IS_POSITION                   0x00000018
#define _IPC10_DMA3IS_MASK                       0x03000000
#define _IPC10_DMA3IS_LENGTH                     0x00000002

#define _IPC10_DMA3IP_POSITION                   0x0000001A
#define _IPC10_DMA3IP_MASK                       0x1C000000
#define _IPC10_DMA3IP_LENGTH                     0x00000003

#define _IPC10_w_POSITION                        0x00000000
#define _IPC10_w_MASK                            0xFFFFFFFF
#define _IPC10_w_LENGTH                          0x00000020

#define _BMXCON_BMXARB_POSITION                  0x00000000
#define _BMXCON_BMXARB_MASK                      0x00000007
#define _BMXCON_BMXARB_LENGTH                    0x00000003

#define _BMXCON_BMXWSDRM_POSITION                0x00000006
#define _BMXCON_BMXWSDRM_MASK                    0x00000040
#define _BMXCON_BMXWSDRM_LENGTH                  0x00000001

#define _BMXCON_BMXERRIS_POSITION                0x00000010
#define _BMXCON_BMXERRIS_MASK                    0x00010000
#define _BMXCON_BMXERRIS_LENGTH                  0x00000001

#define _BMXCON_BMXERRDS_POSITION                0x00000011
#define _BMXCON_BMXERRDS_MASK                    0x00020000
#define _BMXCON_BMXERRDS_LENGTH                  0x00000001

#define _BMXCON_BMXERRDMA_POSITION               0x00000012
#define _BMXCON_BMXERRDMA_MASK                   0x00040000
#define _BMXCON_BMXERRDMA_LENGTH                 0x00000001

#define _BMXCON_BMXERRICD_POSITION               0x00000013
#define _BMXCON_BMXERRICD_MASK                   0x00080000
#define _BMXCON_BMXERRICD_LENGTH                 0x00000001

#define _BMXCON_BMXERRIXI_POSITION               0x00000014
#define _BMXCON_BMXERRIXI_MASK                   0x00100000
#define _BMXCON_BMXERRIXI_LENGTH                 0x00000001

#define _BMXCON_BMXCHEDMA_POSITION               0x0000001A
#define _BMXCON_BMXCHEDMA_MASK                   0x04000000
#define _BMXCON_BMXCHEDMA_LENGTH                 0x00000001

#define _BMXCON_w_POSITION                       0x00000000
#define _BMXCON_w_MASK                           0xFFFFFFFF
#define _BMXCON_w_LENGTH                         0x00000020

#define _DMACON_DMABUSY_POSITION                 0x0000000B
#define _DMACON_DMABUSY_MASK                     0x00000800
#define _DMACON_DMABUSY_LENGTH                   0x00000001

#define _DMACON_SUSPEND_POSITION                 0x0000000C
#define _DMACON_SUSPEND_MASK                     0x00001000
#define _DMACON_SUSPEND_LENGTH                   0x00000001

#define _DMACON_ON_POSITION                      0x0000000F
#define _DMACON_ON_MASK                          0x00008000
#define _DMACON_ON_LENGTH                        0x00000001

#define _DMACON_w_POSITION                       0x00000000
#define _DMACON_w_MASK                           0xFFFFFFFF
#define _DMACON_w_LENGTH                         0x00000020

#define _DMASTAT_DMACH_POSITION                  0x00000000
#define _DMASTAT_DMACH_MASK                      0x00000007
#define _DMASTAT_DMACH_LENGTH                    0x00000003

#define _DMASTAT_RDWR_POSITION                   0x00000003
#define _DMASTAT_RDWR_MASK                       0x00000008
#define _DMASTAT_RDWR_LENGTH                     0x00000001

#define _DMASTAT_w_POSITION                      0x00000000
#define _DMASTAT_w_MASK                          0xFFFFFFFF
#define _DMASTAT_w_LENGTH                        0x00000020

#define _DCRCCON_CRCCH_POSITION                  0x00000000
#define _DCRCCON_CRCCH_MASK                      0x00000007
#define _DCRCCON_CRCCH_LENGTH                    0x00000003

#define _DCRCCON_CRCTYP_POSITION                 0x00000005
#define _DCRCCON_CRCTYP_MASK                     0x00000020
#define _DCRCCON_CRCTYP_LENGTH                   0x00000001

#define _DCRCCON_CRCAPP_POSITION                 0x00000006
#define _DCRCCON_CRCAPP_MASK                     0x00000040
#define _DCRCCON_CRCAPP_LENGTH                   0x00000001

#define _DCRCCON_CRCEN_POSITION                  0x00000007
#define _DCRCCON_CRCEN_MASK                      0x00000080
#define _DCRCCON_CRCEN_LENGTH                    0x00000001

#define _DCRCCON_PLEN_POSITION                   0x00000008
#define _DCRCCON_PLEN_MASK                       0x00001F00
#define _DCRCCON_PLEN_LENGTH                     0x00000005

#define _DCRCCON_BITO_POSITION                   0x00000018
#define _DCRCCON_BITO_MASK                       0x01000000
#define _DCRCCON_BITO_LENGTH                     0x00000001

#define _DCRCCON_WBO_POSITION                    0x0000001B
#define _DCRCCON_WBO_MASK                        0x08000000
#define _DCRCCON_WBO_LENGTH                      0x00000001

#define _DCRCCON_BYTO_POSITION                   0x0000001C
#define _DCRCCON_BYTO_MASK                       0x30000000
#define _DCRCCON_BYTO_LENGTH                     0x00000002

#define _DCRCCON_w_POSITION                      0x00000000
#define _DCRCCON_w_MASK                          0xFFFFFFFF
#define _DCRCCON_w_LENGTH                        0x00000020

#define _DCH0CON_CHPRI_POSITION                  0x00000000
#define _DCH0CON_CHPRI_MASK                      0x00000003
#define _DCH0CON_CHPRI_LENGTH                    0x00000002

#define _DCH0CON_CHEDET_POSITION                 0x00000002
#define _DCH0CON_CHEDET_MASK                     0x00000004
#define _DCH0CON_CHEDET_LENGTH                   0x00000001

#define _DCH0CON_CHAEN_POSITION                  0x00000004
#define _DCH0CON_CHAEN_MASK                      0x00000010
#define _DCH0CON_CHAEN_LENGTH                    0x00000001

#define _DCH0CON_CHCHN_POSITION                  0x00000005
#define _DCH0CON_CHCHN_MASK                      0x00000020
#define _DCH0CON_CHCHN_LENGTH                    0x00000001

#define _DCH0CON_CHAED_POSITION                  0x00000006
#define _DCH0CON_CHAED_MASK                      0x00000040
#define _DCH0CON_CHAED_LENGTH                    0x00000001

#define _DCH0CON_CHEN_POSITION                   0x00000007
#define _DCH0CON_CHEN_MASK                       0x00000080
#define _DCH0CON_CHEN_LENGTH                     0x00000001

#define _DCH0CON_CHCHNS_POSITION                 0x00000008
#define _DCH0CON_CHCHNS_MASK                     0x00000100
#define _DCH0CON_CHCHNS_LENGTH                   0x00000001

#define _DCH0CON_CHBUSY_POSITION                 0x0000000F
#define _DCH0CON_CHBUSY_MASK                     0x00008000
#define _DCH0CON_CHBUSY_LENGTH                   0x00000001

#define _DCH0CON_w_POSITION                      0x00000000
#define _DCH0CON_w_MASK                          0xFFFFFFFF
#define _DCH0CON_w_LENGTH                        0x00000020

#define _DCH0ECON_AIRQEN_POSITION                0x00000003
#define _DCH0ECON_AIRQEN_MASK                    0x00000008
#define _DCH0ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH0ECON_SIRQEN_POSITION                0x00000004
#define _DCH0ECON_SIRQEN_MASK                    0x00000010
#define _DCH0ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH0ECON_PATEN_POSITION                 0x00000005
#define _DCH0ECON_PATEN_MASK                     0x00000020
#define _DCH0ECON_PATEN_LENGTH                   0x00000001

#define _DCH0ECON_CABORT_POSITION                0x00000006
#define _DCH0ECON_CABORT_MASK                    0x00000040
#define _DCH0ECON_CABORT_LENGTH                  0x00000001

#define _DCH0ECON_CFORCE_POSITION                0x00000007
#define _DCH0ECON_CFORCE_MASK                    0x00000080
#define _DCH0ECON_CFORCE_LENGTH                  0x00000001

#define _DCH0ECON_CHSIRQ_POSITION                0x00000008
#define _DCH0ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH0ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH0ECON_CHAIRQ_POSITION                0x00000010
#define _DCH0ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH0ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH0ECON_w_POSITION                     0x00000000
#define _DCH0ECON_w_MASK                         0xFFFFFFFF
#define _DCH0ECON_w_LENGTH                       0x00000020

#define _DCH0INT_CHERIF_POSITION                 0x00000000
#define _DCH0INT_CHERIF_MASK                     0x00000001
#define _DCH0INT_CHERIF_LENGTH                   0x00000001

#define _DCH0INT_CHTAIF_POSITION                 0x00000001
#define _DCH0INT_CHTAIF_MASK                     0x00000002
#define _DCH0INT_CHTAIF_LENGTH                   0x00000001

#define _DCH0INT_CHCCIF_POSITION                 0x00000002
#define _DCH0INT_CHCCIF_MASK                     0x00000004
#define _DCH0INT_CHCCIF_LENGTH                   0x00000001

#define _DCH0INT_CHBCIF_POSITION                 0x00000003
#define _DCH0INT_CHBCIF_MASK                     0x00000008
#define _DCH0INT_CHBCIF_LENGTH                   0x00000001

#define _DCH0INT_CHDHIF_POSITION                 0x00000004
#define _DCH0INT_CHDHIF_MASK                     0x00000010
#define _DCH0INT_CHDHIF_LENGTH                   0x00000001

#define _DCH0INT_CHDDIF_POSITION                 0x00000005
#define _DCH0INT_CHDDIF_MASK                     0x00000020
#define _DCH0INT_CHDDIF_LENGTH                   0x00000001

#define _DCH0INT_CHSHIF_POSITION                 0x00000006
#define _DCH0INT_CHSHIF_MASK                     0x00000040
#define _DCH0INT_CHSHIF_LENGTH                   0x00000001

#define _DCH0INT_CHSDIF_POSITION                 0x00000007
#define _DCH0INT_CHSDIF_MASK                     0x00000080
#define _DCH0INT_CHSDIF_LENGTH                   0x00000001

#define _DCH0INT_CHERIE_POSITION                 0x00000010
#define _DCH0INT_CHERIE_MASK                     0x00010000
#define _DCH0INT_CHERIE_LENGTH                   0x00000001

#define _DCH0INT_CHTAIE_POSITION                 0x00000011
#define _DCH0INT_CHTAIE_MASK                     0x00020000
#define _DCH0INT_CHTAIE_LENGTH                   0x00000001

#define _DCH0INT_CHCCIE_POSITION                 0x00000012
#define _DCH0INT_CHCCIE_MASK                     0x00040000
#define _DCH0INT_CHCCIE_LENGTH                   0x00000001

#define _DCH0INT_CHBCIE_POSITION                 0x00000013
#define _DCH0INT_CHBCIE_MASK                     0x00080000
#define _DCH0INT_CHBCIE_LENGTH                   0x00000001

#define _DCH0INT_CHDHIE_POSITION                 0x00000014
#define _DCH0INT_CHDHIE_MASK                     0x00100000
#define _DCH0INT_CHDHIE_LENGTH                   0x00000001

#define _DCH0INT_CHDDIE_POSITION                 0x00000015
#define _DCH0INT_CHDDIE_MASK                     0x00200000
#define _DCH0INT_CHDDIE_LENGTH                   0x00000001

#define _DCH0INT_CHSHIE_POSITION                 0x00000016
#define _DCH0INT_CHSHIE_MASK                     0x00400000
#define _DCH0INT_CHSHIE_LENGTH                   0x00000001

#define _DCH0INT_CHSDIE_POSITION                 0x00000017
#define _DCH0INT_CHSDIE_MASK                     0x00800000
#define _DCH0INT_CHSDIE_LENGTH                   0x00000001

#define _DCH0INT_w_POSITION                      0x00000000
#define _DCH0INT_w_MASK                          0xFFFFFFFF
#define _DCH0INT_w_LENGTH                        0x00000020

#define _DCH0SSA_CHSSA_POSITION                  0x00000000
#define _DCH0SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH0SSA_CHSSA_LENGTH                    0x00000020

#define _DCH0DSA_CHDSA_POSITION                  0x00000000
#define _DCH0DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH0DSA_CHDSA_LENGTH                    0x00000020

#define _DCH1CON_CHPRI_POSITION                  0x00000000
#define _DCH1CON_CHPRI_MASK                      0x00000003
#define _DCH1CON_CHPRI_LENGTH                    0x00000002

#define _DCH1CON_CHEDET_POSITION                 0x00000002
#define _DCH1CON_CHEDET_MASK                     0x00000004
#define _DCH1CON_CHEDET_LENGTH                   0x00000001

#define _DCH1CON_CHAEN_POSITION                  0x00000004
#define _DCH1CON_CHAEN_MASK                      0x00000010
#define _DCH1CON_CHAEN_LENGTH                    0x00000001

#define _DCH1CON_CHCHN_POSITION                  0x00000005
#define _DCH1CON_CHCHN_MASK                      0x00000020
#define _DCH1CON_CHCHN_LENGTH                    0x00000001

#define _DCH1CON_CHAED_POSITION                  0x00000006
#define _DCH1CON_CHAED_MASK                      0x00000040
#define _DCH1CON_CHAED_LENGTH                    0x00000001

#define _DCH1CON_CHEN_POSITION                   0x00000007
#define _DCH1CON_CHEN_MASK                       0x00000080
#define _DCH1CON_CHEN_LENGTH                     0x00000001

#define _DCH1CON_CHCHNS_POSITION                 0x00000008
#define _DCH1CON_CHCHNS_MASK                     0x00000100
#define _DCH1CON_CHCHNS_LENGTH                   0x00000001

#define _DCH1CON_CHBUSY_POSITION                 0x0000000F
#define _DCH1CON_CHBUSY_MASK                     0x00008000
#define _DCH1CON_CHBUSY_LENGTH                   0x00000001

#define _DCH1CON_w_POSITION                      0x00000000
#define _DCH1CON_w_MASK                          0xFFFFFFFF
#define _DCH1CON_w_LENGTH                        0x00000020

#define _DCH1ECON_AIRQEN_POSITION                0x00000003
#define _DCH1ECON_AIRQEN_MASK                    0x00000008
#define _DCH1ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH1ECON_SIRQEN_POSITION                0x00000004
#define _DCH1ECON_SIRQEN_MASK                    0x00000010
#define _DCH1ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH1ECON_PATEN_POSITION                 0x00000005
#define _DCH1ECON_PATEN_MASK                     0x00000020
#define _DCH1ECON_PATEN_LENGTH                   0x00000001

#define _DCH1ECON_CABORT_POSITION                0x00000006
#define _DCH1ECON_CABORT_MASK                    0x00000040
#define _DCH1ECON_CABORT_LENGTH                  0x00000001

#define _DCH1ECON_CFORCE_POSITION                0x00000007
#define _DCH1ECON_CFORCE_MASK                    0x00000080
#define _DCH1ECON_CFORCE_LENGTH                  0x00000001

#define _DCH1ECON_CHSIRQ_POSITION                0x00000008
#define _DCH1ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH1ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH1ECON_CHAIRQ_POSITION                0x00000010
#define _DCH1ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH1ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH1ECON_w_POSITION                     0x00000000
#define _DCH1ECON_w_MASK                         0xFFFFFFFF
#define _DCH1ECON_w_LENGTH                       0x00000020

#define _DCH1INT_CHERIF_POSITION                 0x00000000
#define _DCH1INT_CHERIF_MASK                     0x00000001
#define _DCH1INT_CHERIF_LENGTH                   0x00000001

#define _DCH1INT_CHTAIF_POSITION                 0x00000001
#define _DCH1INT_CHTAIF_MASK                     0x00000002
#define _DCH1INT_CHTAIF_LENGTH                   0x00000001

#define _DCH1INT_CHCCIF_POSITION                 0x00000002
#define _DCH1INT_CHCCIF_MASK                     0x00000004
#define _DCH1INT_CHCCIF_LENGTH                   0x00000001

#define _DCH1INT_CHBCIF_POSITION                 0x00000003
#define _DCH1INT_CHBCIF_MASK                     0x00000008
#define _DCH1INT_CHBCIF_LENGTH                   0x00000001

#define _DCH1INT_CHDHIF_POSITION                 0x00000004
#define _DCH1INT_CHDHIF_MASK                     0x00000010
#define _DCH1INT_CHDHIF_LENGTH                   0x00000001

#define _DCH1INT_CHDDIF_POSITION                 0x00000005
#define _DCH1INT_CHDDIF_MASK                     0x00000020
#define _DCH1INT_CHDDIF_LENGTH                   0x00000001

#define _DCH1INT_CHSHIF_POSITION                 0x00000006
#define _DCH1INT_CHSHIF_MASK                     0x00000040
#define _DCH1INT_CHSHIF_LENGTH                   0x00000001

#define _DCH1INT_CHSDIF_POSITION                 0x00000007
#define _DCH1INT_CHSDIF_MASK                     0x00000080
#define _DCH1INT_CHSDIF_LENGTH                   0x00000001

#define _DCH1INT_CHERIE_POSITION                 0x00000010
#define _DCH1INT_CHERIE_MASK                     0x00010000
#define _DCH1INT_CHERIE_LENGTH                   0x00000001

#define _DCH1INT_CHTAIE_POSITION                 0x00000011
#define _DCH1INT_CHTAIE_MASK                     0x00020000
#define _DCH1INT_CHTAIE_LENGTH                   0x00000001

#define _DCH1INT_CHCCIE_POSITION                 0x00000012
#define _DCH1INT_CHCCIE_MASK                     0x00040000
#define _DCH1INT_CHCCIE_LENGTH                   0x00000001

#define _DCH1INT_CHBCIE_POSITION                 0x00000013
#define _DCH1INT_CHBCIE_MASK                     0x00080000
#define _DCH1INT_CHBCIE_LENGTH                   0x00000001

#define _DCH1INT_CHDHIE_POSITION                 0x00000014
#define _DCH1INT_CHDHIE_MASK                     0x00100000
#define _DCH1INT_CHDHIE_LENGTH                   0x00000001

#define _DCH1INT_CHDDIE_POSITION                 0x00000015
#define _DCH1INT_CHDDIE_MASK                     0x00200000
#define _DCH1INT_CHDDIE_LENGTH                   0x00000001

#define _DCH1INT_CHSHIE_POSITION                 0x00000016
#define _DCH1INT_CHSHIE_MASK                     0x00400000
#define _DCH1INT_CHSHIE_LENGTH                   0x00000001

#define _DCH1INT_CHSDIE_POSITION                 0x00000017
#define _DCH1INT_CHSDIE_MASK                     0x00800000
#define _DCH1INT_CHSDIE_LENGTH                   0x00000001

#define _DCH1INT_w_POSITION                      0x00000000
#define _DCH1INT_w_MASK                          0xFFFFFFFF
#define _DCH1INT_w_LENGTH                        0x00000020

#define _DCH1SSA_CHSSA_POSITION                  0x00000000
#define _DCH1SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH1SSA_CHSSA_LENGTH                    0x00000020

#define _DCH1DSA_CHDSA_POSITION                  0x00000000
#define _DCH1DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH1DSA_CHDSA_LENGTH                    0x00000020

#define _DCH2CON_CHPRI_POSITION                  0x00000000
#define _DCH2CON_CHPRI_MASK                      0x00000003
#define _DCH2CON_CHPRI_LENGTH                    0x00000002

#define _DCH2CON_CHEDET_POSITION                 0x00000002
#define _DCH2CON_CHEDET_MASK                     0x00000004
#define _DCH2CON_CHEDET_LENGTH                   0x00000001

#define _DCH2CON_CHAEN_POSITION                  0x00000004
#define _DCH2CON_CHAEN_MASK                      0x00000010
#define _DCH2CON_CHAEN_LENGTH                    0x00000001

#define _DCH2CON_CHCHN_POSITION                  0x00000005
#define _DCH2CON_CHCHN_MASK                      0x00000020
#define _DCH2CON_CHCHN_LENGTH                    0x00000001

#define _DCH2CON_CHAED_POSITION                  0x00000006
#define _DCH2CON_CHAED_MASK                      0x00000040
#define _DCH2CON_CHAED_LENGTH                    0x00000001

#define _DCH2CON_CHEN_POSITION                   0x00000007
#define _DCH2CON_CHEN_MASK                       0x00000080
#define _DCH2CON_CHEN_LENGTH                     0x00000001

#define _DCH2CON_CHCHNS_POSITION                 0x00000008
#define _DCH2CON_CHCHNS_MASK                     0x00000100
#define _DCH2CON_CHCHNS_LENGTH                   0x00000001

#define _DCH2CON_CHBUSY_POSITION                 0x0000000F
#define _DCH2CON_CHBUSY_MASK                     0x00008000
#define _DCH2CON_CHBUSY_LENGTH                   0x00000001

#define _DCH2CON_w_POSITION                      0x00000000
#define _DCH2CON_w_MASK                          0xFFFFFFFF
#define _DCH2CON_w_LENGTH                        0x00000020

#define _DCH2ECON_AIRQEN_POSITION                0x00000003
#define _DCH2ECON_AIRQEN_MASK                    0x00000008
#define _DCH2ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH2ECON_SIRQEN_POSITION                0x00000004
#define _DCH2ECON_SIRQEN_MASK                    0x00000010
#define _DCH2ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH2ECON_PATEN_POSITION                 0x00000005
#define _DCH2ECON_PATEN_MASK                     0x00000020
#define _DCH2ECON_PATEN_LENGTH                   0x00000001

#define _DCH2ECON_CABORT_POSITION                0x00000006
#define _DCH2ECON_CABORT_MASK                    0x00000040
#define _DCH2ECON_CABORT_LENGTH                  0x00000001

#define _DCH2ECON_CFORCE_POSITION                0x00000007
#define _DCH2ECON_CFORCE_MASK                    0x00000080
#define _DCH2ECON_CFORCE_LENGTH                  0x00000001

#define _DCH2ECON_CHSIRQ_POSITION                0x00000008
#define _DCH2ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH2ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH2ECON_CHAIRQ_POSITION                0x00000010
#define _DCH2ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH2ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH2ECON_w_POSITION                     0x00000000
#define _DCH2ECON_w_MASK                         0xFFFFFFFF
#define _DCH2ECON_w_LENGTH                       0x00000020

#define _DCH2INT_CHERIF_POSITION                 0x00000000
#define _DCH2INT_CHERIF_MASK                     0x00000001
#define _DCH2INT_CHERIF_LENGTH                   0x00000001

#define _DCH2INT_CHTAIF_POSITION                 0x00000001
#define _DCH2INT_CHTAIF_MASK                     0x00000002
#define _DCH2INT_CHTAIF_LENGTH                   0x00000001

#define _DCH2INT_CHCCIF_POSITION                 0x00000002
#define _DCH2INT_CHCCIF_MASK                     0x00000004
#define _DCH2INT_CHCCIF_LENGTH                   0x00000001

#define _DCH2INT_CHBCIF_POSITION                 0x00000003
#define _DCH2INT_CHBCIF_MASK                     0x00000008
#define _DCH2INT_CHBCIF_LENGTH                   0x00000001

#define _DCH2INT_CHDHIF_POSITION                 0x00000004
#define _DCH2INT_CHDHIF_MASK                     0x00000010
#define _DCH2INT_CHDHIF_LENGTH                   0x00000001

#define _DCH2INT_CHDDIF_POSITION                 0x00000005
#define _DCH2INT_CHDDIF_MASK                     0x00000020
#define _DCH2INT_CHDDIF_LENGTH                   0x00000001

#define _DCH2INT_CHSHIF_POSITION                 0x00000006
#define _DCH2INT_CHSHIF_MASK                     0x00000040
#define _DCH2INT_CHSHIF_LENGTH                   0x00000001

#define _DCH2INT_CHSDIF_POSITION                 0x00000007
#define _DCH2INT_CHSDIF_MASK                     0x00000080
#define _DCH2INT_CHSDIF_LENGTH                   0x00000001

#define _DCH2INT_CHERIE_POSITION                 0x00000010
#define _DCH2INT_CHERIE_MASK                     0x00010000
#define _DCH2INT_CHERIE_LENGTH                   0x00000001

#define _DCH2INT_CHTAIE_POSITION                 0x00000011
#define _DCH2INT_CHTAIE_MASK                     0x00020000
#define _DCH2INT_CHTAIE_LENGTH                   0x00000001

#define _DCH2INT_CHCCIE_POSITION                 0x00000012
#define _DCH2INT_CHCCIE_MASK                     0x00040000
#define _DCH2INT_CHCCIE_LENGTH                   0x00000001

#define _DCH2INT_CHBCIE_POSITION                 0x00000013
#define _DCH2INT_CHBCIE_MASK                     0x00080000
#define _DCH2INT_CHBCIE_LENGTH                   0x00000001

#define _DCH2INT_CHDHIE_POSITION                 0x00000014
#define _DCH2INT_CHDHIE_MASK                     0x00100000
#define _DCH2INT_CHDHIE_LENGTH                   0x00000001

#define _DCH2INT_CHDDIE_POSITION                 0x00000015
#define _DCH2INT_CHDDIE_MASK                     0x00200000
#define _DCH2INT_CHDDIE_LENGTH                   0x00000001

#define _DCH2INT_CHSHIE_POSITION                 0x00000016
#define _DCH2INT_CHSHIE_MASK                     0x00400000
#define _DCH2INT_CHSHIE_LENGTH                   0x00000001

#define _DCH2INT_CHSDIE_POSITION                 0x00000017
#define _DCH2INT_CHSDIE_MASK                     0x00800000
#define _DCH2INT_CHSDIE_LENGTH                   0x00000001

#define _DCH2INT_w_POSITION                      0x00000000
#define _DCH2INT_w_MASK                          0xFFFFFFFF
#define _DCH2INT_w_LENGTH                        0x00000020

#define _DCH2SSA_CHSSA_POSITION                  0x00000000
#define _DCH2SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH2SSA_CHSSA_LENGTH                    0x00000020

#define _DCH2DSA_CHDSA_POSITION                  0x00000000
#define _DCH2DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH2DSA_CHDSA_LENGTH                    0x00000020

#define _DCH3CON_CHPRI_POSITION                  0x00000000
#define _DCH3CON_CHPRI_MASK                      0x00000003
#define _DCH3CON_CHPRI_LENGTH                    0x00000002

#define _DCH3CON_CHEDET_POSITION                 0x00000002
#define _DCH3CON_CHEDET_MASK                     0x00000004
#define _DCH3CON_CHEDET_LENGTH                   0x00000001

#define _DCH3CON_CHAEN_POSITION                  0x00000004
#define _DCH3CON_CHAEN_MASK                      0x00000010
#define _DCH3CON_CHAEN_LENGTH                    0x00000001

#define _DCH3CON_CHCHN_POSITION                  0x00000005
#define _DCH3CON_CHCHN_MASK                      0x00000020
#define _DCH3CON_CHCHN_LENGTH                    0x00000001

#define _DCH3CON_CHAED_POSITION                  0x00000006
#define _DCH3CON_CHAED_MASK                      0x00000040
#define _DCH3CON_CHAED_LENGTH                    0x00000001

#define _DCH3CON_CHEN_POSITION                   0x00000007
#define _DCH3CON_CHEN_MASK                       0x00000080
#define _DCH3CON_CHEN_LENGTH                     0x00000001

#define _DCH3CON_CHCHNS_POSITION                 0x00000008
#define _DCH3CON_CHCHNS_MASK                     0x00000100
#define _DCH3CON_CHCHNS_LENGTH                   0x00000001

#define _DCH3CON_CHBUSY_POSITION                 0x0000000F
#define _DCH3CON_CHBUSY_MASK                     0x00008000
#define _DCH3CON_CHBUSY_LENGTH                   0x00000001

#define _DCH3CON_w_POSITION                      0x00000000
#define _DCH3CON_w_MASK                          0xFFFFFFFF
#define _DCH3CON_w_LENGTH                        0x00000020

#define _DCH3ECON_AIRQEN_POSITION                0x00000003
#define _DCH3ECON_AIRQEN_MASK                    0x00000008
#define _DCH3ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH3ECON_SIRQEN_POSITION                0x00000004
#define _DCH3ECON_SIRQEN_MASK                    0x00000010
#define _DCH3ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH3ECON_PATEN_POSITION                 0x00000005
#define _DCH3ECON_PATEN_MASK                     0x00000020
#define _DCH3ECON_PATEN_LENGTH                   0x00000001

#define _DCH3ECON_CABORT_POSITION                0x00000006
#define _DCH3ECON_CABORT_MASK                    0x00000040
#define _DCH3ECON_CABORT_LENGTH                  0x00000001

#define _DCH3ECON_CFORCE_POSITION                0x00000007
#define _DCH3ECON_CFORCE_MASK                    0x00000080
#define _DCH3ECON_CFORCE_LENGTH                  0x00000001

#define _DCH3ECON_CHSIRQ_POSITION                0x00000008
#define _DCH3ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH3ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH3ECON_CHAIRQ_POSITION                0x00000010
#define _DCH3ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH3ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH3ECON_w_POSITION                     0x00000000
#define _DCH3ECON_w_MASK                         0xFFFFFFFF
#define _DCH3ECON_w_LENGTH                       0x00000020

#define _DCH3INT_CHERIF_POSITION                 0x00000000
#define _DCH3INT_CHERIF_MASK                     0x00000001
#define _DCH3INT_CHERIF_LENGTH                   0x00000001

#define _DCH3INT_CHTAIF_POSITION                 0x00000001
#define _DCH3INT_CHTAIF_MASK                     0x00000002
#define _DCH3INT_CHTAIF_LENGTH                   0x00000001

#define _DCH3INT_CHCCIF_POSITION                 0x00000002
#define _DCH3INT_CHCCIF_MASK                     0x00000004
#define _DCH3INT_CHCCIF_LENGTH                   0x00000001

#define _DCH3INT_CHBCIF_POSITION                 0x00000003
#define _DCH3INT_CHBCIF_MASK                     0x00000008
#define _DCH3INT_CHBCIF_LENGTH                   0x00000001

#define _DCH3INT_CHDHIF_POSITION                 0x00000004
#define _DCH3INT_CHDHIF_MASK                     0x00000010
#define _DCH3INT_CHDHIF_LENGTH                   0x00000001

#define _DCH3INT_CHDDIF_POSITION                 0x00000005
#define _DCH3INT_CHDDIF_MASK                     0x00000020
#define _DCH3INT_CHDDIF_LENGTH                   0x00000001

#define _DCH3INT_CHSHIF_POSITION                 0x00000006
#define _DCH3INT_CHSHIF_MASK                     0x00000040
#define _DCH3INT_CHSHIF_LENGTH                   0x00000001

#define _DCH3INT_CHSDIF_POSITION                 0x00000007
#define _DCH3INT_CHSDIF_MASK                     0x00000080
#define _DCH3INT_CHSDIF_LENGTH                   0x00000001

#define _DCH3INT_CHERIE_POSITION                 0x00000010
#define _DCH3INT_CHERIE_MASK                     0x00010000
#define _DCH3INT_CHERIE_LENGTH                   0x00000001

#define _DCH3INT_CHTAIE_POSITION                 0x00000011
#define _DCH3INT_CHTAIE_MASK                     0x00020000
#define _DCH3INT_CHTAIE_LENGTH                   0x00000001

#define _DCH3INT_CHCCIE_POSITION                 0x00000012
#define _DCH3INT_CHCCIE_MASK                     0x00040000
#define _DCH3INT_CHCCIE_LENGTH                   0x00000001

#define _DCH3INT_CHBCIE_POSITION                 0x00000013
#define _DCH3INT_CHBCIE_MASK                     0x00080000
#define _DCH3INT_CHBCIE_LENGTH                   0x00000001

#define _DCH3INT_CHDHIE_POSITION                 0x00000014
#define _DCH3INT_CHDHIE_MASK                     0x00100000
#define _DCH3INT_CHDHIE_LENGTH                   0x00000001

#define _DCH3INT_CHDDIE_POSITION                 0x00000015
#define _DCH3INT_CHDDIE_MASK                     0x00200000
#define _DCH3INT_CHDDIE_LENGTH                   0x00000001

#define _DCH3INT_CHSHIE_POSITION                 0x00000016
#define _DCH3INT_CHSHIE_MASK                     0x00400000
#define _DCH3INT_CHSHIE_LENGTH                   0x00000001

#define _DCH3INT_CHSDIE_POSITION                 0x00000017
#define _DCH3INT_CHSDIE_MASK                     0x00800000
#define _DCH3INT_CHSDIE_LENGTH                   0x00000001

#define _DCH3INT_w_POSITION                      0x00000000
#define _DCH3INT_w_MASK                          0xFFFFFFFF
#define _DCH3INT_w_LENGTH                        0x00000020

#define _DCH3SSA_CHSSA_POSITION                  0x00000000
#define _DCH3SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH3SSA_CHSSA_LENGTH                    0x00000020

#define _DCH3DSA_CHDSA_POSITION                  0x00000000
#define _DCH3DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH3DSA_CHDSA_LENGTH                    0x00000020

#define _U1OTGIR_VBUSVDIF_POSITION               0x00000000
#define _U1OTGIR_VBUSVDIF_MASK                   0x00000001
#define _U1OTGIR_VBUSVDIF_LENGTH                 0x00000001

#define _U1OTGIR_SESENDIF_POSITION               0x00000002
#define _U1OTGIR_SESENDIF_MASK                   0x00000004
#define _U1OTGIR_SESENDIF_LENGTH                 0x00000001

#define _U1OTGIR_SESVDIF_POSITION                0x00000003
#define _U1OTGIR_SESVDIF_MASK                    0x00000008
#define _U1OTGIR_SESVDIF_LENGTH                  0x00000001

#define _U1OTGIR_ACTVIF_POSITION                 0x00000004
#define _U1OTGIR_ACTVIF_MASK                     0x00000010
#define _U1OTGIR_ACTVIF_LENGTH                   0x00000001

#define _U1OTGIR_LSTATEIF_POSITION               0x00000005
#define _U1OTGIR_LSTATEIF_MASK                   0x00000020
#define _U1OTGIR_LSTATEIF_LENGTH                 0x00000001

#define _U1OTGIR_T1MSECIF_POSITION               0x00000006
#define _U1OTGIR_T1MSECIF_MASK                   0x00000040
#define _U1OTGIR_T1MSECIF_LENGTH                 0x00000001

#define _U1OTGIR_IDIF_POSITION                   0x00000007
#define _U1OTGIR_IDIF_MASK                       0x00000080
#define _U1OTGIR_IDIF_LENGTH                     0x00000001

#define _U1OTGIE_VBUSVDIE_POSITION               0x00000000
#define _U1OTGIE_VBUSVDIE_MASK                   0x00000001
#define _U1OTGIE_VBUSVDIE_LENGTH                 0x00000001

#define _U1OTGIE_SESENDIE_POSITION               0x00000002
#define _U1OTGIE_SESENDIE_MASK                   0x00000004
#define _U1OTGIE_SESENDIE_LENGTH                 0x00000001

#define _U1OTGIE_SESVDIE_POSITION                0x00000003
#define _U1OTGIE_SESVDIE_MASK                    0x00000008
#define _U1OTGIE_SESVDIE_LENGTH                  0x00000001

#define _U1OTGIE_ACTVIE_POSITION                 0x00000004
#define _U1OTGIE_ACTVIE_MASK                     0x00000010
#define _U1OTGIE_ACTVIE_LENGTH                   0x00000001

#define _U1OTGIE_LSTATEIE_POSITION               0x00000005
#define _U1OTGIE_LSTATEIE_MASK                   0x00000020
#define _U1OTGIE_LSTATEIE_LENGTH                 0x00000001

#define _U1OTGIE_T1MSECIE_POSITION               0x00000006
#define _U1OTGIE_T1MSECIE_MASK                   0x00000040
#define _U1OTGIE_T1MSECIE_LENGTH                 0x00000001

#define _U1OTGIE_IDIE_POSITION                   0x00000007
#define _U1OTGIE_IDIE_MASK                       0x00000080
#define _U1OTGIE_IDIE_LENGTH                     0x00000001

#define _U1OTGSTAT_VBUSVD_POSITION               0x00000000
#define _U1OTGSTAT_VBUSVD_MASK                   0x00000001
#define _U1OTGSTAT_VBUSVD_LENGTH                 0x00000001

#define _U1OTGSTAT_SESEND_POSITION               0x00000002
#define _U1OTGSTAT_SESEND_MASK                   0x00000004
#define _U1OTGSTAT_SESEND_LENGTH                 0x00000001

#define _U1OTGSTAT_SESVD_POSITION                0x00000003
#define _U1OTGSTAT_SESVD_MASK                    0x00000008
#define _U1OTGSTAT_SESVD_LENGTH                  0x00000001

#define _U1OTGSTAT_LSTATE_POSITION               0x00000005
#define _U1OTGSTAT_LSTATE_MASK                   0x00000020
#define _U1OTGSTAT_LSTATE_LENGTH                 0x00000001

#define _U1OTGSTAT_ID_POSITION                   0x00000007
#define _U1OTGSTAT_ID_MASK                       0x00000080
#define _U1OTGSTAT_ID_LENGTH                     0x00000001

#define _U1OTGCON_VBUSDIS_POSITION               0x00000000
#define _U1OTGCON_VBUSDIS_MASK                   0x00000001
#define _U1OTGCON_VBUSDIS_LENGTH                 0x00000001

#define _U1OTGCON_VBUSCHG_POSITION               0x00000001
#define _U1OTGCON_VBUSCHG_MASK                   0x00000002
#define _U1OTGCON_VBUSCHG_LENGTH                 0x00000001

#define _U1OTGCON_OTGEN_POSITION                 0x00000002
#define _U1OTGCON_OTGEN_MASK                     0x00000004
#define _U1OTGCON_OTGEN_LENGTH                   0x00000001

#define _U1OTGCON_VBUSON_POSITION                0x00000003
#define _U1OTGCON_VBUSON_MASK                    0x00000008
#define _U1OTGCON_VBUSON_LENGTH                  0x00000001

#define _U1OTGCON_DMPULDWN_POSITION              0x00000004
#define _U1OTGCON_DMPULDWN_MASK                  0x00000010
#define _U1OTGCON_DMPULDWN_LENGTH                0x00000001

#define _U1OTGCON_DPPULDWN_POSITION              0x00000005
#define _U1OTGCON_DPPULDWN_MASK                  0x00000020
#define _U1OTGCON_DPPULDWN_LENGTH                0x00000001

#define _U1OTGCON_DMPULUP_POSITION               0x00000006
#define _U1OTGCON_DMPULUP_MASK                   0x00000040
#define _U1OTGCON_DMPULUP_LENGTH                 0x00000001

#define _U1OTGCON_DPPULUP_POSITION               0x00000007
#define _U1OTGCON_DPPULUP_MASK                   0x00000080
#define _U1OTGCON_DPPULUP_LENGTH                 0x00000001

#define _U1PWRC_USBPWR_POSITION                  0x00000000
#define _U1PWRC_USBPWR_MASK                      0x00000001
#define _U1PWRC_USBPWR_LENGTH                    0x00000001

#define _U1PWRC_USUSPEND_POSITION                0x00000001
#define _U1PWRC_USUSPEND_MASK                    0x00000002
#define _U1PWRC_USUSPEND_LENGTH                  0x00000001

#define _U1PWRC_USBBUSY_POSITION                 0x00000003
#define _U1PWRC_USBBUSY_MASK                     0x00000008
#define _U1PWRC_USBBUSY_LENGTH                   0x00000001

#define _U1PWRC_USLPGRD_POSITION                 0x00000004
#define _U1PWRC_USLPGRD_MASK                     0x00000010
#define _U1PWRC_USLPGRD_LENGTH                   0x00000001

#define _U1PWRC_UACTPND_POSITION                 0x00000007
#define _U1PWRC_UACTPND_MASK                     0x00000080
#define _U1PWRC_UACTPND_LENGTH                   0x00000001

#define _U1IR_URSTIF_DETACHIF_POSITION           0x00000000
#define _U1IR_URSTIF_DETACHIF_MASK               0x00000001
#define _U1IR_URSTIF_DETACHIF_LENGTH             0x00000001

#define _U1IR_UERRIF_POSITION                    0x00000001
#define _U1IR_UERRIF_MASK                        0x00000002
#define _U1IR_UERRIF_LENGTH                      0x00000001

#define _U1IR_SOFIF_POSITION                     0x00000002
#define _U1IR_SOFIF_MASK                         0x00000004
#define _U1IR_SOFIF_LENGTH                       0x00000001

#define _U1IR_TRNIF_POSITION                     0x00000003
#define _U1IR_TRNIF_MASK                         0x00000008
#define _U1IR_TRNIF_LENGTH                       0x00000001

#define _U1IR_IDLEIF_POSITION                    0x00000004
#define _U1IR_IDLEIF_MASK                        0x00000010
#define _U1IR_IDLEIF_LENGTH                      0x00000001

#define _U1IR_RESUMEIF_POSITION                  0x00000005
#define _U1IR_RESUMEIF_MASK                      0x00000020
#define _U1IR_RESUMEIF_LENGTH                    0x00000001

#define _U1IR_ATTACHIF_POSITION                  0x00000006
#define _U1IR_ATTACHIF_MASK                      0x00000040
#define _U1IR_ATTACHIF_LENGTH                    0x00000001

#define _U1IR_STALLIF_POSITION                   0x00000007
#define _U1IR_STALLIF_MASK                       0x00000080
#define _U1IR_STALLIF_LENGTH                     0x00000001

#define _U1IR_DETACHIF_POSITION                  0x00000000
#define _U1IR_DETACHIF_MASK                      0x00000001
#define _U1IR_DETACHIF_LENGTH                    0x00000001

#define _U1IR_URSTIF_POSITION                    0x00000000
#define _U1IR_URSTIF_MASK                        0x00000001
#define _U1IR_URSTIF_LENGTH                      0x00000001

#define _U1IE_URSTIE_DETACHIE_POSITION           0x00000000
#define _U1IE_URSTIE_DETACHIE_MASK               0x00000001
#define _U1IE_URSTIE_DETACHIE_LENGTH             0x00000001

#define _U1IE_UERRIE_POSITION                    0x00000001
#define _U1IE_UERRIE_MASK                        0x00000002
#define _U1IE_UERRIE_LENGTH                      0x00000001

#define _U1IE_SOFIE_POSITION                     0x00000002
#define _U1IE_SOFIE_MASK                         0x00000004
#define _U1IE_SOFIE_LENGTH                       0x00000001

#define _U1IE_TRNIE_POSITION                     0x00000003
#define _U1IE_TRNIE_MASK                         0x00000008
#define _U1IE_TRNIE_LENGTH                       0x00000001

#define _U1IE_IDLEIE_POSITION                    0x00000004
#define _U1IE_IDLEIE_MASK                        0x00000010
#define _U1IE_IDLEIE_LENGTH                      0x00000001

#define _U1IE_RESUMEIE_POSITION                  0x00000005
#define _U1IE_RESUMEIE_MASK                      0x00000020
#define _U1IE_RESUMEIE_LENGTH                    0x00000001

#define _U1IE_ATTACHIE_POSITION                  0x00000006
#define _U1IE_ATTACHIE_MASK                      0x00000040
#define _U1IE_ATTACHIE_LENGTH                    0x00000001

#define _U1IE_STALLIE_POSITION                   0x00000007
#define _U1IE_STALLIE_MASK                       0x00000080
#define _U1IE_STALLIE_LENGTH                     0x00000001

#define _U1IE_DETACHIE_POSITION                  0x00000000
#define _U1IE_DETACHIE_MASK                      0x00000001
#define _U1IE_DETACHIE_LENGTH                    0x00000001

#define _U1IE_URSTIE_POSITION                    0x00000000
#define _U1IE_URSTIE_MASK                        0x00000001
#define _U1IE_URSTIE_LENGTH                      0x00000001

#define _U1EIR_PIDEF_POSITION                    0x00000000
#define _U1EIR_PIDEF_MASK                        0x00000001
#define _U1EIR_PIDEF_LENGTH                      0x00000001

#define _U1EIR_CRC5EF_EOFEF_POSITION             0x00000001
#define _U1EIR_CRC5EF_EOFEF_MASK                 0x00000002
#define _U1EIR_CRC5EF_EOFEF_LENGTH               0x00000001

#define _U1EIR_CRC16EF_POSITION                  0x00000002
#define _U1EIR_CRC16EF_MASK                      0x00000004
#define _U1EIR_CRC16EF_LENGTH                    0x00000001

#define _U1EIR_DFN8EF_POSITION                   0x00000003
#define _U1EIR_DFN8EF_MASK                       0x00000008
#define _U1EIR_DFN8EF_LENGTH                     0x00000001

#define _U1EIR_BTOEF_POSITION                    0x00000004
#define _U1EIR_BTOEF_MASK                        0x00000010
#define _U1EIR_BTOEF_LENGTH                      0x00000001

#define _U1EIR_DMAEF_POSITION                    0x00000005
#define _U1EIR_DMAEF_MASK                        0x00000020
#define _U1EIR_DMAEF_LENGTH                      0x00000001

#define _U1EIR_BMXEF_POSITION                    0x00000006
#define _U1EIR_BMXEF_MASK                        0x00000040
#define _U1EIR_BMXEF_LENGTH                      0x00000001

#define _U1EIR_BTSEF_POSITION                    0x00000007
#define _U1EIR_BTSEF_MASK                        0x00000080
#define _U1EIR_BTSEF_LENGTH                      0x00000001

#define _U1EIR_CRC5EF_POSITION                   0x00000001
#define _U1EIR_CRC5EF_MASK                       0x00000002
#define _U1EIR_CRC5EF_LENGTH                     0x00000001

#define _U1EIR_EOFEF_POSITION                    0x00000001
#define _U1EIR_EOFEF_MASK                        0x00000002
#define _U1EIR_EOFEF_LENGTH                      0x00000001

#define _U1EIE_PIDEE_POSITION                    0x00000000
#define _U1EIE_PIDEE_MASK                        0x00000001
#define _U1EIE_PIDEE_LENGTH                      0x00000001

#define _U1EIE_CRC5EE_EOFEE_POSITION             0x00000001
#define _U1EIE_CRC5EE_EOFEE_MASK                 0x00000002
#define _U1EIE_CRC5EE_EOFEE_LENGTH               0x00000001

#define _U1EIE_CRC16EE_POSITION                  0x00000002
#define _U1EIE_CRC16EE_MASK                      0x00000004
#define _U1EIE_CRC16EE_LENGTH                    0x00000001

#define _U1EIE_DFN8EE_POSITION                   0x00000003
#define _U1EIE_DFN8EE_MASK                       0x00000008
#define _U1EIE_DFN8EE_LENGTH                     0x00000001

#define _U1EIE_BTOEE_POSITION                    0x00000004
#define _U1EIE_BTOEE_MASK                        0x00000010
#define _U1EIE_BTOEE_LENGTH                      0x00000001

#define _U1EIE_DMAEE_POSITION                    0x00000005
#define _U1EIE_DMAEE_MASK                        0x00000020
#define _U1EIE_DMAEE_LENGTH                      0x00000001

#define _U1EIE_BMXEE_POSITION                    0x00000006
#define _U1EIE_BMXEE_MASK                        0x00000040
#define _U1EIE_BMXEE_LENGTH                      0x00000001

#define _U1EIE_BTSEE_POSITION                    0x00000007
#define _U1EIE_BTSEE_MASK                        0x00000080
#define _U1EIE_BTSEE_LENGTH                      0x00000001

#define _U1EIE_CRC5EE_POSITION                   0x00000001
#define _U1EIE_CRC5EE_MASK                       0x00000002
#define _U1EIE_CRC5EE_LENGTH                     0x00000001

#define _U1EIE_EOFEE_POSITION                    0x00000001
#define _U1EIE_EOFEE_MASK                        0x00000002
#define _U1EIE_EOFEE_LENGTH                      0x00000001

#define _U1STAT_PPBI_POSITION                    0x00000002
#define _U1STAT_PPBI_MASK                        0x00000004
#define _U1STAT_PPBI_LENGTH                      0x00000001

#define _U1STAT_DIR_POSITION                     0x00000003
#define _U1STAT_DIR_MASK                         0x00000008
#define _U1STAT_DIR_LENGTH                       0x00000001

#define _U1STAT_ENDPT_POSITION                   0x00000004
#define _U1STAT_ENDPT_MASK                       0x000000F0
#define _U1STAT_ENDPT_LENGTH                     0x00000004

#define _U1STAT_ENDPT0_POSITION                  0x00000004
#define _U1STAT_ENDPT0_MASK                      0x00000010
#define _U1STAT_ENDPT0_LENGTH                    0x00000001

#define _U1STAT_ENDPT1_POSITION                  0x00000005
#define _U1STAT_ENDPT1_MASK                      0x00000020
#define _U1STAT_ENDPT1_LENGTH                    0x00000001

#define _U1STAT_ENDPT2_POSITION                  0x00000006
#define _U1STAT_ENDPT2_MASK                      0x00000040
#define _U1STAT_ENDPT2_LENGTH                    0x00000001

#define _U1STAT_ENDPT3_POSITION                  0x00000007
#define _U1STAT_ENDPT3_MASK                      0x00000080
#define _U1STAT_ENDPT3_LENGTH                    0x00000001

#define _U1CON_USBEN_SOFEN_POSITION              0x00000000
#define _U1CON_USBEN_SOFEN_MASK                  0x00000001
#define _U1CON_USBEN_SOFEN_LENGTH                0x00000001

#define _U1CON_PPBRST_POSITION                   0x00000001
#define _U1CON_PPBRST_MASK                       0x00000002
#define _U1CON_PPBRST_LENGTH                     0x00000001

#define _U1CON_RESUME_POSITION                   0x00000002
#define _U1CON_RESUME_MASK                       0x00000004
#define _U1CON_RESUME_LENGTH                     0x00000001

#define _U1CON_HOSTEN_POSITION                   0x00000003
#define _U1CON_HOSTEN_MASK                       0x00000008
#define _U1CON_HOSTEN_LENGTH                     0x00000001

#define _U1CON_USBRST_POSITION                   0x00000004
#define _U1CON_USBRST_MASK                       0x00000010
#define _U1CON_USBRST_LENGTH                     0x00000001

#define _U1CON_PKTDIS_TOKBUSY_POSITION           0x00000005
#define _U1CON_PKTDIS_TOKBUSY_MASK               0x00000020
#define _U1CON_PKTDIS_TOKBUSY_LENGTH             0x00000001

#define _U1CON_SE0_POSITION                      0x00000006
#define _U1CON_SE0_MASK                          0x00000040
#define _U1CON_SE0_LENGTH                        0x00000001

#define _U1CON_JSTATE_POSITION                   0x00000007
#define _U1CON_JSTATE_MASK                       0x00000080
#define _U1CON_JSTATE_LENGTH                     0x00000001

#define _U1CON_USBEN_POSITION                    0x00000000
#define _U1CON_USBEN_MASK                        0x00000001
#define _U1CON_USBEN_LENGTH                      0x00000001

#define _U1CON_SOFEN_POSITION                    0x00000000
#define _U1CON_SOFEN_MASK                        0x00000001
#define _U1CON_SOFEN_LENGTH                      0x00000001

#define _U1CON_PKTDIS_POSITION                   0x00000005
#define _U1CON_PKTDIS_MASK                       0x00000020
#define _U1CON_PKTDIS_LENGTH                     0x00000001

#define _U1CON_TOKBUSY_POSITION                  0x00000005
#define _U1CON_TOKBUSY_MASK                      0x00000020
#define _U1CON_TOKBUSY_LENGTH                    0x00000001

#define _U1ADDR_DEVADDR_POSITION                 0x00000000
#define _U1ADDR_DEVADDR_MASK                     0x0000007F
#define _U1ADDR_DEVADDR_LENGTH                   0x00000007

#define _U1ADDR_LSPDEN_POSITION                  0x00000007
#define _U1ADDR_LSPDEN_MASK                      0x00000080
#define _U1ADDR_LSPDEN_LENGTH                    0x00000001

#define _U1ADDR_DEVADDR0_POSITION                0x00000000
#define _U1ADDR_DEVADDR0_MASK                    0x00000001
#define _U1ADDR_DEVADDR0_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR1_POSITION                0x00000001
#define _U1ADDR_DEVADDR1_MASK                    0x00000002
#define _U1ADDR_DEVADDR1_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR2_POSITION                0x00000002
#define _U1ADDR_DEVADDR2_MASK                    0x00000004
#define _U1ADDR_DEVADDR2_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR3_POSITION                0x00000003
#define _U1ADDR_DEVADDR3_MASK                    0x00000008
#define _U1ADDR_DEVADDR3_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR4_POSITION                0x00000004
#define _U1ADDR_DEVADDR4_MASK                    0x00000010
#define _U1ADDR_DEVADDR4_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR5_POSITION                0x00000005
#define _U1ADDR_DEVADDR5_MASK                    0x00000020
#define _U1ADDR_DEVADDR5_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR6_POSITION                0x00000006
#define _U1ADDR_DEVADDR6_MASK                    0x00000040
#define _U1ADDR_DEVADDR6_LENGTH                  0x00000001

#define _U1BDTP1_BDTPTRL_POSITION                0x00000001
#define _U1BDTP1_BDTPTRL_MASK                    0x000000FE
#define _U1BDTP1_BDTPTRL_LENGTH                  0x00000007

#define _U1FRML_FRML_POSITION                    0x00000000
#define _U1FRML_FRML_MASK                        0x000000FF
#define _U1FRML_FRML_LENGTH                      0x00000008

#define _U1FRML_FRM0_POSITION                    0x00000000
#define _U1FRML_FRM0_MASK                        0x00000001
#define _U1FRML_FRM0_LENGTH                      0x00000001

#define _U1FRML_FRM1_POSITION                    0x00000001
#define _U1FRML_FRM1_MASK                        0x00000002
#define _U1FRML_FRM1_LENGTH                      0x00000001

#define _U1FRML_FRM2_POSITION                    0x00000002
#define _U1FRML_FRM2_MASK                        0x00000004
#define _U1FRML_FRM2_LENGTH                      0x00000001

#define _U1FRML_FRM3_POSITION                    0x00000003
#define _U1FRML_FRM3_MASK                        0x00000008
#define _U1FRML_FRM3_LENGTH                      0x00000001

#define _U1FRML_FRM4_POSITION                    0x00000004
#define _U1FRML_FRM4_MASK                        0x00000010
#define _U1FRML_FRM4_LENGTH                      0x00000001

#define _U1FRML_FRM5_POSITION                    0x00000005
#define _U1FRML_FRM5_MASK                        0x00000020
#define _U1FRML_FRM5_LENGTH                      0x00000001

#define _U1FRML_FRM6_POSITION                    0x00000006
#define _U1FRML_FRM6_MASK                        0x00000040
#define _U1FRML_FRM6_LENGTH                      0x00000001

#define _U1FRML_FRM7_POSITION                    0x00000007
#define _U1FRML_FRM7_MASK                        0x00000080
#define _U1FRML_FRM7_LENGTH                      0x00000001

#define _U1FRMH_FRMH_POSITION                    0x00000000
#define _U1FRMH_FRMH_MASK                        0x00000007
#define _U1FRMH_FRMH_LENGTH                      0x00000003

#define _U1FRMH_FRM8_POSITION                    0x00000000
#define _U1FRMH_FRM8_MASK                        0x00000001
#define _U1FRMH_FRM8_LENGTH                      0x00000001

#define _U1FRMH_FRM9_POSITION                    0x00000001
#define _U1FRMH_FRM9_MASK                        0x00000002
#define _U1FRMH_FRM9_LENGTH                      0x00000001

#define _U1FRMH_FRM10_POSITION                   0x00000002
#define _U1FRMH_FRM10_MASK                       0x00000004
#define _U1FRMH_FRM10_LENGTH                     0x00000001

#define _U1TOK_EP_POSITION                       0x00000000
#define _U1TOK_EP_MASK                           0x0000000F
#define _U1TOK_EP_LENGTH                         0x00000004

#define _U1TOK_PID_POSITION                      0x00000004
#define _U1TOK_PID_MASK                          0x000000F0
#define _U1TOK_PID_LENGTH                        0x00000004

#define _U1TOK_EP0_POSITION                      0x00000000
#define _U1TOK_EP0_MASK                          0x00000001
#define _U1TOK_EP0_LENGTH                        0x00000001

#define _U1TOK_EP1_POSITION                      0x00000001
#define _U1TOK_EP1_MASK                          0x00000002
#define _U1TOK_EP1_LENGTH                        0x00000001

#define _U1TOK_EP2_POSITION                      0x00000002
#define _U1TOK_EP2_MASK                          0x00000004
#define _U1TOK_EP2_LENGTH                        0x00000001

#define _U1TOK_EP3_POSITION                      0x00000003
#define _U1TOK_EP3_MASK                          0x00000008
#define _U1TOK_EP3_LENGTH                        0x00000001

#define _U1TOK_PID0_POSITION                     0x00000004
#define _U1TOK_PID0_MASK                         0x00000010
#define _U1TOK_PID0_LENGTH                       0x00000001

#define _U1TOK_PID1_POSITION                     0x00000005
#define _U1TOK_PID1_MASK                         0x00000020
#define _U1TOK_PID1_LENGTH                       0x00000001

#define _U1TOK_PID2_POSITION                     0x00000006
#define _U1TOK_PID2_MASK                         0x00000040
#define _U1TOK_PID2_LENGTH                       0x00000001

#define _U1TOK_PID3_POSITION                     0x00000007
#define _U1TOK_PID3_MASK                         0x00000080
#define _U1TOK_PID3_LENGTH                       0x00000001

#define _U1SOF_CNT_POSITION                      0x00000000
#define _U1SOF_CNT_MASK                          0x000000FF
#define _U1SOF_CNT_LENGTH                        0x00000008

#define _U1BDTP2_BDTPTRH_POSITION                0x00000000
#define _U1BDTP2_BDTPTRH_MASK                    0x000000FF
#define _U1BDTP2_BDTPTRH_LENGTH                  0x00000008

#define _U1BDTP3_BDTPTRU_POSITION                0x00000000
#define _U1BDTP3_BDTPTRU_MASK                    0x000000FF
#define _U1BDTP3_BDTPTRU_LENGTH                  0x00000008

#define _U1CNFG1_UASUSPND_POSITION               0x00000000
#define _U1CNFG1_UASUSPND_MASK                   0x00000001
#define _U1CNFG1_UASUSPND_LENGTH                 0x00000001

#define _U1CNFG1_USBSIDL_POSITION                0x00000004
#define _U1CNFG1_USBSIDL_MASK                    0x00000010
#define _U1CNFG1_USBSIDL_LENGTH                  0x00000001

#define _U1CNFG1_UOEMON_POSITION                 0x00000006
#define _U1CNFG1_UOEMON_MASK                     0x00000040
#define _U1CNFG1_UOEMON_LENGTH                   0x00000001

#define _U1CNFG1_UTEYE_POSITION                  0x00000007
#define _U1CNFG1_UTEYE_MASK                      0x00000080
#define _U1CNFG1_UTEYE_LENGTH                    0x00000001

#define _U1EP0_EPHSHK_POSITION                   0x00000000
#define _U1EP0_EPHSHK_MASK                       0x00000001
#define _U1EP0_EPHSHK_LENGTH                     0x00000001

#define _U1EP0_EPSTALL_POSITION                  0x00000001
#define _U1EP0_EPSTALL_MASK                      0x00000002
#define _U1EP0_EPSTALL_LENGTH                    0x00000001

#define _U1EP0_EPTXEN_POSITION                   0x00000002
#define _U1EP0_EPTXEN_MASK                       0x00000004
#define _U1EP0_EPTXEN_LENGTH                     0x00000001

#define _U1EP0_EPRXEN_POSITION                   0x00000003
#define _U1EP0_EPRXEN_MASK                       0x00000008
#define _U1EP0_EPRXEN_LENGTH                     0x00000001

#define _U1EP0_EPCONDIS_POSITION                 0x00000004
#define _U1EP0_EPCONDIS_MASK                     0x00000010
#define _U1EP0_EPCONDIS_LENGTH                   0x00000001

#define _U1EP0_RETRYDIS_POSITION                 0x00000006
#define _U1EP0_RETRYDIS_MASK                     0x00000040
#define _U1EP0_RETRYDIS_LENGTH                   0x00000001

#define _U1EP0_LSPD_POSITION                     0x00000007
#define _U1EP0_LSPD_MASK                         0x00000080
#define _U1EP0_LSPD_LENGTH                       0x00000001

#define _U1EP1_EPHSHK_POSITION                   0x00000000
#define _U1EP1_EPHSHK_MASK                       0x00000001
#define _U1EP1_EPHSHK_LENGTH                     0x00000001

#define _U1EP1_EPSTALL_POSITION                  0x00000001
#define _U1EP1_EPSTALL_MASK                      0x00000002
#define _U1EP1_EPSTALL_LENGTH                    0x00000001

#define _U1EP1_EPTXEN_POSITION                   0x00000002
#define _U1EP1_EPTXEN_MASK                       0x00000004
#define _U1EP1_EPTXEN_LENGTH                     0x00000001

#define _U1EP1_EPRXEN_POSITION                   0x00000003
#define _U1EP1_EPRXEN_MASK                       0x00000008
#define _U1EP1_EPRXEN_LENGTH                     0x00000001

#define _U1EP1_EPCONDIS_POSITION                 0x00000004
#define _U1EP1_EPCONDIS_MASK                     0x00000010
#define _U1EP1_EPCONDIS_LENGTH                   0x00000001

#define _U1EP2_EPHSHK_POSITION                   0x00000000
#define _U1EP2_EPHSHK_MASK                       0x00000001
#define _U1EP2_EPHSHK_LENGTH                     0x00000001

#define _U1EP2_EPSTALL_POSITION                  0x00000001
#define _U1EP2_EPSTALL_MASK                      0x00000002
#define _U1EP2_EPSTALL_LENGTH                    0x00000001

#define _U1EP2_EPTXEN_POSITION                   0x00000002
#define _U1EP2_EPTXEN_MASK                       0x00000004
#define _U1EP2_EPTXEN_LENGTH                     0x00000001

#define _U1EP2_EPRXEN_POSITION                   0x00000003
#define _U1EP2_EPRXEN_MASK                       0x00000008
#define _U1EP2_EPRXEN_LENGTH                     0x00000001

#define _U1EP2_EPCONDIS_POSITION                 0x00000004
#define _U1EP2_EPCONDIS_MASK                     0x00000010
#define _U1EP2_EPCONDIS_LENGTH                   0x00000001

#define _U1EP3_EPHSHK_POSITION                   0x00000000
#define _U1EP3_EPHSHK_MASK                       0x00000001
#define _U1EP3_EPHSHK_LENGTH                     0x00000001

#define _U1EP3_EPSTALL_POSITION                  0x00000001
#define _U1EP3_EPSTALL_MASK                      0x00000002
#define _U1EP3_EPSTALL_LENGTH                    0x00000001

#define _U1EP3_EPTXEN_POSITION                   0x00000002
#define _U1EP3_EPTXEN_MASK                       0x00000004
#define _U1EP3_EPTXEN_LENGTH                     0x00000001

#define _U1EP3_EPRXEN_POSITION                   0x00000003
#define _U1EP3_EPRXEN_MASK                       0x00000008
#define _U1EP3_EPRXEN_LENGTH                     0x00000001

#define _U1EP3_EPCONDIS_POSITION                 0x00000004
#define _U1EP3_EPCONDIS_MASK                     0x00000010
#define _U1EP3_EPCONDIS_LENGTH                   0x00000001

#define _U1EP4_EPHSHK_POSITION                   0x00000000
#define _U1EP4_EPHSHK_MASK                       0x00000001
#define _U1EP4_EPHSHK_LENGTH                     0x00000001

#define _U1EP4_EPSTALL_POSITION                  0x00000001
#define _U1EP4_EPSTALL_MASK                      0x00000002
#define _U1EP4_EPSTALL_LENGTH                    0x00000001

#define _U1EP4_EPTXEN_POSITION                   0x00000002
#define _U1EP4_EPTXEN_MASK                       0x00000004
#define _U1EP4_EPTXEN_LENGTH                     0x00000001

#define _U1EP4_EPRXEN_POSITION                   0x00000003
#define _U1EP4_EPRXEN_MASK                       0x00000008
#define _U1EP4_EPRXEN_LENGTH                     0x00000001

#define _U1EP4_EPCONDIS_POSITION                 0x00000004
#define _U1EP4_EPCONDIS_MASK                     0x00000010
#define _U1EP4_EPCONDIS_LENGTH                   0x00000001

#define _U1EP5_EPHSHK_POSITION                   0x00000000
#define _U1EP5_EPHSHK_MASK                       0x00000001
#define _U1EP5_EPHSHK_LENGTH                     0x00000001

#define _U1EP5_EPSTALL_POSITION                  0x00000001
#define _U1EP5_EPSTALL_MASK                      0x00000002
#define _U1EP5_EPSTALL_LENGTH                    0x00000001

#define _U1EP5_EPTXEN_POSITION                   0x00000002
#define _U1EP5_EPTXEN_MASK                       0x00000004
#define _U1EP5_EPTXEN_LENGTH                     0x00000001

#define _U1EP5_EPRXEN_POSITION                   0x00000003
#define _U1EP5_EPRXEN_MASK                       0x00000008
#define _U1EP5_EPRXEN_LENGTH                     0x00000001

#define _U1EP5_EPCONDIS_POSITION                 0x00000004
#define _U1EP5_EPCONDIS_MASK                     0x00000010
#define _U1EP5_EPCONDIS_LENGTH                   0x00000001

#define _U1EP6_EPHSHK_POSITION                   0x00000000
#define _U1EP6_EPHSHK_MASK                       0x00000001
#define _U1EP6_EPHSHK_LENGTH                     0x00000001

#define _U1EP6_EPSTALL_POSITION                  0x00000001
#define _U1EP6_EPSTALL_MASK                      0x00000002
#define _U1EP6_EPSTALL_LENGTH                    0x00000001

#define _U1EP6_EPTXEN_POSITION                   0x00000002
#define _U1EP6_EPTXEN_MASK                       0x00000004
#define _U1EP6_EPTXEN_LENGTH                     0x00000001

#define _U1EP6_EPRXEN_POSITION                   0x00000003
#define _U1EP6_EPRXEN_MASK                       0x00000008
#define _U1EP6_EPRXEN_LENGTH                     0x00000001

#define _U1EP6_EPCONDIS_POSITION                 0x00000004
#define _U1EP6_EPCONDIS_MASK                     0x00000010
#define _U1EP6_EPCONDIS_LENGTH                   0x00000001

#define _U1EP7_EPHSHK_POSITION                   0x00000000
#define _U1EP7_EPHSHK_MASK                       0x00000001
#define _U1EP7_EPHSHK_LENGTH                     0x00000001

#define _U1EP7_EPSTALL_POSITION                  0x00000001
#define _U1EP7_EPSTALL_MASK                      0x00000002
#define _U1EP7_EPSTALL_LENGTH                    0x00000001

#define _U1EP7_EPTXEN_POSITION                   0x00000002
#define _U1EP7_EPTXEN_MASK                       0x00000004
#define _U1EP7_EPTXEN_LENGTH                     0x00000001

#define _U1EP7_EPRXEN_POSITION                   0x00000003
#define _U1EP7_EPRXEN_MASK                       0x00000008
#define _U1EP7_EPRXEN_LENGTH                     0x00000001

#define _U1EP7_EPCONDIS_POSITION                 0x00000004
#define _U1EP7_EPCONDIS_MASK                     0x00000010
#define _U1EP7_EPCONDIS_LENGTH                   0x00000001

#define _U1EP8_EPHSHK_POSITION                   0x00000000
#define _U1EP8_EPHSHK_MASK                       0x00000001
#define _U1EP8_EPHSHK_LENGTH                     0x00000001

#define _U1EP8_EPSTALL_POSITION                  0x00000001
#define _U1EP8_EPSTALL_MASK                      0x00000002
#define _U1EP8_EPSTALL_LENGTH                    0x00000001

#define _U1EP8_EPTXEN_POSITION                   0x00000002
#define _U1EP8_EPTXEN_MASK                       0x00000004
#define _U1EP8_EPTXEN_LENGTH                     0x00000001

#define _U1EP8_EPRXEN_POSITION                   0x00000003
#define _U1EP8_EPRXEN_MASK                       0x00000008
#define _U1EP8_EPRXEN_LENGTH                     0x00000001

#define _U1EP8_EPCONDIS_POSITION                 0x00000004
#define _U1EP8_EPCONDIS_MASK                     0x00000010
#define _U1EP8_EPCONDIS_LENGTH                   0x00000001

#define _U1EP9_EPHSHK_POSITION                   0x00000000
#define _U1EP9_EPHSHK_MASK                       0x00000001
#define _U1EP9_EPHSHK_LENGTH                     0x00000001

#define _U1EP9_EPSTALL_POSITION                  0x00000001
#define _U1EP9_EPSTALL_MASK                      0x00000002
#define _U1EP9_EPSTALL_LENGTH                    0x00000001

#define _U1EP9_EPTXEN_POSITION                   0x00000002
#define _U1EP9_EPTXEN_MASK                       0x00000004
#define _U1EP9_EPTXEN_LENGTH                     0x00000001

#define _U1EP9_EPRXEN_POSITION                   0x00000003
#define _U1EP9_EPRXEN_MASK                       0x00000008
#define _U1EP9_EPRXEN_LENGTH                     0x00000001

#define _U1EP9_EPCONDIS_POSITION                 0x00000004
#define _U1EP9_EPCONDIS_MASK                     0x00000010
#define _U1EP9_EPCONDIS_LENGTH                   0x00000001

#define _U1EP10_EPHSHK_POSITION                  0x00000000
#define _U1EP10_EPHSHK_MASK                      0x00000001
#define _U1EP10_EPHSHK_LENGTH                    0x00000001

#define _U1EP10_EPSTALL_POSITION                 0x00000001
#define _U1EP10_EPSTALL_MASK                     0x00000002
#define _U1EP10_EPSTALL_LENGTH                   0x00000001

#define _U1EP10_EPTXEN_POSITION                  0x00000002
#define _U1EP10_EPTXEN_MASK                      0x00000004
#define _U1EP10_EPTXEN_LENGTH                    0x00000001

#define _U1EP10_EPRXEN_POSITION                  0x00000003
#define _U1EP10_EPRXEN_MASK                      0x00000008
#define _U1EP10_EPRXEN_LENGTH                    0x00000001

#define _U1EP10_EPCONDIS_POSITION                0x00000004
#define _U1EP10_EPCONDIS_MASK                    0x00000010
#define _U1EP10_EPCONDIS_LENGTH                  0x00000001

#define _U1EP11_EPHSHK_POSITION                  0x00000000
#define _U1EP11_EPHSHK_MASK                      0x00000001
#define _U1EP11_EPHSHK_LENGTH                    0x00000001

#define _U1EP11_EPSTALL_POSITION                 0x00000001
#define _U1EP11_EPSTALL_MASK                     0x00000002
#define _U1EP11_EPSTALL_LENGTH                   0x00000001

#define _U1EP11_EPTXEN_POSITION                  0x00000002
#define _U1EP11_EPTXEN_MASK                      0x00000004
#define _U1EP11_EPTXEN_LENGTH                    0x00000001

#define _U1EP11_EPRXEN_POSITION                  0x00000003
#define _U1EP11_EPRXEN_MASK                      0x00000008
#define _U1EP11_EPRXEN_LENGTH                    0x00000001

#define _U1EP11_EPCONDIS_POSITION                0x00000004
#define _U1EP11_EPCONDIS_MASK                    0x00000010
#define _U1EP11_EPCONDIS_LENGTH                  0x00000001

#define _U1EP12_EPHSHK_POSITION                  0x00000000
#define _U1EP12_EPHSHK_MASK                      0x00000001
#define _U1EP12_EPHSHK_LENGTH                    0x00000001

#define _U1EP12_EPSTALL_POSITION                 0x00000001
#define _U1EP12_EPSTALL_MASK                     0x00000002
#define _U1EP12_EPSTALL_LENGTH                   0x00000001

#define _U1EP12_EPTXEN_POSITION                  0x00000002
#define _U1EP12_EPTXEN_MASK                      0x00000004
#define _U1EP12_EPTXEN_LENGTH                    0x00000001

#define _U1EP12_EPRXEN_POSITION                  0x00000003
#define _U1EP12_EPRXEN_MASK                      0x00000008
#define _U1EP12_EPRXEN_LENGTH                    0x00000001

#define _U1EP12_EPCONDIS_POSITION                0x00000004
#define _U1EP12_EPCONDIS_MASK                    0x00000010
#define _U1EP12_EPCONDIS_LENGTH                  0x00000001

#define _U1EP13_EPHSHK_POSITION                  0x00000000
#define _U1EP13_EPHSHK_MASK                      0x00000001
#define _U1EP13_EPHSHK_LENGTH                    0x00000001

#define _U1EP13_EPSTALL_POSITION                 0x00000001
#define _U1EP13_EPSTALL_MASK                     0x00000002
#define _U1EP13_EPSTALL_LENGTH                   0x00000001

#define _U1EP13_EPTXEN_POSITION                  0x00000002
#define _U1EP13_EPTXEN_MASK                      0x00000004
#define _U1EP13_EPTXEN_LENGTH                    0x00000001

#define _U1EP13_EPRXEN_POSITION                  0x00000003
#define _U1EP13_EPRXEN_MASK                      0x00000008
#define _U1EP13_EPRXEN_LENGTH                    0x00000001

#define _U1EP13_EPCONDIS_POSITION                0x00000004
#define _U1EP13_EPCONDIS_MASK                    0x00000010
#define _U1EP13_EPCONDIS_LENGTH                  0x00000001

#define _U1EP14_EPHSHK_POSITION                  0x00000000
#define _U1EP14_EPHSHK_MASK                      0x00000001
#define _U1EP14_EPHSHK_LENGTH                    0x00000001

#define _U1EP14_EPSTALL_POSITION                 0x00000001
#define _U1EP14_EPSTALL_MASK                     0x00000002
#define _U1EP14_EPSTALL_LENGTH                   0x00000001

#define _U1EP14_EPTXEN_POSITION                  0x00000002
#define _U1EP14_EPTXEN_MASK                      0x00000004
#define _U1EP14_EPTXEN_LENGTH                    0x00000001

#define _U1EP14_EPRXEN_POSITION                  0x00000003
#define _U1EP14_EPRXEN_MASK                      0x00000008
#define _U1EP14_EPRXEN_LENGTH                    0x00000001

#define _U1EP14_EPCONDIS_POSITION                0x00000004
#define _U1EP14_EPCONDIS_MASK                    0x00000010
#define _U1EP14_EPCONDIS_LENGTH                  0x00000001

#define _U1EP15_EPHSHK_POSITION                  0x00000000
#define _U1EP15_EPHSHK_MASK                      0x00000001
#define _U1EP15_EPHSHK_LENGTH                    0x00000001

#define _U1EP15_EPSTALL_POSITION                 0x00000001
#define _U1EP15_EPSTALL_MASK                     0x00000002
#define _U1EP15_EPSTALL_LENGTH                   0x00000001

#define _U1EP15_EPTXEN_POSITION                  0x00000002
#define _U1EP15_EPTXEN_MASK                      0x00000004
#define _U1EP15_EPTXEN_LENGTH                    0x00000001

#define _U1EP15_EPRXEN_POSITION                  0x00000003
#define _U1EP15_EPRXEN_MASK                      0x00000008
#define _U1EP15_EPRXEN_LENGTH                    0x00000001

#define _U1EP15_EPCONDIS_POSITION                0x00000004
#define _U1EP15_EPCONDIS_MASK                    0x00000010
#define _U1EP15_EPCONDIS_LENGTH                  0x00000001

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

#define _ANSELA_w_POSITION                       0x00000000
#define _ANSELA_w_MASK                           0xFFFFFFFF
#define _ANSELA_w_LENGTH                         0x00000020

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _TRISA_TRISA7_POSITION                   0x00000007
#define _TRISA_TRISA7_MASK                       0x00000080
#define _TRISA_TRISA7_LENGTH                     0x00000001

#define _TRISA_TRISA8_POSITION                   0x00000008
#define _TRISA_TRISA8_MASK                       0x00000100
#define _TRISA_TRISA8_LENGTH                     0x00000001

#define _TRISA_TRISA9_POSITION                   0x00000009
#define _TRISA_TRISA9_MASK                       0x00000200
#define _TRISA_TRISA9_LENGTH                     0x00000001

#define _TRISA_TRISA10_POSITION                  0x0000000A
#define _TRISA_TRISA10_MASK                      0x00000400
#define _TRISA_TRISA10_LENGTH                    0x00000001

#define _TRISA_w_POSITION                        0x00000000
#define _TRISA_w_MASK                            0xFFFFFFFF
#define _TRISA_w_LENGTH                          0x00000020

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _PORTA_RA7_POSITION                      0x00000007
#define _PORTA_RA7_MASK                          0x00000080
#define _PORTA_RA7_LENGTH                        0x00000001

#define _PORTA_RA8_POSITION                      0x00000008
#define _PORTA_RA8_MASK                          0x00000100
#define _PORTA_RA8_LENGTH                        0x00000001

#define _PORTA_RA9_POSITION                      0x00000009
#define _PORTA_RA9_MASK                          0x00000200
#define _PORTA_RA9_LENGTH                        0x00000001

#define _PORTA_RA10_POSITION                     0x0000000A
#define _PORTA_RA10_MASK                         0x00000400
#define _PORTA_RA10_LENGTH                       0x00000001

#define _PORTA_w_POSITION                        0x00000000
#define _PORTA_w_MASK                            0xFFFFFFFF
#define _PORTA_w_LENGTH                          0x00000020

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _LATA_LATA7_POSITION                     0x00000007
#define _LATA_LATA7_MASK                         0x00000080
#define _LATA_LATA7_LENGTH                       0x00000001

#define _LATA_LATA8_POSITION                     0x00000008
#define _LATA_LATA8_MASK                         0x00000100
#define _LATA_LATA8_LENGTH                       0x00000001

#define _LATA_LATA9_POSITION                     0x00000009
#define _LATA_LATA9_MASK                         0x00000200
#define _LATA_LATA9_LENGTH                       0x00000001

#define _LATA_LATA10_POSITION                    0x0000000A
#define _LATA_LATA10_MASK                        0x00000400
#define _LATA_LATA10_LENGTH                      0x00000001

#define _LATA_w_POSITION                         0x00000000
#define _LATA_w_MASK                             0xFFFFFFFF
#define _LATA_w_LENGTH                           0x00000020

#define _ODCA_ODCA7_POSITION                     0x00000007
#define _ODCA_ODCA7_MASK                         0x00000080
#define _ODCA_ODCA7_LENGTH                       0x00000001

#define _ODCA_ODCA8_POSITION                     0x00000008
#define _ODCA_ODCA8_MASK                         0x00000100
#define _ODCA_ODCA8_LENGTH                       0x00000001

#define _ODCA_ODCA9_POSITION                     0x00000009
#define _ODCA_ODCA9_MASK                         0x00000200
#define _ODCA_ODCA9_LENGTH                       0x00000001

#define _ODCA_ODCA10_POSITION                    0x0000000A
#define _ODCA_ODCA10_MASK                        0x00000400
#define _ODCA_ODCA10_LENGTH                      0x00000001

#define _ODCA_w_POSITION                         0x00000000
#define _ODCA_w_MASK                             0xFFFFFFFF
#define _ODCA_w_LENGTH                           0x00000020

#define _CNPUA_CNPUA0_POSITION                   0x00000000
#define _CNPUA_CNPUA0_MASK                       0x00000001
#define _CNPUA_CNPUA0_LENGTH                     0x00000001

#define _CNPUA_CNPUA1_POSITION                   0x00000001
#define _CNPUA_CNPUA1_MASK                       0x00000002
#define _CNPUA_CNPUA1_LENGTH                     0x00000001

#define _CNPUA_CNPUA2_POSITION                   0x00000002
#define _CNPUA_CNPUA2_MASK                       0x00000004
#define _CNPUA_CNPUA2_LENGTH                     0x00000001

#define _CNPUA_CNPUA3_POSITION                   0x00000003
#define _CNPUA_CNPUA3_MASK                       0x00000008
#define _CNPUA_CNPUA3_LENGTH                     0x00000001

#define _CNPUA_CNPUA4_POSITION                   0x00000004
#define _CNPUA_CNPUA4_MASK                       0x00000010
#define _CNPUA_CNPUA4_LENGTH                     0x00000001

#define _CNPUA_CNPUA7_POSITION                   0x00000007
#define _CNPUA_CNPUA7_MASK                       0x00000080
#define _CNPUA_CNPUA7_LENGTH                     0x00000001

#define _CNPUA_CNPUA8_POSITION                   0x00000008
#define _CNPUA_CNPUA8_MASK                       0x00000100
#define _CNPUA_CNPUA8_LENGTH                     0x00000001

#define _CNPUA_CNPUA9_POSITION                   0x00000009
#define _CNPUA_CNPUA9_MASK                       0x00000200
#define _CNPUA_CNPUA9_LENGTH                     0x00000001

#define _CNPUA_CNPUA10_POSITION                  0x0000000A
#define _CNPUA_CNPUA10_MASK                      0x00000400
#define _CNPUA_CNPUA10_LENGTH                    0x00000001

#define _CNPUA_w_POSITION                        0x00000000
#define _CNPUA_w_MASK                            0xFFFFFFFF
#define _CNPUA_w_LENGTH                          0x00000020

#define _CNPDA_CNPDA0_POSITION                   0x00000000
#define _CNPDA_CNPDA0_MASK                       0x00000001
#define _CNPDA_CNPDA0_LENGTH                     0x00000001

#define _CNPDA_CNPDA1_POSITION                   0x00000001
#define _CNPDA_CNPDA1_MASK                       0x00000002
#define _CNPDA_CNPDA1_LENGTH                     0x00000001

#define _CNPDA_CNPDA2_POSITION                   0x00000002
#define _CNPDA_CNPDA2_MASK                       0x00000004
#define _CNPDA_CNPDA2_LENGTH                     0x00000001

#define _CNPDA_CNPDA3_POSITION                   0x00000003
#define _CNPDA_CNPDA3_MASK                       0x00000008
#define _CNPDA_CNPDA3_LENGTH                     0x00000001

#define _CNPDA_CNPDA4_POSITION                   0x00000004
#define _CNPDA_CNPDA4_MASK                       0x00000010
#define _CNPDA_CNPDA4_LENGTH                     0x00000001

#define _CNPDA_CNPDA7_POSITION                   0x00000007
#define _CNPDA_CNPDA7_MASK                       0x00000080
#define _CNPDA_CNPDA7_LENGTH                     0x00000001

#define _CNPDA_CNPDA8_POSITION                   0x00000008
#define _CNPDA_CNPDA8_MASK                       0x00000100
#define _CNPDA_CNPDA8_LENGTH                     0x00000001

#define _CNPDA_CNPDA9_POSITION                   0x00000009
#define _CNPDA_CNPDA9_MASK                       0x00000200
#define _CNPDA_CNPDA9_LENGTH                     0x00000001

#define _CNPDA_CNPDA10_POSITION                  0x0000000A
#define _CNPDA_CNPDA10_MASK                      0x00000400
#define _CNPDA_CNPDA10_LENGTH                    0x00000001

#define _CNPDA_w_POSITION                        0x00000000
#define _CNPDA_w_MASK                            0xFFFFFFFF
#define _CNPDA_w_LENGTH                          0x00000020

#define _CNCONA_SIDL_POSITION                    0x0000000D
#define _CNCONA_SIDL_MASK                        0x00002000
#define _CNCONA_SIDL_LENGTH                      0x00000001

#define _CNCONA_ON_POSITION                      0x0000000F
#define _CNCONA_ON_MASK                          0x00008000
#define _CNCONA_ON_LENGTH                        0x00000001

#define _CNCONA_w_POSITION                       0x00000000
#define _CNCONA_w_MASK                           0xFFFFFFFF
#define _CNCONA_w_LENGTH                         0x00000020

#define _CNENA_CNIEA0_POSITION                   0x00000000
#define _CNENA_CNIEA0_MASK                       0x00000001
#define _CNENA_CNIEA0_LENGTH                     0x00000001

#define _CNENA_CNIEA1_POSITION                   0x00000001
#define _CNENA_CNIEA1_MASK                       0x00000002
#define _CNENA_CNIEA1_LENGTH                     0x00000001

#define _CNENA_CNIEA2_POSITION                   0x00000002
#define _CNENA_CNIEA2_MASK                       0x00000004
#define _CNENA_CNIEA2_LENGTH                     0x00000001

#define _CNENA_CNIEA3_POSITION                   0x00000003
#define _CNENA_CNIEA3_MASK                       0x00000008
#define _CNENA_CNIEA3_LENGTH                     0x00000001

#define _CNENA_CNIEA4_POSITION                   0x00000004
#define _CNENA_CNIEA4_MASK                       0x00000010
#define _CNENA_CNIEA4_LENGTH                     0x00000001

#define _CNENA_CNIEA7_POSITION                   0x00000007
#define _CNENA_CNIEA7_MASK                       0x00000080
#define _CNENA_CNIEA7_LENGTH                     0x00000001

#define _CNENA_CNIEA8_POSITION                   0x00000008
#define _CNENA_CNIEA8_MASK                       0x00000100
#define _CNENA_CNIEA8_LENGTH                     0x00000001

#define _CNENA_CNIEA9_POSITION                   0x00000009
#define _CNENA_CNIEA9_MASK                       0x00000200
#define _CNENA_CNIEA9_LENGTH                     0x00000001

#define _CNENA_CNIEA10_POSITION                  0x0000000A
#define _CNENA_CNIEA10_MASK                      0x00000400
#define _CNENA_CNIEA10_LENGTH                    0x00000001

#define _CNENA_w_POSITION                        0x00000000
#define _CNENA_w_MASK                            0xFFFFFFFF
#define _CNENA_w_LENGTH                          0x00000020

#define _CNSTATA_CNSTATA0_POSITION               0x00000000
#define _CNSTATA_CNSTATA0_MASK                   0x00000001
#define _CNSTATA_CNSTATA0_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA1_POSITION               0x00000001
#define _CNSTATA_CNSTATA1_MASK                   0x00000002
#define _CNSTATA_CNSTATA1_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA2_POSITION               0x00000002
#define _CNSTATA_CNSTATA2_MASK                   0x00000004
#define _CNSTATA_CNSTATA2_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA3_POSITION               0x00000003
#define _CNSTATA_CNSTATA3_MASK                   0x00000008
#define _CNSTATA_CNSTATA3_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA4_POSITION               0x00000004
#define _CNSTATA_CNSTATA4_MASK                   0x00000010
#define _CNSTATA_CNSTATA4_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA7_POSITION               0x00000007
#define _CNSTATA_CNSTATA7_MASK                   0x00000080
#define _CNSTATA_CNSTATA7_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA8_POSITION               0x00000008
#define _CNSTATA_CNSTATA8_MASK                   0x00000100
#define _CNSTATA_CNSTATA8_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA9_POSITION               0x00000009
#define _CNSTATA_CNSTATA9_MASK                   0x00000200
#define _CNSTATA_CNSTATA9_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA10_POSITION              0x0000000A
#define _CNSTATA_CNSTATA10_MASK                  0x00000400
#define _CNSTATA_CNSTATA10_LENGTH                0x00000001

#define _CNSTATA_w_POSITION                      0x00000000
#define _CNSTATA_w_MASK                          0xFFFFFFFF
#define _CNSTATA_w_LENGTH                        0x00000020

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB3_POSITION                   0x00000003
#define _ANSELB_ANSB3_MASK                       0x00000008
#define _ANSELB_ANSB3_LENGTH                     0x00000001

#define _ANSELB_ANSB13_POSITION                  0x0000000D
#define _ANSELB_ANSB13_MASK                      0x00002000
#define _ANSELB_ANSB13_LENGTH                    0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _ANSELB_w_POSITION                       0x00000000
#define _ANSELB_w_MASK                           0xFFFFFFFF
#define _ANSELB_w_LENGTH                         0x00000020

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB3_POSITION                   0x00000003
#define _TRISB_TRISB3_MASK                       0x00000008
#define _TRISB_TRISB3_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB5_POSITION                   0x00000005
#define _TRISB_TRISB5_MASK                       0x00000020
#define _TRISB_TRISB5_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB10_POSITION                  0x0000000A
#define _TRISB_TRISB10_MASK                      0x00000400
#define _TRISB_TRISB10_LENGTH                    0x00000001

#define _TRISB_TRISB11_POSITION                  0x0000000B
#define _TRISB_TRISB11_MASK                      0x00000800
#define _TRISB_TRISB11_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _TRISB_w_POSITION                        0x00000000
#define _TRISB_w_MASK                            0xFFFFFFFF
#define _TRISB_w_LENGTH                          0x00000020

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB3_POSITION                      0x00000003
#define _PORTB_RB3_MASK                          0x00000008
#define _PORTB_RB3_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB5_POSITION                      0x00000005
#define _PORTB_RB5_MASK                          0x00000020
#define _PORTB_RB5_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB10_POSITION                     0x0000000A
#define _PORTB_RB10_MASK                         0x00000400
#define _PORTB_RB10_LENGTH                       0x00000001

#define _PORTB_RB11_POSITION                     0x0000000B
#define _PORTB_RB11_MASK                         0x00000800
#define _PORTB_RB11_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _PORTB_w_POSITION                        0x00000000
#define _PORTB_w_MASK                            0xFFFFFFFF
#define _PORTB_w_LENGTH                          0x00000020

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB3_POSITION                     0x00000003
#define _LATB_LATB3_MASK                         0x00000008
#define _LATB_LATB3_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB5_POSITION                     0x00000005
#define _LATB_LATB5_MASK                         0x00000020
#define _LATB_LATB5_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB10_POSITION                    0x0000000A
#define _LATB_LATB10_MASK                        0x00000400
#define _LATB_LATB10_LENGTH                      0x00000001

#define _LATB_LATB11_POSITION                    0x0000000B
#define _LATB_LATB11_MASK                        0x00000800
#define _LATB_LATB11_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _LATB_w_POSITION                         0x00000000
#define _LATB_w_MASK                             0xFFFFFFFF
#define _LATB_w_LENGTH                           0x00000020

#define _ODCB_ODCB0_POSITION                     0x00000000
#define _ODCB_ODCB0_MASK                         0x00000001
#define _ODCB_ODCB0_LENGTH                       0x00000001

#define _ODCB_ODCB1_POSITION                     0x00000001
#define _ODCB_ODCB1_MASK                         0x00000002
#define _ODCB_ODCB1_LENGTH                       0x00000001

#define _ODCB_ODCB2_POSITION                     0x00000002
#define _ODCB_ODCB2_MASK                         0x00000004
#define _ODCB_ODCB2_LENGTH                       0x00000001

#define _ODCB_ODCB3_POSITION                     0x00000003
#define _ODCB_ODCB3_MASK                         0x00000008
#define _ODCB_ODCB3_LENGTH                       0x00000001

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB5_POSITION                     0x00000005
#define _ODCB_ODCB5_MASK                         0x00000020
#define _ODCB_ODCB5_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

#define _ODCB_ODCB10_POSITION                    0x0000000A
#define _ODCB_ODCB10_MASK                        0x00000400
#define _ODCB_ODCB10_LENGTH                      0x00000001

#define _ODCB_ODCB11_POSITION                    0x0000000B
#define _ODCB_ODCB11_MASK                        0x00000800
#define _ODCB_ODCB11_LENGTH                      0x00000001

#define _ODCB_ODCB13_POSITION                    0x0000000D
#define _ODCB_ODCB13_MASK                        0x00002000
#define _ODCB_ODCB13_LENGTH                      0x00000001

#define _ODCB_ODCB14_POSITION                    0x0000000E
#define _ODCB_ODCB14_MASK                        0x00004000
#define _ODCB_ODCB14_LENGTH                      0x00000001

#define _ODCB_ODCB15_POSITION                    0x0000000F
#define _ODCB_ODCB15_MASK                        0x00008000
#define _ODCB_ODCB15_LENGTH                      0x00000001

#define _ODCB_w_POSITION                         0x00000000
#define _ODCB_w_MASK                             0xFFFFFFFF
#define _ODCB_w_LENGTH                           0x00000020

#define _CNPUB_CNPUB0_POSITION                   0x00000000
#define _CNPUB_CNPUB0_MASK                       0x00000001
#define _CNPUB_CNPUB0_LENGTH                     0x00000001

#define _CNPUB_CNPUB1_POSITION                   0x00000001
#define _CNPUB_CNPUB1_MASK                       0x00000002
#define _CNPUB_CNPUB1_LENGTH                     0x00000001

#define _CNPUB_CNPUB2_POSITION                   0x00000002
#define _CNPUB_CNPUB2_MASK                       0x00000004
#define _CNPUB_CNPUB2_LENGTH                     0x00000001

#define _CNPUB_CNPUB3_POSITION                   0x00000003
#define _CNPUB_CNPUB3_MASK                       0x00000008
#define _CNPUB_CNPUB3_LENGTH                     0x00000001

#define _CNPUB_CNPUB4_POSITION                   0x00000004
#define _CNPUB_CNPUB4_MASK                       0x00000010
#define _CNPUB_CNPUB4_LENGTH                     0x00000001

#define _CNPUB_CNPUB5_POSITION                   0x00000005
#define _CNPUB_CNPUB5_MASK                       0x00000020
#define _CNPUB_CNPUB5_LENGTH                     0x00000001

#define _CNPUB_CNPUB7_POSITION                   0x00000007
#define _CNPUB_CNPUB7_MASK                       0x00000080
#define _CNPUB_CNPUB7_LENGTH                     0x00000001

#define _CNPUB_CNPUB8_POSITION                   0x00000008
#define _CNPUB_CNPUB8_MASK                       0x00000100
#define _CNPUB_CNPUB8_LENGTH                     0x00000001

#define _CNPUB_CNPUB9_POSITION                   0x00000009
#define _CNPUB_CNPUB9_MASK                       0x00000200
#define _CNPUB_CNPUB9_LENGTH                     0x00000001

#define _CNPUB_CNPUB10_POSITION                  0x0000000A
#define _CNPUB_CNPUB10_MASK                      0x00000400
#define _CNPUB_CNPUB10_LENGTH                    0x00000001

#define _CNPUB_CNPUB11_POSITION                  0x0000000B
#define _CNPUB_CNPUB11_MASK                      0x00000800
#define _CNPUB_CNPUB11_LENGTH                    0x00000001

#define _CNPUB_CNPUB13_POSITION                  0x0000000D
#define _CNPUB_CNPUB13_MASK                      0x00002000
#define _CNPUB_CNPUB13_LENGTH                    0x00000001

#define _CNPUB_CNPUB14_POSITION                  0x0000000E
#define _CNPUB_CNPUB14_MASK                      0x00004000
#define _CNPUB_CNPUB14_LENGTH                    0x00000001

#define _CNPUB_CNPUB15_POSITION                  0x0000000F
#define _CNPUB_CNPUB15_MASK                      0x00008000
#define _CNPUB_CNPUB15_LENGTH                    0x00000001

#define _CNPUB_w_POSITION                        0x00000000
#define _CNPUB_w_MASK                            0xFFFFFFFF
#define _CNPUB_w_LENGTH                          0x00000020

#define _CNPDB_CNPDB0_POSITION                   0x00000000
#define _CNPDB_CNPDB0_MASK                       0x00000001
#define _CNPDB_CNPDB0_LENGTH                     0x00000001

#define _CNPDB_CNPDB1_POSITION                   0x00000001
#define _CNPDB_CNPDB1_MASK                       0x00000002
#define _CNPDB_CNPDB1_LENGTH                     0x00000001

#define _CNPDB_CNPDB2_POSITION                   0x00000002
#define _CNPDB_CNPDB2_MASK                       0x00000004
#define _CNPDB_CNPDB2_LENGTH                     0x00000001

#define _CNPDB_CNPDB3_POSITION                   0x00000003
#define _CNPDB_CNPDB3_MASK                       0x00000008
#define _CNPDB_CNPDB3_LENGTH                     0x00000001

#define _CNPDB_CNPDB4_POSITION                   0x00000004
#define _CNPDB_CNPDB4_MASK                       0x00000010
#define _CNPDB_CNPDB4_LENGTH                     0x00000001

#define _CNPDB_CNPDB5_POSITION                   0x00000005
#define _CNPDB_CNPDB5_MASK                       0x00000020
#define _CNPDB_CNPDB5_LENGTH                     0x00000001

#define _CNPDB_CNPDB7_POSITION                   0x00000007
#define _CNPDB_CNPDB7_MASK                       0x00000080
#define _CNPDB_CNPDB7_LENGTH                     0x00000001

#define _CNPDB_CNPDB8_POSITION                   0x00000008
#define _CNPDB_CNPDB8_MASK                       0x00000100
#define _CNPDB_CNPDB8_LENGTH                     0x00000001

#define _CNPDB_CNPDB9_POSITION                   0x00000009
#define _CNPDB_CNPDB9_MASK                       0x00000200
#define _CNPDB_CNPDB9_LENGTH                     0x00000001

#define _CNPDB_CNPDB10_POSITION                  0x0000000A
#define _CNPDB_CNPDB10_MASK                      0x00000400
#define _CNPDB_CNPDB10_LENGTH                    0x00000001

#define _CNPDB_CNPDB11_POSITION                  0x0000000B
#define _CNPDB_CNPDB11_MASK                      0x00000800
#define _CNPDB_CNPDB11_LENGTH                    0x00000001

#define _CNPDB_CNPDB13_POSITION                  0x0000000D
#define _CNPDB_CNPDB13_MASK                      0x00002000
#define _CNPDB_CNPDB13_LENGTH                    0x00000001

#define _CNPDB_CNPDB14_POSITION                  0x0000000E
#define _CNPDB_CNPDB14_MASK                      0x00004000
#define _CNPDB_CNPDB14_LENGTH                    0x00000001

#define _CNPDB_CNPDB15_POSITION                  0x0000000F
#define _CNPDB_CNPDB15_MASK                      0x00008000
#define _CNPDB_CNPDB15_LENGTH                    0x00000001

#define _CNPDB_w_POSITION                        0x00000000
#define _CNPDB_w_MASK                            0xFFFFFFFF
#define _CNPDB_w_LENGTH                          0x00000020

#define _CNCONB_SIDL_POSITION                    0x0000000D
#define _CNCONB_SIDL_MASK                        0x00002000
#define _CNCONB_SIDL_LENGTH                      0x00000001

#define _CNCONB_ON_POSITION                      0x0000000F
#define _CNCONB_ON_MASK                          0x00008000
#define _CNCONB_ON_LENGTH                        0x00000001

#define _CNCONB_w_POSITION                       0x00000000
#define _CNCONB_w_MASK                           0xFFFFFFFF
#define _CNCONB_w_LENGTH                         0x00000020

#define _CNENB_CNIEB0_POSITION                   0x00000000
#define _CNENB_CNIEB0_MASK                       0x00000001
#define _CNENB_CNIEB0_LENGTH                     0x00000001

#define _CNENB_CNIEB1_POSITION                   0x00000001
#define _CNENB_CNIEB1_MASK                       0x00000002
#define _CNENB_CNIEB1_LENGTH                     0x00000001

#define _CNENB_CNIEB2_POSITION                   0x00000002
#define _CNENB_CNIEB2_MASK                       0x00000004
#define _CNENB_CNIEB2_LENGTH                     0x00000001

#define _CNENB_CNIEB3_POSITION                   0x00000003
#define _CNENB_CNIEB3_MASK                       0x00000008
#define _CNENB_CNIEB3_LENGTH                     0x00000001

#define _CNENB_CNIEB4_POSITION                   0x00000004
#define _CNENB_CNIEB4_MASK                       0x00000010
#define _CNENB_CNIEB4_LENGTH                     0x00000001

#define _CNENB_CNIEB5_POSITION                   0x00000005
#define _CNENB_CNIEB5_MASK                       0x00000020
#define _CNENB_CNIEB5_LENGTH                     0x00000001

#define _CNENB_CNIEB7_POSITION                   0x00000007
#define _CNENB_CNIEB7_MASK                       0x00000080
#define _CNENB_CNIEB7_LENGTH                     0x00000001

#define _CNENB_CNIEB8_POSITION                   0x00000008
#define _CNENB_CNIEB8_MASK                       0x00000100
#define _CNENB_CNIEB8_LENGTH                     0x00000001

#define _CNENB_CNIEB9_POSITION                   0x00000009
#define _CNENB_CNIEB9_MASK                       0x00000200
#define _CNENB_CNIEB9_LENGTH                     0x00000001

#define _CNENB_CNIEB10_POSITION                  0x0000000A
#define _CNENB_CNIEB10_MASK                      0x00000400
#define _CNENB_CNIEB10_LENGTH                    0x00000001

#define _CNENB_CNIEB11_POSITION                  0x0000000B
#define _CNENB_CNIEB11_MASK                      0x00000800
#define _CNENB_CNIEB11_LENGTH                    0x00000001

#define _CNENB_CNIEB13_POSITION                  0x0000000D
#define _CNENB_CNIEB13_MASK                      0x00002000
#define _CNENB_CNIEB13_LENGTH                    0x00000001

#define _CNENB_CNIEB14_POSITION                  0x0000000E
#define _CNENB_CNIEB14_MASK                      0x00004000
#define _CNENB_CNIEB14_LENGTH                    0x00000001

#define _CNENB_CNIEB15_POSITION                  0x0000000F
#define _CNENB_CNIEB15_MASK                      0x00008000
#define _CNENB_CNIEB15_LENGTH                    0x00000001

#define _CNENB_w_POSITION                        0x00000000
#define _CNENB_w_MASK                            0xFFFFFFFF
#define _CNENB_w_LENGTH                          0x00000020

#define _CNSTATB_CNSTATB0_POSITION               0x00000000
#define _CNSTATB_CNSTATB0_MASK                   0x00000001
#define _CNSTATB_CNSTATB0_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB1_POSITION               0x00000001
#define _CNSTATB_CNSTATB1_MASK                   0x00000002
#define _CNSTATB_CNSTATB1_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB2_POSITION               0x00000002
#define _CNSTATB_CNSTATB2_MASK                   0x00000004
#define _CNSTATB_CNSTATB2_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB3_POSITION               0x00000003
#define _CNSTATB_CNSTATB3_MASK                   0x00000008
#define _CNSTATB_CNSTATB3_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB4_POSITION               0x00000004
#define _CNSTATB_CNSTATB4_MASK                   0x00000010
#define _CNSTATB_CNSTATB4_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB5_POSITION               0x00000005
#define _CNSTATB_CNSTATB5_MASK                   0x00000020
#define _CNSTATB_CNSTATB5_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB7_POSITION               0x00000007
#define _CNSTATB_CNSTATB7_MASK                   0x00000080
#define _CNSTATB_CNSTATB7_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB8_POSITION               0x00000008
#define _CNSTATB_CNSTATB8_MASK                   0x00000100
#define _CNSTATB_CNSTATB8_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB9_POSITION               0x00000009
#define _CNSTATB_CNSTATB9_MASK                   0x00000200
#define _CNSTATB_CNSTATB9_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB10_POSITION              0x0000000A
#define _CNSTATB_CNSTATB10_MASK                  0x00000400
#define _CNSTATB_CNSTATB10_LENGTH                0x00000001

#define _CNSTATB_CNSTATB11_POSITION              0x0000000B
#define _CNSTATB_CNSTATB11_MASK                  0x00000800
#define _CNSTATB_CNSTATB11_LENGTH                0x00000001

#define _CNSTATB_CNSTATB13_POSITION              0x0000000D
#define _CNSTATB_CNSTATB13_MASK                  0x00002000
#define _CNSTATB_CNSTATB13_LENGTH                0x00000001

#define _CNSTATB_CNSTATB14_POSITION              0x0000000E
#define _CNSTATB_CNSTATB14_MASK                  0x00004000
#define _CNSTATB_CNSTATB14_LENGTH                0x00000001

#define _CNSTATB_CNSTATB15_POSITION              0x0000000F
#define _CNSTATB_CNSTATB15_MASK                  0x00008000
#define _CNSTATB_CNSTATB15_LENGTH                0x00000001

#define _CNSTATB_w_POSITION                      0x00000000
#define _CNSTATB_w_MASK                          0xFFFFFFFF
#define _CNSTATB_w_LENGTH                        0x00000020

#define _ANSELC_ANSC0_POSITION                   0x00000000
#define _ANSELC_ANSC0_MASK                       0x00000001
#define _ANSELC_ANSC0_LENGTH                     0x00000001

#define _ANSELC_ANSC1_POSITION                   0x00000001
#define _ANSELC_ANSC1_MASK                       0x00000002
#define _ANSELC_ANSC1_LENGTH                     0x00000001

#define _ANSELC_ANSC2_POSITION                   0x00000002
#define _ANSELC_ANSC2_MASK                       0x00000004
#define _ANSELC_ANSC2_LENGTH                     0x00000001

#define _ANSELC_ANSC3_POSITION                   0x00000003
#define _ANSELC_ANSC3_MASK                       0x00000008
#define _ANSELC_ANSC3_LENGTH                     0x00000001

#define _ANSELC_w_POSITION                       0x00000000
#define _ANSELC_w_MASK                           0xFFFFFFFF
#define _ANSELC_w_LENGTH                         0x00000020

#define _TRISC_TRISC0_POSITION                   0x00000000
#define _TRISC_TRISC0_MASK                       0x00000001
#define _TRISC_TRISC0_LENGTH                     0x00000001

#define _TRISC_TRISC1_POSITION                   0x00000001
#define _TRISC_TRISC1_MASK                       0x00000002
#define _TRISC_TRISC1_LENGTH                     0x00000001

#define _TRISC_TRISC2_POSITION                   0x00000002
#define _TRISC_TRISC2_MASK                       0x00000004
#define _TRISC_TRISC2_LENGTH                     0x00000001

#define _TRISC_TRISC3_POSITION                   0x00000003
#define _TRISC_TRISC3_MASK                       0x00000008
#define _TRISC_TRISC3_LENGTH                     0x00000001

#define _TRISC_TRISC4_POSITION                   0x00000004
#define _TRISC_TRISC4_MASK                       0x00000010
#define _TRISC_TRISC4_LENGTH                     0x00000001

#define _TRISC_TRISC5_POSITION                   0x00000005
#define _TRISC_TRISC5_MASK                       0x00000020
#define _TRISC_TRISC5_LENGTH                     0x00000001

#define _TRISC_TRISC6_POSITION                   0x00000006
#define _TRISC_TRISC6_MASK                       0x00000040
#define _TRISC_TRISC6_LENGTH                     0x00000001

#define _TRISC_TRISC7_POSITION                   0x00000007
#define _TRISC_TRISC7_MASK                       0x00000080
#define _TRISC_TRISC7_LENGTH                     0x00000001

#define _TRISC_TRISC8_POSITION                   0x00000008
#define _TRISC_TRISC8_MASK                       0x00000100
#define _TRISC_TRISC8_LENGTH                     0x00000001

#define _TRISC_TRISC9_POSITION                   0x00000009
#define _TRISC_TRISC9_MASK                       0x00000200
#define _TRISC_TRISC9_LENGTH                     0x00000001

#define _TRISC_w_POSITION                        0x00000000
#define _TRISC_w_MASK                            0xFFFFFFFF
#define _TRISC_w_LENGTH                          0x00000020

#define _PORTC_RC0_POSITION                      0x00000000
#define _PORTC_RC0_MASK                          0x00000001
#define _PORTC_RC0_LENGTH                        0x00000001

#define _PORTC_RC1_POSITION                      0x00000001
#define _PORTC_RC1_MASK                          0x00000002
#define _PORTC_RC1_LENGTH                        0x00000001

#define _PORTC_RC2_POSITION                      0x00000002
#define _PORTC_RC2_MASK                          0x00000004
#define _PORTC_RC2_LENGTH                        0x00000001

#define _PORTC_RC3_POSITION                      0x00000003
#define _PORTC_RC3_MASK                          0x00000008
#define _PORTC_RC3_LENGTH                        0x00000001

#define _PORTC_RC4_POSITION                      0x00000004
#define _PORTC_RC4_MASK                          0x00000010
#define _PORTC_RC4_LENGTH                        0x00000001

#define _PORTC_RC5_POSITION                      0x00000005
#define _PORTC_RC5_MASK                          0x00000020
#define _PORTC_RC5_LENGTH                        0x00000001

#define _PORTC_RC6_POSITION                      0x00000006
#define _PORTC_RC6_MASK                          0x00000040
#define _PORTC_RC6_LENGTH                        0x00000001

#define _PORTC_RC7_POSITION                      0x00000007
#define _PORTC_RC7_MASK                          0x00000080
#define _PORTC_RC7_LENGTH                        0x00000001

#define _PORTC_RC8_POSITION                      0x00000008
#define _PORTC_RC8_MASK                          0x00000100
#define _PORTC_RC8_LENGTH                        0x00000001

#define _PORTC_RC9_POSITION                      0x00000009
#define _PORTC_RC9_MASK                          0x00000200
#define _PORTC_RC9_LENGTH                        0x00000001

#define _PORTC_w_POSITION                        0x00000000
#define _PORTC_w_MASK                            0xFFFFFFFF
#define _PORTC_w_LENGTH                          0x00000020

#define _LATC_LATC0_POSITION                     0x00000000
#define _LATC_LATC0_MASK                         0x00000001
#define _LATC_LATC0_LENGTH                       0x00000001

#define _LATC_LATC1_POSITION                     0x00000001
#define _LATC_LATC1_MASK                         0x00000002
#define _LATC_LATC1_LENGTH                       0x00000001

#define _LATC_LATC2_POSITION                     0x00000002
#define _LATC_LATC2_MASK                         0x00000004
#define _LATC_LATC2_LENGTH                       0x00000001

#define _LATC_LATC3_POSITION                     0x00000003
#define _LATC_LATC3_MASK                         0x00000008
#define _LATC_LATC3_LENGTH                       0x00000001

#define _LATC_LATC4_POSITION                     0x00000004
#define _LATC_LATC4_MASK                         0x00000010
#define _LATC_LATC4_LENGTH                       0x00000001

#define _LATC_LATC5_POSITION                     0x00000005
#define _LATC_LATC5_MASK                         0x00000020
#define _LATC_LATC5_LENGTH                       0x00000001

#define _LATC_LATC6_POSITION                     0x00000006
#define _LATC_LATC6_MASK                         0x00000040
#define _LATC_LATC6_LENGTH                       0x00000001

#define _LATC_LATC7_POSITION                     0x00000007
#define _LATC_LATC7_MASK                         0x00000080
#define _LATC_LATC7_LENGTH                       0x00000001

#define _LATC_LATC8_POSITION                     0x00000008
#define _LATC_LATC8_MASK                         0x00000100
#define _LATC_LATC8_LENGTH                       0x00000001

#define _LATC_LATC9_POSITION                     0x00000009
#define _LATC_LATC9_MASK                         0x00000200
#define _LATC_LATC9_LENGTH                       0x00000001

#define _LATC_w_POSITION                         0x00000000
#define _LATC_w_MASK                             0xFFFFFFFF
#define _LATC_w_LENGTH                           0x00000020

#define _ODCC_ODCC4_POSITION                     0x00000004
#define _ODCC_ODCC4_MASK                         0x00000010
#define _ODCC_ODCC4_LENGTH                       0x00000001

#define _ODCC_ODCC5_POSITION                     0x00000005
#define _ODCC_ODCC5_MASK                         0x00000020
#define _ODCC_ODCC5_LENGTH                       0x00000001

#define _ODCC_ODCC6_POSITION                     0x00000006
#define _ODCC_ODCC6_MASK                         0x00000040
#define _ODCC_ODCC6_LENGTH                       0x00000001

#define _ODCC_ODCC7_POSITION                     0x00000007
#define _ODCC_ODCC7_MASK                         0x00000080
#define _ODCC_ODCC7_LENGTH                       0x00000001

#define _ODCC_ODCC8_POSITION                     0x00000008
#define _ODCC_ODCC8_MASK                         0x00000100
#define _ODCC_ODCC8_LENGTH                       0x00000001

#define _ODCC_ODCC9_POSITION                     0x00000009
#define _ODCC_ODCC9_MASK                         0x00000200
#define _ODCC_ODCC9_LENGTH                       0x00000001

#define _ODCC_w_POSITION                         0x00000000
#define _ODCC_w_MASK                             0xFFFFFFFF
#define _ODCC_w_LENGTH                           0x00000020

#define _CNPUC_CNPUC0_POSITION                   0x00000000
#define _CNPUC_CNPUC0_MASK                       0x00000001
#define _CNPUC_CNPUC0_LENGTH                     0x00000001

#define _CNPUC_CNPUC1_POSITION                   0x00000001
#define _CNPUC_CNPUC1_MASK                       0x00000002
#define _CNPUC_CNPUC1_LENGTH                     0x00000001

#define _CNPUC_CNPUC2_POSITION                   0x00000002
#define _CNPUC_CNPUC2_MASK                       0x00000004
#define _CNPUC_CNPUC2_LENGTH                     0x00000001

#define _CNPUC_CNPUC3_POSITION                   0x00000003
#define _CNPUC_CNPUC3_MASK                       0x00000008
#define _CNPUC_CNPUC3_LENGTH                     0x00000001

#define _CNPUC_CNPUC4_POSITION                   0x00000004
#define _CNPUC_CNPUC4_MASK                       0x00000010
#define _CNPUC_CNPUC4_LENGTH                     0x00000001

#define _CNPUC_CNPUC5_POSITION                   0x00000005
#define _CNPUC_CNPUC5_MASK                       0x00000020
#define _CNPUC_CNPUC5_LENGTH                     0x00000001

#define _CNPUC_CNPUC6_POSITION                   0x00000006
#define _CNPUC_CNPUC6_MASK                       0x00000040
#define _CNPUC_CNPUC6_LENGTH                     0x00000001

#define _CNPUC_CNPUC7_POSITION                   0x00000007
#define _CNPUC_CNPUC7_MASK                       0x00000080
#define _CNPUC_CNPUC7_LENGTH                     0x00000001

#define _CNPUC_CNPUC8_POSITION                   0x00000008
#define _CNPUC_CNPUC8_MASK                       0x00000100
#define _CNPUC_CNPUC8_LENGTH                     0x00000001

#define _CNPUC_CNPUC9_POSITION                   0x00000009
#define _CNPUC_CNPUC9_MASK                       0x00000200
#define _CNPUC_CNPUC9_LENGTH                     0x00000001

#define _CNPUC_w_POSITION                        0x00000000
#define _CNPUC_w_MASK                            0xFFFFFFFF
#define _CNPUC_w_LENGTH                          0x00000020

#define _CNPDC_CNPDC0_POSITION                   0x00000000
#define _CNPDC_CNPDC0_MASK                       0x00000001
#define _CNPDC_CNPDC0_LENGTH                     0x00000001

#define _CNPDC_CNPDC1_POSITION                   0x00000001
#define _CNPDC_CNPDC1_MASK                       0x00000002
#define _CNPDC_CNPDC1_LENGTH                     0x00000001

#define _CNPDC_CNPDC2_POSITION                   0x00000002
#define _CNPDC_CNPDC2_MASK                       0x00000004
#define _CNPDC_CNPDC2_LENGTH                     0x00000001

#define _CNPDC_CNPDC3_POSITION                   0x00000003
#define _CNPDC_CNPDC3_MASK                       0x00000008
#define _CNPDC_CNPDC3_LENGTH                     0x00000001

#define _CNPDC_CNPDC4_POSITION                   0x00000004
#define _CNPDC_CNPDC4_MASK                       0x00000010
#define _CNPDC_CNPDC4_LENGTH                     0x00000001

#define _CNPDC_CNPDC5_POSITION                   0x00000005
#define _CNPDC_CNPDC5_MASK                       0x00000020
#define _CNPDC_CNPDC5_LENGTH                     0x00000001

#define _CNPDC_CNPDC6_POSITION                   0x00000006
#define _CNPDC_CNPDC6_MASK                       0x00000040
#define _CNPDC_CNPDC6_LENGTH                     0x00000001

#define _CNPDC_CNPDC7_POSITION                   0x00000007
#define _CNPDC_CNPDC7_MASK                       0x00000080
#define _CNPDC_CNPDC7_LENGTH                     0x00000001

#define _CNPDC_CNPDC8_POSITION                   0x00000008
#define _CNPDC_CNPDC8_MASK                       0x00000100
#define _CNPDC_CNPDC8_LENGTH                     0x00000001

#define _CNPDC_CNPDC9_POSITION                   0x00000009
#define _CNPDC_CNPDC9_MASK                       0x00000200
#define _CNPDC_CNPDC9_LENGTH                     0x00000001

#define _CNPDC_w_POSITION                        0x00000000
#define _CNPDC_w_MASK                            0xFFFFFFFF
#define _CNPDC_w_LENGTH                          0x00000020

#define _CNCONC_SIDL_POSITION                    0x0000000D
#define _CNCONC_SIDL_MASK                        0x00002000
#define _CNCONC_SIDL_LENGTH                      0x00000001

#define _CNCONC_ON_POSITION                      0x0000000F
#define _CNCONC_ON_MASK                          0x00008000
#define _CNCONC_ON_LENGTH                        0x00000001

#define _CNCONC_w_POSITION                       0x00000000
#define _CNCONC_w_MASK                           0xFFFFFFFF
#define _CNCONC_w_LENGTH                         0x00000020

#define _CNENC_CNIEC0_POSITION                   0x00000000
#define _CNENC_CNIEC0_MASK                       0x00000001
#define _CNENC_CNIEC0_LENGTH                     0x00000001

#define _CNENC_CNIEC1_POSITION                   0x00000001
#define _CNENC_CNIEC1_MASK                       0x00000002
#define _CNENC_CNIEC1_LENGTH                     0x00000001

#define _CNENC_CNIEC2_POSITION                   0x00000002
#define _CNENC_CNIEC2_MASK                       0x00000004
#define _CNENC_CNIEC2_LENGTH                     0x00000001

#define _CNENC_CNIEC3_POSITION                   0x00000003
#define _CNENC_CNIEC3_MASK                       0x00000008
#define _CNENC_CNIEC3_LENGTH                     0x00000001

#define _CNENC_CNIEC4_POSITION                   0x00000004
#define _CNENC_CNIEC4_MASK                       0x00000010
#define _CNENC_CNIEC4_LENGTH                     0x00000001

#define _CNENC_CNIEC5_POSITION                   0x00000005
#define _CNENC_CNIEC5_MASK                       0x00000020
#define _CNENC_CNIEC5_LENGTH                     0x00000001

#define _CNENC_CNIEC6_POSITION                   0x00000006
#define _CNENC_CNIEC6_MASK                       0x00000040
#define _CNENC_CNIEC6_LENGTH                     0x00000001

#define _CNENC_CNIEC7_POSITION                   0x00000007
#define _CNENC_CNIEC7_MASK                       0x00000080
#define _CNENC_CNIEC7_LENGTH                     0x00000001

#define _CNENC_CNIEC8_POSITION                   0x00000008
#define _CNENC_CNIEC8_MASK                       0x00000100
#define _CNENC_CNIEC8_LENGTH                     0x00000001

#define _CNENC_CNIEC9_POSITION                   0x00000009
#define _CNENC_CNIEC9_MASK                       0x00000200
#define _CNENC_CNIEC9_LENGTH                     0x00000001

#define _CNENC_w_POSITION                        0x00000000
#define _CNENC_w_MASK                            0xFFFFFFFF
#define _CNENC_w_LENGTH                          0x00000020

#define _CNSTATC_CNSTATC0_POSITION               0x00000000
#define _CNSTATC_CNSTATC0_MASK                   0x00000001
#define _CNSTATC_CNSTATC0_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC1_POSITION               0x00000001
#define _CNSTATC_CNSTATC1_MASK                   0x00000002
#define _CNSTATC_CNSTATC1_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC2_POSITION               0x00000002
#define _CNSTATC_CNSTATC2_MASK                   0x00000004
#define _CNSTATC_CNSTATC2_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC3_POSITION               0x00000003
#define _CNSTATC_CNSTATC3_MASK                   0x00000008
#define _CNSTATC_CNSTATC3_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC4_POSITION               0x00000004
#define _CNSTATC_CNSTATC4_MASK                   0x00000010
#define _CNSTATC_CNSTATC4_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC5_POSITION               0x00000005
#define _CNSTATC_CNSTATC5_MASK                   0x00000020
#define _CNSTATC_CNSTATC5_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC6_POSITION               0x00000006
#define _CNSTATC_CNSTATC6_MASK                   0x00000040
#define _CNSTATC_CNSTATC6_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC7_POSITION               0x00000007
#define _CNSTATC_CNSTATC7_MASK                   0x00000080
#define _CNSTATC_CNSTATC7_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC8_POSITION               0x00000008
#define _CNSTATC_CNSTATC8_MASK                   0x00000100
#define _CNSTATC_CNSTATC8_LENGTH                 0x00000001

#define _CNSTATC_CNSTATC9_POSITION               0x00000009
#define _CNSTATC_CNSTATC9_MASK                   0x00000200
#define _CNSTATC_CNSTATC9_LENGTH                 0x00000001

#define _CNSTATC_w_POSITION                      0x00000000
#define _CNSTATC_w_MASK                          0xFFFFFFFF
#define _CNSTATC_w_LENGTH                        0x00000020

#define _DEVCFG3_USERID_POSITION                 0x00000000
#define _DEVCFG3_USERID_MASK                     0x0000FFFF
#define _DEVCFG3_USERID_LENGTH                   0x00000010

#define _DEVCFG3_PMDL1WAY_POSITION               0x0000001C
#define _DEVCFG3_PMDL1WAY_MASK                   0x10000000
#define _DEVCFG3_PMDL1WAY_LENGTH                 0x00000001

#define _DEVCFG3_IOL1WAY_POSITION                0x0000001D
#define _DEVCFG3_IOL1WAY_MASK                    0x20000000
#define _DEVCFG3_IOL1WAY_LENGTH                  0x00000001

#define _DEVCFG3_FUSBIDIO_POSITION               0x0000001E
#define _DEVCFG3_FUSBIDIO_MASK                   0x40000000
#define _DEVCFG3_FUSBIDIO_LENGTH                 0x00000001

#define _DEVCFG3_FVBUSONIO_POSITION              0x0000001F
#define _DEVCFG3_FVBUSONIO_MASK                  0x80000000
#define _DEVCFG3_FVBUSONIO_LENGTH                0x00000001

#define _DEVCFG3_w_POSITION                      0x00000000
#define _DEVCFG3_w_MASK                          0xFFFFFFFF
#define _DEVCFG3_w_LENGTH                        0x00000020

#define _DEVCFG2_FPLLIDIV_POSITION               0x00000000
#define _DEVCFG2_FPLLIDIV_MASK                   0x00000007
#define _DEVCFG2_FPLLIDIV_LENGTH                 0x00000003

#define _DEVCFG2_FPLLMUL_POSITION                0x00000004
#define _DEVCFG2_FPLLMUL_MASK                    0x00000070
#define _DEVCFG2_FPLLMUL_LENGTH                  0x00000003

#define _DEVCFG2_UPLLIDIV_POSITION               0x00000008
#define _DEVCFG2_UPLLIDIV_MASK                   0x00000700
#define _DEVCFG2_UPLLIDIV_LENGTH                 0x00000003

#define _DEVCFG2_UPLLEN_POSITION                 0x0000000F
#define _DEVCFG2_UPLLEN_MASK                     0x00008000
#define _DEVCFG2_UPLLEN_LENGTH                   0x00000001

#define _DEVCFG2_FPLLODIV_POSITION               0x00000010
#define _DEVCFG2_FPLLODIV_MASK                   0x00070000
#define _DEVCFG2_FPLLODIV_LENGTH                 0x00000003

#define _DEVCFG2_w_POSITION                      0x00000000
#define _DEVCFG2_w_MASK                          0xFFFFFFFF
#define _DEVCFG2_w_LENGTH                        0x00000020

#define _DEVCFG1_FNOSC_POSITION                  0x00000000
#define _DEVCFG1_FNOSC_MASK                      0x00000007
#define _DEVCFG1_FNOSC_LENGTH                    0x00000003

#define _DEVCFG1_FSOSCEN_POSITION                0x00000005
#define _DEVCFG1_FSOSCEN_MASK                    0x00000020
#define _DEVCFG1_FSOSCEN_LENGTH                  0x00000001

#define _DEVCFG1_IESO_POSITION                   0x00000007
#define _DEVCFG1_IESO_MASK                       0x00000080
#define _DEVCFG1_IESO_LENGTH                     0x00000001

#define _DEVCFG1_POSCMOD_POSITION                0x00000008
#define _DEVCFG1_POSCMOD_MASK                    0x00000300
#define _DEVCFG1_POSCMOD_LENGTH                  0x00000002

#define _DEVCFG1_OSCIOFNC_POSITION               0x0000000A
#define _DEVCFG1_OSCIOFNC_MASK                   0x00000400
#define _DEVCFG1_OSCIOFNC_LENGTH                 0x00000001

#define _DEVCFG1_FPBDIV_POSITION                 0x0000000C
#define _DEVCFG1_FPBDIV_MASK                     0x00003000
#define _DEVCFG1_FPBDIV_LENGTH                   0x00000002

#define _DEVCFG1_FCKSM_POSITION                  0x0000000E
#define _DEVCFG1_FCKSM_MASK                      0x0000C000
#define _DEVCFG1_FCKSM_LENGTH                    0x00000002

#define _DEVCFG1_WDTPS_POSITION                  0x00000010
#define _DEVCFG1_WDTPS_MASK                      0x001F0000
#define _DEVCFG1_WDTPS_LENGTH                    0x00000005

#define _DEVCFG1_WINDIS_POSITION                 0x00000016
#define _DEVCFG1_WINDIS_MASK                     0x00400000
#define _DEVCFG1_WINDIS_LENGTH                   0x00000001

#define _DEVCFG1_FWDTEN_POSITION                 0x00000017
#define _DEVCFG1_FWDTEN_MASK                     0x00800000
#define _DEVCFG1_FWDTEN_LENGTH                   0x00000001

#define _DEVCFG1_FWDTWINSZ_POSITION              0x00000018
#define _DEVCFG1_FWDTWINSZ_MASK                  0x03000000
#define _DEVCFG1_FWDTWINSZ_LENGTH                0x00000002

#define _DEVCFG1_w_POSITION                      0x00000000
#define _DEVCFG1_w_MASK                          0xFFFFFFFF
#define _DEVCFG1_w_LENGTH                        0x00000020

#define _DEVCFG0_DEBUG_POSITION                  0x00000000
#define _DEVCFG0_DEBUG_MASK                      0x00000003
#define _DEVCFG0_DEBUG_LENGTH                    0x00000002

#define _DEVCFG0_JTAGEN_POSITION                 0x00000002
#define _DEVCFG0_JTAGEN_MASK                     0x00000004
#define _DEVCFG0_JTAGEN_LENGTH                   0x00000001

#define _DEVCFG0_ICESEL_POSITION                 0x00000003
#define _DEVCFG0_ICESEL_MASK                     0x00000018
#define _DEVCFG0_ICESEL_LENGTH                   0x00000002

#define _DEVCFG0_PWP_POSITION                    0x0000000A
#define _DEVCFG0_PWP_MASK                        0x0000FC00
#define _DEVCFG0_PWP_LENGTH                      0x00000006

#define _DEVCFG0_BWP_POSITION                    0x00000018
#define _DEVCFG0_BWP_MASK                        0x01000000
#define _DEVCFG0_BWP_LENGTH                      0x00000001

#define _DEVCFG0_CP_POSITION                     0x0000001C
#define _DEVCFG0_CP_MASK                         0x10000000
#define _DEVCFG0_CP_LENGTH                       0x00000001

#define _DEVCFG0_FDEBUG_POSITION                 0x00000000
#define _DEVCFG0_FDEBUG_MASK                     0x00000003
#define _DEVCFG0_FDEBUG_LENGTH                   0x00000002

#define _DEVCFG0_w_POSITION                      0x00000000
#define _DEVCFG0_w_MASK                          0xFFFFFFFF
#define _DEVCFG0_w_LENGTH                        0x00000020

/* Vector Numbers */
#define _CORE_TIMER_VECTOR                       0
#define _CORE_SOFTWARE_0_VECTOR                  1
#define _CORE_SOFTWARE_1_VECTOR                  2
#define _EXTERNAL_0_VECTOR                       3
#define _TIMER_1_VECTOR                          4
#define _INPUT_CAPTURE_1_VECTOR                  5
#define _OUTPUT_COMPARE_1_VECTOR                 6
#define _EXTERNAL_1_VECTOR                       7
#define _TIMER_2_VECTOR                          8
#define _INPUT_CAPTURE_2_VECTOR                  9
#define _OUTPUT_COMPARE_2_VECTOR                 10
#define _EXTERNAL_2_VECTOR                       11
#define _TIMER_3_VECTOR                          12
#define _INPUT_CAPTURE_3_VECTOR                  13
#define _OUTPUT_COMPARE_3_VECTOR                 14
#define _EXTERNAL_3_VECTOR                       15
#define _TIMER_4_VECTOR                          16
#define _INPUT_CAPTURE_4_VECTOR                  17
#define _OUTPUT_COMPARE_4_VECTOR                 18
#define _EXTERNAL_4_VECTOR                       19
#define _TIMER_5_VECTOR                          20
#define _INPUT_CAPTURE_5_VECTOR                  21
#define _OUTPUT_COMPARE_5_VECTOR                 22
#define _ADC_VECTOR                              23
#define _FAIL_SAFE_MONITOR_VECTOR                24
#define _RTCC_VECTOR                             25
#define _FCE_VECTOR                              26
#define _COMPARATOR_1_VECTOR                     27
#define _COMPARATOR_2_VECTOR                     28
#define _COMPARATOR_3_VECTOR                     29
#define _USB_1_VECTOR                            30
#define _SPI_1_VECTOR                            31
#define _UART_1_VECTOR                           32
#define _I2C_1_VECTOR                            33
#define _CHANGE_NOTICE_VECTOR                    34
#define _PMP_VECTOR                              35
#define _SPI_2_VECTOR                            36
#define _UART_2_VECTOR                           37
#define _I2C_2_VECTOR                            38
#define _CTMU_VECTOR                             39
#define _DMA_0_VECTOR                            40
#define _DMA_1_VECTOR                            41
#define _DMA_2_VECTOR                            42
#define _DMA_3_VECTOR                            43

/* IRQ Numbers */
#define _CORE_TIMER_IRQ                          0
#define _CORE_SOFTWARE_0_IRQ                     1
#define _CORE_SOFTWARE_1_IRQ                     2
#define _EXTERNAL_0_IRQ                          3
#define _TIMER_1_IRQ                             4
#define _INPUT_CAPTURE_ERROR_1_IRQ               5
#define _INPUT_CAPTURE_1_IRQ                     6
#define _OUTPUT_COMPARE_1_IRQ                    7
#define _EXTERNAL_1_IRQ                          8
#define _TIMER_2_IRQ                             9
#define _INPUT_CAPTURE_ERROR_2_IRQ               10
#define _INPUT_CAPTURE_2_IRQ                     11
#define _OUTPUT_COMPARE_2_IRQ                    12
#define _EXTERNAL_2_IRQ                          13
#define _TIMER_3_IRQ                             14
#define _INPUT_CAPTURE_ERROR_3_IRQ               15
#define _INPUT_CAPTURE_3_IRQ                     16
#define _OUTPUT_COMPARE_3_IRQ                    17
#define _EXTERNAL_3_IRQ                          18
#define _TIMER_4_IRQ                             19
#define _INPUT_CAPTURE_ERROR_4_IRQ               20
#define _INPUT_CAPTURE_4_IRQ                     21
#define _OUTPUT_COMPARE_4_IRQ                    22
#define _EXTERNAL_4_IRQ                          23
#define _TIMER_5_IRQ                             24
#define _INPUT_CAPTURE_ERROR_5_IRQ               25
#define _INPUT_CAPTURE_5_IRQ                     26
#define _OUTPUT_COMPARE_5_IRQ                    27
#define _ADC_IRQ                                 28
#define _FAIL_SAFE_MONITOR_IRQ                   29
#define _RTCC_IRQ                                30
#define _FLASH_CONTROL_IRQ                       31
#define _COMPARATOR_1_IRQ                        32
#define _COMPARATOR_2_IRQ                        33
#define _COMPARATOR_3_IRQ                        34
#define _USB_IRQ                                 35
#define _SPI1_ERR_IRQ                            36
#define _SPI1_RX_IRQ                             37
#define _SPI1_TX_IRQ                             38
#define _UART1_ERR_IRQ                           39
#define _UART1_RX_IRQ                            40
#define _UART1_TX_IRQ                            41
#define _I2C1_BUS_IRQ                            42
#define _I2C1_SLAVE_IRQ                          43
#define _I2C1_MASTER_IRQ                         44
#define _CHANGE_NOTICE_A_IRQ                     45
#define _CHANGE_NOTICE_B_IRQ                     46
#define _CHANGE_NOTICE_C_IRQ                     47
#define _PMP_IRQ                                 48
#define _PMP_ERROR_IRQ                           49
#define _SPI2_ERR_IRQ                            50
#define _SPI2_RX_IRQ                             51
#define _SPI2_TX_IRQ                             52
#define _UART2_ERR_IRQ                           53
#define _UART2_RX_IRQ                            54
#define _UART2_TX_IRQ                            55
#define _I2C2_BUS_IRQ                            56
#define _I2C2_SLAVE_IRQ                          57
#define _I2C2_MASTER_IRQ                         58
#define _CTMU_IRQ                                59
#define _DMA0_IRQ                                60
#define _DMA1_IRQ                                61
#define _DMA2_IRQ                                62
#define _DMA3_IRQ                                63

/* Device Peripherals */
#define _ADC10
#define _BMX
#define _CFG
#define _CMP
#define _CMP1
#define _CMP2
#define _CMP3
#define _CTMU
#define _CVR
#define _DMAC
#define _DMAC0
#define _DMAC1
#define _DMAC2
#define _DMAC3
#define _I2C1
#define _I2C1A
#define _I2C2
#define _I2C2A
#define _ICAP1
#define _ICAP2
#define _ICAP3
#define _ICAP4
#define _ICAP5
#define _INT
#define _NVM
#define _OCMP1
#define _OCMP2
#define _OCMP3
#define _OCMP4
#define _OCMP5
#define _OSC
#define _PMP
#define _PORTA
#define _PORTB
#define _PORTC
#define _RCON
#define _RTCC
#define _SPI1
#define _SPI2
#define _TMR1
#define _TMR2
#define _TMR23
#define _TMR3
#define _TMR4
#define _TMR45
#define _TMR5
#define _UART1
#define _UART1A
#define _UART2
#define _UART3A
#define _USB
#define _WDT

/* Base Addresses for Peripherals */
#define _ADC10_BASE_ADDRESS                      0xBF809000
#define _BMX_BASE_ADDRESS                        0xBF882000
#define _CFG_BASE_ADDRESS                        0xBF80F200
#define _CMP1_BASE_ADDRESS                       0xBF80A000
#define _CMP2_BASE_ADDRESS                       0xBF80A010
#define _CMP3_BASE_ADDRESS                       0xBF80A020
#define _CMP_BASE_ADDRESS                        0xBF80A000
#define _CTMU_BASE_ADDRESS                       0xBF80A200
#define _CVR_BASE_ADDRESS                        0xBF809800
#define _DMAC0_BASE_ADDRESS                      0xBF883060
#define _DMAC1_BASE_ADDRESS                      0xBF883120
#define _DMAC2_BASE_ADDRESS                      0xBF8831E0
#define _DMAC3_BASE_ADDRESS                      0xBF8832A0
#define _DMAC_BASE_ADDRESS                       0xBF883000
#define _I2C1A_BASE_ADDRESS                      0xBF805000
#define _I2C1_BASE_ADDRESS                       0xBF805000
#define _I2C2A_BASE_ADDRESS                      0xBF805100
#define _I2C2_BASE_ADDRESS                       0xBF805100
#define _ICAP1_BASE_ADDRESS                      0xBF802000
#define _ICAP2_BASE_ADDRESS                      0xBF802200
#define _ICAP3_BASE_ADDRESS                      0xBF802400
#define _ICAP4_BASE_ADDRESS                      0xBF802600
#define _ICAP5_BASE_ADDRESS                      0xBF802800
#define _INT_BASE_ADDRESS                        0xBF881000
#define _NVM_BASE_ADDRESS                        0xBF80F400
#define _OCMP1_BASE_ADDRESS                      0xBF803000
#define _OCMP2_BASE_ADDRESS                      0xBF803200
#define _OCMP3_BASE_ADDRESS                      0xBF803400
#define _OCMP4_BASE_ADDRESS                      0xBF803600
#define _OCMP5_BASE_ADDRESS                      0xBF803800
#define _OSC_BASE_ADDRESS                        0xBF80F000
#define _PMP_BASE_ADDRESS                        0xBF807000
#define _PORTA_BASE_ADDRESS                      0xBF886020
#define _PORTB_BASE_ADDRESS                      0xBF886120
#define _PORTC_BASE_ADDRESS                      0xBF886220
#define _RCON_BASE_ADDRESS                       0xBF80F600
#define _RTCC_BASE_ADDRESS                       0xBF800200
#define _SPI1_BASE_ADDRESS                       0xBF805800
#define _SPI2_BASE_ADDRESS                       0xBF805A00
#define _TMR1_BASE_ADDRESS                       0xBF800600
#define _TMR23_BASE_ADDRESS                      0xBF800800
#define _TMR2_BASE_ADDRESS                       0xBF800800
#define _TMR3_BASE_ADDRESS                       0xBF800A00
#define _TMR45_BASE_ADDRESS                      0xBF800C00
#define _TMR4_BASE_ADDRESS                       0xBF800C00
#define _TMR5_BASE_ADDRESS                       0xBF800E00
#define _UART1A_BASE_ADDRESS                     0xBF806000
#define _UART1_BASE_ADDRESS                      0xBF806000
#define _UART2_BASE_ADDRESS                      0xBF806200
#define _UART3A_BASE_ADDRESS                     0xBF806200
#define _USB_BASE_ADDRESS                        0xBF885040
#define _WDT_BASE_ADDRESS                        0xBF800000

/* Default Memory-region macros */
#define __EXCEPTION_MEM_BASE                     0x9D00F000
#define __EXCEPTION_MEM_LENGTH                   0x1000
#define __KSEG0_PROGRAM_MEM_BASE                 0x9D000000
#define __KSEG0_PROGRAM_MEM_LENGTH               0xF000
#define __DEBUG_EXEC_MEM_BASE                    0x9FC00490
#define __DEBUG_EXEC_MEM_LENGTH                  0x760
#define __KSEG1_BOOT_MEM_BASE                    0xBFC00000
#define __KSEG1_BOOT_MEM_LENGTH                  0x490
#define __KSEG1_DATA_MEM_BASE                    0xA0000000
#define __KSEG1_DATA_MEM_LENGTH                  0x4000
#define __CONFIGSFRS_BASE                        0xBFC00BF0
#define __CONFIGSFRS_LENGTH                      0x10
#define __SFRS_BASE                              0xBF800000
#define __SFRS_LENGTH                            0x100000

/*  The following device macros are predefined by the MPLAB XC32
 *  compiler when compiling with the -mprocessor=<device> option.
 *  We also define them here to help the MPLAB X editor evaluate
 *  them correctly.
 */
#ifndef __32MX230F064D
#  define __32MX230F064D 1
#endif
#ifndef __32MX230F064D__
#  define __32MX230F064D__ 1
#endif
#ifndef __XC__
#  define __XC__ 1
#endif
#ifndef __XC
#  define __XC 1
#endif
#ifndef __XC32__
#  define __XC32__ 1
#endif
#ifndef __XC32
#  define __XC32 1
#endif
#ifndef __PIC32MX
#  define __PIC32MX 1
#endif
#ifndef __PIC32MX__
#  define __PIC32MX__ 1
#endif
#ifndef __PIC32_FLASH_SIZE
#  define __PIC32_FLASH_SIZE 60
#endif
#ifndef __PIC32_FEATURE_SET
#  define __PIC32_FEATURE_SET 230
#endif
#ifndef __PIC32_FEATURE_SET__
#  define __PIC32_FEATURE_SET__ 230
#endif
#ifndef __PIC32_MEMORY_SIZE
#  define __PIC32_MEMORY_SIZE 64
#endif
#ifndef __PIC32_MEMORY_SIZE__
#  define __PIC32_MEMORY_SIZE__ 64
#endif
#ifndef __PIC32_PIN_SET
#  define __PIC32_PIN_SET 'D'
#endif

#ifndef __PIC32_PIN_SET__
#  define __PIC32_PIN_SET__ 'D'
#endif

/*  The following device macros indicate which core features are
 *  available on this device.
 */
#ifndef __PIC32_HAS_MIPS32R2
# define __PIC32_HAS_MIPS32R2 1
#endif
#ifndef __PIC32_HAS_MIPS16
# define __PIC32_HAS_MIPS16 1
#endif
#ifndef __PIC32_HAS_INIT_DATA
# define __PIC32_HAS_INIT_DATA 1
#endif
#ifndef __PIC32_SRS_SET_COUNT
# define __PIC32_SRS_SET_COUNT 1
#endif

/* include generic header file for backwards compatibility with old C32 v1.xx code */
/* WARNING: Macros from this file are deprecated and should not be used in new     */
/*          source code.                                                           */
#include "proc/ppic32mx.h"



#endif
