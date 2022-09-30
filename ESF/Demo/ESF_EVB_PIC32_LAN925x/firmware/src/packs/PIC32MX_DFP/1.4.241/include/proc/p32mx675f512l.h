/*-------------------------------------------------------------------------
 * PIC32MX675F512L processor header
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
#ifndef __32MX675F512L_H
#define __32MX675F512L_H

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
    uint32_t :1;
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
#define I2C3CON I2C3CON
extern volatile uint32_t   I2C3CON __attribute__((section("sfrs"), address(0xBF805000)));
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
} __I2C3CONbits_t;
extern volatile __I2C3CONbits_t I2C3CONbits __asm__ ("I2C3CON") __attribute__((section("sfrs"), address(0xBF805000)));
extern volatile uint32_t        I2C1ACONCLR __attribute__((section("sfrs"),address(0xBF805004)));
extern volatile uint32_t        I2C3CONCLR __attribute__((section("sfrs"),address(0xBF805004)));
extern volatile uint32_t        I2C1ACONSET __attribute__((section("sfrs"),address(0xBF805008)));
extern volatile uint32_t        I2C3CONSET __attribute__((section("sfrs"),address(0xBF805008)));
extern volatile uint32_t        I2C1ACONINV __attribute__((section("sfrs"),address(0xBF80500C)));
extern volatile uint32_t        I2C3CONINV __attribute__((section("sfrs"),address(0xBF80500C)));
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
#define I2C3STAT I2C3STAT
extern volatile uint32_t   I2C3STAT __attribute__((section("sfrs"), address(0xBF805010)));
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
} __I2C3STATbits_t;
extern volatile __I2C3STATbits_t I2C3STATbits __asm__ ("I2C3STAT") __attribute__((section("sfrs"), address(0xBF805010)));
extern volatile uint32_t        I2C1ASTATCLR __attribute__((section("sfrs"),address(0xBF805014)));
extern volatile uint32_t        I2C3STATCLR __attribute__((section("sfrs"),address(0xBF805014)));
extern volatile uint32_t        I2C1ASTATSET __attribute__((section("sfrs"),address(0xBF805018)));
extern volatile uint32_t        I2C3STATSET __attribute__((section("sfrs"),address(0xBF805018)));
extern volatile uint32_t        I2C1ASTATINV __attribute__((section("sfrs"),address(0xBF80501C)));
extern volatile uint32_t        I2C3STATINV __attribute__((section("sfrs"),address(0xBF80501C)));
#define I2C1AADD I2C1AADD
extern volatile uint32_t   I2C1AADD __attribute__((section("sfrs"), address(0xBF805020)));
#define I2C3ADD I2C3ADD
extern volatile uint32_t   I2C3ADD __attribute__((section("sfrs"), address(0xBF805020)));
extern volatile uint32_t        I2C1AADDCLR __attribute__((section("sfrs"),address(0xBF805024)));
extern volatile uint32_t        I2C3ADDCLR __attribute__((section("sfrs"),address(0xBF805024)));
extern volatile uint32_t        I2C1AADDSET __attribute__((section("sfrs"),address(0xBF805028)));
extern volatile uint32_t        I2C3ADDSET __attribute__((section("sfrs"),address(0xBF805028)));
extern volatile uint32_t        I2C1AADDINV __attribute__((section("sfrs"),address(0xBF80502C)));
extern volatile uint32_t        I2C3ADDINV __attribute__((section("sfrs"),address(0xBF80502C)));
#define I2C1AMSK I2C1AMSK
extern volatile uint32_t   I2C1AMSK __attribute__((section("sfrs"), address(0xBF805030)));
#define I2C3MSK I2C3MSK
extern volatile uint32_t   I2C3MSK __attribute__((section("sfrs"), address(0xBF805030)));
extern volatile uint32_t        I2C1AMSKCLR __attribute__((section("sfrs"),address(0xBF805034)));
extern volatile uint32_t        I2C3MSKCLR __attribute__((section("sfrs"),address(0xBF805034)));
extern volatile uint32_t        I2C1AMSKSET __attribute__((section("sfrs"),address(0xBF805038)));
extern volatile uint32_t        I2C3MSKSET __attribute__((section("sfrs"),address(0xBF805038)));
extern volatile uint32_t        I2C1AMSKINV __attribute__((section("sfrs"),address(0xBF80503C)));
extern volatile uint32_t        I2C3MSKINV __attribute__((section("sfrs"),address(0xBF80503C)));
#define I2C1ABRG I2C1ABRG
extern volatile uint32_t   I2C1ABRG __attribute__((section("sfrs"), address(0xBF805040)));
#define I2C3BRG I2C3BRG
extern volatile uint32_t   I2C3BRG __attribute__((section("sfrs"), address(0xBF805040)));
extern volatile uint32_t        I2C1ABRGCLR __attribute__((section("sfrs"),address(0xBF805044)));
extern volatile uint32_t        I2C3BRGCLR __attribute__((section("sfrs"),address(0xBF805044)));
extern volatile uint32_t        I2C1ABRGSET __attribute__((section("sfrs"),address(0xBF805048)));
extern volatile uint32_t        I2C3BRGSET __attribute__((section("sfrs"),address(0xBF805048)));
extern volatile uint32_t        I2C1ABRGINV __attribute__((section("sfrs"),address(0xBF80504C)));
extern volatile uint32_t        I2C3BRGINV __attribute__((section("sfrs"),address(0xBF80504C)));
#define I2C1ATRN I2C1ATRN
extern volatile uint32_t   I2C1ATRN __attribute__((section("sfrs"), address(0xBF805050)));
#define I2C3TRN I2C3TRN
extern volatile uint32_t   I2C3TRN __attribute__((section("sfrs"), address(0xBF805050)));
extern volatile uint32_t        I2C1ATRNCLR __attribute__((section("sfrs"),address(0xBF805054)));
extern volatile uint32_t        I2C3TRNCLR __attribute__((section("sfrs"),address(0xBF805054)));
extern volatile uint32_t        I2C1ATRNSET __attribute__((section("sfrs"),address(0xBF805058)));
extern volatile uint32_t        I2C3TRNSET __attribute__((section("sfrs"),address(0xBF805058)));
extern volatile uint32_t        I2C1ATRNINV __attribute__((section("sfrs"),address(0xBF80505C)));
extern volatile uint32_t        I2C3TRNINV __attribute__((section("sfrs"),address(0xBF80505C)));
#define I2C1ARCV I2C1ARCV
extern volatile uint32_t   I2C1ARCV __attribute__((section("sfrs"), address(0xBF805060)));
#define I2C3RCV I2C3RCV
extern volatile uint32_t   I2C3RCV __attribute__((section("sfrs"), address(0xBF805060)));
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
#define I2C4CON I2C4CON
extern volatile uint32_t   I2C4CON __attribute__((section("sfrs"), address(0xBF805100)));
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
} __I2C4CONbits_t;
extern volatile __I2C4CONbits_t I2C4CONbits __asm__ ("I2C4CON") __attribute__((section("sfrs"), address(0xBF805100)));
extern volatile uint32_t        I2C2ACONCLR __attribute__((section("sfrs"),address(0xBF805104)));
extern volatile uint32_t        I2C4CONCLR __attribute__((section("sfrs"),address(0xBF805104)));
extern volatile uint32_t        I2C2ACONSET __attribute__((section("sfrs"),address(0xBF805108)));
extern volatile uint32_t        I2C4CONSET __attribute__((section("sfrs"),address(0xBF805108)));
extern volatile uint32_t        I2C2ACONINV __attribute__((section("sfrs"),address(0xBF80510C)));
extern volatile uint32_t        I2C4CONINV __attribute__((section("sfrs"),address(0xBF80510C)));
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
#define I2C4STAT I2C4STAT
extern volatile uint32_t   I2C4STAT __attribute__((section("sfrs"), address(0xBF805110)));
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
} __I2C4STATbits_t;
extern volatile __I2C4STATbits_t I2C4STATbits __asm__ ("I2C4STAT") __attribute__((section("sfrs"), address(0xBF805110)));
extern volatile uint32_t        I2C2ASTATCLR __attribute__((section("sfrs"),address(0xBF805114)));
extern volatile uint32_t        I2C4STATCLR __attribute__((section("sfrs"),address(0xBF805114)));
extern volatile uint32_t        I2C2ASTATSET __attribute__((section("sfrs"),address(0xBF805118)));
extern volatile uint32_t        I2C4STATSET __attribute__((section("sfrs"),address(0xBF805118)));
extern volatile uint32_t        I2C2ASTATINV __attribute__((section("sfrs"),address(0xBF80511C)));
extern volatile uint32_t        I2C4STATINV __attribute__((section("sfrs"),address(0xBF80511C)));
#define I2C2AADD I2C2AADD
extern volatile uint32_t   I2C2AADD __attribute__((section("sfrs"), address(0xBF805120)));
#define I2C4ADD I2C4ADD
extern volatile uint32_t   I2C4ADD __attribute__((section("sfrs"), address(0xBF805120)));
extern volatile uint32_t        I2C2AADDCLR __attribute__((section("sfrs"),address(0xBF805124)));
extern volatile uint32_t        I2C4ADDCLR __attribute__((section("sfrs"),address(0xBF805124)));
extern volatile uint32_t        I2C2AADDSET __attribute__((section("sfrs"),address(0xBF805128)));
extern volatile uint32_t        I2C4ADDSET __attribute__((section("sfrs"),address(0xBF805128)));
extern volatile uint32_t        I2C2AADDINV __attribute__((section("sfrs"),address(0xBF80512C)));
extern volatile uint32_t        I2C4ADDINV __attribute__((section("sfrs"),address(0xBF80512C)));
#define I2C2AMSK I2C2AMSK
extern volatile uint32_t   I2C2AMSK __attribute__((section("sfrs"), address(0xBF805130)));
#define I2C4MSK I2C4MSK
extern volatile uint32_t   I2C4MSK __attribute__((section("sfrs"), address(0xBF805130)));
extern volatile uint32_t        I2C2AMSKCLR __attribute__((section("sfrs"),address(0xBF805134)));
extern volatile uint32_t        I2C4MSKCLR __attribute__((section("sfrs"),address(0xBF805134)));
extern volatile uint32_t        I2C2AMSKSET __attribute__((section("sfrs"),address(0xBF805138)));
extern volatile uint32_t        I2C4MSKSET __attribute__((section("sfrs"),address(0xBF805138)));
extern volatile uint32_t        I2C2AMSKINV __attribute__((section("sfrs"),address(0xBF80513C)));
extern volatile uint32_t        I2C4MSKINV __attribute__((section("sfrs"),address(0xBF80513C)));
#define I2C2ABRG I2C2ABRG
extern volatile uint32_t   I2C2ABRG __attribute__((section("sfrs"), address(0xBF805140)));
#define I2C4BRG I2C4BRG
extern volatile uint32_t   I2C4BRG __attribute__((section("sfrs"), address(0xBF805140)));
extern volatile uint32_t        I2C2ABRGCLR __attribute__((section("sfrs"),address(0xBF805144)));
extern volatile uint32_t        I2C4BRGCLR __attribute__((section("sfrs"),address(0xBF805144)));
extern volatile uint32_t        I2C2ABRGSET __attribute__((section("sfrs"),address(0xBF805148)));
extern volatile uint32_t        I2C4BRGSET __attribute__((section("sfrs"),address(0xBF805148)));
extern volatile uint32_t        I2C2ABRGINV __attribute__((section("sfrs"),address(0xBF80514C)));
extern volatile uint32_t        I2C4BRGINV __attribute__((section("sfrs"),address(0xBF80514C)));
#define I2C2ATRN I2C2ATRN
extern volatile uint32_t   I2C2ATRN __attribute__((section("sfrs"), address(0xBF805150)));
#define I2C4TRN I2C4TRN
extern volatile uint32_t   I2C4TRN __attribute__((section("sfrs"), address(0xBF805150)));
extern volatile uint32_t        I2C2ATRNCLR __attribute__((section("sfrs"),address(0xBF805154)));
extern volatile uint32_t        I2C4TRNCLR __attribute__((section("sfrs"),address(0xBF805154)));
extern volatile uint32_t        I2C2ATRNSET __attribute__((section("sfrs"),address(0xBF805158)));
extern volatile uint32_t        I2C4TRNSET __attribute__((section("sfrs"),address(0xBF805158)));
extern volatile uint32_t        I2C2ATRNINV __attribute__((section("sfrs"),address(0xBF80515C)));
extern volatile uint32_t        I2C4TRNINV __attribute__((section("sfrs"),address(0xBF80515C)));
#define I2C2ARCV I2C2ARCV
extern volatile uint32_t   I2C2ARCV __attribute__((section("sfrs"), address(0xBF805160)));
#define I2C4RCV I2C4RCV
extern volatile uint32_t   I2C4RCV __attribute__((section("sfrs"), address(0xBF805160)));
#define I2C3ACON I2C3ACON
extern volatile uint32_t   I2C3ACON __attribute__((section("sfrs"), address(0xBF805200)));
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
} __I2C3ACONbits_t;
extern volatile __I2C3ACONbits_t I2C3ACONbits __asm__ ("I2C3ACON") __attribute__((section("sfrs"), address(0xBF805200)));
#define I2C5CON I2C5CON
extern volatile uint32_t   I2C5CON __attribute__((section("sfrs"), address(0xBF805200)));
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
} __I2C5CONbits_t;
extern volatile __I2C5CONbits_t I2C5CONbits __asm__ ("I2C5CON") __attribute__((section("sfrs"), address(0xBF805200)));
extern volatile uint32_t        I2C3ACONCLR __attribute__((section("sfrs"),address(0xBF805204)));
extern volatile uint32_t        I2C5CONCLR __attribute__((section("sfrs"),address(0xBF805204)));
extern volatile uint32_t        I2C3ACONSET __attribute__((section("sfrs"),address(0xBF805208)));
extern volatile uint32_t        I2C5CONSET __attribute__((section("sfrs"),address(0xBF805208)));
extern volatile uint32_t        I2C3ACONINV __attribute__((section("sfrs"),address(0xBF80520C)));
extern volatile uint32_t        I2C5CONINV __attribute__((section("sfrs"),address(0xBF80520C)));
#define I2C3ASTAT I2C3ASTAT
extern volatile uint32_t   I2C3ASTAT __attribute__((section("sfrs"), address(0xBF805210)));
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
} __I2C3ASTATbits_t;
extern volatile __I2C3ASTATbits_t I2C3ASTATbits __asm__ ("I2C3ASTAT") __attribute__((section("sfrs"), address(0xBF805210)));
#define I2C5STAT I2C5STAT
extern volatile uint32_t   I2C5STAT __attribute__((section("sfrs"), address(0xBF805210)));
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
} __I2C5STATbits_t;
extern volatile __I2C5STATbits_t I2C5STATbits __asm__ ("I2C5STAT") __attribute__((section("sfrs"), address(0xBF805210)));
extern volatile uint32_t        I2C3ASTATCLR __attribute__((section("sfrs"),address(0xBF805214)));
extern volatile uint32_t        I2C5STATCLR __attribute__((section("sfrs"),address(0xBF805214)));
extern volatile uint32_t        I2C3ASTATSET __attribute__((section("sfrs"),address(0xBF805218)));
extern volatile uint32_t        I2C5STATSET __attribute__((section("sfrs"),address(0xBF805218)));
extern volatile uint32_t        I2C3ASTATINV __attribute__((section("sfrs"),address(0xBF80521C)));
extern volatile uint32_t        I2C5STATINV __attribute__((section("sfrs"),address(0xBF80521C)));
#define I2C3AADD I2C3AADD
extern volatile uint32_t   I2C3AADD __attribute__((section("sfrs"), address(0xBF805220)));
#define I2C5ADD I2C5ADD
extern volatile uint32_t   I2C5ADD __attribute__((section("sfrs"), address(0xBF805220)));
extern volatile uint32_t        I2C3AADDCLR __attribute__((section("sfrs"),address(0xBF805224)));
extern volatile uint32_t        I2C5ADDCLR __attribute__((section("sfrs"),address(0xBF805224)));
extern volatile uint32_t        I2C3AADDSET __attribute__((section("sfrs"),address(0xBF805228)));
extern volatile uint32_t        I2C5ADDSET __attribute__((section("sfrs"),address(0xBF805228)));
extern volatile uint32_t        I2C3AADDINV __attribute__((section("sfrs"),address(0xBF80522C)));
extern volatile uint32_t        I2C5ADDINV __attribute__((section("sfrs"),address(0xBF80522C)));
#define I2C3AMSK I2C3AMSK
extern volatile uint32_t   I2C3AMSK __attribute__((section("sfrs"), address(0xBF805230)));
#define I2C5MSK I2C5MSK
extern volatile uint32_t   I2C5MSK __attribute__((section("sfrs"), address(0xBF805230)));
extern volatile uint32_t        I2C3AMSKCLR __attribute__((section("sfrs"),address(0xBF805234)));
extern volatile uint32_t        I2C5MSKCLR __attribute__((section("sfrs"),address(0xBF805234)));
extern volatile uint32_t        I2C3AMSKSET __attribute__((section("sfrs"),address(0xBF805238)));
extern volatile uint32_t        I2C5MSKSET __attribute__((section("sfrs"),address(0xBF805238)));
extern volatile uint32_t        I2C3AMSKINV __attribute__((section("sfrs"),address(0xBF80523C)));
extern volatile uint32_t        I2C5MSKINV __attribute__((section("sfrs"),address(0xBF80523C)));
#define I2C3ABRG I2C3ABRG
extern volatile uint32_t   I2C3ABRG __attribute__((section("sfrs"), address(0xBF805240)));
#define I2C5BRG I2C5BRG
extern volatile uint32_t   I2C5BRG __attribute__((section("sfrs"), address(0xBF805240)));
extern volatile uint32_t        I2C3ABRGCLR __attribute__((section("sfrs"),address(0xBF805244)));
extern volatile uint32_t        I2C5BRGCLR __attribute__((section("sfrs"),address(0xBF805244)));
extern volatile uint32_t        I2C3ABRGSET __attribute__((section("sfrs"),address(0xBF805248)));
extern volatile uint32_t        I2C5BRGSET __attribute__((section("sfrs"),address(0xBF805248)));
extern volatile uint32_t        I2C3ABRGINV __attribute__((section("sfrs"),address(0xBF80524C)));
extern volatile uint32_t        I2C5BRGINV __attribute__((section("sfrs"),address(0xBF80524C)));
#define I2C3ATRN I2C3ATRN
extern volatile uint32_t   I2C3ATRN __attribute__((section("sfrs"), address(0xBF805250)));
#define I2C5TRN I2C5TRN
extern volatile uint32_t   I2C5TRN __attribute__((section("sfrs"), address(0xBF805250)));
extern volatile uint32_t        I2C3ATRNCLR __attribute__((section("sfrs"),address(0xBF805254)));
extern volatile uint32_t        I2C5TRNCLR __attribute__((section("sfrs"),address(0xBF805254)));
extern volatile uint32_t        I2C3ATRNSET __attribute__((section("sfrs"),address(0xBF805258)));
extern volatile uint32_t        I2C5TRNSET __attribute__((section("sfrs"),address(0xBF805258)));
extern volatile uint32_t        I2C3ATRNINV __attribute__((section("sfrs"),address(0xBF80525C)));
extern volatile uint32_t        I2C5TRNINV __attribute__((section("sfrs"),address(0xBF80525C)));
#define I2C3ARCV I2C3ARCV
extern volatile uint32_t   I2C3ARCV __attribute__((section("sfrs"), address(0xBF805260)));
#define I2C5RCV I2C5RCV
extern volatile uint32_t   I2C5RCV __attribute__((section("sfrs"), address(0xBF805260)));
#define I2C1CON I2C1CON
extern volatile uint32_t   I2C1CON __attribute__((section("sfrs"), address(0xBF805300)));
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
extern volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON") __attribute__((section("sfrs"), address(0xBF805300)));
extern volatile uint32_t        I2C1CONCLR __attribute__((section("sfrs"),address(0xBF805304)));
extern volatile uint32_t        I2C1CONSET __attribute__((section("sfrs"),address(0xBF805308)));
extern volatile uint32_t        I2C1CONINV __attribute__((section("sfrs"),address(0xBF80530C)));
#define I2C1STAT I2C1STAT
extern volatile uint32_t   I2C1STAT __attribute__((section("sfrs"), address(0xBF805310)));
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
extern volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT") __attribute__((section("sfrs"), address(0xBF805310)));
extern volatile uint32_t        I2C1STATCLR __attribute__((section("sfrs"),address(0xBF805314)));
extern volatile uint32_t        I2C1STATSET __attribute__((section("sfrs"),address(0xBF805318)));
extern volatile uint32_t        I2C1STATINV __attribute__((section("sfrs"),address(0xBF80531C)));
#define I2C1ADD I2C1ADD
extern volatile uint32_t   I2C1ADD __attribute__((section("sfrs"), address(0xBF805320)));
extern volatile uint32_t        I2C1ADDCLR __attribute__((section("sfrs"),address(0xBF805324)));
extern volatile uint32_t        I2C1ADDSET __attribute__((section("sfrs"),address(0xBF805328)));
extern volatile uint32_t        I2C1ADDINV __attribute__((section("sfrs"),address(0xBF80532C)));
#define I2C1MSK I2C1MSK
extern volatile uint32_t   I2C1MSK __attribute__((section("sfrs"), address(0xBF805330)));
extern volatile uint32_t        I2C1MSKCLR __attribute__((section("sfrs"),address(0xBF805334)));
extern volatile uint32_t        I2C1MSKSET __attribute__((section("sfrs"),address(0xBF805338)));
extern volatile uint32_t        I2C1MSKINV __attribute__((section("sfrs"),address(0xBF80533C)));
#define I2C1BRG I2C1BRG
extern volatile uint32_t   I2C1BRG __attribute__((section("sfrs"), address(0xBF805340)));
extern volatile uint32_t        I2C1BRGCLR __attribute__((section("sfrs"),address(0xBF805344)));
extern volatile uint32_t        I2C1BRGSET __attribute__((section("sfrs"),address(0xBF805348)));
extern volatile uint32_t        I2C1BRGINV __attribute__((section("sfrs"),address(0xBF80534C)));
#define I2C1TRN I2C1TRN
extern volatile uint32_t   I2C1TRN __attribute__((section("sfrs"), address(0xBF805350)));
extern volatile uint32_t        I2C1TRNCLR __attribute__((section("sfrs"),address(0xBF805354)));
extern volatile uint32_t        I2C1TRNSET __attribute__((section("sfrs"),address(0xBF805358)));
extern volatile uint32_t        I2C1TRNINV __attribute__((section("sfrs"),address(0xBF80535C)));
#define I2C1RCV I2C1RCV
extern volatile uint32_t   I2C1RCV __attribute__((section("sfrs"), address(0xBF805360)));
#define I2C2CON I2C2CON
extern volatile uint32_t   I2C2CON __attribute__((section("sfrs"), address(0xBF805400)));
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
extern volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON") __attribute__((section("sfrs"), address(0xBF805400)));
extern volatile uint32_t        I2C2CONCLR __attribute__((section("sfrs"),address(0xBF805404)));
extern volatile uint32_t        I2C2CONSET __attribute__((section("sfrs"),address(0xBF805408)));
extern volatile uint32_t        I2C2CONINV __attribute__((section("sfrs"),address(0xBF80540C)));
#define I2C2STAT I2C2STAT
extern volatile uint32_t   I2C2STAT __attribute__((section("sfrs"), address(0xBF805410)));
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
extern volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT") __attribute__((section("sfrs"), address(0xBF805410)));
extern volatile uint32_t        I2C2STATCLR __attribute__((section("sfrs"),address(0xBF805414)));
extern volatile uint32_t        I2C2STATSET __attribute__((section("sfrs"),address(0xBF805418)));
extern volatile uint32_t        I2C2STATINV __attribute__((section("sfrs"),address(0xBF80541C)));
#define I2C2ADD I2C2ADD
extern volatile uint32_t   I2C2ADD __attribute__((section("sfrs"), address(0xBF805420)));
extern volatile uint32_t        I2C2ADDCLR __attribute__((section("sfrs"),address(0xBF805424)));
extern volatile uint32_t        I2C2ADDSET __attribute__((section("sfrs"),address(0xBF805428)));
extern volatile uint32_t        I2C2ADDINV __attribute__((section("sfrs"),address(0xBF80542C)));
#define I2C2MSK I2C2MSK
extern volatile uint32_t   I2C2MSK __attribute__((section("sfrs"), address(0xBF805430)));
extern volatile uint32_t        I2C2MSKCLR __attribute__((section("sfrs"),address(0xBF805434)));
extern volatile uint32_t        I2C2MSKSET __attribute__((section("sfrs"),address(0xBF805438)));
extern volatile uint32_t        I2C2MSKINV __attribute__((section("sfrs"),address(0xBF80543C)));
#define I2C2BRG I2C2BRG
extern volatile uint32_t   I2C2BRG __attribute__((section("sfrs"), address(0xBF805440)));
extern volatile uint32_t        I2C2BRGCLR __attribute__((section("sfrs"),address(0xBF805444)));
extern volatile uint32_t        I2C2BRGSET __attribute__((section("sfrs"),address(0xBF805448)));
extern volatile uint32_t        I2C2BRGINV __attribute__((section("sfrs"),address(0xBF80544C)));
#define I2C2TRN I2C2TRN
extern volatile uint32_t   I2C2TRN __attribute__((section("sfrs"), address(0xBF805450)));
extern volatile uint32_t        I2C2TRNCLR __attribute__((section("sfrs"),address(0xBF805454)));
extern volatile uint32_t        I2C2TRNSET __attribute__((section("sfrs"),address(0xBF805458)));
extern volatile uint32_t        I2C2TRNINV __attribute__((section("sfrs"),address(0xBF80545C)));
#define I2C2RCV I2C2RCV
extern volatile uint32_t   I2C2RCV __attribute__((section("sfrs"), address(0xBF805460)));
#define SPI1ACON SPI1ACON
extern volatile uint32_t   SPI1ACON __attribute__((section("sfrs"), address(0xBF805800)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t :1;
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
    uint32_t :6;
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
} __SPI1ACONbits_t;
extern volatile __SPI1ACONbits_t SPI1ACONbits __asm__ ("SPI1ACON") __attribute__((section("sfrs"), address(0xBF805800)));
#define SPI3CON SPI3CON
extern volatile uint32_t   SPI3CON __attribute__((section("sfrs"), address(0xBF805800)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t :1;
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
    uint32_t :6;
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
} __SPI3CONbits_t;
extern volatile __SPI3CONbits_t SPI3CONbits __asm__ ("SPI3CON") __attribute__((section("sfrs"), address(0xBF805800)));
extern volatile uint32_t        SPI1ACONCLR __attribute__((section("sfrs"),address(0xBF805804)));
extern volatile uint32_t        SPI3CONCLR __attribute__((section("sfrs"),address(0xBF805804)));
extern volatile uint32_t        SPI1ACONSET __attribute__((section("sfrs"),address(0xBF805808)));
extern volatile uint32_t        SPI3CONSET __attribute__((section("sfrs"),address(0xBF805808)));
extern volatile uint32_t        SPI1ACONINV __attribute__((section("sfrs"),address(0xBF80580C)));
extern volatile uint32_t        SPI3CONINV __attribute__((section("sfrs"),address(0xBF80580C)));
#define SPI1ASTAT SPI1ASTAT
extern volatile uint32_t   SPI1ASTAT __attribute__((section("sfrs"), address(0xBF805810)));
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
    uint32_t :4;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1ASTATbits_t;
extern volatile __SPI1ASTATbits_t SPI1ASTATbits __asm__ ("SPI1ASTAT") __attribute__((section("sfrs"), address(0xBF805810)));
#define SPI3STAT SPI3STAT
extern volatile uint32_t   SPI3STAT __attribute__((section("sfrs"), address(0xBF805810)));
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
    uint32_t :4;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI3STATbits_t;
extern volatile __SPI3STATbits_t SPI3STATbits __asm__ ("SPI3STAT") __attribute__((section("sfrs"), address(0xBF805810)));
extern volatile uint32_t        SPI1ASTATCLR __attribute__((section("sfrs"),address(0xBF805814)));
extern volatile uint32_t        SPI3STATCLR __attribute__((section("sfrs"),address(0xBF805814)));
extern volatile uint32_t        SPI1ASTATSET __attribute__((section("sfrs"),address(0xBF805818)));
extern volatile uint32_t        SPI3STATSET __attribute__((section("sfrs"),address(0xBF805818)));
extern volatile uint32_t        SPI1ASTATINV __attribute__((section("sfrs"),address(0xBF80581C)));
extern volatile uint32_t        SPI3STATINV __attribute__((section("sfrs"),address(0xBF80581C)));
#define SPI1ABUF SPI1ABUF
extern volatile uint32_t   SPI1ABUF __attribute__((section("sfrs"), address(0xBF805820)));
#define SPI3BUF SPI3BUF
extern volatile uint32_t   SPI3BUF __attribute__((section("sfrs"), address(0xBF805820)));
#define SPI1ABRG SPI1ABRG
extern volatile uint32_t   SPI1ABRG __attribute__((section("sfrs"), address(0xBF805830)));
#define SPI3BRG SPI3BRG
extern volatile uint32_t   SPI3BRG __attribute__((section("sfrs"), address(0xBF805830)));
extern volatile uint32_t        SPI1ABRGCLR __attribute__((section("sfrs"),address(0xBF805834)));
extern volatile uint32_t        SPI3BRGCLR __attribute__((section("sfrs"),address(0xBF805834)));
extern volatile uint32_t        SPI1ABRGSET __attribute__((section("sfrs"),address(0xBF805838)));
extern volatile uint32_t        SPI3BRGSET __attribute__((section("sfrs"),address(0xBF805838)));
extern volatile uint32_t        SPI1ABRGINV __attribute__((section("sfrs"),address(0xBF80583C)));
extern volatile uint32_t        SPI3BRGINV __attribute__((section("sfrs"),address(0xBF80583C)));
#define SPI2ACON SPI2ACON
extern volatile uint32_t   SPI2ACON __attribute__((section("sfrs"), address(0xBF805A00)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t :1;
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
    uint32_t :6;
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
} __SPI2ACONbits_t;
extern volatile __SPI2ACONbits_t SPI2ACONbits __asm__ ("SPI2ACON") __attribute__((section("sfrs"), address(0xBF805A00)));
#define SPI2CON SPI2CON
extern volatile uint32_t   SPI2CON __attribute__((section("sfrs"), address(0xBF805A00)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t :1;
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
    uint32_t :6;
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
extern volatile uint32_t        SPI2ACONCLR __attribute__((section("sfrs"),address(0xBF805A04)));
extern volatile uint32_t        SPI2CONCLR __attribute__((section("sfrs"),address(0xBF805A04)));
extern volatile uint32_t        SPI2ACONSET __attribute__((section("sfrs"),address(0xBF805A08)));
extern volatile uint32_t        SPI2CONSET __attribute__((section("sfrs"),address(0xBF805A08)));
extern volatile uint32_t        SPI2ACONINV __attribute__((section("sfrs"),address(0xBF805A0C)));
extern volatile uint32_t        SPI2CONINV __attribute__((section("sfrs"),address(0xBF805A0C)));
#define SPI2ASTAT SPI2ASTAT
extern volatile uint32_t   SPI2ASTAT __attribute__((section("sfrs"), address(0xBF805A10)));
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
    uint32_t :4;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2ASTATbits_t;
extern volatile __SPI2ASTATbits_t SPI2ASTATbits __asm__ ("SPI2ASTAT") __attribute__((section("sfrs"), address(0xBF805A10)));
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
    uint32_t :4;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2STATbits_t;
extern volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT") __attribute__((section("sfrs"), address(0xBF805A10)));
extern volatile uint32_t        SPI2ASTATCLR __attribute__((section("sfrs"),address(0xBF805A14)));
extern volatile uint32_t        SPI2STATCLR __attribute__((section("sfrs"),address(0xBF805A14)));
extern volatile uint32_t        SPI2ASTATSET __attribute__((section("sfrs"),address(0xBF805A18)));
extern volatile uint32_t        SPI2STATSET __attribute__((section("sfrs"),address(0xBF805A18)));
extern volatile uint32_t        SPI2ASTATINV __attribute__((section("sfrs"),address(0xBF805A1C)));
extern volatile uint32_t        SPI2STATINV __attribute__((section("sfrs"),address(0xBF805A1C)));
#define SPI2ABUF SPI2ABUF
extern volatile uint32_t   SPI2ABUF __attribute__((section("sfrs"), address(0xBF805A20)));
#define SPI2BUF SPI2BUF
extern volatile uint32_t   SPI2BUF __attribute__((section("sfrs"), address(0xBF805A20)));
#define SPI2ABRG SPI2ABRG
extern volatile uint32_t   SPI2ABRG __attribute__((section("sfrs"), address(0xBF805A30)));
#define SPI2BRG SPI2BRG
extern volatile uint32_t   SPI2BRG __attribute__((section("sfrs"), address(0xBF805A30)));
extern volatile uint32_t        SPI2ABRGCLR __attribute__((section("sfrs"),address(0xBF805A34)));
extern volatile uint32_t        SPI2BRGCLR __attribute__((section("sfrs"),address(0xBF805A34)));
extern volatile uint32_t        SPI2ABRGSET __attribute__((section("sfrs"),address(0xBF805A38)));
extern volatile uint32_t        SPI2BRGSET __attribute__((section("sfrs"),address(0xBF805A38)));
extern volatile uint32_t        SPI2ABRGINV __attribute__((section("sfrs"),address(0xBF805A3C)));
extern volatile uint32_t        SPI2BRGINV __attribute__((section("sfrs"),address(0xBF805A3C)));
#define SPI3ACON SPI3ACON
extern volatile uint32_t   SPI3ACON __attribute__((section("sfrs"), address(0xBF805C00)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t :1;
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
    uint32_t :6;
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
} __SPI3ACONbits_t;
extern volatile __SPI3ACONbits_t SPI3ACONbits __asm__ ("SPI3ACON") __attribute__((section("sfrs"), address(0xBF805C00)));
#define SPI4CON SPI4CON
extern volatile uint32_t   SPI4CON __attribute__((section("sfrs"), address(0xBF805C00)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t :1;
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
    uint32_t :6;
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
} __SPI4CONbits_t;
extern volatile __SPI4CONbits_t SPI4CONbits __asm__ ("SPI4CON") __attribute__((section("sfrs"), address(0xBF805C00)));
extern volatile uint32_t        SPI3ACONCLR __attribute__((section("sfrs"),address(0xBF805C04)));
extern volatile uint32_t        SPI4CONCLR __attribute__((section("sfrs"),address(0xBF805C04)));
extern volatile uint32_t        SPI3ACONSET __attribute__((section("sfrs"),address(0xBF805C08)));
extern volatile uint32_t        SPI4CONSET __attribute__((section("sfrs"),address(0xBF805C08)));
extern volatile uint32_t        SPI3ACONINV __attribute__((section("sfrs"),address(0xBF805C0C)));
extern volatile uint32_t        SPI4CONINV __attribute__((section("sfrs"),address(0xBF805C0C)));
#define SPI3ASTAT SPI3ASTAT
extern volatile uint32_t   SPI3ASTAT __attribute__((section("sfrs"), address(0xBF805C10)));
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
    uint32_t :4;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI3ASTATbits_t;
extern volatile __SPI3ASTATbits_t SPI3ASTATbits __asm__ ("SPI3ASTAT") __attribute__((section("sfrs"), address(0xBF805C10)));
#define SPI4STAT SPI4STAT
extern volatile uint32_t   SPI4STAT __attribute__((section("sfrs"), address(0xBF805C10)));
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
    uint32_t :4;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI4STATbits_t;
extern volatile __SPI4STATbits_t SPI4STATbits __asm__ ("SPI4STAT") __attribute__((section("sfrs"), address(0xBF805C10)));
extern volatile uint32_t        SPI3ASTATCLR __attribute__((section("sfrs"),address(0xBF805C14)));
extern volatile uint32_t        SPI4STATCLR __attribute__((section("sfrs"),address(0xBF805C14)));
extern volatile uint32_t        SPI3ASTATSET __attribute__((section("sfrs"),address(0xBF805C18)));
extern volatile uint32_t        SPI4STATSET __attribute__((section("sfrs"),address(0xBF805C18)));
extern volatile uint32_t        SPI3ASTATINV __attribute__((section("sfrs"),address(0xBF805C1C)));
extern volatile uint32_t        SPI4STATINV __attribute__((section("sfrs"),address(0xBF805C1C)));
#define SPI3ABUF SPI3ABUF
extern volatile uint32_t   SPI3ABUF __attribute__((section("sfrs"), address(0xBF805C20)));
#define SPI4BUF SPI4BUF
extern volatile uint32_t   SPI4BUF __attribute__((section("sfrs"), address(0xBF805C20)));
#define SPI3ABRG SPI3ABRG
extern volatile uint32_t   SPI3ABRG __attribute__((section("sfrs"), address(0xBF805C30)));
#define SPI4BRG SPI4BRG
extern volatile uint32_t   SPI4BRG __attribute__((section("sfrs"), address(0xBF805C30)));
extern volatile uint32_t        SPI3ABRGCLR __attribute__((section("sfrs"),address(0xBF805C34)));
extern volatile uint32_t        SPI4BRGCLR __attribute__((section("sfrs"),address(0xBF805C34)));
extern volatile uint32_t        SPI3ABRGSET __attribute__((section("sfrs"),address(0xBF805C38)));
extern volatile uint32_t        SPI4BRGSET __attribute__((section("sfrs"),address(0xBF805C38)));
extern volatile uint32_t        SPI3ABRGINV __attribute__((section("sfrs"),address(0xBF805C3C)));
extern volatile uint32_t        SPI4BRGINV __attribute__((section("sfrs"),address(0xBF805C3C)));
#define SPI1CON SPI1CON
extern volatile uint32_t   SPI1CON __attribute__((section("sfrs"), address(0xBF805E00)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t :1;
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
    uint32_t :6;
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
extern volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON") __attribute__((section("sfrs"), address(0xBF805E00)));
extern volatile uint32_t        SPI1CONCLR __attribute__((section("sfrs"),address(0xBF805E04)));
extern volatile uint32_t        SPI1CONSET __attribute__((section("sfrs"),address(0xBF805E08)));
extern volatile uint32_t        SPI1CONINV __attribute__((section("sfrs"),address(0xBF805E0C)));
#define SPI1STAT SPI1STAT
extern volatile uint32_t   SPI1STAT __attribute__((section("sfrs"), address(0xBF805E10)));
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
    uint32_t :4;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1STATbits_t;
extern volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT") __attribute__((section("sfrs"), address(0xBF805E10)));
extern volatile uint32_t        SPI1STATCLR __attribute__((section("sfrs"),address(0xBF805E14)));
extern volatile uint32_t        SPI1STATSET __attribute__((section("sfrs"),address(0xBF805E18)));
extern volatile uint32_t        SPI1STATINV __attribute__((section("sfrs"),address(0xBF805E1C)));
#define SPI1BUF SPI1BUF
extern volatile uint32_t   SPI1BUF __attribute__((section("sfrs"), address(0xBF805E20)));
#define SPI1BRG SPI1BRG
extern volatile uint32_t   SPI1BRG __attribute__((section("sfrs"), address(0xBF805E30)));
extern volatile uint32_t        SPI1BRGCLR __attribute__((section("sfrs"),address(0xBF805E34)));
extern volatile uint32_t        SPI1BRGSET __attribute__((section("sfrs"),address(0xBF805E38)));
extern volatile uint32_t        SPI1BRGINV __attribute__((section("sfrs"),address(0xBF805E3C)));
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
#define U1BMODE U1BMODE
extern volatile uint32_t   U1BMODE __attribute__((section("sfrs"), address(0xBF806200)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t :4;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
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
} __U1BMODEbits_t;
extern volatile __U1BMODEbits_t U1BMODEbits __asm__ ("U1BMODE") __attribute__((section("sfrs"), address(0xBF806200)));
#define U4MODE U4MODE
extern volatile uint32_t   U4MODE __attribute__((section("sfrs"), address(0xBF806200)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t :4;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
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
} __U4MODEbits_t;
extern volatile __U4MODEbits_t U4MODEbits __asm__ ("U4MODE") __attribute__((section("sfrs"), address(0xBF806200)));
extern volatile uint32_t        U1BMODECLR __attribute__((section("sfrs"),address(0xBF806204)));
extern volatile uint32_t        U4MODECLR __attribute__((section("sfrs"),address(0xBF806204)));
extern volatile uint32_t        U1BMODESET __attribute__((section("sfrs"),address(0xBF806208)));
extern volatile uint32_t        U4MODESET __attribute__((section("sfrs"),address(0xBF806208)));
extern volatile uint32_t        U1BMODEINV __attribute__((section("sfrs"),address(0xBF80620C)));
extern volatile uint32_t        U4MODEINV __attribute__((section("sfrs"),address(0xBF80620C)));
#define U1BSTA U1BSTA
extern volatile uint32_t   U1BSTA __attribute__((section("sfrs"), address(0xBF806210)));
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
} __U1BSTAbits_t;
extern volatile __U1BSTAbits_t U1BSTAbits __asm__ ("U1BSTA") __attribute__((section("sfrs"), address(0xBF806210)));
#define U4STA U4STA
extern volatile uint32_t   U4STA __attribute__((section("sfrs"), address(0xBF806210)));
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
} __U4STAbits_t;
extern volatile __U4STAbits_t U4STAbits __asm__ ("U4STA") __attribute__((section("sfrs"), address(0xBF806210)));
extern volatile uint32_t        U1BSTACLR __attribute__((section("sfrs"),address(0xBF806214)));
extern volatile uint32_t        U4STACLR __attribute__((section("sfrs"),address(0xBF806214)));
extern volatile uint32_t        U1BSTASET __attribute__((section("sfrs"),address(0xBF806218)));
extern volatile uint32_t        U4STASET __attribute__((section("sfrs"),address(0xBF806218)));
extern volatile uint32_t        U1BSTAINV __attribute__((section("sfrs"),address(0xBF80621C)));
extern volatile uint32_t        U4STAINV __attribute__((section("sfrs"),address(0xBF80621C)));
#define U1BTXREG U1BTXREG
extern volatile uint32_t   U1BTXREG __attribute__((section("sfrs"), address(0xBF806220)));
#define U4TXREG U4TXREG
extern volatile uint32_t   U4TXREG __attribute__((section("sfrs"), address(0xBF806220)));
#define U1BRXREG U1BRXREG
extern volatile uint32_t   U1BRXREG __attribute__((section("sfrs"), address(0xBF806230)));
#define U4RXREG U4RXREG
extern volatile uint32_t   U4RXREG __attribute__((section("sfrs"), address(0xBF806230)));
#define U1BBRG U1BBRG
extern volatile uint32_t   U1BBRG __attribute__((section("sfrs"), address(0xBF806240)));
#define U4BRG U4BRG
extern volatile uint32_t   U4BRG __attribute__((section("sfrs"), address(0xBF806240)));
extern volatile uint32_t        U1BBRGCLR __attribute__((section("sfrs"),address(0xBF806244)));
extern volatile uint32_t        U4BRGCLR __attribute__((section("sfrs"),address(0xBF806244)));
extern volatile uint32_t        U1BBRGSET __attribute__((section("sfrs"),address(0xBF806248)));
extern volatile uint32_t        U4BRGSET __attribute__((section("sfrs"),address(0xBF806248)));
extern volatile uint32_t        U1BBRGINV __attribute__((section("sfrs"),address(0xBF80624C)));
extern volatile uint32_t        U4BRGINV __attribute__((section("sfrs"),address(0xBF80624C)));
#define U2AMODE U2AMODE
extern volatile uint32_t   U2AMODE __attribute__((section("sfrs"), address(0xBF806400)));
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
} __U2AMODEbits_t;
extern volatile __U2AMODEbits_t U2AMODEbits __asm__ ("U2AMODE") __attribute__((section("sfrs"), address(0xBF806400)));
#define U3MODE U3MODE
extern volatile uint32_t   U3MODE __attribute__((section("sfrs"), address(0xBF806400)));
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
} __U3MODEbits_t;
extern volatile __U3MODEbits_t U3MODEbits __asm__ ("U3MODE") __attribute__((section("sfrs"), address(0xBF806400)));
extern volatile uint32_t        U2AMODECLR __attribute__((section("sfrs"),address(0xBF806404)));
extern volatile uint32_t        U3MODECLR __attribute__((section("sfrs"),address(0xBF806404)));
extern volatile uint32_t        U2AMODESET __attribute__((section("sfrs"),address(0xBF806408)));
extern volatile uint32_t        U3MODESET __attribute__((section("sfrs"),address(0xBF806408)));
extern volatile uint32_t        U2AMODEINV __attribute__((section("sfrs"),address(0xBF80640C)));
extern volatile uint32_t        U3MODEINV __attribute__((section("sfrs"),address(0xBF80640C)));
#define U2ASTA U2ASTA
extern volatile uint32_t   U2ASTA __attribute__((section("sfrs"), address(0xBF806410)));
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
} __U2ASTAbits_t;
extern volatile __U2ASTAbits_t U2ASTAbits __asm__ ("U2ASTA") __attribute__((section("sfrs"), address(0xBF806410)));
#define U3STA U3STA
extern volatile uint32_t   U3STA __attribute__((section("sfrs"), address(0xBF806410)));
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
} __U3STAbits_t;
extern volatile __U3STAbits_t U3STAbits __asm__ ("U3STA") __attribute__((section("sfrs"), address(0xBF806410)));
extern volatile uint32_t        U2ASTACLR __attribute__((section("sfrs"),address(0xBF806414)));
extern volatile uint32_t        U3STACLR __attribute__((section("sfrs"),address(0xBF806414)));
extern volatile uint32_t        U2ASTASET __attribute__((section("sfrs"),address(0xBF806418)));
extern volatile uint32_t        U3STASET __attribute__((section("sfrs"),address(0xBF806418)));
extern volatile uint32_t        U2ASTAINV __attribute__((section("sfrs"),address(0xBF80641C)));
extern volatile uint32_t        U3STAINV __attribute__((section("sfrs"),address(0xBF80641C)));
#define U2ATXREG U2ATXREG
extern volatile uint32_t   U2ATXREG __attribute__((section("sfrs"), address(0xBF806420)));
#define U3TXREG U3TXREG
extern volatile uint32_t   U3TXREG __attribute__((section("sfrs"), address(0xBF806420)));
#define U2ARXREG U2ARXREG
extern volatile uint32_t   U2ARXREG __attribute__((section("sfrs"), address(0xBF806430)));
#define U3RXREG U3RXREG
extern volatile uint32_t   U3RXREG __attribute__((section("sfrs"), address(0xBF806430)));
#define U2ABRG U2ABRG
extern volatile uint32_t   U2ABRG __attribute__((section("sfrs"), address(0xBF806440)));
#define U3BRG U3BRG
extern volatile uint32_t   U3BRG __attribute__((section("sfrs"), address(0xBF806440)));
extern volatile uint32_t        U2ABRGCLR __attribute__((section("sfrs"),address(0xBF806444)));
extern volatile uint32_t        U3BRGCLR __attribute__((section("sfrs"),address(0xBF806444)));
extern volatile uint32_t        U2ABRGSET __attribute__((section("sfrs"),address(0xBF806448)));
extern volatile uint32_t        U3BRGSET __attribute__((section("sfrs"),address(0xBF806448)));
extern volatile uint32_t        U2ABRGINV __attribute__((section("sfrs"),address(0xBF80644C)));
extern volatile uint32_t        U3BRGINV __attribute__((section("sfrs"),address(0xBF80644C)));
#define U2BMODE U2BMODE
extern volatile uint32_t   U2BMODE __attribute__((section("sfrs"), address(0xBF806600)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t :4;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
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
} __U2BMODEbits_t;
extern volatile __U2BMODEbits_t U2BMODEbits __asm__ ("U2BMODE") __attribute__((section("sfrs"), address(0xBF806600)));
#define U6MODE U6MODE
extern volatile uint32_t   U6MODE __attribute__((section("sfrs"), address(0xBF806600)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t :4;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
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
} __U6MODEbits_t;
extern volatile __U6MODEbits_t U6MODEbits __asm__ ("U6MODE") __attribute__((section("sfrs"), address(0xBF806600)));
extern volatile uint32_t        U2BMODECLR __attribute__((section("sfrs"),address(0xBF806604)));
extern volatile uint32_t        U6MODECLR __attribute__((section("sfrs"),address(0xBF806604)));
extern volatile uint32_t        U2BMODESET __attribute__((section("sfrs"),address(0xBF806608)));
extern volatile uint32_t        U6MODESET __attribute__((section("sfrs"),address(0xBF806608)));
extern volatile uint32_t        U2BMODEINV __attribute__((section("sfrs"),address(0xBF80660C)));
extern volatile uint32_t        U6MODEINV __attribute__((section("sfrs"),address(0xBF80660C)));
#define U2BSTA U2BSTA
extern volatile uint32_t   U2BSTA __attribute__((section("sfrs"), address(0xBF806610)));
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
} __U2BSTAbits_t;
extern volatile __U2BSTAbits_t U2BSTAbits __asm__ ("U2BSTA") __attribute__((section("sfrs"), address(0xBF806610)));
#define U6STA U6STA
extern volatile uint32_t   U6STA __attribute__((section("sfrs"), address(0xBF806610)));
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
} __U6STAbits_t;
extern volatile __U6STAbits_t U6STAbits __asm__ ("U6STA") __attribute__((section("sfrs"), address(0xBF806610)));
extern volatile uint32_t        U2BSTACLR __attribute__((section("sfrs"),address(0xBF806614)));
extern volatile uint32_t        U6STACLR __attribute__((section("sfrs"),address(0xBF806614)));
extern volatile uint32_t        U2BSTASET __attribute__((section("sfrs"),address(0xBF806618)));
extern volatile uint32_t        U6STASET __attribute__((section("sfrs"),address(0xBF806618)));
extern volatile uint32_t        U2BSTAINV __attribute__((section("sfrs"),address(0xBF80661C)));
extern volatile uint32_t        U6STAINV __attribute__((section("sfrs"),address(0xBF80661C)));
#define U2BTXREG U2BTXREG
extern volatile uint32_t   U2BTXREG __attribute__((section("sfrs"), address(0xBF806620)));
#define U6TXREG U6TXREG
extern volatile uint32_t   U6TXREG __attribute__((section("sfrs"), address(0xBF806620)));
#define U2BRXREG U2BRXREG
extern volatile uint32_t   U2BRXREG __attribute__((section("sfrs"), address(0xBF806630)));
#define U6RXREG U6RXREG
extern volatile uint32_t   U6RXREG __attribute__((section("sfrs"), address(0xBF806630)));
#define U2BBRG U2BBRG
extern volatile uint32_t   U2BBRG __attribute__((section("sfrs"), address(0xBF806640)));
#define U6BRG U6BRG
extern volatile uint32_t   U6BRG __attribute__((section("sfrs"), address(0xBF806640)));
extern volatile uint32_t        U2BBRGCLR __attribute__((section("sfrs"),address(0xBF806644)));
extern volatile uint32_t        U6BRGCLR __attribute__((section("sfrs"),address(0xBF806644)));
extern volatile uint32_t        U2BBRGSET __attribute__((section("sfrs"),address(0xBF806648)));
extern volatile uint32_t        U6BRGSET __attribute__((section("sfrs"),address(0xBF806648)));
extern volatile uint32_t        U2BBRGINV __attribute__((section("sfrs"),address(0xBF80664C)));
extern volatile uint32_t        U6BRGINV __attribute__((section("sfrs"),address(0xBF80664C)));
#define U2MODE U2MODE
extern volatile uint32_t   U2MODE __attribute__((section("sfrs"), address(0xBF806800)));
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
extern volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE") __attribute__((section("sfrs"), address(0xBF806800)));
#define U3AMODE U3AMODE
extern volatile uint32_t   U3AMODE __attribute__((section("sfrs"), address(0xBF806800)));
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
extern volatile __U3AMODEbits_t U3AMODEbits __asm__ ("U3AMODE") __attribute__((section("sfrs"), address(0xBF806800)));
extern volatile uint32_t        U2MODECLR __attribute__((section("sfrs"),address(0xBF806804)));
extern volatile uint32_t        U3AMODECLR __attribute__((section("sfrs"),address(0xBF806804)));
extern volatile uint32_t        U2MODESET __attribute__((section("sfrs"),address(0xBF806808)));
extern volatile uint32_t        U3AMODESET __attribute__((section("sfrs"),address(0xBF806808)));
extern volatile uint32_t        U2MODEINV __attribute__((section("sfrs"),address(0xBF80680C)));
extern volatile uint32_t        U3AMODEINV __attribute__((section("sfrs"),address(0xBF80680C)));
#define U2STA U2STA
extern volatile uint32_t   U2STA __attribute__((section("sfrs"), address(0xBF806810)));
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
extern volatile __U2STAbits_t U2STAbits __asm__ ("U2STA") __attribute__((section("sfrs"), address(0xBF806810)));
#define U3ASTA U3ASTA
extern volatile uint32_t   U3ASTA __attribute__((section("sfrs"), address(0xBF806810)));
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
extern volatile __U3ASTAbits_t U3ASTAbits __asm__ ("U3ASTA") __attribute__((section("sfrs"), address(0xBF806810)));
extern volatile uint32_t        U2STACLR __attribute__((section("sfrs"),address(0xBF806814)));
extern volatile uint32_t        U3ASTACLR __attribute__((section("sfrs"),address(0xBF806814)));
extern volatile uint32_t        U2STASET __attribute__((section("sfrs"),address(0xBF806818)));
extern volatile uint32_t        U3ASTASET __attribute__((section("sfrs"),address(0xBF806818)));
extern volatile uint32_t        U2STAINV __attribute__((section("sfrs"),address(0xBF80681C)));
extern volatile uint32_t        U3ASTAINV __attribute__((section("sfrs"),address(0xBF80681C)));
#define U2TXREG U2TXREG
extern volatile uint32_t   U2TXREG __attribute__((section("sfrs"), address(0xBF806820)));
#define U3ATXREG U3ATXREG
extern volatile uint32_t   U3ATXREG __attribute__((section("sfrs"), address(0xBF806820)));
#define U2RXREG U2RXREG
extern volatile uint32_t   U2RXREG __attribute__((section("sfrs"), address(0xBF806830)));
#define U3ARXREG U3ARXREG
extern volatile uint32_t   U3ARXREG __attribute__((section("sfrs"), address(0xBF806830)));
#define U2BRG U2BRG
extern volatile uint32_t   U2BRG __attribute__((section("sfrs"), address(0xBF806840)));
#define U3ABRG U3ABRG
extern volatile uint32_t   U3ABRG __attribute__((section("sfrs"), address(0xBF806840)));
extern volatile uint32_t        U2BRGCLR __attribute__((section("sfrs"),address(0xBF806844)));
extern volatile uint32_t        U3ABRGCLR __attribute__((section("sfrs"),address(0xBF806844)));
extern volatile uint32_t        U2BRGSET __attribute__((section("sfrs"),address(0xBF806848)));
extern volatile uint32_t        U3ABRGSET __attribute__((section("sfrs"),address(0xBF806848)));
extern volatile uint32_t        U2BRGINV __attribute__((section("sfrs"),address(0xBF80684C)));
extern volatile uint32_t        U3ABRGINV __attribute__((section("sfrs"),address(0xBF80684C)));
#define U3BMODE U3BMODE
extern volatile uint32_t   U3BMODE __attribute__((section("sfrs"), address(0xBF806A00)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t :4;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
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
} __U3BMODEbits_t;
extern volatile __U3BMODEbits_t U3BMODEbits __asm__ ("U3BMODE") __attribute__((section("sfrs"), address(0xBF806A00)));
#define U5MODE U5MODE
extern volatile uint32_t   U5MODE __attribute__((section("sfrs"), address(0xBF806A00)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t :4;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
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
} __U5MODEbits_t;
extern volatile __U5MODEbits_t U5MODEbits __asm__ ("U5MODE") __attribute__((section("sfrs"), address(0xBF806A00)));
extern volatile uint32_t        U3BMODECLR __attribute__((section("sfrs"),address(0xBF806A04)));
extern volatile uint32_t        U5MODECLR __attribute__((section("sfrs"),address(0xBF806A04)));
extern volatile uint32_t        U3BMODESET __attribute__((section("sfrs"),address(0xBF806A08)));
extern volatile uint32_t        U5MODESET __attribute__((section("sfrs"),address(0xBF806A08)));
extern volatile uint32_t        U3BMODEINV __attribute__((section("sfrs"),address(0xBF806A0C)));
extern volatile uint32_t        U5MODEINV __attribute__((section("sfrs"),address(0xBF806A0C)));
#define U3BSTA U3BSTA
extern volatile uint32_t   U3BSTA __attribute__((section("sfrs"), address(0xBF806A10)));
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
} __U3BSTAbits_t;
extern volatile __U3BSTAbits_t U3BSTAbits __asm__ ("U3BSTA") __attribute__((section("sfrs"), address(0xBF806A10)));
#define U5STA U5STA
extern volatile uint32_t   U5STA __attribute__((section("sfrs"), address(0xBF806A10)));
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
} __U5STAbits_t;
extern volatile __U5STAbits_t U5STAbits __asm__ ("U5STA") __attribute__((section("sfrs"), address(0xBF806A10)));
extern volatile uint32_t        U3BSTACLR __attribute__((section("sfrs"),address(0xBF806A14)));
extern volatile uint32_t        U5STACLR __attribute__((section("sfrs"),address(0xBF806A14)));
extern volatile uint32_t        U3BSTASET __attribute__((section("sfrs"),address(0xBF806A18)));
extern volatile uint32_t        U5STASET __attribute__((section("sfrs"),address(0xBF806A18)));
extern volatile uint32_t        U3BSTAINV __attribute__((section("sfrs"),address(0xBF806A1C)));
extern volatile uint32_t        U5STAINV __attribute__((section("sfrs"),address(0xBF806A1C)));
#define U3BTXREG U3BTXREG
extern volatile uint32_t   U3BTXREG __attribute__((section("sfrs"), address(0xBF806A20)));
#define U5TXREG U5TXREG
extern volatile uint32_t   U5TXREG __attribute__((section("sfrs"), address(0xBF806A20)));
#define U3BRXREG U3BRXREG
extern volatile uint32_t   U3BRXREG __attribute__((section("sfrs"), address(0xBF806A30)));
#define U5RXREG U5RXREG
extern volatile uint32_t   U5RXREG __attribute__((section("sfrs"), address(0xBF806A30)));
#define U3BBRG U3BBRG
extern volatile uint32_t   U3BBRG __attribute__((section("sfrs"), address(0xBF806A40)));
#define U5BRG U5BRG
extern volatile uint32_t   U5BRG __attribute__((section("sfrs"), address(0xBF806A40)));
extern volatile uint32_t        U3BBRGCLR __attribute__((section("sfrs"),address(0xBF806A44)));
extern volatile uint32_t        U5BRGCLR __attribute__((section("sfrs"),address(0xBF806A44)));
extern volatile uint32_t        U3BBRGSET __attribute__((section("sfrs"),address(0xBF806A48)));
extern volatile uint32_t        U5BRGSET __attribute__((section("sfrs"),address(0xBF806A48)));
extern volatile uint32_t        U3BBRGINV __attribute__((section("sfrs"),address(0xBF806A4C)));
extern volatile uint32_t        U5BRGINV __attribute__((section("sfrs"),address(0xBF806A4C)));
#define PMCON PMCON
extern volatile uint32_t   PMCON __attribute__((section("sfrs"), address(0xBF807000)));
typedef union {
  struct {
    uint32_t RDSP:1;
    uint32_t WRSP:1;
    uint32_t :1;
    uint32_t CS1P:1;
    uint32_t CS2P:1;
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
    uint32_t MODE16:1;
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
    uint32_t CS2:1;
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
#define AD1PCFG AD1PCFG
extern volatile uint32_t   AD1PCFG __attribute__((section("sfrs"), address(0xBF809060)));
typedef union {
  struct {
    uint32_t PCFG:16;
  };
  struct {
    uint32_t PCFG0:1;
    uint32_t PCFG1:1;
    uint32_t PCFG2:1;
    uint32_t PCFG3:1;
    uint32_t PCFG4:1;
    uint32_t PCFG5:1;
    uint32_t PCFG6:1;
    uint32_t PCFG7:1;
    uint32_t PCFG8:1;
    uint32_t PCFG9:1;
    uint32_t PCFG10:1;
    uint32_t PCFG11:1;
    uint32_t PCFG12:1;
    uint32_t PCFG13:1;
    uint32_t PCFG14:1;
    uint32_t PCFG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __AD1PCFGbits_t;
extern volatile __AD1PCFGbits_t AD1PCFGbits __asm__ ("AD1PCFG") __attribute__((section("sfrs"), address(0xBF809060)));
extern volatile uint32_t        AD1PCFGCLR __attribute__((section("sfrs"),address(0xBF809064)));
extern volatile uint32_t        AD1PCFGSET __attribute__((section("sfrs"),address(0xBF809068)));
extern volatile uint32_t        AD1PCFGINV __attribute__((section("sfrs"),address(0xBF80906C)));
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
#define CMSTAT CMSTAT
extern volatile uint32_t   CMSTAT __attribute__((section("sfrs"), address(0xBF80A060)));
typedef union {
  struct {
    uint32_t C1OUT:1;
    uint32_t C2OUT:1;
    uint32_t :11;
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
    uint32_t :1;
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
#define DDPCON DDPCON
extern volatile uint32_t   DDPCON __attribute__((section("sfrs"), address(0xBF80F200)));
typedef struct {
  uint32_t TDOEN:1;
  uint32_t :1;
  uint32_t TROEN:1;
  uint32_t JTAGEN:1;
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
#define _DDPSTAT _DDPSTAT
extern volatile uint32_t   _DDPSTAT __attribute__((section("sfrs"), address(0xBF880140)));
typedef struct {
  uint32_t :1;
  uint32_t APIFUL:1;
  uint32_t APOFUL:1;
  uint32_t STRFUL:1;
  uint32_t :5;
  uint32_t APIOV:1;
  uint32_t APOOV:1;
  uint32_t :5;
  uint32_t STOV:16;
} ___DDPSTATbits_t;
extern volatile ___DDPSTATbits_t _DDPSTATbits __asm__ ("_DDPSTAT") __attribute__((section("sfrs"), address(0xBF880140)));
#define _STRO _STRO
extern volatile uint32_t   _STRO __attribute__((section("sfrs"), address(0xBF880170)));
extern volatile uint32_t        _STROCLR __attribute__((section("sfrs"),address(0xBF880174)));
extern volatile uint32_t        _STROSET __attribute__((section("sfrs"),address(0xBF880178)));
extern volatile uint32_t        _STROINV __attribute__((section("sfrs"),address(0xBF88017C)));
#define _APPO _APPO
extern volatile uint32_t   _APPO __attribute__((section("sfrs"), address(0xBF880180)));
extern volatile uint32_t        _APPOCLR __attribute__((section("sfrs"),address(0xBF880184)));
extern volatile uint32_t        _APPOSET __attribute__((section("sfrs"),address(0xBF880188)));
extern volatile uint32_t        _APPOINV __attribute__((section("sfrs"),address(0xBF88018C)));
#define _APPI _APPI
extern volatile uint32_t   _APPI __attribute__((section("sfrs"), address(0xBF880190)));
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
    uint32_t :1;
    uint32_t FRZ:1;
    uint32_t :1;
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
    uint32_t IC1IF:1;
    uint32_t OC1IF:1;
    uint32_t INT1IF:1;
    uint32_t T2IF:1;
    uint32_t IC2IF:1;
    uint32_t OC2IF:1;
    uint32_t INT2IF:1;
    uint32_t T3IF:1;
    uint32_t IC3IF:1;
    uint32_t OC3IF:1;
    uint32_t INT3IF:1;
    uint32_t T4IF:1;
    uint32_t IC4IF:1;
    uint32_t OC4IF:1;
    uint32_t INT4IF:1;
    uint32_t T5IF:1;
    uint32_t IC5IF:1;
    uint32_t OC5IF:1;
    uint32_t SPI1EIF:1;
    uint32_t SPI1RXIF:1;
    uint32_t SPI1TXIF:1;
    uint32_t U1EIF:1;
    uint32_t U1RXIF:1;
    uint32_t U1TXIF:1;
    uint32_t I2C1BIF:1;
    uint32_t I2C1SIF:1;
    uint32_t I2C1MIF:1;
  };
  struct {
    uint32_t :26;
    uint32_t U1AEIF:1;
    uint32_t U1ARXIF:1;
    uint32_t U1ATXIF:1;
  };
  struct {
    uint32_t :26;
    uint32_t SPI3EIF:1;
    uint32_t SPI3RXIF:1;
    uint32_t SPI3TXIF:1;
  };
  struct {
    uint32_t :26;
    uint32_t SPI1AEIF:1;
    uint32_t SPI1ARXIF:1;
    uint32_t SPI1ATXIF:1;
  };
  struct {
    uint32_t :26;
    uint32_t I2C3BIF:1;
    uint32_t I2C3SIF:1;
    uint32_t I2C3MIF:1;
  };
  struct {
    uint32_t :26;
    uint32_t I2C1ABIF:1;
    uint32_t I2C1ASIF:1;
    uint32_t I2C1AMIF:1;
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
    uint32_t CNIF:1;
    uint32_t AD1IF:1;
    uint32_t PMPIF:1;
    uint32_t CMP1IF:1;
    uint32_t CMP2IF:1;
    uint32_t U3EIF:1;
    uint32_t U3RXIF:1;
    uint32_t U3TXIF:1;
    uint32_t U2EIF:1;
    uint32_t U2RXIF:1;
    uint32_t U2TXIF:1;
    uint32_t I2C2BIF:1;
    uint32_t I2C2SIF:1;
    uint32_t I2C2MIF:1;
    uint32_t FSCMIF:1;
    uint32_t RTCCIF:1;
    uint32_t DMA0IF:1;
    uint32_t DMA1IF:1;
    uint32_t DMA2IF:1;
    uint32_t DMA3IF:1;
    uint32_t DMA4IF:1;
    uint32_t DMA5IF:1;
    uint32_t DMA6IF:1;
    uint32_t DMA7IF:1;
    uint32_t FCEIF:1;
    uint32_t USBIF:1;
    uint32_t :2;
    uint32_t ETHIF:1;
    uint32_t IC1EIF:1;
    uint32_t IC2EIF:1;
    uint32_t IC3EIF:1;
  };
  struct {
    uint32_t :5;
    uint32_t U2AEIF:1;
    uint32_t U2ARXIF:1;
    uint32_t U2ATXIF:1;
    uint32_t U3AEIF:1;
    uint32_t U3ARXIF:1;
    uint32_t U3ATXIF:1;
  };
  struct {
    uint32_t :5;
    uint32_t SPI2EIF:1;
    uint32_t SPI2RXIF:1;
    uint32_t SPI2TXIF:1;
    uint32_t SPI4EIF:1;
    uint32_t SPI4RXIF:1;
    uint32_t SPI4TXIF:1;
  };
  struct {
    uint32_t :5;
    uint32_t SPI2AEIF:1;
    uint32_t SPI2ARXIF:1;
    uint32_t SPI2ATXIF:1;
    uint32_t SPI3AEIF:1;
    uint32_t SPI3ARXIF:1;
    uint32_t SPI3ATXIF:1;
  };
  struct {
    uint32_t :5;
    uint32_t I2C4BIF:1;
    uint32_t I2C4SIF:1;
    uint32_t I2C4MIF:1;
    uint32_t I2C5BIF:1;
    uint32_t I2C5SIF:1;
    uint32_t I2C5MIF:1;
  };
  struct {
    uint32_t :5;
    uint32_t I2C2ABIF:1;
    uint32_t I2C2ASIF:1;
    uint32_t I2C2AMIF:1;
    uint32_t I2C3ABIF:1;
    uint32_t I2C3ASIF:1;
    uint32_t I2C3AMIF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS1bits_t;
extern volatile __IFS1bits_t IFS1bits __asm__ ("IFS1") __attribute__((section("sfrs"), address(0xBF881040)));
extern volatile uint32_t        IFS1CLR __attribute__((section("sfrs"),address(0xBF881044)));
extern volatile uint32_t        IFS1SET __attribute__((section("sfrs"),address(0xBF881048)));
extern volatile uint32_t        IFS1INV __attribute__((section("sfrs"),address(0xBF88104C)));
#define IFS2 IFS2
extern volatile uint32_t   IFS2 __attribute__((section("sfrs"), address(0xBF881050)));
typedef union {
  struct {
    uint32_t IC4EIF:1;
    uint32_t IC5EIF:1;
    uint32_t PMPEIF:1;
    uint32_t U1BEIF:1;
    uint32_t U1BRXIF:1;
    uint32_t U1BTXIF:1;
    uint32_t U2BEIF:1;
    uint32_t U2BRXIF:1;
    uint32_t U2BTXIF:1;
    uint32_t U3BEIF:1;
    uint32_t U3BRXIF:1;
    uint32_t U3BTXIF:1;
  };
  struct {
    uint32_t :3;
    uint32_t U4EIF:1;
    uint32_t U4RXIF:1;
    uint32_t U4TXIF:1;
    uint32_t U6EIF:1;
    uint32_t U6RXIF:1;
    uint32_t U6TXIF:1;
    uint32_t U5EIF:1;
    uint32_t U5RXIF:1;
    uint32_t U5TXIF:1;
  };
  struct {
    uint32_t w:32;
  };
} __IFS2bits_t;
extern volatile __IFS2bits_t IFS2bits __asm__ ("IFS2") __attribute__((section("sfrs"), address(0xBF881050)));
extern volatile uint32_t        IFS2CLR __attribute__((section("sfrs"),address(0xBF881054)));
extern volatile uint32_t        IFS2SET __attribute__((section("sfrs"),address(0xBF881058)));
extern volatile uint32_t        IFS2INV __attribute__((section("sfrs"),address(0xBF88105C)));
#define IEC0 IEC0
extern volatile uint32_t   IEC0 __attribute__((section("sfrs"), address(0xBF881060)));
typedef union {
  struct {
    uint32_t CTIE:1;
    uint32_t CS0IE:1;
    uint32_t CS1IE:1;
    uint32_t INT0IE:1;
    uint32_t T1IE:1;
    uint32_t IC1IE:1;
    uint32_t OC1IE:1;
    uint32_t INT1IE:1;
    uint32_t T2IE:1;
    uint32_t IC2IE:1;
    uint32_t OC2IE:1;
    uint32_t INT2IE:1;
    uint32_t T3IE:1;
    uint32_t IC3IE:1;
    uint32_t OC3IE:1;
    uint32_t INT3IE:1;
    uint32_t T4IE:1;
    uint32_t IC4IE:1;
    uint32_t OC4IE:1;
    uint32_t INT4IE:1;
    uint32_t T5IE:1;
    uint32_t IC5IE:1;
    uint32_t OC5IE:1;
    uint32_t SPI1EIE:1;
    uint32_t SPI1RXIE:1;
    uint32_t SPI1TXIE:1;
    uint32_t U1EIE:1;
    uint32_t U1RXIE:1;
    uint32_t U1TXIE:1;
    uint32_t I2C1BIE:1;
    uint32_t I2C1SIE:1;
    uint32_t I2C1MIE:1;
  };
  struct {
    uint32_t :26;
    uint32_t U1AEIE:1;
    uint32_t U1ARXIE:1;
    uint32_t U1ATXIE:1;
  };
  struct {
    uint32_t :26;
    uint32_t SPI3EIE:1;
    uint32_t SPI3RXIE:1;
    uint32_t SPI3TXIE:1;
  };
  struct {
    uint32_t :26;
    uint32_t SPI1AEIE:1;
    uint32_t SPI1ARXIE:1;
    uint32_t SPI1ATXIE:1;
  };
  struct {
    uint32_t :26;
    uint32_t I2C3BIE:1;
    uint32_t I2C3SIE:1;
    uint32_t I2C3MIE:1;
  };
  struct {
    uint32_t :26;
    uint32_t I2C1ABIE:1;
    uint32_t I2C1ASIE:1;
    uint32_t I2C1AMIE:1;
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
    uint32_t CNIE:1;
    uint32_t AD1IE:1;
    uint32_t PMPIE:1;
    uint32_t CMP1IE:1;
    uint32_t CMP2IE:1;
    uint32_t U3EIE:1;
    uint32_t U3RXIE:1;
    uint32_t U3TXIE:1;
    uint32_t U2EIE:1;
    uint32_t U2RXIE:1;
    uint32_t U2TXIE:1;
    uint32_t I2C2BIE:1;
    uint32_t I2C2SIE:1;
    uint32_t I2C2MIE:1;
    uint32_t FSCMIE:1;
    uint32_t RTCCIE:1;
    uint32_t DMA0IE:1;
    uint32_t DMA1IE:1;
    uint32_t DMA2IE:1;
    uint32_t DMA3IE:1;
    uint32_t DMA4IE:1;
    uint32_t DMA5IE:1;
    uint32_t DMA6IE:1;
    uint32_t DMA7IE:1;
    uint32_t FCEIE:1;
    uint32_t USBIE:1;
    uint32_t :2;
    uint32_t ETHIE:1;
    uint32_t IC1EIE:1;
    uint32_t IC2EIE:1;
    uint32_t IC3EIE:1;
  };
  struct {
    uint32_t :5;
    uint32_t U2AEIE:1;
    uint32_t U2ARXIE:1;
    uint32_t U2ATXIE:1;
    uint32_t U3AEIE:1;
    uint32_t U3ARXIE:1;
    uint32_t U3ATXIE:1;
  };
  struct {
    uint32_t :5;
    uint32_t SPI2EIE:1;
    uint32_t SPI2RXIE:1;
    uint32_t SPI2TXIE:1;
    uint32_t SPI4EIE:1;
    uint32_t SPI4RXIE:1;
    uint32_t SPI4TXIE:1;
  };
  struct {
    uint32_t :5;
    uint32_t SPI2AEIE:1;
    uint32_t SPI2ARXIE:1;
    uint32_t SPI2ATXIE:1;
    uint32_t SPI3AEIE:1;
    uint32_t SPI3ARXIE:1;
    uint32_t SPI3ATXIE:1;
  };
  struct {
    uint32_t :5;
    uint32_t I2C4BIE:1;
    uint32_t I2C4SIE:1;
    uint32_t I2C4MIE:1;
    uint32_t I2C5BIE:1;
    uint32_t I2C5SIE:1;
    uint32_t I2C5MIE:1;
  };
  struct {
    uint32_t :5;
    uint32_t I2C2ABIE:1;
    uint32_t I2C2ASIE:1;
    uint32_t I2C2AMIE:1;
    uint32_t I2C3ABIE:1;
    uint32_t I2C3ASIE:1;
    uint32_t I2C3AMIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC1bits_t;
extern volatile __IEC1bits_t IEC1bits __asm__ ("IEC1") __attribute__((section("sfrs"), address(0xBF881070)));
extern volatile uint32_t        IEC1CLR __attribute__((section("sfrs"),address(0xBF881074)));
extern volatile uint32_t        IEC1SET __attribute__((section("sfrs"),address(0xBF881078)));
extern volatile uint32_t        IEC1INV __attribute__((section("sfrs"),address(0xBF88107C)));
#define IEC2 IEC2
extern volatile uint32_t   IEC2 __attribute__((section("sfrs"), address(0xBF881080)));
typedef union {
  struct {
    uint32_t IC4EIE:1;
    uint32_t IC5EIE:1;
    uint32_t PMPEIE:1;
    uint32_t U1BEIE:1;
    uint32_t U1BRXIE:1;
    uint32_t U1BTXIE:1;
    uint32_t U2BEIE:1;
    uint32_t U2BRXIE:1;
    uint32_t U2BTXIE:1;
    uint32_t U3BEIE:1;
    uint32_t U3BRXIE:1;
    uint32_t U3BTXIE:1;
  };
  struct {
    uint32_t :3;
    uint32_t U4EIE:1;
    uint32_t U4RXIE:1;
    uint32_t U4TXIE:1;
    uint32_t U6EIE:1;
    uint32_t U6RXIE:1;
    uint32_t U6TXIE:1;
    uint32_t U5EIE:1;
    uint32_t U5RXIE:1;
    uint32_t U5TXIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __IEC2bits_t;
extern volatile __IEC2bits_t IEC2bits __asm__ ("IEC2") __attribute__((section("sfrs"), address(0xBF881080)));
extern volatile uint32_t        IEC2CLR __attribute__((section("sfrs"),address(0xBF881084)));
extern volatile uint32_t        IEC2SET __attribute__((section("sfrs"),address(0xBF881088)));
extern volatile uint32_t        IEC2INV __attribute__((section("sfrs"),address(0xBF88108C)));
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
    uint32_t SPI1IS:2;
    uint32_t SPI1IP:3;
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
    uint32_t U1IS:2;
    uint32_t U1IP:3;
    uint32_t :3;
    uint32_t I2C1IS:2;
    uint32_t I2C1IP:3;
    uint32_t :3;
    uint32_t CNIS:2;
    uint32_t CNIP:3;
    uint32_t :3;
    uint32_t AD1IS:2;
    uint32_t AD1IP:3;
  };
  struct {
    uint32_t U1AIS:2;
    uint32_t U1AIP:3;
  };
  struct {
    uint32_t SPI3IS:2;
    uint32_t SPI3IP:3;
  };
  struct {
    uint32_t SPI1AIS:2;
    uint32_t SPI1AIP:3;
  };
  struct {
    uint32_t I2C3IS:2;
    uint32_t I2C3IP:3;
  };
  struct {
    uint32_t I2C1AIS:2;
    uint32_t I2C1AIP:3;
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
    uint32_t PMPIS:2;
    uint32_t PMPIP:3;
    uint32_t :3;
    uint32_t CMP1IS:2;
    uint32_t CMP1IP:3;
    uint32_t :3;
    uint32_t CMP2IS:2;
    uint32_t CMP2IP:3;
    uint32_t :3;
    uint32_t U3IS:2;
    uint32_t U3IP:3;
  };
  struct {
    uint32_t :24;
    uint32_t U2AIS:2;
    uint32_t U2AIP:3;
  };
  struct {
    uint32_t :24;
    uint32_t SPI2IS:2;
    uint32_t SPI2IP:3;
  };
  struct {
    uint32_t :24;
    uint32_t SPI2AIS:2;
    uint32_t SPI2AIP:3;
  };
  struct {
    uint32_t :24;
    uint32_t I2C4IS:2;
    uint32_t I2C4IP:3;
  };
  struct {
    uint32_t :24;
    uint32_t I2C2AIS:2;
    uint32_t I2C2AIP:3;
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
    uint32_t U2IS:2;
    uint32_t U2IP:3;
    uint32_t :3;
    uint32_t I2C2IS:2;
    uint32_t I2C2IP:3;
    uint32_t :3;
    uint32_t FSCMIS:2;
    uint32_t FSCMIP:3;
    uint32_t :3;
    uint32_t RTCCIS:2;
    uint32_t RTCCIP:3;
  };
  struct {
    uint32_t U3AIS:2;
    uint32_t U3AIP:3;
  };
  struct {
    uint32_t SPI4IS:2;
    uint32_t SPI4IP:3;
  };
  struct {
    uint32_t SPI3AIS:2;
    uint32_t SPI3AIP:3;
  };
  struct {
    uint32_t I2C5IS:2;
    uint32_t I2C5IP:3;
  };
  struct {
    uint32_t I2C3AIS:2;
    uint32_t I2C3AIP:3;
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
} __IPC9bits_t;
extern volatile __IPC9bits_t IPC9bits __asm__ ("IPC9") __attribute__((section("sfrs"), address(0xBF881120)));
extern volatile uint32_t        IPC9CLR __attribute__((section("sfrs"),address(0xBF881124)));
extern volatile uint32_t        IPC9SET __attribute__((section("sfrs"),address(0xBF881128)));
extern volatile uint32_t        IPC9INV __attribute__((section("sfrs"),address(0xBF88112C)));
#define IPC10 IPC10
extern volatile uint32_t   IPC10 __attribute__((section("sfrs"), address(0xBF881130)));
typedef union {
  struct {
    uint32_t DMA4IS:2;
    uint32_t DMA4IP:3;
    uint32_t :3;
    uint32_t DMA5IS:2;
    uint32_t DMA5IP:3;
    uint32_t :3;
    uint32_t DMA6IS:2;
    uint32_t DMA6IP:3;
    uint32_t :3;
    uint32_t DMA7IS:2;
    uint32_t DMA7IP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC10bits_t;
extern volatile __IPC10bits_t IPC10bits __asm__ ("IPC10") __attribute__((section("sfrs"), address(0xBF881130)));
extern volatile uint32_t        IPC10CLR __attribute__((section("sfrs"),address(0xBF881134)));
extern volatile uint32_t        IPC10SET __attribute__((section("sfrs"),address(0xBF881138)));
extern volatile uint32_t        IPC10INV __attribute__((section("sfrs"),address(0xBF88113C)));
#define IPC11 IPC11
extern volatile uint32_t   IPC11 __attribute__((section("sfrs"), address(0xBF881140)));
typedef union {
  struct {
    uint32_t FCEIS:2;
    uint32_t FCEIP:3;
    uint32_t :3;
    uint32_t USBIS:2;
    uint32_t USBIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC11bits_t;
extern volatile __IPC11bits_t IPC11bits __asm__ ("IPC11") __attribute__((section("sfrs"), address(0xBF881140)));
extern volatile uint32_t        IPC11CLR __attribute__((section("sfrs"),address(0xBF881144)));
extern volatile uint32_t        IPC11SET __attribute__((section("sfrs"),address(0xBF881148)));
extern volatile uint32_t        IPC11INV __attribute__((section("sfrs"),address(0xBF88114C)));
#define IPC12 IPC12
extern volatile uint32_t   IPC12 __attribute__((section("sfrs"), address(0xBF881150)));
typedef union {
  struct {
    uint32_t ETHIS:2;
    uint32_t ETHIP:3;
    uint32_t :3;
    uint32_t U4IS:2;
    uint32_t U4IP:3;
    uint32_t :3;
    uint32_t U6IS:2;
    uint32_t U6IP:3;
    uint32_t :3;
    uint32_t U5IS:2;
    uint32_t U5IP:3;
  };
  struct {
    uint32_t :8;
    uint32_t U1BIS:2;
    uint32_t U1BIP:3;
    uint32_t :3;
    uint32_t U2BIS:2;
    uint32_t U2BIP:3;
    uint32_t :3;
    uint32_t U3BIS:2;
    uint32_t U3BIP:3;
  };
  struct {
    uint32_t w:32;
  };
} __IPC12bits_t;
extern volatile __IPC12bits_t IPC12bits __asm__ ("IPC12") __attribute__((section("sfrs"), address(0xBF881150)));
extern volatile uint32_t        IPC12CLR __attribute__((section("sfrs"),address(0xBF881154)));
extern volatile uint32_t        IPC12SET __attribute__((section("sfrs"),address(0xBF881158)));
extern volatile uint32_t        IPC12INV __attribute__((section("sfrs"),address(0xBF88115C)));
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
#define DCH4CON DCH4CON
extern volatile uint32_t   DCH4CON __attribute__((section("sfrs"), address(0xBF883360)));
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
} __DCH4CONbits_t;
extern volatile __DCH4CONbits_t DCH4CONbits __asm__ ("DCH4CON") __attribute__((section("sfrs"), address(0xBF883360)));
extern volatile uint32_t        DCH4CONCLR __attribute__((section("sfrs"),address(0xBF883364)));
extern volatile uint32_t        DCH4CONSET __attribute__((section("sfrs"),address(0xBF883368)));
extern volatile uint32_t        DCH4CONINV __attribute__((section("sfrs"),address(0xBF88336C)));
#define DCH4ECON DCH4ECON
extern volatile uint32_t   DCH4ECON __attribute__((section("sfrs"), address(0xBF883370)));
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
} __DCH4ECONbits_t;
extern volatile __DCH4ECONbits_t DCH4ECONbits __asm__ ("DCH4ECON") __attribute__((section("sfrs"), address(0xBF883370)));
extern volatile uint32_t        DCH4ECONCLR __attribute__((section("sfrs"),address(0xBF883374)));
extern volatile uint32_t        DCH4ECONSET __attribute__((section("sfrs"),address(0xBF883378)));
extern volatile uint32_t        DCH4ECONINV __attribute__((section("sfrs"),address(0xBF88337C)));
#define DCH4INT DCH4INT
extern volatile uint32_t   DCH4INT __attribute__((section("sfrs"), address(0xBF883380)));
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
} __DCH4INTbits_t;
extern volatile __DCH4INTbits_t DCH4INTbits __asm__ ("DCH4INT") __attribute__((section("sfrs"), address(0xBF883380)));
extern volatile uint32_t        DCH4INTCLR __attribute__((section("sfrs"),address(0xBF883384)));
extern volatile uint32_t        DCH4INTSET __attribute__((section("sfrs"),address(0xBF883388)));
extern volatile uint32_t        DCH4INTINV __attribute__((section("sfrs"),address(0xBF88338C)));
#define DCH4SSA DCH4SSA
extern volatile uint32_t   DCH4SSA __attribute__((section("sfrs"), address(0xBF883390)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH4SSAbits_t;
extern volatile __DCH4SSAbits_t DCH4SSAbits __asm__ ("DCH4SSA") __attribute__((section("sfrs"), address(0xBF883390)));
extern volatile uint32_t        DCH4SSACLR __attribute__((section("sfrs"),address(0xBF883394)));
extern volatile uint32_t        DCH4SSASET __attribute__((section("sfrs"),address(0xBF883398)));
extern volatile uint32_t        DCH4SSAINV __attribute__((section("sfrs"),address(0xBF88339C)));
#define DCH4DSA DCH4DSA
extern volatile uint32_t   DCH4DSA __attribute__((section("sfrs"), address(0xBF8833A0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH4DSAbits_t;
extern volatile __DCH4DSAbits_t DCH4DSAbits __asm__ ("DCH4DSA") __attribute__((section("sfrs"), address(0xBF8833A0)));
extern volatile uint32_t        DCH4DSACLR __attribute__((section("sfrs"),address(0xBF8833A4)));
extern volatile uint32_t        DCH4DSASET __attribute__((section("sfrs"),address(0xBF8833A8)));
extern volatile uint32_t        DCH4DSAINV __attribute__((section("sfrs"),address(0xBF8833AC)));
#define DCH4SSIZ DCH4SSIZ
extern volatile uint32_t   DCH4SSIZ __attribute__((section("sfrs"), address(0xBF8833B0)));
extern volatile uint32_t        DCH4SSIZCLR __attribute__((section("sfrs"),address(0xBF8833B4)));
extern volatile uint32_t        DCH4SSIZSET __attribute__((section("sfrs"),address(0xBF8833B8)));
extern volatile uint32_t        DCH4SSIZINV __attribute__((section("sfrs"),address(0xBF8833BC)));
#define DCH4DSIZ DCH4DSIZ
extern volatile uint32_t   DCH4DSIZ __attribute__((section("sfrs"), address(0xBF8833C0)));
extern volatile uint32_t        DCH4DSIZCLR __attribute__((section("sfrs"),address(0xBF8833C4)));
extern volatile uint32_t        DCH4DSIZSET __attribute__((section("sfrs"),address(0xBF8833C8)));
extern volatile uint32_t        DCH4DSIZINV __attribute__((section("sfrs"),address(0xBF8833CC)));
#define DCH4SPTR DCH4SPTR
extern volatile uint32_t   DCH4SPTR __attribute__((section("sfrs"), address(0xBF8833D0)));
extern volatile uint32_t        DCH4SPTRCLR __attribute__((section("sfrs"),address(0xBF8833D4)));
extern volatile uint32_t        DCH4SPTRSET __attribute__((section("sfrs"),address(0xBF8833D8)));
extern volatile uint32_t        DCH4SPTRINV __attribute__((section("sfrs"),address(0xBF8833DC)));
#define DCH4DPTR DCH4DPTR
extern volatile uint32_t   DCH4DPTR __attribute__((section("sfrs"), address(0xBF8833E0)));
extern volatile uint32_t        DCH4DPTRCLR __attribute__((section("sfrs"),address(0xBF8833E4)));
extern volatile uint32_t        DCH4DPTRSET __attribute__((section("sfrs"),address(0xBF8833E8)));
extern volatile uint32_t        DCH4DPTRINV __attribute__((section("sfrs"),address(0xBF8833EC)));
#define DCH4CSIZ DCH4CSIZ
extern volatile uint32_t   DCH4CSIZ __attribute__((section("sfrs"), address(0xBF8833F0)));
extern volatile uint32_t        DCH4CSIZCLR __attribute__((section("sfrs"),address(0xBF8833F4)));
extern volatile uint32_t        DCH4CSIZSET __attribute__((section("sfrs"),address(0xBF8833F8)));
extern volatile uint32_t        DCH4CSIZINV __attribute__((section("sfrs"),address(0xBF8833FC)));
#define DCH4CPTR DCH4CPTR
extern volatile uint32_t   DCH4CPTR __attribute__((section("sfrs"), address(0xBF883400)));
extern volatile uint32_t        DCH4CPTRCLR __attribute__((section("sfrs"),address(0xBF883404)));
extern volatile uint32_t        DCH4CPTRSET __attribute__((section("sfrs"),address(0xBF883408)));
extern volatile uint32_t        DCH4CPTRINV __attribute__((section("sfrs"),address(0xBF88340C)));
#define DCH4DAT DCH4DAT
extern volatile uint32_t   DCH4DAT __attribute__((section("sfrs"), address(0xBF883410)));
extern volatile uint32_t        DCH4DATCLR __attribute__((section("sfrs"),address(0xBF883414)));
extern volatile uint32_t        DCH4DATSET __attribute__((section("sfrs"),address(0xBF883418)));
extern volatile uint32_t        DCH4DATINV __attribute__((section("sfrs"),address(0xBF88341C)));
#define DCH5CON DCH5CON
extern volatile uint32_t   DCH5CON __attribute__((section("sfrs"), address(0xBF883420)));
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
} __DCH5CONbits_t;
extern volatile __DCH5CONbits_t DCH5CONbits __asm__ ("DCH5CON") __attribute__((section("sfrs"), address(0xBF883420)));
extern volatile uint32_t        DCH5CONCLR __attribute__((section("sfrs"),address(0xBF883424)));
extern volatile uint32_t        DCH5CONSET __attribute__((section("sfrs"),address(0xBF883428)));
extern volatile uint32_t        DCH5CONINV __attribute__((section("sfrs"),address(0xBF88342C)));
#define DCH5ECON DCH5ECON
extern volatile uint32_t   DCH5ECON __attribute__((section("sfrs"), address(0xBF883430)));
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
} __DCH5ECONbits_t;
extern volatile __DCH5ECONbits_t DCH5ECONbits __asm__ ("DCH5ECON") __attribute__((section("sfrs"), address(0xBF883430)));
extern volatile uint32_t        DCH5ECONCLR __attribute__((section("sfrs"),address(0xBF883434)));
extern volatile uint32_t        DCH5ECONSET __attribute__((section("sfrs"),address(0xBF883438)));
extern volatile uint32_t        DCH5ECONINV __attribute__((section("sfrs"),address(0xBF88343C)));
#define DCH5INT DCH5INT
extern volatile uint32_t   DCH5INT __attribute__((section("sfrs"), address(0xBF883440)));
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
} __DCH5INTbits_t;
extern volatile __DCH5INTbits_t DCH5INTbits __asm__ ("DCH5INT") __attribute__((section("sfrs"), address(0xBF883440)));
extern volatile uint32_t        DCH5INTCLR __attribute__((section("sfrs"),address(0xBF883444)));
extern volatile uint32_t        DCH5INTSET __attribute__((section("sfrs"),address(0xBF883448)));
extern volatile uint32_t        DCH5INTINV __attribute__((section("sfrs"),address(0xBF88344C)));
#define DCH5SSA DCH5SSA
extern volatile uint32_t   DCH5SSA __attribute__((section("sfrs"), address(0xBF883450)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH5SSAbits_t;
extern volatile __DCH5SSAbits_t DCH5SSAbits __asm__ ("DCH5SSA") __attribute__((section("sfrs"), address(0xBF883450)));
extern volatile uint32_t        DCH5SSACLR __attribute__((section("sfrs"),address(0xBF883454)));
extern volatile uint32_t        DCH5SSASET __attribute__((section("sfrs"),address(0xBF883458)));
extern volatile uint32_t        DCH5SSAINV __attribute__((section("sfrs"),address(0xBF88345C)));
#define DCH5DSA DCH5DSA
extern volatile uint32_t   DCH5DSA __attribute__((section("sfrs"), address(0xBF883460)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH5DSAbits_t;
extern volatile __DCH5DSAbits_t DCH5DSAbits __asm__ ("DCH5DSA") __attribute__((section("sfrs"), address(0xBF883460)));
extern volatile uint32_t        DCH5DSACLR __attribute__((section("sfrs"),address(0xBF883464)));
extern volatile uint32_t        DCH5DSASET __attribute__((section("sfrs"),address(0xBF883468)));
extern volatile uint32_t        DCH5DSAINV __attribute__((section("sfrs"),address(0xBF88346C)));
#define DCH5SSIZ DCH5SSIZ
extern volatile uint32_t   DCH5SSIZ __attribute__((section("sfrs"), address(0xBF883470)));
extern volatile uint32_t        DCH5SSIZCLR __attribute__((section("sfrs"),address(0xBF883474)));
extern volatile uint32_t        DCH5SSIZSET __attribute__((section("sfrs"),address(0xBF883478)));
extern volatile uint32_t        DCH5SSIZINV __attribute__((section("sfrs"),address(0xBF88347C)));
#define DCH5DSIZ DCH5DSIZ
extern volatile uint32_t   DCH5DSIZ __attribute__((section("sfrs"), address(0xBF883480)));
extern volatile uint32_t        DCH5DSIZCLR __attribute__((section("sfrs"),address(0xBF883484)));
extern volatile uint32_t        DCH5DSIZSET __attribute__((section("sfrs"),address(0xBF883488)));
extern volatile uint32_t        DCH5DSIZINV __attribute__((section("sfrs"),address(0xBF88348C)));
#define DCH5SPTR DCH5SPTR
extern volatile uint32_t   DCH5SPTR __attribute__((section("sfrs"), address(0xBF883490)));
extern volatile uint32_t        DCH5SPTRCLR __attribute__((section("sfrs"),address(0xBF883494)));
extern volatile uint32_t        DCH5SPTRSET __attribute__((section("sfrs"),address(0xBF883498)));
extern volatile uint32_t        DCH5SPTRINV __attribute__((section("sfrs"),address(0xBF88349C)));
#define DCH5DPTR DCH5DPTR
extern volatile uint32_t   DCH5DPTR __attribute__((section("sfrs"), address(0xBF8834A0)));
extern volatile uint32_t        DCH5DPTRCLR __attribute__((section("sfrs"),address(0xBF8834A4)));
extern volatile uint32_t        DCH5DPTRSET __attribute__((section("sfrs"),address(0xBF8834A8)));
extern volatile uint32_t        DCH5DPTRINV __attribute__((section("sfrs"),address(0xBF8834AC)));
#define DCH5CSIZ DCH5CSIZ
extern volatile uint32_t   DCH5CSIZ __attribute__((section("sfrs"), address(0xBF8834B0)));
extern volatile uint32_t        DCH5CSIZCLR __attribute__((section("sfrs"),address(0xBF8834B4)));
extern volatile uint32_t        DCH5CSIZSET __attribute__((section("sfrs"),address(0xBF8834B8)));
extern volatile uint32_t        DCH5CSIZINV __attribute__((section("sfrs"),address(0xBF8834BC)));
#define DCH5CPTR DCH5CPTR
extern volatile uint32_t   DCH5CPTR __attribute__((section("sfrs"), address(0xBF8834C0)));
extern volatile uint32_t        DCH5CPTRCLR __attribute__((section("sfrs"),address(0xBF8834C4)));
extern volatile uint32_t        DCH5CPTRSET __attribute__((section("sfrs"),address(0xBF8834C8)));
extern volatile uint32_t        DCH5CPTRINV __attribute__((section("sfrs"),address(0xBF8834CC)));
#define DCH5DAT DCH5DAT
extern volatile uint32_t   DCH5DAT __attribute__((section("sfrs"), address(0xBF8834D0)));
extern volatile uint32_t        DCH5DATCLR __attribute__((section("sfrs"),address(0xBF8834D4)));
extern volatile uint32_t        DCH5DATSET __attribute__((section("sfrs"),address(0xBF8834D8)));
extern volatile uint32_t        DCH5DATINV __attribute__((section("sfrs"),address(0xBF8834DC)));
#define DCH6CON DCH6CON
extern volatile uint32_t   DCH6CON __attribute__((section("sfrs"), address(0xBF8834E0)));
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
} __DCH6CONbits_t;
extern volatile __DCH6CONbits_t DCH6CONbits __asm__ ("DCH6CON") __attribute__((section("sfrs"), address(0xBF8834E0)));
extern volatile uint32_t        DCH6CONCLR __attribute__((section("sfrs"),address(0xBF8834E4)));
extern volatile uint32_t        DCH6CONSET __attribute__((section("sfrs"),address(0xBF8834E8)));
extern volatile uint32_t        DCH6CONINV __attribute__((section("sfrs"),address(0xBF8834EC)));
#define DCH6ECON DCH6ECON
extern volatile uint32_t   DCH6ECON __attribute__((section("sfrs"), address(0xBF8834F0)));
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
} __DCH6ECONbits_t;
extern volatile __DCH6ECONbits_t DCH6ECONbits __asm__ ("DCH6ECON") __attribute__((section("sfrs"), address(0xBF8834F0)));
extern volatile uint32_t        DCH6ECONCLR __attribute__((section("sfrs"),address(0xBF8834F4)));
extern volatile uint32_t        DCH6ECONSET __attribute__((section("sfrs"),address(0xBF8834F8)));
extern volatile uint32_t        DCH6ECONINV __attribute__((section("sfrs"),address(0xBF8834FC)));
#define DCH6INT DCH6INT
extern volatile uint32_t   DCH6INT __attribute__((section("sfrs"), address(0xBF883500)));
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
} __DCH6INTbits_t;
extern volatile __DCH6INTbits_t DCH6INTbits __asm__ ("DCH6INT") __attribute__((section("sfrs"), address(0xBF883500)));
extern volatile uint32_t        DCH6INTCLR __attribute__((section("sfrs"),address(0xBF883504)));
extern volatile uint32_t        DCH6INTSET __attribute__((section("sfrs"),address(0xBF883508)));
extern volatile uint32_t        DCH6INTINV __attribute__((section("sfrs"),address(0xBF88350C)));
#define DCH6SSA DCH6SSA
extern volatile uint32_t   DCH6SSA __attribute__((section("sfrs"), address(0xBF883510)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH6SSAbits_t;
extern volatile __DCH6SSAbits_t DCH6SSAbits __asm__ ("DCH6SSA") __attribute__((section("sfrs"), address(0xBF883510)));
extern volatile uint32_t        DCH6SSACLR __attribute__((section("sfrs"),address(0xBF883514)));
extern volatile uint32_t        DCH6SSASET __attribute__((section("sfrs"),address(0xBF883518)));
extern volatile uint32_t        DCH6SSAINV __attribute__((section("sfrs"),address(0xBF88351C)));
#define DCH6DSA DCH6DSA
extern volatile uint32_t   DCH6DSA __attribute__((section("sfrs"), address(0xBF883520)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH6DSAbits_t;
extern volatile __DCH6DSAbits_t DCH6DSAbits __asm__ ("DCH6DSA") __attribute__((section("sfrs"), address(0xBF883520)));
extern volatile uint32_t        DCH6DSACLR __attribute__((section("sfrs"),address(0xBF883524)));
extern volatile uint32_t        DCH6DSASET __attribute__((section("sfrs"),address(0xBF883528)));
extern volatile uint32_t        DCH6DSAINV __attribute__((section("sfrs"),address(0xBF88352C)));
#define DCH6SSIZ DCH6SSIZ
extern volatile uint32_t   DCH6SSIZ __attribute__((section("sfrs"), address(0xBF883530)));
extern volatile uint32_t        DCH6SSIZCLR __attribute__((section("sfrs"),address(0xBF883534)));
extern volatile uint32_t        DCH6SSIZSET __attribute__((section("sfrs"),address(0xBF883538)));
extern volatile uint32_t        DCH6SSIZINV __attribute__((section("sfrs"),address(0xBF88353C)));
#define DCH6DSIZ DCH6DSIZ
extern volatile uint32_t   DCH6DSIZ __attribute__((section("sfrs"), address(0xBF883540)));
extern volatile uint32_t        DCH6DSIZCLR __attribute__((section("sfrs"),address(0xBF883544)));
extern volatile uint32_t        DCH6DSIZSET __attribute__((section("sfrs"),address(0xBF883548)));
extern volatile uint32_t        DCH6DSIZINV __attribute__((section("sfrs"),address(0xBF88354C)));
#define DCH6SPTR DCH6SPTR
extern volatile uint32_t   DCH6SPTR __attribute__((section("sfrs"), address(0xBF883550)));
extern volatile uint32_t        DCH6SPTRCLR __attribute__((section("sfrs"),address(0xBF883554)));
extern volatile uint32_t        DCH6SPTRSET __attribute__((section("sfrs"),address(0xBF883558)));
extern volatile uint32_t        DCH6SPTRINV __attribute__((section("sfrs"),address(0xBF88355C)));
#define DCH6DPTR DCH6DPTR
extern volatile uint32_t   DCH6DPTR __attribute__((section("sfrs"), address(0xBF883560)));
extern volatile uint32_t        DCH6DPTRCLR __attribute__((section("sfrs"),address(0xBF883564)));
extern volatile uint32_t        DCH6DPTRSET __attribute__((section("sfrs"),address(0xBF883568)));
extern volatile uint32_t        DCH6DPTRINV __attribute__((section("sfrs"),address(0xBF88356C)));
#define DCH6CSIZ DCH6CSIZ
extern volatile uint32_t   DCH6CSIZ __attribute__((section("sfrs"), address(0xBF883570)));
extern volatile uint32_t        DCH6CSIZCLR __attribute__((section("sfrs"),address(0xBF883574)));
extern volatile uint32_t        DCH6CSIZSET __attribute__((section("sfrs"),address(0xBF883578)));
extern volatile uint32_t        DCH6CSIZINV __attribute__((section("sfrs"),address(0xBF88357C)));
#define DCH6CPTR DCH6CPTR
extern volatile uint32_t   DCH6CPTR __attribute__((section("sfrs"), address(0xBF883580)));
extern volatile uint32_t        DCH6CPTRCLR __attribute__((section("sfrs"),address(0xBF883584)));
extern volatile uint32_t        DCH6CPTRSET __attribute__((section("sfrs"),address(0xBF883588)));
extern volatile uint32_t        DCH6CPTRINV __attribute__((section("sfrs"),address(0xBF88358C)));
#define DCH6DAT DCH6DAT
extern volatile uint32_t   DCH6DAT __attribute__((section("sfrs"), address(0xBF883590)));
extern volatile uint32_t        DCH6DATCLR __attribute__((section("sfrs"),address(0xBF883594)));
extern volatile uint32_t        DCH6DATSET __attribute__((section("sfrs"),address(0xBF883598)));
extern volatile uint32_t        DCH6DATINV __attribute__((section("sfrs"),address(0xBF88359C)));
#define DCH7CON DCH7CON
extern volatile uint32_t   DCH7CON __attribute__((section("sfrs"), address(0xBF8835A0)));
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
} __DCH7CONbits_t;
extern volatile __DCH7CONbits_t DCH7CONbits __asm__ ("DCH7CON") __attribute__((section("sfrs"), address(0xBF8835A0)));
extern volatile uint32_t        DCH7CONCLR __attribute__((section("sfrs"),address(0xBF8835A4)));
extern volatile uint32_t        DCH7CONSET __attribute__((section("sfrs"),address(0xBF8835A8)));
extern volatile uint32_t        DCH7CONINV __attribute__((section("sfrs"),address(0xBF8835AC)));
#define DCH7ECON DCH7ECON
extern volatile uint32_t   DCH7ECON __attribute__((section("sfrs"), address(0xBF8835B0)));
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
} __DCH7ECONbits_t;
extern volatile __DCH7ECONbits_t DCH7ECONbits __asm__ ("DCH7ECON") __attribute__((section("sfrs"), address(0xBF8835B0)));
extern volatile uint32_t        DCH7ECONCLR __attribute__((section("sfrs"),address(0xBF8835B4)));
extern volatile uint32_t        DCH7ECONSET __attribute__((section("sfrs"),address(0xBF8835B8)));
extern volatile uint32_t        DCH7ECONINV __attribute__((section("sfrs"),address(0xBF8835BC)));
#define DCH7INT DCH7INT
extern volatile uint32_t   DCH7INT __attribute__((section("sfrs"), address(0xBF8835C0)));
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
} __DCH7INTbits_t;
extern volatile __DCH7INTbits_t DCH7INTbits __asm__ ("DCH7INT") __attribute__((section("sfrs"), address(0xBF8835C0)));
extern volatile uint32_t        DCH7INTCLR __attribute__((section("sfrs"),address(0xBF8835C4)));
extern volatile uint32_t        DCH7INTSET __attribute__((section("sfrs"),address(0xBF8835C8)));
extern volatile uint32_t        DCH7INTINV __attribute__((section("sfrs"),address(0xBF8835CC)));
#define DCH7SSA DCH7SSA
extern volatile uint32_t   DCH7SSA __attribute__((section("sfrs"), address(0xBF8835D0)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH7SSAbits_t;
extern volatile __DCH7SSAbits_t DCH7SSAbits __asm__ ("DCH7SSA") __attribute__((section("sfrs"), address(0xBF8835D0)));
extern volatile uint32_t        DCH7SSACLR __attribute__((section("sfrs"),address(0xBF8835D4)));
extern volatile uint32_t        DCH7SSASET __attribute__((section("sfrs"),address(0xBF8835D8)));
extern volatile uint32_t        DCH7SSAINV __attribute__((section("sfrs"),address(0xBF8835DC)));
#define DCH7DSA DCH7DSA
extern volatile uint32_t   DCH7DSA __attribute__((section("sfrs"), address(0xBF8835E0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH7DSAbits_t;
extern volatile __DCH7DSAbits_t DCH7DSAbits __asm__ ("DCH7DSA") __attribute__((section("sfrs"), address(0xBF8835E0)));
extern volatile uint32_t        DCH7DSACLR __attribute__((section("sfrs"),address(0xBF8835E4)));
extern volatile uint32_t        DCH7DSASET __attribute__((section("sfrs"),address(0xBF8835E8)));
extern volatile uint32_t        DCH7DSAINV __attribute__((section("sfrs"),address(0xBF8835EC)));
#define DCH7SSIZ DCH7SSIZ
extern volatile uint32_t   DCH7SSIZ __attribute__((section("sfrs"), address(0xBF8835F0)));
extern volatile uint32_t        DCH7SSIZCLR __attribute__((section("sfrs"),address(0xBF8835F4)));
extern volatile uint32_t        DCH7SSIZSET __attribute__((section("sfrs"),address(0xBF8835F8)));
extern volatile uint32_t        DCH7SSIZINV __attribute__((section("sfrs"),address(0xBF8835FC)));
#define DCH7DSIZ DCH7DSIZ
extern volatile uint32_t   DCH7DSIZ __attribute__((section("sfrs"), address(0xBF883600)));
extern volatile uint32_t        DCH7DSIZCLR __attribute__((section("sfrs"),address(0xBF883604)));
extern volatile uint32_t        DCH7DSIZSET __attribute__((section("sfrs"),address(0xBF883608)));
extern volatile uint32_t        DCH7DSIZINV __attribute__((section("sfrs"),address(0xBF88360C)));
#define DCH7SPTR DCH7SPTR
extern volatile uint32_t   DCH7SPTR __attribute__((section("sfrs"), address(0xBF883610)));
extern volatile uint32_t        DCH7SPTRCLR __attribute__((section("sfrs"),address(0xBF883614)));
extern volatile uint32_t        DCH7SPTRSET __attribute__((section("sfrs"),address(0xBF883618)));
extern volatile uint32_t        DCH7SPTRINV __attribute__((section("sfrs"),address(0xBF88361C)));
#define DCH7DPTR DCH7DPTR
extern volatile uint32_t   DCH7DPTR __attribute__((section("sfrs"), address(0xBF883620)));
extern volatile uint32_t        DCH7DPTRCLR __attribute__((section("sfrs"),address(0xBF883624)));
extern volatile uint32_t        DCH7DPTRSET __attribute__((section("sfrs"),address(0xBF883628)));
extern volatile uint32_t        DCH7DPTRINV __attribute__((section("sfrs"),address(0xBF88362C)));
#define DCH7CSIZ DCH7CSIZ
extern volatile uint32_t   DCH7CSIZ __attribute__((section("sfrs"), address(0xBF883630)));
extern volatile uint32_t        DCH7CSIZCLR __attribute__((section("sfrs"),address(0xBF883634)));
extern volatile uint32_t        DCH7CSIZSET __attribute__((section("sfrs"),address(0xBF883638)));
extern volatile uint32_t        DCH7CSIZINV __attribute__((section("sfrs"),address(0xBF88363C)));
#define DCH7CPTR DCH7CPTR
extern volatile uint32_t   DCH7CPTR __attribute__((section("sfrs"), address(0xBF883640)));
extern volatile uint32_t        DCH7CPTRCLR __attribute__((section("sfrs"),address(0xBF883644)));
extern volatile uint32_t        DCH7CPTRSET __attribute__((section("sfrs"),address(0xBF883648)));
extern volatile uint32_t        DCH7CPTRINV __attribute__((section("sfrs"),address(0xBF88364C)));
#define DCH7DAT DCH7DAT
extern volatile uint32_t   DCH7DAT __attribute__((section("sfrs"), address(0xBF883650)));
extern volatile uint32_t        DCH7DATCLR __attribute__((section("sfrs"),address(0xBF883654)));
extern volatile uint32_t        DCH7DATSET __attribute__((section("sfrs"),address(0xBF883658)));
extern volatile uint32_t        DCH7DATINV __attribute__((section("sfrs"),address(0xBF88365C)));
#define CHECON CHECON
extern volatile uint32_t   CHECON __attribute__((section("sfrs"), address(0xBF884000)));
typedef union {
  struct {
    uint32_t PFMWS:3;
    uint32_t :1;
    uint32_t PREFEN:2;
    uint32_t :2;
    uint32_t DCSZ:2;
    uint32_t :6;
    uint32_t CHECOH:1;
  };
  struct {
    uint32_t w:32;
  };
} __CHECONbits_t;
extern volatile __CHECONbits_t CHECONbits __asm__ ("CHECON") __attribute__((section("sfrs"), address(0xBF884000)));
extern volatile uint32_t        CHECONCLR __attribute__((section("sfrs"),address(0xBF884004)));
extern volatile uint32_t        CHECONSET __attribute__((section("sfrs"),address(0xBF884008)));
extern volatile uint32_t        CHECONINV __attribute__((section("sfrs"),address(0xBF88400C)));
#define CHEACC CHEACC
extern volatile uint32_t   CHEACC __attribute__((section("sfrs"), address(0xBF884010)));
typedef struct {
  uint32_t CHEIDX:4;
  uint32_t :27;
  uint32_t CHEWEN:1;
} __CHEACCbits_t;
extern volatile __CHEACCbits_t CHEACCbits __asm__ ("CHEACC") __attribute__((section("sfrs"), address(0xBF884010)));
extern volatile uint32_t        CHEACCCLR __attribute__((section("sfrs"),address(0xBF884014)));
extern volatile uint32_t        CHEACCSET __attribute__((section("sfrs"),address(0xBF884018)));
extern volatile uint32_t        CHEACCINV __attribute__((section("sfrs"),address(0xBF88401C)));
#define CHETAG CHETAG
extern volatile uint32_t   CHETAG __attribute__((section("sfrs"), address(0xBF884020)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t LTYPE:1;
    uint32_t LLOCK:1;
    uint32_t LVALID:1;
    uint32_t LTAG:20;
    uint32_t :7;
    uint32_t LTAGBOOT:1;
  };
  struct {
    uint32_t w:32;
  };
} __CHETAGbits_t;
extern volatile __CHETAGbits_t CHETAGbits __asm__ ("CHETAG") __attribute__((section("sfrs"), address(0xBF884020)));
extern volatile uint32_t        CHETAGCLR __attribute__((section("sfrs"),address(0xBF884024)));
extern volatile uint32_t        CHETAGSET __attribute__((section("sfrs"),address(0xBF884028)));
extern volatile uint32_t        CHETAGINV __attribute__((section("sfrs"),address(0xBF88402C)));
#define CHEMSK CHEMSK
extern volatile uint32_t   CHEMSK __attribute__((section("sfrs"), address(0xBF884030)));
typedef struct {
  uint32_t :5;
  uint32_t LMASK:11;
} __CHEMSKbits_t;
extern volatile __CHEMSKbits_t CHEMSKbits __asm__ ("CHEMSK") __attribute__((section("sfrs"), address(0xBF884030)));
extern volatile uint32_t        CHEMSKCLR __attribute__((section("sfrs"),address(0xBF884034)));
extern volatile uint32_t        CHEMSKSET __attribute__((section("sfrs"),address(0xBF884038)));
extern volatile uint32_t        CHEMSKINV __attribute__((section("sfrs"),address(0xBF88403C)));
#define CHEW0 CHEW0
extern volatile uint32_t   CHEW0 __attribute__((section("sfrs"), address(0xBF884040)));
typedef struct {
  uint32_t CHEW0:32;
} __CHEW0bits_t;
extern volatile __CHEW0bits_t CHEW0bits __asm__ ("CHEW0") __attribute__((section("sfrs"), address(0xBF884040)));
#define CHEW1 CHEW1
extern volatile uint32_t   CHEW1 __attribute__((section("sfrs"), address(0xBF884050)));
typedef struct {
  uint32_t CHEW1:32;
} __CHEW1bits_t;
extern volatile __CHEW1bits_t CHEW1bits __asm__ ("CHEW1") __attribute__((section("sfrs"), address(0xBF884050)));
#define CHEW2 CHEW2
extern volatile uint32_t   CHEW2 __attribute__((section("sfrs"), address(0xBF884060)));
typedef struct {
  uint32_t CHEW2:32;
} __CHEW2bits_t;
extern volatile __CHEW2bits_t CHEW2bits __asm__ ("CHEW2") __attribute__((section("sfrs"), address(0xBF884060)));
#define CHEW3 CHEW3
extern volatile uint32_t   CHEW3 __attribute__((section("sfrs"), address(0xBF884070)));
typedef struct {
  uint32_t CHEW3:32;
} __CHEW3bits_t;
extern volatile __CHEW3bits_t CHEW3bits __asm__ ("CHEW3") __attribute__((section("sfrs"), address(0xBF884070)));
#define CHELRU CHELRU
extern volatile uint32_t   CHELRU __attribute__((section("sfrs"), address(0xBF884080)));
typedef struct {
  uint32_t CHELRU:25;
} __CHELRUbits_t;
extern volatile __CHELRUbits_t CHELRUbits __asm__ ("CHELRU") __attribute__((section("sfrs"), address(0xBF884080)));
#define CHEHIT CHEHIT
extern volatile uint32_t   CHEHIT __attribute__((section("sfrs"), address(0xBF884090)));
typedef struct {
  uint32_t CHEHIT:32;
} __CHEHITbits_t;
extern volatile __CHEHITbits_t CHEHITbits __asm__ ("CHEHIT") __attribute__((section("sfrs"), address(0xBF884090)));
#define CHEMIS CHEMIS
extern volatile uint32_t   CHEMIS __attribute__((section("sfrs"), address(0xBF8840A0)));
typedef struct {
  uint32_t CHEMIS:32;
} __CHEMISbits_t;
extern volatile __CHEMISbits_t CHEMISbits __asm__ ("CHEMIS") __attribute__((section("sfrs"), address(0xBF8840A0)));
#define CHEPFABT CHEPFABT
extern volatile uint32_t   CHEPFABT __attribute__((section("sfrs"), address(0xBF8840C0)));
typedef struct {
  uint32_t CHEPFABT:32;
} __CHEPFABTbits_t;
extern volatile __CHEPFABTbits_t CHEPFABTbits __asm__ ("CHEPFABT") __attribute__((section("sfrs"), address(0xBF8840C0)));
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
#define TRISA TRISA
extern volatile uint32_t   TRISA __attribute__((section("sfrs"), address(0xBF886000)));
typedef union {
  struct {
    uint32_t TRISA0:1;
    uint32_t TRISA1:1;
    uint32_t TRISA2:1;
    uint32_t TRISA3:1;
    uint32_t TRISA4:1;
    uint32_t TRISA5:1;
    uint32_t TRISA6:1;
    uint32_t TRISA7:1;
    uint32_t :1;
    uint32_t TRISA9:1;
    uint32_t TRISA10:1;
    uint32_t :3;
    uint32_t TRISA14:1;
    uint32_t TRISA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t TRISAbits __asm__ ("TRISA") __attribute__((section("sfrs"), address(0xBF886000)));
extern volatile uint32_t        TRISACLR __attribute__((section("sfrs"),address(0xBF886004)));
extern volatile uint32_t        TRISASET __attribute__((section("sfrs"),address(0xBF886008)));
extern volatile uint32_t        TRISAINV __attribute__((section("sfrs"),address(0xBF88600C)));
#define PORTA PORTA
extern volatile uint32_t   PORTA __attribute__((section("sfrs"), address(0xBF886010)));
typedef union {
  struct {
    uint32_t RA0:1;
    uint32_t RA1:1;
    uint32_t RA2:1;
    uint32_t RA3:1;
    uint32_t RA4:1;
    uint32_t RA5:1;
    uint32_t RA6:1;
    uint32_t RA7:1;
    uint32_t :1;
    uint32_t RA9:1;
    uint32_t RA10:1;
    uint32_t :3;
    uint32_t RA14:1;
    uint32_t RA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t PORTAbits __asm__ ("PORTA") __attribute__((section("sfrs"), address(0xBF886010)));
extern volatile uint32_t        PORTACLR __attribute__((section("sfrs"),address(0xBF886014)));
extern volatile uint32_t        PORTASET __attribute__((section("sfrs"),address(0xBF886018)));
extern volatile uint32_t        PORTAINV __attribute__((section("sfrs"),address(0xBF88601C)));
#define LATA LATA
extern volatile uint32_t   LATA __attribute__((section("sfrs"), address(0xBF886020)));
typedef union {
  struct {
    uint32_t LATA0:1;
    uint32_t LATA1:1;
    uint32_t LATA2:1;
    uint32_t LATA3:1;
    uint32_t LATA4:1;
    uint32_t LATA5:1;
    uint32_t LATA6:1;
    uint32_t LATA7:1;
    uint32_t :1;
    uint32_t LATA9:1;
    uint32_t LATA10:1;
    uint32_t :3;
    uint32_t LATA14:1;
    uint32_t LATA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATAbits_t;
extern volatile __LATAbits_t LATAbits __asm__ ("LATA") __attribute__((section("sfrs"), address(0xBF886020)));
extern volatile uint32_t        LATACLR __attribute__((section("sfrs"),address(0xBF886024)));
extern volatile uint32_t        LATASET __attribute__((section("sfrs"),address(0xBF886028)));
extern volatile uint32_t        LATAINV __attribute__((section("sfrs"),address(0xBF88602C)));
#define ODCA ODCA
extern volatile uint32_t   ODCA __attribute__((section("sfrs"), address(0xBF886030)));
typedef union {
  struct {
    uint32_t ODCA0:1;
    uint32_t ODCA1:1;
    uint32_t ODCA2:1;
    uint32_t ODCA3:1;
    uint32_t ODCA4:1;
    uint32_t ODCA5:1;
    uint32_t ODCA6:1;
    uint32_t ODCA7:1;
    uint32_t :1;
    uint32_t ODCA9:1;
    uint32_t ODCA10:1;
    uint32_t :3;
    uint32_t ODCA14:1;
    uint32_t ODCA15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCAbits_t;
extern volatile __ODCAbits_t ODCAbits __asm__ ("ODCA") __attribute__((section("sfrs"), address(0xBF886030)));
extern volatile uint32_t        ODCACLR __attribute__((section("sfrs"),address(0xBF886034)));
extern volatile uint32_t        ODCASET __attribute__((section("sfrs"),address(0xBF886038)));
extern volatile uint32_t        ODCAINV __attribute__((section("sfrs"),address(0xBF88603C)));
#define TRISB TRISB
extern volatile uint32_t   TRISB __attribute__((section("sfrs"), address(0xBF886040)));
typedef union {
  struct {
    uint32_t TRISB0:1;
    uint32_t TRISB1:1;
    uint32_t TRISB2:1;
    uint32_t TRISB3:1;
    uint32_t TRISB4:1;
    uint32_t TRISB5:1;
    uint32_t TRISB6:1;
    uint32_t TRISB7:1;
    uint32_t TRISB8:1;
    uint32_t TRISB9:1;
    uint32_t TRISB10:1;
    uint32_t TRISB11:1;
    uint32_t TRISB12:1;
    uint32_t TRISB13:1;
    uint32_t TRISB14:1;
    uint32_t TRISB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISBbits_t;
extern volatile __TRISBbits_t TRISBbits __asm__ ("TRISB") __attribute__((section("sfrs"), address(0xBF886040)));
extern volatile uint32_t        TRISBCLR __attribute__((section("sfrs"),address(0xBF886044)));
extern volatile uint32_t        TRISBSET __attribute__((section("sfrs"),address(0xBF886048)));
extern volatile uint32_t        TRISBINV __attribute__((section("sfrs"),address(0xBF88604C)));
#define PORTB PORTB
extern volatile uint32_t   PORTB __attribute__((section("sfrs"), address(0xBF886050)));
typedef union {
  struct {
    uint32_t RB0:1;
    uint32_t RB1:1;
    uint32_t RB2:1;
    uint32_t RB3:1;
    uint32_t RB4:1;
    uint32_t RB5:1;
    uint32_t RB6:1;
    uint32_t RB7:1;
    uint32_t RB8:1;
    uint32_t RB9:1;
    uint32_t RB10:1;
    uint32_t RB11:1;
    uint32_t RB12:1;
    uint32_t RB13:1;
    uint32_t RB14:1;
    uint32_t RB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTBbits_t;
extern volatile __PORTBbits_t PORTBbits __asm__ ("PORTB") __attribute__((section("sfrs"), address(0xBF886050)));
extern volatile uint32_t        PORTBCLR __attribute__((section("sfrs"),address(0xBF886054)));
extern volatile uint32_t        PORTBSET __attribute__((section("sfrs"),address(0xBF886058)));
extern volatile uint32_t        PORTBINV __attribute__((section("sfrs"),address(0xBF88605C)));
#define LATB LATB
extern volatile uint32_t   LATB __attribute__((section("sfrs"), address(0xBF886060)));
typedef union {
  struct {
    uint32_t LATB0:1;
    uint32_t LATB1:1;
    uint32_t LATB2:1;
    uint32_t LATB3:1;
    uint32_t LATB4:1;
    uint32_t LATB5:1;
    uint32_t LATB6:1;
    uint32_t LATB7:1;
    uint32_t LATB8:1;
    uint32_t LATB9:1;
    uint32_t LATB10:1;
    uint32_t LATB11:1;
    uint32_t LATB12:1;
    uint32_t LATB13:1;
    uint32_t LATB14:1;
    uint32_t LATB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATBbits_t;
extern volatile __LATBbits_t LATBbits __asm__ ("LATB") __attribute__((section("sfrs"), address(0xBF886060)));
extern volatile uint32_t        LATBCLR __attribute__((section("sfrs"),address(0xBF886064)));
extern volatile uint32_t        LATBSET __attribute__((section("sfrs"),address(0xBF886068)));
extern volatile uint32_t        LATBINV __attribute__((section("sfrs"),address(0xBF88606C)));
#define ODCB ODCB
extern volatile uint32_t   ODCB __attribute__((section("sfrs"), address(0xBF886070)));
typedef union {
  struct {
    uint32_t ODCB0:1;
    uint32_t ODCB1:1;
    uint32_t ODCB2:1;
    uint32_t ODCB3:1;
    uint32_t ODCB4:1;
    uint32_t ODCB5:1;
    uint32_t ODCB6:1;
    uint32_t ODCB7:1;
    uint32_t ODCB8:1;
    uint32_t ODCB9:1;
    uint32_t ODCB10:1;
    uint32_t ODCB11:1;
    uint32_t ODCB12:1;
    uint32_t ODCB13:1;
    uint32_t ODCB14:1;
    uint32_t ODCB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCBbits_t;
extern volatile __ODCBbits_t ODCBbits __asm__ ("ODCB") __attribute__((section("sfrs"), address(0xBF886070)));
extern volatile uint32_t        ODCBCLR __attribute__((section("sfrs"),address(0xBF886074)));
extern volatile uint32_t        ODCBSET __attribute__((section("sfrs"),address(0xBF886078)));
extern volatile uint32_t        ODCBINV __attribute__((section("sfrs"),address(0xBF88607C)));
#define TRISC TRISC
extern volatile uint32_t   TRISC __attribute__((section("sfrs"), address(0xBF886080)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TRISC1:1;
    uint32_t TRISC2:1;
    uint32_t TRISC3:1;
    uint32_t TRISC4:1;
    uint32_t :7;
    uint32_t TRISC12:1;
    uint32_t TRISC13:1;
    uint32_t TRISC14:1;
    uint32_t TRISC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t TRISCbits __asm__ ("TRISC") __attribute__((section("sfrs"), address(0xBF886080)));
extern volatile uint32_t        TRISCCLR __attribute__((section("sfrs"),address(0xBF886084)));
extern volatile uint32_t        TRISCSET __attribute__((section("sfrs"),address(0xBF886088)));
extern volatile uint32_t        TRISCINV __attribute__((section("sfrs"),address(0xBF88608C)));
#define PORTC PORTC
extern volatile uint32_t   PORTC __attribute__((section("sfrs"), address(0xBF886090)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t RC1:1;
    uint32_t RC2:1;
    uint32_t RC3:1;
    uint32_t RC4:1;
    uint32_t :7;
    uint32_t RC12:1;
    uint32_t RC13:1;
    uint32_t RC14:1;
    uint32_t RC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t PORTCbits __asm__ ("PORTC") __attribute__((section("sfrs"), address(0xBF886090)));
extern volatile uint32_t        PORTCCLR __attribute__((section("sfrs"),address(0xBF886094)));
extern volatile uint32_t        PORTCSET __attribute__((section("sfrs"),address(0xBF886098)));
extern volatile uint32_t        PORTCINV __attribute__((section("sfrs"),address(0xBF88609C)));
#define LATC LATC
extern volatile uint32_t   LATC __attribute__((section("sfrs"), address(0xBF8860A0)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t LATC1:1;
    uint32_t LATC2:1;
    uint32_t LATC3:1;
    uint32_t LATC4:1;
    uint32_t :7;
    uint32_t LATC12:1;
    uint32_t LATC13:1;
    uint32_t LATC14:1;
    uint32_t LATC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATCbits_t;
extern volatile __LATCbits_t LATCbits __asm__ ("LATC") __attribute__((section("sfrs"), address(0xBF8860A0)));
extern volatile uint32_t        LATCCLR __attribute__((section("sfrs"),address(0xBF8860A4)));
extern volatile uint32_t        LATCSET __attribute__((section("sfrs"),address(0xBF8860A8)));
extern volatile uint32_t        LATCINV __attribute__((section("sfrs"),address(0xBF8860AC)));
#define ODCC ODCC
extern volatile uint32_t   ODCC __attribute__((section("sfrs"), address(0xBF8860B0)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t ODCC1:1;
    uint32_t ODCC2:1;
    uint32_t ODCC3:1;
    uint32_t ODCC4:1;
    uint32_t :7;
    uint32_t ODCC12:1;
    uint32_t ODCC13:1;
    uint32_t ODCC14:1;
    uint32_t ODCC15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCCbits_t;
extern volatile __ODCCbits_t ODCCbits __asm__ ("ODCC") __attribute__((section("sfrs"), address(0xBF8860B0)));
extern volatile uint32_t        ODCCCLR __attribute__((section("sfrs"),address(0xBF8860B4)));
extern volatile uint32_t        ODCCSET __attribute__((section("sfrs"),address(0xBF8860B8)));
extern volatile uint32_t        ODCCINV __attribute__((section("sfrs"),address(0xBF8860BC)));
#define TRISD TRISD
extern volatile uint32_t   TRISD __attribute__((section("sfrs"), address(0xBF8860C0)));
typedef union {
  struct {
    uint32_t TRISD0:1;
    uint32_t TRISD1:1;
    uint32_t TRISD2:1;
    uint32_t TRISD3:1;
    uint32_t TRISD4:1;
    uint32_t TRISD5:1;
    uint32_t TRISD6:1;
    uint32_t TRISD7:1;
    uint32_t TRISD8:1;
    uint32_t TRISD9:1;
    uint32_t TRISD10:1;
    uint32_t TRISD11:1;
    uint32_t TRISD12:1;
    uint32_t TRISD13:1;
    uint32_t TRISD14:1;
    uint32_t TRISD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISDbits_t;
extern volatile __TRISDbits_t TRISDbits __asm__ ("TRISD") __attribute__((section("sfrs"), address(0xBF8860C0)));
extern volatile uint32_t        TRISDCLR __attribute__((section("sfrs"),address(0xBF8860C4)));
extern volatile uint32_t        TRISDSET __attribute__((section("sfrs"),address(0xBF8860C8)));
extern volatile uint32_t        TRISDINV __attribute__((section("sfrs"),address(0xBF8860CC)));
#define PORTD PORTD
extern volatile uint32_t   PORTD __attribute__((section("sfrs"), address(0xBF8860D0)));
typedef union {
  struct {
    uint32_t RD0:1;
    uint32_t RD1:1;
    uint32_t RD2:1;
    uint32_t RD3:1;
    uint32_t RD4:1;
    uint32_t RD5:1;
    uint32_t RD6:1;
    uint32_t RD7:1;
    uint32_t RD8:1;
    uint32_t RD9:1;
    uint32_t RD10:1;
    uint32_t RD11:1;
    uint32_t RD12:1;
    uint32_t RD13:1;
    uint32_t RD14:1;
    uint32_t RD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTDbits_t;
extern volatile __PORTDbits_t PORTDbits __asm__ ("PORTD") __attribute__((section("sfrs"), address(0xBF8860D0)));
extern volatile uint32_t        PORTDCLR __attribute__((section("sfrs"),address(0xBF8860D4)));
extern volatile uint32_t        PORTDSET __attribute__((section("sfrs"),address(0xBF8860D8)));
extern volatile uint32_t        PORTDINV __attribute__((section("sfrs"),address(0xBF8860DC)));
#define LATD LATD
extern volatile uint32_t   LATD __attribute__((section("sfrs"), address(0xBF8860E0)));
typedef union {
  struct {
    uint32_t LATD0:1;
    uint32_t LATD1:1;
    uint32_t LATD2:1;
    uint32_t LATD3:1;
    uint32_t LATD4:1;
    uint32_t LATD5:1;
    uint32_t LATD6:1;
    uint32_t LATD7:1;
    uint32_t LATD8:1;
    uint32_t LATD9:1;
    uint32_t LATD10:1;
    uint32_t LATD11:1;
    uint32_t LATD12:1;
    uint32_t LATD13:1;
    uint32_t LATD14:1;
    uint32_t LATD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATDbits_t;
extern volatile __LATDbits_t LATDbits __asm__ ("LATD") __attribute__((section("sfrs"), address(0xBF8860E0)));
extern volatile uint32_t        LATDCLR __attribute__((section("sfrs"),address(0xBF8860E4)));
extern volatile uint32_t        LATDSET __attribute__((section("sfrs"),address(0xBF8860E8)));
extern volatile uint32_t        LATDINV __attribute__((section("sfrs"),address(0xBF8860EC)));
#define ODCD ODCD
extern volatile uint32_t   ODCD __attribute__((section("sfrs"), address(0xBF8860F0)));
typedef union {
  struct {
    uint32_t ODCD0:1;
    uint32_t ODCD1:1;
    uint32_t ODCD2:1;
    uint32_t ODCD3:1;
    uint32_t ODCD4:1;
    uint32_t ODCD5:1;
    uint32_t ODCD6:1;
    uint32_t ODCD7:1;
    uint32_t ODCD8:1;
    uint32_t ODCD9:1;
    uint32_t ODCD10:1;
    uint32_t ODCD11:1;
    uint32_t ODCD12:1;
    uint32_t ODCD13:1;
    uint32_t ODCD14:1;
    uint32_t ODCD15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCDbits_t;
extern volatile __ODCDbits_t ODCDbits __asm__ ("ODCD") __attribute__((section("sfrs"), address(0xBF8860F0)));
extern volatile uint32_t        ODCDCLR __attribute__((section("sfrs"),address(0xBF8860F4)));
extern volatile uint32_t        ODCDSET __attribute__((section("sfrs"),address(0xBF8860F8)));
extern volatile uint32_t        ODCDINV __attribute__((section("sfrs"),address(0xBF8860FC)));
#define TRISE TRISE
extern volatile uint32_t   TRISE __attribute__((section("sfrs"), address(0xBF886100)));
typedef union {
  struct {
    uint32_t TRISE0:1;
    uint32_t TRISE1:1;
    uint32_t TRISE2:1;
    uint32_t TRISE3:1;
    uint32_t TRISE4:1;
    uint32_t TRISE5:1;
    uint32_t TRISE6:1;
    uint32_t TRISE7:1;
    uint32_t TRISE8:1;
    uint32_t TRISE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISEbits_t;
extern volatile __TRISEbits_t TRISEbits __asm__ ("TRISE") __attribute__((section("sfrs"), address(0xBF886100)));
extern volatile uint32_t        TRISECLR __attribute__((section("sfrs"),address(0xBF886104)));
extern volatile uint32_t        TRISESET __attribute__((section("sfrs"),address(0xBF886108)));
extern volatile uint32_t        TRISEINV __attribute__((section("sfrs"),address(0xBF88610C)));
#define PORTE PORTE
extern volatile uint32_t   PORTE __attribute__((section("sfrs"), address(0xBF886110)));
typedef union {
  struct {
    uint32_t RE0:1;
    uint32_t RE1:1;
    uint32_t RE2:1;
    uint32_t RE3:1;
    uint32_t RE4:1;
    uint32_t RE5:1;
    uint32_t RE6:1;
    uint32_t RE7:1;
    uint32_t RE8:1;
    uint32_t RE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTEbits_t;
extern volatile __PORTEbits_t PORTEbits __asm__ ("PORTE") __attribute__((section("sfrs"), address(0xBF886110)));
extern volatile uint32_t        PORTECLR __attribute__((section("sfrs"),address(0xBF886114)));
extern volatile uint32_t        PORTESET __attribute__((section("sfrs"),address(0xBF886118)));
extern volatile uint32_t        PORTEINV __attribute__((section("sfrs"),address(0xBF88611C)));
#define LATE LATE
extern volatile uint32_t   LATE __attribute__((section("sfrs"), address(0xBF886120)));
typedef union {
  struct {
    uint32_t LATE0:1;
    uint32_t LATE1:1;
    uint32_t LATE2:1;
    uint32_t LATE3:1;
    uint32_t LATE4:1;
    uint32_t LATE5:1;
    uint32_t LATE6:1;
    uint32_t LATE7:1;
    uint32_t LATE8:1;
    uint32_t LATE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATEbits_t;
extern volatile __LATEbits_t LATEbits __asm__ ("LATE") __attribute__((section("sfrs"), address(0xBF886120)));
extern volatile uint32_t        LATECLR __attribute__((section("sfrs"),address(0xBF886124)));
extern volatile uint32_t        LATESET __attribute__((section("sfrs"),address(0xBF886128)));
extern volatile uint32_t        LATEINV __attribute__((section("sfrs"),address(0xBF88612C)));
#define ODCE ODCE
extern volatile uint32_t   ODCE __attribute__((section("sfrs"), address(0xBF886130)));
typedef union {
  struct {
    uint32_t ODCE0:1;
    uint32_t ODCE1:1;
    uint32_t ODCE2:1;
    uint32_t ODCE3:1;
    uint32_t ODCE4:1;
    uint32_t ODCE5:1;
    uint32_t ODCE6:1;
    uint32_t ODCE7:1;
    uint32_t ODCE8:1;
    uint32_t ODCE9:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCEbits_t;
extern volatile __ODCEbits_t ODCEbits __asm__ ("ODCE") __attribute__((section("sfrs"), address(0xBF886130)));
extern volatile uint32_t        ODCECLR __attribute__((section("sfrs"),address(0xBF886134)));
extern volatile uint32_t        ODCESET __attribute__((section("sfrs"),address(0xBF886138)));
extern volatile uint32_t        ODCEINV __attribute__((section("sfrs"),address(0xBF88613C)));
#define TRISF TRISF
extern volatile uint32_t   TRISF __attribute__((section("sfrs"), address(0xBF886140)));
typedef union {
  struct {
    uint32_t TRISF0:1;
    uint32_t TRISF1:1;
    uint32_t TRISF2:1;
    uint32_t TRISF3:1;
    uint32_t TRISF4:1;
    uint32_t TRISF5:1;
    uint32_t :2;
    uint32_t TRISF8:1;
    uint32_t :3;
    uint32_t TRISF12:1;
    uint32_t TRISF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISFbits_t;
extern volatile __TRISFbits_t TRISFbits __asm__ ("TRISF") __attribute__((section("sfrs"), address(0xBF886140)));
extern volatile uint32_t        TRISFCLR __attribute__((section("sfrs"),address(0xBF886144)));
extern volatile uint32_t        TRISFSET __attribute__((section("sfrs"),address(0xBF886148)));
extern volatile uint32_t        TRISFINV __attribute__((section("sfrs"),address(0xBF88614C)));
#define PORTF PORTF
extern volatile uint32_t   PORTF __attribute__((section("sfrs"), address(0xBF886150)));
typedef union {
  struct {
    uint32_t RF0:1;
    uint32_t RF1:1;
    uint32_t RF2:1;
    uint32_t RF3:1;
    uint32_t RF4:1;
    uint32_t RF5:1;
    uint32_t :2;
    uint32_t RF8:1;
    uint32_t :3;
    uint32_t RF12:1;
    uint32_t RF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTFbits_t;
extern volatile __PORTFbits_t PORTFbits __asm__ ("PORTF") __attribute__((section("sfrs"), address(0xBF886150)));
extern volatile uint32_t        PORTFCLR __attribute__((section("sfrs"),address(0xBF886154)));
extern volatile uint32_t        PORTFSET __attribute__((section("sfrs"),address(0xBF886158)));
extern volatile uint32_t        PORTFINV __attribute__((section("sfrs"),address(0xBF88615C)));
#define LATF LATF
extern volatile uint32_t   LATF __attribute__((section("sfrs"), address(0xBF886160)));
typedef union {
  struct {
    uint32_t LATF0:1;
    uint32_t LATF1:1;
    uint32_t LATF2:1;
    uint32_t LATF3:1;
    uint32_t LATF4:1;
    uint32_t LATF5:1;
    uint32_t :2;
    uint32_t LATF8:1;
    uint32_t :3;
    uint32_t LATF12:1;
    uint32_t LATF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATFbits_t;
extern volatile __LATFbits_t LATFbits __asm__ ("LATF") __attribute__((section("sfrs"), address(0xBF886160)));
extern volatile uint32_t        LATFCLR __attribute__((section("sfrs"),address(0xBF886164)));
extern volatile uint32_t        LATFSET __attribute__((section("sfrs"),address(0xBF886168)));
extern volatile uint32_t        LATFINV __attribute__((section("sfrs"),address(0xBF88616C)));
#define ODCF ODCF
extern volatile uint32_t   ODCF __attribute__((section("sfrs"), address(0xBF886170)));
typedef union {
  struct {
    uint32_t ODCF0:1;
    uint32_t ODCF1:1;
    uint32_t ODCF2:1;
    uint32_t ODCF3:1;
    uint32_t ODCF4:1;
    uint32_t ODCF5:1;
    uint32_t :2;
    uint32_t ODCF8:1;
    uint32_t :3;
    uint32_t ODCF12:1;
    uint32_t ODCF13:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCFbits_t;
extern volatile __ODCFbits_t ODCFbits __asm__ ("ODCF") __attribute__((section("sfrs"), address(0xBF886170)));
extern volatile uint32_t        ODCFCLR __attribute__((section("sfrs"),address(0xBF886174)));
extern volatile uint32_t        ODCFSET __attribute__((section("sfrs"),address(0xBF886178)));
extern volatile uint32_t        ODCFINV __attribute__((section("sfrs"),address(0xBF88617C)));
#define TRISG TRISG
extern volatile uint32_t   TRISG __attribute__((section("sfrs"), address(0xBF886180)));
typedef union {
  struct {
    uint32_t TRISG0:1;
    uint32_t TRISG1:1;
    uint32_t TRISG2:1;
    uint32_t TRISG3:1;
    uint32_t :2;
    uint32_t TRISG6:1;
    uint32_t TRISG7:1;
    uint32_t TRISG8:1;
    uint32_t TRISG9:1;
    uint32_t :2;
    uint32_t TRISG12:1;
    uint32_t TRISG13:1;
    uint32_t TRISG14:1;
    uint32_t TRISG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISGbits_t;
extern volatile __TRISGbits_t TRISGbits __asm__ ("TRISG") __attribute__((section("sfrs"), address(0xBF886180)));
extern volatile uint32_t        TRISGCLR __attribute__((section("sfrs"),address(0xBF886184)));
extern volatile uint32_t        TRISGSET __attribute__((section("sfrs"),address(0xBF886188)));
extern volatile uint32_t        TRISGINV __attribute__((section("sfrs"),address(0xBF88618C)));
#define PORTG PORTG
extern volatile uint32_t   PORTG __attribute__((section("sfrs"), address(0xBF886190)));
typedef union {
  struct {
    uint32_t RG0:1;
    uint32_t RG1:1;
    uint32_t RG2:1;
    uint32_t RG3:1;
    uint32_t :2;
    uint32_t RG6:1;
    uint32_t RG7:1;
    uint32_t RG8:1;
    uint32_t RG9:1;
    uint32_t :2;
    uint32_t RG12:1;
    uint32_t RG13:1;
    uint32_t RG14:1;
    uint32_t RG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTGbits_t;
extern volatile __PORTGbits_t PORTGbits __asm__ ("PORTG") __attribute__((section("sfrs"), address(0xBF886190)));
extern volatile uint32_t        PORTGCLR __attribute__((section("sfrs"),address(0xBF886194)));
extern volatile uint32_t        PORTGSET __attribute__((section("sfrs"),address(0xBF886198)));
extern volatile uint32_t        PORTGINV __attribute__((section("sfrs"),address(0xBF88619C)));
#define LATG LATG
extern volatile uint32_t   LATG __attribute__((section("sfrs"), address(0xBF8861A0)));
typedef union {
  struct {
    uint32_t LATG0:1;
    uint32_t LATG1:1;
    uint32_t LATG2:1;
    uint32_t LATG3:1;
    uint32_t :2;
    uint32_t LATG6:1;
    uint32_t LATG7:1;
    uint32_t LATG8:1;
    uint32_t LATG9:1;
    uint32_t :2;
    uint32_t LATG12:1;
    uint32_t LATG13:1;
    uint32_t LATG14:1;
    uint32_t LATG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATGbits_t;
extern volatile __LATGbits_t LATGbits __asm__ ("LATG") __attribute__((section("sfrs"), address(0xBF8861A0)));
extern volatile uint32_t        LATGCLR __attribute__((section("sfrs"),address(0xBF8861A4)));
extern volatile uint32_t        LATGSET __attribute__((section("sfrs"),address(0xBF8861A8)));
extern volatile uint32_t        LATGINV __attribute__((section("sfrs"),address(0xBF8861AC)));
#define ODCG ODCG
extern volatile uint32_t   ODCG __attribute__((section("sfrs"), address(0xBF8861B0)));
typedef union {
  struct {
    uint32_t ODCG0:1;
    uint32_t ODCG1:1;
    uint32_t ODCG2:1;
    uint32_t ODCG3:1;
    uint32_t :2;
    uint32_t ODCG6:1;
    uint32_t ODCG7:1;
    uint32_t ODCG8:1;
    uint32_t ODCG9:1;
    uint32_t :2;
    uint32_t ODCG12:1;
    uint32_t ODCG13:1;
    uint32_t ODCG14:1;
    uint32_t ODCG15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCGbits_t;
extern volatile __ODCGbits_t ODCGbits __asm__ ("ODCG") __attribute__((section("sfrs"), address(0xBF8861B0)));
extern volatile uint32_t        ODCGCLR __attribute__((section("sfrs"),address(0xBF8861B4)));
extern volatile uint32_t        ODCGSET __attribute__((section("sfrs"),address(0xBF8861B8)));
extern volatile uint32_t        ODCGINV __attribute__((section("sfrs"),address(0xBF8861BC)));
#define CNCON CNCON
extern volatile uint32_t   CNCON __attribute__((section("sfrs"), address(0xBF8861C0)));
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
} __CNCONbits_t;
extern volatile __CNCONbits_t CNCONbits __asm__ ("CNCON") __attribute__((section("sfrs"), address(0xBF8861C0)));
extern volatile uint32_t        CNCONCLR __attribute__((section("sfrs"),address(0xBF8861C4)));
extern volatile uint32_t        CNCONSET __attribute__((section("sfrs"),address(0xBF8861C8)));
extern volatile uint32_t        CNCONINV __attribute__((section("sfrs"),address(0xBF8861CC)));
#define CNEN CNEN
extern volatile uint32_t   CNEN __attribute__((section("sfrs"), address(0xBF8861D0)));
typedef union {
  struct {
    uint32_t CNEN0:1;
    uint32_t CNEN1:1;
    uint32_t CNEN2:1;
    uint32_t CNEN3:1;
    uint32_t CNEN4:1;
    uint32_t CNEN5:1;
    uint32_t CNEN6:1;
    uint32_t CNEN7:1;
    uint32_t CNEN8:1;
    uint32_t CNEN9:1;
    uint32_t CNEN10:1;
    uint32_t CNEN11:1;
    uint32_t CNEN12:1;
    uint32_t CNEN13:1;
    uint32_t CNEN14:1;
    uint32_t CNEN15:1;
    uint32_t CNEN16:1;
    uint32_t CNEN17:1;
    uint32_t CNEN18:1;
    uint32_t CNEN19:1;
    uint32_t CNEN20:1;
    uint32_t CNEN21:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNENbits_t;
extern volatile __CNENbits_t CNENbits __asm__ ("CNEN") __attribute__((section("sfrs"), address(0xBF8861D0)));
extern volatile uint32_t        CNENCLR __attribute__((section("sfrs"),address(0xBF8861D4)));
extern volatile uint32_t        CNENSET __attribute__((section("sfrs"),address(0xBF8861D8)));
extern volatile uint32_t        CNENINV __attribute__((section("sfrs"),address(0xBF8861DC)));
#define CNPUE CNPUE
extern volatile uint32_t   CNPUE __attribute__((section("sfrs"), address(0xBF8861E0)));
typedef union {
  struct {
    uint32_t CNPUE0:1;
    uint32_t CNPUE1:1;
    uint32_t CNPUE2:1;
    uint32_t CNPUE3:1;
    uint32_t CNPUE4:1;
    uint32_t CNPUE5:1;
    uint32_t CNPUE6:1;
    uint32_t CNPUE7:1;
    uint32_t CNPUE8:1;
    uint32_t CNPUE9:1;
    uint32_t CNPUE10:1;
    uint32_t CNPUE11:1;
    uint32_t CNPUE12:1;
    uint32_t CNPUE13:1;
    uint32_t CNPUE14:1;
    uint32_t CNPUE15:1;
    uint32_t CNPUE16:1;
    uint32_t CNPUE17:1;
    uint32_t CNPUE18:1;
    uint32_t CNPUE19:1;
    uint32_t CNPUE20:1;
    uint32_t CNPUE21:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUEbits_t;
extern volatile __CNPUEbits_t CNPUEbits __asm__ ("CNPUE") __attribute__((section("sfrs"), address(0xBF8861E0)));
extern volatile uint32_t        CNPUECLR __attribute__((section("sfrs"),address(0xBF8861E4)));
extern volatile uint32_t        CNPUESET __attribute__((section("sfrs"),address(0xBF8861E8)));
extern volatile uint32_t        CNPUEINV __attribute__((section("sfrs"),address(0xBF8861EC)));
#define ETHCON1 ETHCON1
extern volatile uint32_t   ETHCON1 __attribute__((section("sfrs"), address(0xBF889000)));
typedef union {
  struct {
    uint32_t BUFCDEC:1;
    uint32_t :3;
    uint32_t MANFC:1;
    uint32_t :2;
    uint32_t AUTOFC:1;
    uint32_t RXEN:1;
    uint32_t TXRTS:1;
    uint32_t :3;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t PTV:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHCON1bits_t;
extern volatile __ETHCON1bits_t ETHCON1bits __asm__ ("ETHCON1") __attribute__((section("sfrs"), address(0xBF889000)));
extern volatile uint32_t        ETHCON1CLR __attribute__((section("sfrs"),address(0xBF889004)));
extern volatile uint32_t        ETHCON1SET __attribute__((section("sfrs"),address(0xBF889008)));
extern volatile uint32_t        ETHCON1INV __attribute__((section("sfrs"),address(0xBF88900C)));
#define ETHCON2 ETHCON2
extern volatile uint32_t   ETHCON2 __attribute__((section("sfrs"), address(0xBF889010)));
typedef union {
  struct {
    uint32_t :4;
    uint32_t RXBUF_SZ:7;
  };
  struct {
    uint32_t w:32;
  };
} __ETHCON2bits_t;
extern volatile __ETHCON2bits_t ETHCON2bits __asm__ ("ETHCON2") __attribute__((section("sfrs"), address(0xBF889010)));
extern volatile uint32_t        ETHCON2CLR __attribute__((section("sfrs"),address(0xBF889014)));
extern volatile uint32_t        ETHCON2SET __attribute__((section("sfrs"),address(0xBF889018)));
extern volatile uint32_t        ETHCON2INV __attribute__((section("sfrs"),address(0xBF88901C)));
#define ETHTXST ETHTXST
extern volatile uint32_t   ETHTXST __attribute__((section("sfrs"), address(0xBF889020)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t TXSTADDR:30;
  };
  struct {
    uint32_t w:32;
  };
} __ETHTXSTbits_t;
extern volatile __ETHTXSTbits_t ETHTXSTbits __asm__ ("ETHTXST") __attribute__((section("sfrs"), address(0xBF889020)));
extern volatile uint32_t        ETHTXSTCLR __attribute__((section("sfrs"),address(0xBF889024)));
extern volatile uint32_t        ETHTXSTSET __attribute__((section("sfrs"),address(0xBF889028)));
extern volatile uint32_t        ETHTXSTINV __attribute__((section("sfrs"),address(0xBF88902C)));
#define ETHRXST ETHRXST
extern volatile uint32_t   ETHRXST __attribute__((section("sfrs"), address(0xBF889030)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t RXSTADDR:30;
  };
  struct {
    uint32_t w:32;
  };
} __ETHRXSTbits_t;
extern volatile __ETHRXSTbits_t ETHRXSTbits __asm__ ("ETHRXST") __attribute__((section("sfrs"), address(0xBF889030)));
extern volatile uint32_t        ETHRXSTCLR __attribute__((section("sfrs"),address(0xBF889034)));
extern volatile uint32_t        ETHRXSTSET __attribute__((section("sfrs"),address(0xBF889038)));
extern volatile uint32_t        ETHRXSTINV __attribute__((section("sfrs"),address(0xBF88903C)));
#define ETHHT0 ETHHT0
extern volatile uint32_t   ETHHT0 __attribute__((section("sfrs"), address(0xBF889040)));
typedef union {
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t HTLOWER:32;
  };
} __ETHHT0bits_t;
extern volatile __ETHHT0bits_t ETHHT0bits __asm__ ("ETHHT0") __attribute__((section("sfrs"), address(0xBF889040)));
extern volatile uint32_t        ETHHT0CLR __attribute__((section("sfrs"),address(0xBF889044)));
extern volatile uint32_t        ETHHT0SET __attribute__((section("sfrs"),address(0xBF889048)));
extern volatile uint32_t        ETHHT0INV __attribute__((section("sfrs"),address(0xBF88904C)));
#define ETHHT1 ETHHT1
extern volatile uint32_t   ETHHT1 __attribute__((section("sfrs"), address(0xBF889050)));
typedef union {
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t HTUPPER:32;
  };
} __ETHHT1bits_t;
extern volatile __ETHHT1bits_t ETHHT1bits __asm__ ("ETHHT1") __attribute__((section("sfrs"), address(0xBF889050)));
extern volatile uint32_t        ETHHT1CLR __attribute__((section("sfrs"),address(0xBF889054)));
extern volatile uint32_t        ETHHT1SET __attribute__((section("sfrs"),address(0xBF889058)));
extern volatile uint32_t        ETHHT1INV __attribute__((section("sfrs"),address(0xBF88905C)));
#define ETHPMM0 ETHPMM0
extern volatile uint32_t   ETHPMM0 __attribute__((section("sfrs"), address(0xBF889060)));
typedef union {
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t PMMLOWER:32;
  };
} __ETHPMM0bits_t;
extern volatile __ETHPMM0bits_t ETHPMM0bits __asm__ ("ETHPMM0") __attribute__((section("sfrs"), address(0xBF889060)));
extern volatile uint32_t        ETHPMM0CLR __attribute__((section("sfrs"),address(0xBF889064)));
extern volatile uint32_t        ETHPMM0SET __attribute__((section("sfrs"),address(0xBF889068)));
extern volatile uint32_t        ETHPMM0INV __attribute__((section("sfrs"),address(0xBF88906C)));
#define ETHPMM1 ETHPMM1
extern volatile uint32_t   ETHPMM1 __attribute__((section("sfrs"), address(0xBF889070)));
typedef union {
  struct {
    uint32_t w:32;
  };
  struct {
    uint32_t PMMUPPER:32;
  };
} __ETHPMM1bits_t;
extern volatile __ETHPMM1bits_t ETHPMM1bits __asm__ ("ETHPMM1") __attribute__((section("sfrs"), address(0xBF889070)));
extern volatile uint32_t        ETHPMM1CLR __attribute__((section("sfrs"),address(0xBF889074)));
extern volatile uint32_t        ETHPMM1SET __attribute__((section("sfrs"),address(0xBF889078)));
extern volatile uint32_t        ETHPMM1INV __attribute__((section("sfrs"),address(0xBF88907C)));
#define ETHPMCS ETHPMCS
extern volatile uint32_t   ETHPMCS __attribute__((section("sfrs"), address(0xBF889080)));
typedef union {
  struct {
    uint32_t PMCS:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHPMCSbits_t;
extern volatile __ETHPMCSbits_t ETHPMCSbits __asm__ ("ETHPMCS") __attribute__((section("sfrs"), address(0xBF889080)));
extern volatile uint32_t        ETHPMCSCLR __attribute__((section("sfrs"),address(0xBF889084)));
extern volatile uint32_t        ETHPMCSSET __attribute__((section("sfrs"),address(0xBF889088)));
extern volatile uint32_t        ETHPMCSINV __attribute__((section("sfrs"),address(0xBF88908C)));
#define ETHPMO ETHPMO
extern volatile uint32_t   ETHPMO __attribute__((section("sfrs"), address(0xBF889090)));
typedef union {
  struct {
    uint32_t PMO:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHPMObits_t;
extern volatile __ETHPMObits_t ETHPMObits __asm__ ("ETHPMO") __attribute__((section("sfrs"), address(0xBF889090)));
extern volatile uint32_t        ETHPMOCLR __attribute__((section("sfrs"),address(0xBF889094)));
extern volatile uint32_t        ETHPMOSET __attribute__((section("sfrs"),address(0xBF889098)));
extern volatile uint32_t        ETHPMOINV __attribute__((section("sfrs"),address(0xBF88909C)));
#define ETHRXFC ETHRXFC
extern volatile uint32_t   ETHRXFC __attribute__((section("sfrs"), address(0xBF8890A0)));
typedef union {
  struct {
    uint32_t BCEN:1;
    uint32_t MCEN:1;
    uint32_t NOTMEEN:1;
    uint32_t UCEN:1;
    uint32_t RUNTEN:1;
    uint32_t RUNTERREN:1;
    uint32_t CRCOKEN:1;
    uint32_t CRCERREN:1;
    uint32_t PMMODE:4;
    uint32_t NOTPM:1;
    uint32_t :1;
    uint32_t MPEN:1;
    uint32_t HTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __ETHRXFCbits_t;
extern volatile __ETHRXFCbits_t ETHRXFCbits __asm__ ("ETHRXFC") __attribute__((section("sfrs"), address(0xBF8890A0)));
extern volatile uint32_t        ETHRXFCCLR __attribute__((section("sfrs"),address(0xBF8890A4)));
extern volatile uint32_t        ETHRXFCSET __attribute__((section("sfrs"),address(0xBF8890A8)));
extern volatile uint32_t        ETHRXFCINV __attribute__((section("sfrs"),address(0xBF8890AC)));
#define ETHRXWM ETHRXWM
extern volatile uint32_t   ETHRXWM __attribute__((section("sfrs"), address(0xBF8890B0)));
typedef union {
  struct {
    uint32_t RXEWM:8;
    uint32_t :8;
    uint32_t RXFWM:8;
  };
  struct {
    uint32_t w:32;
  };
} __ETHRXWMbits_t;
extern volatile __ETHRXWMbits_t ETHRXWMbits __asm__ ("ETHRXWM") __attribute__((section("sfrs"), address(0xBF8890B0)));
extern volatile uint32_t        ETHRXWMCLR __attribute__((section("sfrs"),address(0xBF8890B4)));
extern volatile uint32_t        ETHRXWMSET __attribute__((section("sfrs"),address(0xBF8890B8)));
extern volatile uint32_t        ETHRXWMINV __attribute__((section("sfrs"),address(0xBF8890BC)));
#define ETHIEN ETHIEN
extern volatile uint32_t   ETHIEN __attribute__((section("sfrs"), address(0xBF8890C0)));
typedef union {
  struct {
    uint32_t RXOVFLWIE:1;
    uint32_t RXBUFNAIE:1;
    uint32_t TXABORTIE:1;
    uint32_t TXDONEIE:1;
    uint32_t :1;
    uint32_t RXACTIE:1;
    uint32_t PKTPENDIE:1;
    uint32_t RXDONEIE:1;
    uint32_t FWMARKIE:1;
    uint32_t EWMARKIE:1;
    uint32_t :3;
    uint32_t RXBUSEIE:1;
    uint32_t TXBUSEIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __ETHIENbits_t;
extern volatile __ETHIENbits_t ETHIENbits __asm__ ("ETHIEN") __attribute__((section("sfrs"), address(0xBF8890C0)));
extern volatile uint32_t        ETHIENCLR __attribute__((section("sfrs"),address(0xBF8890C4)));
extern volatile uint32_t        ETHIENSET __attribute__((section("sfrs"),address(0xBF8890C8)));
extern volatile uint32_t        ETHIENINV __attribute__((section("sfrs"),address(0xBF8890CC)));
#define ETHIRQ ETHIRQ
extern volatile uint32_t   ETHIRQ __attribute__((section("sfrs"), address(0xBF8890D0)));
typedef union {
  struct {
    uint32_t RXOVFLW:1;
    uint32_t RXBUFNA:1;
    uint32_t TXABORT:1;
    uint32_t TXDONE:1;
    uint32_t :1;
    uint32_t RXACT:1;
    uint32_t PKTPEND:1;
    uint32_t RXDONE:1;
    uint32_t FWMARK:1;
    uint32_t EWMARK:1;
    uint32_t :3;
    uint32_t RXBUSE:1;
    uint32_t TXBUSE:1;
  };
  struct {
    uint32_t w:32;
  };
} __ETHIRQbits_t;
extern volatile __ETHIRQbits_t ETHIRQbits __asm__ ("ETHIRQ") __attribute__((section("sfrs"), address(0xBF8890D0)));
extern volatile uint32_t        ETHIRQCLR __attribute__((section("sfrs"),address(0xBF8890D4)));
extern volatile uint32_t        ETHIRQSET __attribute__((section("sfrs"),address(0xBF8890D8)));
extern volatile uint32_t        ETHIRQINV __attribute__((section("sfrs"),address(0xBF8890DC)));
#define ETHSTAT ETHSTAT
extern volatile uint32_t   ETHSTAT __attribute__((section("sfrs"), address(0xBF8890E0)));
typedef union {
  struct {
    uint32_t :5;
    uint32_t RXBUSY:1;
    uint32_t TXBUSY:1;
    uint32_t BUSY:1;
    uint32_t :8;
    uint32_t BUFCNT:8;
  };
  struct {
    uint32_t :7;
    uint32_t ETHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __ETHSTATbits_t;
extern volatile __ETHSTATbits_t ETHSTATbits __asm__ ("ETHSTAT") __attribute__((section("sfrs"), address(0xBF8890E0)));
extern volatile uint32_t        ETHSTATCLR __attribute__((section("sfrs"),address(0xBF8890E4)));
extern volatile uint32_t        ETHSTATSET __attribute__((section("sfrs"),address(0xBF8890E8)));
extern volatile uint32_t        ETHSTATINV __attribute__((section("sfrs"),address(0xBF8890EC)));
#define ETHRXOVFLOW ETHRXOVFLOW
extern volatile uint32_t   ETHRXOVFLOW __attribute__((section("sfrs"), address(0xBF889100)));
typedef union {
  struct {
    uint32_t RXOVFLWCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHRXOVFLOWbits_t;
extern volatile __ETHRXOVFLOWbits_t ETHRXOVFLOWbits __asm__ ("ETHRXOVFLOW") __attribute__((section("sfrs"), address(0xBF889100)));
extern volatile uint32_t        ETHRXOVFLOWCLR __attribute__((section("sfrs"),address(0xBF889104)));
extern volatile uint32_t        ETHRXOVFLOWSET __attribute__((section("sfrs"),address(0xBF889108)));
extern volatile uint32_t        ETHRXOVFLOWINV __attribute__((section("sfrs"),address(0xBF88910C)));
#define ETHFRMTXOK ETHFRMTXOK
extern volatile uint32_t   ETHFRMTXOK __attribute__((section("sfrs"), address(0xBF889110)));
typedef union {
  struct {
    uint32_t FRMTXOKCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHFRMTXOKbits_t;
extern volatile __ETHFRMTXOKbits_t ETHFRMTXOKbits __asm__ ("ETHFRMTXOK") __attribute__((section("sfrs"), address(0xBF889110)));
extern volatile uint32_t        ETHFRMTXOKCLR __attribute__((section("sfrs"),address(0xBF889114)));
extern volatile uint32_t        ETHFRMTXOKSET __attribute__((section("sfrs"),address(0xBF889118)));
extern volatile uint32_t        ETHFRMTXOKINV __attribute__((section("sfrs"),address(0xBF88911C)));
#define ETHSCOLFRM ETHSCOLFRM
extern volatile uint32_t   ETHSCOLFRM __attribute__((section("sfrs"), address(0xBF889120)));
typedef union {
  struct {
    uint32_t SCOLFRMCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHSCOLFRMbits_t;
extern volatile __ETHSCOLFRMbits_t ETHSCOLFRMbits __asm__ ("ETHSCOLFRM") __attribute__((section("sfrs"), address(0xBF889120)));
extern volatile uint32_t        ETHSCOLFRMCLR __attribute__((section("sfrs"),address(0xBF889124)));
extern volatile uint32_t        ETHSCOLFRMSET __attribute__((section("sfrs"),address(0xBF889128)));
extern volatile uint32_t        ETHSCOLFRMINV __attribute__((section("sfrs"),address(0xBF88912C)));
#define ETHMCOLFRM ETHMCOLFRM
extern volatile uint32_t   ETHMCOLFRM __attribute__((section("sfrs"), address(0xBF889130)));
typedef union {
  struct {
    uint32_t MCOLFRMCNT:16;
  };
  struct {
    uint32_t MCOLFRM_CNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHMCOLFRMbits_t;
extern volatile __ETHMCOLFRMbits_t ETHMCOLFRMbits __asm__ ("ETHMCOLFRM") __attribute__((section("sfrs"), address(0xBF889130)));
extern volatile uint32_t        ETHMCOLFRMCLR __attribute__((section("sfrs"),address(0xBF889134)));
extern volatile uint32_t        ETHMCOLFRMSET __attribute__((section("sfrs"),address(0xBF889138)));
extern volatile uint32_t        ETHMCOLFRMINV __attribute__((section("sfrs"),address(0xBF88913C)));
#define ETHFRMRXOK ETHFRMRXOK
extern volatile uint32_t   ETHFRMRXOK __attribute__((section("sfrs"), address(0xBF889140)));
typedef union {
  struct {
    uint32_t FRMRXOKCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHFRMRXOKbits_t;
extern volatile __ETHFRMRXOKbits_t ETHFRMRXOKbits __asm__ ("ETHFRMRXOK") __attribute__((section("sfrs"), address(0xBF889140)));
extern volatile uint32_t        ETHFRMRXOKCLR __attribute__((section("sfrs"),address(0xBF889144)));
extern volatile uint32_t        ETHFRMRXOKSET __attribute__((section("sfrs"),address(0xBF889148)));
extern volatile uint32_t        ETHFRMRXOKINV __attribute__((section("sfrs"),address(0xBF88914C)));
#define ETHFCSERR ETHFCSERR
extern volatile uint32_t   ETHFCSERR __attribute__((section("sfrs"), address(0xBF889150)));
typedef union {
  struct {
    uint32_t FCSERRCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHFCSERRbits_t;
extern volatile __ETHFCSERRbits_t ETHFCSERRbits __asm__ ("ETHFCSERR") __attribute__((section("sfrs"), address(0xBF889150)));
extern volatile uint32_t        ETHFCSERRCLR __attribute__((section("sfrs"),address(0xBF889154)));
extern volatile uint32_t        ETHFCSERRSET __attribute__((section("sfrs"),address(0xBF889158)));
extern volatile uint32_t        ETHFCSERRINV __attribute__((section("sfrs"),address(0xBF88915C)));
#define ETHALGNERR ETHALGNERR
extern volatile uint32_t   ETHALGNERR __attribute__((section("sfrs"), address(0xBF889160)));
typedef union {
  struct {
    uint32_t ALGNERRCNT:16;
  };
  struct {
    uint32_t w:32;
  };
} __ETHALGNERRbits_t;
extern volatile __ETHALGNERRbits_t ETHALGNERRbits __asm__ ("ETHALGNERR") __attribute__((section("sfrs"), address(0xBF889160)));
extern volatile uint32_t        ETHALGNERRCLR __attribute__((section("sfrs"),address(0xBF889164)));
extern volatile uint32_t        ETHALGNERRSET __attribute__((section("sfrs"),address(0xBF889168)));
extern volatile uint32_t        ETHALGNERRINV __attribute__((section("sfrs"),address(0xBF88916C)));
#define EMAC1CFG1 EMAC1CFG1
extern volatile uint32_t   EMAC1CFG1 __attribute__((section("sfrs"), address(0xBF889200)));
typedef union {
  struct {
    uint32_t RXENABLE:1;
    uint32_t PASSALL:1;
    uint32_t RXPAUSE:1;
    uint32_t TXPAUSE:1;
    uint32_t LOOPBACK:1;
    uint32_t :3;
    uint32_t RESETTFUN:1;
    uint32_t RESETTMCS:1;
    uint32_t RESETRFUN:1;
    uint32_t RESETRMCS:1;
    uint32_t :2;
    uint32_t SIMRESET:1;
    uint32_t SOFTRESET:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1CFG1bits_t;
extern volatile __EMAC1CFG1bits_t EMAC1CFG1bits __asm__ ("EMAC1CFG1") __attribute__((section("sfrs"), address(0xBF889200)));
#define EMACxCFG1 EMACxCFG1
extern volatile uint32_t   EMACxCFG1 __attribute__((section("sfrs"), address(0xBF889200)));
typedef union {
  struct {
    uint32_t RXENABLE:1;
    uint32_t PASSALL:1;
    uint32_t RXPAUSE:1;
    uint32_t TXPAUSE:1;
    uint32_t LOOPBACK:1;
    uint32_t :3;
    uint32_t RESETTFUN:1;
    uint32_t RESETTMCS:1;
    uint32_t RESETRFUN:1;
    uint32_t RESETRMCS:1;
    uint32_t :2;
    uint32_t SIMRESET:1;
    uint32_t SOFTRESET:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxCFG1bits_t;
extern volatile __EMACxCFG1bits_t EMACxCFG1bits __asm__ ("EMACxCFG1") __attribute__((section("sfrs"), address(0xBF889200)));
extern volatile uint32_t        EMAC1CFG1CLR __attribute__((section("sfrs"),address(0xBF889204)));
extern volatile uint32_t        EMACxCFG1CLR __attribute__((section("sfrs"),address(0xBF889204)));
extern volatile uint32_t        EMAC1CFG1SET __attribute__((section("sfrs"),address(0xBF889208)));
extern volatile uint32_t        EMACxCFG1SET __attribute__((section("sfrs"),address(0xBF889208)));
extern volatile uint32_t        EMAC1CFG1INV __attribute__((section("sfrs"),address(0xBF88920C)));
extern volatile uint32_t        EMACxCFG1INV __attribute__((section("sfrs"),address(0xBF88920C)));
#define EMAC1CFG2 EMAC1CFG2
extern volatile uint32_t   EMAC1CFG2 __attribute__((section("sfrs"), address(0xBF889210)));
typedef union {
  struct {
    uint32_t FULLDPLX:1;
    uint32_t LENGTHCK:1;
    uint32_t HUGEFRM:1;
    uint32_t DELAYCRC:1;
    uint32_t CRCENABLE:1;
    uint32_t PADENABLE:1;
    uint32_t VLANPAD:1;
    uint32_t AUTOPAD:1;
    uint32_t PUREPRE:1;
    uint32_t LONGPRE:1;
    uint32_t :2;
    uint32_t NOBKOFF:1;
    uint32_t BPNOBKOFF:1;
    uint32_t EXCESSDFR:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1CFG2bits_t;
extern volatile __EMAC1CFG2bits_t EMAC1CFG2bits __asm__ ("EMAC1CFG2") __attribute__((section("sfrs"), address(0xBF889210)));
#define EMACxCFG2 EMACxCFG2
extern volatile uint32_t   EMACxCFG2 __attribute__((section("sfrs"), address(0xBF889210)));
typedef union {
  struct {
    uint32_t FULLDPLX:1;
    uint32_t LENGTHCK:1;
    uint32_t HUGEFRM:1;
    uint32_t DELAYCRC:1;
    uint32_t CRCENABLE:1;
    uint32_t PADENABLE:1;
    uint32_t VLANPAD:1;
    uint32_t AUTOPAD:1;
    uint32_t PUREPRE:1;
    uint32_t LONGPRE:1;
    uint32_t :2;
    uint32_t NOBKOFF:1;
    uint32_t BPNOBKOFF:1;
    uint32_t EXCESSDFR:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxCFG2bits_t;
extern volatile __EMACxCFG2bits_t EMACxCFG2bits __asm__ ("EMACxCFG2") __attribute__((section("sfrs"), address(0xBF889210)));
extern volatile uint32_t        EMAC1CFG2CLR __attribute__((section("sfrs"),address(0xBF889214)));
extern volatile uint32_t        EMACxCFG2CLR __attribute__((section("sfrs"),address(0xBF889214)));
extern volatile uint32_t        EMAC1CFG2SET __attribute__((section("sfrs"),address(0xBF889218)));
extern volatile uint32_t        EMACxCFG2SET __attribute__((section("sfrs"),address(0xBF889218)));
extern volatile uint32_t        EMAC1CFG2INV __attribute__((section("sfrs"),address(0xBF88921C)));
extern volatile uint32_t        EMACxCFG2INV __attribute__((section("sfrs"),address(0xBF88921C)));
#define EMAC1IPGT EMAC1IPGT
extern volatile uint32_t   EMAC1IPGT __attribute__((section("sfrs"), address(0xBF889220)));
typedef union {
  struct {
    uint32_t B2BIPKTGP:7;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1IPGTbits_t;
extern volatile __EMAC1IPGTbits_t EMAC1IPGTbits __asm__ ("EMAC1IPGT") __attribute__((section("sfrs"), address(0xBF889220)));
#define EMACxIPGT EMACxIPGT
extern volatile uint32_t   EMACxIPGT __attribute__((section("sfrs"), address(0xBF889220)));
typedef union {
  struct {
    uint32_t B2BIPKTGP:7;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxIPGTbits_t;
extern volatile __EMACxIPGTbits_t EMACxIPGTbits __asm__ ("EMACxIPGT") __attribute__((section("sfrs"), address(0xBF889220)));
extern volatile uint32_t        EMAC1IPGTCLR __attribute__((section("sfrs"),address(0xBF889224)));
extern volatile uint32_t        EMACxIPGTCLR __attribute__((section("sfrs"),address(0xBF889224)));
extern volatile uint32_t        EMAC1IPGTSET __attribute__((section("sfrs"),address(0xBF889228)));
extern volatile uint32_t        EMACxIPGTSET __attribute__((section("sfrs"),address(0xBF889228)));
extern volatile uint32_t        EMAC1IPGTINV __attribute__((section("sfrs"),address(0xBF88922C)));
extern volatile uint32_t        EMACxIPGTINV __attribute__((section("sfrs"),address(0xBF88922C)));
#define EMAC1IPGR EMAC1IPGR
extern volatile uint32_t   EMAC1IPGR __attribute__((section("sfrs"), address(0xBF889230)));
typedef union {
  struct {
    uint32_t NB2BIPKTGP2:7;
    uint32_t :1;
    uint32_t NB2BIPKTGP1:7;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1IPGRbits_t;
extern volatile __EMAC1IPGRbits_t EMAC1IPGRbits __asm__ ("EMAC1IPGR") __attribute__((section("sfrs"), address(0xBF889230)));
#define EMACxIPGR EMACxIPGR
extern volatile uint32_t   EMACxIPGR __attribute__((section("sfrs"), address(0xBF889230)));
typedef union {
  struct {
    uint32_t NB2BIPKTGP2:7;
    uint32_t :1;
    uint32_t NB2BIPKTGP1:7;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxIPGRbits_t;
extern volatile __EMACxIPGRbits_t EMACxIPGRbits __asm__ ("EMACxIPGR") __attribute__((section("sfrs"), address(0xBF889230)));
extern volatile uint32_t        EMAC1IPGRCLR __attribute__((section("sfrs"),address(0xBF889234)));
extern volatile uint32_t        EMACxIPGRCLR __attribute__((section("sfrs"),address(0xBF889234)));
extern volatile uint32_t        EMAC1IPGRSET __attribute__((section("sfrs"),address(0xBF889238)));
extern volatile uint32_t        EMACxIPGRSET __attribute__((section("sfrs"),address(0xBF889238)));
extern volatile uint32_t        EMAC1IPGRINV __attribute__((section("sfrs"),address(0xBF88923C)));
extern volatile uint32_t        EMACxIPGRINV __attribute__((section("sfrs"),address(0xBF88923C)));
#define EMAC1CLRT EMAC1CLRT
extern volatile uint32_t   EMAC1CLRT __attribute__((section("sfrs"), address(0xBF889240)));
typedef union {
  struct {
    uint32_t RETX:4;
    uint32_t :4;
    uint32_t CWINDOW:6;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1CLRTbits_t;
extern volatile __EMAC1CLRTbits_t EMAC1CLRTbits __asm__ ("EMAC1CLRT") __attribute__((section("sfrs"), address(0xBF889240)));
#define EMACxCLRT EMACxCLRT
extern volatile uint32_t   EMACxCLRT __attribute__((section("sfrs"), address(0xBF889240)));
typedef union {
  struct {
    uint32_t RETX:4;
    uint32_t :4;
    uint32_t CWINDOW:6;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxCLRTbits_t;
extern volatile __EMACxCLRTbits_t EMACxCLRTbits __asm__ ("EMACxCLRT") __attribute__((section("sfrs"), address(0xBF889240)));
extern volatile uint32_t        EMAC1CLRTCLR __attribute__((section("sfrs"),address(0xBF889244)));
extern volatile uint32_t        EMACxCLRTCLR __attribute__((section("sfrs"),address(0xBF889244)));
extern volatile uint32_t        EMAC1CLRTSET __attribute__((section("sfrs"),address(0xBF889248)));
extern volatile uint32_t        EMACxCLRTSET __attribute__((section("sfrs"),address(0xBF889248)));
extern volatile uint32_t        EMAC1CLRTINV __attribute__((section("sfrs"),address(0xBF88924C)));
extern volatile uint32_t        EMACxCLRTINV __attribute__((section("sfrs"),address(0xBF88924C)));
#define EMAC1MAXF EMAC1MAXF
extern volatile uint32_t   EMAC1MAXF __attribute__((section("sfrs"), address(0xBF889250)));
typedef union {
  struct {
    uint32_t MACMAXF:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MAXFbits_t;
extern volatile __EMAC1MAXFbits_t EMAC1MAXFbits __asm__ ("EMAC1MAXF") __attribute__((section("sfrs"), address(0xBF889250)));
#define EMACxMAXF EMACxMAXF
extern volatile uint32_t   EMACxMAXF __attribute__((section("sfrs"), address(0xBF889250)));
typedef union {
  struct {
    uint32_t MACMAXF:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMAXFbits_t;
extern volatile __EMACxMAXFbits_t EMACxMAXFbits __asm__ ("EMACxMAXF") __attribute__((section("sfrs"), address(0xBF889250)));
extern volatile uint32_t        EMAC1MAXFCLR __attribute__((section("sfrs"),address(0xBF889254)));
extern volatile uint32_t        EMACxMAXFCLR __attribute__((section("sfrs"),address(0xBF889254)));
extern volatile uint32_t        EMAC1MAXFSET __attribute__((section("sfrs"),address(0xBF889258)));
extern volatile uint32_t        EMACxMAXFSET __attribute__((section("sfrs"),address(0xBF889258)));
extern volatile uint32_t        EMAC1MAXFINV __attribute__((section("sfrs"),address(0xBF88925C)));
extern volatile uint32_t        EMACxMAXFINV __attribute__((section("sfrs"),address(0xBF88925C)));
#define EMAC1SUPP EMAC1SUPP
extern volatile uint32_t   EMAC1SUPP __attribute__((section("sfrs"), address(0xBF889260)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SPEEDRMII:1;
    uint32_t :2;
    uint32_t RESETRMII:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1SUPPbits_t;
extern volatile __EMAC1SUPPbits_t EMAC1SUPPbits __asm__ ("EMAC1SUPP") __attribute__((section("sfrs"), address(0xBF889260)));
#define EMACxSUPP EMACxSUPP
extern volatile uint32_t   EMACxSUPP __attribute__((section("sfrs"), address(0xBF889260)));
typedef union {
  struct {
    uint32_t :8;
    uint32_t SPEEDRMII:1;
    uint32_t :2;
    uint32_t RESETRMII:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxSUPPbits_t;
extern volatile __EMACxSUPPbits_t EMACxSUPPbits __asm__ ("EMACxSUPP") __attribute__((section("sfrs"), address(0xBF889260)));
extern volatile uint32_t        EMAC1SUPPCLR __attribute__((section("sfrs"),address(0xBF889264)));
extern volatile uint32_t        EMACxSUPPCLR __attribute__((section("sfrs"),address(0xBF889264)));
extern volatile uint32_t        EMAC1SUPPSET __attribute__((section("sfrs"),address(0xBF889268)));
extern volatile uint32_t        EMACxSUPPSET __attribute__((section("sfrs"),address(0xBF889268)));
extern volatile uint32_t        EMAC1SUPPINV __attribute__((section("sfrs"),address(0xBF88926C)));
extern volatile uint32_t        EMACxSUPPINV __attribute__((section("sfrs"),address(0xBF88926C)));
#define EMAC1TEST EMAC1TEST
extern volatile uint32_t   EMAC1TEST __attribute__((section("sfrs"), address(0xBF889270)));
typedef union {
  struct {
    uint32_t SHRTQNTA:1;
    uint32_t TESTPAUSE:1;
    uint32_t TESTBP:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1TESTbits_t;
extern volatile __EMAC1TESTbits_t EMAC1TESTbits __asm__ ("EMAC1TEST") __attribute__((section("sfrs"), address(0xBF889270)));
#define EMACxTEST EMACxTEST
extern volatile uint32_t   EMACxTEST __attribute__((section("sfrs"), address(0xBF889270)));
typedef union {
  struct {
    uint32_t SHRTQNTA:1;
    uint32_t TESTPAUSE:1;
    uint32_t TESTBP:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxTESTbits_t;
extern volatile __EMACxTESTbits_t EMACxTESTbits __asm__ ("EMACxTEST") __attribute__((section("sfrs"), address(0xBF889270)));
extern volatile uint32_t        EMAC1TESTCLR __attribute__((section("sfrs"),address(0xBF889274)));
extern volatile uint32_t        EMACxTESTCLR __attribute__((section("sfrs"),address(0xBF889274)));
extern volatile uint32_t        EMAC1TESTSET __attribute__((section("sfrs"),address(0xBF889278)));
extern volatile uint32_t        EMACxTESTSET __attribute__((section("sfrs"),address(0xBF889278)));
extern volatile uint32_t        EMAC1TESTINV __attribute__((section("sfrs"),address(0xBF88927C)));
extern volatile uint32_t        EMACxTESTINV __attribute__((section("sfrs"),address(0xBF88927C)));
#define EMAC1MCFG EMAC1MCFG
extern volatile uint32_t   EMAC1MCFG __attribute__((section("sfrs"), address(0xBF889280)));
typedef union {
  struct {
    uint32_t SCANINC:1;
    uint32_t NOPRE:1;
    uint32_t CLKSEL:4;
    uint32_t :9;
    uint32_t RESETMGMT:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MCFGbits_t;
extern volatile __EMAC1MCFGbits_t EMAC1MCFGbits __asm__ ("EMAC1MCFG") __attribute__((section("sfrs"), address(0xBF889280)));
#define EMACxMCFG EMACxMCFG
extern volatile uint32_t   EMACxMCFG __attribute__((section("sfrs"), address(0xBF889280)));
typedef union {
  struct {
    uint32_t SCANINC:1;
    uint32_t NOPRE:1;
    uint32_t CLKSEL:4;
    uint32_t :9;
    uint32_t RESETMGMT:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMCFGbits_t;
extern volatile __EMACxMCFGbits_t EMACxMCFGbits __asm__ ("EMACxMCFG") __attribute__((section("sfrs"), address(0xBF889280)));
extern volatile uint32_t        EMAC1MCFGCLR __attribute__((section("sfrs"),address(0xBF889284)));
extern volatile uint32_t        EMACxMCFGCLR __attribute__((section("sfrs"),address(0xBF889284)));
extern volatile uint32_t        EMAC1MCFGSET __attribute__((section("sfrs"),address(0xBF889288)));
extern volatile uint32_t        EMACxMCFGSET __attribute__((section("sfrs"),address(0xBF889288)));
extern volatile uint32_t        EMAC1MCFGINV __attribute__((section("sfrs"),address(0xBF88928C)));
extern volatile uint32_t        EMACxMCFGINV __attribute__((section("sfrs"),address(0xBF88928C)));
#define EMAC1MCMD EMAC1MCMD
extern volatile uint32_t   EMAC1MCMD __attribute__((section("sfrs"), address(0xBF889290)));
typedef union {
  struct {
    uint32_t READ:1;
    uint32_t SCAN:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MCMDbits_t;
extern volatile __EMAC1MCMDbits_t EMAC1MCMDbits __asm__ ("EMAC1MCMD") __attribute__((section("sfrs"), address(0xBF889290)));
#define EMACxMCMD EMACxMCMD
extern volatile uint32_t   EMACxMCMD __attribute__((section("sfrs"), address(0xBF889290)));
typedef union {
  struct {
    uint32_t READ:1;
    uint32_t SCAN:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMCMDbits_t;
extern volatile __EMACxMCMDbits_t EMACxMCMDbits __asm__ ("EMACxMCMD") __attribute__((section("sfrs"), address(0xBF889290)));
extern volatile uint32_t        EMAC1MCMDCLR __attribute__((section("sfrs"),address(0xBF889294)));
extern volatile uint32_t        EMACxMCMDCLR __attribute__((section("sfrs"),address(0xBF889294)));
extern volatile uint32_t        EMAC1MCMDSET __attribute__((section("sfrs"),address(0xBF889298)));
extern volatile uint32_t        EMACxMCMDSET __attribute__((section("sfrs"),address(0xBF889298)));
extern volatile uint32_t        EMAC1MCMDINV __attribute__((section("sfrs"),address(0xBF88929C)));
extern volatile uint32_t        EMACxMCMDINV __attribute__((section("sfrs"),address(0xBF88929C)));
#define EMAC1MADR EMAC1MADR
extern volatile uint32_t   EMAC1MADR __attribute__((section("sfrs"), address(0xBF8892A0)));
typedef union {
  struct {
    uint32_t REGADDR:5;
    uint32_t :3;
    uint32_t PHYADDR:5;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MADRbits_t;
extern volatile __EMAC1MADRbits_t EMAC1MADRbits __asm__ ("EMAC1MADR") __attribute__((section("sfrs"), address(0xBF8892A0)));
#define EMACxMADR EMACxMADR
extern volatile uint32_t   EMACxMADR __attribute__((section("sfrs"), address(0xBF8892A0)));
typedef union {
  struct {
    uint32_t REGADDR:5;
    uint32_t :3;
    uint32_t PHYADDR:5;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMADRbits_t;
extern volatile __EMACxMADRbits_t EMACxMADRbits __asm__ ("EMACxMADR") __attribute__((section("sfrs"), address(0xBF8892A0)));
extern volatile uint32_t        EMAC1MADRCLR __attribute__((section("sfrs"),address(0xBF8892A4)));
extern volatile uint32_t        EMACxMADRCLR __attribute__((section("sfrs"),address(0xBF8892A4)));
extern volatile uint32_t        EMAC1MADRSET __attribute__((section("sfrs"),address(0xBF8892A8)));
extern volatile uint32_t        EMACxMADRSET __attribute__((section("sfrs"),address(0xBF8892A8)));
extern volatile uint32_t        EMAC1MADRINV __attribute__((section("sfrs"),address(0xBF8892AC)));
extern volatile uint32_t        EMACxMADRINV __attribute__((section("sfrs"),address(0xBF8892AC)));
#define EMAC1MWTD EMAC1MWTD
extern volatile uint32_t   EMAC1MWTD __attribute__((section("sfrs"), address(0xBF8892B0)));
typedef union {
  struct {
    uint32_t MWTD:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MWTDbits_t;
extern volatile __EMAC1MWTDbits_t EMAC1MWTDbits __asm__ ("EMAC1MWTD") __attribute__((section("sfrs"), address(0xBF8892B0)));
#define EMACxMWTD EMACxMWTD
extern volatile uint32_t   EMACxMWTD __attribute__((section("sfrs"), address(0xBF8892B0)));
typedef union {
  struct {
    uint32_t MWTD:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMWTDbits_t;
extern volatile __EMACxMWTDbits_t EMACxMWTDbits __asm__ ("EMACxMWTD") __attribute__((section("sfrs"), address(0xBF8892B0)));
extern volatile uint32_t        EMAC1MWTDCLR __attribute__((section("sfrs"),address(0xBF8892B4)));
extern volatile uint32_t        EMACxMWTDCLR __attribute__((section("sfrs"),address(0xBF8892B4)));
extern volatile uint32_t        EMAC1MWTDSET __attribute__((section("sfrs"),address(0xBF8892B8)));
extern volatile uint32_t        EMACxMWTDSET __attribute__((section("sfrs"),address(0xBF8892B8)));
extern volatile uint32_t        EMAC1MWTDINV __attribute__((section("sfrs"),address(0xBF8892BC)));
extern volatile uint32_t        EMACxMWTDINV __attribute__((section("sfrs"),address(0xBF8892BC)));
#define EMAC1MRDD EMAC1MRDD
extern volatile uint32_t   EMAC1MRDD __attribute__((section("sfrs"), address(0xBF8892C0)));
typedef union {
  struct {
    uint32_t MRDD:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MRDDbits_t;
extern volatile __EMAC1MRDDbits_t EMAC1MRDDbits __asm__ ("EMAC1MRDD") __attribute__((section("sfrs"), address(0xBF8892C0)));
#define EMACxMRDD EMACxMRDD
extern volatile uint32_t   EMACxMRDD __attribute__((section("sfrs"), address(0xBF8892C0)));
typedef union {
  struct {
    uint32_t MRDD:16;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMRDDbits_t;
extern volatile __EMACxMRDDbits_t EMACxMRDDbits __asm__ ("EMACxMRDD") __attribute__((section("sfrs"), address(0xBF8892C0)));
extern volatile uint32_t        EMAC1MRDDCLR __attribute__((section("sfrs"),address(0xBF8892C4)));
extern volatile uint32_t        EMACxMRDDCLR __attribute__((section("sfrs"),address(0xBF8892C4)));
extern volatile uint32_t        EMAC1MRDDSET __attribute__((section("sfrs"),address(0xBF8892C8)));
extern volatile uint32_t        EMACxMRDDSET __attribute__((section("sfrs"),address(0xBF8892C8)));
extern volatile uint32_t        EMAC1MRDDINV __attribute__((section("sfrs"),address(0xBF8892CC)));
extern volatile uint32_t        EMACxMRDDINV __attribute__((section("sfrs"),address(0xBF8892CC)));
#define EMAC1MIND EMAC1MIND
extern volatile uint32_t   EMAC1MIND __attribute__((section("sfrs"), address(0xBF8892D0)));
typedef union {
  struct {
    uint32_t MIIMBUSY:1;
    uint32_t SCAN:1;
    uint32_t NOTVALID:1;
    uint32_t LINKFAIL:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1MINDbits_t;
extern volatile __EMAC1MINDbits_t EMAC1MINDbits __asm__ ("EMAC1MIND") __attribute__((section("sfrs"), address(0xBF8892D0)));
#define EMACxMIND EMACxMIND
extern volatile uint32_t   EMACxMIND __attribute__((section("sfrs"), address(0xBF8892D0)));
typedef union {
  struct {
    uint32_t MIIMBUSY:1;
    uint32_t SCAN:1;
    uint32_t NOTVALID:1;
    uint32_t LINKFAIL:1;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxMINDbits_t;
extern volatile __EMACxMINDbits_t EMACxMINDbits __asm__ ("EMACxMIND") __attribute__((section("sfrs"), address(0xBF8892D0)));
extern volatile uint32_t        EMAC1MINDCLR __attribute__((section("sfrs"),address(0xBF8892D4)));
extern volatile uint32_t        EMACxMINDCLR __attribute__((section("sfrs"),address(0xBF8892D4)));
extern volatile uint32_t        EMAC1MINDSET __attribute__((section("sfrs"),address(0xBF8892D8)));
extern volatile uint32_t        EMACxMINDSET __attribute__((section("sfrs"),address(0xBF8892D8)));
extern volatile uint32_t        EMAC1MINDINV __attribute__((section("sfrs"),address(0xBF8892DC)));
extern volatile uint32_t        EMACxMINDINV __attribute__((section("sfrs"),address(0xBF8892DC)));
#define EMAC1SA0 EMAC1SA0
extern volatile uint32_t   EMAC1SA0 __attribute__((section("sfrs"), address(0xBF889300)));
typedef union {
  struct {
    uint32_t STNADDR5:8;
    uint32_t STNADDR6:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1SA0bits_t;
extern volatile __EMAC1SA0bits_t EMAC1SA0bits __asm__ ("EMAC1SA0") __attribute__((section("sfrs"), address(0xBF889300)));
#define EMACxSA0 EMACxSA0
extern volatile uint32_t   EMACxSA0 __attribute__((section("sfrs"), address(0xBF889300)));
typedef union {
  struct {
    uint32_t STNADDR5:8;
    uint32_t STNADDR6:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxSA0bits_t;
extern volatile __EMACxSA0bits_t EMACxSA0bits __asm__ ("EMACxSA0") __attribute__((section("sfrs"), address(0xBF889300)));
extern volatile uint32_t        EMAC1SA0CLR __attribute__((section("sfrs"),address(0xBF889304)));
extern volatile uint32_t        EMACxSA0CLR __attribute__((section("sfrs"),address(0xBF889304)));
extern volatile uint32_t        EMAC1SA0SET __attribute__((section("sfrs"),address(0xBF889308)));
extern volatile uint32_t        EMACxSA0SET __attribute__((section("sfrs"),address(0xBF889308)));
extern volatile uint32_t        EMAC1SA0INV __attribute__((section("sfrs"),address(0xBF88930C)));
extern volatile uint32_t        EMACxSA0INV __attribute__((section("sfrs"),address(0xBF88930C)));
#define EMAC1SA1 EMAC1SA1
extern volatile uint32_t   EMAC1SA1 __attribute__((section("sfrs"), address(0xBF889310)));
typedef union {
  struct {
    uint32_t STNADDR3:8;
    uint32_t STNADDR4:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1SA1bits_t;
extern volatile __EMAC1SA1bits_t EMAC1SA1bits __asm__ ("EMAC1SA1") __attribute__((section("sfrs"), address(0xBF889310)));
#define EMACxSA1 EMACxSA1
extern volatile uint32_t   EMACxSA1 __attribute__((section("sfrs"), address(0xBF889310)));
typedef union {
  struct {
    uint32_t STNADDR3:8;
    uint32_t STNADDR4:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxSA1bits_t;
extern volatile __EMACxSA1bits_t EMACxSA1bits __asm__ ("EMACxSA1") __attribute__((section("sfrs"), address(0xBF889310)));
extern volatile uint32_t        EMAC1SA1CLR __attribute__((section("sfrs"),address(0xBF889314)));
extern volatile uint32_t        EMACxSA1CLR __attribute__((section("sfrs"),address(0xBF889314)));
extern volatile uint32_t        EMAC1SA1SET __attribute__((section("sfrs"),address(0xBF889318)));
extern volatile uint32_t        EMACxSA1SET __attribute__((section("sfrs"),address(0xBF889318)));
extern volatile uint32_t        EMAC1SA1INV __attribute__((section("sfrs"),address(0xBF88931C)));
extern volatile uint32_t        EMACxSA1INV __attribute__((section("sfrs"),address(0xBF88931C)));
#define EMAC1SA2 EMAC1SA2
extern volatile uint32_t   EMAC1SA2 __attribute__((section("sfrs"), address(0xBF889320)));
typedef union {
  struct {
    uint32_t STNADDR1:8;
    uint32_t STNADDR2:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMAC1SA2bits_t;
extern volatile __EMAC1SA2bits_t EMAC1SA2bits __asm__ ("EMAC1SA2") __attribute__((section("sfrs"), address(0xBF889320)));
#define EMACxSA2 EMACxSA2
extern volatile uint32_t   EMACxSA2 __attribute__((section("sfrs"), address(0xBF889320)));
typedef union {
  struct {
    uint32_t STNADDR1:8;
    uint32_t STNADDR2:8;
  };
  struct {
    uint32_t w:32;
  };
} __EMACxSA2bits_t;
extern volatile __EMACxSA2bits_t EMACxSA2bits __asm__ ("EMACxSA2") __attribute__((section("sfrs"), address(0xBF889320)));
extern volatile uint32_t        EMAC1SA2CLR __attribute__((section("sfrs"),address(0xBF889324)));
extern volatile uint32_t        EMACxSA2CLR __attribute__((section("sfrs"),address(0xBF889324)));
extern volatile uint32_t        EMAC1SA2SET __attribute__((section("sfrs"),address(0xBF889328)));
extern volatile uint32_t        EMACxSA2SET __attribute__((section("sfrs"),address(0xBF889328)));
extern volatile uint32_t        EMAC1SA2INV __attribute__((section("sfrs"),address(0xBF88932C)));
extern volatile uint32_t        EMACxSA2INV __attribute__((section("sfrs"),address(0xBF88932C)));
#define DEVCFG3 DEVCFG3
extern volatile uint32_t   DEVCFG3 __attribute__((section("sfrs"), address(0xBFC02FF0)));
typedef union {
  struct {
    uint32_t USERID:16;
    uint32_t FSRSSEL:3;
    uint32_t :5;
    uint32_t FMIIEN:1;
    uint32_t FETHIO:1;
    uint32_t :4;
    uint32_t FUSBIDIO:1;
    uint32_t FVBUSONIO:1;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG3bits_t;
extern volatile __DEVCFG3bits_t DEVCFG3bits __asm__ ("DEVCFG3") __attribute__((section("sfrs"), address(0xBFC02FF0)));
#define DEVCFG2 DEVCFG2
extern volatile uint32_t   DEVCFG2 __attribute__((section("sfrs"), address(0xBFC02FF4)));
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
extern volatile __DEVCFG2bits_t DEVCFG2bits __asm__ ("DEVCFG2") __attribute__((section("sfrs"), address(0xBFC02FF4)));
#define DEVCFG1 DEVCFG1
extern volatile uint32_t   DEVCFG1 __attribute__((section("sfrs"), address(0xBFC02FF8)));
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
    uint32_t :2;
    uint32_t FWDTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __DEVCFG1bits_t;
extern volatile __DEVCFG1bits_t DEVCFG1bits __asm__ ("DEVCFG1") __attribute__((section("sfrs"), address(0xBFC02FF8)));
#define DEVCFG0 DEVCFG0
extern volatile uint32_t   DEVCFG0 __attribute__((section("sfrs"), address(0xBFC02FFC)));
typedef union {
  struct {
    uint32_t DEBUG:2;
    uint32_t :1;
    uint32_t ICESEL:1;
    uint32_t :8;
    uint32_t PWP:8;
    uint32_t :4;
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
extern volatile __DEVCFG0bits_t DEVCFG0bits __asm__ ("DEVCFG0") __attribute__((section("sfrs"), address(0xBFC02FFC)));
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
  .extern I2C3CON          /* 0xBF805000 */
  .extern I2C1ACON         /* 0xBF805000 */
  .extern I2C3CONCLR       /* 0xBF805004 */
  .extern I2C1ACONCLR      /* 0xBF805004 */
  .extern I2C3CONSET       /* 0xBF805008 */
  .extern I2C1ACONSET      /* 0xBF805008 */
  .extern I2C3CONINV       /* 0xBF80500C */
  .extern I2C1ACONINV      /* 0xBF80500C */
  .extern I2C3STAT         /* 0xBF805010 */
  .extern I2C1ASTAT        /* 0xBF805010 */
  .extern I2C3STATCLR      /* 0xBF805014 */
  .extern I2C1ASTATCLR     /* 0xBF805014 */
  .extern I2C3STATSET      /* 0xBF805018 */
  .extern I2C1ASTATSET     /* 0xBF805018 */
  .extern I2C3STATINV      /* 0xBF80501C */
  .extern I2C1ASTATINV     /* 0xBF80501C */
  .extern I2C3ADD          /* 0xBF805020 */
  .extern I2C1AADD         /* 0xBF805020 */
  .extern I2C3ADDCLR       /* 0xBF805024 */
  .extern I2C1AADDCLR      /* 0xBF805024 */
  .extern I2C3ADDSET       /* 0xBF805028 */
  .extern I2C1AADDSET      /* 0xBF805028 */
  .extern I2C3ADDINV       /* 0xBF80502C */
  .extern I2C1AADDINV      /* 0xBF80502C */
  .extern I2C3MSK          /* 0xBF805030 */
  .extern I2C1AMSK         /* 0xBF805030 */
  .extern I2C3MSKCLR       /* 0xBF805034 */
  .extern I2C1AMSKCLR      /* 0xBF805034 */
  .extern I2C3MSKSET       /* 0xBF805038 */
  .extern I2C1AMSKSET      /* 0xBF805038 */
  .extern I2C3MSKINV       /* 0xBF80503C */
  .extern I2C1AMSKINV      /* 0xBF80503C */
  .extern I2C3BRG          /* 0xBF805040 */
  .extern I2C1ABRG         /* 0xBF805040 */
  .extern I2C3BRGCLR       /* 0xBF805044 */
  .extern I2C1ABRGCLR      /* 0xBF805044 */
  .extern I2C3BRGSET       /* 0xBF805048 */
  .extern I2C1ABRGSET      /* 0xBF805048 */
  .extern I2C3BRGINV       /* 0xBF80504C */
  .extern I2C1ABRGINV      /* 0xBF80504C */
  .extern I2C3TRN          /* 0xBF805050 */
  .extern I2C1ATRN         /* 0xBF805050 */
  .extern I2C3TRNCLR       /* 0xBF805054 */
  .extern I2C1ATRNCLR      /* 0xBF805054 */
  .extern I2C3TRNSET       /* 0xBF805058 */
  .extern I2C1ATRNSET      /* 0xBF805058 */
  .extern I2C3TRNINV       /* 0xBF80505C */
  .extern I2C1ATRNINV      /* 0xBF80505C */
  .extern I2C3RCV          /* 0xBF805060 */
  .extern I2C1ARCV         /* 0xBF805060 */
  .extern I2C4CON          /* 0xBF805100 */
  .extern I2C2ACON         /* 0xBF805100 */
  .extern I2C4CONCLR       /* 0xBF805104 */
  .extern I2C2ACONCLR      /* 0xBF805104 */
  .extern I2C4CONSET       /* 0xBF805108 */
  .extern I2C2ACONSET      /* 0xBF805108 */
  .extern I2C4CONINV       /* 0xBF80510C */
  .extern I2C2ACONINV      /* 0xBF80510C */
  .extern I2C4STAT         /* 0xBF805110 */
  .extern I2C2ASTAT        /* 0xBF805110 */
  .extern I2C4STATCLR      /* 0xBF805114 */
  .extern I2C2ASTATCLR     /* 0xBF805114 */
  .extern I2C4STATSET      /* 0xBF805118 */
  .extern I2C2ASTATSET     /* 0xBF805118 */
  .extern I2C4STATINV      /* 0xBF80511C */
  .extern I2C2ASTATINV     /* 0xBF80511C */
  .extern I2C4ADD          /* 0xBF805120 */
  .extern I2C2AADD         /* 0xBF805120 */
  .extern I2C4ADDCLR       /* 0xBF805124 */
  .extern I2C2AADDCLR      /* 0xBF805124 */
  .extern I2C4ADDSET       /* 0xBF805128 */
  .extern I2C2AADDSET      /* 0xBF805128 */
  .extern I2C4ADDINV       /* 0xBF80512C */
  .extern I2C2AADDINV      /* 0xBF80512C */
  .extern I2C4MSK          /* 0xBF805130 */
  .extern I2C2AMSK         /* 0xBF805130 */
  .extern I2C4MSKCLR       /* 0xBF805134 */
  .extern I2C2AMSKCLR      /* 0xBF805134 */
  .extern I2C4MSKSET       /* 0xBF805138 */
  .extern I2C2AMSKSET      /* 0xBF805138 */
  .extern I2C4MSKINV       /* 0xBF80513C */
  .extern I2C2AMSKINV      /* 0xBF80513C */
  .extern I2C4BRG          /* 0xBF805140 */
  .extern I2C2ABRG         /* 0xBF805140 */
  .extern I2C4BRGCLR       /* 0xBF805144 */
  .extern I2C2ABRGCLR      /* 0xBF805144 */
  .extern I2C4BRGSET       /* 0xBF805148 */
  .extern I2C2ABRGSET      /* 0xBF805148 */
  .extern I2C4BRGINV       /* 0xBF80514C */
  .extern I2C2ABRGINV      /* 0xBF80514C */
  .extern I2C4TRN          /* 0xBF805150 */
  .extern I2C2ATRN         /* 0xBF805150 */
  .extern I2C4TRNCLR       /* 0xBF805154 */
  .extern I2C2ATRNCLR      /* 0xBF805154 */
  .extern I2C4TRNSET       /* 0xBF805158 */
  .extern I2C2ATRNSET      /* 0xBF805158 */
  .extern I2C4TRNINV       /* 0xBF80515C */
  .extern I2C2ATRNINV      /* 0xBF80515C */
  .extern I2C4RCV          /* 0xBF805160 */
  .extern I2C2ARCV         /* 0xBF805160 */
  .extern I2C5CON          /* 0xBF805200 */
  .extern I2C3ACON         /* 0xBF805200 */
  .extern I2C5CONCLR       /* 0xBF805204 */
  .extern I2C3ACONCLR      /* 0xBF805204 */
  .extern I2C5CONSET       /* 0xBF805208 */
  .extern I2C3ACONSET      /* 0xBF805208 */
  .extern I2C5CONINV       /* 0xBF80520C */
  .extern I2C3ACONINV      /* 0xBF80520C */
  .extern I2C5STAT         /* 0xBF805210 */
  .extern I2C3ASTAT        /* 0xBF805210 */
  .extern I2C5STATCLR      /* 0xBF805214 */
  .extern I2C3ASTATCLR     /* 0xBF805214 */
  .extern I2C5STATSET      /* 0xBF805218 */
  .extern I2C3ASTATSET     /* 0xBF805218 */
  .extern I2C5STATINV      /* 0xBF80521C */
  .extern I2C3ASTATINV     /* 0xBF80521C */
  .extern I2C5ADD          /* 0xBF805220 */
  .extern I2C3AADD         /* 0xBF805220 */
  .extern I2C5ADDCLR       /* 0xBF805224 */
  .extern I2C3AADDCLR      /* 0xBF805224 */
  .extern I2C5ADDSET       /* 0xBF805228 */
  .extern I2C3AADDSET      /* 0xBF805228 */
  .extern I2C5ADDINV       /* 0xBF80522C */
  .extern I2C3AADDINV      /* 0xBF80522C */
  .extern I2C5MSK          /* 0xBF805230 */
  .extern I2C3AMSK         /* 0xBF805230 */
  .extern I2C5MSKCLR       /* 0xBF805234 */
  .extern I2C3AMSKCLR      /* 0xBF805234 */
  .extern I2C5MSKSET       /* 0xBF805238 */
  .extern I2C3AMSKSET      /* 0xBF805238 */
  .extern I2C5MSKINV       /* 0xBF80523C */
  .extern I2C3AMSKINV      /* 0xBF80523C */
  .extern I2C5BRG          /* 0xBF805240 */
  .extern I2C3ABRG         /* 0xBF805240 */
  .extern I2C5BRGCLR       /* 0xBF805244 */
  .extern I2C3ABRGCLR      /* 0xBF805244 */
  .extern I2C5BRGSET       /* 0xBF805248 */
  .extern I2C3ABRGSET      /* 0xBF805248 */
  .extern I2C5BRGINV       /* 0xBF80524C */
  .extern I2C3ABRGINV      /* 0xBF80524C */
  .extern I2C5TRN          /* 0xBF805250 */
  .extern I2C3ATRN         /* 0xBF805250 */
  .extern I2C5TRNCLR       /* 0xBF805254 */
  .extern I2C3ATRNCLR      /* 0xBF805254 */
  .extern I2C5TRNSET       /* 0xBF805258 */
  .extern I2C3ATRNSET      /* 0xBF805258 */
  .extern I2C5TRNINV       /* 0xBF80525C */
  .extern I2C3ATRNINV      /* 0xBF80525C */
  .extern I2C5RCV          /* 0xBF805260 */
  .extern I2C3ARCV         /* 0xBF805260 */
  .extern I2C1CON          /* 0xBF805300 */
  .extern I2C1CONCLR       /* 0xBF805304 */
  .extern I2C1CONSET       /* 0xBF805308 */
  .extern I2C1CONINV       /* 0xBF80530C */
  .extern I2C1STAT         /* 0xBF805310 */
  .extern I2C1STATCLR      /* 0xBF805314 */
  .extern I2C1STATSET      /* 0xBF805318 */
  .extern I2C1STATINV      /* 0xBF80531C */
  .extern I2C1ADD          /* 0xBF805320 */
  .extern I2C1ADDCLR       /* 0xBF805324 */
  .extern I2C1ADDSET       /* 0xBF805328 */
  .extern I2C1ADDINV       /* 0xBF80532C */
  .extern I2C1MSK          /* 0xBF805330 */
  .extern I2C1MSKCLR       /* 0xBF805334 */
  .extern I2C1MSKSET       /* 0xBF805338 */
  .extern I2C1MSKINV       /* 0xBF80533C */
  .extern I2C1BRG          /* 0xBF805340 */
  .extern I2C1BRGCLR       /* 0xBF805344 */
  .extern I2C1BRGSET       /* 0xBF805348 */
  .extern I2C1BRGINV       /* 0xBF80534C */
  .extern I2C1TRN          /* 0xBF805350 */
  .extern I2C1TRNCLR       /* 0xBF805354 */
  .extern I2C1TRNSET       /* 0xBF805358 */
  .extern I2C1TRNINV       /* 0xBF80535C */
  .extern I2C1RCV          /* 0xBF805360 */
  .extern I2C2CON          /* 0xBF805400 */
  .extern I2C2CONCLR       /* 0xBF805404 */
  .extern I2C2CONSET       /* 0xBF805408 */
  .extern I2C2CONINV       /* 0xBF80540C */
  .extern I2C2STAT         /* 0xBF805410 */
  .extern I2C2STATCLR      /* 0xBF805414 */
  .extern I2C2STATSET      /* 0xBF805418 */
  .extern I2C2STATINV      /* 0xBF80541C */
  .extern I2C2ADD          /* 0xBF805420 */
  .extern I2C2ADDCLR       /* 0xBF805424 */
  .extern I2C2ADDSET       /* 0xBF805428 */
  .extern I2C2ADDINV       /* 0xBF80542C */
  .extern I2C2MSK          /* 0xBF805430 */
  .extern I2C2MSKCLR       /* 0xBF805434 */
  .extern I2C2MSKSET       /* 0xBF805438 */
  .extern I2C2MSKINV       /* 0xBF80543C */
  .extern I2C2BRG          /* 0xBF805440 */
  .extern I2C2BRGCLR       /* 0xBF805444 */
  .extern I2C2BRGSET       /* 0xBF805448 */
  .extern I2C2BRGINV       /* 0xBF80544C */
  .extern I2C2TRN          /* 0xBF805450 */
  .extern I2C2TRNCLR       /* 0xBF805454 */
  .extern I2C2TRNSET       /* 0xBF805458 */
  .extern I2C2TRNINV       /* 0xBF80545C */
  .extern I2C2RCV          /* 0xBF805460 */
  .extern SPI3CON          /* 0xBF805800 */
  .extern SPI1ACON         /* 0xBF805800 */
  .extern SPI3CONCLR       /* 0xBF805804 */
  .extern SPI1ACONCLR      /* 0xBF805804 */
  .extern SPI3CONSET       /* 0xBF805808 */
  .extern SPI1ACONSET      /* 0xBF805808 */
  .extern SPI3CONINV       /* 0xBF80580C */
  .extern SPI1ACONINV      /* 0xBF80580C */
  .extern SPI3STAT         /* 0xBF805810 */
  .extern SPI1ASTAT        /* 0xBF805810 */
  .extern SPI3STATCLR      /* 0xBF805814 */
  .extern SPI1ASTATCLR     /* 0xBF805814 */
  .extern SPI3STATSET      /* 0xBF805818 */
  .extern SPI1ASTATSET     /* 0xBF805818 */
  .extern SPI3STATINV      /* 0xBF80581C */
  .extern SPI1ASTATINV     /* 0xBF80581C */
  .extern SPI3BUF          /* 0xBF805820 */
  .extern SPI1ABUF         /* 0xBF805820 */
  .extern SPI3BRG          /* 0xBF805830 */
  .extern SPI1ABRG         /* 0xBF805830 */
  .extern SPI3BRGCLR       /* 0xBF805834 */
  .extern SPI1ABRGCLR      /* 0xBF805834 */
  .extern SPI3BRGSET       /* 0xBF805838 */
  .extern SPI1ABRGSET      /* 0xBF805838 */
  .extern SPI3BRGINV       /* 0xBF80583C */
  .extern SPI1ABRGINV      /* 0xBF80583C */
  .extern SPI2CON          /* 0xBF805A00 */
  .extern SPI2ACON         /* 0xBF805A00 */
  .extern SPI2CONCLR       /* 0xBF805A04 */
  .extern SPI2ACONCLR      /* 0xBF805A04 */
  .extern SPI2CONSET       /* 0xBF805A08 */
  .extern SPI2ACONSET      /* 0xBF805A08 */
  .extern SPI2CONINV       /* 0xBF805A0C */
  .extern SPI2ACONINV      /* 0xBF805A0C */
  .extern SPI2STAT         /* 0xBF805A10 */
  .extern SPI2ASTAT        /* 0xBF805A10 */
  .extern SPI2STATCLR      /* 0xBF805A14 */
  .extern SPI2ASTATCLR     /* 0xBF805A14 */
  .extern SPI2STATSET      /* 0xBF805A18 */
  .extern SPI2ASTATSET     /* 0xBF805A18 */
  .extern SPI2STATINV      /* 0xBF805A1C */
  .extern SPI2ASTATINV     /* 0xBF805A1C */
  .extern SPI2BUF          /* 0xBF805A20 */
  .extern SPI2ABUF         /* 0xBF805A20 */
  .extern SPI2BRG          /* 0xBF805A30 */
  .extern SPI2ABRG         /* 0xBF805A30 */
  .extern SPI2BRGCLR       /* 0xBF805A34 */
  .extern SPI2ABRGCLR      /* 0xBF805A34 */
  .extern SPI2BRGSET       /* 0xBF805A38 */
  .extern SPI2ABRGSET      /* 0xBF805A38 */
  .extern SPI2BRGINV       /* 0xBF805A3C */
  .extern SPI2ABRGINV      /* 0xBF805A3C */
  .extern SPI4CON          /* 0xBF805C00 */
  .extern SPI3ACON         /* 0xBF805C00 */
  .extern SPI4CONCLR       /* 0xBF805C04 */
  .extern SPI3ACONCLR      /* 0xBF805C04 */
  .extern SPI4CONSET       /* 0xBF805C08 */
  .extern SPI3ACONSET      /* 0xBF805C08 */
  .extern SPI4CONINV       /* 0xBF805C0C */
  .extern SPI3ACONINV      /* 0xBF805C0C */
  .extern SPI4STAT         /* 0xBF805C10 */
  .extern SPI3ASTAT        /* 0xBF805C10 */
  .extern SPI4STATCLR      /* 0xBF805C14 */
  .extern SPI3ASTATCLR     /* 0xBF805C14 */
  .extern SPI4STATSET      /* 0xBF805C18 */
  .extern SPI3ASTATSET     /* 0xBF805C18 */
  .extern SPI4STATINV      /* 0xBF805C1C */
  .extern SPI3ASTATINV     /* 0xBF805C1C */
  .extern SPI4BUF          /* 0xBF805C20 */
  .extern SPI3ABUF         /* 0xBF805C20 */
  .extern SPI4BRG          /* 0xBF805C30 */
  .extern SPI3ABRG         /* 0xBF805C30 */
  .extern SPI4BRGCLR       /* 0xBF805C34 */
  .extern SPI3ABRGCLR      /* 0xBF805C34 */
  .extern SPI4BRGSET       /* 0xBF805C38 */
  .extern SPI3ABRGSET      /* 0xBF805C38 */
  .extern SPI4BRGINV       /* 0xBF805C3C */
  .extern SPI3ABRGINV      /* 0xBF805C3C */
  .extern SPI1CON          /* 0xBF805E00 */
  .extern SPI1CONCLR       /* 0xBF805E04 */
  .extern SPI1CONSET       /* 0xBF805E08 */
  .extern SPI1CONINV       /* 0xBF805E0C */
  .extern SPI1STAT         /* 0xBF805E10 */
  .extern SPI1STATCLR      /* 0xBF805E14 */
  .extern SPI1STATSET      /* 0xBF805E18 */
  .extern SPI1STATINV      /* 0xBF805E1C */
  .extern SPI1BUF          /* 0xBF805E20 */
  .extern SPI1BRG          /* 0xBF805E30 */
  .extern SPI1BRGCLR       /* 0xBF805E34 */
  .extern SPI1BRGSET       /* 0xBF805E38 */
  .extern SPI1BRGINV       /* 0xBF805E3C */
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
  .extern U4MODE           /* 0xBF806200 */
  .extern U1BMODE          /* 0xBF806200 */
  .extern U4MODECLR        /* 0xBF806204 */
  .extern U1BMODECLR       /* 0xBF806204 */
  .extern U4MODESET        /* 0xBF806208 */
  .extern U1BMODESET       /* 0xBF806208 */
  .extern U4MODEINV        /* 0xBF80620C */
  .extern U1BMODEINV       /* 0xBF80620C */
  .extern U4STA            /* 0xBF806210 */
  .extern U1BSTA           /* 0xBF806210 */
  .extern U4STACLR         /* 0xBF806214 */
  .extern U1BSTACLR        /* 0xBF806214 */
  .extern U4STASET         /* 0xBF806218 */
  .extern U1BSTASET        /* 0xBF806218 */
  .extern U4STAINV         /* 0xBF80621C */
  .extern U1BSTAINV        /* 0xBF80621C */
  .extern U4TXREG          /* 0xBF806220 */
  .extern U1BTXREG         /* 0xBF806220 */
  .extern U4RXREG          /* 0xBF806230 */
  .extern U1BRXREG         /* 0xBF806230 */
  .extern U4BRG            /* 0xBF806240 */
  .extern U1BBRG           /* 0xBF806240 */
  .extern U4BRGCLR         /* 0xBF806244 */
  .extern U1BBRGCLR        /* 0xBF806244 */
  .extern U4BRGSET         /* 0xBF806248 */
  .extern U1BBRGSET        /* 0xBF806248 */
  .extern U4BRGINV         /* 0xBF80624C */
  .extern U1BBRGINV        /* 0xBF80624C */
  .extern U3MODE           /* 0xBF806400 */
  .extern U2AMODE          /* 0xBF806400 */
  .extern U3MODECLR        /* 0xBF806404 */
  .extern U2AMODECLR       /* 0xBF806404 */
  .extern U3MODESET        /* 0xBF806408 */
  .extern U2AMODESET       /* 0xBF806408 */
  .extern U3MODEINV        /* 0xBF80640C */
  .extern U2AMODEINV       /* 0xBF80640C */
  .extern U3STA            /* 0xBF806410 */
  .extern U2ASTA           /* 0xBF806410 */
  .extern U3STACLR         /* 0xBF806414 */
  .extern U2ASTACLR        /* 0xBF806414 */
  .extern U3STASET         /* 0xBF806418 */
  .extern U2ASTASET        /* 0xBF806418 */
  .extern U3STAINV         /* 0xBF80641C */
  .extern U2ASTAINV        /* 0xBF80641C */
  .extern U3TXREG          /* 0xBF806420 */
  .extern U2ATXREG         /* 0xBF806420 */
  .extern U3RXREG          /* 0xBF806430 */
  .extern U2ARXREG         /* 0xBF806430 */
  .extern U3BRG            /* 0xBF806440 */
  .extern U2ABRG           /* 0xBF806440 */
  .extern U3BRGCLR         /* 0xBF806444 */
  .extern U2ABRGCLR        /* 0xBF806444 */
  .extern U3BRGSET         /* 0xBF806448 */
  .extern U2ABRGSET        /* 0xBF806448 */
  .extern U3BRGINV         /* 0xBF80644C */
  .extern U2ABRGINV        /* 0xBF80644C */
  .extern U6MODE           /* 0xBF806600 */
  .extern U2BMODE          /* 0xBF806600 */
  .extern U6MODECLR        /* 0xBF806604 */
  .extern U2BMODECLR       /* 0xBF806604 */
  .extern U6MODESET        /* 0xBF806608 */
  .extern U2BMODESET       /* 0xBF806608 */
  .extern U6MODEINV        /* 0xBF80660C */
  .extern U2BMODEINV       /* 0xBF80660C */
  .extern U6STA            /* 0xBF806610 */
  .extern U2BSTA           /* 0xBF806610 */
  .extern U6STACLR         /* 0xBF806614 */
  .extern U2BSTACLR        /* 0xBF806614 */
  .extern U6STASET         /* 0xBF806618 */
  .extern U2BSTASET        /* 0xBF806618 */
  .extern U6STAINV         /* 0xBF80661C */
  .extern U2BSTAINV        /* 0xBF80661C */
  .extern U6TXREG          /* 0xBF806620 */
  .extern U2BTXREG         /* 0xBF806620 */
  .extern U6RXREG          /* 0xBF806630 */
  .extern U2BRXREG         /* 0xBF806630 */
  .extern U6BRG            /* 0xBF806640 */
  .extern U2BBRG           /* 0xBF806640 */
  .extern U6BRGCLR         /* 0xBF806644 */
  .extern U2BBRGCLR        /* 0xBF806644 */
  .extern U6BRGSET         /* 0xBF806648 */
  .extern U2BBRGSET        /* 0xBF806648 */
  .extern U6BRGINV         /* 0xBF80664C */
  .extern U2BBRGINV        /* 0xBF80664C */
  .extern U2MODE           /* 0xBF806800 */
  .extern U3AMODE          /* 0xBF806800 */
  .extern U2MODECLR        /* 0xBF806804 */
  .extern U3AMODECLR       /* 0xBF806804 */
  .extern U2MODESET        /* 0xBF806808 */
  .extern U3AMODESET       /* 0xBF806808 */
  .extern U2MODEINV        /* 0xBF80680C */
  .extern U3AMODEINV       /* 0xBF80680C */
  .extern U2STA            /* 0xBF806810 */
  .extern U3ASTA           /* 0xBF806810 */
  .extern U2STACLR         /* 0xBF806814 */
  .extern U3ASTACLR        /* 0xBF806814 */
  .extern U2STASET         /* 0xBF806818 */
  .extern U3ASTASET        /* 0xBF806818 */
  .extern U2STAINV         /* 0xBF80681C */
  .extern U3ASTAINV        /* 0xBF80681C */
  .extern U2TXREG          /* 0xBF806820 */
  .extern U3ATXREG         /* 0xBF806820 */
  .extern U2RXREG          /* 0xBF806830 */
  .extern U3ARXREG         /* 0xBF806830 */
  .extern U2BRG            /* 0xBF806840 */
  .extern U3ABRG           /* 0xBF806840 */
  .extern U2BRGCLR         /* 0xBF806844 */
  .extern U3ABRGCLR        /* 0xBF806844 */
  .extern U2BRGSET         /* 0xBF806848 */
  .extern U3ABRGSET        /* 0xBF806848 */
  .extern U2BRGINV         /* 0xBF80684C */
  .extern U3ABRGINV        /* 0xBF80684C */
  .extern U5MODE           /* 0xBF806A00 */
  .extern U3BMODE          /* 0xBF806A00 */
  .extern U5MODECLR        /* 0xBF806A04 */
  .extern U3BMODECLR       /* 0xBF806A04 */
  .extern U5MODESET        /* 0xBF806A08 */
  .extern U3BMODESET       /* 0xBF806A08 */
  .extern U5MODEINV        /* 0xBF806A0C */
  .extern U3BMODEINV       /* 0xBF806A0C */
  .extern U5STA            /* 0xBF806A10 */
  .extern U3BSTA           /* 0xBF806A10 */
  .extern U5STACLR         /* 0xBF806A14 */
  .extern U3BSTACLR        /* 0xBF806A14 */
  .extern U5STASET         /* 0xBF806A18 */
  .extern U3BSTASET        /* 0xBF806A18 */
  .extern U5STAINV         /* 0xBF806A1C */
  .extern U3BSTAINV        /* 0xBF806A1C */
  .extern U5TXREG          /* 0xBF806A20 */
  .extern U3BTXREG         /* 0xBF806A20 */
  .extern U5RXREG          /* 0xBF806A30 */
  .extern U3BRXREG         /* 0xBF806A30 */
  .extern U5BRG            /* 0xBF806A40 */
  .extern U3BBRG           /* 0xBF806A40 */
  .extern U5BRGCLR         /* 0xBF806A44 */
  .extern U3BBRGCLR        /* 0xBF806A44 */
  .extern U5BRGSET         /* 0xBF806A48 */
  .extern U3BBRGSET        /* 0xBF806A48 */
  .extern U5BRGINV         /* 0xBF806A4C */
  .extern U3BBRGINV        /* 0xBF806A4C */
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
  .extern AD1PCFG          /* 0xBF809060 */
  .extern AD1PCFGCLR       /* 0xBF809064 */
  .extern AD1PCFGSET       /* 0xBF809068 */
  .extern AD1PCFGINV       /* 0xBF80906C */
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
  .extern CMSTAT           /* 0xBF80A060 */
  .extern CMSTATCLR        /* 0xBF80A064 */
  .extern CMSTATSET        /* 0xBF80A068 */
  .extern CMSTATINV        /* 0xBF80A06C */
  .extern OSCCON           /* 0xBF80F000 */
  .extern OSCCONCLR        /* 0xBF80F004 */
  .extern OSCCONSET        /* 0xBF80F008 */
  .extern OSCCONINV        /* 0xBF80F00C */
  .extern OSCTUN           /* 0xBF80F010 */
  .extern OSCTUNCLR        /* 0xBF80F014 */
  .extern OSCTUNSET        /* 0xBF80F018 */
  .extern OSCTUNINV        /* 0xBF80F01C */
  .extern DDPCON           /* 0xBF80F200 */
  .extern DEVID            /* 0xBF80F220 */
  .extern SYSKEY           /* 0xBF80F230 */
  .extern SYSKEYCLR        /* 0xBF80F234 */
  .extern SYSKEYSET        /* 0xBF80F238 */
  .extern SYSKEYINV        /* 0xBF80F23C */
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
  .extern _DDPSTAT         /* 0xBF880140 */
  .extern _STRO            /* 0xBF880170 */
  .extern _STROCLR         /* 0xBF880174 */
  .extern _STROSET         /* 0xBF880178 */
  .extern _STROINV         /* 0xBF88017C */
  .extern _APPO            /* 0xBF880180 */
  .extern _APPOCLR         /* 0xBF880184 */
  .extern _APPOSET         /* 0xBF880188 */
  .extern _APPOINV         /* 0xBF88018C */
  .extern _APPI            /* 0xBF880190 */
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
  .extern IFS2             /* 0xBF881050 */
  .extern IFS2CLR          /* 0xBF881054 */
  .extern IFS2SET          /* 0xBF881058 */
  .extern IFS2INV          /* 0xBF88105C */
  .extern IEC0             /* 0xBF881060 */
  .extern IEC0CLR          /* 0xBF881064 */
  .extern IEC0SET          /* 0xBF881068 */
  .extern IEC0INV          /* 0xBF88106C */
  .extern IEC1             /* 0xBF881070 */
  .extern IEC1CLR          /* 0xBF881074 */
  .extern IEC1SET          /* 0xBF881078 */
  .extern IEC1INV          /* 0xBF88107C */
  .extern IEC2             /* 0xBF881080 */
  .extern IEC2CLR          /* 0xBF881084 */
  .extern IEC2SET          /* 0xBF881088 */
  .extern IEC2INV          /* 0xBF88108C */
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
  .extern IPC11            /* 0xBF881140 */
  .extern IPC11CLR         /* 0xBF881144 */
  .extern IPC11SET         /* 0xBF881148 */
  .extern IPC11INV         /* 0xBF88114C */
  .extern IPC12            /* 0xBF881150 */
  .extern IPC12CLR         /* 0xBF881154 */
  .extern IPC12SET         /* 0xBF881158 */
  .extern IPC12INV         /* 0xBF88115C */
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
  .extern DCH4CON          /* 0xBF883360 */
  .extern DCH4CONCLR       /* 0xBF883364 */
  .extern DCH4CONSET       /* 0xBF883368 */
  .extern DCH4CONINV       /* 0xBF88336C */
  .extern DCH4ECON         /* 0xBF883370 */
  .extern DCH4ECONCLR      /* 0xBF883374 */
  .extern DCH4ECONSET      /* 0xBF883378 */
  .extern DCH4ECONINV      /* 0xBF88337C */
  .extern DCH4INT          /* 0xBF883380 */
  .extern DCH4INTCLR       /* 0xBF883384 */
  .extern DCH4INTSET       /* 0xBF883388 */
  .extern DCH4INTINV       /* 0xBF88338C */
  .extern DCH4SSA          /* 0xBF883390 */
  .extern DCH4SSACLR       /* 0xBF883394 */
  .extern DCH4SSASET       /* 0xBF883398 */
  .extern DCH4SSAINV       /* 0xBF88339C */
  .extern DCH4DSA          /* 0xBF8833A0 */
  .extern DCH4DSACLR       /* 0xBF8833A4 */
  .extern DCH4DSASET       /* 0xBF8833A8 */
  .extern DCH4DSAINV       /* 0xBF8833AC */
  .extern DCH4SSIZ         /* 0xBF8833B0 */
  .extern DCH4SSIZCLR      /* 0xBF8833B4 */
  .extern DCH4SSIZSET      /* 0xBF8833B8 */
  .extern DCH4SSIZINV      /* 0xBF8833BC */
  .extern DCH4DSIZ         /* 0xBF8833C0 */
  .extern DCH4DSIZCLR      /* 0xBF8833C4 */
  .extern DCH4DSIZSET      /* 0xBF8833C8 */
  .extern DCH4DSIZINV      /* 0xBF8833CC */
  .extern DCH4SPTR         /* 0xBF8833D0 */
  .extern DCH4SPTRCLR      /* 0xBF8833D4 */
  .extern DCH4SPTRSET      /* 0xBF8833D8 */
  .extern DCH4SPTRINV      /* 0xBF8833DC */
  .extern DCH4DPTR         /* 0xBF8833E0 */
  .extern DCH4DPTRCLR      /* 0xBF8833E4 */
  .extern DCH4DPTRSET      /* 0xBF8833E8 */
  .extern DCH4DPTRINV      /* 0xBF8833EC */
  .extern DCH4CSIZ         /* 0xBF8833F0 */
  .extern DCH4CSIZCLR      /* 0xBF8833F4 */
  .extern DCH4CSIZSET      /* 0xBF8833F8 */
  .extern DCH4CSIZINV      /* 0xBF8833FC */
  .extern DCH4CPTR         /* 0xBF883400 */
  .extern DCH4CPTRCLR      /* 0xBF883404 */
  .extern DCH4CPTRSET      /* 0xBF883408 */
  .extern DCH4CPTRINV      /* 0xBF88340C */
  .extern DCH4DAT          /* 0xBF883410 */
  .extern DCH4DATCLR       /* 0xBF883414 */
  .extern DCH4DATSET       /* 0xBF883418 */
  .extern DCH4DATINV       /* 0xBF88341C */
  .extern DCH5CON          /* 0xBF883420 */
  .extern DCH5CONCLR       /* 0xBF883424 */
  .extern DCH5CONSET       /* 0xBF883428 */
  .extern DCH5CONINV       /* 0xBF88342C */
  .extern DCH5ECON         /* 0xBF883430 */
  .extern DCH5ECONCLR      /* 0xBF883434 */
  .extern DCH5ECONSET      /* 0xBF883438 */
  .extern DCH5ECONINV      /* 0xBF88343C */
  .extern DCH5INT          /* 0xBF883440 */
  .extern DCH5INTCLR       /* 0xBF883444 */
  .extern DCH5INTSET       /* 0xBF883448 */
  .extern DCH5INTINV       /* 0xBF88344C */
  .extern DCH5SSA          /* 0xBF883450 */
  .extern DCH5SSACLR       /* 0xBF883454 */
  .extern DCH5SSASET       /* 0xBF883458 */
  .extern DCH5SSAINV       /* 0xBF88345C */
  .extern DCH5DSA          /* 0xBF883460 */
  .extern DCH5DSACLR       /* 0xBF883464 */
  .extern DCH5DSASET       /* 0xBF883468 */
  .extern DCH5DSAINV       /* 0xBF88346C */
  .extern DCH5SSIZ         /* 0xBF883470 */
  .extern DCH5SSIZCLR      /* 0xBF883474 */
  .extern DCH5SSIZSET      /* 0xBF883478 */
  .extern DCH5SSIZINV      /* 0xBF88347C */
  .extern DCH5DSIZ         /* 0xBF883480 */
  .extern DCH5DSIZCLR      /* 0xBF883484 */
  .extern DCH5DSIZSET      /* 0xBF883488 */
  .extern DCH5DSIZINV      /* 0xBF88348C */
  .extern DCH5SPTR         /* 0xBF883490 */
  .extern DCH5SPTRCLR      /* 0xBF883494 */
  .extern DCH5SPTRSET      /* 0xBF883498 */
  .extern DCH5SPTRINV      /* 0xBF88349C */
  .extern DCH5DPTR         /* 0xBF8834A0 */
  .extern DCH5DPTRCLR      /* 0xBF8834A4 */
  .extern DCH5DPTRSET      /* 0xBF8834A8 */
  .extern DCH5DPTRINV      /* 0xBF8834AC */
  .extern DCH5CSIZ         /* 0xBF8834B0 */
  .extern DCH5CSIZCLR      /* 0xBF8834B4 */
  .extern DCH5CSIZSET      /* 0xBF8834B8 */
  .extern DCH5CSIZINV      /* 0xBF8834BC */
  .extern DCH5CPTR         /* 0xBF8834C0 */
  .extern DCH5CPTRCLR      /* 0xBF8834C4 */
  .extern DCH5CPTRSET      /* 0xBF8834C8 */
  .extern DCH5CPTRINV      /* 0xBF8834CC */
  .extern DCH5DAT          /* 0xBF8834D0 */
  .extern DCH5DATCLR       /* 0xBF8834D4 */
  .extern DCH5DATSET       /* 0xBF8834D8 */
  .extern DCH5DATINV       /* 0xBF8834DC */
  .extern DCH6CON          /* 0xBF8834E0 */
  .extern DCH6CONCLR       /* 0xBF8834E4 */
  .extern DCH6CONSET       /* 0xBF8834E8 */
  .extern DCH6CONINV       /* 0xBF8834EC */
  .extern DCH6ECON         /* 0xBF8834F0 */
  .extern DCH6ECONCLR      /* 0xBF8834F4 */
  .extern DCH6ECONSET      /* 0xBF8834F8 */
  .extern DCH6ECONINV      /* 0xBF8834FC */
  .extern DCH6INT          /* 0xBF883500 */
  .extern DCH6INTCLR       /* 0xBF883504 */
  .extern DCH6INTSET       /* 0xBF883508 */
  .extern DCH6INTINV       /* 0xBF88350C */
  .extern DCH6SSA          /* 0xBF883510 */
  .extern DCH6SSACLR       /* 0xBF883514 */
  .extern DCH6SSASET       /* 0xBF883518 */
  .extern DCH6SSAINV       /* 0xBF88351C */
  .extern DCH6DSA          /* 0xBF883520 */
  .extern DCH6DSACLR       /* 0xBF883524 */
  .extern DCH6DSASET       /* 0xBF883528 */
  .extern DCH6DSAINV       /* 0xBF88352C */
  .extern DCH6SSIZ         /* 0xBF883530 */
  .extern DCH6SSIZCLR      /* 0xBF883534 */
  .extern DCH6SSIZSET      /* 0xBF883538 */
  .extern DCH6SSIZINV      /* 0xBF88353C */
  .extern DCH6DSIZ         /* 0xBF883540 */
  .extern DCH6DSIZCLR      /* 0xBF883544 */
  .extern DCH6DSIZSET      /* 0xBF883548 */
  .extern DCH6DSIZINV      /* 0xBF88354C */
  .extern DCH6SPTR         /* 0xBF883550 */
  .extern DCH6SPTRCLR      /* 0xBF883554 */
  .extern DCH6SPTRSET      /* 0xBF883558 */
  .extern DCH6SPTRINV      /* 0xBF88355C */
  .extern DCH6DPTR         /* 0xBF883560 */
  .extern DCH6DPTRCLR      /* 0xBF883564 */
  .extern DCH6DPTRSET      /* 0xBF883568 */
  .extern DCH6DPTRINV      /* 0xBF88356C */
  .extern DCH6CSIZ         /* 0xBF883570 */
  .extern DCH6CSIZCLR      /* 0xBF883574 */
  .extern DCH6CSIZSET      /* 0xBF883578 */
  .extern DCH6CSIZINV      /* 0xBF88357C */
  .extern DCH6CPTR         /* 0xBF883580 */
  .extern DCH6CPTRCLR      /* 0xBF883584 */
  .extern DCH6CPTRSET      /* 0xBF883588 */
  .extern DCH6CPTRINV      /* 0xBF88358C */
  .extern DCH6DAT          /* 0xBF883590 */
  .extern DCH6DATCLR       /* 0xBF883594 */
  .extern DCH6DATSET       /* 0xBF883598 */
  .extern DCH6DATINV       /* 0xBF88359C */
  .extern DCH7CON          /* 0xBF8835A0 */
  .extern DCH7CONCLR       /* 0xBF8835A4 */
  .extern DCH7CONSET       /* 0xBF8835A8 */
  .extern DCH7CONINV       /* 0xBF8835AC */
  .extern DCH7ECON         /* 0xBF8835B0 */
  .extern DCH7ECONCLR      /* 0xBF8835B4 */
  .extern DCH7ECONSET      /* 0xBF8835B8 */
  .extern DCH7ECONINV      /* 0xBF8835BC */
  .extern DCH7INT          /* 0xBF8835C0 */
  .extern DCH7INTCLR       /* 0xBF8835C4 */
  .extern DCH7INTSET       /* 0xBF8835C8 */
  .extern DCH7INTINV       /* 0xBF8835CC */
  .extern DCH7SSA          /* 0xBF8835D0 */
  .extern DCH7SSACLR       /* 0xBF8835D4 */
  .extern DCH7SSASET       /* 0xBF8835D8 */
  .extern DCH7SSAINV       /* 0xBF8835DC */
  .extern DCH7DSA          /* 0xBF8835E0 */
  .extern DCH7DSACLR       /* 0xBF8835E4 */
  .extern DCH7DSASET       /* 0xBF8835E8 */
  .extern DCH7DSAINV       /* 0xBF8835EC */
  .extern DCH7SSIZ         /* 0xBF8835F0 */
  .extern DCH7SSIZCLR      /* 0xBF8835F4 */
  .extern DCH7SSIZSET      /* 0xBF8835F8 */
  .extern DCH7SSIZINV      /* 0xBF8835FC */
  .extern DCH7DSIZ         /* 0xBF883600 */
  .extern DCH7DSIZCLR      /* 0xBF883604 */
  .extern DCH7DSIZSET      /* 0xBF883608 */
  .extern DCH7DSIZINV      /* 0xBF88360C */
  .extern DCH7SPTR         /* 0xBF883610 */
  .extern DCH7SPTRCLR      /* 0xBF883614 */
  .extern DCH7SPTRSET      /* 0xBF883618 */
  .extern DCH7SPTRINV      /* 0xBF88361C */
  .extern DCH7DPTR         /* 0xBF883620 */
  .extern DCH7DPTRCLR      /* 0xBF883624 */
  .extern DCH7DPTRSET      /* 0xBF883628 */
  .extern DCH7DPTRINV      /* 0xBF88362C */
  .extern DCH7CSIZ         /* 0xBF883630 */
  .extern DCH7CSIZCLR      /* 0xBF883634 */
  .extern DCH7CSIZSET      /* 0xBF883638 */
  .extern DCH7CSIZINV      /* 0xBF88363C */
  .extern DCH7CPTR         /* 0xBF883640 */
  .extern DCH7CPTRCLR      /* 0xBF883644 */
  .extern DCH7CPTRSET      /* 0xBF883648 */
  .extern DCH7CPTRINV      /* 0xBF88364C */
  .extern DCH7DAT          /* 0xBF883650 */
  .extern DCH7DATCLR       /* 0xBF883654 */
  .extern DCH7DATSET       /* 0xBF883658 */
  .extern DCH7DATINV       /* 0xBF88365C */
  .extern CHECON           /* 0xBF884000 */
  .extern CHECONCLR        /* 0xBF884004 */
  .extern CHECONSET        /* 0xBF884008 */
  .extern CHECONINV        /* 0xBF88400C */
  .extern CHEACC           /* 0xBF884010 */
  .extern CHEACCCLR        /* 0xBF884014 */
  .extern CHEACCSET        /* 0xBF884018 */
  .extern CHEACCINV        /* 0xBF88401C */
  .extern CHETAG           /* 0xBF884020 */
  .extern CHETAGCLR        /* 0xBF884024 */
  .extern CHETAGSET        /* 0xBF884028 */
  .extern CHETAGINV        /* 0xBF88402C */
  .extern CHEMSK           /* 0xBF884030 */
  .extern CHEMSKCLR        /* 0xBF884034 */
  .extern CHEMSKSET        /* 0xBF884038 */
  .extern CHEMSKINV        /* 0xBF88403C */
  .extern CHEW0            /* 0xBF884040 */
  .extern CHEW1            /* 0xBF884050 */
  .extern CHEW2            /* 0xBF884060 */
  .extern CHEW3            /* 0xBF884070 */
  .extern CHELRU           /* 0xBF884080 */
  .extern CHEHIT           /* 0xBF884090 */
  .extern CHEMIS           /* 0xBF8840A0 */
  .extern CHEPFABT         /* 0xBF8840C0 */
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
  .extern TRISA            /* 0xBF886000 */
  .extern TRISACLR         /* 0xBF886004 */
  .extern TRISASET         /* 0xBF886008 */
  .extern TRISAINV         /* 0xBF88600C */
  .extern PORTA            /* 0xBF886010 */
  .extern PORTACLR         /* 0xBF886014 */
  .extern PORTASET         /* 0xBF886018 */
  .extern PORTAINV         /* 0xBF88601C */
  .extern LATA             /* 0xBF886020 */
  .extern LATACLR          /* 0xBF886024 */
  .extern LATASET          /* 0xBF886028 */
  .extern LATAINV          /* 0xBF88602C */
  .extern ODCA             /* 0xBF886030 */
  .extern ODCACLR          /* 0xBF886034 */
  .extern ODCASET          /* 0xBF886038 */
  .extern ODCAINV          /* 0xBF88603C */
  .extern TRISB            /* 0xBF886040 */
  .extern TRISBCLR         /* 0xBF886044 */
  .extern TRISBSET         /* 0xBF886048 */
  .extern TRISBINV         /* 0xBF88604C */
  .extern PORTB            /* 0xBF886050 */
  .extern PORTBCLR         /* 0xBF886054 */
  .extern PORTBSET         /* 0xBF886058 */
  .extern PORTBINV         /* 0xBF88605C */
  .extern LATB             /* 0xBF886060 */
  .extern LATBCLR          /* 0xBF886064 */
  .extern LATBSET          /* 0xBF886068 */
  .extern LATBINV          /* 0xBF88606C */
  .extern ODCB             /* 0xBF886070 */
  .extern ODCBCLR          /* 0xBF886074 */
  .extern ODCBSET          /* 0xBF886078 */
  .extern ODCBINV          /* 0xBF88607C */
  .extern TRISC            /* 0xBF886080 */
  .extern TRISCCLR         /* 0xBF886084 */
  .extern TRISCSET         /* 0xBF886088 */
  .extern TRISCINV         /* 0xBF88608C */
  .extern PORTC            /* 0xBF886090 */
  .extern PORTCCLR         /* 0xBF886094 */
  .extern PORTCSET         /* 0xBF886098 */
  .extern PORTCINV         /* 0xBF88609C */
  .extern LATC             /* 0xBF8860A0 */
  .extern LATCCLR          /* 0xBF8860A4 */
  .extern LATCSET          /* 0xBF8860A8 */
  .extern LATCINV          /* 0xBF8860AC */
  .extern ODCC             /* 0xBF8860B0 */
  .extern ODCCCLR          /* 0xBF8860B4 */
  .extern ODCCSET          /* 0xBF8860B8 */
  .extern ODCCINV          /* 0xBF8860BC */
  .extern TRISD            /* 0xBF8860C0 */
  .extern TRISDCLR         /* 0xBF8860C4 */
  .extern TRISDSET         /* 0xBF8860C8 */
  .extern TRISDINV         /* 0xBF8860CC */
  .extern PORTD            /* 0xBF8860D0 */
  .extern PORTDCLR         /* 0xBF8860D4 */
  .extern PORTDSET         /* 0xBF8860D8 */
  .extern PORTDINV         /* 0xBF8860DC */
  .extern LATD             /* 0xBF8860E0 */
  .extern LATDCLR          /* 0xBF8860E4 */
  .extern LATDSET          /* 0xBF8860E8 */
  .extern LATDINV          /* 0xBF8860EC */
  .extern ODCD             /* 0xBF8860F0 */
  .extern ODCDCLR          /* 0xBF8860F4 */
  .extern ODCDSET          /* 0xBF8860F8 */
  .extern ODCDINV          /* 0xBF8860FC */
  .extern TRISE            /* 0xBF886100 */
  .extern TRISECLR         /* 0xBF886104 */
  .extern TRISESET         /* 0xBF886108 */
  .extern TRISEINV         /* 0xBF88610C */
  .extern PORTE            /* 0xBF886110 */
  .extern PORTECLR         /* 0xBF886114 */
  .extern PORTESET         /* 0xBF886118 */
  .extern PORTEINV         /* 0xBF88611C */
  .extern LATE             /* 0xBF886120 */
  .extern LATECLR          /* 0xBF886124 */
  .extern LATESET          /* 0xBF886128 */
  .extern LATEINV          /* 0xBF88612C */
  .extern ODCE             /* 0xBF886130 */
  .extern ODCECLR          /* 0xBF886134 */
  .extern ODCESET          /* 0xBF886138 */
  .extern ODCEINV          /* 0xBF88613C */
  .extern TRISF            /* 0xBF886140 */
  .extern TRISFCLR         /* 0xBF886144 */
  .extern TRISFSET         /* 0xBF886148 */
  .extern TRISFINV         /* 0xBF88614C */
  .extern PORTF            /* 0xBF886150 */
  .extern PORTFCLR         /* 0xBF886154 */
  .extern PORTFSET         /* 0xBF886158 */
  .extern PORTFINV         /* 0xBF88615C */
  .extern LATF             /* 0xBF886160 */
  .extern LATFCLR          /* 0xBF886164 */
  .extern LATFSET          /* 0xBF886168 */
  .extern LATFINV          /* 0xBF88616C */
  .extern ODCF             /* 0xBF886170 */
  .extern ODCFCLR          /* 0xBF886174 */
  .extern ODCFSET          /* 0xBF886178 */
  .extern ODCFINV          /* 0xBF88617C */
  .extern TRISG            /* 0xBF886180 */
  .extern TRISGCLR         /* 0xBF886184 */
  .extern TRISGSET         /* 0xBF886188 */
  .extern TRISGINV         /* 0xBF88618C */
  .extern PORTG            /* 0xBF886190 */
  .extern PORTGCLR         /* 0xBF886194 */
  .extern PORTGSET         /* 0xBF886198 */
  .extern PORTGINV         /* 0xBF88619C */
  .extern LATG             /* 0xBF8861A0 */
  .extern LATGCLR          /* 0xBF8861A4 */
  .extern LATGSET          /* 0xBF8861A8 */
  .extern LATGINV          /* 0xBF8861AC */
  .extern ODCG             /* 0xBF8861B0 */
  .extern ODCGCLR          /* 0xBF8861B4 */
  .extern ODCGSET          /* 0xBF8861B8 */
  .extern ODCGINV          /* 0xBF8861BC */
  .extern CNCON            /* 0xBF8861C0 */
  .extern CNCONCLR         /* 0xBF8861C4 */
  .extern CNCONSET         /* 0xBF8861C8 */
  .extern CNCONINV         /* 0xBF8861CC */
  .extern CNEN             /* 0xBF8861D0 */
  .extern CNENCLR          /* 0xBF8861D4 */
  .extern CNENSET          /* 0xBF8861D8 */
  .extern CNENINV          /* 0xBF8861DC */
  .extern CNPUE            /* 0xBF8861E0 */
  .extern CNPUECLR         /* 0xBF8861E4 */
  .extern CNPUESET         /* 0xBF8861E8 */
  .extern CNPUEINV         /* 0xBF8861EC */
  .extern ETHCON1          /* 0xBF889000 */
  .extern ETHCON1CLR       /* 0xBF889004 */
  .extern ETHCON1SET       /* 0xBF889008 */
  .extern ETHCON1INV       /* 0xBF88900C */
  .extern ETHCON2          /* 0xBF889010 */
  .extern ETHCON2CLR       /* 0xBF889014 */
  .extern ETHCON2SET       /* 0xBF889018 */
  .extern ETHCON2INV       /* 0xBF88901C */
  .extern ETHTXST          /* 0xBF889020 */
  .extern ETHTXSTCLR       /* 0xBF889024 */
  .extern ETHTXSTSET       /* 0xBF889028 */
  .extern ETHTXSTINV       /* 0xBF88902C */
  .extern ETHRXST          /* 0xBF889030 */
  .extern ETHRXSTCLR       /* 0xBF889034 */
  .extern ETHRXSTSET       /* 0xBF889038 */
  .extern ETHRXSTINV       /* 0xBF88903C */
  .extern ETHHT0           /* 0xBF889040 */
  .extern ETHHT0CLR        /* 0xBF889044 */
  .extern ETHHT0SET        /* 0xBF889048 */
  .extern ETHHT0INV        /* 0xBF88904C */
  .extern ETHHT1           /* 0xBF889050 */
  .extern ETHHT1CLR        /* 0xBF889054 */
  .extern ETHHT1SET        /* 0xBF889058 */
  .extern ETHHT1INV        /* 0xBF88905C */
  .extern ETHPMM0          /* 0xBF889060 */
  .extern ETHPMM0CLR       /* 0xBF889064 */
  .extern ETHPMM0SET       /* 0xBF889068 */
  .extern ETHPMM0INV       /* 0xBF88906C */
  .extern ETHPMM1          /* 0xBF889070 */
  .extern ETHPMM1CLR       /* 0xBF889074 */
  .extern ETHPMM1SET       /* 0xBF889078 */
  .extern ETHPMM1INV       /* 0xBF88907C */
  .extern ETHPMCS          /* 0xBF889080 */
  .extern ETHPMCSCLR       /* 0xBF889084 */
  .extern ETHPMCSSET       /* 0xBF889088 */
  .extern ETHPMCSINV       /* 0xBF88908C */
  .extern ETHPMO           /* 0xBF889090 */
  .extern ETHPMOCLR        /* 0xBF889094 */
  .extern ETHPMOSET        /* 0xBF889098 */
  .extern ETHPMOINV        /* 0xBF88909C */
  .extern ETHRXFC          /* 0xBF8890A0 */
  .extern ETHRXFCCLR       /* 0xBF8890A4 */
  .extern ETHRXFCSET       /* 0xBF8890A8 */
  .extern ETHRXFCINV       /* 0xBF8890AC */
  .extern ETHRXWM          /* 0xBF8890B0 */
  .extern ETHRXWMCLR       /* 0xBF8890B4 */
  .extern ETHRXWMSET       /* 0xBF8890B8 */
  .extern ETHRXWMINV       /* 0xBF8890BC */
  .extern ETHIEN           /* 0xBF8890C0 */
  .extern ETHIENCLR        /* 0xBF8890C4 */
  .extern ETHIENSET        /* 0xBF8890C8 */
  .extern ETHIENINV        /* 0xBF8890CC */
  .extern ETHIRQ           /* 0xBF8890D0 */
  .extern ETHIRQCLR        /* 0xBF8890D4 */
  .extern ETHIRQSET        /* 0xBF8890D8 */
  .extern ETHIRQINV        /* 0xBF8890DC */
  .extern ETHSTAT          /* 0xBF8890E0 */
  .extern ETHSTATCLR       /* 0xBF8890E4 */
  .extern ETHSTATSET       /* 0xBF8890E8 */
  .extern ETHSTATINV       /* 0xBF8890EC */
  .extern ETHRXOVFLOW      /* 0xBF889100 */
  .extern ETHRXOVFLOWCLR   /* 0xBF889104 */
  .extern ETHRXOVFLOWSET   /* 0xBF889108 */
  .extern ETHRXOVFLOWINV   /* 0xBF88910C */
  .extern ETHFRMTXOK       /* 0xBF889110 */
  .extern ETHFRMTXOKCLR    /* 0xBF889114 */
  .extern ETHFRMTXOKSET    /* 0xBF889118 */
  .extern ETHFRMTXOKINV    /* 0xBF88911C */
  .extern ETHSCOLFRM       /* 0xBF889120 */
  .extern ETHSCOLFRMCLR    /* 0xBF889124 */
  .extern ETHSCOLFRMSET    /* 0xBF889128 */
  .extern ETHSCOLFRMINV    /* 0xBF88912C */
  .extern ETHMCOLFRM       /* 0xBF889130 */
  .extern ETHMCOLFRMCLR    /* 0xBF889134 */
  .extern ETHMCOLFRMSET    /* 0xBF889138 */
  .extern ETHMCOLFRMINV    /* 0xBF88913C */
  .extern ETHFRMRXOK       /* 0xBF889140 */
  .extern ETHFRMRXOKCLR    /* 0xBF889144 */
  .extern ETHFRMRXOKSET    /* 0xBF889148 */
  .extern ETHFRMRXOKINV    /* 0xBF88914C */
  .extern ETHFCSERR        /* 0xBF889150 */
  .extern ETHFCSERRCLR     /* 0xBF889154 */
  .extern ETHFCSERRSET     /* 0xBF889158 */
  .extern ETHFCSERRINV     /* 0xBF88915C */
  .extern ETHALGNERR       /* 0xBF889160 */
  .extern ETHALGNERRCLR    /* 0xBF889164 */
  .extern ETHALGNERRSET    /* 0xBF889168 */
  .extern ETHALGNERRINV    /* 0xBF88916C */
  .extern EMAC1CFG1        /* 0xBF889200 */
  .extern EMACxCFG1        /* 0xBF889200 */
  .extern EMAC1CFG1CLR     /* 0xBF889204 */
  .extern EMACxCFG1CLR     /* 0xBF889204 */
  .extern EMAC1CFG1SET     /* 0xBF889208 */
  .extern EMACxCFG1SET     /* 0xBF889208 */
  .extern EMAC1CFG1INV     /* 0xBF88920C */
  .extern EMACxCFG1INV     /* 0xBF88920C */
  .extern EMAC1CFG2        /* 0xBF889210 */
  .extern EMACxCFG2        /* 0xBF889210 */
  .extern EMAC1CFG2CLR     /* 0xBF889214 */
  .extern EMACxCFG2CLR     /* 0xBF889214 */
  .extern EMAC1CFG2SET     /* 0xBF889218 */
  .extern EMACxCFG2SET     /* 0xBF889218 */
  .extern EMAC1CFG2INV     /* 0xBF88921C */
  .extern EMACxCFG2INV     /* 0xBF88921C */
  .extern EMAC1IPGT        /* 0xBF889220 */
  .extern EMACxIPGT        /* 0xBF889220 */
  .extern EMAC1IPGTCLR     /* 0xBF889224 */
  .extern EMACxIPGTCLR     /* 0xBF889224 */
  .extern EMAC1IPGTSET     /* 0xBF889228 */
  .extern EMACxIPGTSET     /* 0xBF889228 */
  .extern EMAC1IPGTINV     /* 0xBF88922C */
  .extern EMACxIPGTINV     /* 0xBF88922C */
  .extern EMAC1IPGR        /* 0xBF889230 */
  .extern EMACxIPGR        /* 0xBF889230 */
  .extern EMAC1IPGRCLR     /* 0xBF889234 */
  .extern EMACxIPGRCLR     /* 0xBF889234 */
  .extern EMAC1IPGRSET     /* 0xBF889238 */
  .extern EMACxIPGRSET     /* 0xBF889238 */
  .extern EMAC1IPGRINV     /* 0xBF88923C */
  .extern EMACxIPGRINV     /* 0xBF88923C */
  .extern EMAC1CLRT        /* 0xBF889240 */
  .extern EMACxCLRT        /* 0xBF889240 */
  .extern EMAC1CLRTCLR     /* 0xBF889244 */
  .extern EMACxCLRTCLR     /* 0xBF889244 */
  .extern EMAC1CLRTSET     /* 0xBF889248 */
  .extern EMACxCLRTSET     /* 0xBF889248 */
  .extern EMAC1CLRTINV     /* 0xBF88924C */
  .extern EMACxCLRTINV     /* 0xBF88924C */
  .extern EMAC1MAXF        /* 0xBF889250 */
  .extern EMACxMAXF        /* 0xBF889250 */
  .extern EMAC1MAXFCLR     /* 0xBF889254 */
  .extern EMACxMAXFCLR     /* 0xBF889254 */
  .extern EMAC1MAXFSET     /* 0xBF889258 */
  .extern EMACxMAXFSET     /* 0xBF889258 */
  .extern EMAC1MAXFINV     /* 0xBF88925C */
  .extern EMACxMAXFINV     /* 0xBF88925C */
  .extern EMAC1SUPP        /* 0xBF889260 */
  .extern EMACxSUPP        /* 0xBF889260 */
  .extern EMAC1SUPPCLR     /* 0xBF889264 */
  .extern EMACxSUPPCLR     /* 0xBF889264 */
  .extern EMAC1SUPPSET     /* 0xBF889268 */
  .extern EMACxSUPPSET     /* 0xBF889268 */
  .extern EMAC1SUPPINV     /* 0xBF88926C */
  .extern EMACxSUPPINV     /* 0xBF88926C */
  .extern EMAC1TEST        /* 0xBF889270 */
  .extern EMACxTEST        /* 0xBF889270 */
  .extern EMAC1TESTCLR     /* 0xBF889274 */
  .extern EMACxTESTCLR     /* 0xBF889274 */
  .extern EMAC1TESTSET     /* 0xBF889278 */
  .extern EMACxTESTSET     /* 0xBF889278 */
  .extern EMAC1TESTINV     /* 0xBF88927C */
  .extern EMACxTESTINV     /* 0xBF88927C */
  .extern EMAC1MCFG        /* 0xBF889280 */
  .extern EMACxMCFG        /* 0xBF889280 */
  .extern EMAC1MCFGCLR     /* 0xBF889284 */
  .extern EMACxMCFGCLR     /* 0xBF889284 */
  .extern EMAC1MCFGSET     /* 0xBF889288 */
  .extern EMACxMCFGSET     /* 0xBF889288 */
  .extern EMAC1MCFGINV     /* 0xBF88928C */
  .extern EMACxMCFGINV     /* 0xBF88928C */
  .extern EMAC1MCMD        /* 0xBF889290 */
  .extern EMACxMCMD        /* 0xBF889290 */
  .extern EMAC1MCMDCLR     /* 0xBF889294 */
  .extern EMACxMCMDCLR     /* 0xBF889294 */
  .extern EMAC1MCMDSET     /* 0xBF889298 */
  .extern EMACxMCMDSET     /* 0xBF889298 */
  .extern EMAC1MCMDINV     /* 0xBF88929C */
  .extern EMACxMCMDINV     /* 0xBF88929C */
  .extern EMAC1MADR        /* 0xBF8892A0 */
  .extern EMACxMADR        /* 0xBF8892A0 */
  .extern EMAC1MADRCLR     /* 0xBF8892A4 */
  .extern EMACxMADRCLR     /* 0xBF8892A4 */
  .extern EMAC1MADRSET     /* 0xBF8892A8 */
  .extern EMACxMADRSET     /* 0xBF8892A8 */
  .extern EMAC1MADRINV     /* 0xBF8892AC */
  .extern EMACxMADRINV     /* 0xBF8892AC */
  .extern EMAC1MWTD        /* 0xBF8892B0 */
  .extern EMACxMWTD        /* 0xBF8892B0 */
  .extern EMAC1MWTDCLR     /* 0xBF8892B4 */
  .extern EMACxMWTDCLR     /* 0xBF8892B4 */
  .extern EMAC1MWTDSET     /* 0xBF8892B8 */
  .extern EMACxMWTDSET     /* 0xBF8892B8 */
  .extern EMAC1MWTDINV     /* 0xBF8892BC */
  .extern EMACxMWTDINV     /* 0xBF8892BC */
  .extern EMAC1MRDD        /* 0xBF8892C0 */
  .extern EMACxMRDD        /* 0xBF8892C0 */
  .extern EMAC1MRDDCLR     /* 0xBF8892C4 */
  .extern EMACxMRDDCLR     /* 0xBF8892C4 */
  .extern EMAC1MRDDSET     /* 0xBF8892C8 */
  .extern EMACxMRDDSET     /* 0xBF8892C8 */
  .extern EMAC1MRDDINV     /* 0xBF8892CC */
  .extern EMACxMRDDINV     /* 0xBF8892CC */
  .extern EMAC1MIND        /* 0xBF8892D0 */
  .extern EMACxMIND        /* 0xBF8892D0 */
  .extern EMAC1MINDCLR     /* 0xBF8892D4 */
  .extern EMACxMINDCLR     /* 0xBF8892D4 */
  .extern EMAC1MINDSET     /* 0xBF8892D8 */
  .extern EMACxMINDSET     /* 0xBF8892D8 */
  .extern EMAC1MINDINV     /* 0xBF8892DC */
  .extern EMACxMINDINV     /* 0xBF8892DC */
  .extern EMAC1SA0         /* 0xBF889300 */
  .extern EMACxSA0         /* 0xBF889300 */
  .extern EMAC1SA0CLR      /* 0xBF889304 */
  .extern EMACxSA0CLR      /* 0xBF889304 */
  .extern EMAC1SA0SET      /* 0xBF889308 */
  .extern EMACxSA0SET      /* 0xBF889308 */
  .extern EMAC1SA0INV      /* 0xBF88930C */
  .extern EMACxSA0INV      /* 0xBF88930C */
  .extern EMAC1SA1         /* 0xBF889310 */
  .extern EMACxSA1         /* 0xBF889310 */
  .extern EMAC1SA1CLR      /* 0xBF889314 */
  .extern EMACxSA1CLR      /* 0xBF889314 */
  .extern EMAC1SA1SET      /* 0xBF889318 */
  .extern EMACxSA1SET      /* 0xBF889318 */
  .extern EMAC1SA1INV      /* 0xBF88931C */
  .extern EMACxSA1INV      /* 0xBF88931C */
  .extern EMAC1SA2         /* 0xBF889320 */
  .extern EMACxSA2         /* 0xBF889320 */
  .extern EMAC1SA2CLR      /* 0xBF889324 */
  .extern EMACxSA2CLR      /* 0xBF889324 */
  .extern EMAC1SA2SET      /* 0xBF889328 */
  .extern EMACxSA2SET      /* 0xBF889328 */
  .extern EMAC1SA2INV      /* 0xBF88932C */
  .extern EMACxSA2INV      /* 0xBF88932C */
  .extern DEVCFG3          /* 0xBFC02FF0 */
  .extern DEVCFG2          /* 0xBFC02FF4 */
  .extern DEVCFG1          /* 0xBFC02FF8 */
  .extern DEVCFG0          /* 0xBFC02FFC */
#else
#error Unknown language!
#endif

#define _WDTCON_WDTCLR_POSITION                  0x00000000
#define _WDTCON_WDTCLR_MASK                      0x00000001
#define _WDTCON_WDTCLR_LENGTH                    0x00000001

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

#define _I2C3CON_SEN_POSITION                    0x00000000
#define _I2C3CON_SEN_MASK                        0x00000001
#define _I2C3CON_SEN_LENGTH                      0x00000001

#define _I2C3CON_RSEN_POSITION                   0x00000001
#define _I2C3CON_RSEN_MASK                       0x00000002
#define _I2C3CON_RSEN_LENGTH                     0x00000001

#define _I2C3CON_PEN_POSITION                    0x00000002
#define _I2C3CON_PEN_MASK                        0x00000004
#define _I2C3CON_PEN_LENGTH                      0x00000001

#define _I2C3CON_RCEN_POSITION                   0x00000003
#define _I2C3CON_RCEN_MASK                       0x00000008
#define _I2C3CON_RCEN_LENGTH                     0x00000001

#define _I2C3CON_ACKEN_POSITION                  0x00000004
#define _I2C3CON_ACKEN_MASK                      0x00000010
#define _I2C3CON_ACKEN_LENGTH                    0x00000001

#define _I2C3CON_ACKDT_POSITION                  0x00000005
#define _I2C3CON_ACKDT_MASK                      0x00000020
#define _I2C3CON_ACKDT_LENGTH                    0x00000001

#define _I2C3CON_STREN_POSITION                  0x00000006
#define _I2C3CON_STREN_MASK                      0x00000040
#define _I2C3CON_STREN_LENGTH                    0x00000001

#define _I2C3CON_GCEN_POSITION                   0x00000007
#define _I2C3CON_GCEN_MASK                       0x00000080
#define _I2C3CON_GCEN_LENGTH                     0x00000001

#define _I2C3CON_SMEN_POSITION                   0x00000008
#define _I2C3CON_SMEN_MASK                       0x00000100
#define _I2C3CON_SMEN_LENGTH                     0x00000001

#define _I2C3CON_DISSLW_POSITION                 0x00000009
#define _I2C3CON_DISSLW_MASK                     0x00000200
#define _I2C3CON_DISSLW_LENGTH                   0x00000001

#define _I2C3CON_A10M_POSITION                   0x0000000A
#define _I2C3CON_A10M_MASK                       0x00000400
#define _I2C3CON_A10M_LENGTH                     0x00000001

#define _I2C3CON_STRICT_POSITION                 0x0000000B
#define _I2C3CON_STRICT_MASK                     0x00000800
#define _I2C3CON_STRICT_LENGTH                   0x00000001

#define _I2C3CON_SCLREL_POSITION                 0x0000000C
#define _I2C3CON_SCLREL_MASK                     0x00001000
#define _I2C3CON_SCLREL_LENGTH                   0x00000001

#define _I2C3CON_SIDL_POSITION                   0x0000000D
#define _I2C3CON_SIDL_MASK                       0x00002000
#define _I2C3CON_SIDL_LENGTH                     0x00000001

#define _I2C3CON_ON_POSITION                     0x0000000F
#define _I2C3CON_ON_MASK                         0x00008000
#define _I2C3CON_ON_LENGTH                       0x00000001

#define _I2C3CON_IPMIEN_POSITION                 0x0000000B
#define _I2C3CON_IPMIEN_MASK                     0x00000800
#define _I2C3CON_IPMIEN_LENGTH                   0x00000001

#define _I2C3CON_I2CSIDL_POSITION                0x0000000D
#define _I2C3CON_I2CSIDL_MASK                    0x00002000
#define _I2C3CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C3CON_I2CEN_POSITION                  0x0000000F
#define _I2C3CON_I2CEN_MASK                      0x00008000
#define _I2C3CON_I2CEN_LENGTH                    0x00000001

#define _I2C3CON_w_POSITION                      0x00000000
#define _I2C3CON_w_MASK                          0xFFFFFFFF
#define _I2C3CON_w_LENGTH                        0x00000020

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

#define _I2C3STAT_TBF_POSITION                   0x00000000
#define _I2C3STAT_TBF_MASK                       0x00000001
#define _I2C3STAT_TBF_LENGTH                     0x00000001

#define _I2C3STAT_RBF_POSITION                   0x00000001
#define _I2C3STAT_RBF_MASK                       0x00000002
#define _I2C3STAT_RBF_LENGTH                     0x00000001

#define _I2C3STAT_R_W_POSITION                   0x00000002
#define _I2C3STAT_R_W_MASK                       0x00000004
#define _I2C3STAT_R_W_LENGTH                     0x00000001

#define _I2C3STAT_S_POSITION                     0x00000003
#define _I2C3STAT_S_MASK                         0x00000008
#define _I2C3STAT_S_LENGTH                       0x00000001

#define _I2C3STAT_P_POSITION                     0x00000004
#define _I2C3STAT_P_MASK                         0x00000010
#define _I2C3STAT_P_LENGTH                       0x00000001

#define _I2C3STAT_D_A_POSITION                   0x00000005
#define _I2C3STAT_D_A_MASK                       0x00000020
#define _I2C3STAT_D_A_LENGTH                     0x00000001

#define _I2C3STAT_I2COV_POSITION                 0x00000006
#define _I2C3STAT_I2COV_MASK                     0x00000040
#define _I2C3STAT_I2COV_LENGTH                   0x00000001

#define _I2C3STAT_IWCOL_POSITION                 0x00000007
#define _I2C3STAT_IWCOL_MASK                     0x00000080
#define _I2C3STAT_IWCOL_LENGTH                   0x00000001

#define _I2C3STAT_ADD10_POSITION                 0x00000008
#define _I2C3STAT_ADD10_MASK                     0x00000100
#define _I2C3STAT_ADD10_LENGTH                   0x00000001

#define _I2C3STAT_GCSTAT_POSITION                0x00000009
#define _I2C3STAT_GCSTAT_MASK                    0x00000200
#define _I2C3STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C3STAT_BCL_POSITION                   0x0000000A
#define _I2C3STAT_BCL_MASK                       0x00000400
#define _I2C3STAT_BCL_LENGTH                     0x00000001

#define _I2C3STAT_TRSTAT_POSITION                0x0000000E
#define _I2C3STAT_TRSTAT_MASK                    0x00004000
#define _I2C3STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C3STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C3STAT_ACKSTAT_MASK                   0x00008000
#define _I2C3STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C3STAT_I2CPOV_POSITION                0x00000006
#define _I2C3STAT_I2CPOV_MASK                    0x00000040
#define _I2C3STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C3STAT_w_POSITION                     0x00000000
#define _I2C3STAT_w_MASK                         0xFFFFFFFF
#define _I2C3STAT_w_LENGTH                       0x00000020

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

#define _I2C4CON_SEN_POSITION                    0x00000000
#define _I2C4CON_SEN_MASK                        0x00000001
#define _I2C4CON_SEN_LENGTH                      0x00000001

#define _I2C4CON_RSEN_POSITION                   0x00000001
#define _I2C4CON_RSEN_MASK                       0x00000002
#define _I2C4CON_RSEN_LENGTH                     0x00000001

#define _I2C4CON_PEN_POSITION                    0x00000002
#define _I2C4CON_PEN_MASK                        0x00000004
#define _I2C4CON_PEN_LENGTH                      0x00000001

#define _I2C4CON_RCEN_POSITION                   0x00000003
#define _I2C4CON_RCEN_MASK                       0x00000008
#define _I2C4CON_RCEN_LENGTH                     0x00000001

#define _I2C4CON_ACKEN_POSITION                  0x00000004
#define _I2C4CON_ACKEN_MASK                      0x00000010
#define _I2C4CON_ACKEN_LENGTH                    0x00000001

#define _I2C4CON_ACKDT_POSITION                  0x00000005
#define _I2C4CON_ACKDT_MASK                      0x00000020
#define _I2C4CON_ACKDT_LENGTH                    0x00000001

#define _I2C4CON_STREN_POSITION                  0x00000006
#define _I2C4CON_STREN_MASK                      0x00000040
#define _I2C4CON_STREN_LENGTH                    0x00000001

#define _I2C4CON_GCEN_POSITION                   0x00000007
#define _I2C4CON_GCEN_MASK                       0x00000080
#define _I2C4CON_GCEN_LENGTH                     0x00000001

#define _I2C4CON_SMEN_POSITION                   0x00000008
#define _I2C4CON_SMEN_MASK                       0x00000100
#define _I2C4CON_SMEN_LENGTH                     0x00000001

#define _I2C4CON_DISSLW_POSITION                 0x00000009
#define _I2C4CON_DISSLW_MASK                     0x00000200
#define _I2C4CON_DISSLW_LENGTH                   0x00000001

#define _I2C4CON_A10M_POSITION                   0x0000000A
#define _I2C4CON_A10M_MASK                       0x00000400
#define _I2C4CON_A10M_LENGTH                     0x00000001

#define _I2C4CON_STRICT_POSITION                 0x0000000B
#define _I2C4CON_STRICT_MASK                     0x00000800
#define _I2C4CON_STRICT_LENGTH                   0x00000001

#define _I2C4CON_SCLREL_POSITION                 0x0000000C
#define _I2C4CON_SCLREL_MASK                     0x00001000
#define _I2C4CON_SCLREL_LENGTH                   0x00000001

#define _I2C4CON_SIDL_POSITION                   0x0000000D
#define _I2C4CON_SIDL_MASK                       0x00002000
#define _I2C4CON_SIDL_LENGTH                     0x00000001

#define _I2C4CON_ON_POSITION                     0x0000000F
#define _I2C4CON_ON_MASK                         0x00008000
#define _I2C4CON_ON_LENGTH                       0x00000001

#define _I2C4CON_IPMIEN_POSITION                 0x0000000B
#define _I2C4CON_IPMIEN_MASK                     0x00000800
#define _I2C4CON_IPMIEN_LENGTH                   0x00000001

#define _I2C4CON_I2CSIDL_POSITION                0x0000000D
#define _I2C4CON_I2CSIDL_MASK                    0x00002000
#define _I2C4CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C4CON_I2CEN_POSITION                  0x0000000F
#define _I2C4CON_I2CEN_MASK                      0x00008000
#define _I2C4CON_I2CEN_LENGTH                    0x00000001

#define _I2C4CON_w_POSITION                      0x00000000
#define _I2C4CON_w_MASK                          0xFFFFFFFF
#define _I2C4CON_w_LENGTH                        0x00000020

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

#define _I2C4STAT_TBF_POSITION                   0x00000000
#define _I2C4STAT_TBF_MASK                       0x00000001
#define _I2C4STAT_TBF_LENGTH                     0x00000001

#define _I2C4STAT_RBF_POSITION                   0x00000001
#define _I2C4STAT_RBF_MASK                       0x00000002
#define _I2C4STAT_RBF_LENGTH                     0x00000001

#define _I2C4STAT_R_W_POSITION                   0x00000002
#define _I2C4STAT_R_W_MASK                       0x00000004
#define _I2C4STAT_R_W_LENGTH                     0x00000001

#define _I2C4STAT_S_POSITION                     0x00000003
#define _I2C4STAT_S_MASK                         0x00000008
#define _I2C4STAT_S_LENGTH                       0x00000001

#define _I2C4STAT_P_POSITION                     0x00000004
#define _I2C4STAT_P_MASK                         0x00000010
#define _I2C4STAT_P_LENGTH                       0x00000001

#define _I2C4STAT_D_A_POSITION                   0x00000005
#define _I2C4STAT_D_A_MASK                       0x00000020
#define _I2C4STAT_D_A_LENGTH                     0x00000001

#define _I2C4STAT_I2COV_POSITION                 0x00000006
#define _I2C4STAT_I2COV_MASK                     0x00000040
#define _I2C4STAT_I2COV_LENGTH                   0x00000001

#define _I2C4STAT_IWCOL_POSITION                 0x00000007
#define _I2C4STAT_IWCOL_MASK                     0x00000080
#define _I2C4STAT_IWCOL_LENGTH                   0x00000001

#define _I2C4STAT_ADD10_POSITION                 0x00000008
#define _I2C4STAT_ADD10_MASK                     0x00000100
#define _I2C4STAT_ADD10_LENGTH                   0x00000001

#define _I2C4STAT_GCSTAT_POSITION                0x00000009
#define _I2C4STAT_GCSTAT_MASK                    0x00000200
#define _I2C4STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C4STAT_BCL_POSITION                   0x0000000A
#define _I2C4STAT_BCL_MASK                       0x00000400
#define _I2C4STAT_BCL_LENGTH                     0x00000001

#define _I2C4STAT_TRSTAT_POSITION                0x0000000E
#define _I2C4STAT_TRSTAT_MASK                    0x00004000
#define _I2C4STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C4STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C4STAT_ACKSTAT_MASK                   0x00008000
#define _I2C4STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C4STAT_I2CPOV_POSITION                0x00000006
#define _I2C4STAT_I2CPOV_MASK                    0x00000040
#define _I2C4STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C4STAT_w_POSITION                     0x00000000
#define _I2C4STAT_w_MASK                         0xFFFFFFFF
#define _I2C4STAT_w_LENGTH                       0x00000020

#define _I2C3ACON_SEN_POSITION                   0x00000000
#define _I2C3ACON_SEN_MASK                       0x00000001
#define _I2C3ACON_SEN_LENGTH                     0x00000001

#define _I2C3ACON_RSEN_POSITION                  0x00000001
#define _I2C3ACON_RSEN_MASK                      0x00000002
#define _I2C3ACON_RSEN_LENGTH                    0x00000001

#define _I2C3ACON_PEN_POSITION                   0x00000002
#define _I2C3ACON_PEN_MASK                       0x00000004
#define _I2C3ACON_PEN_LENGTH                     0x00000001

#define _I2C3ACON_RCEN_POSITION                  0x00000003
#define _I2C3ACON_RCEN_MASK                      0x00000008
#define _I2C3ACON_RCEN_LENGTH                    0x00000001

#define _I2C3ACON_ACKEN_POSITION                 0x00000004
#define _I2C3ACON_ACKEN_MASK                     0x00000010
#define _I2C3ACON_ACKEN_LENGTH                   0x00000001

#define _I2C3ACON_ACKDT_POSITION                 0x00000005
#define _I2C3ACON_ACKDT_MASK                     0x00000020
#define _I2C3ACON_ACKDT_LENGTH                   0x00000001

#define _I2C3ACON_STREN_POSITION                 0x00000006
#define _I2C3ACON_STREN_MASK                     0x00000040
#define _I2C3ACON_STREN_LENGTH                   0x00000001

#define _I2C3ACON_GCEN_POSITION                  0x00000007
#define _I2C3ACON_GCEN_MASK                      0x00000080
#define _I2C3ACON_GCEN_LENGTH                    0x00000001

#define _I2C3ACON_SMEN_POSITION                  0x00000008
#define _I2C3ACON_SMEN_MASK                      0x00000100
#define _I2C3ACON_SMEN_LENGTH                    0x00000001

#define _I2C3ACON_DISSLW_POSITION                0x00000009
#define _I2C3ACON_DISSLW_MASK                    0x00000200
#define _I2C3ACON_DISSLW_LENGTH                  0x00000001

#define _I2C3ACON_A10M_POSITION                  0x0000000A
#define _I2C3ACON_A10M_MASK                      0x00000400
#define _I2C3ACON_A10M_LENGTH                    0x00000001

#define _I2C3ACON_STRICT_POSITION                0x0000000B
#define _I2C3ACON_STRICT_MASK                    0x00000800
#define _I2C3ACON_STRICT_LENGTH                  0x00000001

#define _I2C3ACON_SCLREL_POSITION                0x0000000C
#define _I2C3ACON_SCLREL_MASK                    0x00001000
#define _I2C3ACON_SCLREL_LENGTH                  0x00000001

#define _I2C3ACON_SIDL_POSITION                  0x0000000D
#define _I2C3ACON_SIDL_MASK                      0x00002000
#define _I2C3ACON_SIDL_LENGTH                    0x00000001

#define _I2C3ACON_ON_POSITION                    0x0000000F
#define _I2C3ACON_ON_MASK                        0x00008000
#define _I2C3ACON_ON_LENGTH                      0x00000001

#define _I2C3ACON_IPMIEN_POSITION                0x0000000B
#define _I2C3ACON_IPMIEN_MASK                    0x00000800
#define _I2C3ACON_IPMIEN_LENGTH                  0x00000001

#define _I2C3ACON_I2CSIDL_POSITION               0x0000000D
#define _I2C3ACON_I2CSIDL_MASK                   0x00002000
#define _I2C3ACON_I2CSIDL_LENGTH                 0x00000001

#define _I2C3ACON_I2CEN_POSITION                 0x0000000F
#define _I2C3ACON_I2CEN_MASK                     0x00008000
#define _I2C3ACON_I2CEN_LENGTH                   0x00000001

#define _I2C3ACON_w_POSITION                     0x00000000
#define _I2C3ACON_w_MASK                         0xFFFFFFFF
#define _I2C3ACON_w_LENGTH                       0x00000020

#define _I2C5CON_SEN_POSITION                    0x00000000
#define _I2C5CON_SEN_MASK                        0x00000001
#define _I2C5CON_SEN_LENGTH                      0x00000001

#define _I2C5CON_RSEN_POSITION                   0x00000001
#define _I2C5CON_RSEN_MASK                       0x00000002
#define _I2C5CON_RSEN_LENGTH                     0x00000001

#define _I2C5CON_PEN_POSITION                    0x00000002
#define _I2C5CON_PEN_MASK                        0x00000004
#define _I2C5CON_PEN_LENGTH                      0x00000001

#define _I2C5CON_RCEN_POSITION                   0x00000003
#define _I2C5CON_RCEN_MASK                       0x00000008
#define _I2C5CON_RCEN_LENGTH                     0x00000001

#define _I2C5CON_ACKEN_POSITION                  0x00000004
#define _I2C5CON_ACKEN_MASK                      0x00000010
#define _I2C5CON_ACKEN_LENGTH                    0x00000001

#define _I2C5CON_ACKDT_POSITION                  0x00000005
#define _I2C5CON_ACKDT_MASK                      0x00000020
#define _I2C5CON_ACKDT_LENGTH                    0x00000001

#define _I2C5CON_STREN_POSITION                  0x00000006
#define _I2C5CON_STREN_MASK                      0x00000040
#define _I2C5CON_STREN_LENGTH                    0x00000001

#define _I2C5CON_GCEN_POSITION                   0x00000007
#define _I2C5CON_GCEN_MASK                       0x00000080
#define _I2C5CON_GCEN_LENGTH                     0x00000001

#define _I2C5CON_SMEN_POSITION                   0x00000008
#define _I2C5CON_SMEN_MASK                       0x00000100
#define _I2C5CON_SMEN_LENGTH                     0x00000001

#define _I2C5CON_DISSLW_POSITION                 0x00000009
#define _I2C5CON_DISSLW_MASK                     0x00000200
#define _I2C5CON_DISSLW_LENGTH                   0x00000001

#define _I2C5CON_A10M_POSITION                   0x0000000A
#define _I2C5CON_A10M_MASK                       0x00000400
#define _I2C5CON_A10M_LENGTH                     0x00000001

#define _I2C5CON_STRICT_POSITION                 0x0000000B
#define _I2C5CON_STRICT_MASK                     0x00000800
#define _I2C5CON_STRICT_LENGTH                   0x00000001

#define _I2C5CON_SCLREL_POSITION                 0x0000000C
#define _I2C5CON_SCLREL_MASK                     0x00001000
#define _I2C5CON_SCLREL_LENGTH                   0x00000001

#define _I2C5CON_SIDL_POSITION                   0x0000000D
#define _I2C5CON_SIDL_MASK                       0x00002000
#define _I2C5CON_SIDL_LENGTH                     0x00000001

#define _I2C5CON_ON_POSITION                     0x0000000F
#define _I2C5CON_ON_MASK                         0x00008000
#define _I2C5CON_ON_LENGTH                       0x00000001

#define _I2C5CON_IPMIEN_POSITION                 0x0000000B
#define _I2C5CON_IPMIEN_MASK                     0x00000800
#define _I2C5CON_IPMIEN_LENGTH                   0x00000001

#define _I2C5CON_I2CSIDL_POSITION                0x0000000D
#define _I2C5CON_I2CSIDL_MASK                    0x00002000
#define _I2C5CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C5CON_I2CEN_POSITION                  0x0000000F
#define _I2C5CON_I2CEN_MASK                      0x00008000
#define _I2C5CON_I2CEN_LENGTH                    0x00000001

#define _I2C5CON_w_POSITION                      0x00000000
#define _I2C5CON_w_MASK                          0xFFFFFFFF
#define _I2C5CON_w_LENGTH                        0x00000020

#define _I2C3ASTAT_TBF_POSITION                  0x00000000
#define _I2C3ASTAT_TBF_MASK                      0x00000001
#define _I2C3ASTAT_TBF_LENGTH                    0x00000001

#define _I2C3ASTAT_RBF_POSITION                  0x00000001
#define _I2C3ASTAT_RBF_MASK                      0x00000002
#define _I2C3ASTAT_RBF_LENGTH                    0x00000001

#define _I2C3ASTAT_R_W_POSITION                  0x00000002
#define _I2C3ASTAT_R_W_MASK                      0x00000004
#define _I2C3ASTAT_R_W_LENGTH                    0x00000001

#define _I2C3ASTAT_S_POSITION                    0x00000003
#define _I2C3ASTAT_S_MASK                        0x00000008
#define _I2C3ASTAT_S_LENGTH                      0x00000001

#define _I2C3ASTAT_P_POSITION                    0x00000004
#define _I2C3ASTAT_P_MASK                        0x00000010
#define _I2C3ASTAT_P_LENGTH                      0x00000001

#define _I2C3ASTAT_D_A_POSITION                  0x00000005
#define _I2C3ASTAT_D_A_MASK                      0x00000020
#define _I2C3ASTAT_D_A_LENGTH                    0x00000001

#define _I2C3ASTAT_I2COV_POSITION                0x00000006
#define _I2C3ASTAT_I2COV_MASK                    0x00000040
#define _I2C3ASTAT_I2COV_LENGTH                  0x00000001

#define _I2C3ASTAT_IWCOL_POSITION                0x00000007
#define _I2C3ASTAT_IWCOL_MASK                    0x00000080
#define _I2C3ASTAT_IWCOL_LENGTH                  0x00000001

#define _I2C3ASTAT_ADD10_POSITION                0x00000008
#define _I2C3ASTAT_ADD10_MASK                    0x00000100
#define _I2C3ASTAT_ADD10_LENGTH                  0x00000001

#define _I2C3ASTAT_GCSTAT_POSITION               0x00000009
#define _I2C3ASTAT_GCSTAT_MASK                   0x00000200
#define _I2C3ASTAT_GCSTAT_LENGTH                 0x00000001

#define _I2C3ASTAT_BCL_POSITION                  0x0000000A
#define _I2C3ASTAT_BCL_MASK                      0x00000400
#define _I2C3ASTAT_BCL_LENGTH                    0x00000001

#define _I2C3ASTAT_TRSTAT_POSITION               0x0000000E
#define _I2C3ASTAT_TRSTAT_MASK                   0x00004000
#define _I2C3ASTAT_TRSTAT_LENGTH                 0x00000001

#define _I2C3ASTAT_ACKSTAT_POSITION              0x0000000F
#define _I2C3ASTAT_ACKSTAT_MASK                  0x00008000
#define _I2C3ASTAT_ACKSTAT_LENGTH                0x00000001

#define _I2C3ASTAT_I2CPOV_POSITION               0x00000006
#define _I2C3ASTAT_I2CPOV_MASK                   0x00000040
#define _I2C3ASTAT_I2CPOV_LENGTH                 0x00000001

#define _I2C3ASTAT_w_POSITION                    0x00000000
#define _I2C3ASTAT_w_MASK                        0xFFFFFFFF
#define _I2C3ASTAT_w_LENGTH                      0x00000020

#define _I2C5STAT_TBF_POSITION                   0x00000000
#define _I2C5STAT_TBF_MASK                       0x00000001
#define _I2C5STAT_TBF_LENGTH                     0x00000001

#define _I2C5STAT_RBF_POSITION                   0x00000001
#define _I2C5STAT_RBF_MASK                       0x00000002
#define _I2C5STAT_RBF_LENGTH                     0x00000001

#define _I2C5STAT_R_W_POSITION                   0x00000002
#define _I2C5STAT_R_W_MASK                       0x00000004
#define _I2C5STAT_R_W_LENGTH                     0x00000001

#define _I2C5STAT_S_POSITION                     0x00000003
#define _I2C5STAT_S_MASK                         0x00000008
#define _I2C5STAT_S_LENGTH                       0x00000001

#define _I2C5STAT_P_POSITION                     0x00000004
#define _I2C5STAT_P_MASK                         0x00000010
#define _I2C5STAT_P_LENGTH                       0x00000001

#define _I2C5STAT_D_A_POSITION                   0x00000005
#define _I2C5STAT_D_A_MASK                       0x00000020
#define _I2C5STAT_D_A_LENGTH                     0x00000001

#define _I2C5STAT_I2COV_POSITION                 0x00000006
#define _I2C5STAT_I2COV_MASK                     0x00000040
#define _I2C5STAT_I2COV_LENGTH                   0x00000001

#define _I2C5STAT_IWCOL_POSITION                 0x00000007
#define _I2C5STAT_IWCOL_MASK                     0x00000080
#define _I2C5STAT_IWCOL_LENGTH                   0x00000001

#define _I2C5STAT_ADD10_POSITION                 0x00000008
#define _I2C5STAT_ADD10_MASK                     0x00000100
#define _I2C5STAT_ADD10_LENGTH                   0x00000001

#define _I2C5STAT_GCSTAT_POSITION                0x00000009
#define _I2C5STAT_GCSTAT_MASK                    0x00000200
#define _I2C5STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C5STAT_BCL_POSITION                   0x0000000A
#define _I2C5STAT_BCL_MASK                       0x00000400
#define _I2C5STAT_BCL_LENGTH                     0x00000001

#define _I2C5STAT_TRSTAT_POSITION                0x0000000E
#define _I2C5STAT_TRSTAT_MASK                    0x00004000
#define _I2C5STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C5STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C5STAT_ACKSTAT_MASK                   0x00008000
#define _I2C5STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C5STAT_I2CPOV_POSITION                0x00000006
#define _I2C5STAT_I2CPOV_MASK                    0x00000040
#define _I2C5STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C5STAT_w_POSITION                     0x00000000
#define _I2C5STAT_w_MASK                         0xFFFFFFFF
#define _I2C5STAT_w_LENGTH                       0x00000020

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

#define _SPI1ACON_SRXISEL_POSITION               0x00000000
#define _SPI1ACON_SRXISEL_MASK                   0x00000003
#define _SPI1ACON_SRXISEL_LENGTH                 0x00000002

#define _SPI1ACON_STXISEL_POSITION               0x00000002
#define _SPI1ACON_STXISEL_MASK                   0x0000000C
#define _SPI1ACON_STXISEL_LENGTH                 0x00000002

#define _SPI1ACON_MSTEN_POSITION                 0x00000005
#define _SPI1ACON_MSTEN_MASK                     0x00000020
#define _SPI1ACON_MSTEN_LENGTH                   0x00000001

#define _SPI1ACON_CKP_POSITION                   0x00000006
#define _SPI1ACON_CKP_MASK                       0x00000040
#define _SPI1ACON_CKP_LENGTH                     0x00000001

#define _SPI1ACON_SSEN_POSITION                  0x00000007
#define _SPI1ACON_SSEN_MASK                      0x00000080
#define _SPI1ACON_SSEN_LENGTH                    0x00000001

#define _SPI1ACON_CKE_POSITION                   0x00000008
#define _SPI1ACON_CKE_MASK                       0x00000100
#define _SPI1ACON_CKE_LENGTH                     0x00000001

#define _SPI1ACON_SMP_POSITION                   0x00000009
#define _SPI1ACON_SMP_MASK                       0x00000200
#define _SPI1ACON_SMP_LENGTH                     0x00000001

#define _SPI1ACON_MODE16_POSITION                0x0000000A
#define _SPI1ACON_MODE16_MASK                    0x00000400
#define _SPI1ACON_MODE16_LENGTH                  0x00000001

#define _SPI1ACON_MODE32_POSITION                0x0000000B
#define _SPI1ACON_MODE32_MASK                    0x00000800
#define _SPI1ACON_MODE32_LENGTH                  0x00000001

#define _SPI1ACON_DISSDO_POSITION                0x0000000C
#define _SPI1ACON_DISSDO_MASK                    0x00001000
#define _SPI1ACON_DISSDO_LENGTH                  0x00000001

#define _SPI1ACON_SIDL_POSITION                  0x0000000D
#define _SPI1ACON_SIDL_MASK                      0x00002000
#define _SPI1ACON_SIDL_LENGTH                    0x00000001

#define _SPI1ACON_ON_POSITION                    0x0000000F
#define _SPI1ACON_ON_MASK                        0x00008000
#define _SPI1ACON_ON_LENGTH                      0x00000001

#define _SPI1ACON_ENHBUF_POSITION                0x00000010
#define _SPI1ACON_ENHBUF_MASK                    0x00010000
#define _SPI1ACON_ENHBUF_LENGTH                  0x00000001

#define _SPI1ACON_SPIFE_POSITION                 0x00000011
#define _SPI1ACON_SPIFE_MASK                     0x00020000
#define _SPI1ACON_SPIFE_LENGTH                   0x00000001

#define _SPI1ACON_FRMCNT_POSITION                0x00000018
#define _SPI1ACON_FRMCNT_MASK                    0x07000000
#define _SPI1ACON_FRMCNT_LENGTH                  0x00000003

#define _SPI1ACON_FRMSYPW_POSITION               0x0000001B
#define _SPI1ACON_FRMSYPW_MASK                   0x08000000
#define _SPI1ACON_FRMSYPW_LENGTH                 0x00000001

#define _SPI1ACON_MSSEN_POSITION                 0x0000001C
#define _SPI1ACON_MSSEN_MASK                     0x10000000
#define _SPI1ACON_MSSEN_LENGTH                   0x00000001

#define _SPI1ACON_FRMPOL_POSITION                0x0000001D
#define _SPI1ACON_FRMPOL_MASK                    0x20000000
#define _SPI1ACON_FRMPOL_LENGTH                  0x00000001

#define _SPI1ACON_FRMSYNC_POSITION               0x0000001E
#define _SPI1ACON_FRMSYNC_MASK                   0x40000000
#define _SPI1ACON_FRMSYNC_LENGTH                 0x00000001

#define _SPI1ACON_FRMEN_POSITION                 0x0000001F
#define _SPI1ACON_FRMEN_MASK                     0x80000000
#define _SPI1ACON_FRMEN_LENGTH                   0x00000001

#define _SPI1ACON_w_POSITION                     0x00000000
#define _SPI1ACON_w_MASK                         0xFFFFFFFF
#define _SPI1ACON_w_LENGTH                       0x00000020

#define _SPI3CON_SRXISEL_POSITION                0x00000000
#define _SPI3CON_SRXISEL_MASK                    0x00000003
#define _SPI3CON_SRXISEL_LENGTH                  0x00000002

#define _SPI3CON_STXISEL_POSITION                0x00000002
#define _SPI3CON_STXISEL_MASK                    0x0000000C
#define _SPI3CON_STXISEL_LENGTH                  0x00000002

#define _SPI3CON_MSTEN_POSITION                  0x00000005
#define _SPI3CON_MSTEN_MASK                      0x00000020
#define _SPI3CON_MSTEN_LENGTH                    0x00000001

#define _SPI3CON_CKP_POSITION                    0x00000006
#define _SPI3CON_CKP_MASK                        0x00000040
#define _SPI3CON_CKP_LENGTH                      0x00000001

#define _SPI3CON_SSEN_POSITION                   0x00000007
#define _SPI3CON_SSEN_MASK                       0x00000080
#define _SPI3CON_SSEN_LENGTH                     0x00000001

#define _SPI3CON_CKE_POSITION                    0x00000008
#define _SPI3CON_CKE_MASK                        0x00000100
#define _SPI3CON_CKE_LENGTH                      0x00000001

#define _SPI3CON_SMP_POSITION                    0x00000009
#define _SPI3CON_SMP_MASK                        0x00000200
#define _SPI3CON_SMP_LENGTH                      0x00000001

#define _SPI3CON_MODE16_POSITION                 0x0000000A
#define _SPI3CON_MODE16_MASK                     0x00000400
#define _SPI3CON_MODE16_LENGTH                   0x00000001

#define _SPI3CON_MODE32_POSITION                 0x0000000B
#define _SPI3CON_MODE32_MASK                     0x00000800
#define _SPI3CON_MODE32_LENGTH                   0x00000001

#define _SPI3CON_DISSDO_POSITION                 0x0000000C
#define _SPI3CON_DISSDO_MASK                     0x00001000
#define _SPI3CON_DISSDO_LENGTH                   0x00000001

#define _SPI3CON_SIDL_POSITION                   0x0000000D
#define _SPI3CON_SIDL_MASK                       0x00002000
#define _SPI3CON_SIDL_LENGTH                     0x00000001

#define _SPI3CON_ON_POSITION                     0x0000000F
#define _SPI3CON_ON_MASK                         0x00008000
#define _SPI3CON_ON_LENGTH                       0x00000001

#define _SPI3CON_ENHBUF_POSITION                 0x00000010
#define _SPI3CON_ENHBUF_MASK                     0x00010000
#define _SPI3CON_ENHBUF_LENGTH                   0x00000001

#define _SPI3CON_SPIFE_POSITION                  0x00000011
#define _SPI3CON_SPIFE_MASK                      0x00020000
#define _SPI3CON_SPIFE_LENGTH                    0x00000001

#define _SPI3CON_FRMCNT_POSITION                 0x00000018
#define _SPI3CON_FRMCNT_MASK                     0x07000000
#define _SPI3CON_FRMCNT_LENGTH                   0x00000003

#define _SPI3CON_FRMSYPW_POSITION                0x0000001B
#define _SPI3CON_FRMSYPW_MASK                    0x08000000
#define _SPI3CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI3CON_MSSEN_POSITION                  0x0000001C
#define _SPI3CON_MSSEN_MASK                      0x10000000
#define _SPI3CON_MSSEN_LENGTH                    0x00000001

#define _SPI3CON_FRMPOL_POSITION                 0x0000001D
#define _SPI3CON_FRMPOL_MASK                     0x20000000
#define _SPI3CON_FRMPOL_LENGTH                   0x00000001

#define _SPI3CON_FRMSYNC_POSITION                0x0000001E
#define _SPI3CON_FRMSYNC_MASK                    0x40000000
#define _SPI3CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI3CON_FRMEN_POSITION                  0x0000001F
#define _SPI3CON_FRMEN_MASK                      0x80000000
#define _SPI3CON_FRMEN_LENGTH                    0x00000001

#define _SPI3CON_w_POSITION                      0x00000000
#define _SPI3CON_w_MASK                          0xFFFFFFFF
#define _SPI3CON_w_LENGTH                        0x00000020

#define _SPI1ASTAT_SPIRBF_POSITION               0x00000000
#define _SPI1ASTAT_SPIRBF_MASK                   0x00000001
#define _SPI1ASTAT_SPIRBF_LENGTH                 0x00000001

#define _SPI1ASTAT_SPITBF_POSITION               0x00000001
#define _SPI1ASTAT_SPITBF_MASK                   0x00000002
#define _SPI1ASTAT_SPITBF_LENGTH                 0x00000001

#define _SPI1ASTAT_SPITBE_POSITION               0x00000003
#define _SPI1ASTAT_SPITBE_MASK                   0x00000008
#define _SPI1ASTAT_SPITBE_LENGTH                 0x00000001

#define _SPI1ASTAT_SPIRBE_POSITION               0x00000005
#define _SPI1ASTAT_SPIRBE_MASK                   0x00000020
#define _SPI1ASTAT_SPIRBE_LENGTH                 0x00000001

#define _SPI1ASTAT_SPIROV_POSITION               0x00000006
#define _SPI1ASTAT_SPIROV_MASK                   0x00000040
#define _SPI1ASTAT_SPIROV_LENGTH                 0x00000001

#define _SPI1ASTAT_SRMT_POSITION                 0x00000007
#define _SPI1ASTAT_SRMT_MASK                     0x00000080
#define _SPI1ASTAT_SRMT_LENGTH                   0x00000001

#define _SPI1ASTAT_SPITUR_POSITION               0x00000008
#define _SPI1ASTAT_SPITUR_MASK                   0x00000100
#define _SPI1ASTAT_SPITUR_LENGTH                 0x00000001

#define _SPI1ASTAT_SPIBUSY_POSITION              0x0000000B
#define _SPI1ASTAT_SPIBUSY_MASK                  0x00000800
#define _SPI1ASTAT_SPIBUSY_LENGTH                0x00000001

#define _SPI1ASTAT_TXBUFELM_POSITION             0x00000010
#define _SPI1ASTAT_TXBUFELM_MASK                 0x001F0000
#define _SPI1ASTAT_TXBUFELM_LENGTH               0x00000005

#define _SPI1ASTAT_RXBUFELM_POSITION             0x00000018
#define _SPI1ASTAT_RXBUFELM_MASK                 0x1F000000
#define _SPI1ASTAT_RXBUFELM_LENGTH               0x00000005

#define _SPI1ASTAT_w_POSITION                    0x00000000
#define _SPI1ASTAT_w_MASK                        0xFFFFFFFF
#define _SPI1ASTAT_w_LENGTH                      0x00000020

#define _SPI3STAT_SPIRBF_POSITION                0x00000000
#define _SPI3STAT_SPIRBF_MASK                    0x00000001
#define _SPI3STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI3STAT_SPITBF_POSITION                0x00000001
#define _SPI3STAT_SPITBF_MASK                    0x00000002
#define _SPI3STAT_SPITBF_LENGTH                  0x00000001

#define _SPI3STAT_SPITBE_POSITION                0x00000003
#define _SPI3STAT_SPITBE_MASK                    0x00000008
#define _SPI3STAT_SPITBE_LENGTH                  0x00000001

#define _SPI3STAT_SPIRBE_POSITION                0x00000005
#define _SPI3STAT_SPIRBE_MASK                    0x00000020
#define _SPI3STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI3STAT_SPIROV_POSITION                0x00000006
#define _SPI3STAT_SPIROV_MASK                    0x00000040
#define _SPI3STAT_SPIROV_LENGTH                  0x00000001

#define _SPI3STAT_SRMT_POSITION                  0x00000007
#define _SPI3STAT_SRMT_MASK                      0x00000080
#define _SPI3STAT_SRMT_LENGTH                    0x00000001

#define _SPI3STAT_SPITUR_POSITION                0x00000008
#define _SPI3STAT_SPITUR_MASK                    0x00000100
#define _SPI3STAT_SPITUR_LENGTH                  0x00000001

#define _SPI3STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI3STAT_SPIBUSY_MASK                   0x00000800
#define _SPI3STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI3STAT_TXBUFELM_POSITION              0x00000010
#define _SPI3STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI3STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI3STAT_RXBUFELM_POSITION              0x00000018
#define _SPI3STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI3STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI3STAT_w_POSITION                     0x00000000
#define _SPI3STAT_w_MASK                         0xFFFFFFFF
#define _SPI3STAT_w_LENGTH                       0x00000020

#define _SPI2ACON_SRXISEL_POSITION               0x00000000
#define _SPI2ACON_SRXISEL_MASK                   0x00000003
#define _SPI2ACON_SRXISEL_LENGTH                 0x00000002

#define _SPI2ACON_STXISEL_POSITION               0x00000002
#define _SPI2ACON_STXISEL_MASK                   0x0000000C
#define _SPI2ACON_STXISEL_LENGTH                 0x00000002

#define _SPI2ACON_MSTEN_POSITION                 0x00000005
#define _SPI2ACON_MSTEN_MASK                     0x00000020
#define _SPI2ACON_MSTEN_LENGTH                   0x00000001

#define _SPI2ACON_CKP_POSITION                   0x00000006
#define _SPI2ACON_CKP_MASK                       0x00000040
#define _SPI2ACON_CKP_LENGTH                     0x00000001

#define _SPI2ACON_SSEN_POSITION                  0x00000007
#define _SPI2ACON_SSEN_MASK                      0x00000080
#define _SPI2ACON_SSEN_LENGTH                    0x00000001

#define _SPI2ACON_CKE_POSITION                   0x00000008
#define _SPI2ACON_CKE_MASK                       0x00000100
#define _SPI2ACON_CKE_LENGTH                     0x00000001

#define _SPI2ACON_SMP_POSITION                   0x00000009
#define _SPI2ACON_SMP_MASK                       0x00000200
#define _SPI2ACON_SMP_LENGTH                     0x00000001

#define _SPI2ACON_MODE16_POSITION                0x0000000A
#define _SPI2ACON_MODE16_MASK                    0x00000400
#define _SPI2ACON_MODE16_LENGTH                  0x00000001

#define _SPI2ACON_MODE32_POSITION                0x0000000B
#define _SPI2ACON_MODE32_MASK                    0x00000800
#define _SPI2ACON_MODE32_LENGTH                  0x00000001

#define _SPI2ACON_DISSDO_POSITION                0x0000000C
#define _SPI2ACON_DISSDO_MASK                    0x00001000
#define _SPI2ACON_DISSDO_LENGTH                  0x00000001

#define _SPI2ACON_SIDL_POSITION                  0x0000000D
#define _SPI2ACON_SIDL_MASK                      0x00002000
#define _SPI2ACON_SIDL_LENGTH                    0x00000001

#define _SPI2ACON_ON_POSITION                    0x0000000F
#define _SPI2ACON_ON_MASK                        0x00008000
#define _SPI2ACON_ON_LENGTH                      0x00000001

#define _SPI2ACON_ENHBUF_POSITION                0x00000010
#define _SPI2ACON_ENHBUF_MASK                    0x00010000
#define _SPI2ACON_ENHBUF_LENGTH                  0x00000001

#define _SPI2ACON_SPIFE_POSITION                 0x00000011
#define _SPI2ACON_SPIFE_MASK                     0x00020000
#define _SPI2ACON_SPIFE_LENGTH                   0x00000001

#define _SPI2ACON_FRMCNT_POSITION                0x00000018
#define _SPI2ACON_FRMCNT_MASK                    0x07000000
#define _SPI2ACON_FRMCNT_LENGTH                  0x00000003

#define _SPI2ACON_FRMSYPW_POSITION               0x0000001B
#define _SPI2ACON_FRMSYPW_MASK                   0x08000000
#define _SPI2ACON_FRMSYPW_LENGTH                 0x00000001

#define _SPI2ACON_MSSEN_POSITION                 0x0000001C
#define _SPI2ACON_MSSEN_MASK                     0x10000000
#define _SPI2ACON_MSSEN_LENGTH                   0x00000001

#define _SPI2ACON_FRMPOL_POSITION                0x0000001D
#define _SPI2ACON_FRMPOL_MASK                    0x20000000
#define _SPI2ACON_FRMPOL_LENGTH                  0x00000001

#define _SPI2ACON_FRMSYNC_POSITION               0x0000001E
#define _SPI2ACON_FRMSYNC_MASK                   0x40000000
#define _SPI2ACON_FRMSYNC_LENGTH                 0x00000001

#define _SPI2ACON_FRMEN_POSITION                 0x0000001F
#define _SPI2ACON_FRMEN_MASK                     0x80000000
#define _SPI2ACON_FRMEN_LENGTH                   0x00000001

#define _SPI2ACON_w_POSITION                     0x00000000
#define _SPI2ACON_w_MASK                         0xFFFFFFFF
#define _SPI2ACON_w_LENGTH                       0x00000020

#define _SPI2CON_SRXISEL_POSITION                0x00000000
#define _SPI2CON_SRXISEL_MASK                    0x00000003
#define _SPI2CON_SRXISEL_LENGTH                  0x00000002

#define _SPI2CON_STXISEL_POSITION                0x00000002
#define _SPI2CON_STXISEL_MASK                    0x0000000C
#define _SPI2CON_STXISEL_LENGTH                  0x00000002

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

#define _SPI2ASTAT_SPIRBF_POSITION               0x00000000
#define _SPI2ASTAT_SPIRBF_MASK                   0x00000001
#define _SPI2ASTAT_SPIRBF_LENGTH                 0x00000001

#define _SPI2ASTAT_SPITBF_POSITION               0x00000001
#define _SPI2ASTAT_SPITBF_MASK                   0x00000002
#define _SPI2ASTAT_SPITBF_LENGTH                 0x00000001

#define _SPI2ASTAT_SPITBE_POSITION               0x00000003
#define _SPI2ASTAT_SPITBE_MASK                   0x00000008
#define _SPI2ASTAT_SPITBE_LENGTH                 0x00000001

#define _SPI2ASTAT_SPIRBE_POSITION               0x00000005
#define _SPI2ASTAT_SPIRBE_MASK                   0x00000020
#define _SPI2ASTAT_SPIRBE_LENGTH                 0x00000001

#define _SPI2ASTAT_SPIROV_POSITION               0x00000006
#define _SPI2ASTAT_SPIROV_MASK                   0x00000040
#define _SPI2ASTAT_SPIROV_LENGTH                 0x00000001

#define _SPI2ASTAT_SRMT_POSITION                 0x00000007
#define _SPI2ASTAT_SRMT_MASK                     0x00000080
#define _SPI2ASTAT_SRMT_LENGTH                   0x00000001

#define _SPI2ASTAT_SPITUR_POSITION               0x00000008
#define _SPI2ASTAT_SPITUR_MASK                   0x00000100
#define _SPI2ASTAT_SPITUR_LENGTH                 0x00000001

#define _SPI2ASTAT_SPIBUSY_POSITION              0x0000000B
#define _SPI2ASTAT_SPIBUSY_MASK                  0x00000800
#define _SPI2ASTAT_SPIBUSY_LENGTH                0x00000001

#define _SPI2ASTAT_TXBUFELM_POSITION             0x00000010
#define _SPI2ASTAT_TXBUFELM_MASK                 0x001F0000
#define _SPI2ASTAT_TXBUFELM_LENGTH               0x00000005

#define _SPI2ASTAT_RXBUFELM_POSITION             0x00000018
#define _SPI2ASTAT_RXBUFELM_MASK                 0x1F000000
#define _SPI2ASTAT_RXBUFELM_LENGTH               0x00000005

#define _SPI2ASTAT_w_POSITION                    0x00000000
#define _SPI2ASTAT_w_MASK                        0xFFFFFFFF
#define _SPI2ASTAT_w_LENGTH                      0x00000020

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

#define _SPI2STAT_TXBUFELM_POSITION              0x00000010
#define _SPI2STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI2STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_RXBUFELM_POSITION              0x00000018
#define _SPI2STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI2STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_w_POSITION                     0x00000000
#define _SPI2STAT_w_MASK                         0xFFFFFFFF
#define _SPI2STAT_w_LENGTH                       0x00000020

#define _SPI3ACON_SRXISEL_POSITION               0x00000000
#define _SPI3ACON_SRXISEL_MASK                   0x00000003
#define _SPI3ACON_SRXISEL_LENGTH                 0x00000002

#define _SPI3ACON_STXISEL_POSITION               0x00000002
#define _SPI3ACON_STXISEL_MASK                   0x0000000C
#define _SPI3ACON_STXISEL_LENGTH                 0x00000002

#define _SPI3ACON_MSTEN_POSITION                 0x00000005
#define _SPI3ACON_MSTEN_MASK                     0x00000020
#define _SPI3ACON_MSTEN_LENGTH                   0x00000001

#define _SPI3ACON_CKP_POSITION                   0x00000006
#define _SPI3ACON_CKP_MASK                       0x00000040
#define _SPI3ACON_CKP_LENGTH                     0x00000001

#define _SPI3ACON_SSEN_POSITION                  0x00000007
#define _SPI3ACON_SSEN_MASK                      0x00000080
#define _SPI3ACON_SSEN_LENGTH                    0x00000001

#define _SPI3ACON_CKE_POSITION                   0x00000008
#define _SPI3ACON_CKE_MASK                       0x00000100
#define _SPI3ACON_CKE_LENGTH                     0x00000001

#define _SPI3ACON_SMP_POSITION                   0x00000009
#define _SPI3ACON_SMP_MASK                       0x00000200
#define _SPI3ACON_SMP_LENGTH                     0x00000001

#define _SPI3ACON_MODE16_POSITION                0x0000000A
#define _SPI3ACON_MODE16_MASK                    0x00000400
#define _SPI3ACON_MODE16_LENGTH                  0x00000001

#define _SPI3ACON_MODE32_POSITION                0x0000000B
#define _SPI3ACON_MODE32_MASK                    0x00000800
#define _SPI3ACON_MODE32_LENGTH                  0x00000001

#define _SPI3ACON_DISSDO_POSITION                0x0000000C
#define _SPI3ACON_DISSDO_MASK                    0x00001000
#define _SPI3ACON_DISSDO_LENGTH                  0x00000001

#define _SPI3ACON_SIDL_POSITION                  0x0000000D
#define _SPI3ACON_SIDL_MASK                      0x00002000
#define _SPI3ACON_SIDL_LENGTH                    0x00000001

#define _SPI3ACON_ON_POSITION                    0x0000000F
#define _SPI3ACON_ON_MASK                        0x00008000
#define _SPI3ACON_ON_LENGTH                      0x00000001

#define _SPI3ACON_ENHBUF_POSITION                0x00000010
#define _SPI3ACON_ENHBUF_MASK                    0x00010000
#define _SPI3ACON_ENHBUF_LENGTH                  0x00000001

#define _SPI3ACON_SPIFE_POSITION                 0x00000011
#define _SPI3ACON_SPIFE_MASK                     0x00020000
#define _SPI3ACON_SPIFE_LENGTH                   0x00000001

#define _SPI3ACON_FRMCNT_POSITION                0x00000018
#define _SPI3ACON_FRMCNT_MASK                    0x07000000
#define _SPI3ACON_FRMCNT_LENGTH                  0x00000003

#define _SPI3ACON_FRMSYPW_POSITION               0x0000001B
#define _SPI3ACON_FRMSYPW_MASK                   0x08000000
#define _SPI3ACON_FRMSYPW_LENGTH                 0x00000001

#define _SPI3ACON_MSSEN_POSITION                 0x0000001C
#define _SPI3ACON_MSSEN_MASK                     0x10000000
#define _SPI3ACON_MSSEN_LENGTH                   0x00000001

#define _SPI3ACON_FRMPOL_POSITION                0x0000001D
#define _SPI3ACON_FRMPOL_MASK                    0x20000000
#define _SPI3ACON_FRMPOL_LENGTH                  0x00000001

#define _SPI3ACON_FRMSYNC_POSITION               0x0000001E
#define _SPI3ACON_FRMSYNC_MASK                   0x40000000
#define _SPI3ACON_FRMSYNC_LENGTH                 0x00000001

#define _SPI3ACON_FRMEN_POSITION                 0x0000001F
#define _SPI3ACON_FRMEN_MASK                     0x80000000
#define _SPI3ACON_FRMEN_LENGTH                   0x00000001

#define _SPI3ACON_w_POSITION                     0x00000000
#define _SPI3ACON_w_MASK                         0xFFFFFFFF
#define _SPI3ACON_w_LENGTH                       0x00000020

#define _SPI4CON_SRXISEL_POSITION                0x00000000
#define _SPI4CON_SRXISEL_MASK                    0x00000003
#define _SPI4CON_SRXISEL_LENGTH                  0x00000002

#define _SPI4CON_STXISEL_POSITION                0x00000002
#define _SPI4CON_STXISEL_MASK                    0x0000000C
#define _SPI4CON_STXISEL_LENGTH                  0x00000002

#define _SPI4CON_MSTEN_POSITION                  0x00000005
#define _SPI4CON_MSTEN_MASK                      0x00000020
#define _SPI4CON_MSTEN_LENGTH                    0x00000001

#define _SPI4CON_CKP_POSITION                    0x00000006
#define _SPI4CON_CKP_MASK                        0x00000040
#define _SPI4CON_CKP_LENGTH                      0x00000001

#define _SPI4CON_SSEN_POSITION                   0x00000007
#define _SPI4CON_SSEN_MASK                       0x00000080
#define _SPI4CON_SSEN_LENGTH                     0x00000001

#define _SPI4CON_CKE_POSITION                    0x00000008
#define _SPI4CON_CKE_MASK                        0x00000100
#define _SPI4CON_CKE_LENGTH                      0x00000001

#define _SPI4CON_SMP_POSITION                    0x00000009
#define _SPI4CON_SMP_MASK                        0x00000200
#define _SPI4CON_SMP_LENGTH                      0x00000001

#define _SPI4CON_MODE16_POSITION                 0x0000000A
#define _SPI4CON_MODE16_MASK                     0x00000400
#define _SPI4CON_MODE16_LENGTH                   0x00000001

#define _SPI4CON_MODE32_POSITION                 0x0000000B
#define _SPI4CON_MODE32_MASK                     0x00000800
#define _SPI4CON_MODE32_LENGTH                   0x00000001

#define _SPI4CON_DISSDO_POSITION                 0x0000000C
#define _SPI4CON_DISSDO_MASK                     0x00001000
#define _SPI4CON_DISSDO_LENGTH                   0x00000001

#define _SPI4CON_SIDL_POSITION                   0x0000000D
#define _SPI4CON_SIDL_MASK                       0x00002000
#define _SPI4CON_SIDL_LENGTH                     0x00000001

#define _SPI4CON_ON_POSITION                     0x0000000F
#define _SPI4CON_ON_MASK                         0x00008000
#define _SPI4CON_ON_LENGTH                       0x00000001

#define _SPI4CON_ENHBUF_POSITION                 0x00000010
#define _SPI4CON_ENHBUF_MASK                     0x00010000
#define _SPI4CON_ENHBUF_LENGTH                   0x00000001

#define _SPI4CON_SPIFE_POSITION                  0x00000011
#define _SPI4CON_SPIFE_MASK                      0x00020000
#define _SPI4CON_SPIFE_LENGTH                    0x00000001

#define _SPI4CON_FRMCNT_POSITION                 0x00000018
#define _SPI4CON_FRMCNT_MASK                     0x07000000
#define _SPI4CON_FRMCNT_LENGTH                   0x00000003

#define _SPI4CON_FRMSYPW_POSITION                0x0000001B
#define _SPI4CON_FRMSYPW_MASK                    0x08000000
#define _SPI4CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI4CON_MSSEN_POSITION                  0x0000001C
#define _SPI4CON_MSSEN_MASK                      0x10000000
#define _SPI4CON_MSSEN_LENGTH                    0x00000001

#define _SPI4CON_FRMPOL_POSITION                 0x0000001D
#define _SPI4CON_FRMPOL_MASK                     0x20000000
#define _SPI4CON_FRMPOL_LENGTH                   0x00000001

#define _SPI4CON_FRMSYNC_POSITION                0x0000001E
#define _SPI4CON_FRMSYNC_MASK                    0x40000000
#define _SPI4CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI4CON_FRMEN_POSITION                  0x0000001F
#define _SPI4CON_FRMEN_MASK                      0x80000000
#define _SPI4CON_FRMEN_LENGTH                    0x00000001

#define _SPI4CON_w_POSITION                      0x00000000
#define _SPI4CON_w_MASK                          0xFFFFFFFF
#define _SPI4CON_w_LENGTH                        0x00000020

#define _SPI3ASTAT_SPIRBF_POSITION               0x00000000
#define _SPI3ASTAT_SPIRBF_MASK                   0x00000001
#define _SPI3ASTAT_SPIRBF_LENGTH                 0x00000001

#define _SPI3ASTAT_SPITBF_POSITION               0x00000001
#define _SPI3ASTAT_SPITBF_MASK                   0x00000002
#define _SPI3ASTAT_SPITBF_LENGTH                 0x00000001

#define _SPI3ASTAT_SPITBE_POSITION               0x00000003
#define _SPI3ASTAT_SPITBE_MASK                   0x00000008
#define _SPI3ASTAT_SPITBE_LENGTH                 0x00000001

#define _SPI3ASTAT_SPIRBE_POSITION               0x00000005
#define _SPI3ASTAT_SPIRBE_MASK                   0x00000020
#define _SPI3ASTAT_SPIRBE_LENGTH                 0x00000001

#define _SPI3ASTAT_SPIROV_POSITION               0x00000006
#define _SPI3ASTAT_SPIROV_MASK                   0x00000040
#define _SPI3ASTAT_SPIROV_LENGTH                 0x00000001

#define _SPI3ASTAT_SRMT_POSITION                 0x00000007
#define _SPI3ASTAT_SRMT_MASK                     0x00000080
#define _SPI3ASTAT_SRMT_LENGTH                   0x00000001

#define _SPI3ASTAT_SPITUR_POSITION               0x00000008
#define _SPI3ASTAT_SPITUR_MASK                   0x00000100
#define _SPI3ASTAT_SPITUR_LENGTH                 0x00000001

#define _SPI3ASTAT_SPIBUSY_POSITION              0x0000000B
#define _SPI3ASTAT_SPIBUSY_MASK                  0x00000800
#define _SPI3ASTAT_SPIBUSY_LENGTH                0x00000001

#define _SPI3ASTAT_TXBUFELM_POSITION             0x00000010
#define _SPI3ASTAT_TXBUFELM_MASK                 0x001F0000
#define _SPI3ASTAT_TXBUFELM_LENGTH               0x00000005

#define _SPI3ASTAT_RXBUFELM_POSITION             0x00000018
#define _SPI3ASTAT_RXBUFELM_MASK                 0x1F000000
#define _SPI3ASTAT_RXBUFELM_LENGTH               0x00000005

#define _SPI3ASTAT_w_POSITION                    0x00000000
#define _SPI3ASTAT_w_MASK                        0xFFFFFFFF
#define _SPI3ASTAT_w_LENGTH                      0x00000020

#define _SPI4STAT_SPIRBF_POSITION                0x00000000
#define _SPI4STAT_SPIRBF_MASK                    0x00000001
#define _SPI4STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI4STAT_SPITBF_POSITION                0x00000001
#define _SPI4STAT_SPITBF_MASK                    0x00000002
#define _SPI4STAT_SPITBF_LENGTH                  0x00000001

#define _SPI4STAT_SPITBE_POSITION                0x00000003
#define _SPI4STAT_SPITBE_MASK                    0x00000008
#define _SPI4STAT_SPITBE_LENGTH                  0x00000001

#define _SPI4STAT_SPIRBE_POSITION                0x00000005
#define _SPI4STAT_SPIRBE_MASK                    0x00000020
#define _SPI4STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI4STAT_SPIROV_POSITION                0x00000006
#define _SPI4STAT_SPIROV_MASK                    0x00000040
#define _SPI4STAT_SPIROV_LENGTH                  0x00000001

#define _SPI4STAT_SRMT_POSITION                  0x00000007
#define _SPI4STAT_SRMT_MASK                      0x00000080
#define _SPI4STAT_SRMT_LENGTH                    0x00000001

#define _SPI4STAT_SPITUR_POSITION                0x00000008
#define _SPI4STAT_SPITUR_MASK                    0x00000100
#define _SPI4STAT_SPITUR_LENGTH                  0x00000001

#define _SPI4STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI4STAT_SPIBUSY_MASK                   0x00000800
#define _SPI4STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI4STAT_TXBUFELM_POSITION              0x00000010
#define _SPI4STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI4STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI4STAT_RXBUFELM_POSITION              0x00000018
#define _SPI4STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI4STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI4STAT_w_POSITION                     0x00000000
#define _SPI4STAT_w_MASK                         0xFFFFFFFF
#define _SPI4STAT_w_LENGTH                       0x00000020

#define _SPI1CON_SRXISEL_POSITION                0x00000000
#define _SPI1CON_SRXISEL_MASK                    0x00000003
#define _SPI1CON_SRXISEL_LENGTH                  0x00000002

#define _SPI1CON_STXISEL_POSITION                0x00000002
#define _SPI1CON_STXISEL_MASK                    0x0000000C
#define _SPI1CON_STXISEL_LENGTH                  0x00000002

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

#define _SPI1STAT_TXBUFELM_POSITION              0x00000010
#define _SPI1STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI1STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_RXBUFELM_POSITION              0x00000018
#define _SPI1STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI1STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_w_POSITION                     0x00000000
#define _SPI1STAT_w_MASK                         0xFFFFFFFF
#define _SPI1STAT_w_LENGTH                       0x00000020

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

#define _U1BMODE_STSEL_POSITION                  0x00000000
#define _U1BMODE_STSEL_MASK                      0x00000001
#define _U1BMODE_STSEL_LENGTH                    0x00000001

#define _U1BMODE_PDSEL_POSITION                  0x00000001
#define _U1BMODE_PDSEL_MASK                      0x00000006
#define _U1BMODE_PDSEL_LENGTH                    0x00000002

#define _U1BMODE_BRGH_POSITION                   0x00000003
#define _U1BMODE_BRGH_MASK                       0x00000008
#define _U1BMODE_BRGH_LENGTH                     0x00000001

#define _U1BMODE_RXINV_POSITION                  0x00000004
#define _U1BMODE_RXINV_MASK                      0x00000010
#define _U1BMODE_RXINV_LENGTH                    0x00000001

#define _U1BMODE_ABAUD_POSITION                  0x00000005
#define _U1BMODE_ABAUD_MASK                      0x00000020
#define _U1BMODE_ABAUD_LENGTH                    0x00000001

#define _U1BMODE_LPBACK_POSITION                 0x00000006
#define _U1BMODE_LPBACK_MASK                     0x00000040
#define _U1BMODE_LPBACK_LENGTH                   0x00000001

#define _U1BMODE_WAKE_POSITION                   0x00000007
#define _U1BMODE_WAKE_MASK                       0x00000080
#define _U1BMODE_WAKE_LENGTH                     0x00000001

#define _U1BMODE_IREN_POSITION                   0x0000000C
#define _U1BMODE_IREN_MASK                       0x00001000
#define _U1BMODE_IREN_LENGTH                     0x00000001

#define _U1BMODE_SIDL_POSITION                   0x0000000D
#define _U1BMODE_SIDL_MASK                       0x00002000
#define _U1BMODE_SIDL_LENGTH                     0x00000001

#define _U1BMODE_ON_POSITION                     0x0000000F
#define _U1BMODE_ON_MASK                         0x00008000
#define _U1BMODE_ON_LENGTH                       0x00000001

#define _U1BMODE_PDSEL0_POSITION                 0x00000001
#define _U1BMODE_PDSEL0_MASK                     0x00000002
#define _U1BMODE_PDSEL0_LENGTH                   0x00000001

#define _U1BMODE_PDSEL1_POSITION                 0x00000002
#define _U1BMODE_PDSEL1_MASK                     0x00000004
#define _U1BMODE_PDSEL1_LENGTH                   0x00000001

#define _U1BMODE_USIDL_POSITION                  0x0000000D
#define _U1BMODE_USIDL_MASK                      0x00002000
#define _U1BMODE_USIDL_LENGTH                    0x00000001

#define _U1BMODE_UARTEN_POSITION                 0x0000000F
#define _U1BMODE_UARTEN_MASK                     0x00008000
#define _U1BMODE_UARTEN_LENGTH                   0x00000001

#define _U1BMODE_w_POSITION                      0x00000000
#define _U1BMODE_w_MASK                          0xFFFFFFFF
#define _U1BMODE_w_LENGTH                        0x00000020

#define _U4MODE_STSEL_POSITION                   0x00000000
#define _U4MODE_STSEL_MASK                       0x00000001
#define _U4MODE_STSEL_LENGTH                     0x00000001

#define _U4MODE_PDSEL_POSITION                   0x00000001
#define _U4MODE_PDSEL_MASK                       0x00000006
#define _U4MODE_PDSEL_LENGTH                     0x00000002

#define _U4MODE_BRGH_POSITION                    0x00000003
#define _U4MODE_BRGH_MASK                        0x00000008
#define _U4MODE_BRGH_LENGTH                      0x00000001

#define _U4MODE_RXINV_POSITION                   0x00000004
#define _U4MODE_RXINV_MASK                       0x00000010
#define _U4MODE_RXINV_LENGTH                     0x00000001

#define _U4MODE_ABAUD_POSITION                   0x00000005
#define _U4MODE_ABAUD_MASK                       0x00000020
#define _U4MODE_ABAUD_LENGTH                     0x00000001

#define _U4MODE_LPBACK_POSITION                  0x00000006
#define _U4MODE_LPBACK_MASK                      0x00000040
#define _U4MODE_LPBACK_LENGTH                    0x00000001

#define _U4MODE_WAKE_POSITION                    0x00000007
#define _U4MODE_WAKE_MASK                        0x00000080
#define _U4MODE_WAKE_LENGTH                      0x00000001

#define _U4MODE_IREN_POSITION                    0x0000000C
#define _U4MODE_IREN_MASK                        0x00001000
#define _U4MODE_IREN_LENGTH                      0x00000001

#define _U4MODE_SIDL_POSITION                    0x0000000D
#define _U4MODE_SIDL_MASK                        0x00002000
#define _U4MODE_SIDL_LENGTH                      0x00000001

#define _U4MODE_ON_POSITION                      0x0000000F
#define _U4MODE_ON_MASK                          0x00008000
#define _U4MODE_ON_LENGTH                        0x00000001

#define _U4MODE_PDSEL0_POSITION                  0x00000001
#define _U4MODE_PDSEL0_MASK                      0x00000002
#define _U4MODE_PDSEL0_LENGTH                    0x00000001

#define _U4MODE_PDSEL1_POSITION                  0x00000002
#define _U4MODE_PDSEL1_MASK                      0x00000004
#define _U4MODE_PDSEL1_LENGTH                    0x00000001

#define _U4MODE_USIDL_POSITION                   0x0000000D
#define _U4MODE_USIDL_MASK                       0x00002000
#define _U4MODE_USIDL_LENGTH                     0x00000001

#define _U4MODE_UARTEN_POSITION                  0x0000000F
#define _U4MODE_UARTEN_MASK                      0x00008000
#define _U4MODE_UARTEN_LENGTH                    0x00000001

#define _U4MODE_w_POSITION                       0x00000000
#define _U4MODE_w_MASK                           0xFFFFFFFF
#define _U4MODE_w_LENGTH                         0x00000020

#define _U1BSTA_URXDA_POSITION                   0x00000000
#define _U1BSTA_URXDA_MASK                       0x00000001
#define _U1BSTA_URXDA_LENGTH                     0x00000001

#define _U1BSTA_OERR_POSITION                    0x00000001
#define _U1BSTA_OERR_MASK                        0x00000002
#define _U1BSTA_OERR_LENGTH                      0x00000001

#define _U1BSTA_FERR_POSITION                    0x00000002
#define _U1BSTA_FERR_MASK                        0x00000004
#define _U1BSTA_FERR_LENGTH                      0x00000001

#define _U1BSTA_PERR_POSITION                    0x00000003
#define _U1BSTA_PERR_MASK                        0x00000008
#define _U1BSTA_PERR_LENGTH                      0x00000001

#define _U1BSTA_RIDLE_POSITION                   0x00000004
#define _U1BSTA_RIDLE_MASK                       0x00000010
#define _U1BSTA_RIDLE_LENGTH                     0x00000001

#define _U1BSTA_ADDEN_POSITION                   0x00000005
#define _U1BSTA_ADDEN_MASK                       0x00000020
#define _U1BSTA_ADDEN_LENGTH                     0x00000001

#define _U1BSTA_URXISEL_POSITION                 0x00000006
#define _U1BSTA_URXISEL_MASK                     0x000000C0
#define _U1BSTA_URXISEL_LENGTH                   0x00000002

#define _U1BSTA_TRMT_POSITION                    0x00000008
#define _U1BSTA_TRMT_MASK                        0x00000100
#define _U1BSTA_TRMT_LENGTH                      0x00000001

#define _U1BSTA_UTXBF_POSITION                   0x00000009
#define _U1BSTA_UTXBF_MASK                       0x00000200
#define _U1BSTA_UTXBF_LENGTH                     0x00000001

#define _U1BSTA_UTXEN_POSITION                   0x0000000A
#define _U1BSTA_UTXEN_MASK                       0x00000400
#define _U1BSTA_UTXEN_LENGTH                     0x00000001

#define _U1BSTA_UTXBRK_POSITION                  0x0000000B
#define _U1BSTA_UTXBRK_MASK                      0x00000800
#define _U1BSTA_UTXBRK_LENGTH                    0x00000001

#define _U1BSTA_URXEN_POSITION                   0x0000000C
#define _U1BSTA_URXEN_MASK                       0x00001000
#define _U1BSTA_URXEN_LENGTH                     0x00000001

#define _U1BSTA_UTXINV_POSITION                  0x0000000D
#define _U1BSTA_UTXINV_MASK                      0x00002000
#define _U1BSTA_UTXINV_LENGTH                    0x00000001

#define _U1BSTA_UTXISEL_POSITION                 0x0000000E
#define _U1BSTA_UTXISEL_MASK                     0x0000C000
#define _U1BSTA_UTXISEL_LENGTH                   0x00000002

#define _U1BSTA_ADDR_POSITION                    0x00000010
#define _U1BSTA_ADDR_MASK                        0x00FF0000
#define _U1BSTA_ADDR_LENGTH                      0x00000008

#define _U1BSTA_ADM_EN_POSITION                  0x00000018
#define _U1BSTA_ADM_EN_MASK                      0x01000000
#define _U1BSTA_ADM_EN_LENGTH                    0x00000001

#define _U1BSTA_URXISEL0_POSITION                0x00000006
#define _U1BSTA_URXISEL0_MASK                    0x00000040
#define _U1BSTA_URXISEL0_LENGTH                  0x00000001

#define _U1BSTA_URXISEL1_POSITION                0x00000007
#define _U1BSTA_URXISEL1_MASK                    0x00000080
#define _U1BSTA_URXISEL1_LENGTH                  0x00000001

#define _U1BSTA_UTXISEL0_POSITION                0x0000000E
#define _U1BSTA_UTXISEL0_MASK                    0x00004000
#define _U1BSTA_UTXISEL0_LENGTH                  0x00000001

#define _U1BSTA_UTXISEL1_POSITION                0x0000000F
#define _U1BSTA_UTXISEL1_MASK                    0x00008000
#define _U1BSTA_UTXISEL1_LENGTH                  0x00000001

#define _U1BSTA_UTXSEL_POSITION                  0x0000000E
#define _U1BSTA_UTXSEL_MASK                      0x0000C000
#define _U1BSTA_UTXSEL_LENGTH                    0x00000002

#define _U1BSTA_w_POSITION                       0x00000000
#define _U1BSTA_w_MASK                           0xFFFFFFFF
#define _U1BSTA_w_LENGTH                         0x00000020

#define _U4STA_URXDA_POSITION                    0x00000000
#define _U4STA_URXDA_MASK                        0x00000001
#define _U4STA_URXDA_LENGTH                      0x00000001

#define _U4STA_OERR_POSITION                     0x00000001
#define _U4STA_OERR_MASK                         0x00000002
#define _U4STA_OERR_LENGTH                       0x00000001

#define _U4STA_FERR_POSITION                     0x00000002
#define _U4STA_FERR_MASK                         0x00000004
#define _U4STA_FERR_LENGTH                       0x00000001

#define _U4STA_PERR_POSITION                     0x00000003
#define _U4STA_PERR_MASK                         0x00000008
#define _U4STA_PERR_LENGTH                       0x00000001

#define _U4STA_RIDLE_POSITION                    0x00000004
#define _U4STA_RIDLE_MASK                        0x00000010
#define _U4STA_RIDLE_LENGTH                      0x00000001

#define _U4STA_ADDEN_POSITION                    0x00000005
#define _U4STA_ADDEN_MASK                        0x00000020
#define _U4STA_ADDEN_LENGTH                      0x00000001

#define _U4STA_URXISEL_POSITION                  0x00000006
#define _U4STA_URXISEL_MASK                      0x000000C0
#define _U4STA_URXISEL_LENGTH                    0x00000002

#define _U4STA_TRMT_POSITION                     0x00000008
#define _U4STA_TRMT_MASK                         0x00000100
#define _U4STA_TRMT_LENGTH                       0x00000001

#define _U4STA_UTXBF_POSITION                    0x00000009
#define _U4STA_UTXBF_MASK                        0x00000200
#define _U4STA_UTXBF_LENGTH                      0x00000001

#define _U4STA_UTXEN_POSITION                    0x0000000A
#define _U4STA_UTXEN_MASK                        0x00000400
#define _U4STA_UTXEN_LENGTH                      0x00000001

#define _U4STA_UTXBRK_POSITION                   0x0000000B
#define _U4STA_UTXBRK_MASK                       0x00000800
#define _U4STA_UTXBRK_LENGTH                     0x00000001

#define _U4STA_URXEN_POSITION                    0x0000000C
#define _U4STA_URXEN_MASK                        0x00001000
#define _U4STA_URXEN_LENGTH                      0x00000001

#define _U4STA_UTXINV_POSITION                   0x0000000D
#define _U4STA_UTXINV_MASK                       0x00002000
#define _U4STA_UTXINV_LENGTH                     0x00000001

#define _U4STA_UTXISEL_POSITION                  0x0000000E
#define _U4STA_UTXISEL_MASK                      0x0000C000
#define _U4STA_UTXISEL_LENGTH                    0x00000002

#define _U4STA_ADDR_POSITION                     0x00000010
#define _U4STA_ADDR_MASK                         0x00FF0000
#define _U4STA_ADDR_LENGTH                       0x00000008

#define _U4STA_ADM_EN_POSITION                   0x00000018
#define _U4STA_ADM_EN_MASK                       0x01000000
#define _U4STA_ADM_EN_LENGTH                     0x00000001

#define _U4STA_URXISEL0_POSITION                 0x00000006
#define _U4STA_URXISEL0_MASK                     0x00000040
#define _U4STA_URXISEL0_LENGTH                   0x00000001

#define _U4STA_URXISEL1_POSITION                 0x00000007
#define _U4STA_URXISEL1_MASK                     0x00000080
#define _U4STA_URXISEL1_LENGTH                   0x00000001

#define _U4STA_UTXISEL0_POSITION                 0x0000000E
#define _U4STA_UTXISEL0_MASK                     0x00004000
#define _U4STA_UTXISEL0_LENGTH                   0x00000001

#define _U4STA_UTXISEL1_POSITION                 0x0000000F
#define _U4STA_UTXISEL1_MASK                     0x00008000
#define _U4STA_UTXISEL1_LENGTH                   0x00000001

#define _U4STA_UTXSEL_POSITION                   0x0000000E
#define _U4STA_UTXSEL_MASK                       0x0000C000
#define _U4STA_UTXSEL_LENGTH                     0x00000002

#define _U4STA_w_POSITION                        0x00000000
#define _U4STA_w_MASK                            0xFFFFFFFF
#define _U4STA_w_LENGTH                          0x00000020

#define _U2AMODE_STSEL_POSITION                  0x00000000
#define _U2AMODE_STSEL_MASK                      0x00000001
#define _U2AMODE_STSEL_LENGTH                    0x00000001

#define _U2AMODE_PDSEL_POSITION                  0x00000001
#define _U2AMODE_PDSEL_MASK                      0x00000006
#define _U2AMODE_PDSEL_LENGTH                    0x00000002

#define _U2AMODE_BRGH_POSITION                   0x00000003
#define _U2AMODE_BRGH_MASK                       0x00000008
#define _U2AMODE_BRGH_LENGTH                     0x00000001

#define _U2AMODE_RXINV_POSITION                  0x00000004
#define _U2AMODE_RXINV_MASK                      0x00000010
#define _U2AMODE_RXINV_LENGTH                    0x00000001

#define _U2AMODE_ABAUD_POSITION                  0x00000005
#define _U2AMODE_ABAUD_MASK                      0x00000020
#define _U2AMODE_ABAUD_LENGTH                    0x00000001

#define _U2AMODE_LPBACK_POSITION                 0x00000006
#define _U2AMODE_LPBACK_MASK                     0x00000040
#define _U2AMODE_LPBACK_LENGTH                   0x00000001

#define _U2AMODE_WAKE_POSITION                   0x00000007
#define _U2AMODE_WAKE_MASK                       0x00000080
#define _U2AMODE_WAKE_LENGTH                     0x00000001

#define _U2AMODE_UEN_POSITION                    0x00000008
#define _U2AMODE_UEN_MASK                        0x00000300
#define _U2AMODE_UEN_LENGTH                      0x00000002

#define _U2AMODE_RTSMD_POSITION                  0x0000000B
#define _U2AMODE_RTSMD_MASK                      0x00000800
#define _U2AMODE_RTSMD_LENGTH                    0x00000001

#define _U2AMODE_IREN_POSITION                   0x0000000C
#define _U2AMODE_IREN_MASK                       0x00001000
#define _U2AMODE_IREN_LENGTH                     0x00000001

#define _U2AMODE_SIDL_POSITION                   0x0000000D
#define _U2AMODE_SIDL_MASK                       0x00002000
#define _U2AMODE_SIDL_LENGTH                     0x00000001

#define _U2AMODE_ON_POSITION                     0x0000000F
#define _U2AMODE_ON_MASK                         0x00008000
#define _U2AMODE_ON_LENGTH                       0x00000001

#define _U2AMODE_PDSEL0_POSITION                 0x00000001
#define _U2AMODE_PDSEL0_MASK                     0x00000002
#define _U2AMODE_PDSEL0_LENGTH                   0x00000001

#define _U2AMODE_PDSEL1_POSITION                 0x00000002
#define _U2AMODE_PDSEL1_MASK                     0x00000004
#define _U2AMODE_PDSEL1_LENGTH                   0x00000001

#define _U2AMODE_UEN0_POSITION                   0x00000008
#define _U2AMODE_UEN0_MASK                       0x00000100
#define _U2AMODE_UEN0_LENGTH                     0x00000001

#define _U2AMODE_UEN1_POSITION                   0x00000009
#define _U2AMODE_UEN1_MASK                       0x00000200
#define _U2AMODE_UEN1_LENGTH                     0x00000001

#define _U2AMODE_USIDL_POSITION                  0x0000000D
#define _U2AMODE_USIDL_MASK                      0x00002000
#define _U2AMODE_USIDL_LENGTH                    0x00000001

#define _U2AMODE_UARTEN_POSITION                 0x0000000F
#define _U2AMODE_UARTEN_MASK                     0x00008000
#define _U2AMODE_UARTEN_LENGTH                   0x00000001

#define _U2AMODE_w_POSITION                      0x00000000
#define _U2AMODE_w_MASK                          0xFFFFFFFF
#define _U2AMODE_w_LENGTH                        0x00000020

#define _U3MODE_STSEL_POSITION                   0x00000000
#define _U3MODE_STSEL_MASK                       0x00000001
#define _U3MODE_STSEL_LENGTH                     0x00000001

#define _U3MODE_PDSEL_POSITION                   0x00000001
#define _U3MODE_PDSEL_MASK                       0x00000006
#define _U3MODE_PDSEL_LENGTH                     0x00000002

#define _U3MODE_BRGH_POSITION                    0x00000003
#define _U3MODE_BRGH_MASK                        0x00000008
#define _U3MODE_BRGH_LENGTH                      0x00000001

#define _U3MODE_RXINV_POSITION                   0x00000004
#define _U3MODE_RXINV_MASK                       0x00000010
#define _U3MODE_RXINV_LENGTH                     0x00000001

#define _U3MODE_ABAUD_POSITION                   0x00000005
#define _U3MODE_ABAUD_MASK                       0x00000020
#define _U3MODE_ABAUD_LENGTH                     0x00000001

#define _U3MODE_LPBACK_POSITION                  0x00000006
#define _U3MODE_LPBACK_MASK                      0x00000040
#define _U3MODE_LPBACK_LENGTH                    0x00000001

#define _U3MODE_WAKE_POSITION                    0x00000007
#define _U3MODE_WAKE_MASK                        0x00000080
#define _U3MODE_WAKE_LENGTH                      0x00000001

#define _U3MODE_UEN_POSITION                     0x00000008
#define _U3MODE_UEN_MASK                         0x00000300
#define _U3MODE_UEN_LENGTH                       0x00000002

#define _U3MODE_RTSMD_POSITION                   0x0000000B
#define _U3MODE_RTSMD_MASK                       0x00000800
#define _U3MODE_RTSMD_LENGTH                     0x00000001

#define _U3MODE_IREN_POSITION                    0x0000000C
#define _U3MODE_IREN_MASK                        0x00001000
#define _U3MODE_IREN_LENGTH                      0x00000001

#define _U3MODE_SIDL_POSITION                    0x0000000D
#define _U3MODE_SIDL_MASK                        0x00002000
#define _U3MODE_SIDL_LENGTH                      0x00000001

#define _U3MODE_ON_POSITION                      0x0000000F
#define _U3MODE_ON_MASK                          0x00008000
#define _U3MODE_ON_LENGTH                        0x00000001

#define _U3MODE_PDSEL0_POSITION                  0x00000001
#define _U3MODE_PDSEL0_MASK                      0x00000002
#define _U3MODE_PDSEL0_LENGTH                    0x00000001

#define _U3MODE_PDSEL1_POSITION                  0x00000002
#define _U3MODE_PDSEL1_MASK                      0x00000004
#define _U3MODE_PDSEL1_LENGTH                    0x00000001

#define _U3MODE_UEN0_POSITION                    0x00000008
#define _U3MODE_UEN0_MASK                        0x00000100
#define _U3MODE_UEN0_LENGTH                      0x00000001

#define _U3MODE_UEN1_POSITION                    0x00000009
#define _U3MODE_UEN1_MASK                        0x00000200
#define _U3MODE_UEN1_LENGTH                      0x00000001

#define _U3MODE_USIDL_POSITION                   0x0000000D
#define _U3MODE_USIDL_MASK                       0x00002000
#define _U3MODE_USIDL_LENGTH                     0x00000001

#define _U3MODE_UARTEN_POSITION                  0x0000000F
#define _U3MODE_UARTEN_MASK                      0x00008000
#define _U3MODE_UARTEN_LENGTH                    0x00000001

#define _U3MODE_w_POSITION                       0x00000000
#define _U3MODE_w_MASK                           0xFFFFFFFF
#define _U3MODE_w_LENGTH                         0x00000020

#define _U2ASTA_URXDA_POSITION                   0x00000000
#define _U2ASTA_URXDA_MASK                       0x00000001
#define _U2ASTA_URXDA_LENGTH                     0x00000001

#define _U2ASTA_OERR_POSITION                    0x00000001
#define _U2ASTA_OERR_MASK                        0x00000002
#define _U2ASTA_OERR_LENGTH                      0x00000001

#define _U2ASTA_FERR_POSITION                    0x00000002
#define _U2ASTA_FERR_MASK                        0x00000004
#define _U2ASTA_FERR_LENGTH                      0x00000001

#define _U2ASTA_PERR_POSITION                    0x00000003
#define _U2ASTA_PERR_MASK                        0x00000008
#define _U2ASTA_PERR_LENGTH                      0x00000001

#define _U2ASTA_RIDLE_POSITION                   0x00000004
#define _U2ASTA_RIDLE_MASK                       0x00000010
#define _U2ASTA_RIDLE_LENGTH                     0x00000001

#define _U2ASTA_ADDEN_POSITION                   0x00000005
#define _U2ASTA_ADDEN_MASK                       0x00000020
#define _U2ASTA_ADDEN_LENGTH                     0x00000001

#define _U2ASTA_URXISEL_POSITION                 0x00000006
#define _U2ASTA_URXISEL_MASK                     0x000000C0
#define _U2ASTA_URXISEL_LENGTH                   0x00000002

#define _U2ASTA_TRMT_POSITION                    0x00000008
#define _U2ASTA_TRMT_MASK                        0x00000100
#define _U2ASTA_TRMT_LENGTH                      0x00000001

#define _U2ASTA_UTXBF_POSITION                   0x00000009
#define _U2ASTA_UTXBF_MASK                       0x00000200
#define _U2ASTA_UTXBF_LENGTH                     0x00000001

#define _U2ASTA_UTXEN_POSITION                   0x0000000A
#define _U2ASTA_UTXEN_MASK                       0x00000400
#define _U2ASTA_UTXEN_LENGTH                     0x00000001

#define _U2ASTA_UTXBRK_POSITION                  0x0000000B
#define _U2ASTA_UTXBRK_MASK                      0x00000800
#define _U2ASTA_UTXBRK_LENGTH                    0x00000001

#define _U2ASTA_URXEN_POSITION                   0x0000000C
#define _U2ASTA_URXEN_MASK                       0x00001000
#define _U2ASTA_URXEN_LENGTH                     0x00000001

#define _U2ASTA_UTXINV_POSITION                  0x0000000D
#define _U2ASTA_UTXINV_MASK                      0x00002000
#define _U2ASTA_UTXINV_LENGTH                    0x00000001

#define _U2ASTA_UTXISEL_POSITION                 0x0000000E
#define _U2ASTA_UTXISEL_MASK                     0x0000C000
#define _U2ASTA_UTXISEL_LENGTH                   0x00000002

#define _U2ASTA_ADDR_POSITION                    0x00000010
#define _U2ASTA_ADDR_MASK                        0x00FF0000
#define _U2ASTA_ADDR_LENGTH                      0x00000008

#define _U2ASTA_ADM_EN_POSITION                  0x00000018
#define _U2ASTA_ADM_EN_MASK                      0x01000000
#define _U2ASTA_ADM_EN_LENGTH                    0x00000001

#define _U2ASTA_URXISEL0_POSITION                0x00000006
#define _U2ASTA_URXISEL0_MASK                    0x00000040
#define _U2ASTA_URXISEL0_LENGTH                  0x00000001

#define _U2ASTA_URXISEL1_POSITION                0x00000007
#define _U2ASTA_URXISEL1_MASK                    0x00000080
#define _U2ASTA_URXISEL1_LENGTH                  0x00000001

#define _U2ASTA_UTXISEL0_POSITION                0x0000000E
#define _U2ASTA_UTXISEL0_MASK                    0x00004000
#define _U2ASTA_UTXISEL0_LENGTH                  0x00000001

#define _U2ASTA_UTXISEL1_POSITION                0x0000000F
#define _U2ASTA_UTXISEL1_MASK                    0x00008000
#define _U2ASTA_UTXISEL1_LENGTH                  0x00000001

#define _U2ASTA_UTXSEL_POSITION                  0x0000000E
#define _U2ASTA_UTXSEL_MASK                      0x0000C000
#define _U2ASTA_UTXSEL_LENGTH                    0x00000002

#define _U2ASTA_w_POSITION                       0x00000000
#define _U2ASTA_w_MASK                           0xFFFFFFFF
#define _U2ASTA_w_LENGTH                         0x00000020

#define _U3STA_URXDA_POSITION                    0x00000000
#define _U3STA_URXDA_MASK                        0x00000001
#define _U3STA_URXDA_LENGTH                      0x00000001

#define _U3STA_OERR_POSITION                     0x00000001
#define _U3STA_OERR_MASK                         0x00000002
#define _U3STA_OERR_LENGTH                       0x00000001

#define _U3STA_FERR_POSITION                     0x00000002
#define _U3STA_FERR_MASK                         0x00000004
#define _U3STA_FERR_LENGTH                       0x00000001

#define _U3STA_PERR_POSITION                     0x00000003
#define _U3STA_PERR_MASK                         0x00000008
#define _U3STA_PERR_LENGTH                       0x00000001

#define _U3STA_RIDLE_POSITION                    0x00000004
#define _U3STA_RIDLE_MASK                        0x00000010
#define _U3STA_RIDLE_LENGTH                      0x00000001

#define _U3STA_ADDEN_POSITION                    0x00000005
#define _U3STA_ADDEN_MASK                        0x00000020
#define _U3STA_ADDEN_LENGTH                      0x00000001

#define _U3STA_URXISEL_POSITION                  0x00000006
#define _U3STA_URXISEL_MASK                      0x000000C0
#define _U3STA_URXISEL_LENGTH                    0x00000002

#define _U3STA_TRMT_POSITION                     0x00000008
#define _U3STA_TRMT_MASK                         0x00000100
#define _U3STA_TRMT_LENGTH                       0x00000001

#define _U3STA_UTXBF_POSITION                    0x00000009
#define _U3STA_UTXBF_MASK                        0x00000200
#define _U3STA_UTXBF_LENGTH                      0x00000001

#define _U3STA_UTXEN_POSITION                    0x0000000A
#define _U3STA_UTXEN_MASK                        0x00000400
#define _U3STA_UTXEN_LENGTH                      0x00000001

#define _U3STA_UTXBRK_POSITION                   0x0000000B
#define _U3STA_UTXBRK_MASK                       0x00000800
#define _U3STA_UTXBRK_LENGTH                     0x00000001

#define _U3STA_URXEN_POSITION                    0x0000000C
#define _U3STA_URXEN_MASK                        0x00001000
#define _U3STA_URXEN_LENGTH                      0x00000001

#define _U3STA_UTXINV_POSITION                   0x0000000D
#define _U3STA_UTXINV_MASK                       0x00002000
#define _U3STA_UTXINV_LENGTH                     0x00000001

#define _U3STA_UTXISEL_POSITION                  0x0000000E
#define _U3STA_UTXISEL_MASK                      0x0000C000
#define _U3STA_UTXISEL_LENGTH                    0x00000002

#define _U3STA_ADDR_POSITION                     0x00000010
#define _U3STA_ADDR_MASK                         0x00FF0000
#define _U3STA_ADDR_LENGTH                       0x00000008

#define _U3STA_ADM_EN_POSITION                   0x00000018
#define _U3STA_ADM_EN_MASK                       0x01000000
#define _U3STA_ADM_EN_LENGTH                     0x00000001

#define _U3STA_URXISEL0_POSITION                 0x00000006
#define _U3STA_URXISEL0_MASK                     0x00000040
#define _U3STA_URXISEL0_LENGTH                   0x00000001

#define _U3STA_URXISEL1_POSITION                 0x00000007
#define _U3STA_URXISEL1_MASK                     0x00000080
#define _U3STA_URXISEL1_LENGTH                   0x00000001

#define _U3STA_UTXISEL0_POSITION                 0x0000000E
#define _U3STA_UTXISEL0_MASK                     0x00004000
#define _U3STA_UTXISEL0_LENGTH                   0x00000001

#define _U3STA_UTXISEL1_POSITION                 0x0000000F
#define _U3STA_UTXISEL1_MASK                     0x00008000
#define _U3STA_UTXISEL1_LENGTH                   0x00000001

#define _U3STA_UTXSEL_POSITION                   0x0000000E
#define _U3STA_UTXSEL_MASK                       0x0000C000
#define _U3STA_UTXSEL_LENGTH                     0x00000002

#define _U3STA_w_POSITION                        0x00000000
#define _U3STA_w_MASK                            0xFFFFFFFF
#define _U3STA_w_LENGTH                          0x00000020

#define _U2BMODE_STSEL_POSITION                  0x00000000
#define _U2BMODE_STSEL_MASK                      0x00000001
#define _U2BMODE_STSEL_LENGTH                    0x00000001

#define _U2BMODE_PDSEL_POSITION                  0x00000001
#define _U2BMODE_PDSEL_MASK                      0x00000006
#define _U2BMODE_PDSEL_LENGTH                    0x00000002

#define _U2BMODE_BRGH_POSITION                   0x00000003
#define _U2BMODE_BRGH_MASK                       0x00000008
#define _U2BMODE_BRGH_LENGTH                     0x00000001

#define _U2BMODE_RXINV_POSITION                  0x00000004
#define _U2BMODE_RXINV_MASK                      0x00000010
#define _U2BMODE_RXINV_LENGTH                    0x00000001

#define _U2BMODE_ABAUD_POSITION                  0x00000005
#define _U2BMODE_ABAUD_MASK                      0x00000020
#define _U2BMODE_ABAUD_LENGTH                    0x00000001

#define _U2BMODE_LPBACK_POSITION                 0x00000006
#define _U2BMODE_LPBACK_MASK                     0x00000040
#define _U2BMODE_LPBACK_LENGTH                   0x00000001

#define _U2BMODE_WAKE_POSITION                   0x00000007
#define _U2BMODE_WAKE_MASK                       0x00000080
#define _U2BMODE_WAKE_LENGTH                     0x00000001

#define _U2BMODE_IREN_POSITION                   0x0000000C
#define _U2BMODE_IREN_MASK                       0x00001000
#define _U2BMODE_IREN_LENGTH                     0x00000001

#define _U2BMODE_SIDL_POSITION                   0x0000000D
#define _U2BMODE_SIDL_MASK                       0x00002000
#define _U2BMODE_SIDL_LENGTH                     0x00000001

#define _U2BMODE_ON_POSITION                     0x0000000F
#define _U2BMODE_ON_MASK                         0x00008000
#define _U2BMODE_ON_LENGTH                       0x00000001

#define _U2BMODE_PDSEL0_POSITION                 0x00000001
#define _U2BMODE_PDSEL0_MASK                     0x00000002
#define _U2BMODE_PDSEL0_LENGTH                   0x00000001

#define _U2BMODE_PDSEL1_POSITION                 0x00000002
#define _U2BMODE_PDSEL1_MASK                     0x00000004
#define _U2BMODE_PDSEL1_LENGTH                   0x00000001

#define _U2BMODE_USIDL_POSITION                  0x0000000D
#define _U2BMODE_USIDL_MASK                      0x00002000
#define _U2BMODE_USIDL_LENGTH                    0x00000001

#define _U2BMODE_UARTEN_POSITION                 0x0000000F
#define _U2BMODE_UARTEN_MASK                     0x00008000
#define _U2BMODE_UARTEN_LENGTH                   0x00000001

#define _U2BMODE_w_POSITION                      0x00000000
#define _U2BMODE_w_MASK                          0xFFFFFFFF
#define _U2BMODE_w_LENGTH                        0x00000020

#define _U6MODE_STSEL_POSITION                   0x00000000
#define _U6MODE_STSEL_MASK                       0x00000001
#define _U6MODE_STSEL_LENGTH                     0x00000001

#define _U6MODE_PDSEL_POSITION                   0x00000001
#define _U6MODE_PDSEL_MASK                       0x00000006
#define _U6MODE_PDSEL_LENGTH                     0x00000002

#define _U6MODE_BRGH_POSITION                    0x00000003
#define _U6MODE_BRGH_MASK                        0x00000008
#define _U6MODE_BRGH_LENGTH                      0x00000001

#define _U6MODE_RXINV_POSITION                   0x00000004
#define _U6MODE_RXINV_MASK                       0x00000010
#define _U6MODE_RXINV_LENGTH                     0x00000001

#define _U6MODE_ABAUD_POSITION                   0x00000005
#define _U6MODE_ABAUD_MASK                       0x00000020
#define _U6MODE_ABAUD_LENGTH                     0x00000001

#define _U6MODE_LPBACK_POSITION                  0x00000006
#define _U6MODE_LPBACK_MASK                      0x00000040
#define _U6MODE_LPBACK_LENGTH                    0x00000001

#define _U6MODE_WAKE_POSITION                    0x00000007
#define _U6MODE_WAKE_MASK                        0x00000080
#define _U6MODE_WAKE_LENGTH                      0x00000001

#define _U6MODE_IREN_POSITION                    0x0000000C
#define _U6MODE_IREN_MASK                        0x00001000
#define _U6MODE_IREN_LENGTH                      0x00000001

#define _U6MODE_SIDL_POSITION                    0x0000000D
#define _U6MODE_SIDL_MASK                        0x00002000
#define _U6MODE_SIDL_LENGTH                      0x00000001

#define _U6MODE_ON_POSITION                      0x0000000F
#define _U6MODE_ON_MASK                          0x00008000
#define _U6MODE_ON_LENGTH                        0x00000001

#define _U6MODE_PDSEL0_POSITION                  0x00000001
#define _U6MODE_PDSEL0_MASK                      0x00000002
#define _U6MODE_PDSEL0_LENGTH                    0x00000001

#define _U6MODE_PDSEL1_POSITION                  0x00000002
#define _U6MODE_PDSEL1_MASK                      0x00000004
#define _U6MODE_PDSEL1_LENGTH                    0x00000001

#define _U6MODE_USIDL_POSITION                   0x0000000D
#define _U6MODE_USIDL_MASK                       0x00002000
#define _U6MODE_USIDL_LENGTH                     0x00000001

#define _U6MODE_UARTEN_POSITION                  0x0000000F
#define _U6MODE_UARTEN_MASK                      0x00008000
#define _U6MODE_UARTEN_LENGTH                    0x00000001

#define _U6MODE_w_POSITION                       0x00000000
#define _U6MODE_w_MASK                           0xFFFFFFFF
#define _U6MODE_w_LENGTH                         0x00000020

#define _U2BSTA_URXDA_POSITION                   0x00000000
#define _U2BSTA_URXDA_MASK                       0x00000001
#define _U2BSTA_URXDA_LENGTH                     0x00000001

#define _U2BSTA_OERR_POSITION                    0x00000001
#define _U2BSTA_OERR_MASK                        0x00000002
#define _U2BSTA_OERR_LENGTH                      0x00000001

#define _U2BSTA_FERR_POSITION                    0x00000002
#define _U2BSTA_FERR_MASK                        0x00000004
#define _U2BSTA_FERR_LENGTH                      0x00000001

#define _U2BSTA_PERR_POSITION                    0x00000003
#define _U2BSTA_PERR_MASK                        0x00000008
#define _U2BSTA_PERR_LENGTH                      0x00000001

#define _U2BSTA_RIDLE_POSITION                   0x00000004
#define _U2BSTA_RIDLE_MASK                       0x00000010
#define _U2BSTA_RIDLE_LENGTH                     0x00000001

#define _U2BSTA_ADDEN_POSITION                   0x00000005
#define _U2BSTA_ADDEN_MASK                       0x00000020
#define _U2BSTA_ADDEN_LENGTH                     0x00000001

#define _U2BSTA_URXISEL_POSITION                 0x00000006
#define _U2BSTA_URXISEL_MASK                     0x000000C0
#define _U2BSTA_URXISEL_LENGTH                   0x00000002

#define _U2BSTA_TRMT_POSITION                    0x00000008
#define _U2BSTA_TRMT_MASK                        0x00000100
#define _U2BSTA_TRMT_LENGTH                      0x00000001

#define _U2BSTA_UTXBF_POSITION                   0x00000009
#define _U2BSTA_UTXBF_MASK                       0x00000200
#define _U2BSTA_UTXBF_LENGTH                     0x00000001

#define _U2BSTA_UTXEN_POSITION                   0x0000000A
#define _U2BSTA_UTXEN_MASK                       0x00000400
#define _U2BSTA_UTXEN_LENGTH                     0x00000001

#define _U2BSTA_UTXBRK_POSITION                  0x0000000B
#define _U2BSTA_UTXBRK_MASK                      0x00000800
#define _U2BSTA_UTXBRK_LENGTH                    0x00000001

#define _U2BSTA_URXEN_POSITION                   0x0000000C
#define _U2BSTA_URXEN_MASK                       0x00001000
#define _U2BSTA_URXEN_LENGTH                     0x00000001

#define _U2BSTA_UTXINV_POSITION                  0x0000000D
#define _U2BSTA_UTXINV_MASK                      0x00002000
#define _U2BSTA_UTXINV_LENGTH                    0x00000001

#define _U2BSTA_UTXISEL_POSITION                 0x0000000E
#define _U2BSTA_UTXISEL_MASK                     0x0000C000
#define _U2BSTA_UTXISEL_LENGTH                   0x00000002

#define _U2BSTA_ADDR_POSITION                    0x00000010
#define _U2BSTA_ADDR_MASK                        0x00FF0000
#define _U2BSTA_ADDR_LENGTH                      0x00000008

#define _U2BSTA_ADM_EN_POSITION                  0x00000018
#define _U2BSTA_ADM_EN_MASK                      0x01000000
#define _U2BSTA_ADM_EN_LENGTH                    0x00000001

#define _U2BSTA_URXISEL0_POSITION                0x00000006
#define _U2BSTA_URXISEL0_MASK                    0x00000040
#define _U2BSTA_URXISEL0_LENGTH                  0x00000001

#define _U2BSTA_URXISEL1_POSITION                0x00000007
#define _U2BSTA_URXISEL1_MASK                    0x00000080
#define _U2BSTA_URXISEL1_LENGTH                  0x00000001

#define _U2BSTA_UTXISEL0_POSITION                0x0000000E
#define _U2BSTA_UTXISEL0_MASK                    0x00004000
#define _U2BSTA_UTXISEL0_LENGTH                  0x00000001

#define _U2BSTA_UTXISEL1_POSITION                0x0000000F
#define _U2BSTA_UTXISEL1_MASK                    0x00008000
#define _U2BSTA_UTXISEL1_LENGTH                  0x00000001

#define _U2BSTA_UTXSEL_POSITION                  0x0000000E
#define _U2BSTA_UTXSEL_MASK                      0x0000C000
#define _U2BSTA_UTXSEL_LENGTH                    0x00000002

#define _U2BSTA_w_POSITION                       0x00000000
#define _U2BSTA_w_MASK                           0xFFFFFFFF
#define _U2BSTA_w_LENGTH                         0x00000020

#define _U6STA_URXDA_POSITION                    0x00000000
#define _U6STA_URXDA_MASK                        0x00000001
#define _U6STA_URXDA_LENGTH                      0x00000001

#define _U6STA_OERR_POSITION                     0x00000001
#define _U6STA_OERR_MASK                         0x00000002
#define _U6STA_OERR_LENGTH                       0x00000001

#define _U6STA_FERR_POSITION                     0x00000002
#define _U6STA_FERR_MASK                         0x00000004
#define _U6STA_FERR_LENGTH                       0x00000001

#define _U6STA_PERR_POSITION                     0x00000003
#define _U6STA_PERR_MASK                         0x00000008
#define _U6STA_PERR_LENGTH                       0x00000001

#define _U6STA_RIDLE_POSITION                    0x00000004
#define _U6STA_RIDLE_MASK                        0x00000010
#define _U6STA_RIDLE_LENGTH                      0x00000001

#define _U6STA_ADDEN_POSITION                    0x00000005
#define _U6STA_ADDEN_MASK                        0x00000020
#define _U6STA_ADDEN_LENGTH                      0x00000001

#define _U6STA_URXISEL_POSITION                  0x00000006
#define _U6STA_URXISEL_MASK                      0x000000C0
#define _U6STA_URXISEL_LENGTH                    0x00000002

#define _U6STA_TRMT_POSITION                     0x00000008
#define _U6STA_TRMT_MASK                         0x00000100
#define _U6STA_TRMT_LENGTH                       0x00000001

#define _U6STA_UTXBF_POSITION                    0x00000009
#define _U6STA_UTXBF_MASK                        0x00000200
#define _U6STA_UTXBF_LENGTH                      0x00000001

#define _U6STA_UTXEN_POSITION                    0x0000000A
#define _U6STA_UTXEN_MASK                        0x00000400
#define _U6STA_UTXEN_LENGTH                      0x00000001

#define _U6STA_UTXBRK_POSITION                   0x0000000B
#define _U6STA_UTXBRK_MASK                       0x00000800
#define _U6STA_UTXBRK_LENGTH                     0x00000001

#define _U6STA_URXEN_POSITION                    0x0000000C
#define _U6STA_URXEN_MASK                        0x00001000
#define _U6STA_URXEN_LENGTH                      0x00000001

#define _U6STA_UTXINV_POSITION                   0x0000000D
#define _U6STA_UTXINV_MASK                       0x00002000
#define _U6STA_UTXINV_LENGTH                     0x00000001

#define _U6STA_UTXISEL_POSITION                  0x0000000E
#define _U6STA_UTXISEL_MASK                      0x0000C000
#define _U6STA_UTXISEL_LENGTH                    0x00000002

#define _U6STA_ADDR_POSITION                     0x00000010
#define _U6STA_ADDR_MASK                         0x00FF0000
#define _U6STA_ADDR_LENGTH                       0x00000008

#define _U6STA_ADM_EN_POSITION                   0x00000018
#define _U6STA_ADM_EN_MASK                       0x01000000
#define _U6STA_ADM_EN_LENGTH                     0x00000001

#define _U6STA_URXISEL0_POSITION                 0x00000006
#define _U6STA_URXISEL0_MASK                     0x00000040
#define _U6STA_URXISEL0_LENGTH                   0x00000001

#define _U6STA_URXISEL1_POSITION                 0x00000007
#define _U6STA_URXISEL1_MASK                     0x00000080
#define _U6STA_URXISEL1_LENGTH                   0x00000001

#define _U6STA_UTXISEL0_POSITION                 0x0000000E
#define _U6STA_UTXISEL0_MASK                     0x00004000
#define _U6STA_UTXISEL0_LENGTH                   0x00000001

#define _U6STA_UTXISEL1_POSITION                 0x0000000F
#define _U6STA_UTXISEL1_MASK                     0x00008000
#define _U6STA_UTXISEL1_LENGTH                   0x00000001

#define _U6STA_UTXSEL_POSITION                   0x0000000E
#define _U6STA_UTXSEL_MASK                       0x0000C000
#define _U6STA_UTXSEL_LENGTH                     0x00000002

#define _U6STA_w_POSITION                        0x00000000
#define _U6STA_w_MASK                            0xFFFFFFFF
#define _U6STA_w_LENGTH                          0x00000020

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

#define _U3BMODE_STSEL_POSITION                  0x00000000
#define _U3BMODE_STSEL_MASK                      0x00000001
#define _U3BMODE_STSEL_LENGTH                    0x00000001

#define _U3BMODE_PDSEL_POSITION                  0x00000001
#define _U3BMODE_PDSEL_MASK                      0x00000006
#define _U3BMODE_PDSEL_LENGTH                    0x00000002

#define _U3BMODE_BRGH_POSITION                   0x00000003
#define _U3BMODE_BRGH_MASK                       0x00000008
#define _U3BMODE_BRGH_LENGTH                     0x00000001

#define _U3BMODE_RXINV_POSITION                  0x00000004
#define _U3BMODE_RXINV_MASK                      0x00000010
#define _U3BMODE_RXINV_LENGTH                    0x00000001

#define _U3BMODE_ABAUD_POSITION                  0x00000005
#define _U3BMODE_ABAUD_MASK                      0x00000020
#define _U3BMODE_ABAUD_LENGTH                    0x00000001

#define _U3BMODE_LPBACK_POSITION                 0x00000006
#define _U3BMODE_LPBACK_MASK                     0x00000040
#define _U3BMODE_LPBACK_LENGTH                   0x00000001

#define _U3BMODE_WAKE_POSITION                   0x00000007
#define _U3BMODE_WAKE_MASK                       0x00000080
#define _U3BMODE_WAKE_LENGTH                     0x00000001

#define _U3BMODE_IREN_POSITION                   0x0000000C
#define _U3BMODE_IREN_MASK                       0x00001000
#define _U3BMODE_IREN_LENGTH                     0x00000001

#define _U3BMODE_SIDL_POSITION                   0x0000000D
#define _U3BMODE_SIDL_MASK                       0x00002000
#define _U3BMODE_SIDL_LENGTH                     0x00000001

#define _U3BMODE_ON_POSITION                     0x0000000F
#define _U3BMODE_ON_MASK                         0x00008000
#define _U3BMODE_ON_LENGTH                       0x00000001

#define _U3BMODE_PDSEL0_POSITION                 0x00000001
#define _U3BMODE_PDSEL0_MASK                     0x00000002
#define _U3BMODE_PDSEL0_LENGTH                   0x00000001

#define _U3BMODE_PDSEL1_POSITION                 0x00000002
#define _U3BMODE_PDSEL1_MASK                     0x00000004
#define _U3BMODE_PDSEL1_LENGTH                   0x00000001

#define _U3BMODE_USIDL_POSITION                  0x0000000D
#define _U3BMODE_USIDL_MASK                      0x00002000
#define _U3BMODE_USIDL_LENGTH                    0x00000001

#define _U3BMODE_UARTEN_POSITION                 0x0000000F
#define _U3BMODE_UARTEN_MASK                     0x00008000
#define _U3BMODE_UARTEN_LENGTH                   0x00000001

#define _U3BMODE_w_POSITION                      0x00000000
#define _U3BMODE_w_MASK                          0xFFFFFFFF
#define _U3BMODE_w_LENGTH                        0x00000020

#define _U5MODE_STSEL_POSITION                   0x00000000
#define _U5MODE_STSEL_MASK                       0x00000001
#define _U5MODE_STSEL_LENGTH                     0x00000001

#define _U5MODE_PDSEL_POSITION                   0x00000001
#define _U5MODE_PDSEL_MASK                       0x00000006
#define _U5MODE_PDSEL_LENGTH                     0x00000002

#define _U5MODE_BRGH_POSITION                    0x00000003
#define _U5MODE_BRGH_MASK                        0x00000008
#define _U5MODE_BRGH_LENGTH                      0x00000001

#define _U5MODE_RXINV_POSITION                   0x00000004
#define _U5MODE_RXINV_MASK                       0x00000010
#define _U5MODE_RXINV_LENGTH                     0x00000001

#define _U5MODE_ABAUD_POSITION                   0x00000005
#define _U5MODE_ABAUD_MASK                       0x00000020
#define _U5MODE_ABAUD_LENGTH                     0x00000001

#define _U5MODE_LPBACK_POSITION                  0x00000006
#define _U5MODE_LPBACK_MASK                      0x00000040
#define _U5MODE_LPBACK_LENGTH                    0x00000001

#define _U5MODE_WAKE_POSITION                    0x00000007
#define _U5MODE_WAKE_MASK                        0x00000080
#define _U5MODE_WAKE_LENGTH                      0x00000001

#define _U5MODE_IREN_POSITION                    0x0000000C
#define _U5MODE_IREN_MASK                        0x00001000
#define _U5MODE_IREN_LENGTH                      0x00000001

#define _U5MODE_SIDL_POSITION                    0x0000000D
#define _U5MODE_SIDL_MASK                        0x00002000
#define _U5MODE_SIDL_LENGTH                      0x00000001

#define _U5MODE_ON_POSITION                      0x0000000F
#define _U5MODE_ON_MASK                          0x00008000
#define _U5MODE_ON_LENGTH                        0x00000001

#define _U5MODE_PDSEL0_POSITION                  0x00000001
#define _U5MODE_PDSEL0_MASK                      0x00000002
#define _U5MODE_PDSEL0_LENGTH                    0x00000001

#define _U5MODE_PDSEL1_POSITION                  0x00000002
#define _U5MODE_PDSEL1_MASK                      0x00000004
#define _U5MODE_PDSEL1_LENGTH                    0x00000001

#define _U5MODE_USIDL_POSITION                   0x0000000D
#define _U5MODE_USIDL_MASK                       0x00002000
#define _U5MODE_USIDL_LENGTH                     0x00000001

#define _U5MODE_UARTEN_POSITION                  0x0000000F
#define _U5MODE_UARTEN_MASK                      0x00008000
#define _U5MODE_UARTEN_LENGTH                    0x00000001

#define _U5MODE_w_POSITION                       0x00000000
#define _U5MODE_w_MASK                           0xFFFFFFFF
#define _U5MODE_w_LENGTH                         0x00000020

#define _U3BSTA_URXDA_POSITION                   0x00000000
#define _U3BSTA_URXDA_MASK                       0x00000001
#define _U3BSTA_URXDA_LENGTH                     0x00000001

#define _U3BSTA_OERR_POSITION                    0x00000001
#define _U3BSTA_OERR_MASK                        0x00000002
#define _U3BSTA_OERR_LENGTH                      0x00000001

#define _U3BSTA_FERR_POSITION                    0x00000002
#define _U3BSTA_FERR_MASK                        0x00000004
#define _U3BSTA_FERR_LENGTH                      0x00000001

#define _U3BSTA_PERR_POSITION                    0x00000003
#define _U3BSTA_PERR_MASK                        0x00000008
#define _U3BSTA_PERR_LENGTH                      0x00000001

#define _U3BSTA_RIDLE_POSITION                   0x00000004
#define _U3BSTA_RIDLE_MASK                       0x00000010
#define _U3BSTA_RIDLE_LENGTH                     0x00000001

#define _U3BSTA_ADDEN_POSITION                   0x00000005
#define _U3BSTA_ADDEN_MASK                       0x00000020
#define _U3BSTA_ADDEN_LENGTH                     0x00000001

#define _U3BSTA_URXISEL_POSITION                 0x00000006
#define _U3BSTA_URXISEL_MASK                     0x000000C0
#define _U3BSTA_URXISEL_LENGTH                   0x00000002

#define _U3BSTA_TRMT_POSITION                    0x00000008
#define _U3BSTA_TRMT_MASK                        0x00000100
#define _U3BSTA_TRMT_LENGTH                      0x00000001

#define _U3BSTA_UTXBF_POSITION                   0x00000009
#define _U3BSTA_UTXBF_MASK                       0x00000200
#define _U3BSTA_UTXBF_LENGTH                     0x00000001

#define _U3BSTA_UTXEN_POSITION                   0x0000000A
#define _U3BSTA_UTXEN_MASK                       0x00000400
#define _U3BSTA_UTXEN_LENGTH                     0x00000001

#define _U3BSTA_UTXBRK_POSITION                  0x0000000B
#define _U3BSTA_UTXBRK_MASK                      0x00000800
#define _U3BSTA_UTXBRK_LENGTH                    0x00000001

#define _U3BSTA_URXEN_POSITION                   0x0000000C
#define _U3BSTA_URXEN_MASK                       0x00001000
#define _U3BSTA_URXEN_LENGTH                     0x00000001

#define _U3BSTA_UTXINV_POSITION                  0x0000000D
#define _U3BSTA_UTXINV_MASK                      0x00002000
#define _U3BSTA_UTXINV_LENGTH                    0x00000001

#define _U3BSTA_UTXISEL_POSITION                 0x0000000E
#define _U3BSTA_UTXISEL_MASK                     0x0000C000
#define _U3BSTA_UTXISEL_LENGTH                   0x00000002

#define _U3BSTA_ADDR_POSITION                    0x00000010
#define _U3BSTA_ADDR_MASK                        0x00FF0000
#define _U3BSTA_ADDR_LENGTH                      0x00000008

#define _U3BSTA_ADM_EN_POSITION                  0x00000018
#define _U3BSTA_ADM_EN_MASK                      0x01000000
#define _U3BSTA_ADM_EN_LENGTH                    0x00000001

#define _U3BSTA_URXISEL0_POSITION                0x00000006
#define _U3BSTA_URXISEL0_MASK                    0x00000040
#define _U3BSTA_URXISEL0_LENGTH                  0x00000001

#define _U3BSTA_URXISEL1_POSITION                0x00000007
#define _U3BSTA_URXISEL1_MASK                    0x00000080
#define _U3BSTA_URXISEL1_LENGTH                  0x00000001

#define _U3BSTA_UTXISEL0_POSITION                0x0000000E
#define _U3BSTA_UTXISEL0_MASK                    0x00004000
#define _U3BSTA_UTXISEL0_LENGTH                  0x00000001

#define _U3BSTA_UTXISEL1_POSITION                0x0000000F
#define _U3BSTA_UTXISEL1_MASK                    0x00008000
#define _U3BSTA_UTXISEL1_LENGTH                  0x00000001

#define _U3BSTA_UTXSEL_POSITION                  0x0000000E
#define _U3BSTA_UTXSEL_MASK                      0x0000C000
#define _U3BSTA_UTXSEL_LENGTH                    0x00000002

#define _U3BSTA_w_POSITION                       0x00000000
#define _U3BSTA_w_MASK                           0xFFFFFFFF
#define _U3BSTA_w_LENGTH                         0x00000020

#define _U5STA_URXDA_POSITION                    0x00000000
#define _U5STA_URXDA_MASK                        0x00000001
#define _U5STA_URXDA_LENGTH                      0x00000001

#define _U5STA_OERR_POSITION                     0x00000001
#define _U5STA_OERR_MASK                         0x00000002
#define _U5STA_OERR_LENGTH                       0x00000001

#define _U5STA_FERR_POSITION                     0x00000002
#define _U5STA_FERR_MASK                         0x00000004
#define _U5STA_FERR_LENGTH                       0x00000001

#define _U5STA_PERR_POSITION                     0x00000003
#define _U5STA_PERR_MASK                         0x00000008
#define _U5STA_PERR_LENGTH                       0x00000001

#define _U5STA_RIDLE_POSITION                    0x00000004
#define _U5STA_RIDLE_MASK                        0x00000010
#define _U5STA_RIDLE_LENGTH                      0x00000001

#define _U5STA_ADDEN_POSITION                    0x00000005
#define _U5STA_ADDEN_MASK                        0x00000020
#define _U5STA_ADDEN_LENGTH                      0x00000001

#define _U5STA_URXISEL_POSITION                  0x00000006
#define _U5STA_URXISEL_MASK                      0x000000C0
#define _U5STA_URXISEL_LENGTH                    0x00000002

#define _U5STA_TRMT_POSITION                     0x00000008
#define _U5STA_TRMT_MASK                         0x00000100
#define _U5STA_TRMT_LENGTH                       0x00000001

#define _U5STA_UTXBF_POSITION                    0x00000009
#define _U5STA_UTXBF_MASK                        0x00000200
#define _U5STA_UTXBF_LENGTH                      0x00000001

#define _U5STA_UTXEN_POSITION                    0x0000000A
#define _U5STA_UTXEN_MASK                        0x00000400
#define _U5STA_UTXEN_LENGTH                      0x00000001

#define _U5STA_UTXBRK_POSITION                   0x0000000B
#define _U5STA_UTXBRK_MASK                       0x00000800
#define _U5STA_UTXBRK_LENGTH                     0x00000001

#define _U5STA_URXEN_POSITION                    0x0000000C
#define _U5STA_URXEN_MASK                        0x00001000
#define _U5STA_URXEN_LENGTH                      0x00000001

#define _U5STA_UTXINV_POSITION                   0x0000000D
#define _U5STA_UTXINV_MASK                       0x00002000
#define _U5STA_UTXINV_LENGTH                     0x00000001

#define _U5STA_UTXISEL_POSITION                  0x0000000E
#define _U5STA_UTXISEL_MASK                      0x0000C000
#define _U5STA_UTXISEL_LENGTH                    0x00000002

#define _U5STA_ADDR_POSITION                     0x00000010
#define _U5STA_ADDR_MASK                         0x00FF0000
#define _U5STA_ADDR_LENGTH                       0x00000008

#define _U5STA_ADM_EN_POSITION                   0x00000018
#define _U5STA_ADM_EN_MASK                       0x01000000
#define _U5STA_ADM_EN_LENGTH                     0x00000001

#define _U5STA_URXISEL0_POSITION                 0x00000006
#define _U5STA_URXISEL0_MASK                     0x00000040
#define _U5STA_URXISEL0_LENGTH                   0x00000001

#define _U5STA_URXISEL1_POSITION                 0x00000007
#define _U5STA_URXISEL1_MASK                     0x00000080
#define _U5STA_URXISEL1_LENGTH                   0x00000001

#define _U5STA_UTXISEL0_POSITION                 0x0000000E
#define _U5STA_UTXISEL0_MASK                     0x00004000
#define _U5STA_UTXISEL0_LENGTH                   0x00000001

#define _U5STA_UTXISEL1_POSITION                 0x0000000F
#define _U5STA_UTXISEL1_MASK                     0x00008000
#define _U5STA_UTXISEL1_LENGTH                   0x00000001

#define _U5STA_UTXSEL_POSITION                   0x0000000E
#define _U5STA_UTXSEL_MASK                       0x0000C000
#define _U5STA_UTXSEL_LENGTH                     0x00000002

#define _U5STA_w_POSITION                        0x00000000
#define _U5STA_w_MASK                            0xFFFFFFFF
#define _U5STA_w_LENGTH                          0x00000020

#define _PMCON_RDSP_POSITION                     0x00000000
#define _PMCON_RDSP_MASK                         0x00000001
#define _PMCON_RDSP_LENGTH                       0x00000001

#define _PMCON_WRSP_POSITION                     0x00000001
#define _PMCON_WRSP_MASK                         0x00000002
#define _PMCON_WRSP_LENGTH                       0x00000001

#define _PMCON_CS1P_POSITION                     0x00000003
#define _PMCON_CS1P_MASK                         0x00000008
#define _PMCON_CS1P_LENGTH                       0x00000001

#define _PMCON_CS2P_POSITION                     0x00000004
#define _PMCON_CS2P_MASK                         0x00000010
#define _PMCON_CS2P_LENGTH                       0x00000001

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

#define _PMMODE_MODE16_POSITION                  0x0000000A
#define _PMMODE_MODE16_MASK                      0x00000400
#define _PMMODE_MODE16_LENGTH                    0x00000001

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

#define _PMADDR_CS2_POSITION                     0x0000000F
#define _PMADDR_CS2_MASK                         0x00008000
#define _PMADDR_CS2_LENGTH                       0x00000001

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

#define _AD1PCFG_PCFG_POSITION                   0x00000000
#define _AD1PCFG_PCFG_MASK                       0x0000FFFF
#define _AD1PCFG_PCFG_LENGTH                     0x00000010

#define _AD1PCFG_PCFG0_POSITION                  0x00000000
#define _AD1PCFG_PCFG0_MASK                      0x00000001
#define _AD1PCFG_PCFG0_LENGTH                    0x00000001

#define _AD1PCFG_PCFG1_POSITION                  0x00000001
#define _AD1PCFG_PCFG1_MASK                      0x00000002
#define _AD1PCFG_PCFG1_LENGTH                    0x00000001

#define _AD1PCFG_PCFG2_POSITION                  0x00000002
#define _AD1PCFG_PCFG2_MASK                      0x00000004
#define _AD1PCFG_PCFG2_LENGTH                    0x00000001

#define _AD1PCFG_PCFG3_POSITION                  0x00000003
#define _AD1PCFG_PCFG3_MASK                      0x00000008
#define _AD1PCFG_PCFG3_LENGTH                    0x00000001

#define _AD1PCFG_PCFG4_POSITION                  0x00000004
#define _AD1PCFG_PCFG4_MASK                      0x00000010
#define _AD1PCFG_PCFG4_LENGTH                    0x00000001

#define _AD1PCFG_PCFG5_POSITION                  0x00000005
#define _AD1PCFG_PCFG5_MASK                      0x00000020
#define _AD1PCFG_PCFG5_LENGTH                    0x00000001

#define _AD1PCFG_PCFG6_POSITION                  0x00000006
#define _AD1PCFG_PCFG6_MASK                      0x00000040
#define _AD1PCFG_PCFG6_LENGTH                    0x00000001

#define _AD1PCFG_PCFG7_POSITION                  0x00000007
#define _AD1PCFG_PCFG7_MASK                      0x00000080
#define _AD1PCFG_PCFG7_LENGTH                    0x00000001

#define _AD1PCFG_PCFG8_POSITION                  0x00000008
#define _AD1PCFG_PCFG8_MASK                      0x00000100
#define _AD1PCFG_PCFG8_LENGTH                    0x00000001

#define _AD1PCFG_PCFG9_POSITION                  0x00000009
#define _AD1PCFG_PCFG9_MASK                      0x00000200
#define _AD1PCFG_PCFG9_LENGTH                    0x00000001

#define _AD1PCFG_PCFG10_POSITION                 0x0000000A
#define _AD1PCFG_PCFG10_MASK                     0x00000400
#define _AD1PCFG_PCFG10_LENGTH                   0x00000001

#define _AD1PCFG_PCFG11_POSITION                 0x0000000B
#define _AD1PCFG_PCFG11_MASK                     0x00000800
#define _AD1PCFG_PCFG11_LENGTH                   0x00000001

#define _AD1PCFG_PCFG12_POSITION                 0x0000000C
#define _AD1PCFG_PCFG12_MASK                     0x00001000
#define _AD1PCFG_PCFG12_LENGTH                   0x00000001

#define _AD1PCFG_PCFG13_POSITION                 0x0000000D
#define _AD1PCFG_PCFG13_MASK                     0x00002000
#define _AD1PCFG_PCFG13_LENGTH                   0x00000001

#define _AD1PCFG_PCFG14_POSITION                 0x0000000E
#define _AD1PCFG_PCFG14_MASK                     0x00004000
#define _AD1PCFG_PCFG14_LENGTH                   0x00000001

#define _AD1PCFG_PCFG15_POSITION                 0x0000000F
#define _AD1PCFG_PCFG15_MASK                     0x00008000
#define _AD1PCFG_PCFG15_LENGTH                   0x00000001

#define _AD1PCFG_w_POSITION                      0x00000000
#define _AD1PCFG_w_MASK                          0xFFFFFFFF
#define _AD1PCFG_w_LENGTH                        0x00000020

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

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_SIDL_POSITION                    0x0000000D
#define _CMSTAT_SIDL_MASK                        0x00002000
#define _CMSTAT_SIDL_LENGTH                      0x00000001

#define _CMSTAT_w_POSITION                       0x00000000
#define _CMSTAT_w_MASK                           0xFFFFFFFF
#define _CMSTAT_w_LENGTH                         0x00000020

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

#define _DDPCON_TDOEN_POSITION                   0x00000000
#define _DDPCON_TDOEN_MASK                       0x00000001
#define _DDPCON_TDOEN_LENGTH                     0x00000001

#define _DDPCON_TROEN_POSITION                   0x00000002
#define _DDPCON_TROEN_MASK                       0x00000004
#define _DDPCON_TROEN_LENGTH                     0x00000001

#define _DDPCON_JTAGEN_POSITION                  0x00000003
#define _DDPCON_JTAGEN_MASK                      0x00000008
#define _DDPCON_JTAGEN_LENGTH                    0x00000001

#define _DEVID_DEVID_POSITION                    0x00000000
#define _DEVID_DEVID_MASK                        0x0FFFFFFF
#define _DEVID_DEVID_LENGTH                      0x0000001C

#define _DEVID_VER_POSITION                      0x0000001C
#define _DEVID_VER_MASK                          0xF0000000
#define _DEVID_VER_LENGTH                        0x00000004

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

#define __DDPSTAT_APIFUL_POSITION                0x00000001
#define __DDPSTAT_APIFUL_MASK                    0x00000002
#define __DDPSTAT_APIFUL_LENGTH                  0x00000001

#define __DDPSTAT_APOFUL_POSITION                0x00000002
#define __DDPSTAT_APOFUL_MASK                    0x00000004
#define __DDPSTAT_APOFUL_LENGTH                  0x00000001

#define __DDPSTAT_STRFUL_POSITION                0x00000003
#define __DDPSTAT_STRFUL_MASK                    0x00000008
#define __DDPSTAT_STRFUL_LENGTH                  0x00000001

#define __DDPSTAT_APIOV_POSITION                 0x00000009
#define __DDPSTAT_APIOV_MASK                     0x00000200
#define __DDPSTAT_APIOV_LENGTH                   0x00000001

#define __DDPSTAT_APOOV_POSITION                 0x0000000A
#define __DDPSTAT_APOOV_MASK                     0x00000400
#define __DDPSTAT_APOOV_LENGTH                   0x00000001

#define __DDPSTAT_STOV_POSITION                  0x00000010
#define __DDPSTAT_STOV_MASK                      0xFFFF0000
#define __DDPSTAT_STOV_LENGTH                    0x00000010

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

#define _INTCON_FRZ_POSITION                     0x0000000E
#define _INTCON_FRZ_MASK                         0x00004000
#define _INTCON_FRZ_LENGTH                       0x00000001

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

#define _IFS0_IC1IF_POSITION                     0x00000005
#define _IFS0_IC1IF_MASK                         0x00000020
#define _IFS0_IC1IF_LENGTH                       0x00000001

#define _IFS0_OC1IF_POSITION                     0x00000006
#define _IFS0_OC1IF_MASK                         0x00000040
#define _IFS0_OC1IF_LENGTH                       0x00000001

#define _IFS0_INT1IF_POSITION                    0x00000007
#define _IFS0_INT1IF_MASK                        0x00000080
#define _IFS0_INT1IF_LENGTH                      0x00000001

#define _IFS0_T2IF_POSITION                      0x00000008
#define _IFS0_T2IF_MASK                          0x00000100
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_IC2IF_POSITION                     0x00000009
#define _IFS0_IC2IF_MASK                         0x00000200
#define _IFS0_IC2IF_LENGTH                       0x00000001

#define _IFS0_OC2IF_POSITION                     0x0000000A
#define _IFS0_OC2IF_MASK                         0x00000400
#define _IFS0_OC2IF_LENGTH                       0x00000001

#define _IFS0_INT2IF_POSITION                    0x0000000B
#define _IFS0_INT2IF_MASK                        0x00000800
#define _IFS0_INT2IF_LENGTH                      0x00000001

#define _IFS0_T3IF_POSITION                      0x0000000C
#define _IFS0_T3IF_MASK                          0x00001000
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_IC3IF_POSITION                     0x0000000D
#define _IFS0_IC3IF_MASK                         0x00002000
#define _IFS0_IC3IF_LENGTH                       0x00000001

#define _IFS0_OC3IF_POSITION                     0x0000000E
#define _IFS0_OC3IF_MASK                         0x00004000
#define _IFS0_OC3IF_LENGTH                       0x00000001

#define _IFS0_INT3IF_POSITION                    0x0000000F
#define _IFS0_INT3IF_MASK                        0x00008000
#define _IFS0_INT3IF_LENGTH                      0x00000001

#define _IFS0_T4IF_POSITION                      0x00000010
#define _IFS0_T4IF_MASK                          0x00010000
#define _IFS0_T4IF_LENGTH                        0x00000001

#define _IFS0_IC4IF_POSITION                     0x00000011
#define _IFS0_IC4IF_MASK                         0x00020000
#define _IFS0_IC4IF_LENGTH                       0x00000001

#define _IFS0_OC4IF_POSITION                     0x00000012
#define _IFS0_OC4IF_MASK                         0x00040000
#define _IFS0_OC4IF_LENGTH                       0x00000001

#define _IFS0_INT4IF_POSITION                    0x00000013
#define _IFS0_INT4IF_MASK                        0x00080000
#define _IFS0_INT4IF_LENGTH                      0x00000001

#define _IFS0_T5IF_POSITION                      0x00000014
#define _IFS0_T5IF_MASK                          0x00100000
#define _IFS0_T5IF_LENGTH                        0x00000001

#define _IFS0_IC5IF_POSITION                     0x00000015
#define _IFS0_IC5IF_MASK                         0x00200000
#define _IFS0_IC5IF_LENGTH                       0x00000001

#define _IFS0_OC5IF_POSITION                     0x00000016
#define _IFS0_OC5IF_MASK                         0x00400000
#define _IFS0_OC5IF_LENGTH                       0x00000001

#define _IFS0_SPI1EIF_POSITION                   0x00000017
#define _IFS0_SPI1EIF_MASK                       0x00800000
#define _IFS0_SPI1EIF_LENGTH                     0x00000001

#define _IFS0_SPI1RXIF_POSITION                  0x00000018
#define _IFS0_SPI1RXIF_MASK                      0x01000000
#define _IFS0_SPI1RXIF_LENGTH                    0x00000001

#define _IFS0_SPI1TXIF_POSITION                  0x00000019
#define _IFS0_SPI1TXIF_MASK                      0x02000000
#define _IFS0_SPI1TXIF_LENGTH                    0x00000001

#define _IFS0_U1EIF_POSITION                     0x0000001A
#define _IFS0_U1EIF_MASK                         0x04000000
#define _IFS0_U1EIF_LENGTH                       0x00000001

#define _IFS0_U1RXIF_POSITION                    0x0000001B
#define _IFS0_U1RXIF_MASK                        0x08000000
#define _IFS0_U1RXIF_LENGTH                      0x00000001

#define _IFS0_U1TXIF_POSITION                    0x0000001C
#define _IFS0_U1TXIF_MASK                        0x10000000
#define _IFS0_U1TXIF_LENGTH                      0x00000001

#define _IFS0_I2C1BIF_POSITION                   0x0000001D
#define _IFS0_I2C1BIF_MASK                       0x20000000
#define _IFS0_I2C1BIF_LENGTH                     0x00000001

#define _IFS0_I2C1SIF_POSITION                   0x0000001E
#define _IFS0_I2C1SIF_MASK                       0x40000000
#define _IFS0_I2C1SIF_LENGTH                     0x00000001

#define _IFS0_I2C1MIF_POSITION                   0x0000001F
#define _IFS0_I2C1MIF_MASK                       0x80000000
#define _IFS0_I2C1MIF_LENGTH                     0x00000001

#define _IFS0_U1AEIF_POSITION                    0x0000001A
#define _IFS0_U1AEIF_MASK                        0x04000000
#define _IFS0_U1AEIF_LENGTH                      0x00000001

#define _IFS0_U1ARXIF_POSITION                   0x0000001B
#define _IFS0_U1ARXIF_MASK                       0x08000000
#define _IFS0_U1ARXIF_LENGTH                     0x00000001

#define _IFS0_U1ATXIF_POSITION                   0x0000001C
#define _IFS0_U1ATXIF_MASK                       0x10000000
#define _IFS0_U1ATXIF_LENGTH                     0x00000001

#define _IFS0_SPI3EIF_POSITION                   0x0000001A
#define _IFS0_SPI3EIF_MASK                       0x04000000
#define _IFS0_SPI3EIF_LENGTH                     0x00000001

#define _IFS0_SPI3RXIF_POSITION                  0x0000001B
#define _IFS0_SPI3RXIF_MASK                      0x08000000
#define _IFS0_SPI3RXIF_LENGTH                    0x00000001

#define _IFS0_SPI3TXIF_POSITION                  0x0000001C
#define _IFS0_SPI3TXIF_MASK                      0x10000000
#define _IFS0_SPI3TXIF_LENGTH                    0x00000001

#define _IFS0_SPI1AEIF_POSITION                  0x0000001A
#define _IFS0_SPI1AEIF_MASK                      0x04000000
#define _IFS0_SPI1AEIF_LENGTH                    0x00000001

#define _IFS0_SPI1ARXIF_POSITION                 0x0000001B
#define _IFS0_SPI1ARXIF_MASK                     0x08000000
#define _IFS0_SPI1ARXIF_LENGTH                   0x00000001

#define _IFS0_SPI1ATXIF_POSITION                 0x0000001C
#define _IFS0_SPI1ATXIF_MASK                     0x10000000
#define _IFS0_SPI1ATXIF_LENGTH                   0x00000001

#define _IFS0_I2C3BIF_POSITION                   0x0000001A
#define _IFS0_I2C3BIF_MASK                       0x04000000
#define _IFS0_I2C3BIF_LENGTH                     0x00000001

#define _IFS0_I2C3SIF_POSITION                   0x0000001B
#define _IFS0_I2C3SIF_MASK                       0x08000000
#define _IFS0_I2C3SIF_LENGTH                     0x00000001

#define _IFS0_I2C3MIF_POSITION                   0x0000001C
#define _IFS0_I2C3MIF_MASK                       0x10000000
#define _IFS0_I2C3MIF_LENGTH                     0x00000001

#define _IFS0_I2C1ABIF_POSITION                  0x0000001A
#define _IFS0_I2C1ABIF_MASK                      0x04000000
#define _IFS0_I2C1ABIF_LENGTH                    0x00000001

#define _IFS0_I2C1ASIF_POSITION                  0x0000001B
#define _IFS0_I2C1ASIF_MASK                      0x08000000
#define _IFS0_I2C1ASIF_LENGTH                    0x00000001

#define _IFS0_I2C1AMIF_POSITION                  0x0000001C
#define _IFS0_I2C1AMIF_MASK                      0x10000000
#define _IFS0_I2C1AMIF_LENGTH                    0x00000001

#define _IFS0_w_POSITION                         0x00000000
#define _IFS0_w_MASK                             0xFFFFFFFF
#define _IFS0_w_LENGTH                           0x00000020

#define _IFS1_CNIF_POSITION                      0x00000000
#define _IFS1_CNIF_MASK                          0x00000001
#define _IFS1_CNIF_LENGTH                        0x00000001

#define _IFS1_AD1IF_POSITION                     0x00000001
#define _IFS1_AD1IF_MASK                         0x00000002
#define _IFS1_AD1IF_LENGTH                       0x00000001

#define _IFS1_PMPIF_POSITION                     0x00000002
#define _IFS1_PMPIF_MASK                         0x00000004
#define _IFS1_PMPIF_LENGTH                       0x00000001

#define _IFS1_CMP1IF_POSITION                    0x00000003
#define _IFS1_CMP1IF_MASK                        0x00000008
#define _IFS1_CMP1IF_LENGTH                      0x00000001

#define _IFS1_CMP2IF_POSITION                    0x00000004
#define _IFS1_CMP2IF_MASK                        0x00000010
#define _IFS1_CMP2IF_LENGTH                      0x00000001

#define _IFS1_U3EIF_POSITION                     0x00000005
#define _IFS1_U3EIF_MASK                         0x00000020
#define _IFS1_U3EIF_LENGTH                       0x00000001

#define _IFS1_U3RXIF_POSITION                    0x00000006
#define _IFS1_U3RXIF_MASK                        0x00000040
#define _IFS1_U3RXIF_LENGTH                      0x00000001

#define _IFS1_U3TXIF_POSITION                    0x00000007
#define _IFS1_U3TXIF_MASK                        0x00000080
#define _IFS1_U3TXIF_LENGTH                      0x00000001

#define _IFS1_U2EIF_POSITION                     0x00000008
#define _IFS1_U2EIF_MASK                         0x00000100
#define _IFS1_U2EIF_LENGTH                       0x00000001

#define _IFS1_U2RXIF_POSITION                    0x00000009
#define _IFS1_U2RXIF_MASK                        0x00000200
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x0000000A
#define _IFS1_U2TXIF_MASK                        0x00000400
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS1_I2C2BIF_POSITION                   0x0000000B
#define _IFS1_I2C2BIF_MASK                       0x00000800
#define _IFS1_I2C2BIF_LENGTH                     0x00000001

#define _IFS1_I2C2SIF_POSITION                   0x0000000C
#define _IFS1_I2C2SIF_MASK                       0x00001000
#define _IFS1_I2C2SIF_LENGTH                     0x00000001

#define _IFS1_I2C2MIF_POSITION                   0x0000000D
#define _IFS1_I2C2MIF_MASK                       0x00002000
#define _IFS1_I2C2MIF_LENGTH                     0x00000001

#define _IFS1_FSCMIF_POSITION                    0x0000000E
#define _IFS1_FSCMIF_MASK                        0x00004000
#define _IFS1_FSCMIF_LENGTH                      0x00000001

#define _IFS1_RTCCIF_POSITION                    0x0000000F
#define _IFS1_RTCCIF_MASK                        0x00008000
#define _IFS1_RTCCIF_LENGTH                      0x00000001

#define _IFS1_DMA0IF_POSITION                    0x00000010
#define _IFS1_DMA0IF_MASK                        0x00010000
#define _IFS1_DMA0IF_LENGTH                      0x00000001

#define _IFS1_DMA1IF_POSITION                    0x00000011
#define _IFS1_DMA1IF_MASK                        0x00020000
#define _IFS1_DMA1IF_LENGTH                      0x00000001

#define _IFS1_DMA2IF_POSITION                    0x00000012
#define _IFS1_DMA2IF_MASK                        0x00040000
#define _IFS1_DMA2IF_LENGTH                      0x00000001

#define _IFS1_DMA3IF_POSITION                    0x00000013
#define _IFS1_DMA3IF_MASK                        0x00080000
#define _IFS1_DMA3IF_LENGTH                      0x00000001

#define _IFS1_DMA4IF_POSITION                    0x00000014
#define _IFS1_DMA4IF_MASK                        0x00100000
#define _IFS1_DMA4IF_LENGTH                      0x00000001

#define _IFS1_DMA5IF_POSITION                    0x00000015
#define _IFS1_DMA5IF_MASK                        0x00200000
#define _IFS1_DMA5IF_LENGTH                      0x00000001

#define _IFS1_DMA6IF_POSITION                    0x00000016
#define _IFS1_DMA6IF_MASK                        0x00400000
#define _IFS1_DMA6IF_LENGTH                      0x00000001

#define _IFS1_DMA7IF_POSITION                    0x00000017
#define _IFS1_DMA7IF_MASK                        0x00800000
#define _IFS1_DMA7IF_LENGTH                      0x00000001

#define _IFS1_FCEIF_POSITION                     0x00000018
#define _IFS1_FCEIF_MASK                         0x01000000
#define _IFS1_FCEIF_LENGTH                       0x00000001

#define _IFS1_USBIF_POSITION                     0x00000019
#define _IFS1_USBIF_MASK                         0x02000000
#define _IFS1_USBIF_LENGTH                       0x00000001

#define _IFS1_ETHIF_POSITION                     0x0000001C
#define _IFS1_ETHIF_MASK                         0x10000000
#define _IFS1_ETHIF_LENGTH                       0x00000001

#define _IFS1_IC1EIF_POSITION                    0x0000001D
#define _IFS1_IC1EIF_MASK                        0x20000000
#define _IFS1_IC1EIF_LENGTH                      0x00000001

#define _IFS1_IC2EIF_POSITION                    0x0000001E
#define _IFS1_IC2EIF_MASK                        0x40000000
#define _IFS1_IC2EIF_LENGTH                      0x00000001

#define _IFS1_IC3EIF_POSITION                    0x0000001F
#define _IFS1_IC3EIF_MASK                        0x80000000
#define _IFS1_IC3EIF_LENGTH                      0x00000001

#define _IFS1_U2AEIF_POSITION                    0x00000005
#define _IFS1_U2AEIF_MASK                        0x00000020
#define _IFS1_U2AEIF_LENGTH                      0x00000001

#define _IFS1_U2ARXIF_POSITION                   0x00000006
#define _IFS1_U2ARXIF_MASK                       0x00000040
#define _IFS1_U2ARXIF_LENGTH                     0x00000001

#define _IFS1_U2ATXIF_POSITION                   0x00000007
#define _IFS1_U2ATXIF_MASK                       0x00000080
#define _IFS1_U2ATXIF_LENGTH                     0x00000001

#define _IFS1_U3AEIF_POSITION                    0x00000008
#define _IFS1_U3AEIF_MASK                        0x00000100
#define _IFS1_U3AEIF_LENGTH                      0x00000001

#define _IFS1_U3ARXIF_POSITION                   0x00000009
#define _IFS1_U3ARXIF_MASK                       0x00000200
#define _IFS1_U3ARXIF_LENGTH                     0x00000001

#define _IFS1_U3ATXIF_POSITION                   0x0000000A
#define _IFS1_U3ATXIF_MASK                       0x00000400
#define _IFS1_U3ATXIF_LENGTH                     0x00000001

#define _IFS1_SPI2EIF_POSITION                   0x00000005
#define _IFS1_SPI2EIF_MASK                       0x00000020
#define _IFS1_SPI2EIF_LENGTH                     0x00000001

#define _IFS1_SPI2RXIF_POSITION                  0x00000006
#define _IFS1_SPI2RXIF_MASK                      0x00000040
#define _IFS1_SPI2RXIF_LENGTH                    0x00000001

#define _IFS1_SPI2TXIF_POSITION                  0x00000007
#define _IFS1_SPI2TXIF_MASK                      0x00000080
#define _IFS1_SPI2TXIF_LENGTH                    0x00000001

#define _IFS1_SPI4EIF_POSITION                   0x00000008
#define _IFS1_SPI4EIF_MASK                       0x00000100
#define _IFS1_SPI4EIF_LENGTH                     0x00000001

#define _IFS1_SPI4RXIF_POSITION                  0x00000009
#define _IFS1_SPI4RXIF_MASK                      0x00000200
#define _IFS1_SPI4RXIF_LENGTH                    0x00000001

#define _IFS1_SPI4TXIF_POSITION                  0x0000000A
#define _IFS1_SPI4TXIF_MASK                      0x00000400
#define _IFS1_SPI4TXIF_LENGTH                    0x00000001

#define _IFS1_SPI2AEIF_POSITION                  0x00000005
#define _IFS1_SPI2AEIF_MASK                      0x00000020
#define _IFS1_SPI2AEIF_LENGTH                    0x00000001

#define _IFS1_SPI2ARXIF_POSITION                 0x00000006
#define _IFS1_SPI2ARXIF_MASK                     0x00000040
#define _IFS1_SPI2ARXIF_LENGTH                   0x00000001

#define _IFS1_SPI2ATXIF_POSITION                 0x00000007
#define _IFS1_SPI2ATXIF_MASK                     0x00000080
#define _IFS1_SPI2ATXIF_LENGTH                   0x00000001

#define _IFS1_SPI3AEIF_POSITION                  0x00000008
#define _IFS1_SPI3AEIF_MASK                      0x00000100
#define _IFS1_SPI3AEIF_LENGTH                    0x00000001

#define _IFS1_SPI3ARXIF_POSITION                 0x00000009
#define _IFS1_SPI3ARXIF_MASK                     0x00000200
#define _IFS1_SPI3ARXIF_LENGTH                   0x00000001

#define _IFS1_SPI3ATXIF_POSITION                 0x0000000A
#define _IFS1_SPI3ATXIF_MASK                     0x00000400
#define _IFS1_SPI3ATXIF_LENGTH                   0x00000001

#define _IFS1_I2C4BIF_POSITION                   0x00000005
#define _IFS1_I2C4BIF_MASK                       0x00000020
#define _IFS1_I2C4BIF_LENGTH                     0x00000001

#define _IFS1_I2C4SIF_POSITION                   0x00000006
#define _IFS1_I2C4SIF_MASK                       0x00000040
#define _IFS1_I2C4SIF_LENGTH                     0x00000001

#define _IFS1_I2C4MIF_POSITION                   0x00000007
#define _IFS1_I2C4MIF_MASK                       0x00000080
#define _IFS1_I2C4MIF_LENGTH                     0x00000001

#define _IFS1_I2C5BIF_POSITION                   0x00000008
#define _IFS1_I2C5BIF_MASK                       0x00000100
#define _IFS1_I2C5BIF_LENGTH                     0x00000001

#define _IFS1_I2C5SIF_POSITION                   0x00000009
#define _IFS1_I2C5SIF_MASK                       0x00000200
#define _IFS1_I2C5SIF_LENGTH                     0x00000001

#define _IFS1_I2C5MIF_POSITION                   0x0000000A
#define _IFS1_I2C5MIF_MASK                       0x00000400
#define _IFS1_I2C5MIF_LENGTH                     0x00000001

#define _IFS1_I2C2ABIF_POSITION                  0x00000005
#define _IFS1_I2C2ABIF_MASK                      0x00000020
#define _IFS1_I2C2ABIF_LENGTH                    0x00000001

#define _IFS1_I2C2ASIF_POSITION                  0x00000006
#define _IFS1_I2C2ASIF_MASK                      0x00000040
#define _IFS1_I2C2ASIF_LENGTH                    0x00000001

#define _IFS1_I2C2AMIF_POSITION                  0x00000007
#define _IFS1_I2C2AMIF_MASK                      0x00000080
#define _IFS1_I2C2AMIF_LENGTH                    0x00000001

#define _IFS1_I2C3ABIF_POSITION                  0x00000008
#define _IFS1_I2C3ABIF_MASK                      0x00000100
#define _IFS1_I2C3ABIF_LENGTH                    0x00000001

#define _IFS1_I2C3ASIF_POSITION                  0x00000009
#define _IFS1_I2C3ASIF_MASK                      0x00000200
#define _IFS1_I2C3ASIF_LENGTH                    0x00000001

#define _IFS1_I2C3AMIF_POSITION                  0x0000000A
#define _IFS1_I2C3AMIF_MASK                      0x00000400
#define _IFS1_I2C3AMIF_LENGTH                    0x00000001

#define _IFS1_w_POSITION                         0x00000000
#define _IFS1_w_MASK                             0xFFFFFFFF
#define _IFS1_w_LENGTH                           0x00000020

#define _IFS2_IC4EIF_POSITION                    0x00000000
#define _IFS2_IC4EIF_MASK                        0x00000001
#define _IFS2_IC4EIF_LENGTH                      0x00000001

#define _IFS2_IC5EIF_POSITION                    0x00000001
#define _IFS2_IC5EIF_MASK                        0x00000002
#define _IFS2_IC5EIF_LENGTH                      0x00000001

#define _IFS2_PMPEIF_POSITION                    0x00000002
#define _IFS2_PMPEIF_MASK                        0x00000004
#define _IFS2_PMPEIF_LENGTH                      0x00000001

#define _IFS2_U1BEIF_POSITION                    0x00000003
#define _IFS2_U1BEIF_MASK                        0x00000008
#define _IFS2_U1BEIF_LENGTH                      0x00000001

#define _IFS2_U1BRXIF_POSITION                   0x00000004
#define _IFS2_U1BRXIF_MASK                       0x00000010
#define _IFS2_U1BRXIF_LENGTH                     0x00000001

#define _IFS2_U1BTXIF_POSITION                   0x00000005
#define _IFS2_U1BTXIF_MASK                       0x00000020
#define _IFS2_U1BTXIF_LENGTH                     0x00000001

#define _IFS2_U2BEIF_POSITION                    0x00000006
#define _IFS2_U2BEIF_MASK                        0x00000040
#define _IFS2_U2BEIF_LENGTH                      0x00000001

#define _IFS2_U2BRXIF_POSITION                   0x00000007
#define _IFS2_U2BRXIF_MASK                       0x00000080
#define _IFS2_U2BRXIF_LENGTH                     0x00000001

#define _IFS2_U2BTXIF_POSITION                   0x00000008
#define _IFS2_U2BTXIF_MASK                       0x00000100
#define _IFS2_U2BTXIF_LENGTH                     0x00000001

#define _IFS2_U3BEIF_POSITION                    0x00000009
#define _IFS2_U3BEIF_MASK                        0x00000200
#define _IFS2_U3BEIF_LENGTH                      0x00000001

#define _IFS2_U3BRXIF_POSITION                   0x0000000A
#define _IFS2_U3BRXIF_MASK                       0x00000400
#define _IFS2_U3BRXIF_LENGTH                     0x00000001

#define _IFS2_U3BTXIF_POSITION                   0x0000000B
#define _IFS2_U3BTXIF_MASK                       0x00000800
#define _IFS2_U3BTXIF_LENGTH                     0x00000001

#define _IFS2_U4EIF_POSITION                     0x00000003
#define _IFS2_U4EIF_MASK                         0x00000008
#define _IFS2_U4EIF_LENGTH                       0x00000001

#define _IFS2_U4RXIF_POSITION                    0x00000004
#define _IFS2_U4RXIF_MASK                        0x00000010
#define _IFS2_U4RXIF_LENGTH                      0x00000001

#define _IFS2_U4TXIF_POSITION                    0x00000005
#define _IFS2_U4TXIF_MASK                        0x00000020
#define _IFS2_U4TXIF_LENGTH                      0x00000001

#define _IFS2_U6EIF_POSITION                     0x00000006
#define _IFS2_U6EIF_MASK                         0x00000040
#define _IFS2_U6EIF_LENGTH                       0x00000001

#define _IFS2_U6RXIF_POSITION                    0x00000007
#define _IFS2_U6RXIF_MASK                        0x00000080
#define _IFS2_U6RXIF_LENGTH                      0x00000001

#define _IFS2_U6TXIF_POSITION                    0x00000008
#define _IFS2_U6TXIF_MASK                        0x00000100
#define _IFS2_U6TXIF_LENGTH                      0x00000001

#define _IFS2_U5EIF_POSITION                     0x00000009
#define _IFS2_U5EIF_MASK                         0x00000200
#define _IFS2_U5EIF_LENGTH                       0x00000001

#define _IFS2_U5RXIF_POSITION                    0x0000000A
#define _IFS2_U5RXIF_MASK                        0x00000400
#define _IFS2_U5RXIF_LENGTH                      0x00000001

#define _IFS2_U5TXIF_POSITION                    0x0000000B
#define _IFS2_U5TXIF_MASK                        0x00000800
#define _IFS2_U5TXIF_LENGTH                      0x00000001

#define _IFS2_w_POSITION                         0x00000000
#define _IFS2_w_MASK                             0xFFFFFFFF
#define _IFS2_w_LENGTH                           0x00000020

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

#define _IEC0_IC1IE_POSITION                     0x00000005
#define _IEC0_IC1IE_MASK                         0x00000020
#define _IEC0_IC1IE_LENGTH                       0x00000001

#define _IEC0_OC1IE_POSITION                     0x00000006
#define _IEC0_OC1IE_MASK                         0x00000040
#define _IEC0_OC1IE_LENGTH                       0x00000001

#define _IEC0_INT1IE_POSITION                    0x00000007
#define _IEC0_INT1IE_MASK                        0x00000080
#define _IEC0_INT1IE_LENGTH                      0x00000001

#define _IEC0_T2IE_POSITION                      0x00000008
#define _IEC0_T2IE_MASK                          0x00000100
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_IC2IE_POSITION                     0x00000009
#define _IEC0_IC2IE_MASK                         0x00000200
#define _IEC0_IC2IE_LENGTH                       0x00000001

#define _IEC0_OC2IE_POSITION                     0x0000000A
#define _IEC0_OC2IE_MASK                         0x00000400
#define _IEC0_OC2IE_LENGTH                       0x00000001

#define _IEC0_INT2IE_POSITION                    0x0000000B
#define _IEC0_INT2IE_MASK                        0x00000800
#define _IEC0_INT2IE_LENGTH                      0x00000001

#define _IEC0_T3IE_POSITION                      0x0000000C
#define _IEC0_T3IE_MASK                          0x00001000
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_IC3IE_POSITION                     0x0000000D
#define _IEC0_IC3IE_MASK                         0x00002000
#define _IEC0_IC3IE_LENGTH                       0x00000001

#define _IEC0_OC3IE_POSITION                     0x0000000E
#define _IEC0_OC3IE_MASK                         0x00004000
#define _IEC0_OC3IE_LENGTH                       0x00000001

#define _IEC0_INT3IE_POSITION                    0x0000000F
#define _IEC0_INT3IE_MASK                        0x00008000
#define _IEC0_INT3IE_LENGTH                      0x00000001

#define _IEC0_T4IE_POSITION                      0x00000010
#define _IEC0_T4IE_MASK                          0x00010000
#define _IEC0_T4IE_LENGTH                        0x00000001

#define _IEC0_IC4IE_POSITION                     0x00000011
#define _IEC0_IC4IE_MASK                         0x00020000
#define _IEC0_IC4IE_LENGTH                       0x00000001

#define _IEC0_OC4IE_POSITION                     0x00000012
#define _IEC0_OC4IE_MASK                         0x00040000
#define _IEC0_OC4IE_LENGTH                       0x00000001

#define _IEC0_INT4IE_POSITION                    0x00000013
#define _IEC0_INT4IE_MASK                        0x00080000
#define _IEC0_INT4IE_LENGTH                      0x00000001

#define _IEC0_T5IE_POSITION                      0x00000014
#define _IEC0_T5IE_MASK                          0x00100000
#define _IEC0_T5IE_LENGTH                        0x00000001

#define _IEC0_IC5IE_POSITION                     0x00000015
#define _IEC0_IC5IE_MASK                         0x00200000
#define _IEC0_IC5IE_LENGTH                       0x00000001

#define _IEC0_OC5IE_POSITION                     0x00000016
#define _IEC0_OC5IE_MASK                         0x00400000
#define _IEC0_OC5IE_LENGTH                       0x00000001

#define _IEC0_SPI1EIE_POSITION                   0x00000017
#define _IEC0_SPI1EIE_MASK                       0x00800000
#define _IEC0_SPI1EIE_LENGTH                     0x00000001

#define _IEC0_SPI1RXIE_POSITION                  0x00000018
#define _IEC0_SPI1RXIE_MASK                      0x01000000
#define _IEC0_SPI1RXIE_LENGTH                    0x00000001

#define _IEC0_SPI1TXIE_POSITION                  0x00000019
#define _IEC0_SPI1TXIE_MASK                      0x02000000
#define _IEC0_SPI1TXIE_LENGTH                    0x00000001

#define _IEC0_U1EIE_POSITION                     0x0000001A
#define _IEC0_U1EIE_MASK                         0x04000000
#define _IEC0_U1EIE_LENGTH                       0x00000001

#define _IEC0_U1RXIE_POSITION                    0x0000001B
#define _IEC0_U1RXIE_MASK                        0x08000000
#define _IEC0_U1RXIE_LENGTH                      0x00000001

#define _IEC0_U1TXIE_POSITION                    0x0000001C
#define _IEC0_U1TXIE_MASK                        0x10000000
#define _IEC0_U1TXIE_LENGTH                      0x00000001

#define _IEC0_I2C1BIE_POSITION                   0x0000001D
#define _IEC0_I2C1BIE_MASK                       0x20000000
#define _IEC0_I2C1BIE_LENGTH                     0x00000001

#define _IEC0_I2C1SIE_POSITION                   0x0000001E
#define _IEC0_I2C1SIE_MASK                       0x40000000
#define _IEC0_I2C1SIE_LENGTH                     0x00000001

#define _IEC0_I2C1MIE_POSITION                   0x0000001F
#define _IEC0_I2C1MIE_MASK                       0x80000000
#define _IEC0_I2C1MIE_LENGTH                     0x00000001

#define _IEC0_U1AEIE_POSITION                    0x0000001A
#define _IEC0_U1AEIE_MASK                        0x04000000
#define _IEC0_U1AEIE_LENGTH                      0x00000001

#define _IEC0_U1ARXIE_POSITION                   0x0000001B
#define _IEC0_U1ARXIE_MASK                       0x08000000
#define _IEC0_U1ARXIE_LENGTH                     0x00000001

#define _IEC0_U1ATXIE_POSITION                   0x0000001C
#define _IEC0_U1ATXIE_MASK                       0x10000000
#define _IEC0_U1ATXIE_LENGTH                     0x00000001

#define _IEC0_SPI3EIE_POSITION                   0x0000001A
#define _IEC0_SPI3EIE_MASK                       0x04000000
#define _IEC0_SPI3EIE_LENGTH                     0x00000001

#define _IEC0_SPI3RXIE_POSITION                  0x0000001B
#define _IEC0_SPI3RXIE_MASK                      0x08000000
#define _IEC0_SPI3RXIE_LENGTH                    0x00000001

#define _IEC0_SPI3TXIE_POSITION                  0x0000001C
#define _IEC0_SPI3TXIE_MASK                      0x10000000
#define _IEC0_SPI3TXIE_LENGTH                    0x00000001

#define _IEC0_SPI1AEIE_POSITION                  0x0000001A
#define _IEC0_SPI1AEIE_MASK                      0x04000000
#define _IEC0_SPI1AEIE_LENGTH                    0x00000001

#define _IEC0_SPI1ARXIE_POSITION                 0x0000001B
#define _IEC0_SPI1ARXIE_MASK                     0x08000000
#define _IEC0_SPI1ARXIE_LENGTH                   0x00000001

#define _IEC0_SPI1ATXIE_POSITION                 0x0000001C
#define _IEC0_SPI1ATXIE_MASK                     0x10000000
#define _IEC0_SPI1ATXIE_LENGTH                   0x00000001

#define _IEC0_I2C3BIE_POSITION                   0x0000001A
#define _IEC0_I2C3BIE_MASK                       0x04000000
#define _IEC0_I2C3BIE_LENGTH                     0x00000001

#define _IEC0_I2C3SIE_POSITION                   0x0000001B
#define _IEC0_I2C3SIE_MASK                       0x08000000
#define _IEC0_I2C3SIE_LENGTH                     0x00000001

#define _IEC0_I2C3MIE_POSITION                   0x0000001C
#define _IEC0_I2C3MIE_MASK                       0x10000000
#define _IEC0_I2C3MIE_LENGTH                     0x00000001

#define _IEC0_I2C1ABIE_POSITION                  0x0000001A
#define _IEC0_I2C1ABIE_MASK                      0x04000000
#define _IEC0_I2C1ABIE_LENGTH                    0x00000001

#define _IEC0_I2C1ASIE_POSITION                  0x0000001B
#define _IEC0_I2C1ASIE_MASK                      0x08000000
#define _IEC0_I2C1ASIE_LENGTH                    0x00000001

#define _IEC0_I2C1AMIE_POSITION                  0x0000001C
#define _IEC0_I2C1AMIE_MASK                      0x10000000
#define _IEC0_I2C1AMIE_LENGTH                    0x00000001

#define _IEC0_w_POSITION                         0x00000000
#define _IEC0_w_MASK                             0xFFFFFFFF
#define _IEC0_w_LENGTH                           0x00000020

#define _IEC1_CNIE_POSITION                      0x00000000
#define _IEC1_CNIE_MASK                          0x00000001
#define _IEC1_CNIE_LENGTH                        0x00000001

#define _IEC1_AD1IE_POSITION                     0x00000001
#define _IEC1_AD1IE_MASK                         0x00000002
#define _IEC1_AD1IE_LENGTH                       0x00000001

#define _IEC1_PMPIE_POSITION                     0x00000002
#define _IEC1_PMPIE_MASK                         0x00000004
#define _IEC1_PMPIE_LENGTH                       0x00000001

#define _IEC1_CMP1IE_POSITION                    0x00000003
#define _IEC1_CMP1IE_MASK                        0x00000008
#define _IEC1_CMP1IE_LENGTH                      0x00000001

#define _IEC1_CMP2IE_POSITION                    0x00000004
#define _IEC1_CMP2IE_MASK                        0x00000010
#define _IEC1_CMP2IE_LENGTH                      0x00000001

#define _IEC1_U3EIE_POSITION                     0x00000005
#define _IEC1_U3EIE_MASK                         0x00000020
#define _IEC1_U3EIE_LENGTH                       0x00000001

#define _IEC1_U3RXIE_POSITION                    0x00000006
#define _IEC1_U3RXIE_MASK                        0x00000040
#define _IEC1_U3RXIE_LENGTH                      0x00000001

#define _IEC1_U3TXIE_POSITION                    0x00000007
#define _IEC1_U3TXIE_MASK                        0x00000080
#define _IEC1_U3TXIE_LENGTH                      0x00000001

#define _IEC1_U2EIE_POSITION                     0x00000008
#define _IEC1_U2EIE_MASK                         0x00000100
#define _IEC1_U2EIE_LENGTH                       0x00000001

#define _IEC1_U2RXIE_POSITION                    0x00000009
#define _IEC1_U2RXIE_MASK                        0x00000200
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x0000000A
#define _IEC1_U2TXIE_MASK                        0x00000400
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC1_I2C2BIE_POSITION                   0x0000000B
#define _IEC1_I2C2BIE_MASK                       0x00000800
#define _IEC1_I2C2BIE_LENGTH                     0x00000001

#define _IEC1_I2C2SIE_POSITION                   0x0000000C
#define _IEC1_I2C2SIE_MASK                       0x00001000
#define _IEC1_I2C2SIE_LENGTH                     0x00000001

#define _IEC1_I2C2MIE_POSITION                   0x0000000D
#define _IEC1_I2C2MIE_MASK                       0x00002000
#define _IEC1_I2C2MIE_LENGTH                     0x00000001

#define _IEC1_FSCMIE_POSITION                    0x0000000E
#define _IEC1_FSCMIE_MASK                        0x00004000
#define _IEC1_FSCMIE_LENGTH                      0x00000001

#define _IEC1_RTCCIE_POSITION                    0x0000000F
#define _IEC1_RTCCIE_MASK                        0x00008000
#define _IEC1_RTCCIE_LENGTH                      0x00000001

#define _IEC1_DMA0IE_POSITION                    0x00000010
#define _IEC1_DMA0IE_MASK                        0x00010000
#define _IEC1_DMA0IE_LENGTH                      0x00000001

#define _IEC1_DMA1IE_POSITION                    0x00000011
#define _IEC1_DMA1IE_MASK                        0x00020000
#define _IEC1_DMA1IE_LENGTH                      0x00000001

#define _IEC1_DMA2IE_POSITION                    0x00000012
#define _IEC1_DMA2IE_MASK                        0x00040000
#define _IEC1_DMA2IE_LENGTH                      0x00000001

#define _IEC1_DMA3IE_POSITION                    0x00000013
#define _IEC1_DMA3IE_MASK                        0x00080000
#define _IEC1_DMA3IE_LENGTH                      0x00000001

#define _IEC1_DMA4IE_POSITION                    0x00000014
#define _IEC1_DMA4IE_MASK                        0x00100000
#define _IEC1_DMA4IE_LENGTH                      0x00000001

#define _IEC1_DMA5IE_POSITION                    0x00000015
#define _IEC1_DMA5IE_MASK                        0x00200000
#define _IEC1_DMA5IE_LENGTH                      0x00000001

#define _IEC1_DMA6IE_POSITION                    0x00000016
#define _IEC1_DMA6IE_MASK                        0x00400000
#define _IEC1_DMA6IE_LENGTH                      0x00000001

#define _IEC1_DMA7IE_POSITION                    0x00000017
#define _IEC1_DMA7IE_MASK                        0x00800000
#define _IEC1_DMA7IE_LENGTH                      0x00000001

#define _IEC1_FCEIE_POSITION                     0x00000018
#define _IEC1_FCEIE_MASK                         0x01000000
#define _IEC1_FCEIE_LENGTH                       0x00000001

#define _IEC1_USBIE_POSITION                     0x00000019
#define _IEC1_USBIE_MASK                         0x02000000
#define _IEC1_USBIE_LENGTH                       0x00000001

#define _IEC1_ETHIE_POSITION                     0x0000001C
#define _IEC1_ETHIE_MASK                         0x10000000
#define _IEC1_ETHIE_LENGTH                       0x00000001

#define _IEC1_IC1EIE_POSITION                    0x0000001D
#define _IEC1_IC1EIE_MASK                        0x20000000
#define _IEC1_IC1EIE_LENGTH                      0x00000001

#define _IEC1_IC2EIE_POSITION                    0x0000001E
#define _IEC1_IC2EIE_MASK                        0x40000000
#define _IEC1_IC2EIE_LENGTH                      0x00000001

#define _IEC1_IC3EIE_POSITION                    0x0000001F
#define _IEC1_IC3EIE_MASK                        0x80000000
#define _IEC1_IC3EIE_LENGTH                      0x00000001

#define _IEC1_U2AEIE_POSITION                    0x00000005
#define _IEC1_U2AEIE_MASK                        0x00000020
#define _IEC1_U2AEIE_LENGTH                      0x00000001

#define _IEC1_U2ARXIE_POSITION                   0x00000006
#define _IEC1_U2ARXIE_MASK                       0x00000040
#define _IEC1_U2ARXIE_LENGTH                     0x00000001

#define _IEC1_U2ATXIE_POSITION                   0x00000007
#define _IEC1_U2ATXIE_MASK                       0x00000080
#define _IEC1_U2ATXIE_LENGTH                     0x00000001

#define _IEC1_U3AEIE_POSITION                    0x00000008
#define _IEC1_U3AEIE_MASK                        0x00000100
#define _IEC1_U3AEIE_LENGTH                      0x00000001

#define _IEC1_U3ARXIE_POSITION                   0x00000009
#define _IEC1_U3ARXIE_MASK                       0x00000200
#define _IEC1_U3ARXIE_LENGTH                     0x00000001

#define _IEC1_U3ATXIE_POSITION                   0x0000000A
#define _IEC1_U3ATXIE_MASK                       0x00000400
#define _IEC1_U3ATXIE_LENGTH                     0x00000001

#define _IEC1_SPI2EIE_POSITION                   0x00000005
#define _IEC1_SPI2EIE_MASK                       0x00000020
#define _IEC1_SPI2EIE_LENGTH                     0x00000001

#define _IEC1_SPI2RXIE_POSITION                  0x00000006
#define _IEC1_SPI2RXIE_MASK                      0x00000040
#define _IEC1_SPI2RXIE_LENGTH                    0x00000001

#define _IEC1_SPI2TXIE_POSITION                  0x00000007
#define _IEC1_SPI2TXIE_MASK                      0x00000080
#define _IEC1_SPI2TXIE_LENGTH                    0x00000001

#define _IEC1_SPI4EIE_POSITION                   0x00000008
#define _IEC1_SPI4EIE_MASK                       0x00000100
#define _IEC1_SPI4EIE_LENGTH                     0x00000001

#define _IEC1_SPI4RXIE_POSITION                  0x00000009
#define _IEC1_SPI4RXIE_MASK                      0x00000200
#define _IEC1_SPI4RXIE_LENGTH                    0x00000001

#define _IEC1_SPI4TXIE_POSITION                  0x0000000A
#define _IEC1_SPI4TXIE_MASK                      0x00000400
#define _IEC1_SPI4TXIE_LENGTH                    0x00000001

#define _IEC1_SPI2AEIE_POSITION                  0x00000005
#define _IEC1_SPI2AEIE_MASK                      0x00000020
#define _IEC1_SPI2AEIE_LENGTH                    0x00000001

#define _IEC1_SPI2ARXIE_POSITION                 0x00000006
#define _IEC1_SPI2ARXIE_MASK                     0x00000040
#define _IEC1_SPI2ARXIE_LENGTH                   0x00000001

#define _IEC1_SPI2ATXIE_POSITION                 0x00000007
#define _IEC1_SPI2ATXIE_MASK                     0x00000080
#define _IEC1_SPI2ATXIE_LENGTH                   0x00000001

#define _IEC1_SPI3AEIE_POSITION                  0x00000008
#define _IEC1_SPI3AEIE_MASK                      0x00000100
#define _IEC1_SPI3AEIE_LENGTH                    0x00000001

#define _IEC1_SPI3ARXIE_POSITION                 0x00000009
#define _IEC1_SPI3ARXIE_MASK                     0x00000200
#define _IEC1_SPI3ARXIE_LENGTH                   0x00000001

#define _IEC1_SPI3ATXIE_POSITION                 0x0000000A
#define _IEC1_SPI3ATXIE_MASK                     0x00000400
#define _IEC1_SPI3ATXIE_LENGTH                   0x00000001

#define _IEC1_I2C4BIE_POSITION                   0x00000005
#define _IEC1_I2C4BIE_MASK                       0x00000020
#define _IEC1_I2C4BIE_LENGTH                     0x00000001

#define _IEC1_I2C4SIE_POSITION                   0x00000006
#define _IEC1_I2C4SIE_MASK                       0x00000040
#define _IEC1_I2C4SIE_LENGTH                     0x00000001

#define _IEC1_I2C4MIE_POSITION                   0x00000007
#define _IEC1_I2C4MIE_MASK                       0x00000080
#define _IEC1_I2C4MIE_LENGTH                     0x00000001

#define _IEC1_I2C5BIE_POSITION                   0x00000008
#define _IEC1_I2C5BIE_MASK                       0x00000100
#define _IEC1_I2C5BIE_LENGTH                     0x00000001

#define _IEC1_I2C5SIE_POSITION                   0x00000009
#define _IEC1_I2C5SIE_MASK                       0x00000200
#define _IEC1_I2C5SIE_LENGTH                     0x00000001

#define _IEC1_I2C5MIE_POSITION                   0x0000000A
#define _IEC1_I2C5MIE_MASK                       0x00000400
#define _IEC1_I2C5MIE_LENGTH                     0x00000001

#define _IEC1_I2C2ABIE_POSITION                  0x00000005
#define _IEC1_I2C2ABIE_MASK                      0x00000020
#define _IEC1_I2C2ABIE_LENGTH                    0x00000001

#define _IEC1_I2C2ASIE_POSITION                  0x00000006
#define _IEC1_I2C2ASIE_MASK                      0x00000040
#define _IEC1_I2C2ASIE_LENGTH                    0x00000001

#define _IEC1_I2C2AMIE_POSITION                  0x00000007
#define _IEC1_I2C2AMIE_MASK                      0x00000080
#define _IEC1_I2C2AMIE_LENGTH                    0x00000001

#define _IEC1_I2C3ABIE_POSITION                  0x00000008
#define _IEC1_I2C3ABIE_MASK                      0x00000100
#define _IEC1_I2C3ABIE_LENGTH                    0x00000001

#define _IEC1_I2C3ASIE_POSITION                  0x00000009
#define _IEC1_I2C3ASIE_MASK                      0x00000200
#define _IEC1_I2C3ASIE_LENGTH                    0x00000001

#define _IEC1_I2C3AMIE_POSITION                  0x0000000A
#define _IEC1_I2C3AMIE_MASK                      0x00000400
#define _IEC1_I2C3AMIE_LENGTH                    0x00000001

#define _IEC1_w_POSITION                         0x00000000
#define _IEC1_w_MASK                             0xFFFFFFFF
#define _IEC1_w_LENGTH                           0x00000020

#define _IEC2_IC4EIE_POSITION                    0x00000000
#define _IEC2_IC4EIE_MASK                        0x00000001
#define _IEC2_IC4EIE_LENGTH                      0x00000001

#define _IEC2_IC5EIE_POSITION                    0x00000001
#define _IEC2_IC5EIE_MASK                        0x00000002
#define _IEC2_IC5EIE_LENGTH                      0x00000001

#define _IEC2_PMPEIE_POSITION                    0x00000002
#define _IEC2_PMPEIE_MASK                        0x00000004
#define _IEC2_PMPEIE_LENGTH                      0x00000001

#define _IEC2_U1BEIE_POSITION                    0x00000003
#define _IEC2_U1BEIE_MASK                        0x00000008
#define _IEC2_U1BEIE_LENGTH                      0x00000001

#define _IEC2_U1BRXIE_POSITION                   0x00000004
#define _IEC2_U1BRXIE_MASK                       0x00000010
#define _IEC2_U1BRXIE_LENGTH                     0x00000001

#define _IEC2_U1BTXIE_POSITION                   0x00000005
#define _IEC2_U1BTXIE_MASK                       0x00000020
#define _IEC2_U1BTXIE_LENGTH                     0x00000001

#define _IEC2_U2BEIE_POSITION                    0x00000006
#define _IEC2_U2BEIE_MASK                        0x00000040
#define _IEC2_U2BEIE_LENGTH                      0x00000001

#define _IEC2_U2BRXIE_POSITION                   0x00000007
#define _IEC2_U2BRXIE_MASK                       0x00000080
#define _IEC2_U2BRXIE_LENGTH                     0x00000001

#define _IEC2_U2BTXIE_POSITION                   0x00000008
#define _IEC2_U2BTXIE_MASK                       0x00000100
#define _IEC2_U2BTXIE_LENGTH                     0x00000001

#define _IEC2_U3BEIE_POSITION                    0x00000009
#define _IEC2_U3BEIE_MASK                        0x00000200
#define _IEC2_U3BEIE_LENGTH                      0x00000001

#define _IEC2_U3BRXIE_POSITION                   0x0000000A
#define _IEC2_U3BRXIE_MASK                       0x00000400
#define _IEC2_U3BRXIE_LENGTH                     0x00000001

#define _IEC2_U3BTXIE_POSITION                   0x0000000B
#define _IEC2_U3BTXIE_MASK                       0x00000800
#define _IEC2_U3BTXIE_LENGTH                     0x00000001

#define _IEC2_U4EIE_POSITION                     0x00000003
#define _IEC2_U4EIE_MASK                         0x00000008
#define _IEC2_U4EIE_LENGTH                       0x00000001

#define _IEC2_U4RXIE_POSITION                    0x00000004
#define _IEC2_U4RXIE_MASK                        0x00000010
#define _IEC2_U4RXIE_LENGTH                      0x00000001

#define _IEC2_U4TXIE_POSITION                    0x00000005
#define _IEC2_U4TXIE_MASK                        0x00000020
#define _IEC2_U4TXIE_LENGTH                      0x00000001

#define _IEC2_U6EIE_POSITION                     0x00000006
#define _IEC2_U6EIE_MASK                         0x00000040
#define _IEC2_U6EIE_LENGTH                       0x00000001

#define _IEC2_U6RXIE_POSITION                    0x00000007
#define _IEC2_U6RXIE_MASK                        0x00000080
#define _IEC2_U6RXIE_LENGTH                      0x00000001

#define _IEC2_U6TXIE_POSITION                    0x00000008
#define _IEC2_U6TXIE_MASK                        0x00000100
#define _IEC2_U6TXIE_LENGTH                      0x00000001

#define _IEC2_U5EIE_POSITION                     0x00000009
#define _IEC2_U5EIE_MASK                         0x00000200
#define _IEC2_U5EIE_LENGTH                       0x00000001

#define _IEC2_U5RXIE_POSITION                    0x0000000A
#define _IEC2_U5RXIE_MASK                        0x00000400
#define _IEC2_U5RXIE_LENGTH                      0x00000001

#define _IEC2_U5TXIE_POSITION                    0x0000000B
#define _IEC2_U5TXIE_MASK                        0x00000800
#define _IEC2_U5TXIE_LENGTH                      0x00000001

#define _IEC2_w_POSITION                         0x00000000
#define _IEC2_w_MASK                             0xFFFFFFFF
#define _IEC2_w_LENGTH                           0x00000020

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

#define _IPC5_SPI1IS_POSITION                    0x00000018
#define _IPC5_SPI1IS_MASK                        0x03000000
#define _IPC5_SPI1IS_LENGTH                      0x00000002

#define _IPC5_SPI1IP_POSITION                    0x0000001A
#define _IPC5_SPI1IP_MASK                        0x1C000000
#define _IPC5_SPI1IP_LENGTH                      0x00000003

#define _IPC5_w_POSITION                         0x00000000
#define _IPC5_w_MASK                             0xFFFFFFFF
#define _IPC5_w_LENGTH                           0x00000020

#define _IPC6_U1IS_POSITION                      0x00000000
#define _IPC6_U1IS_MASK                          0x00000003
#define _IPC6_U1IS_LENGTH                        0x00000002

#define _IPC6_U1IP_POSITION                      0x00000002
#define _IPC6_U1IP_MASK                          0x0000001C
#define _IPC6_U1IP_LENGTH                        0x00000003

#define _IPC6_I2C1IS_POSITION                    0x00000008
#define _IPC6_I2C1IS_MASK                        0x00000300
#define _IPC6_I2C1IS_LENGTH                      0x00000002

#define _IPC6_I2C1IP_POSITION                    0x0000000A
#define _IPC6_I2C1IP_MASK                        0x00001C00
#define _IPC6_I2C1IP_LENGTH                      0x00000003

#define _IPC6_CNIS_POSITION                      0x00000010
#define _IPC6_CNIS_MASK                          0x00030000
#define _IPC6_CNIS_LENGTH                        0x00000002

#define _IPC6_CNIP_POSITION                      0x00000012
#define _IPC6_CNIP_MASK                          0x001C0000
#define _IPC6_CNIP_LENGTH                        0x00000003

#define _IPC6_AD1IS_POSITION                     0x00000018
#define _IPC6_AD1IS_MASK                         0x03000000
#define _IPC6_AD1IS_LENGTH                       0x00000002

#define _IPC6_AD1IP_POSITION                     0x0000001A
#define _IPC6_AD1IP_MASK                         0x1C000000
#define _IPC6_AD1IP_LENGTH                       0x00000003

#define _IPC6_U1AIS_POSITION                     0x00000000
#define _IPC6_U1AIS_MASK                         0x00000003
#define _IPC6_U1AIS_LENGTH                       0x00000002

#define _IPC6_U1AIP_POSITION                     0x00000002
#define _IPC6_U1AIP_MASK                         0x0000001C
#define _IPC6_U1AIP_LENGTH                       0x00000003

#define _IPC6_SPI3IS_POSITION                    0x00000000
#define _IPC6_SPI3IS_MASK                        0x00000003
#define _IPC6_SPI3IS_LENGTH                      0x00000002

#define _IPC6_SPI3IP_POSITION                    0x00000002
#define _IPC6_SPI3IP_MASK                        0x0000001C
#define _IPC6_SPI3IP_LENGTH                      0x00000003

#define _IPC6_SPI1AIS_POSITION                   0x00000000
#define _IPC6_SPI1AIS_MASK                       0x00000003
#define _IPC6_SPI1AIS_LENGTH                     0x00000002

#define _IPC6_SPI1AIP_POSITION                   0x00000002
#define _IPC6_SPI1AIP_MASK                       0x0000001C
#define _IPC6_SPI1AIP_LENGTH                     0x00000003

#define _IPC6_I2C3IS_POSITION                    0x00000000
#define _IPC6_I2C3IS_MASK                        0x00000003
#define _IPC6_I2C3IS_LENGTH                      0x00000002

#define _IPC6_I2C3IP_POSITION                    0x00000002
#define _IPC6_I2C3IP_MASK                        0x0000001C
#define _IPC6_I2C3IP_LENGTH                      0x00000003

#define _IPC6_I2C1AIS_POSITION                   0x00000000
#define _IPC6_I2C1AIS_MASK                       0x00000003
#define _IPC6_I2C1AIS_LENGTH                     0x00000002

#define _IPC6_I2C1AIP_POSITION                   0x00000002
#define _IPC6_I2C1AIP_MASK                       0x0000001C
#define _IPC6_I2C1AIP_LENGTH                     0x00000003

#define _IPC6_w_POSITION                         0x00000000
#define _IPC6_w_MASK                             0xFFFFFFFF
#define _IPC6_w_LENGTH                           0x00000020

#define _IPC7_PMPIS_POSITION                     0x00000000
#define _IPC7_PMPIS_MASK                         0x00000003
#define _IPC7_PMPIS_LENGTH                       0x00000002

#define _IPC7_PMPIP_POSITION                     0x00000002
#define _IPC7_PMPIP_MASK                         0x0000001C
#define _IPC7_PMPIP_LENGTH                       0x00000003

#define _IPC7_CMP1IS_POSITION                    0x00000008
#define _IPC7_CMP1IS_MASK                        0x00000300
#define _IPC7_CMP1IS_LENGTH                      0x00000002

#define _IPC7_CMP1IP_POSITION                    0x0000000A
#define _IPC7_CMP1IP_MASK                        0x00001C00
#define _IPC7_CMP1IP_LENGTH                      0x00000003

#define _IPC7_CMP2IS_POSITION                    0x00000010
#define _IPC7_CMP2IS_MASK                        0x00030000
#define _IPC7_CMP2IS_LENGTH                      0x00000002

#define _IPC7_CMP2IP_POSITION                    0x00000012
#define _IPC7_CMP2IP_MASK                        0x001C0000
#define _IPC7_CMP2IP_LENGTH                      0x00000003

#define _IPC7_U3IS_POSITION                      0x00000018
#define _IPC7_U3IS_MASK                          0x03000000
#define _IPC7_U3IS_LENGTH                        0x00000002

#define _IPC7_U3IP_POSITION                      0x0000001A
#define _IPC7_U3IP_MASK                          0x1C000000
#define _IPC7_U3IP_LENGTH                        0x00000003

#define _IPC7_U2AIS_POSITION                     0x00000018
#define _IPC7_U2AIS_MASK                         0x03000000
#define _IPC7_U2AIS_LENGTH                       0x00000002

#define _IPC7_U2AIP_POSITION                     0x0000001A
#define _IPC7_U2AIP_MASK                         0x1C000000
#define _IPC7_U2AIP_LENGTH                       0x00000003

#define _IPC7_SPI2IS_POSITION                    0x00000018
#define _IPC7_SPI2IS_MASK                        0x03000000
#define _IPC7_SPI2IS_LENGTH                      0x00000002

#define _IPC7_SPI2IP_POSITION                    0x0000001A
#define _IPC7_SPI2IP_MASK                        0x1C000000
#define _IPC7_SPI2IP_LENGTH                      0x00000003

#define _IPC7_SPI2AIS_POSITION                   0x00000018
#define _IPC7_SPI2AIS_MASK                       0x03000000
#define _IPC7_SPI2AIS_LENGTH                     0x00000002

#define _IPC7_SPI2AIP_POSITION                   0x0000001A
#define _IPC7_SPI2AIP_MASK                       0x1C000000
#define _IPC7_SPI2AIP_LENGTH                     0x00000003

#define _IPC7_I2C4IS_POSITION                    0x00000018
#define _IPC7_I2C4IS_MASK                        0x03000000
#define _IPC7_I2C4IS_LENGTH                      0x00000002

#define _IPC7_I2C4IP_POSITION                    0x0000001A
#define _IPC7_I2C4IP_MASK                        0x1C000000
#define _IPC7_I2C4IP_LENGTH                      0x00000003

#define _IPC7_I2C2AIS_POSITION                   0x00000018
#define _IPC7_I2C2AIS_MASK                       0x03000000
#define _IPC7_I2C2AIS_LENGTH                     0x00000002

#define _IPC7_I2C2AIP_POSITION                   0x0000001A
#define _IPC7_I2C2AIP_MASK                       0x1C000000
#define _IPC7_I2C2AIP_LENGTH                     0x00000003

#define _IPC7_w_POSITION                         0x00000000
#define _IPC7_w_MASK                             0xFFFFFFFF
#define _IPC7_w_LENGTH                           0x00000020

#define _IPC8_U2IS_POSITION                      0x00000000
#define _IPC8_U2IS_MASK                          0x00000003
#define _IPC8_U2IS_LENGTH                        0x00000002

#define _IPC8_U2IP_POSITION                      0x00000002
#define _IPC8_U2IP_MASK                          0x0000001C
#define _IPC8_U2IP_LENGTH                        0x00000003

#define _IPC8_I2C2IS_POSITION                    0x00000008
#define _IPC8_I2C2IS_MASK                        0x00000300
#define _IPC8_I2C2IS_LENGTH                      0x00000002

#define _IPC8_I2C2IP_POSITION                    0x0000000A
#define _IPC8_I2C2IP_MASK                        0x00001C00
#define _IPC8_I2C2IP_LENGTH                      0x00000003

#define _IPC8_FSCMIS_POSITION                    0x00000010
#define _IPC8_FSCMIS_MASK                        0x00030000
#define _IPC8_FSCMIS_LENGTH                      0x00000002

#define _IPC8_FSCMIP_POSITION                    0x00000012
#define _IPC8_FSCMIP_MASK                        0x001C0000
#define _IPC8_FSCMIP_LENGTH                      0x00000003

#define _IPC8_RTCCIS_POSITION                    0x00000018
#define _IPC8_RTCCIS_MASK                        0x03000000
#define _IPC8_RTCCIS_LENGTH                      0x00000002

#define _IPC8_RTCCIP_POSITION                    0x0000001A
#define _IPC8_RTCCIP_MASK                        0x1C000000
#define _IPC8_RTCCIP_LENGTH                      0x00000003

#define _IPC8_U3AIS_POSITION                     0x00000000
#define _IPC8_U3AIS_MASK                         0x00000003
#define _IPC8_U3AIS_LENGTH                       0x00000002

#define _IPC8_U3AIP_POSITION                     0x00000002
#define _IPC8_U3AIP_MASK                         0x0000001C
#define _IPC8_U3AIP_LENGTH                       0x00000003

#define _IPC8_SPI4IS_POSITION                    0x00000000
#define _IPC8_SPI4IS_MASK                        0x00000003
#define _IPC8_SPI4IS_LENGTH                      0x00000002

#define _IPC8_SPI4IP_POSITION                    0x00000002
#define _IPC8_SPI4IP_MASK                        0x0000001C
#define _IPC8_SPI4IP_LENGTH                      0x00000003

#define _IPC8_SPI3AIS_POSITION                   0x00000000
#define _IPC8_SPI3AIS_MASK                       0x00000003
#define _IPC8_SPI3AIS_LENGTH                     0x00000002

#define _IPC8_SPI3AIP_POSITION                   0x00000002
#define _IPC8_SPI3AIP_MASK                       0x0000001C
#define _IPC8_SPI3AIP_LENGTH                     0x00000003

#define _IPC8_I2C5IS_POSITION                    0x00000000
#define _IPC8_I2C5IS_MASK                        0x00000003
#define _IPC8_I2C5IS_LENGTH                      0x00000002

#define _IPC8_I2C5IP_POSITION                    0x00000002
#define _IPC8_I2C5IP_MASK                        0x0000001C
#define _IPC8_I2C5IP_LENGTH                      0x00000003

#define _IPC8_I2C3AIS_POSITION                   0x00000000
#define _IPC8_I2C3AIS_MASK                       0x00000003
#define _IPC8_I2C3AIS_LENGTH                     0x00000002

#define _IPC8_I2C3AIP_POSITION                   0x00000002
#define _IPC8_I2C3AIP_MASK                       0x0000001C
#define _IPC8_I2C3AIP_LENGTH                     0x00000003

#define _IPC8_w_POSITION                         0x00000000
#define _IPC8_w_MASK                             0xFFFFFFFF
#define _IPC8_w_LENGTH                           0x00000020

#define _IPC9_DMA0IS_POSITION                    0x00000000
#define _IPC9_DMA0IS_MASK                        0x00000003
#define _IPC9_DMA0IS_LENGTH                      0x00000002

#define _IPC9_DMA0IP_POSITION                    0x00000002
#define _IPC9_DMA0IP_MASK                        0x0000001C
#define _IPC9_DMA0IP_LENGTH                      0x00000003

#define _IPC9_DMA1IS_POSITION                    0x00000008
#define _IPC9_DMA1IS_MASK                        0x00000300
#define _IPC9_DMA1IS_LENGTH                      0x00000002

#define _IPC9_DMA1IP_POSITION                    0x0000000A
#define _IPC9_DMA1IP_MASK                        0x00001C00
#define _IPC9_DMA1IP_LENGTH                      0x00000003

#define _IPC9_DMA2IS_POSITION                    0x00000010
#define _IPC9_DMA2IS_MASK                        0x00030000
#define _IPC9_DMA2IS_LENGTH                      0x00000002

#define _IPC9_DMA2IP_POSITION                    0x00000012
#define _IPC9_DMA2IP_MASK                        0x001C0000
#define _IPC9_DMA2IP_LENGTH                      0x00000003

#define _IPC9_DMA3IS_POSITION                    0x00000018
#define _IPC9_DMA3IS_MASK                        0x03000000
#define _IPC9_DMA3IS_LENGTH                      0x00000002

#define _IPC9_DMA3IP_POSITION                    0x0000001A
#define _IPC9_DMA3IP_MASK                        0x1C000000
#define _IPC9_DMA3IP_LENGTH                      0x00000003

#define _IPC9_w_POSITION                         0x00000000
#define _IPC9_w_MASK                             0xFFFFFFFF
#define _IPC9_w_LENGTH                           0x00000020

#define _IPC10_DMA4IS_POSITION                   0x00000000
#define _IPC10_DMA4IS_MASK                       0x00000003
#define _IPC10_DMA4IS_LENGTH                     0x00000002

#define _IPC10_DMA4IP_POSITION                   0x00000002
#define _IPC10_DMA4IP_MASK                       0x0000001C
#define _IPC10_DMA4IP_LENGTH                     0x00000003

#define _IPC10_DMA5IS_POSITION                   0x00000008
#define _IPC10_DMA5IS_MASK                       0x00000300
#define _IPC10_DMA5IS_LENGTH                     0x00000002

#define _IPC10_DMA5IP_POSITION                   0x0000000A
#define _IPC10_DMA5IP_MASK                       0x00001C00
#define _IPC10_DMA5IP_LENGTH                     0x00000003

#define _IPC10_DMA6IS_POSITION                   0x00000010
#define _IPC10_DMA6IS_MASK                       0x00030000
#define _IPC10_DMA6IS_LENGTH                     0x00000002

#define _IPC10_DMA6IP_POSITION                   0x00000012
#define _IPC10_DMA6IP_MASK                       0x001C0000
#define _IPC10_DMA6IP_LENGTH                     0x00000003

#define _IPC10_DMA7IS_POSITION                   0x00000018
#define _IPC10_DMA7IS_MASK                       0x03000000
#define _IPC10_DMA7IS_LENGTH                     0x00000002

#define _IPC10_DMA7IP_POSITION                   0x0000001A
#define _IPC10_DMA7IP_MASK                       0x1C000000
#define _IPC10_DMA7IP_LENGTH                     0x00000003

#define _IPC10_w_POSITION                        0x00000000
#define _IPC10_w_MASK                            0xFFFFFFFF
#define _IPC10_w_LENGTH                          0x00000020

#define _IPC11_FCEIS_POSITION                    0x00000000
#define _IPC11_FCEIS_MASK                        0x00000003
#define _IPC11_FCEIS_LENGTH                      0x00000002

#define _IPC11_FCEIP_POSITION                    0x00000002
#define _IPC11_FCEIP_MASK                        0x0000001C
#define _IPC11_FCEIP_LENGTH                      0x00000003

#define _IPC11_USBIS_POSITION                    0x00000008
#define _IPC11_USBIS_MASK                        0x00000300
#define _IPC11_USBIS_LENGTH                      0x00000002

#define _IPC11_USBIP_POSITION                    0x0000000A
#define _IPC11_USBIP_MASK                        0x00001C00
#define _IPC11_USBIP_LENGTH                      0x00000003

#define _IPC11_w_POSITION                        0x00000000
#define _IPC11_w_MASK                            0xFFFFFFFF
#define _IPC11_w_LENGTH                          0x00000020

#define _IPC12_ETHIS_POSITION                    0x00000000
#define _IPC12_ETHIS_MASK                        0x00000003
#define _IPC12_ETHIS_LENGTH                      0x00000002

#define _IPC12_ETHIP_POSITION                    0x00000002
#define _IPC12_ETHIP_MASK                        0x0000001C
#define _IPC12_ETHIP_LENGTH                      0x00000003

#define _IPC12_U4IS_POSITION                     0x00000008
#define _IPC12_U4IS_MASK                         0x00000300
#define _IPC12_U4IS_LENGTH                       0x00000002

#define _IPC12_U4IP_POSITION                     0x0000000A
#define _IPC12_U4IP_MASK                         0x00001C00
#define _IPC12_U4IP_LENGTH                       0x00000003

#define _IPC12_U6IS_POSITION                     0x00000010
#define _IPC12_U6IS_MASK                         0x00030000
#define _IPC12_U6IS_LENGTH                       0x00000002

#define _IPC12_U6IP_POSITION                     0x00000012
#define _IPC12_U6IP_MASK                         0x001C0000
#define _IPC12_U6IP_LENGTH                       0x00000003

#define _IPC12_U5IS_POSITION                     0x00000018
#define _IPC12_U5IS_MASK                         0x03000000
#define _IPC12_U5IS_LENGTH                       0x00000002

#define _IPC12_U5IP_POSITION                     0x0000001A
#define _IPC12_U5IP_MASK                         0x1C000000
#define _IPC12_U5IP_LENGTH                       0x00000003

#define _IPC12_U1BIS_POSITION                    0x00000008
#define _IPC12_U1BIS_MASK                        0x00000300
#define _IPC12_U1BIS_LENGTH                      0x00000002

#define _IPC12_U1BIP_POSITION                    0x0000000A
#define _IPC12_U1BIP_MASK                        0x00001C00
#define _IPC12_U1BIP_LENGTH                      0x00000003

#define _IPC12_U2BIS_POSITION                    0x00000010
#define _IPC12_U2BIS_MASK                        0x00030000
#define _IPC12_U2BIS_LENGTH                      0x00000002

#define _IPC12_U2BIP_POSITION                    0x00000012
#define _IPC12_U2BIP_MASK                        0x001C0000
#define _IPC12_U2BIP_LENGTH                      0x00000003

#define _IPC12_U3BIS_POSITION                    0x00000018
#define _IPC12_U3BIS_MASK                        0x03000000
#define _IPC12_U3BIS_LENGTH                      0x00000002

#define _IPC12_U3BIP_POSITION                    0x0000001A
#define _IPC12_U3BIP_MASK                        0x1C000000
#define _IPC12_U3BIP_LENGTH                      0x00000003

#define _IPC12_w_POSITION                        0x00000000
#define _IPC12_w_MASK                            0xFFFFFFFF
#define _IPC12_w_LENGTH                          0x00000020

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

#define _DCH4CON_CHPRI_POSITION                  0x00000000
#define _DCH4CON_CHPRI_MASK                      0x00000003
#define _DCH4CON_CHPRI_LENGTH                    0x00000002

#define _DCH4CON_CHEDET_POSITION                 0x00000002
#define _DCH4CON_CHEDET_MASK                     0x00000004
#define _DCH4CON_CHEDET_LENGTH                   0x00000001

#define _DCH4CON_CHAEN_POSITION                  0x00000004
#define _DCH4CON_CHAEN_MASK                      0x00000010
#define _DCH4CON_CHAEN_LENGTH                    0x00000001

#define _DCH4CON_CHCHN_POSITION                  0x00000005
#define _DCH4CON_CHCHN_MASK                      0x00000020
#define _DCH4CON_CHCHN_LENGTH                    0x00000001

#define _DCH4CON_CHAED_POSITION                  0x00000006
#define _DCH4CON_CHAED_MASK                      0x00000040
#define _DCH4CON_CHAED_LENGTH                    0x00000001

#define _DCH4CON_CHEN_POSITION                   0x00000007
#define _DCH4CON_CHEN_MASK                       0x00000080
#define _DCH4CON_CHEN_LENGTH                     0x00000001

#define _DCH4CON_CHCHNS_POSITION                 0x00000008
#define _DCH4CON_CHCHNS_MASK                     0x00000100
#define _DCH4CON_CHCHNS_LENGTH                   0x00000001

#define _DCH4CON_CHBUSY_POSITION                 0x0000000F
#define _DCH4CON_CHBUSY_MASK                     0x00008000
#define _DCH4CON_CHBUSY_LENGTH                   0x00000001

#define _DCH4CON_w_POSITION                      0x00000000
#define _DCH4CON_w_MASK                          0xFFFFFFFF
#define _DCH4CON_w_LENGTH                        0x00000020

#define _DCH4ECON_AIRQEN_POSITION                0x00000003
#define _DCH4ECON_AIRQEN_MASK                    0x00000008
#define _DCH4ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH4ECON_SIRQEN_POSITION                0x00000004
#define _DCH4ECON_SIRQEN_MASK                    0x00000010
#define _DCH4ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH4ECON_PATEN_POSITION                 0x00000005
#define _DCH4ECON_PATEN_MASK                     0x00000020
#define _DCH4ECON_PATEN_LENGTH                   0x00000001

#define _DCH4ECON_CABORT_POSITION                0x00000006
#define _DCH4ECON_CABORT_MASK                    0x00000040
#define _DCH4ECON_CABORT_LENGTH                  0x00000001

#define _DCH4ECON_CFORCE_POSITION                0x00000007
#define _DCH4ECON_CFORCE_MASK                    0x00000080
#define _DCH4ECON_CFORCE_LENGTH                  0x00000001

#define _DCH4ECON_CHSIRQ_POSITION                0x00000008
#define _DCH4ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH4ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH4ECON_CHAIRQ_POSITION                0x00000010
#define _DCH4ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH4ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH4ECON_w_POSITION                     0x00000000
#define _DCH4ECON_w_MASK                         0xFFFFFFFF
#define _DCH4ECON_w_LENGTH                       0x00000020

#define _DCH4INT_CHERIF_POSITION                 0x00000000
#define _DCH4INT_CHERIF_MASK                     0x00000001
#define _DCH4INT_CHERIF_LENGTH                   0x00000001

#define _DCH4INT_CHTAIF_POSITION                 0x00000001
#define _DCH4INT_CHTAIF_MASK                     0x00000002
#define _DCH4INT_CHTAIF_LENGTH                   0x00000001

#define _DCH4INT_CHCCIF_POSITION                 0x00000002
#define _DCH4INT_CHCCIF_MASK                     0x00000004
#define _DCH4INT_CHCCIF_LENGTH                   0x00000001

#define _DCH4INT_CHBCIF_POSITION                 0x00000003
#define _DCH4INT_CHBCIF_MASK                     0x00000008
#define _DCH4INT_CHBCIF_LENGTH                   0x00000001

#define _DCH4INT_CHDHIF_POSITION                 0x00000004
#define _DCH4INT_CHDHIF_MASK                     0x00000010
#define _DCH4INT_CHDHIF_LENGTH                   0x00000001

#define _DCH4INT_CHDDIF_POSITION                 0x00000005
#define _DCH4INT_CHDDIF_MASK                     0x00000020
#define _DCH4INT_CHDDIF_LENGTH                   0x00000001

#define _DCH4INT_CHSHIF_POSITION                 0x00000006
#define _DCH4INT_CHSHIF_MASK                     0x00000040
#define _DCH4INT_CHSHIF_LENGTH                   0x00000001

#define _DCH4INT_CHSDIF_POSITION                 0x00000007
#define _DCH4INT_CHSDIF_MASK                     0x00000080
#define _DCH4INT_CHSDIF_LENGTH                   0x00000001

#define _DCH4INT_CHERIE_POSITION                 0x00000010
#define _DCH4INT_CHERIE_MASK                     0x00010000
#define _DCH4INT_CHERIE_LENGTH                   0x00000001

#define _DCH4INT_CHTAIE_POSITION                 0x00000011
#define _DCH4INT_CHTAIE_MASK                     0x00020000
#define _DCH4INT_CHTAIE_LENGTH                   0x00000001

#define _DCH4INT_CHCCIE_POSITION                 0x00000012
#define _DCH4INT_CHCCIE_MASK                     0x00040000
#define _DCH4INT_CHCCIE_LENGTH                   0x00000001

#define _DCH4INT_CHBCIE_POSITION                 0x00000013
#define _DCH4INT_CHBCIE_MASK                     0x00080000
#define _DCH4INT_CHBCIE_LENGTH                   0x00000001

#define _DCH4INT_CHDHIE_POSITION                 0x00000014
#define _DCH4INT_CHDHIE_MASK                     0x00100000
#define _DCH4INT_CHDHIE_LENGTH                   0x00000001

#define _DCH4INT_CHDDIE_POSITION                 0x00000015
#define _DCH4INT_CHDDIE_MASK                     0x00200000
#define _DCH4INT_CHDDIE_LENGTH                   0x00000001

#define _DCH4INT_CHSHIE_POSITION                 0x00000016
#define _DCH4INT_CHSHIE_MASK                     0x00400000
#define _DCH4INT_CHSHIE_LENGTH                   0x00000001

#define _DCH4INT_CHSDIE_POSITION                 0x00000017
#define _DCH4INT_CHSDIE_MASK                     0x00800000
#define _DCH4INT_CHSDIE_LENGTH                   0x00000001

#define _DCH4INT_w_POSITION                      0x00000000
#define _DCH4INT_w_MASK                          0xFFFFFFFF
#define _DCH4INT_w_LENGTH                        0x00000020

#define _DCH4SSA_CHSSA_POSITION                  0x00000000
#define _DCH4SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH4SSA_CHSSA_LENGTH                    0x00000020

#define _DCH4DSA_CHDSA_POSITION                  0x00000000
#define _DCH4DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH4DSA_CHDSA_LENGTH                    0x00000020

#define _DCH5CON_CHPRI_POSITION                  0x00000000
#define _DCH5CON_CHPRI_MASK                      0x00000003
#define _DCH5CON_CHPRI_LENGTH                    0x00000002

#define _DCH5CON_CHEDET_POSITION                 0x00000002
#define _DCH5CON_CHEDET_MASK                     0x00000004
#define _DCH5CON_CHEDET_LENGTH                   0x00000001

#define _DCH5CON_CHAEN_POSITION                  0x00000004
#define _DCH5CON_CHAEN_MASK                      0x00000010
#define _DCH5CON_CHAEN_LENGTH                    0x00000001

#define _DCH5CON_CHCHN_POSITION                  0x00000005
#define _DCH5CON_CHCHN_MASK                      0x00000020
#define _DCH5CON_CHCHN_LENGTH                    0x00000001

#define _DCH5CON_CHAED_POSITION                  0x00000006
#define _DCH5CON_CHAED_MASK                      0x00000040
#define _DCH5CON_CHAED_LENGTH                    0x00000001

#define _DCH5CON_CHEN_POSITION                   0x00000007
#define _DCH5CON_CHEN_MASK                       0x00000080
#define _DCH5CON_CHEN_LENGTH                     0x00000001

#define _DCH5CON_CHCHNS_POSITION                 0x00000008
#define _DCH5CON_CHCHNS_MASK                     0x00000100
#define _DCH5CON_CHCHNS_LENGTH                   0x00000001

#define _DCH5CON_CHBUSY_POSITION                 0x0000000F
#define _DCH5CON_CHBUSY_MASK                     0x00008000
#define _DCH5CON_CHBUSY_LENGTH                   0x00000001

#define _DCH5CON_w_POSITION                      0x00000000
#define _DCH5CON_w_MASK                          0xFFFFFFFF
#define _DCH5CON_w_LENGTH                        0x00000020

#define _DCH5ECON_AIRQEN_POSITION                0x00000003
#define _DCH5ECON_AIRQEN_MASK                    0x00000008
#define _DCH5ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH5ECON_SIRQEN_POSITION                0x00000004
#define _DCH5ECON_SIRQEN_MASK                    0x00000010
#define _DCH5ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH5ECON_PATEN_POSITION                 0x00000005
#define _DCH5ECON_PATEN_MASK                     0x00000020
#define _DCH5ECON_PATEN_LENGTH                   0x00000001

#define _DCH5ECON_CABORT_POSITION                0x00000006
#define _DCH5ECON_CABORT_MASK                    0x00000040
#define _DCH5ECON_CABORT_LENGTH                  0x00000001

#define _DCH5ECON_CFORCE_POSITION                0x00000007
#define _DCH5ECON_CFORCE_MASK                    0x00000080
#define _DCH5ECON_CFORCE_LENGTH                  0x00000001

#define _DCH5ECON_CHSIRQ_POSITION                0x00000008
#define _DCH5ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH5ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH5ECON_CHAIRQ_POSITION                0x00000010
#define _DCH5ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH5ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH5ECON_w_POSITION                     0x00000000
#define _DCH5ECON_w_MASK                         0xFFFFFFFF
#define _DCH5ECON_w_LENGTH                       0x00000020

#define _DCH5INT_CHERIF_POSITION                 0x00000000
#define _DCH5INT_CHERIF_MASK                     0x00000001
#define _DCH5INT_CHERIF_LENGTH                   0x00000001

#define _DCH5INT_CHTAIF_POSITION                 0x00000001
#define _DCH5INT_CHTAIF_MASK                     0x00000002
#define _DCH5INT_CHTAIF_LENGTH                   0x00000001

#define _DCH5INT_CHCCIF_POSITION                 0x00000002
#define _DCH5INT_CHCCIF_MASK                     0x00000004
#define _DCH5INT_CHCCIF_LENGTH                   0x00000001

#define _DCH5INT_CHBCIF_POSITION                 0x00000003
#define _DCH5INT_CHBCIF_MASK                     0x00000008
#define _DCH5INT_CHBCIF_LENGTH                   0x00000001

#define _DCH5INT_CHDHIF_POSITION                 0x00000004
#define _DCH5INT_CHDHIF_MASK                     0x00000010
#define _DCH5INT_CHDHIF_LENGTH                   0x00000001

#define _DCH5INT_CHDDIF_POSITION                 0x00000005
#define _DCH5INT_CHDDIF_MASK                     0x00000020
#define _DCH5INT_CHDDIF_LENGTH                   0x00000001

#define _DCH5INT_CHSHIF_POSITION                 0x00000006
#define _DCH5INT_CHSHIF_MASK                     0x00000040
#define _DCH5INT_CHSHIF_LENGTH                   0x00000001

#define _DCH5INT_CHSDIF_POSITION                 0x00000007
#define _DCH5INT_CHSDIF_MASK                     0x00000080
#define _DCH5INT_CHSDIF_LENGTH                   0x00000001

#define _DCH5INT_CHERIE_POSITION                 0x00000010
#define _DCH5INT_CHERIE_MASK                     0x00010000
#define _DCH5INT_CHERIE_LENGTH                   0x00000001

#define _DCH5INT_CHTAIE_POSITION                 0x00000011
#define _DCH5INT_CHTAIE_MASK                     0x00020000
#define _DCH5INT_CHTAIE_LENGTH                   0x00000001

#define _DCH5INT_CHCCIE_POSITION                 0x00000012
#define _DCH5INT_CHCCIE_MASK                     0x00040000
#define _DCH5INT_CHCCIE_LENGTH                   0x00000001

#define _DCH5INT_CHBCIE_POSITION                 0x00000013
#define _DCH5INT_CHBCIE_MASK                     0x00080000
#define _DCH5INT_CHBCIE_LENGTH                   0x00000001

#define _DCH5INT_CHDHIE_POSITION                 0x00000014
#define _DCH5INT_CHDHIE_MASK                     0x00100000
#define _DCH5INT_CHDHIE_LENGTH                   0x00000001

#define _DCH5INT_CHDDIE_POSITION                 0x00000015
#define _DCH5INT_CHDDIE_MASK                     0x00200000
#define _DCH5INT_CHDDIE_LENGTH                   0x00000001

#define _DCH5INT_CHSHIE_POSITION                 0x00000016
#define _DCH5INT_CHSHIE_MASK                     0x00400000
#define _DCH5INT_CHSHIE_LENGTH                   0x00000001

#define _DCH5INT_CHSDIE_POSITION                 0x00000017
#define _DCH5INT_CHSDIE_MASK                     0x00800000
#define _DCH5INT_CHSDIE_LENGTH                   0x00000001

#define _DCH5INT_w_POSITION                      0x00000000
#define _DCH5INT_w_MASK                          0xFFFFFFFF
#define _DCH5INT_w_LENGTH                        0x00000020

#define _DCH5SSA_CHSSA_POSITION                  0x00000000
#define _DCH5SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH5SSA_CHSSA_LENGTH                    0x00000020

#define _DCH5DSA_CHDSA_POSITION                  0x00000000
#define _DCH5DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH5DSA_CHDSA_LENGTH                    0x00000020

#define _DCH6CON_CHPRI_POSITION                  0x00000000
#define _DCH6CON_CHPRI_MASK                      0x00000003
#define _DCH6CON_CHPRI_LENGTH                    0x00000002

#define _DCH6CON_CHEDET_POSITION                 0x00000002
#define _DCH6CON_CHEDET_MASK                     0x00000004
#define _DCH6CON_CHEDET_LENGTH                   0x00000001

#define _DCH6CON_CHAEN_POSITION                  0x00000004
#define _DCH6CON_CHAEN_MASK                      0x00000010
#define _DCH6CON_CHAEN_LENGTH                    0x00000001

#define _DCH6CON_CHCHN_POSITION                  0x00000005
#define _DCH6CON_CHCHN_MASK                      0x00000020
#define _DCH6CON_CHCHN_LENGTH                    0x00000001

#define _DCH6CON_CHAED_POSITION                  0x00000006
#define _DCH6CON_CHAED_MASK                      0x00000040
#define _DCH6CON_CHAED_LENGTH                    0x00000001

#define _DCH6CON_CHEN_POSITION                   0x00000007
#define _DCH6CON_CHEN_MASK                       0x00000080
#define _DCH6CON_CHEN_LENGTH                     0x00000001

#define _DCH6CON_CHCHNS_POSITION                 0x00000008
#define _DCH6CON_CHCHNS_MASK                     0x00000100
#define _DCH6CON_CHCHNS_LENGTH                   0x00000001

#define _DCH6CON_CHBUSY_POSITION                 0x0000000F
#define _DCH6CON_CHBUSY_MASK                     0x00008000
#define _DCH6CON_CHBUSY_LENGTH                   0x00000001

#define _DCH6CON_w_POSITION                      0x00000000
#define _DCH6CON_w_MASK                          0xFFFFFFFF
#define _DCH6CON_w_LENGTH                        0x00000020

#define _DCH6ECON_AIRQEN_POSITION                0x00000003
#define _DCH6ECON_AIRQEN_MASK                    0x00000008
#define _DCH6ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH6ECON_SIRQEN_POSITION                0x00000004
#define _DCH6ECON_SIRQEN_MASK                    0x00000010
#define _DCH6ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH6ECON_PATEN_POSITION                 0x00000005
#define _DCH6ECON_PATEN_MASK                     0x00000020
#define _DCH6ECON_PATEN_LENGTH                   0x00000001

#define _DCH6ECON_CABORT_POSITION                0x00000006
#define _DCH6ECON_CABORT_MASK                    0x00000040
#define _DCH6ECON_CABORT_LENGTH                  0x00000001

#define _DCH6ECON_CFORCE_POSITION                0x00000007
#define _DCH6ECON_CFORCE_MASK                    0x00000080
#define _DCH6ECON_CFORCE_LENGTH                  0x00000001

#define _DCH6ECON_CHSIRQ_POSITION                0x00000008
#define _DCH6ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH6ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH6ECON_CHAIRQ_POSITION                0x00000010
#define _DCH6ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH6ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH6ECON_w_POSITION                     0x00000000
#define _DCH6ECON_w_MASK                         0xFFFFFFFF
#define _DCH6ECON_w_LENGTH                       0x00000020

#define _DCH6INT_CHERIF_POSITION                 0x00000000
#define _DCH6INT_CHERIF_MASK                     0x00000001
#define _DCH6INT_CHERIF_LENGTH                   0x00000001

#define _DCH6INT_CHTAIF_POSITION                 0x00000001
#define _DCH6INT_CHTAIF_MASK                     0x00000002
#define _DCH6INT_CHTAIF_LENGTH                   0x00000001

#define _DCH6INT_CHCCIF_POSITION                 0x00000002
#define _DCH6INT_CHCCIF_MASK                     0x00000004
#define _DCH6INT_CHCCIF_LENGTH                   0x00000001

#define _DCH6INT_CHBCIF_POSITION                 0x00000003
#define _DCH6INT_CHBCIF_MASK                     0x00000008
#define _DCH6INT_CHBCIF_LENGTH                   0x00000001

#define _DCH6INT_CHDHIF_POSITION                 0x00000004
#define _DCH6INT_CHDHIF_MASK                     0x00000010
#define _DCH6INT_CHDHIF_LENGTH                   0x00000001

#define _DCH6INT_CHDDIF_POSITION                 0x00000005
#define _DCH6INT_CHDDIF_MASK                     0x00000020
#define _DCH6INT_CHDDIF_LENGTH                   0x00000001

#define _DCH6INT_CHSHIF_POSITION                 0x00000006
#define _DCH6INT_CHSHIF_MASK                     0x00000040
#define _DCH6INT_CHSHIF_LENGTH                   0x00000001

#define _DCH6INT_CHSDIF_POSITION                 0x00000007
#define _DCH6INT_CHSDIF_MASK                     0x00000080
#define _DCH6INT_CHSDIF_LENGTH                   0x00000001

#define _DCH6INT_CHERIE_POSITION                 0x00000010
#define _DCH6INT_CHERIE_MASK                     0x00010000
#define _DCH6INT_CHERIE_LENGTH                   0x00000001

#define _DCH6INT_CHTAIE_POSITION                 0x00000011
#define _DCH6INT_CHTAIE_MASK                     0x00020000
#define _DCH6INT_CHTAIE_LENGTH                   0x00000001

#define _DCH6INT_CHCCIE_POSITION                 0x00000012
#define _DCH6INT_CHCCIE_MASK                     0x00040000
#define _DCH6INT_CHCCIE_LENGTH                   0x00000001

#define _DCH6INT_CHBCIE_POSITION                 0x00000013
#define _DCH6INT_CHBCIE_MASK                     0x00080000
#define _DCH6INT_CHBCIE_LENGTH                   0x00000001

#define _DCH6INT_CHDHIE_POSITION                 0x00000014
#define _DCH6INT_CHDHIE_MASK                     0x00100000
#define _DCH6INT_CHDHIE_LENGTH                   0x00000001

#define _DCH6INT_CHDDIE_POSITION                 0x00000015
#define _DCH6INT_CHDDIE_MASK                     0x00200000
#define _DCH6INT_CHDDIE_LENGTH                   0x00000001

#define _DCH6INT_CHSHIE_POSITION                 0x00000016
#define _DCH6INT_CHSHIE_MASK                     0x00400000
#define _DCH6INT_CHSHIE_LENGTH                   0x00000001

#define _DCH6INT_CHSDIE_POSITION                 0x00000017
#define _DCH6INT_CHSDIE_MASK                     0x00800000
#define _DCH6INT_CHSDIE_LENGTH                   0x00000001

#define _DCH6INT_w_POSITION                      0x00000000
#define _DCH6INT_w_MASK                          0xFFFFFFFF
#define _DCH6INT_w_LENGTH                        0x00000020

#define _DCH6SSA_CHSSA_POSITION                  0x00000000
#define _DCH6SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH6SSA_CHSSA_LENGTH                    0x00000020

#define _DCH6DSA_CHDSA_POSITION                  0x00000000
#define _DCH6DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH6DSA_CHDSA_LENGTH                    0x00000020

#define _DCH7CON_CHPRI_POSITION                  0x00000000
#define _DCH7CON_CHPRI_MASK                      0x00000003
#define _DCH7CON_CHPRI_LENGTH                    0x00000002

#define _DCH7CON_CHEDET_POSITION                 0x00000002
#define _DCH7CON_CHEDET_MASK                     0x00000004
#define _DCH7CON_CHEDET_LENGTH                   0x00000001

#define _DCH7CON_CHAEN_POSITION                  0x00000004
#define _DCH7CON_CHAEN_MASK                      0x00000010
#define _DCH7CON_CHAEN_LENGTH                    0x00000001

#define _DCH7CON_CHCHN_POSITION                  0x00000005
#define _DCH7CON_CHCHN_MASK                      0x00000020
#define _DCH7CON_CHCHN_LENGTH                    0x00000001

#define _DCH7CON_CHAED_POSITION                  0x00000006
#define _DCH7CON_CHAED_MASK                      0x00000040
#define _DCH7CON_CHAED_LENGTH                    0x00000001

#define _DCH7CON_CHEN_POSITION                   0x00000007
#define _DCH7CON_CHEN_MASK                       0x00000080
#define _DCH7CON_CHEN_LENGTH                     0x00000001

#define _DCH7CON_CHCHNS_POSITION                 0x00000008
#define _DCH7CON_CHCHNS_MASK                     0x00000100
#define _DCH7CON_CHCHNS_LENGTH                   0x00000001

#define _DCH7CON_CHBUSY_POSITION                 0x0000000F
#define _DCH7CON_CHBUSY_MASK                     0x00008000
#define _DCH7CON_CHBUSY_LENGTH                   0x00000001

#define _DCH7CON_w_POSITION                      0x00000000
#define _DCH7CON_w_MASK                          0xFFFFFFFF
#define _DCH7CON_w_LENGTH                        0x00000020

#define _DCH7ECON_AIRQEN_POSITION                0x00000003
#define _DCH7ECON_AIRQEN_MASK                    0x00000008
#define _DCH7ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH7ECON_SIRQEN_POSITION                0x00000004
#define _DCH7ECON_SIRQEN_MASK                    0x00000010
#define _DCH7ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH7ECON_PATEN_POSITION                 0x00000005
#define _DCH7ECON_PATEN_MASK                     0x00000020
#define _DCH7ECON_PATEN_LENGTH                   0x00000001

#define _DCH7ECON_CABORT_POSITION                0x00000006
#define _DCH7ECON_CABORT_MASK                    0x00000040
#define _DCH7ECON_CABORT_LENGTH                  0x00000001

#define _DCH7ECON_CFORCE_POSITION                0x00000007
#define _DCH7ECON_CFORCE_MASK                    0x00000080
#define _DCH7ECON_CFORCE_LENGTH                  0x00000001

#define _DCH7ECON_CHSIRQ_POSITION                0x00000008
#define _DCH7ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH7ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH7ECON_CHAIRQ_POSITION                0x00000010
#define _DCH7ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH7ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH7ECON_w_POSITION                     0x00000000
#define _DCH7ECON_w_MASK                         0xFFFFFFFF
#define _DCH7ECON_w_LENGTH                       0x00000020

#define _DCH7INT_CHERIF_POSITION                 0x00000000
#define _DCH7INT_CHERIF_MASK                     0x00000001
#define _DCH7INT_CHERIF_LENGTH                   0x00000001

#define _DCH7INT_CHTAIF_POSITION                 0x00000001
#define _DCH7INT_CHTAIF_MASK                     0x00000002
#define _DCH7INT_CHTAIF_LENGTH                   0x00000001

#define _DCH7INT_CHCCIF_POSITION                 0x00000002
#define _DCH7INT_CHCCIF_MASK                     0x00000004
#define _DCH7INT_CHCCIF_LENGTH                   0x00000001

#define _DCH7INT_CHBCIF_POSITION                 0x00000003
#define _DCH7INT_CHBCIF_MASK                     0x00000008
#define _DCH7INT_CHBCIF_LENGTH                   0x00000001

#define _DCH7INT_CHDHIF_POSITION                 0x00000004
#define _DCH7INT_CHDHIF_MASK                     0x00000010
#define _DCH7INT_CHDHIF_LENGTH                   0x00000001

#define _DCH7INT_CHDDIF_POSITION                 0x00000005
#define _DCH7INT_CHDDIF_MASK                     0x00000020
#define _DCH7INT_CHDDIF_LENGTH                   0x00000001

#define _DCH7INT_CHSHIF_POSITION                 0x00000006
#define _DCH7INT_CHSHIF_MASK                     0x00000040
#define _DCH7INT_CHSHIF_LENGTH                   0x00000001

#define _DCH7INT_CHSDIF_POSITION                 0x00000007
#define _DCH7INT_CHSDIF_MASK                     0x00000080
#define _DCH7INT_CHSDIF_LENGTH                   0x00000001

#define _DCH7INT_CHERIE_POSITION                 0x00000010
#define _DCH7INT_CHERIE_MASK                     0x00010000
#define _DCH7INT_CHERIE_LENGTH                   0x00000001

#define _DCH7INT_CHTAIE_POSITION                 0x00000011
#define _DCH7INT_CHTAIE_MASK                     0x00020000
#define _DCH7INT_CHTAIE_LENGTH                   0x00000001

#define _DCH7INT_CHCCIE_POSITION                 0x00000012
#define _DCH7INT_CHCCIE_MASK                     0x00040000
#define _DCH7INT_CHCCIE_LENGTH                   0x00000001

#define _DCH7INT_CHBCIE_POSITION                 0x00000013
#define _DCH7INT_CHBCIE_MASK                     0x00080000
#define _DCH7INT_CHBCIE_LENGTH                   0x00000001

#define _DCH7INT_CHDHIE_POSITION                 0x00000014
#define _DCH7INT_CHDHIE_MASK                     0x00100000
#define _DCH7INT_CHDHIE_LENGTH                   0x00000001

#define _DCH7INT_CHDDIE_POSITION                 0x00000015
#define _DCH7INT_CHDDIE_MASK                     0x00200000
#define _DCH7INT_CHDDIE_LENGTH                   0x00000001

#define _DCH7INT_CHSHIE_POSITION                 0x00000016
#define _DCH7INT_CHSHIE_MASK                     0x00400000
#define _DCH7INT_CHSHIE_LENGTH                   0x00000001

#define _DCH7INT_CHSDIE_POSITION                 0x00000017
#define _DCH7INT_CHSDIE_MASK                     0x00800000
#define _DCH7INT_CHSDIE_LENGTH                   0x00000001

#define _DCH7INT_w_POSITION                      0x00000000
#define _DCH7INT_w_MASK                          0xFFFFFFFF
#define _DCH7INT_w_LENGTH                        0x00000020

#define _DCH7SSA_CHSSA_POSITION                  0x00000000
#define _DCH7SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH7SSA_CHSSA_LENGTH                    0x00000020

#define _DCH7DSA_CHDSA_POSITION                  0x00000000
#define _DCH7DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH7DSA_CHDSA_LENGTH                    0x00000020

#define _CHECON_PFMWS_POSITION                   0x00000000
#define _CHECON_PFMWS_MASK                       0x00000007
#define _CHECON_PFMWS_LENGTH                     0x00000003

#define _CHECON_PREFEN_POSITION                  0x00000004
#define _CHECON_PREFEN_MASK                      0x00000030
#define _CHECON_PREFEN_LENGTH                    0x00000002

#define _CHECON_DCSZ_POSITION                    0x00000008
#define _CHECON_DCSZ_MASK                        0x00000300
#define _CHECON_DCSZ_LENGTH                      0x00000002

#define _CHECON_CHECOH_POSITION                  0x00000010
#define _CHECON_CHECOH_MASK                      0x00010000
#define _CHECON_CHECOH_LENGTH                    0x00000001

#define _CHECON_w_POSITION                       0x00000000
#define _CHECON_w_MASK                           0xFFFFFFFF
#define _CHECON_w_LENGTH                         0x00000020

#define _CHEACC_CHEIDX_POSITION                  0x00000000
#define _CHEACC_CHEIDX_MASK                      0x0000000F
#define _CHEACC_CHEIDX_LENGTH                    0x00000004

#define _CHEACC_CHEWEN_POSITION                  0x0000001F
#define _CHEACC_CHEWEN_MASK                      0x80000000
#define _CHEACC_CHEWEN_LENGTH                    0x00000001

#define _CHETAG_LTYPE_POSITION                   0x00000001
#define _CHETAG_LTYPE_MASK                       0x00000002
#define _CHETAG_LTYPE_LENGTH                     0x00000001

#define _CHETAG_LLOCK_POSITION                   0x00000002
#define _CHETAG_LLOCK_MASK                       0x00000004
#define _CHETAG_LLOCK_LENGTH                     0x00000001

#define _CHETAG_LVALID_POSITION                  0x00000003
#define _CHETAG_LVALID_MASK                      0x00000008
#define _CHETAG_LVALID_LENGTH                    0x00000001

#define _CHETAG_LTAG_POSITION                    0x00000004
#define _CHETAG_LTAG_MASK                        0x00FFFFF0
#define _CHETAG_LTAG_LENGTH                      0x00000014

#define _CHETAG_LTAGBOOT_POSITION                0x0000001F
#define _CHETAG_LTAGBOOT_MASK                    0x80000000
#define _CHETAG_LTAGBOOT_LENGTH                  0x00000001

#define _CHETAG_w_POSITION                       0x00000000
#define _CHETAG_w_MASK                           0xFFFFFFFF
#define _CHETAG_w_LENGTH                         0x00000020

#define _CHEMSK_LMASK_POSITION                   0x00000005
#define _CHEMSK_LMASK_MASK                       0x0000FFE0
#define _CHEMSK_LMASK_LENGTH                     0x0000000B

#define _CHEW0_CHEW0_POSITION                    0x00000000
#define _CHEW0_CHEW0_MASK                        0xFFFFFFFF
#define _CHEW0_CHEW0_LENGTH                      0x00000020

#define _CHEW1_CHEW1_POSITION                    0x00000000
#define _CHEW1_CHEW1_MASK                        0xFFFFFFFF
#define _CHEW1_CHEW1_LENGTH                      0x00000020

#define _CHEW2_CHEW2_POSITION                    0x00000000
#define _CHEW2_CHEW2_MASK                        0xFFFFFFFF
#define _CHEW2_CHEW2_LENGTH                      0x00000020

#define _CHEW3_CHEW3_POSITION                    0x00000000
#define _CHEW3_CHEW3_MASK                        0xFFFFFFFF
#define _CHEW3_CHEW3_LENGTH                      0x00000020

#define _CHELRU_CHELRU_POSITION                  0x00000000
#define _CHELRU_CHELRU_MASK                      0x01FFFFFF
#define _CHELRU_CHELRU_LENGTH                    0x00000019

#define _CHEHIT_CHEHIT_POSITION                  0x00000000
#define _CHEHIT_CHEHIT_MASK                      0xFFFFFFFF
#define _CHEHIT_CHEHIT_LENGTH                    0x00000020

#define _CHEMIS_CHEMIS_POSITION                  0x00000000
#define _CHEMIS_CHEMIS_MASK                      0xFFFFFFFF
#define _CHEMIS_CHEMIS_LENGTH                    0x00000020

#define _CHEPFABT_CHEPFABT_POSITION              0x00000000
#define _CHEPFABT_CHEPFABT_MASK                  0xFFFFFFFF
#define _CHEPFABT_CHEPFABT_LENGTH                0x00000020

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

#define _TRISA_TRISA5_POSITION                   0x00000005
#define _TRISA_TRISA5_MASK                       0x00000020
#define _TRISA_TRISA5_LENGTH                     0x00000001

#define _TRISA_TRISA6_POSITION                   0x00000006
#define _TRISA_TRISA6_MASK                       0x00000040
#define _TRISA_TRISA6_LENGTH                     0x00000001

#define _TRISA_TRISA7_POSITION                   0x00000007
#define _TRISA_TRISA7_MASK                       0x00000080
#define _TRISA_TRISA7_LENGTH                     0x00000001

#define _TRISA_TRISA9_POSITION                   0x00000009
#define _TRISA_TRISA9_MASK                       0x00000200
#define _TRISA_TRISA9_LENGTH                     0x00000001

#define _TRISA_TRISA10_POSITION                  0x0000000A
#define _TRISA_TRISA10_MASK                      0x00000400
#define _TRISA_TRISA10_LENGTH                    0x00000001

#define _TRISA_TRISA14_POSITION                  0x0000000E
#define _TRISA_TRISA14_MASK                      0x00004000
#define _TRISA_TRISA14_LENGTH                    0x00000001

#define _TRISA_TRISA15_POSITION                  0x0000000F
#define _TRISA_TRISA15_MASK                      0x00008000
#define _TRISA_TRISA15_LENGTH                    0x00000001

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

#define _PORTA_RA5_POSITION                      0x00000005
#define _PORTA_RA5_MASK                          0x00000020
#define _PORTA_RA5_LENGTH                        0x00000001

#define _PORTA_RA6_POSITION                      0x00000006
#define _PORTA_RA6_MASK                          0x00000040
#define _PORTA_RA6_LENGTH                        0x00000001

#define _PORTA_RA7_POSITION                      0x00000007
#define _PORTA_RA7_MASK                          0x00000080
#define _PORTA_RA7_LENGTH                        0x00000001

#define _PORTA_RA9_POSITION                      0x00000009
#define _PORTA_RA9_MASK                          0x00000200
#define _PORTA_RA9_LENGTH                        0x00000001

#define _PORTA_RA10_POSITION                     0x0000000A
#define _PORTA_RA10_MASK                         0x00000400
#define _PORTA_RA10_LENGTH                       0x00000001

#define _PORTA_RA14_POSITION                     0x0000000E
#define _PORTA_RA14_MASK                         0x00004000
#define _PORTA_RA14_LENGTH                       0x00000001

#define _PORTA_RA15_POSITION                     0x0000000F
#define _PORTA_RA15_MASK                         0x00008000
#define _PORTA_RA15_LENGTH                       0x00000001

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

#define _LATA_LATA5_POSITION                     0x00000005
#define _LATA_LATA5_MASK                         0x00000020
#define _LATA_LATA5_LENGTH                       0x00000001

#define _LATA_LATA6_POSITION                     0x00000006
#define _LATA_LATA6_MASK                         0x00000040
#define _LATA_LATA6_LENGTH                       0x00000001

#define _LATA_LATA7_POSITION                     0x00000007
#define _LATA_LATA7_MASK                         0x00000080
#define _LATA_LATA7_LENGTH                       0x00000001

#define _LATA_LATA9_POSITION                     0x00000009
#define _LATA_LATA9_MASK                         0x00000200
#define _LATA_LATA9_LENGTH                       0x00000001

#define _LATA_LATA10_POSITION                    0x0000000A
#define _LATA_LATA10_MASK                        0x00000400
#define _LATA_LATA10_LENGTH                      0x00000001

#define _LATA_LATA14_POSITION                    0x0000000E
#define _LATA_LATA14_MASK                        0x00004000
#define _LATA_LATA14_LENGTH                      0x00000001

#define _LATA_LATA15_POSITION                    0x0000000F
#define _LATA_LATA15_MASK                        0x00008000
#define _LATA_LATA15_LENGTH                      0x00000001

#define _LATA_w_POSITION                         0x00000000
#define _LATA_w_MASK                             0xFFFFFFFF
#define _LATA_w_LENGTH                           0x00000020

#define _ODCA_ODCA0_POSITION                     0x00000000
#define _ODCA_ODCA0_MASK                         0x00000001
#define _ODCA_ODCA0_LENGTH                       0x00000001

#define _ODCA_ODCA1_POSITION                     0x00000001
#define _ODCA_ODCA1_MASK                         0x00000002
#define _ODCA_ODCA1_LENGTH                       0x00000001

#define _ODCA_ODCA2_POSITION                     0x00000002
#define _ODCA_ODCA2_MASK                         0x00000004
#define _ODCA_ODCA2_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

#define _ODCA_ODCA5_POSITION                     0x00000005
#define _ODCA_ODCA5_MASK                         0x00000020
#define _ODCA_ODCA5_LENGTH                       0x00000001

#define _ODCA_ODCA6_POSITION                     0x00000006
#define _ODCA_ODCA6_MASK                         0x00000040
#define _ODCA_ODCA6_LENGTH                       0x00000001

#define _ODCA_ODCA7_POSITION                     0x00000007
#define _ODCA_ODCA7_MASK                         0x00000080
#define _ODCA_ODCA7_LENGTH                       0x00000001

#define _ODCA_ODCA9_POSITION                     0x00000009
#define _ODCA_ODCA9_MASK                         0x00000200
#define _ODCA_ODCA9_LENGTH                       0x00000001

#define _ODCA_ODCA10_POSITION                    0x0000000A
#define _ODCA_ODCA10_MASK                        0x00000400
#define _ODCA_ODCA10_LENGTH                      0x00000001

#define _ODCA_ODCA14_POSITION                    0x0000000E
#define _ODCA_ODCA14_MASK                        0x00004000
#define _ODCA_ODCA14_LENGTH                      0x00000001

#define _ODCA_ODCA15_POSITION                    0x0000000F
#define _ODCA_ODCA15_MASK                        0x00008000
#define _ODCA_ODCA15_LENGTH                      0x00000001

#define _ODCA_w_POSITION                         0x00000000
#define _ODCA_w_MASK                             0xFFFFFFFF
#define _ODCA_w_LENGTH                           0x00000020

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

#define _TRISB_TRISB6_POSITION                   0x00000006
#define _TRISB_TRISB6_MASK                       0x00000040
#define _TRISB_TRISB6_LENGTH                     0x00000001

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

#define _TRISB_TRISB12_POSITION                  0x0000000C
#define _TRISB_TRISB12_MASK                      0x00001000
#define _TRISB_TRISB12_LENGTH                    0x00000001

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

#define _PORTB_RB6_POSITION                      0x00000006
#define _PORTB_RB6_MASK                          0x00000040
#define _PORTB_RB6_LENGTH                        0x00000001

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

#define _PORTB_RB12_POSITION                     0x0000000C
#define _PORTB_RB12_MASK                         0x00001000
#define _PORTB_RB12_LENGTH                       0x00000001

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

#define _LATB_LATB6_POSITION                     0x00000006
#define _LATB_LATB6_MASK                         0x00000040
#define _LATB_LATB6_LENGTH                       0x00000001

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

#define _LATB_LATB12_POSITION                    0x0000000C
#define _LATB_LATB12_MASK                        0x00001000
#define _LATB_LATB12_LENGTH                      0x00000001

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

#define _ODCB_ODCB6_POSITION                     0x00000006
#define _ODCB_ODCB6_MASK                         0x00000040
#define _ODCB_ODCB6_LENGTH                       0x00000001

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

#define _ODCB_ODCB12_POSITION                    0x0000000C
#define _ODCB_ODCB12_MASK                        0x00001000
#define _ODCB_ODCB12_LENGTH                      0x00000001

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

#define _TRISC_TRISC12_POSITION                  0x0000000C
#define _TRISC_TRISC12_MASK                      0x00001000
#define _TRISC_TRISC12_LENGTH                    0x00000001

#define _TRISC_TRISC13_POSITION                  0x0000000D
#define _TRISC_TRISC13_MASK                      0x00002000
#define _TRISC_TRISC13_LENGTH                    0x00000001

#define _TRISC_TRISC14_POSITION                  0x0000000E
#define _TRISC_TRISC14_MASK                      0x00004000
#define _TRISC_TRISC14_LENGTH                    0x00000001

#define _TRISC_TRISC15_POSITION                  0x0000000F
#define _TRISC_TRISC15_MASK                      0x00008000
#define _TRISC_TRISC15_LENGTH                    0x00000001

#define _TRISC_w_POSITION                        0x00000000
#define _TRISC_w_MASK                            0xFFFFFFFF
#define _TRISC_w_LENGTH                          0x00000020

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

#define _PORTC_RC12_POSITION                     0x0000000C
#define _PORTC_RC12_MASK                         0x00001000
#define _PORTC_RC12_LENGTH                       0x00000001

#define _PORTC_RC13_POSITION                     0x0000000D
#define _PORTC_RC13_MASK                         0x00002000
#define _PORTC_RC13_LENGTH                       0x00000001

#define _PORTC_RC14_POSITION                     0x0000000E
#define _PORTC_RC14_MASK                         0x00004000
#define _PORTC_RC14_LENGTH                       0x00000001

#define _PORTC_RC15_POSITION                     0x0000000F
#define _PORTC_RC15_MASK                         0x00008000
#define _PORTC_RC15_LENGTH                       0x00000001

#define _PORTC_w_POSITION                        0x00000000
#define _PORTC_w_MASK                            0xFFFFFFFF
#define _PORTC_w_LENGTH                          0x00000020

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

#define _LATC_LATC12_POSITION                    0x0000000C
#define _LATC_LATC12_MASK                        0x00001000
#define _LATC_LATC12_LENGTH                      0x00000001

#define _LATC_LATC13_POSITION                    0x0000000D
#define _LATC_LATC13_MASK                        0x00002000
#define _LATC_LATC13_LENGTH                      0x00000001

#define _LATC_LATC14_POSITION                    0x0000000E
#define _LATC_LATC14_MASK                        0x00004000
#define _LATC_LATC14_LENGTH                      0x00000001

#define _LATC_LATC15_POSITION                    0x0000000F
#define _LATC_LATC15_MASK                        0x00008000
#define _LATC_LATC15_LENGTH                      0x00000001

#define _LATC_w_POSITION                         0x00000000
#define _LATC_w_MASK                             0xFFFFFFFF
#define _LATC_w_LENGTH                           0x00000020

#define _ODCC_ODCC1_POSITION                     0x00000001
#define _ODCC_ODCC1_MASK                         0x00000002
#define _ODCC_ODCC1_LENGTH                       0x00000001

#define _ODCC_ODCC2_POSITION                     0x00000002
#define _ODCC_ODCC2_MASK                         0x00000004
#define _ODCC_ODCC2_LENGTH                       0x00000001

#define _ODCC_ODCC3_POSITION                     0x00000003
#define _ODCC_ODCC3_MASK                         0x00000008
#define _ODCC_ODCC3_LENGTH                       0x00000001

#define _ODCC_ODCC4_POSITION                     0x00000004
#define _ODCC_ODCC4_MASK                         0x00000010
#define _ODCC_ODCC4_LENGTH                       0x00000001

#define _ODCC_ODCC12_POSITION                    0x0000000C
#define _ODCC_ODCC12_MASK                        0x00001000
#define _ODCC_ODCC12_LENGTH                      0x00000001

#define _ODCC_ODCC13_POSITION                    0x0000000D
#define _ODCC_ODCC13_MASK                        0x00002000
#define _ODCC_ODCC13_LENGTH                      0x00000001

#define _ODCC_ODCC14_POSITION                    0x0000000E
#define _ODCC_ODCC14_MASK                        0x00004000
#define _ODCC_ODCC14_LENGTH                      0x00000001

#define _ODCC_ODCC15_POSITION                    0x0000000F
#define _ODCC_ODCC15_MASK                        0x00008000
#define _ODCC_ODCC15_LENGTH                      0x00000001

#define _ODCC_w_POSITION                         0x00000000
#define _ODCC_w_MASK                             0xFFFFFFFF
#define _ODCC_w_LENGTH                           0x00000020

#define _TRISD_TRISD0_POSITION                   0x00000000
#define _TRISD_TRISD0_MASK                       0x00000001
#define _TRISD_TRISD0_LENGTH                     0x00000001

#define _TRISD_TRISD1_POSITION                   0x00000001
#define _TRISD_TRISD1_MASK                       0x00000002
#define _TRISD_TRISD1_LENGTH                     0x00000001

#define _TRISD_TRISD2_POSITION                   0x00000002
#define _TRISD_TRISD2_MASK                       0x00000004
#define _TRISD_TRISD2_LENGTH                     0x00000001

#define _TRISD_TRISD3_POSITION                   0x00000003
#define _TRISD_TRISD3_MASK                       0x00000008
#define _TRISD_TRISD3_LENGTH                     0x00000001

#define _TRISD_TRISD4_POSITION                   0x00000004
#define _TRISD_TRISD4_MASK                       0x00000010
#define _TRISD_TRISD4_LENGTH                     0x00000001

#define _TRISD_TRISD5_POSITION                   0x00000005
#define _TRISD_TRISD5_MASK                       0x00000020
#define _TRISD_TRISD5_LENGTH                     0x00000001

#define _TRISD_TRISD6_POSITION                   0x00000006
#define _TRISD_TRISD6_MASK                       0x00000040
#define _TRISD_TRISD6_LENGTH                     0x00000001

#define _TRISD_TRISD7_POSITION                   0x00000007
#define _TRISD_TRISD7_MASK                       0x00000080
#define _TRISD_TRISD7_LENGTH                     0x00000001

#define _TRISD_TRISD8_POSITION                   0x00000008
#define _TRISD_TRISD8_MASK                       0x00000100
#define _TRISD_TRISD8_LENGTH                     0x00000001

#define _TRISD_TRISD9_POSITION                   0x00000009
#define _TRISD_TRISD9_MASK                       0x00000200
#define _TRISD_TRISD9_LENGTH                     0x00000001

#define _TRISD_TRISD10_POSITION                  0x0000000A
#define _TRISD_TRISD10_MASK                      0x00000400
#define _TRISD_TRISD10_LENGTH                    0x00000001

#define _TRISD_TRISD11_POSITION                  0x0000000B
#define _TRISD_TRISD11_MASK                      0x00000800
#define _TRISD_TRISD11_LENGTH                    0x00000001

#define _TRISD_TRISD12_POSITION                  0x0000000C
#define _TRISD_TRISD12_MASK                      0x00001000
#define _TRISD_TRISD12_LENGTH                    0x00000001

#define _TRISD_TRISD13_POSITION                  0x0000000D
#define _TRISD_TRISD13_MASK                      0x00002000
#define _TRISD_TRISD13_LENGTH                    0x00000001

#define _TRISD_TRISD14_POSITION                  0x0000000E
#define _TRISD_TRISD14_MASK                      0x00004000
#define _TRISD_TRISD14_LENGTH                    0x00000001

#define _TRISD_TRISD15_POSITION                  0x0000000F
#define _TRISD_TRISD15_MASK                      0x00008000
#define _TRISD_TRISD15_LENGTH                    0x00000001

#define _TRISD_w_POSITION                        0x00000000
#define _TRISD_w_MASK                            0xFFFFFFFF
#define _TRISD_w_LENGTH                          0x00000020

#define _PORTD_RD0_POSITION                      0x00000000
#define _PORTD_RD0_MASK                          0x00000001
#define _PORTD_RD0_LENGTH                        0x00000001

#define _PORTD_RD1_POSITION                      0x00000001
#define _PORTD_RD1_MASK                          0x00000002
#define _PORTD_RD1_LENGTH                        0x00000001

#define _PORTD_RD2_POSITION                      0x00000002
#define _PORTD_RD2_MASK                          0x00000004
#define _PORTD_RD2_LENGTH                        0x00000001

#define _PORTD_RD3_POSITION                      0x00000003
#define _PORTD_RD3_MASK                          0x00000008
#define _PORTD_RD3_LENGTH                        0x00000001

#define _PORTD_RD4_POSITION                      0x00000004
#define _PORTD_RD4_MASK                          0x00000010
#define _PORTD_RD4_LENGTH                        0x00000001

#define _PORTD_RD5_POSITION                      0x00000005
#define _PORTD_RD5_MASK                          0x00000020
#define _PORTD_RD5_LENGTH                        0x00000001

#define _PORTD_RD6_POSITION                      0x00000006
#define _PORTD_RD6_MASK                          0x00000040
#define _PORTD_RD6_LENGTH                        0x00000001

#define _PORTD_RD7_POSITION                      0x00000007
#define _PORTD_RD7_MASK                          0x00000080
#define _PORTD_RD7_LENGTH                        0x00000001

#define _PORTD_RD8_POSITION                      0x00000008
#define _PORTD_RD8_MASK                          0x00000100
#define _PORTD_RD8_LENGTH                        0x00000001

#define _PORTD_RD9_POSITION                      0x00000009
#define _PORTD_RD9_MASK                          0x00000200
#define _PORTD_RD9_LENGTH                        0x00000001

#define _PORTD_RD10_POSITION                     0x0000000A
#define _PORTD_RD10_MASK                         0x00000400
#define _PORTD_RD10_LENGTH                       0x00000001

#define _PORTD_RD11_POSITION                     0x0000000B
#define _PORTD_RD11_MASK                         0x00000800
#define _PORTD_RD11_LENGTH                       0x00000001

#define _PORTD_RD12_POSITION                     0x0000000C
#define _PORTD_RD12_MASK                         0x00001000
#define _PORTD_RD12_LENGTH                       0x00000001

#define _PORTD_RD13_POSITION                     0x0000000D
#define _PORTD_RD13_MASK                         0x00002000
#define _PORTD_RD13_LENGTH                       0x00000001

#define _PORTD_RD14_POSITION                     0x0000000E
#define _PORTD_RD14_MASK                         0x00004000
#define _PORTD_RD14_LENGTH                       0x00000001

#define _PORTD_RD15_POSITION                     0x0000000F
#define _PORTD_RD15_MASK                         0x00008000
#define _PORTD_RD15_LENGTH                       0x00000001

#define _PORTD_w_POSITION                        0x00000000
#define _PORTD_w_MASK                            0xFFFFFFFF
#define _PORTD_w_LENGTH                          0x00000020

#define _LATD_LATD0_POSITION                     0x00000000
#define _LATD_LATD0_MASK                         0x00000001
#define _LATD_LATD0_LENGTH                       0x00000001

#define _LATD_LATD1_POSITION                     0x00000001
#define _LATD_LATD1_MASK                         0x00000002
#define _LATD_LATD1_LENGTH                       0x00000001

#define _LATD_LATD2_POSITION                     0x00000002
#define _LATD_LATD2_MASK                         0x00000004
#define _LATD_LATD2_LENGTH                       0x00000001

#define _LATD_LATD3_POSITION                     0x00000003
#define _LATD_LATD3_MASK                         0x00000008
#define _LATD_LATD3_LENGTH                       0x00000001

#define _LATD_LATD4_POSITION                     0x00000004
#define _LATD_LATD4_MASK                         0x00000010
#define _LATD_LATD4_LENGTH                       0x00000001

#define _LATD_LATD5_POSITION                     0x00000005
#define _LATD_LATD5_MASK                         0x00000020
#define _LATD_LATD5_LENGTH                       0x00000001

#define _LATD_LATD6_POSITION                     0x00000006
#define _LATD_LATD6_MASK                         0x00000040
#define _LATD_LATD6_LENGTH                       0x00000001

#define _LATD_LATD7_POSITION                     0x00000007
#define _LATD_LATD7_MASK                         0x00000080
#define _LATD_LATD7_LENGTH                       0x00000001

#define _LATD_LATD8_POSITION                     0x00000008
#define _LATD_LATD8_MASK                         0x00000100
#define _LATD_LATD8_LENGTH                       0x00000001

#define _LATD_LATD9_POSITION                     0x00000009
#define _LATD_LATD9_MASK                         0x00000200
#define _LATD_LATD9_LENGTH                       0x00000001

#define _LATD_LATD10_POSITION                    0x0000000A
#define _LATD_LATD10_MASK                        0x00000400
#define _LATD_LATD10_LENGTH                      0x00000001

#define _LATD_LATD11_POSITION                    0x0000000B
#define _LATD_LATD11_MASK                        0x00000800
#define _LATD_LATD11_LENGTH                      0x00000001

#define _LATD_LATD12_POSITION                    0x0000000C
#define _LATD_LATD12_MASK                        0x00001000
#define _LATD_LATD12_LENGTH                      0x00000001

#define _LATD_LATD13_POSITION                    0x0000000D
#define _LATD_LATD13_MASK                        0x00002000
#define _LATD_LATD13_LENGTH                      0x00000001

#define _LATD_LATD14_POSITION                    0x0000000E
#define _LATD_LATD14_MASK                        0x00004000
#define _LATD_LATD14_LENGTH                      0x00000001

#define _LATD_LATD15_POSITION                    0x0000000F
#define _LATD_LATD15_MASK                        0x00008000
#define _LATD_LATD15_LENGTH                      0x00000001

#define _LATD_w_POSITION                         0x00000000
#define _LATD_w_MASK                             0xFFFFFFFF
#define _LATD_w_LENGTH                           0x00000020

#define _ODCD_ODCD0_POSITION                     0x00000000
#define _ODCD_ODCD0_MASK                         0x00000001
#define _ODCD_ODCD0_LENGTH                       0x00000001

#define _ODCD_ODCD1_POSITION                     0x00000001
#define _ODCD_ODCD1_MASK                         0x00000002
#define _ODCD_ODCD1_LENGTH                       0x00000001

#define _ODCD_ODCD2_POSITION                     0x00000002
#define _ODCD_ODCD2_MASK                         0x00000004
#define _ODCD_ODCD2_LENGTH                       0x00000001

#define _ODCD_ODCD3_POSITION                     0x00000003
#define _ODCD_ODCD3_MASK                         0x00000008
#define _ODCD_ODCD3_LENGTH                       0x00000001

#define _ODCD_ODCD4_POSITION                     0x00000004
#define _ODCD_ODCD4_MASK                         0x00000010
#define _ODCD_ODCD4_LENGTH                       0x00000001

#define _ODCD_ODCD5_POSITION                     0x00000005
#define _ODCD_ODCD5_MASK                         0x00000020
#define _ODCD_ODCD5_LENGTH                       0x00000001

#define _ODCD_ODCD6_POSITION                     0x00000006
#define _ODCD_ODCD6_MASK                         0x00000040
#define _ODCD_ODCD6_LENGTH                       0x00000001

#define _ODCD_ODCD7_POSITION                     0x00000007
#define _ODCD_ODCD7_MASK                         0x00000080
#define _ODCD_ODCD7_LENGTH                       0x00000001

#define _ODCD_ODCD8_POSITION                     0x00000008
#define _ODCD_ODCD8_MASK                         0x00000100
#define _ODCD_ODCD8_LENGTH                       0x00000001

#define _ODCD_ODCD9_POSITION                     0x00000009
#define _ODCD_ODCD9_MASK                         0x00000200
#define _ODCD_ODCD9_LENGTH                       0x00000001

#define _ODCD_ODCD10_POSITION                    0x0000000A
#define _ODCD_ODCD10_MASK                        0x00000400
#define _ODCD_ODCD10_LENGTH                      0x00000001

#define _ODCD_ODCD11_POSITION                    0x0000000B
#define _ODCD_ODCD11_MASK                        0x00000800
#define _ODCD_ODCD11_LENGTH                      0x00000001

#define _ODCD_ODCD12_POSITION                    0x0000000C
#define _ODCD_ODCD12_MASK                        0x00001000
#define _ODCD_ODCD12_LENGTH                      0x00000001

#define _ODCD_ODCD13_POSITION                    0x0000000D
#define _ODCD_ODCD13_MASK                        0x00002000
#define _ODCD_ODCD13_LENGTH                      0x00000001

#define _ODCD_ODCD14_POSITION                    0x0000000E
#define _ODCD_ODCD14_MASK                        0x00004000
#define _ODCD_ODCD14_LENGTH                      0x00000001

#define _ODCD_ODCD15_POSITION                    0x0000000F
#define _ODCD_ODCD15_MASK                        0x00008000
#define _ODCD_ODCD15_LENGTH                      0x00000001

#define _ODCD_w_POSITION                         0x00000000
#define _ODCD_w_MASK                             0xFFFFFFFF
#define _ODCD_w_LENGTH                           0x00000020

#define _TRISE_TRISE0_POSITION                   0x00000000
#define _TRISE_TRISE0_MASK                       0x00000001
#define _TRISE_TRISE0_LENGTH                     0x00000001

#define _TRISE_TRISE1_POSITION                   0x00000001
#define _TRISE_TRISE1_MASK                       0x00000002
#define _TRISE_TRISE1_LENGTH                     0x00000001

#define _TRISE_TRISE2_POSITION                   0x00000002
#define _TRISE_TRISE2_MASK                       0x00000004
#define _TRISE_TRISE2_LENGTH                     0x00000001

#define _TRISE_TRISE3_POSITION                   0x00000003
#define _TRISE_TRISE3_MASK                       0x00000008
#define _TRISE_TRISE3_LENGTH                     0x00000001

#define _TRISE_TRISE4_POSITION                   0x00000004
#define _TRISE_TRISE4_MASK                       0x00000010
#define _TRISE_TRISE4_LENGTH                     0x00000001

#define _TRISE_TRISE5_POSITION                   0x00000005
#define _TRISE_TRISE5_MASK                       0x00000020
#define _TRISE_TRISE5_LENGTH                     0x00000001

#define _TRISE_TRISE6_POSITION                   0x00000006
#define _TRISE_TRISE6_MASK                       0x00000040
#define _TRISE_TRISE6_LENGTH                     0x00000001

#define _TRISE_TRISE7_POSITION                   0x00000007
#define _TRISE_TRISE7_MASK                       0x00000080
#define _TRISE_TRISE7_LENGTH                     0x00000001

#define _TRISE_TRISE8_POSITION                   0x00000008
#define _TRISE_TRISE8_MASK                       0x00000100
#define _TRISE_TRISE8_LENGTH                     0x00000001

#define _TRISE_TRISE9_POSITION                   0x00000009
#define _TRISE_TRISE9_MASK                       0x00000200
#define _TRISE_TRISE9_LENGTH                     0x00000001

#define _TRISE_w_POSITION                        0x00000000
#define _TRISE_w_MASK                            0xFFFFFFFF
#define _TRISE_w_LENGTH                          0x00000020

#define _PORTE_RE0_POSITION                      0x00000000
#define _PORTE_RE0_MASK                          0x00000001
#define _PORTE_RE0_LENGTH                        0x00000001

#define _PORTE_RE1_POSITION                      0x00000001
#define _PORTE_RE1_MASK                          0x00000002
#define _PORTE_RE1_LENGTH                        0x00000001

#define _PORTE_RE2_POSITION                      0x00000002
#define _PORTE_RE2_MASK                          0x00000004
#define _PORTE_RE2_LENGTH                        0x00000001

#define _PORTE_RE3_POSITION                      0x00000003
#define _PORTE_RE3_MASK                          0x00000008
#define _PORTE_RE3_LENGTH                        0x00000001

#define _PORTE_RE4_POSITION                      0x00000004
#define _PORTE_RE4_MASK                          0x00000010
#define _PORTE_RE4_LENGTH                        0x00000001

#define _PORTE_RE5_POSITION                      0x00000005
#define _PORTE_RE5_MASK                          0x00000020
#define _PORTE_RE5_LENGTH                        0x00000001

#define _PORTE_RE6_POSITION                      0x00000006
#define _PORTE_RE6_MASK                          0x00000040
#define _PORTE_RE6_LENGTH                        0x00000001

#define _PORTE_RE7_POSITION                      0x00000007
#define _PORTE_RE7_MASK                          0x00000080
#define _PORTE_RE7_LENGTH                        0x00000001

#define _PORTE_RE8_POSITION                      0x00000008
#define _PORTE_RE8_MASK                          0x00000100
#define _PORTE_RE8_LENGTH                        0x00000001

#define _PORTE_RE9_POSITION                      0x00000009
#define _PORTE_RE9_MASK                          0x00000200
#define _PORTE_RE9_LENGTH                        0x00000001

#define _PORTE_w_POSITION                        0x00000000
#define _PORTE_w_MASK                            0xFFFFFFFF
#define _PORTE_w_LENGTH                          0x00000020

#define _LATE_LATE0_POSITION                     0x00000000
#define _LATE_LATE0_MASK                         0x00000001
#define _LATE_LATE0_LENGTH                       0x00000001

#define _LATE_LATE1_POSITION                     0x00000001
#define _LATE_LATE1_MASK                         0x00000002
#define _LATE_LATE1_LENGTH                       0x00000001

#define _LATE_LATE2_POSITION                     0x00000002
#define _LATE_LATE2_MASK                         0x00000004
#define _LATE_LATE2_LENGTH                       0x00000001

#define _LATE_LATE3_POSITION                     0x00000003
#define _LATE_LATE3_MASK                         0x00000008
#define _LATE_LATE3_LENGTH                       0x00000001

#define _LATE_LATE4_POSITION                     0x00000004
#define _LATE_LATE4_MASK                         0x00000010
#define _LATE_LATE4_LENGTH                       0x00000001

#define _LATE_LATE5_POSITION                     0x00000005
#define _LATE_LATE5_MASK                         0x00000020
#define _LATE_LATE5_LENGTH                       0x00000001

#define _LATE_LATE6_POSITION                     0x00000006
#define _LATE_LATE6_MASK                         0x00000040
#define _LATE_LATE6_LENGTH                       0x00000001

#define _LATE_LATE7_POSITION                     0x00000007
#define _LATE_LATE7_MASK                         0x00000080
#define _LATE_LATE7_LENGTH                       0x00000001

#define _LATE_LATE8_POSITION                     0x00000008
#define _LATE_LATE8_MASK                         0x00000100
#define _LATE_LATE8_LENGTH                       0x00000001

#define _LATE_LATE9_POSITION                     0x00000009
#define _LATE_LATE9_MASK                         0x00000200
#define _LATE_LATE9_LENGTH                       0x00000001

#define _LATE_w_POSITION                         0x00000000
#define _LATE_w_MASK                             0xFFFFFFFF
#define _LATE_w_LENGTH                           0x00000020

#define _ODCE_ODCE0_POSITION                     0x00000000
#define _ODCE_ODCE0_MASK                         0x00000001
#define _ODCE_ODCE0_LENGTH                       0x00000001

#define _ODCE_ODCE1_POSITION                     0x00000001
#define _ODCE_ODCE1_MASK                         0x00000002
#define _ODCE_ODCE1_LENGTH                       0x00000001

#define _ODCE_ODCE2_POSITION                     0x00000002
#define _ODCE_ODCE2_MASK                         0x00000004
#define _ODCE_ODCE2_LENGTH                       0x00000001

#define _ODCE_ODCE3_POSITION                     0x00000003
#define _ODCE_ODCE3_MASK                         0x00000008
#define _ODCE_ODCE3_LENGTH                       0x00000001

#define _ODCE_ODCE4_POSITION                     0x00000004
#define _ODCE_ODCE4_MASK                         0x00000010
#define _ODCE_ODCE4_LENGTH                       0x00000001

#define _ODCE_ODCE5_POSITION                     0x00000005
#define _ODCE_ODCE5_MASK                         0x00000020
#define _ODCE_ODCE5_LENGTH                       0x00000001

#define _ODCE_ODCE6_POSITION                     0x00000006
#define _ODCE_ODCE6_MASK                         0x00000040
#define _ODCE_ODCE6_LENGTH                       0x00000001

#define _ODCE_ODCE7_POSITION                     0x00000007
#define _ODCE_ODCE7_MASK                         0x00000080
#define _ODCE_ODCE7_LENGTH                       0x00000001

#define _ODCE_ODCE8_POSITION                     0x00000008
#define _ODCE_ODCE8_MASK                         0x00000100
#define _ODCE_ODCE8_LENGTH                       0x00000001

#define _ODCE_ODCE9_POSITION                     0x00000009
#define _ODCE_ODCE9_MASK                         0x00000200
#define _ODCE_ODCE9_LENGTH                       0x00000001

#define _ODCE_w_POSITION                         0x00000000
#define _ODCE_w_MASK                             0xFFFFFFFF
#define _ODCE_w_LENGTH                           0x00000020

#define _TRISF_TRISF0_POSITION                   0x00000000
#define _TRISF_TRISF0_MASK                       0x00000001
#define _TRISF_TRISF0_LENGTH                     0x00000001

#define _TRISF_TRISF1_POSITION                   0x00000001
#define _TRISF_TRISF1_MASK                       0x00000002
#define _TRISF_TRISF1_LENGTH                     0x00000001

#define _TRISF_TRISF2_POSITION                   0x00000002
#define _TRISF_TRISF2_MASK                       0x00000004
#define _TRISF_TRISF2_LENGTH                     0x00000001

#define _TRISF_TRISF3_POSITION                   0x00000003
#define _TRISF_TRISF3_MASK                       0x00000008
#define _TRISF_TRISF3_LENGTH                     0x00000001

#define _TRISF_TRISF4_POSITION                   0x00000004
#define _TRISF_TRISF4_MASK                       0x00000010
#define _TRISF_TRISF4_LENGTH                     0x00000001

#define _TRISF_TRISF5_POSITION                   0x00000005
#define _TRISF_TRISF5_MASK                       0x00000020
#define _TRISF_TRISF5_LENGTH                     0x00000001

#define _TRISF_TRISF8_POSITION                   0x00000008
#define _TRISF_TRISF8_MASK                       0x00000100
#define _TRISF_TRISF8_LENGTH                     0x00000001

#define _TRISF_TRISF12_POSITION                  0x0000000C
#define _TRISF_TRISF12_MASK                      0x00001000
#define _TRISF_TRISF12_LENGTH                    0x00000001

#define _TRISF_TRISF13_POSITION                  0x0000000D
#define _TRISF_TRISF13_MASK                      0x00002000
#define _TRISF_TRISF13_LENGTH                    0x00000001

#define _TRISF_w_POSITION                        0x00000000
#define _TRISF_w_MASK                            0xFFFFFFFF
#define _TRISF_w_LENGTH                          0x00000020

#define _PORTF_RF0_POSITION                      0x00000000
#define _PORTF_RF0_MASK                          0x00000001
#define _PORTF_RF0_LENGTH                        0x00000001

#define _PORTF_RF1_POSITION                      0x00000001
#define _PORTF_RF1_MASK                          0x00000002
#define _PORTF_RF1_LENGTH                        0x00000001

#define _PORTF_RF2_POSITION                      0x00000002
#define _PORTF_RF2_MASK                          0x00000004
#define _PORTF_RF2_LENGTH                        0x00000001

#define _PORTF_RF3_POSITION                      0x00000003
#define _PORTF_RF3_MASK                          0x00000008
#define _PORTF_RF3_LENGTH                        0x00000001

#define _PORTF_RF4_POSITION                      0x00000004
#define _PORTF_RF4_MASK                          0x00000010
#define _PORTF_RF4_LENGTH                        0x00000001

#define _PORTF_RF5_POSITION                      0x00000005
#define _PORTF_RF5_MASK                          0x00000020
#define _PORTF_RF5_LENGTH                        0x00000001

#define _PORTF_RF8_POSITION                      0x00000008
#define _PORTF_RF8_MASK                          0x00000100
#define _PORTF_RF8_LENGTH                        0x00000001

#define _PORTF_RF12_POSITION                     0x0000000C
#define _PORTF_RF12_MASK                         0x00001000
#define _PORTF_RF12_LENGTH                       0x00000001

#define _PORTF_RF13_POSITION                     0x0000000D
#define _PORTF_RF13_MASK                         0x00002000
#define _PORTF_RF13_LENGTH                       0x00000001

#define _PORTF_w_POSITION                        0x00000000
#define _PORTF_w_MASK                            0xFFFFFFFF
#define _PORTF_w_LENGTH                          0x00000020

#define _LATF_LATF0_POSITION                     0x00000000
#define _LATF_LATF0_MASK                         0x00000001
#define _LATF_LATF0_LENGTH                       0x00000001

#define _LATF_LATF1_POSITION                     0x00000001
#define _LATF_LATF1_MASK                         0x00000002
#define _LATF_LATF1_LENGTH                       0x00000001

#define _LATF_LATF2_POSITION                     0x00000002
#define _LATF_LATF2_MASK                         0x00000004
#define _LATF_LATF2_LENGTH                       0x00000001

#define _LATF_LATF3_POSITION                     0x00000003
#define _LATF_LATF3_MASK                         0x00000008
#define _LATF_LATF3_LENGTH                       0x00000001

#define _LATF_LATF4_POSITION                     0x00000004
#define _LATF_LATF4_MASK                         0x00000010
#define _LATF_LATF4_LENGTH                       0x00000001

#define _LATF_LATF5_POSITION                     0x00000005
#define _LATF_LATF5_MASK                         0x00000020
#define _LATF_LATF5_LENGTH                       0x00000001

#define _LATF_LATF8_POSITION                     0x00000008
#define _LATF_LATF8_MASK                         0x00000100
#define _LATF_LATF8_LENGTH                       0x00000001

#define _LATF_LATF12_POSITION                    0x0000000C
#define _LATF_LATF12_MASK                        0x00001000
#define _LATF_LATF12_LENGTH                      0x00000001

#define _LATF_LATF13_POSITION                    0x0000000D
#define _LATF_LATF13_MASK                        0x00002000
#define _LATF_LATF13_LENGTH                      0x00000001

#define _LATF_w_POSITION                         0x00000000
#define _LATF_w_MASK                             0xFFFFFFFF
#define _LATF_w_LENGTH                           0x00000020

#define _ODCF_ODCF0_POSITION                     0x00000000
#define _ODCF_ODCF0_MASK                         0x00000001
#define _ODCF_ODCF0_LENGTH                       0x00000001

#define _ODCF_ODCF1_POSITION                     0x00000001
#define _ODCF_ODCF1_MASK                         0x00000002
#define _ODCF_ODCF1_LENGTH                       0x00000001

#define _ODCF_ODCF2_POSITION                     0x00000002
#define _ODCF_ODCF2_MASK                         0x00000004
#define _ODCF_ODCF2_LENGTH                       0x00000001

#define _ODCF_ODCF3_POSITION                     0x00000003
#define _ODCF_ODCF3_MASK                         0x00000008
#define _ODCF_ODCF3_LENGTH                       0x00000001

#define _ODCF_ODCF4_POSITION                     0x00000004
#define _ODCF_ODCF4_MASK                         0x00000010
#define _ODCF_ODCF4_LENGTH                       0x00000001

#define _ODCF_ODCF5_POSITION                     0x00000005
#define _ODCF_ODCF5_MASK                         0x00000020
#define _ODCF_ODCF5_LENGTH                       0x00000001

#define _ODCF_ODCF8_POSITION                     0x00000008
#define _ODCF_ODCF8_MASK                         0x00000100
#define _ODCF_ODCF8_LENGTH                       0x00000001

#define _ODCF_ODCF12_POSITION                    0x0000000C
#define _ODCF_ODCF12_MASK                        0x00001000
#define _ODCF_ODCF12_LENGTH                      0x00000001

#define _ODCF_ODCF13_POSITION                    0x0000000D
#define _ODCF_ODCF13_MASK                        0x00002000
#define _ODCF_ODCF13_LENGTH                      0x00000001

#define _ODCF_w_POSITION                         0x00000000
#define _ODCF_w_MASK                             0xFFFFFFFF
#define _ODCF_w_LENGTH                           0x00000020

#define _TRISG_TRISG0_POSITION                   0x00000000
#define _TRISG_TRISG0_MASK                       0x00000001
#define _TRISG_TRISG0_LENGTH                     0x00000001

#define _TRISG_TRISG1_POSITION                   0x00000001
#define _TRISG_TRISG1_MASK                       0x00000002
#define _TRISG_TRISG1_LENGTH                     0x00000001

#define _TRISG_TRISG2_POSITION                   0x00000002
#define _TRISG_TRISG2_MASK                       0x00000004
#define _TRISG_TRISG2_LENGTH                     0x00000001

#define _TRISG_TRISG3_POSITION                   0x00000003
#define _TRISG_TRISG3_MASK                       0x00000008
#define _TRISG_TRISG3_LENGTH                     0x00000001

#define _TRISG_TRISG6_POSITION                   0x00000006
#define _TRISG_TRISG6_MASK                       0x00000040
#define _TRISG_TRISG6_LENGTH                     0x00000001

#define _TRISG_TRISG7_POSITION                   0x00000007
#define _TRISG_TRISG7_MASK                       0x00000080
#define _TRISG_TRISG7_LENGTH                     0x00000001

#define _TRISG_TRISG8_POSITION                   0x00000008
#define _TRISG_TRISG8_MASK                       0x00000100
#define _TRISG_TRISG8_LENGTH                     0x00000001

#define _TRISG_TRISG9_POSITION                   0x00000009
#define _TRISG_TRISG9_MASK                       0x00000200
#define _TRISG_TRISG9_LENGTH                     0x00000001

#define _TRISG_TRISG12_POSITION                  0x0000000C
#define _TRISG_TRISG12_MASK                      0x00001000
#define _TRISG_TRISG12_LENGTH                    0x00000001

#define _TRISG_TRISG13_POSITION                  0x0000000D
#define _TRISG_TRISG13_MASK                      0x00002000
#define _TRISG_TRISG13_LENGTH                    0x00000001

#define _TRISG_TRISG14_POSITION                  0x0000000E
#define _TRISG_TRISG14_MASK                      0x00004000
#define _TRISG_TRISG14_LENGTH                    0x00000001

#define _TRISG_TRISG15_POSITION                  0x0000000F
#define _TRISG_TRISG15_MASK                      0x00008000
#define _TRISG_TRISG15_LENGTH                    0x00000001

#define _TRISG_w_POSITION                        0x00000000
#define _TRISG_w_MASK                            0xFFFFFFFF
#define _TRISG_w_LENGTH                          0x00000020

#define _PORTG_RG0_POSITION                      0x00000000
#define _PORTG_RG0_MASK                          0x00000001
#define _PORTG_RG0_LENGTH                        0x00000001

#define _PORTG_RG1_POSITION                      0x00000001
#define _PORTG_RG1_MASK                          0x00000002
#define _PORTG_RG1_LENGTH                        0x00000001

#define _PORTG_RG2_POSITION                      0x00000002
#define _PORTG_RG2_MASK                          0x00000004
#define _PORTG_RG2_LENGTH                        0x00000001

#define _PORTG_RG3_POSITION                      0x00000003
#define _PORTG_RG3_MASK                          0x00000008
#define _PORTG_RG3_LENGTH                        0x00000001

#define _PORTG_RG6_POSITION                      0x00000006
#define _PORTG_RG6_MASK                          0x00000040
#define _PORTG_RG6_LENGTH                        0x00000001

#define _PORTG_RG7_POSITION                      0x00000007
#define _PORTG_RG7_MASK                          0x00000080
#define _PORTG_RG7_LENGTH                        0x00000001

#define _PORTG_RG8_POSITION                      0x00000008
#define _PORTG_RG8_MASK                          0x00000100
#define _PORTG_RG8_LENGTH                        0x00000001

#define _PORTG_RG9_POSITION                      0x00000009
#define _PORTG_RG9_MASK                          0x00000200
#define _PORTG_RG9_LENGTH                        0x00000001

#define _PORTG_RG12_POSITION                     0x0000000C
#define _PORTG_RG12_MASK                         0x00001000
#define _PORTG_RG12_LENGTH                       0x00000001

#define _PORTG_RG13_POSITION                     0x0000000D
#define _PORTG_RG13_MASK                         0x00002000
#define _PORTG_RG13_LENGTH                       0x00000001

#define _PORTG_RG14_POSITION                     0x0000000E
#define _PORTG_RG14_MASK                         0x00004000
#define _PORTG_RG14_LENGTH                       0x00000001

#define _PORTG_RG15_POSITION                     0x0000000F
#define _PORTG_RG15_MASK                         0x00008000
#define _PORTG_RG15_LENGTH                       0x00000001

#define _PORTG_w_POSITION                        0x00000000
#define _PORTG_w_MASK                            0xFFFFFFFF
#define _PORTG_w_LENGTH                          0x00000020

#define _LATG_LATG0_POSITION                     0x00000000
#define _LATG_LATG0_MASK                         0x00000001
#define _LATG_LATG0_LENGTH                       0x00000001

#define _LATG_LATG1_POSITION                     0x00000001
#define _LATG_LATG1_MASK                         0x00000002
#define _LATG_LATG1_LENGTH                       0x00000001

#define _LATG_LATG2_POSITION                     0x00000002
#define _LATG_LATG2_MASK                         0x00000004
#define _LATG_LATG2_LENGTH                       0x00000001

#define _LATG_LATG3_POSITION                     0x00000003
#define _LATG_LATG3_MASK                         0x00000008
#define _LATG_LATG3_LENGTH                       0x00000001

#define _LATG_LATG6_POSITION                     0x00000006
#define _LATG_LATG6_MASK                         0x00000040
#define _LATG_LATG6_LENGTH                       0x00000001

#define _LATG_LATG7_POSITION                     0x00000007
#define _LATG_LATG7_MASK                         0x00000080
#define _LATG_LATG7_LENGTH                       0x00000001

#define _LATG_LATG8_POSITION                     0x00000008
#define _LATG_LATG8_MASK                         0x00000100
#define _LATG_LATG8_LENGTH                       0x00000001

#define _LATG_LATG9_POSITION                     0x00000009
#define _LATG_LATG9_MASK                         0x00000200
#define _LATG_LATG9_LENGTH                       0x00000001

#define _LATG_LATG12_POSITION                    0x0000000C
#define _LATG_LATG12_MASK                        0x00001000
#define _LATG_LATG12_LENGTH                      0x00000001

#define _LATG_LATG13_POSITION                    0x0000000D
#define _LATG_LATG13_MASK                        0x00002000
#define _LATG_LATG13_LENGTH                      0x00000001

#define _LATG_LATG14_POSITION                    0x0000000E
#define _LATG_LATG14_MASK                        0x00004000
#define _LATG_LATG14_LENGTH                      0x00000001

#define _LATG_LATG15_POSITION                    0x0000000F
#define _LATG_LATG15_MASK                        0x00008000
#define _LATG_LATG15_LENGTH                      0x00000001

#define _LATG_w_POSITION                         0x00000000
#define _LATG_w_MASK                             0xFFFFFFFF
#define _LATG_w_LENGTH                           0x00000020

#define _ODCG_ODCG0_POSITION                     0x00000000
#define _ODCG_ODCG0_MASK                         0x00000001
#define _ODCG_ODCG0_LENGTH                       0x00000001

#define _ODCG_ODCG1_POSITION                     0x00000001
#define _ODCG_ODCG1_MASK                         0x00000002
#define _ODCG_ODCG1_LENGTH                       0x00000001

#define _ODCG_ODCG2_POSITION                     0x00000002
#define _ODCG_ODCG2_MASK                         0x00000004
#define _ODCG_ODCG2_LENGTH                       0x00000001

#define _ODCG_ODCG3_POSITION                     0x00000003
#define _ODCG_ODCG3_MASK                         0x00000008
#define _ODCG_ODCG3_LENGTH                       0x00000001

#define _ODCG_ODCG6_POSITION                     0x00000006
#define _ODCG_ODCG6_MASK                         0x00000040
#define _ODCG_ODCG6_LENGTH                       0x00000001

#define _ODCG_ODCG7_POSITION                     0x00000007
#define _ODCG_ODCG7_MASK                         0x00000080
#define _ODCG_ODCG7_LENGTH                       0x00000001

#define _ODCG_ODCG8_POSITION                     0x00000008
#define _ODCG_ODCG8_MASK                         0x00000100
#define _ODCG_ODCG8_LENGTH                       0x00000001

#define _ODCG_ODCG9_POSITION                     0x00000009
#define _ODCG_ODCG9_MASK                         0x00000200
#define _ODCG_ODCG9_LENGTH                       0x00000001

#define _ODCG_ODCG12_POSITION                    0x0000000C
#define _ODCG_ODCG12_MASK                        0x00001000
#define _ODCG_ODCG12_LENGTH                      0x00000001

#define _ODCG_ODCG13_POSITION                    0x0000000D
#define _ODCG_ODCG13_MASK                        0x00002000
#define _ODCG_ODCG13_LENGTH                      0x00000001

#define _ODCG_ODCG14_POSITION                    0x0000000E
#define _ODCG_ODCG14_MASK                        0x00004000
#define _ODCG_ODCG14_LENGTH                      0x00000001

#define _ODCG_ODCG15_POSITION                    0x0000000F
#define _ODCG_ODCG15_MASK                        0x00008000
#define _ODCG_ODCG15_LENGTH                      0x00000001

#define _ODCG_w_POSITION                         0x00000000
#define _ODCG_w_MASK                             0xFFFFFFFF
#define _ODCG_w_LENGTH                           0x00000020

#define _CNCON_SIDL_POSITION                     0x0000000D
#define _CNCON_SIDL_MASK                         0x00002000
#define _CNCON_SIDL_LENGTH                       0x00000001

#define _CNCON_ON_POSITION                       0x0000000F
#define _CNCON_ON_MASK                           0x00008000
#define _CNCON_ON_LENGTH                         0x00000001

#define _CNCON_w_POSITION                        0x00000000
#define _CNCON_w_MASK                            0xFFFFFFFF
#define _CNCON_w_LENGTH                          0x00000020

#define _CNEN_CNEN0_POSITION                     0x00000000
#define _CNEN_CNEN0_MASK                         0x00000001
#define _CNEN_CNEN0_LENGTH                       0x00000001

#define _CNEN_CNEN1_POSITION                     0x00000001
#define _CNEN_CNEN1_MASK                         0x00000002
#define _CNEN_CNEN1_LENGTH                       0x00000001

#define _CNEN_CNEN2_POSITION                     0x00000002
#define _CNEN_CNEN2_MASK                         0x00000004
#define _CNEN_CNEN2_LENGTH                       0x00000001

#define _CNEN_CNEN3_POSITION                     0x00000003
#define _CNEN_CNEN3_MASK                         0x00000008
#define _CNEN_CNEN3_LENGTH                       0x00000001

#define _CNEN_CNEN4_POSITION                     0x00000004
#define _CNEN_CNEN4_MASK                         0x00000010
#define _CNEN_CNEN4_LENGTH                       0x00000001

#define _CNEN_CNEN5_POSITION                     0x00000005
#define _CNEN_CNEN5_MASK                         0x00000020
#define _CNEN_CNEN5_LENGTH                       0x00000001

#define _CNEN_CNEN6_POSITION                     0x00000006
#define _CNEN_CNEN6_MASK                         0x00000040
#define _CNEN_CNEN6_LENGTH                       0x00000001

#define _CNEN_CNEN7_POSITION                     0x00000007
#define _CNEN_CNEN7_MASK                         0x00000080
#define _CNEN_CNEN7_LENGTH                       0x00000001

#define _CNEN_CNEN8_POSITION                     0x00000008
#define _CNEN_CNEN8_MASK                         0x00000100
#define _CNEN_CNEN8_LENGTH                       0x00000001

#define _CNEN_CNEN9_POSITION                     0x00000009
#define _CNEN_CNEN9_MASK                         0x00000200
#define _CNEN_CNEN9_LENGTH                       0x00000001

#define _CNEN_CNEN10_POSITION                    0x0000000A
#define _CNEN_CNEN10_MASK                        0x00000400
#define _CNEN_CNEN10_LENGTH                      0x00000001

#define _CNEN_CNEN11_POSITION                    0x0000000B
#define _CNEN_CNEN11_MASK                        0x00000800
#define _CNEN_CNEN11_LENGTH                      0x00000001

#define _CNEN_CNEN12_POSITION                    0x0000000C
#define _CNEN_CNEN12_MASK                        0x00001000
#define _CNEN_CNEN12_LENGTH                      0x00000001

#define _CNEN_CNEN13_POSITION                    0x0000000D
#define _CNEN_CNEN13_MASK                        0x00002000
#define _CNEN_CNEN13_LENGTH                      0x00000001

#define _CNEN_CNEN14_POSITION                    0x0000000E
#define _CNEN_CNEN14_MASK                        0x00004000
#define _CNEN_CNEN14_LENGTH                      0x00000001

#define _CNEN_CNEN15_POSITION                    0x0000000F
#define _CNEN_CNEN15_MASK                        0x00008000
#define _CNEN_CNEN15_LENGTH                      0x00000001

#define _CNEN_CNEN16_POSITION                    0x00000010
#define _CNEN_CNEN16_MASK                        0x00010000
#define _CNEN_CNEN16_LENGTH                      0x00000001

#define _CNEN_CNEN17_POSITION                    0x00000011
#define _CNEN_CNEN17_MASK                        0x00020000
#define _CNEN_CNEN17_LENGTH                      0x00000001

#define _CNEN_CNEN18_POSITION                    0x00000012
#define _CNEN_CNEN18_MASK                        0x00040000
#define _CNEN_CNEN18_LENGTH                      0x00000001

#define _CNEN_CNEN19_POSITION                    0x00000013
#define _CNEN_CNEN19_MASK                        0x00080000
#define _CNEN_CNEN19_LENGTH                      0x00000001

#define _CNEN_CNEN20_POSITION                    0x00000014
#define _CNEN_CNEN20_MASK                        0x00100000
#define _CNEN_CNEN20_LENGTH                      0x00000001

#define _CNEN_CNEN21_POSITION                    0x00000015
#define _CNEN_CNEN21_MASK                        0x00200000
#define _CNEN_CNEN21_LENGTH                      0x00000001

#define _CNEN_w_POSITION                         0x00000000
#define _CNEN_w_MASK                             0xFFFFFFFF
#define _CNEN_w_LENGTH                           0x00000020

#define _CNPUE_CNPUE0_POSITION                   0x00000000
#define _CNPUE_CNPUE0_MASK                       0x00000001
#define _CNPUE_CNPUE0_LENGTH                     0x00000001

#define _CNPUE_CNPUE1_POSITION                   0x00000001
#define _CNPUE_CNPUE1_MASK                       0x00000002
#define _CNPUE_CNPUE1_LENGTH                     0x00000001

#define _CNPUE_CNPUE2_POSITION                   0x00000002
#define _CNPUE_CNPUE2_MASK                       0x00000004
#define _CNPUE_CNPUE2_LENGTH                     0x00000001

#define _CNPUE_CNPUE3_POSITION                   0x00000003
#define _CNPUE_CNPUE3_MASK                       0x00000008
#define _CNPUE_CNPUE3_LENGTH                     0x00000001

#define _CNPUE_CNPUE4_POSITION                   0x00000004
#define _CNPUE_CNPUE4_MASK                       0x00000010
#define _CNPUE_CNPUE4_LENGTH                     0x00000001

#define _CNPUE_CNPUE5_POSITION                   0x00000005
#define _CNPUE_CNPUE5_MASK                       0x00000020
#define _CNPUE_CNPUE5_LENGTH                     0x00000001

#define _CNPUE_CNPUE6_POSITION                   0x00000006
#define _CNPUE_CNPUE6_MASK                       0x00000040
#define _CNPUE_CNPUE6_LENGTH                     0x00000001

#define _CNPUE_CNPUE7_POSITION                   0x00000007
#define _CNPUE_CNPUE7_MASK                       0x00000080
#define _CNPUE_CNPUE7_LENGTH                     0x00000001

#define _CNPUE_CNPUE8_POSITION                   0x00000008
#define _CNPUE_CNPUE8_MASK                       0x00000100
#define _CNPUE_CNPUE8_LENGTH                     0x00000001

#define _CNPUE_CNPUE9_POSITION                   0x00000009
#define _CNPUE_CNPUE9_MASK                       0x00000200
#define _CNPUE_CNPUE9_LENGTH                     0x00000001

#define _CNPUE_CNPUE10_POSITION                  0x0000000A
#define _CNPUE_CNPUE10_MASK                      0x00000400
#define _CNPUE_CNPUE10_LENGTH                    0x00000001

#define _CNPUE_CNPUE11_POSITION                  0x0000000B
#define _CNPUE_CNPUE11_MASK                      0x00000800
#define _CNPUE_CNPUE11_LENGTH                    0x00000001

#define _CNPUE_CNPUE12_POSITION                  0x0000000C
#define _CNPUE_CNPUE12_MASK                      0x00001000
#define _CNPUE_CNPUE12_LENGTH                    0x00000001

#define _CNPUE_CNPUE13_POSITION                  0x0000000D
#define _CNPUE_CNPUE13_MASK                      0x00002000
#define _CNPUE_CNPUE13_LENGTH                    0x00000001

#define _CNPUE_CNPUE14_POSITION                  0x0000000E
#define _CNPUE_CNPUE14_MASK                      0x00004000
#define _CNPUE_CNPUE14_LENGTH                    0x00000001

#define _CNPUE_CNPUE15_POSITION                  0x0000000F
#define _CNPUE_CNPUE15_MASK                      0x00008000
#define _CNPUE_CNPUE15_LENGTH                    0x00000001

#define _CNPUE_CNPUE16_POSITION                  0x00000010
#define _CNPUE_CNPUE16_MASK                      0x00010000
#define _CNPUE_CNPUE16_LENGTH                    0x00000001

#define _CNPUE_CNPUE17_POSITION                  0x00000011
#define _CNPUE_CNPUE17_MASK                      0x00020000
#define _CNPUE_CNPUE17_LENGTH                    0x00000001

#define _CNPUE_CNPUE18_POSITION                  0x00000012
#define _CNPUE_CNPUE18_MASK                      0x00040000
#define _CNPUE_CNPUE18_LENGTH                    0x00000001

#define _CNPUE_CNPUE19_POSITION                  0x00000013
#define _CNPUE_CNPUE19_MASK                      0x00080000
#define _CNPUE_CNPUE19_LENGTH                    0x00000001

#define _CNPUE_CNPUE20_POSITION                  0x00000014
#define _CNPUE_CNPUE20_MASK                      0x00100000
#define _CNPUE_CNPUE20_LENGTH                    0x00000001

#define _CNPUE_CNPUE21_POSITION                  0x00000015
#define _CNPUE_CNPUE21_MASK                      0x00200000
#define _CNPUE_CNPUE21_LENGTH                    0x00000001

#define _CNPUE_w_POSITION                        0x00000000
#define _CNPUE_w_MASK                            0xFFFFFFFF
#define _CNPUE_w_LENGTH                          0x00000020

#define _ETHCON1_BUFCDEC_POSITION                0x00000000
#define _ETHCON1_BUFCDEC_MASK                    0x00000001
#define _ETHCON1_BUFCDEC_LENGTH                  0x00000001

#define _ETHCON1_MANFC_POSITION                  0x00000004
#define _ETHCON1_MANFC_MASK                      0x00000010
#define _ETHCON1_MANFC_LENGTH                    0x00000001

#define _ETHCON1_AUTOFC_POSITION                 0x00000007
#define _ETHCON1_AUTOFC_MASK                     0x00000080
#define _ETHCON1_AUTOFC_LENGTH                   0x00000001

#define _ETHCON1_RXEN_POSITION                   0x00000008
#define _ETHCON1_RXEN_MASK                       0x00000100
#define _ETHCON1_RXEN_LENGTH                     0x00000001

#define _ETHCON1_TXRTS_POSITION                  0x00000009
#define _ETHCON1_TXRTS_MASK                      0x00000200
#define _ETHCON1_TXRTS_LENGTH                    0x00000001

#define _ETHCON1_SIDL_POSITION                   0x0000000D
#define _ETHCON1_SIDL_MASK                       0x00002000
#define _ETHCON1_SIDL_LENGTH                     0x00000001

#define _ETHCON1_ON_POSITION                     0x0000000F
#define _ETHCON1_ON_MASK                         0x00008000
#define _ETHCON1_ON_LENGTH                       0x00000001

#define _ETHCON1_PTV_POSITION                    0x00000010
#define _ETHCON1_PTV_MASK                        0xFFFF0000
#define _ETHCON1_PTV_LENGTH                      0x00000010

#define _ETHCON1_w_POSITION                      0x00000000
#define _ETHCON1_w_MASK                          0xFFFFFFFF
#define _ETHCON1_w_LENGTH                        0x00000020

#define _ETHCON2_RXBUF_SZ_POSITION               0x00000004
#define _ETHCON2_RXBUF_SZ_MASK                   0x000007F0
#define _ETHCON2_RXBUF_SZ_LENGTH                 0x00000007

#define _ETHCON2_w_POSITION                      0x00000000
#define _ETHCON2_w_MASK                          0xFFFFFFFF
#define _ETHCON2_w_LENGTH                        0x00000020

#define _ETHTXST_TXSTADDR_POSITION               0x00000002
#define _ETHTXST_TXSTADDR_MASK                   0xFFFFFFFC
#define _ETHTXST_TXSTADDR_LENGTH                 0x0000001E

#define _ETHTXST_w_POSITION                      0x00000000
#define _ETHTXST_w_MASK                          0xFFFFFFFF
#define _ETHTXST_w_LENGTH                        0x00000020

#define _ETHRXST_RXSTADDR_POSITION               0x00000002
#define _ETHRXST_RXSTADDR_MASK                   0xFFFFFFFC
#define _ETHRXST_RXSTADDR_LENGTH                 0x0000001E

#define _ETHRXST_w_POSITION                      0x00000000
#define _ETHRXST_w_MASK                          0xFFFFFFFF
#define _ETHRXST_w_LENGTH                        0x00000020

#define _ETHHT0_w_POSITION                       0x00000000
#define _ETHHT0_w_MASK                           0xFFFFFFFF
#define _ETHHT0_w_LENGTH                         0x00000020

#define _ETHHT0_HTLOWER_POSITION                 0x00000000
#define _ETHHT0_HTLOWER_MASK                     0xFFFFFFFF
#define _ETHHT0_HTLOWER_LENGTH                   0x00000020

#define _ETHHT1_w_POSITION                       0x00000000
#define _ETHHT1_w_MASK                           0xFFFFFFFF
#define _ETHHT1_w_LENGTH                         0x00000020

#define _ETHHT1_HTUPPER_POSITION                 0x00000000
#define _ETHHT1_HTUPPER_MASK                     0xFFFFFFFF
#define _ETHHT1_HTUPPER_LENGTH                   0x00000020

#define _ETHPMM0_w_POSITION                      0x00000000
#define _ETHPMM0_w_MASK                          0xFFFFFFFF
#define _ETHPMM0_w_LENGTH                        0x00000020

#define _ETHPMM0_PMMLOWER_POSITION               0x00000000
#define _ETHPMM0_PMMLOWER_MASK                   0xFFFFFFFF
#define _ETHPMM0_PMMLOWER_LENGTH                 0x00000020

#define _ETHPMM1_w_POSITION                      0x00000000
#define _ETHPMM1_w_MASK                          0xFFFFFFFF
#define _ETHPMM1_w_LENGTH                        0x00000020

#define _ETHPMM1_PMMUPPER_POSITION               0x00000000
#define _ETHPMM1_PMMUPPER_MASK                   0xFFFFFFFF
#define _ETHPMM1_PMMUPPER_LENGTH                 0x00000020

#define _ETHPMCS_PMCS_POSITION                   0x00000000
#define _ETHPMCS_PMCS_MASK                       0x0000FFFF
#define _ETHPMCS_PMCS_LENGTH                     0x00000010

#define _ETHPMCS_w_POSITION                      0x00000000
#define _ETHPMCS_w_MASK                          0xFFFFFFFF
#define _ETHPMCS_w_LENGTH                        0x00000020

#define _ETHPMO_PMO_POSITION                     0x00000000
#define _ETHPMO_PMO_MASK                         0x0000FFFF
#define _ETHPMO_PMO_LENGTH                       0x00000010

#define _ETHPMO_w_POSITION                       0x00000000
#define _ETHPMO_w_MASK                           0xFFFFFFFF
#define _ETHPMO_w_LENGTH                         0x00000020

#define _ETHRXFC_BCEN_POSITION                   0x00000000
#define _ETHRXFC_BCEN_MASK                       0x00000001
#define _ETHRXFC_BCEN_LENGTH                     0x00000001

#define _ETHRXFC_MCEN_POSITION                   0x00000001
#define _ETHRXFC_MCEN_MASK                       0x00000002
#define _ETHRXFC_MCEN_LENGTH                     0x00000001

#define _ETHRXFC_NOTMEEN_POSITION                0x00000002
#define _ETHRXFC_NOTMEEN_MASK                    0x00000004
#define _ETHRXFC_NOTMEEN_LENGTH                  0x00000001

#define _ETHRXFC_UCEN_POSITION                   0x00000003
#define _ETHRXFC_UCEN_MASK                       0x00000008
#define _ETHRXFC_UCEN_LENGTH                     0x00000001

#define _ETHRXFC_RUNTEN_POSITION                 0x00000004
#define _ETHRXFC_RUNTEN_MASK                     0x00000010
#define _ETHRXFC_RUNTEN_LENGTH                   0x00000001

#define _ETHRXFC_RUNTERREN_POSITION              0x00000005
#define _ETHRXFC_RUNTERREN_MASK                  0x00000020
#define _ETHRXFC_RUNTERREN_LENGTH                0x00000001

#define _ETHRXFC_CRCOKEN_POSITION                0x00000006
#define _ETHRXFC_CRCOKEN_MASK                    0x00000040
#define _ETHRXFC_CRCOKEN_LENGTH                  0x00000001

#define _ETHRXFC_CRCERREN_POSITION               0x00000007
#define _ETHRXFC_CRCERREN_MASK                   0x00000080
#define _ETHRXFC_CRCERREN_LENGTH                 0x00000001

#define _ETHRXFC_PMMODE_POSITION                 0x00000008
#define _ETHRXFC_PMMODE_MASK                     0x00000F00
#define _ETHRXFC_PMMODE_LENGTH                   0x00000004

#define _ETHRXFC_NOTPM_POSITION                  0x0000000C
#define _ETHRXFC_NOTPM_MASK                      0x00001000
#define _ETHRXFC_NOTPM_LENGTH                    0x00000001

#define _ETHRXFC_MPEN_POSITION                   0x0000000E
#define _ETHRXFC_MPEN_MASK                       0x00004000
#define _ETHRXFC_MPEN_LENGTH                     0x00000001

#define _ETHRXFC_HTEN_POSITION                   0x0000000F
#define _ETHRXFC_HTEN_MASK                       0x00008000
#define _ETHRXFC_HTEN_LENGTH                     0x00000001

#define _ETHRXFC_w_POSITION                      0x00000000
#define _ETHRXFC_w_MASK                          0xFFFFFFFF
#define _ETHRXFC_w_LENGTH                        0x00000020

#define _ETHRXWM_RXEWM_POSITION                  0x00000000
#define _ETHRXWM_RXEWM_MASK                      0x000000FF
#define _ETHRXWM_RXEWM_LENGTH                    0x00000008

#define _ETHRXWM_RXFWM_POSITION                  0x00000010
#define _ETHRXWM_RXFWM_MASK                      0x00FF0000
#define _ETHRXWM_RXFWM_LENGTH                    0x00000008

#define _ETHRXWM_w_POSITION                      0x00000000
#define _ETHRXWM_w_MASK                          0xFFFFFFFF
#define _ETHRXWM_w_LENGTH                        0x00000020

#define _ETHIEN_RXOVFLWIE_POSITION               0x00000000
#define _ETHIEN_RXOVFLWIE_MASK                   0x00000001
#define _ETHIEN_RXOVFLWIE_LENGTH                 0x00000001

#define _ETHIEN_RXBUFNAIE_POSITION               0x00000001
#define _ETHIEN_RXBUFNAIE_MASK                   0x00000002
#define _ETHIEN_RXBUFNAIE_LENGTH                 0x00000001

#define _ETHIEN_TXABORTIE_POSITION               0x00000002
#define _ETHIEN_TXABORTIE_MASK                   0x00000004
#define _ETHIEN_TXABORTIE_LENGTH                 0x00000001

#define _ETHIEN_TXDONEIE_POSITION                0x00000003
#define _ETHIEN_TXDONEIE_MASK                    0x00000008
#define _ETHIEN_TXDONEIE_LENGTH                  0x00000001

#define _ETHIEN_RXACTIE_POSITION                 0x00000005
#define _ETHIEN_RXACTIE_MASK                     0x00000020
#define _ETHIEN_RXACTIE_LENGTH                   0x00000001

#define _ETHIEN_PKTPENDIE_POSITION               0x00000006
#define _ETHIEN_PKTPENDIE_MASK                   0x00000040
#define _ETHIEN_PKTPENDIE_LENGTH                 0x00000001

#define _ETHIEN_RXDONEIE_POSITION                0x00000007
#define _ETHIEN_RXDONEIE_MASK                    0x00000080
#define _ETHIEN_RXDONEIE_LENGTH                  0x00000001

#define _ETHIEN_FWMARKIE_POSITION                0x00000008
#define _ETHIEN_FWMARKIE_MASK                    0x00000100
#define _ETHIEN_FWMARKIE_LENGTH                  0x00000001

#define _ETHIEN_EWMARKIE_POSITION                0x00000009
#define _ETHIEN_EWMARKIE_MASK                    0x00000200
#define _ETHIEN_EWMARKIE_LENGTH                  0x00000001

#define _ETHIEN_RXBUSEIE_POSITION                0x0000000D
#define _ETHIEN_RXBUSEIE_MASK                    0x00002000
#define _ETHIEN_RXBUSEIE_LENGTH                  0x00000001

#define _ETHIEN_TXBUSEIE_POSITION                0x0000000E
#define _ETHIEN_TXBUSEIE_MASK                    0x00004000
#define _ETHIEN_TXBUSEIE_LENGTH                  0x00000001

#define _ETHIEN_w_POSITION                       0x00000000
#define _ETHIEN_w_MASK                           0xFFFFFFFF
#define _ETHIEN_w_LENGTH                         0x00000020

#define _ETHIRQ_RXOVFLW_POSITION                 0x00000000
#define _ETHIRQ_RXOVFLW_MASK                     0x00000001
#define _ETHIRQ_RXOVFLW_LENGTH                   0x00000001

#define _ETHIRQ_RXBUFNA_POSITION                 0x00000001
#define _ETHIRQ_RXBUFNA_MASK                     0x00000002
#define _ETHIRQ_RXBUFNA_LENGTH                   0x00000001

#define _ETHIRQ_TXABORT_POSITION                 0x00000002
#define _ETHIRQ_TXABORT_MASK                     0x00000004
#define _ETHIRQ_TXABORT_LENGTH                   0x00000001

#define _ETHIRQ_TXDONE_POSITION                  0x00000003
#define _ETHIRQ_TXDONE_MASK                      0x00000008
#define _ETHIRQ_TXDONE_LENGTH                    0x00000001

#define _ETHIRQ_RXACT_POSITION                   0x00000005
#define _ETHIRQ_RXACT_MASK                       0x00000020
#define _ETHIRQ_RXACT_LENGTH                     0x00000001

#define _ETHIRQ_PKTPEND_POSITION                 0x00000006
#define _ETHIRQ_PKTPEND_MASK                     0x00000040
#define _ETHIRQ_PKTPEND_LENGTH                   0x00000001

#define _ETHIRQ_RXDONE_POSITION                  0x00000007
#define _ETHIRQ_RXDONE_MASK                      0x00000080
#define _ETHIRQ_RXDONE_LENGTH                    0x00000001

#define _ETHIRQ_FWMARK_POSITION                  0x00000008
#define _ETHIRQ_FWMARK_MASK                      0x00000100
#define _ETHIRQ_FWMARK_LENGTH                    0x00000001

#define _ETHIRQ_EWMARK_POSITION                  0x00000009
#define _ETHIRQ_EWMARK_MASK                      0x00000200
#define _ETHIRQ_EWMARK_LENGTH                    0x00000001

#define _ETHIRQ_RXBUSE_POSITION                  0x0000000D
#define _ETHIRQ_RXBUSE_MASK                      0x00002000
#define _ETHIRQ_RXBUSE_LENGTH                    0x00000001

#define _ETHIRQ_TXBUSE_POSITION                  0x0000000E
#define _ETHIRQ_TXBUSE_MASK                      0x00004000
#define _ETHIRQ_TXBUSE_LENGTH                    0x00000001

#define _ETHIRQ_w_POSITION                       0x00000000
#define _ETHIRQ_w_MASK                           0xFFFFFFFF
#define _ETHIRQ_w_LENGTH                         0x00000020

#define _ETHSTAT_RXBUSY_POSITION                 0x00000005
#define _ETHSTAT_RXBUSY_MASK                     0x00000020
#define _ETHSTAT_RXBUSY_LENGTH                   0x00000001

#define _ETHSTAT_TXBUSY_POSITION                 0x00000006
#define _ETHSTAT_TXBUSY_MASK                     0x00000040
#define _ETHSTAT_TXBUSY_LENGTH                   0x00000001

#define _ETHSTAT_BUSY_POSITION                   0x00000007
#define _ETHSTAT_BUSY_MASK                       0x00000080
#define _ETHSTAT_BUSY_LENGTH                     0x00000001

#define _ETHSTAT_BUFCNT_POSITION                 0x00000010
#define _ETHSTAT_BUFCNT_MASK                     0x00FF0000
#define _ETHSTAT_BUFCNT_LENGTH                   0x00000008

#define _ETHSTAT_ETHBUSY_POSITION                0x00000007
#define _ETHSTAT_ETHBUSY_MASK                    0x00000080
#define _ETHSTAT_ETHBUSY_LENGTH                  0x00000001

#define _ETHSTAT_w_POSITION                      0x00000000
#define _ETHSTAT_w_MASK                          0xFFFFFFFF
#define _ETHSTAT_w_LENGTH                        0x00000020

#define _ETHRXOVFLOW_RXOVFLWCNT_POSITION         0x00000000
#define _ETHRXOVFLOW_RXOVFLWCNT_MASK             0x0000FFFF
#define _ETHRXOVFLOW_RXOVFLWCNT_LENGTH           0x00000010

#define _ETHRXOVFLOW_w_POSITION                  0x00000000
#define _ETHRXOVFLOW_w_MASK                      0xFFFFFFFF
#define _ETHRXOVFLOW_w_LENGTH                    0x00000020

#define _ETHFRMTXOK_FRMTXOKCNT_POSITION          0x00000000
#define _ETHFRMTXOK_FRMTXOKCNT_MASK              0x0000FFFF
#define _ETHFRMTXOK_FRMTXOKCNT_LENGTH            0x00000010

#define _ETHFRMTXOK_w_POSITION                   0x00000000
#define _ETHFRMTXOK_w_MASK                       0xFFFFFFFF
#define _ETHFRMTXOK_w_LENGTH                     0x00000020

#define _ETHSCOLFRM_SCOLFRMCNT_POSITION          0x00000000
#define _ETHSCOLFRM_SCOLFRMCNT_MASK              0x0000FFFF
#define _ETHSCOLFRM_SCOLFRMCNT_LENGTH            0x00000010

#define _ETHSCOLFRM_w_POSITION                   0x00000000
#define _ETHSCOLFRM_w_MASK                       0xFFFFFFFF
#define _ETHSCOLFRM_w_LENGTH                     0x00000020

#define _ETHMCOLFRM_MCOLFRMCNT_POSITION          0x00000000
#define _ETHMCOLFRM_MCOLFRMCNT_MASK              0x0000FFFF
#define _ETHMCOLFRM_MCOLFRMCNT_LENGTH            0x00000010

#define _ETHMCOLFRM_MCOLFRM_CNT_POSITION         0x00000000
#define _ETHMCOLFRM_MCOLFRM_CNT_MASK             0x0000FFFF
#define _ETHMCOLFRM_MCOLFRM_CNT_LENGTH           0x00000010

#define _ETHMCOLFRM_w_POSITION                   0x00000000
#define _ETHMCOLFRM_w_MASK                       0xFFFFFFFF
#define _ETHMCOLFRM_w_LENGTH                     0x00000020

#define _ETHFRMRXOK_FRMRXOKCNT_POSITION          0x00000000
#define _ETHFRMRXOK_FRMRXOKCNT_MASK              0x0000FFFF
#define _ETHFRMRXOK_FRMRXOKCNT_LENGTH            0x00000010

#define _ETHFRMRXOK_w_POSITION                   0x00000000
#define _ETHFRMRXOK_w_MASK                       0xFFFFFFFF
#define _ETHFRMRXOK_w_LENGTH                     0x00000020

#define _ETHFCSERR_FCSERRCNT_POSITION            0x00000000
#define _ETHFCSERR_FCSERRCNT_MASK                0x0000FFFF
#define _ETHFCSERR_FCSERRCNT_LENGTH              0x00000010

#define _ETHFCSERR_w_POSITION                    0x00000000
#define _ETHFCSERR_w_MASK                        0xFFFFFFFF
#define _ETHFCSERR_w_LENGTH                      0x00000020

#define _ETHALGNERR_ALGNERRCNT_POSITION          0x00000000
#define _ETHALGNERR_ALGNERRCNT_MASK              0x0000FFFF
#define _ETHALGNERR_ALGNERRCNT_LENGTH            0x00000010

#define _ETHALGNERR_w_POSITION                   0x00000000
#define _ETHALGNERR_w_MASK                       0xFFFFFFFF
#define _ETHALGNERR_w_LENGTH                     0x00000020

#define _EMAC1CFG1_RXENABLE_POSITION             0x00000000
#define _EMAC1CFG1_RXENABLE_MASK                 0x00000001
#define _EMAC1CFG1_RXENABLE_LENGTH               0x00000001

#define _EMAC1CFG1_PASSALL_POSITION              0x00000001
#define _EMAC1CFG1_PASSALL_MASK                  0x00000002
#define _EMAC1CFG1_PASSALL_LENGTH                0x00000001

#define _EMAC1CFG1_RXPAUSE_POSITION              0x00000002
#define _EMAC1CFG1_RXPAUSE_MASK                  0x00000004
#define _EMAC1CFG1_RXPAUSE_LENGTH                0x00000001

#define _EMAC1CFG1_TXPAUSE_POSITION              0x00000003
#define _EMAC1CFG1_TXPAUSE_MASK                  0x00000008
#define _EMAC1CFG1_TXPAUSE_LENGTH                0x00000001

#define _EMAC1CFG1_LOOPBACK_POSITION             0x00000004
#define _EMAC1CFG1_LOOPBACK_MASK                 0x00000010
#define _EMAC1CFG1_LOOPBACK_LENGTH               0x00000001

#define _EMAC1CFG1_RESETTFUN_POSITION            0x00000008
#define _EMAC1CFG1_RESETTFUN_MASK                0x00000100
#define _EMAC1CFG1_RESETTFUN_LENGTH              0x00000001

#define _EMAC1CFG1_RESETTMCS_POSITION            0x00000009
#define _EMAC1CFG1_RESETTMCS_MASK                0x00000200
#define _EMAC1CFG1_RESETTMCS_LENGTH              0x00000001

#define _EMAC1CFG1_RESETRFUN_POSITION            0x0000000A
#define _EMAC1CFG1_RESETRFUN_MASK                0x00000400
#define _EMAC1CFG1_RESETRFUN_LENGTH              0x00000001

#define _EMAC1CFG1_RESETRMCS_POSITION            0x0000000B
#define _EMAC1CFG1_RESETRMCS_MASK                0x00000800
#define _EMAC1CFG1_RESETRMCS_LENGTH              0x00000001

#define _EMAC1CFG1_SIMRESET_POSITION             0x0000000E
#define _EMAC1CFG1_SIMRESET_MASK                 0x00004000
#define _EMAC1CFG1_SIMRESET_LENGTH               0x00000001

#define _EMAC1CFG1_SOFTRESET_POSITION            0x0000000F
#define _EMAC1CFG1_SOFTRESET_MASK                0x00008000
#define _EMAC1CFG1_SOFTRESET_LENGTH              0x00000001

#define _EMAC1CFG1_w_POSITION                    0x00000000
#define _EMAC1CFG1_w_MASK                        0xFFFFFFFF
#define _EMAC1CFG1_w_LENGTH                      0x00000020

#define _EMACxCFG1_RXENABLE_POSITION             0x00000000
#define _EMACxCFG1_RXENABLE_MASK                 0x00000001
#define _EMACxCFG1_RXENABLE_LENGTH               0x00000001

#define _EMACxCFG1_PASSALL_POSITION              0x00000001
#define _EMACxCFG1_PASSALL_MASK                  0x00000002
#define _EMACxCFG1_PASSALL_LENGTH                0x00000001

#define _EMACxCFG1_RXPAUSE_POSITION              0x00000002
#define _EMACxCFG1_RXPAUSE_MASK                  0x00000004
#define _EMACxCFG1_RXPAUSE_LENGTH                0x00000001

#define _EMACxCFG1_TXPAUSE_POSITION              0x00000003
#define _EMACxCFG1_TXPAUSE_MASK                  0x00000008
#define _EMACxCFG1_TXPAUSE_LENGTH                0x00000001

#define _EMACxCFG1_LOOPBACK_POSITION             0x00000004
#define _EMACxCFG1_LOOPBACK_MASK                 0x00000010
#define _EMACxCFG1_LOOPBACK_LENGTH               0x00000001

#define _EMACxCFG1_RESETTFUN_POSITION            0x00000008
#define _EMACxCFG1_RESETTFUN_MASK                0x00000100
#define _EMACxCFG1_RESETTFUN_LENGTH              0x00000001

#define _EMACxCFG1_RESETTMCS_POSITION            0x00000009
#define _EMACxCFG1_RESETTMCS_MASK                0x00000200
#define _EMACxCFG1_RESETTMCS_LENGTH              0x00000001

#define _EMACxCFG1_RESETRFUN_POSITION            0x0000000A
#define _EMACxCFG1_RESETRFUN_MASK                0x00000400
#define _EMACxCFG1_RESETRFUN_LENGTH              0x00000001

#define _EMACxCFG1_RESETRMCS_POSITION            0x0000000B
#define _EMACxCFG1_RESETRMCS_MASK                0x00000800
#define _EMACxCFG1_RESETRMCS_LENGTH              0x00000001

#define _EMACxCFG1_SIMRESET_POSITION             0x0000000E
#define _EMACxCFG1_SIMRESET_MASK                 0x00004000
#define _EMACxCFG1_SIMRESET_LENGTH               0x00000001

#define _EMACxCFG1_SOFTRESET_POSITION            0x0000000F
#define _EMACxCFG1_SOFTRESET_MASK                0x00008000
#define _EMACxCFG1_SOFTRESET_LENGTH              0x00000001

#define _EMACxCFG1_w_POSITION                    0x00000000
#define _EMACxCFG1_w_MASK                        0xFFFFFFFF
#define _EMACxCFG1_w_LENGTH                      0x00000020

#define _EMAC1CFG2_FULLDPLX_POSITION             0x00000000
#define _EMAC1CFG2_FULLDPLX_MASK                 0x00000001
#define _EMAC1CFG2_FULLDPLX_LENGTH               0x00000001

#define _EMAC1CFG2_LENGTHCK_POSITION             0x00000001
#define _EMAC1CFG2_LENGTHCK_MASK                 0x00000002
#define _EMAC1CFG2_LENGTHCK_LENGTH               0x00000001

#define _EMAC1CFG2_HUGEFRM_POSITION              0x00000002
#define _EMAC1CFG2_HUGEFRM_MASK                  0x00000004
#define _EMAC1CFG2_HUGEFRM_LENGTH                0x00000001

#define _EMAC1CFG2_DELAYCRC_POSITION             0x00000003
#define _EMAC1CFG2_DELAYCRC_MASK                 0x00000008
#define _EMAC1CFG2_DELAYCRC_LENGTH               0x00000001

#define _EMAC1CFG2_CRCENABLE_POSITION            0x00000004
#define _EMAC1CFG2_CRCENABLE_MASK                0x00000010
#define _EMAC1CFG2_CRCENABLE_LENGTH              0x00000001

#define _EMAC1CFG2_PADENABLE_POSITION            0x00000005
#define _EMAC1CFG2_PADENABLE_MASK                0x00000020
#define _EMAC1CFG2_PADENABLE_LENGTH              0x00000001

#define _EMAC1CFG2_VLANPAD_POSITION              0x00000006
#define _EMAC1CFG2_VLANPAD_MASK                  0x00000040
#define _EMAC1CFG2_VLANPAD_LENGTH                0x00000001

#define _EMAC1CFG2_AUTOPAD_POSITION              0x00000007
#define _EMAC1CFG2_AUTOPAD_MASK                  0x00000080
#define _EMAC1CFG2_AUTOPAD_LENGTH                0x00000001

#define _EMAC1CFG2_PUREPRE_POSITION              0x00000008
#define _EMAC1CFG2_PUREPRE_MASK                  0x00000100
#define _EMAC1CFG2_PUREPRE_LENGTH                0x00000001

#define _EMAC1CFG2_LONGPRE_POSITION              0x00000009
#define _EMAC1CFG2_LONGPRE_MASK                  0x00000200
#define _EMAC1CFG2_LONGPRE_LENGTH                0x00000001

#define _EMAC1CFG2_NOBKOFF_POSITION              0x0000000C
#define _EMAC1CFG2_NOBKOFF_MASK                  0x00001000
#define _EMAC1CFG2_NOBKOFF_LENGTH                0x00000001

#define _EMAC1CFG2_BPNOBKOFF_POSITION            0x0000000D
#define _EMAC1CFG2_BPNOBKOFF_MASK                0x00002000
#define _EMAC1CFG2_BPNOBKOFF_LENGTH              0x00000001

#define _EMAC1CFG2_EXCESSDFR_POSITION            0x0000000E
#define _EMAC1CFG2_EXCESSDFR_MASK                0x00004000
#define _EMAC1CFG2_EXCESSDFR_LENGTH              0x00000001

#define _EMAC1CFG2_w_POSITION                    0x00000000
#define _EMAC1CFG2_w_MASK                        0xFFFFFFFF
#define _EMAC1CFG2_w_LENGTH                      0x00000020

#define _EMACxCFG2_FULLDPLX_POSITION             0x00000000
#define _EMACxCFG2_FULLDPLX_MASK                 0x00000001
#define _EMACxCFG2_FULLDPLX_LENGTH               0x00000001

#define _EMACxCFG2_LENGTHCK_POSITION             0x00000001
#define _EMACxCFG2_LENGTHCK_MASK                 0x00000002
#define _EMACxCFG2_LENGTHCK_LENGTH               0x00000001

#define _EMACxCFG2_HUGEFRM_POSITION              0x00000002
#define _EMACxCFG2_HUGEFRM_MASK                  0x00000004
#define _EMACxCFG2_HUGEFRM_LENGTH                0x00000001

#define _EMACxCFG2_DELAYCRC_POSITION             0x00000003
#define _EMACxCFG2_DELAYCRC_MASK                 0x00000008
#define _EMACxCFG2_DELAYCRC_LENGTH               0x00000001

#define _EMACxCFG2_CRCENABLE_POSITION            0x00000004
#define _EMACxCFG2_CRCENABLE_MASK                0x00000010
#define _EMACxCFG2_CRCENABLE_LENGTH              0x00000001

#define _EMACxCFG2_PADENABLE_POSITION            0x00000005
#define _EMACxCFG2_PADENABLE_MASK                0x00000020
#define _EMACxCFG2_PADENABLE_LENGTH              0x00000001

#define _EMACxCFG2_VLANPAD_POSITION              0x00000006
#define _EMACxCFG2_VLANPAD_MASK                  0x00000040
#define _EMACxCFG2_VLANPAD_LENGTH                0x00000001

#define _EMACxCFG2_AUTOPAD_POSITION              0x00000007
#define _EMACxCFG2_AUTOPAD_MASK                  0x00000080
#define _EMACxCFG2_AUTOPAD_LENGTH                0x00000001

#define _EMACxCFG2_PUREPRE_POSITION              0x00000008
#define _EMACxCFG2_PUREPRE_MASK                  0x00000100
#define _EMACxCFG2_PUREPRE_LENGTH                0x00000001

#define _EMACxCFG2_LONGPRE_POSITION              0x00000009
#define _EMACxCFG2_LONGPRE_MASK                  0x00000200
#define _EMACxCFG2_LONGPRE_LENGTH                0x00000001

#define _EMACxCFG2_NOBKOFF_POSITION              0x0000000C
#define _EMACxCFG2_NOBKOFF_MASK                  0x00001000
#define _EMACxCFG2_NOBKOFF_LENGTH                0x00000001

#define _EMACxCFG2_BPNOBKOFF_POSITION            0x0000000D
#define _EMACxCFG2_BPNOBKOFF_MASK                0x00002000
#define _EMACxCFG2_BPNOBKOFF_LENGTH              0x00000001

#define _EMACxCFG2_EXCESSDFR_POSITION            0x0000000E
#define _EMACxCFG2_EXCESSDFR_MASK                0x00004000
#define _EMACxCFG2_EXCESSDFR_LENGTH              0x00000001

#define _EMACxCFG2_w_POSITION                    0x00000000
#define _EMACxCFG2_w_MASK                        0xFFFFFFFF
#define _EMACxCFG2_w_LENGTH                      0x00000020

#define _EMAC1IPGT_B2BIPKTGP_POSITION            0x00000000
#define _EMAC1IPGT_B2BIPKTGP_MASK                0x0000007F
#define _EMAC1IPGT_B2BIPKTGP_LENGTH              0x00000007

#define _EMAC1IPGT_w_POSITION                    0x00000000
#define _EMAC1IPGT_w_MASK                        0xFFFFFFFF
#define _EMAC1IPGT_w_LENGTH                      0x00000020

#define _EMACxIPGT_B2BIPKTGP_POSITION            0x00000000
#define _EMACxIPGT_B2BIPKTGP_MASK                0x0000007F
#define _EMACxIPGT_B2BIPKTGP_LENGTH              0x00000007

#define _EMACxIPGT_w_POSITION                    0x00000000
#define _EMACxIPGT_w_MASK                        0xFFFFFFFF
#define _EMACxIPGT_w_LENGTH                      0x00000020

#define _EMAC1IPGR_NB2BIPKTGP2_POSITION          0x00000000
#define _EMAC1IPGR_NB2BIPKTGP2_MASK              0x0000007F
#define _EMAC1IPGR_NB2BIPKTGP2_LENGTH            0x00000007

#define _EMAC1IPGR_NB2BIPKTGP1_POSITION          0x00000008
#define _EMAC1IPGR_NB2BIPKTGP1_MASK              0x00007F00
#define _EMAC1IPGR_NB2BIPKTGP1_LENGTH            0x00000007

#define _EMAC1IPGR_w_POSITION                    0x00000000
#define _EMAC1IPGR_w_MASK                        0xFFFFFFFF
#define _EMAC1IPGR_w_LENGTH                      0x00000020

#define _EMACxIPGR_NB2BIPKTGP2_POSITION          0x00000000
#define _EMACxIPGR_NB2BIPKTGP2_MASK              0x0000007F
#define _EMACxIPGR_NB2BIPKTGP2_LENGTH            0x00000007

#define _EMACxIPGR_NB2BIPKTGP1_POSITION          0x00000008
#define _EMACxIPGR_NB2BIPKTGP1_MASK              0x00007F00
#define _EMACxIPGR_NB2BIPKTGP1_LENGTH            0x00000007

#define _EMACxIPGR_w_POSITION                    0x00000000
#define _EMACxIPGR_w_MASK                        0xFFFFFFFF
#define _EMACxIPGR_w_LENGTH                      0x00000020

#define _EMAC1CLRT_RETX_POSITION                 0x00000000
#define _EMAC1CLRT_RETX_MASK                     0x0000000F
#define _EMAC1CLRT_RETX_LENGTH                   0x00000004

#define _EMAC1CLRT_CWINDOW_POSITION              0x00000008
#define _EMAC1CLRT_CWINDOW_MASK                  0x00003F00
#define _EMAC1CLRT_CWINDOW_LENGTH                0x00000006

#define _EMAC1CLRT_w_POSITION                    0x00000000
#define _EMAC1CLRT_w_MASK                        0xFFFFFFFF
#define _EMAC1CLRT_w_LENGTH                      0x00000020

#define _EMACxCLRT_RETX_POSITION                 0x00000000
#define _EMACxCLRT_RETX_MASK                     0x0000000F
#define _EMACxCLRT_RETX_LENGTH                   0x00000004

#define _EMACxCLRT_CWINDOW_POSITION              0x00000008
#define _EMACxCLRT_CWINDOW_MASK                  0x00003F00
#define _EMACxCLRT_CWINDOW_LENGTH                0x00000006

#define _EMACxCLRT_w_POSITION                    0x00000000
#define _EMACxCLRT_w_MASK                        0xFFFFFFFF
#define _EMACxCLRT_w_LENGTH                      0x00000020

#define _EMAC1MAXF_MACMAXF_POSITION              0x00000000
#define _EMAC1MAXF_MACMAXF_MASK                  0x0000FFFF
#define _EMAC1MAXF_MACMAXF_LENGTH                0x00000010

#define _EMAC1MAXF_w_POSITION                    0x00000000
#define _EMAC1MAXF_w_MASK                        0xFFFFFFFF
#define _EMAC1MAXF_w_LENGTH                      0x00000020

#define _EMACxMAXF_MACMAXF_POSITION              0x00000000
#define _EMACxMAXF_MACMAXF_MASK                  0x0000FFFF
#define _EMACxMAXF_MACMAXF_LENGTH                0x00000010

#define _EMACxMAXF_w_POSITION                    0x00000000
#define _EMACxMAXF_w_MASK                        0xFFFFFFFF
#define _EMACxMAXF_w_LENGTH                      0x00000020

#define _EMAC1SUPP_SPEEDRMII_POSITION            0x00000008
#define _EMAC1SUPP_SPEEDRMII_MASK                0x00000100
#define _EMAC1SUPP_SPEEDRMII_LENGTH              0x00000001

#define _EMAC1SUPP_RESETRMII_POSITION            0x0000000B
#define _EMAC1SUPP_RESETRMII_MASK                0x00000800
#define _EMAC1SUPP_RESETRMII_LENGTH              0x00000001

#define _EMAC1SUPP_w_POSITION                    0x00000000
#define _EMAC1SUPP_w_MASK                        0xFFFFFFFF
#define _EMAC1SUPP_w_LENGTH                      0x00000020

#define _EMACxSUPP_SPEEDRMII_POSITION            0x00000008
#define _EMACxSUPP_SPEEDRMII_MASK                0x00000100
#define _EMACxSUPP_SPEEDRMII_LENGTH              0x00000001

#define _EMACxSUPP_RESETRMII_POSITION            0x0000000B
#define _EMACxSUPP_RESETRMII_MASK                0x00000800
#define _EMACxSUPP_RESETRMII_LENGTH              0x00000001

#define _EMACxSUPP_w_POSITION                    0x00000000
#define _EMACxSUPP_w_MASK                        0xFFFFFFFF
#define _EMACxSUPP_w_LENGTH                      0x00000020

#define _EMAC1TEST_SHRTQNTA_POSITION             0x00000000
#define _EMAC1TEST_SHRTQNTA_MASK                 0x00000001
#define _EMAC1TEST_SHRTQNTA_LENGTH               0x00000001

#define _EMAC1TEST_TESTPAUSE_POSITION            0x00000001
#define _EMAC1TEST_TESTPAUSE_MASK                0x00000002
#define _EMAC1TEST_TESTPAUSE_LENGTH              0x00000001

#define _EMAC1TEST_TESTBP_POSITION               0x00000002
#define _EMAC1TEST_TESTBP_MASK                   0x00000004
#define _EMAC1TEST_TESTBP_LENGTH                 0x00000001

#define _EMAC1TEST_w_POSITION                    0x00000000
#define _EMAC1TEST_w_MASK                        0xFFFFFFFF
#define _EMAC1TEST_w_LENGTH                      0x00000020

#define _EMACxTEST_SHRTQNTA_POSITION             0x00000000
#define _EMACxTEST_SHRTQNTA_MASK                 0x00000001
#define _EMACxTEST_SHRTQNTA_LENGTH               0x00000001

#define _EMACxTEST_TESTPAUSE_POSITION            0x00000001
#define _EMACxTEST_TESTPAUSE_MASK                0x00000002
#define _EMACxTEST_TESTPAUSE_LENGTH              0x00000001

#define _EMACxTEST_TESTBP_POSITION               0x00000002
#define _EMACxTEST_TESTBP_MASK                   0x00000004
#define _EMACxTEST_TESTBP_LENGTH                 0x00000001

#define _EMACxTEST_w_POSITION                    0x00000000
#define _EMACxTEST_w_MASK                        0xFFFFFFFF
#define _EMACxTEST_w_LENGTH                      0x00000020

#define _EMAC1MCFG_SCANINC_POSITION              0x00000000
#define _EMAC1MCFG_SCANINC_MASK                  0x00000001
#define _EMAC1MCFG_SCANINC_LENGTH                0x00000001

#define _EMAC1MCFG_NOPRE_POSITION                0x00000001
#define _EMAC1MCFG_NOPRE_MASK                    0x00000002
#define _EMAC1MCFG_NOPRE_LENGTH                  0x00000001

#define _EMAC1MCFG_CLKSEL_POSITION               0x00000002
#define _EMAC1MCFG_CLKSEL_MASK                   0x0000003C
#define _EMAC1MCFG_CLKSEL_LENGTH                 0x00000004

#define _EMAC1MCFG_RESETMGMT_POSITION            0x0000000F
#define _EMAC1MCFG_RESETMGMT_MASK                0x00008000
#define _EMAC1MCFG_RESETMGMT_LENGTH              0x00000001

#define _EMAC1MCFG_w_POSITION                    0x00000000
#define _EMAC1MCFG_w_MASK                        0xFFFFFFFF
#define _EMAC1MCFG_w_LENGTH                      0x00000020

#define _EMACxMCFG_SCANINC_POSITION              0x00000000
#define _EMACxMCFG_SCANINC_MASK                  0x00000001
#define _EMACxMCFG_SCANINC_LENGTH                0x00000001

#define _EMACxMCFG_NOPRE_POSITION                0x00000001
#define _EMACxMCFG_NOPRE_MASK                    0x00000002
#define _EMACxMCFG_NOPRE_LENGTH                  0x00000001

#define _EMACxMCFG_CLKSEL_POSITION               0x00000002
#define _EMACxMCFG_CLKSEL_MASK                   0x0000003C
#define _EMACxMCFG_CLKSEL_LENGTH                 0x00000004

#define _EMACxMCFG_RESETMGMT_POSITION            0x0000000F
#define _EMACxMCFG_RESETMGMT_MASK                0x00008000
#define _EMACxMCFG_RESETMGMT_LENGTH              0x00000001

#define _EMACxMCFG_w_POSITION                    0x00000000
#define _EMACxMCFG_w_MASK                        0xFFFFFFFF
#define _EMACxMCFG_w_LENGTH                      0x00000020

#define _EMAC1MCMD_READ_POSITION                 0x00000000
#define _EMAC1MCMD_READ_MASK                     0x00000001
#define _EMAC1MCMD_READ_LENGTH                   0x00000001

#define _EMAC1MCMD_SCAN_POSITION                 0x00000001
#define _EMAC1MCMD_SCAN_MASK                     0x00000002
#define _EMAC1MCMD_SCAN_LENGTH                   0x00000001

#define _EMAC1MCMD_w_POSITION                    0x00000000
#define _EMAC1MCMD_w_MASK                        0xFFFFFFFF
#define _EMAC1MCMD_w_LENGTH                      0x00000020

#define _EMACxMCMD_READ_POSITION                 0x00000000
#define _EMACxMCMD_READ_MASK                     0x00000001
#define _EMACxMCMD_READ_LENGTH                   0x00000001

#define _EMACxMCMD_SCAN_POSITION                 0x00000001
#define _EMACxMCMD_SCAN_MASK                     0x00000002
#define _EMACxMCMD_SCAN_LENGTH                   0x00000001

#define _EMACxMCMD_w_POSITION                    0x00000000
#define _EMACxMCMD_w_MASK                        0xFFFFFFFF
#define _EMACxMCMD_w_LENGTH                      0x00000020

#define _EMAC1MADR_REGADDR_POSITION              0x00000000
#define _EMAC1MADR_REGADDR_MASK                  0x0000001F
#define _EMAC1MADR_REGADDR_LENGTH                0x00000005

#define _EMAC1MADR_PHYADDR_POSITION              0x00000008
#define _EMAC1MADR_PHYADDR_MASK                  0x00001F00
#define _EMAC1MADR_PHYADDR_LENGTH                0x00000005

#define _EMAC1MADR_w_POSITION                    0x00000000
#define _EMAC1MADR_w_MASK                        0xFFFFFFFF
#define _EMAC1MADR_w_LENGTH                      0x00000020

#define _EMACxMADR_REGADDR_POSITION              0x00000000
#define _EMACxMADR_REGADDR_MASK                  0x0000001F
#define _EMACxMADR_REGADDR_LENGTH                0x00000005

#define _EMACxMADR_PHYADDR_POSITION              0x00000008
#define _EMACxMADR_PHYADDR_MASK                  0x00001F00
#define _EMACxMADR_PHYADDR_LENGTH                0x00000005

#define _EMACxMADR_w_POSITION                    0x00000000
#define _EMACxMADR_w_MASK                        0xFFFFFFFF
#define _EMACxMADR_w_LENGTH                      0x00000020

#define _EMAC1MWTD_MWTD_POSITION                 0x00000000
#define _EMAC1MWTD_MWTD_MASK                     0x0000FFFF
#define _EMAC1MWTD_MWTD_LENGTH                   0x00000010

#define _EMAC1MWTD_w_POSITION                    0x00000000
#define _EMAC1MWTD_w_MASK                        0xFFFFFFFF
#define _EMAC1MWTD_w_LENGTH                      0x00000020

#define _EMACxMWTD_MWTD_POSITION                 0x00000000
#define _EMACxMWTD_MWTD_MASK                     0x0000FFFF
#define _EMACxMWTD_MWTD_LENGTH                   0x00000010

#define _EMACxMWTD_w_POSITION                    0x00000000
#define _EMACxMWTD_w_MASK                        0xFFFFFFFF
#define _EMACxMWTD_w_LENGTH                      0x00000020

#define _EMAC1MRDD_MRDD_POSITION                 0x00000000
#define _EMAC1MRDD_MRDD_MASK                     0x0000FFFF
#define _EMAC1MRDD_MRDD_LENGTH                   0x00000010

#define _EMAC1MRDD_w_POSITION                    0x00000000
#define _EMAC1MRDD_w_MASK                        0xFFFFFFFF
#define _EMAC1MRDD_w_LENGTH                      0x00000020

#define _EMACxMRDD_MRDD_POSITION                 0x00000000
#define _EMACxMRDD_MRDD_MASK                     0x0000FFFF
#define _EMACxMRDD_MRDD_LENGTH                   0x00000010

#define _EMACxMRDD_w_POSITION                    0x00000000
#define _EMACxMRDD_w_MASK                        0xFFFFFFFF
#define _EMACxMRDD_w_LENGTH                      0x00000020

#define _EMAC1MIND_MIIMBUSY_POSITION             0x00000000
#define _EMAC1MIND_MIIMBUSY_MASK                 0x00000001
#define _EMAC1MIND_MIIMBUSY_LENGTH               0x00000001

#define _EMAC1MIND_SCAN_POSITION                 0x00000001
#define _EMAC1MIND_SCAN_MASK                     0x00000002
#define _EMAC1MIND_SCAN_LENGTH                   0x00000001

#define _EMAC1MIND_NOTVALID_POSITION             0x00000002
#define _EMAC1MIND_NOTVALID_MASK                 0x00000004
#define _EMAC1MIND_NOTVALID_LENGTH               0x00000001

#define _EMAC1MIND_LINKFAIL_POSITION             0x00000003
#define _EMAC1MIND_LINKFAIL_MASK                 0x00000008
#define _EMAC1MIND_LINKFAIL_LENGTH               0x00000001

#define _EMAC1MIND_w_POSITION                    0x00000000
#define _EMAC1MIND_w_MASK                        0xFFFFFFFF
#define _EMAC1MIND_w_LENGTH                      0x00000020

#define _EMACxMIND_MIIMBUSY_POSITION             0x00000000
#define _EMACxMIND_MIIMBUSY_MASK                 0x00000001
#define _EMACxMIND_MIIMBUSY_LENGTH               0x00000001

#define _EMACxMIND_SCAN_POSITION                 0x00000001
#define _EMACxMIND_SCAN_MASK                     0x00000002
#define _EMACxMIND_SCAN_LENGTH                   0x00000001

#define _EMACxMIND_NOTVALID_POSITION             0x00000002
#define _EMACxMIND_NOTVALID_MASK                 0x00000004
#define _EMACxMIND_NOTVALID_LENGTH               0x00000001

#define _EMACxMIND_LINKFAIL_POSITION             0x00000003
#define _EMACxMIND_LINKFAIL_MASK                 0x00000008
#define _EMACxMIND_LINKFAIL_LENGTH               0x00000001

#define _EMACxMIND_w_POSITION                    0x00000000
#define _EMACxMIND_w_MASK                        0xFFFFFFFF
#define _EMACxMIND_w_LENGTH                      0x00000020

#define _EMAC1SA0_STNADDR5_POSITION              0x00000000
#define _EMAC1SA0_STNADDR5_MASK                  0x000000FF
#define _EMAC1SA0_STNADDR5_LENGTH                0x00000008

#define _EMAC1SA0_STNADDR6_POSITION              0x00000008
#define _EMAC1SA0_STNADDR6_MASK                  0x0000FF00
#define _EMAC1SA0_STNADDR6_LENGTH                0x00000008

#define _EMAC1SA0_w_POSITION                     0x00000000
#define _EMAC1SA0_w_MASK                         0xFFFFFFFF
#define _EMAC1SA0_w_LENGTH                       0x00000020

#define _EMACxSA0_STNADDR5_POSITION              0x00000000
#define _EMACxSA0_STNADDR5_MASK                  0x000000FF
#define _EMACxSA0_STNADDR5_LENGTH                0x00000008

#define _EMACxSA0_STNADDR6_POSITION              0x00000008
#define _EMACxSA0_STNADDR6_MASK                  0x0000FF00
#define _EMACxSA0_STNADDR6_LENGTH                0x00000008

#define _EMACxSA0_w_POSITION                     0x00000000
#define _EMACxSA0_w_MASK                         0xFFFFFFFF
#define _EMACxSA0_w_LENGTH                       0x00000020

#define _EMAC1SA1_STNADDR3_POSITION              0x00000000
#define _EMAC1SA1_STNADDR3_MASK                  0x000000FF
#define _EMAC1SA1_STNADDR3_LENGTH                0x00000008

#define _EMAC1SA1_STNADDR4_POSITION              0x00000008
#define _EMAC1SA1_STNADDR4_MASK                  0x0000FF00
#define _EMAC1SA1_STNADDR4_LENGTH                0x00000008

#define _EMAC1SA1_w_POSITION                     0x00000000
#define _EMAC1SA1_w_MASK                         0xFFFFFFFF
#define _EMAC1SA1_w_LENGTH                       0x00000020

#define _EMACxSA1_STNADDR3_POSITION              0x00000000
#define _EMACxSA1_STNADDR3_MASK                  0x000000FF
#define _EMACxSA1_STNADDR3_LENGTH                0x00000008

#define _EMACxSA1_STNADDR4_POSITION              0x00000008
#define _EMACxSA1_STNADDR4_MASK                  0x0000FF00
#define _EMACxSA1_STNADDR4_LENGTH                0x00000008

#define _EMACxSA1_w_POSITION                     0x00000000
#define _EMACxSA1_w_MASK                         0xFFFFFFFF
#define _EMACxSA1_w_LENGTH                       0x00000020

#define _EMAC1SA2_STNADDR1_POSITION              0x00000000
#define _EMAC1SA2_STNADDR1_MASK                  0x000000FF
#define _EMAC1SA2_STNADDR1_LENGTH                0x00000008

#define _EMAC1SA2_STNADDR2_POSITION              0x00000008
#define _EMAC1SA2_STNADDR2_MASK                  0x0000FF00
#define _EMAC1SA2_STNADDR2_LENGTH                0x00000008

#define _EMAC1SA2_w_POSITION                     0x00000000
#define _EMAC1SA2_w_MASK                         0xFFFFFFFF
#define _EMAC1SA2_w_LENGTH                       0x00000020

#define _EMACxSA2_STNADDR1_POSITION              0x00000000
#define _EMACxSA2_STNADDR1_MASK                  0x000000FF
#define _EMACxSA2_STNADDR1_LENGTH                0x00000008

#define _EMACxSA2_STNADDR2_POSITION              0x00000008
#define _EMACxSA2_STNADDR2_MASK                  0x0000FF00
#define _EMACxSA2_STNADDR2_LENGTH                0x00000008

#define _EMACxSA2_w_POSITION                     0x00000000
#define _EMACxSA2_w_MASK                         0xFFFFFFFF
#define _EMACxSA2_w_LENGTH                       0x00000020

#define _DEVCFG3_USERID_POSITION                 0x00000000
#define _DEVCFG3_USERID_MASK                     0x0000FFFF
#define _DEVCFG3_USERID_LENGTH                   0x00000010

#define _DEVCFG3_FSRSSEL_POSITION                0x00000010
#define _DEVCFG3_FSRSSEL_MASK                    0x00070000
#define _DEVCFG3_FSRSSEL_LENGTH                  0x00000003

#define _DEVCFG3_FMIIEN_POSITION                 0x00000018
#define _DEVCFG3_FMIIEN_MASK                     0x01000000
#define _DEVCFG3_FMIIEN_LENGTH                   0x00000001

#define _DEVCFG3_FETHIO_POSITION                 0x00000019
#define _DEVCFG3_FETHIO_MASK                     0x02000000
#define _DEVCFG3_FETHIO_LENGTH                   0x00000001

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

#define _DEVCFG1_FWDTEN_POSITION                 0x00000017
#define _DEVCFG1_FWDTEN_MASK                     0x00800000
#define _DEVCFG1_FWDTEN_LENGTH                   0x00000001

#define _DEVCFG1_w_POSITION                      0x00000000
#define _DEVCFG1_w_MASK                          0xFFFFFFFF
#define _DEVCFG1_w_LENGTH                        0x00000020

#define _DEVCFG0_DEBUG_POSITION                  0x00000000
#define _DEVCFG0_DEBUG_MASK                      0x00000003
#define _DEVCFG0_DEBUG_LENGTH                    0x00000002

#define _DEVCFG0_ICESEL_POSITION                 0x00000003
#define _DEVCFG0_ICESEL_MASK                     0x00000008
#define _DEVCFG0_ICESEL_LENGTH                   0x00000001

#define _DEVCFG0_PWP_POSITION                    0x0000000C
#define _DEVCFG0_PWP_MASK                        0x000FF000
#define _DEVCFG0_PWP_LENGTH                      0x00000008

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
#define _SPI_1_VECTOR                            23
#define _I2C_3_VECTOR                            24
#define _I2C_1A_VECTOR                           24
#define _SPI_3_VECTOR                            24
#define _SPI_1A_VECTOR                           24
#define _UART_1_VECTOR                           24
#define _UART_1A_VECTOR                          24
#define _I2C_1_VECTOR                            25
#define _CHANGE_NOTICE_VECTOR                    26
#define _ADC_VECTOR                              27
#define _PMP_VECTOR                              28
#define _COMPARATOR_1_VECTOR                     29
#define _COMPARATOR_2_VECTOR                     30
#define _I2C_4_VECTOR                            31
#define _I2C_2A_VECTOR                           31
#define _SPI_2_VECTOR                            31
#define _SPI_2A_VECTOR                           31
#define _UART_3_VECTOR                           31
#define _UART_2A_VECTOR                          31
#define _I2C_5_VECTOR                            32
#define _I2C_3A_VECTOR                           32
#define _SPI_4_VECTOR                            32
#define _SPI_3A_VECTOR                           32
#define _UART_2_VECTOR                           32
#define _UART_3A_VECTOR                          32
#define _I2C_2_VECTOR                            33
#define _FAIL_SAFE_MONITOR_VECTOR                34
#define _RTCC_VECTOR                             35
#define _DMA_0_VECTOR                            36
#define _DMA_1_VECTOR                            37
#define _DMA_2_VECTOR                            38
#define _DMA_3_VECTOR                            39
#define _DMA_4_VECTOR                            40
#define _DMA_5_VECTOR                            41
#define _DMA_6_VECTOR                            42
#define _DMA_7_VECTOR                            43
#define _USB_1_VECTOR                            45
#define _ETH_VECTOR                              48
#define _UART_4_VECTOR                           49
#define _UART_1B_VECTOR                          49
#define _UART_6_VECTOR                           50
#define _UART_2B_VECTOR                          50
#define _UART_5_VECTOR                           51
#define _UART_3B_VECTOR                          51
#define _FCE_VECTOR                              44

/* IRQ Numbers */
#define _CORE_TIMER_IRQ                          0
#define _CORE_SOFTWARE_0_IRQ                     1
#define _CORE_SOFTWARE_1_IRQ                     2
#define _EXTERNAL_0_IRQ                          3
#define _TIMER_1_IRQ                             4
#define _INPUT_CAPTURE_1_IRQ                     5
#define _OUTPUT_COMPARE_1_IRQ                    6
#define _EXTERNAL_1_IRQ                          7
#define _TIMER_2_IRQ                             8
#define _INPUT_CAPTURE_2_IRQ                     9
#define _OUTPUT_COMPARE_2_IRQ                    10
#define _EXTERNAL_2_IRQ                          11
#define _TIMER_3_IRQ                             12
#define _INPUT_CAPTURE_3_IRQ                     13
#define _OUTPUT_COMPARE_3_IRQ                    14
#define _EXTERNAL_3_IRQ                          15
#define _TIMER_4_IRQ                             16
#define _INPUT_CAPTURE_4_IRQ                     17
#define _OUTPUT_COMPARE_4_IRQ                    18
#define _EXTERNAL_4_IRQ                          19
#define _TIMER_5_IRQ                             20
#define _INPUT_CAPTURE_5_IRQ                     21
#define _OUTPUT_COMPARE_5_IRQ                    22
#define _SPI1_ERR_IRQ                            23
#define _SPI1_RX_IRQ                             24
#define _SPI1_TX_IRQ                             25
#define _I2C1A_ERR_IRQ                           26
#define _I2C3_BUS_IRQ                            26
#define _SPI1A_ERR_IRQ                           26
#define _SPI3_ERR_IRQ                            26
#define _UART1A_ERR_IRQ                          26
#define _UART1_ERR_IRQ                           26
#define _I2C1A_RX_IRQ                            27
#define _I2C3_SLAVE_IRQ                          27
#define _SPI1A_RX_IRQ                            27
#define _SPI3_RX_IRQ                             27
#define _UART1A_RX_IRQ                           27
#define _UART1_RX_IRQ                            27
#define _I2C1A_TX_IRQ                            28
#define _I2C3_MASTER_IRQ                         28
#define _SPI1A_TX_IRQ                            28
#define _SPI3_TX_IRQ                             28
#define _UART1A_TX_IRQ                           28
#define _UART1_TX_IRQ                            28
#define _I2C1_BUS_IRQ                            29
#define _I2C1_SLAVE_IRQ                          30
#define _I2C1_MASTER_IRQ                         31
#define _CHANGE_NOTICE_IRQ                       32
#define _ADC_IRQ                                 33
#define _PMP_IRQ                                 34
#define _COMPARATOR_1_IRQ                        35
#define _COMPARATOR_2_IRQ                        36
#define _I2C2A_ERR_IRQ                           37
#define _I2C4_BUS_IRQ                            37
#define _SPI2_ERR_IRQ                            37
#define _SPI2A_ERR_IRQ                           37
#define _UART2A_ERR_IRQ                          37
#define _UART3_ERR_IRQ                           37
#define _I2C2A_RX_IRQ                            38
#define _I2C4_SLAVE_IRQ                          38
#define _SPI2_RX_IRQ                             38
#define _SPI2A_RX_IRQ                            38
#define _UART2A_RX_IRQ                           38
#define _UART3_RX_IRQ                            38
#define _I2C2A_TX_IRQ                            39
#define _I2C4_MASTER_IRQ                         39
#define _SPI2A_TX_IRQ                            39
#define _SPI2_TX_IRQ                             39
#define _UART2A_TX_IRQ                           39
#define _UART3_TX_IRQ                            39
#define _I2C3A_ERR_IRQ                           40
#define _I2C5_BUS_IRQ                            40
#define _SPI3A_ERR_IRQ                           40
#define _SPI4_ERR_IRQ                            40
#define _UART2_ERR_IRQ                           40
#define _UART3A_ERR_IRQ                          40
#define _I2C3A_RX_IRQ                            41
#define _I2C5_SLAVE_IRQ                          41
#define _SPI3A_RX_IRQ                            41
#define _SPI4_RX_IRQ                             41
#define _UART2_RX_IRQ                            41
#define _UART3A_RX_IRQ                           41
#define _I2C3A_TX_IRQ                            42
#define _I2C5_MASTER_IRQ                         42
#define _SPI3A_TX_IRQ                            42
#define _SPI4_TX_IRQ                             42
#define _UART2_TX_IRQ                            42
#define _UART3A_TX_IRQ                           42
#define _I2C2_BUS_IRQ                            43
#define _I2C2_SLAVE_IRQ                          44
#define _I2C2_MASTER_IRQ                         45
#define _FAIL_SAFE_MONITOR_IRQ                   46
#define _RTCC_IRQ                                47
#define _DMA0_IRQ                                48
#define _DMA1_IRQ                                49
#define _DMA2_IRQ                                50
#define _DMA3_IRQ                                51
#define _DMA4_IRQ                                52
#define _DMA5_IRQ                                53
#define _DMA6_IRQ                                54
#define _DMA7_IRQ                                55
#define _FLASH_CONTROL_IRQ                       56
#define _USB_IRQ                                 57
#define _ETHERNET_IRQ                            60
#define _INPUT_CAPTURE_ERROR_1_IRQ               61
#define _INPUT_CAPTURE_ERROR_2_IRQ               62
#define _INPUT_CAPTURE_ERROR_3_IRQ               63
#define _INPUT_CAPTURE_ERROR_4_IRQ               64
#define _INPUT_CAPTURE_ERROR_5_IRQ               65
#define _PMP_ERROR_IRQ                           66
#define _UART1B_ERR_IRQ                          67
#define _UART4_ERR_IRQ                           67
#define _UART1B_RX_IRQ                           68
#define _UART4_RX_IRQ                            68
#define _UART1B_TX_IRQ                           69
#define _UART4_TX_IRQ                            69
#define _UART2B_ERR_IRQ                          70
#define _UART6_ERR_IRQ                           70
#define _UART2B_RX_IRQ                           71
#define _UART6_RX_IRQ                            71
#define _UART2B_TX_IRQ                           72
#define _UART6_TX_IRQ                            72
#define _UART3B_ERR_IRQ                          73
#define _UART5_ERR_IRQ                           73
#define _UART3B_RX_IRQ                           74
#define _UART5_RX_IRQ                            74
#define _UART3B_TX_IRQ                           75
#define _UART5_TX_IRQ                            75

/* Device Peripherals */
#define _ADC10
#define _BMX
#define _CFG
#define _CMP
#define _CMP1
#define _CMP2
#define _CVR
#define _DMAC
#define _DMAC0
#define _DMAC1
#define _DMAC2
#define _DMAC3
#define _DMAC4
#define _DMAC5
#define _DMAC6
#define _DMAC7
#define _ETH
#define _I2C1
#define _I2C1A
#define _I2C2
#define _I2C2A
#define _I2C3
#define _I2C3A
#define _I2C4
#define _I2C5
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
#define _PCACHE
#define _PMP
#define _PORTA
#define _PORTB
#define _PORTC
#define _PORTD
#define _PORTE
#define _PORTF
#define _PORTG
#define _RCON
#define _RTCC
#define _SPI1
#define _SPI1A
#define _SPI2
#define _SPI2A
#define _SPI3
#define _SPI3A
#define _SPI4
#define _TMR1
#define _TMR2
#define _TMR23
#define _TMR3
#define _TMR4
#define _TMR45
#define _TMR5
#define _UART1
#define _UART1A
#define _UART1B
#define _UART2
#define _UART2A
#define _UART2B
#define _UART3
#define _UART3A
#define _UART3B
#define _UART4
#define _UART5
#define _UART6
#define _USB
#define _WDT
#define __APPI
#define __APPO
#define __DDPSTAT
#define __STRO

/* Base Addresses for Peripherals */
#define _ADC10_BASE_ADDRESS                      0xBF809000
#define _BMX_BASE_ADDRESS                        0xBF882000
#define _CFG_BASE_ADDRESS                        0xBF80F200
#define _CMP1_BASE_ADDRESS                       0xBF80A000
#define _CMP2_BASE_ADDRESS                       0xBF80A010
#define _CMP_BASE_ADDRESS                        0xBF80A000
#define _CVR_BASE_ADDRESS                        0xBF809800
#define _DMAC0_BASE_ADDRESS                      0xBF883060
#define _DMAC1_BASE_ADDRESS                      0xBF883120
#define _DMAC2_BASE_ADDRESS                      0xBF8831E0
#define _DMAC3_BASE_ADDRESS                      0xBF8832A0
#define _DMAC4_BASE_ADDRESS                      0xBF883360
#define _DMAC5_BASE_ADDRESS                      0xBF883420
#define _DMAC6_BASE_ADDRESS                      0xBF8834E0
#define _DMAC7_BASE_ADDRESS                      0xBF8835A0
#define _DMAC_BASE_ADDRESS                       0xBF883000
#define _ETH_BASE_ADDRESS                        0xBF889000
#define _I2C1A_BASE_ADDRESS                      0xBF805000
#define _I2C1_BASE_ADDRESS                       0xBF805300
#define _I2C2A_BASE_ADDRESS                      0xBF805100
#define _I2C2_BASE_ADDRESS                       0xBF805400
#define _I2C3A_BASE_ADDRESS                      0xBF805200
#define _I2C3_BASE_ADDRESS                       0xBF805000
#define _I2C4_BASE_ADDRESS                       0xBF805100
#define _I2C5_BASE_ADDRESS                       0xBF805200
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
#define _PCACHE_BASE_ADDRESS                     0xBF884000
#define _PMP_BASE_ADDRESS                        0xBF807000
#define _PORTA_BASE_ADDRESS                      0xBF886010
#define _PORTB_BASE_ADDRESS                      0xBF886050
#define _PORTC_BASE_ADDRESS                      0xBF886090
#define _PORTD_BASE_ADDRESS                      0xBF8860D0
#define _PORTE_BASE_ADDRESS                      0xBF886110
#define _PORTF_BASE_ADDRESS                      0xBF886150
#define _PORTG_BASE_ADDRESS                      0xBF886190
#define _RCON_BASE_ADDRESS                       0xBF80F600
#define _RTCC_BASE_ADDRESS                       0xBF800200
#define _SPI1A_BASE_ADDRESS                      0xBF805800
#define _SPI1_BASE_ADDRESS                       0xBF805E00
#define _SPI2A_BASE_ADDRESS                      0xBF805A00
#define _SPI2_BASE_ADDRESS                       0xBF805A00
#define _SPI3A_BASE_ADDRESS                      0xBF805C00
#define _SPI3_BASE_ADDRESS                       0xBF805800
#define _SPI4_BASE_ADDRESS                       0xBF805C00
#define _TMR1_BASE_ADDRESS                       0xBF800600
#define _TMR23_BASE_ADDRESS                      0xBF800800
#define _TMR2_BASE_ADDRESS                       0xBF800800
#define _TMR3_BASE_ADDRESS                       0xBF800A00
#define _TMR45_BASE_ADDRESS                      0xBF800C00
#define _TMR4_BASE_ADDRESS                       0xBF800C00
#define _TMR5_BASE_ADDRESS                       0xBF800E00
#define _UART1A_BASE_ADDRESS                     0xBF806000
#define _UART1B_BASE_ADDRESS                     0xBF806200
#define _UART1_BASE_ADDRESS                      0xBF806000
#define _UART2A_BASE_ADDRESS                     0xBF806400
#define _UART2B_BASE_ADDRESS                     0xBF806600
#define _UART2_BASE_ADDRESS                      0xBF806800
#define _UART3A_BASE_ADDRESS                     0xBF806800
#define _UART3B_BASE_ADDRESS                     0xBF806A00
#define _UART3_BASE_ADDRESS                      0xBF806400
#define _UART4_BASE_ADDRESS                      0xBF806200
#define _UART5_BASE_ADDRESS                      0xBF806A00
#define _UART6_BASE_ADDRESS                      0xBF806600
#define _USB_BASE_ADDRESS                        0xBF885040
#define _WDT_BASE_ADDRESS                        0xBF800000
#define __APPI_BASE_ADDRESS                      0xBF880190
#define __APPO_BASE_ADDRESS                      0xBF880180
#define __DDPSTAT_BASE_ADDRESS                   0xBF880140
#define __STRO_BASE_ADDRESS                      0xBF880170

/* Default Memory-region macros */
#define __EXCEPTION_MEM_BASE                     0x9FC01000
#define __EXCEPTION_MEM_LENGTH                   0x1000
#define __KSEG0_PROGRAM_MEM_BASE                 0x9D000000
#define __KSEG0_PROGRAM_MEM_LENGTH               0x80000
#define __DEBUG_EXEC_MEM_BASE                    0xBFC02000
#define __DEBUG_EXEC_MEM_LENGTH                  0xFF0
#define __KSEG0_BOOT_MEM_BASE                    0x9FC00490
#define __KSEG0_BOOT_MEM_LENGTH                  0x970
#define __KSEG1_BOOT_MEM_BASE                    0xBFC00000
#define __KSEG1_BOOT_MEM_LENGTH                  0x490
#define __KSEG1_DATA_MEM_BASE                    0xA0000000
#define __KSEG1_DATA_MEM_LENGTH                  0x10000
#define __CONFIGSFRS_BASE                        0xBFC02FF0
#define __CONFIGSFRS_LENGTH                      0x10
#define __SFRS_BASE                              0xBF800000
#define __SFRS_LENGTH                            0x100000

/*  The following device macros are predefined by the MPLAB XC32
 *  compiler when compiling with the -mprocessor=<device> option.
 *  We also define them here to help the MPLAB X editor evaluate
 *  them correctly.
 */
#ifndef __32MX675F512L
#  define __32MX675F512L 1
#endif
#ifndef __32MX675F512L__
#  define __32MX675F512L__ 1
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
#  define __PIC32_FLASH_SIZE 512
#endif
#ifndef __PIC32_FEATURE_SET
#  define __PIC32_FEATURE_SET 675
#endif
#ifndef __PIC32_FEATURE_SET__
#  define __PIC32_FEATURE_SET__ 675
#endif
#ifndef __PIC32_MEMORY_SIZE
#  define __PIC32_MEMORY_SIZE 512
#endif
#ifndef __PIC32_MEMORY_SIZE__
#  define __PIC32_MEMORY_SIZE__ 512
#endif
#ifndef __PIC32_PIN_SET
#  define __PIC32_PIN_SET 'L'
#endif

#ifndef __PIC32_PIN_SET__
#  define __PIC32_PIN_SET__ 'L'
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
# define __PIC32_SRS_SET_COUNT 2
#endif

/* include generic header file for backwards compatibility with old C32 v1.xx code */
/* WARNING: Macros from this file are deprecated and should not be used in new     */
/*          source code.                                                           */
#include "proc/ppic32mx.h"



#endif
