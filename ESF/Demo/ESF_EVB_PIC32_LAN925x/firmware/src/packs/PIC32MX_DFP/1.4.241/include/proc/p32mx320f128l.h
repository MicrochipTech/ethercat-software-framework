/*-------------------------------------------------------------------------
 * PIC32MX320F128L processor header
 * Build date : Jul 28 2020
 *
 * Copyright (c) 2020, Microchip Technology Inc. and its subsidiaries ("Microchip")
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
#ifndef __32MX320F128L_H
#define __32MX320F128L_H

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
extern volatile uint32_t        I2C1CONCLR __attribute__((section("sfrs"),address(0xBF805004)));
extern volatile uint32_t        I2C1CONSET __attribute__((section("sfrs"),address(0xBF805008)));
extern volatile uint32_t        I2C1CONINV __attribute__((section("sfrs"),address(0xBF80500C)));
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
extern volatile uint32_t        I2C1STATCLR __attribute__((section("sfrs"),address(0xBF805014)));
extern volatile uint32_t        I2C1STATSET __attribute__((section("sfrs"),address(0xBF805018)));
extern volatile uint32_t        I2C1STATINV __attribute__((section("sfrs"),address(0xBF80501C)));
#define I2C1ADD I2C1ADD
extern volatile uint32_t   I2C1ADD __attribute__((section("sfrs"), address(0xBF805020)));
extern volatile uint32_t        I2C1ADDCLR __attribute__((section("sfrs"),address(0xBF805024)));
extern volatile uint32_t        I2C1ADDSET __attribute__((section("sfrs"),address(0xBF805028)));
extern volatile uint32_t        I2C1ADDINV __attribute__((section("sfrs"),address(0xBF80502C)));
#define I2C1MSK I2C1MSK
extern volatile uint32_t   I2C1MSK __attribute__((section("sfrs"), address(0xBF805030)));
extern volatile uint32_t        I2C1MSKCLR __attribute__((section("sfrs"),address(0xBF805034)));
extern volatile uint32_t        I2C1MSKSET __attribute__((section("sfrs"),address(0xBF805038)));
extern volatile uint32_t        I2C1MSKINV __attribute__((section("sfrs"),address(0xBF80503C)));
#define I2C1BRG I2C1BRG
extern volatile uint32_t   I2C1BRG __attribute__((section("sfrs"), address(0xBF805040)));
extern volatile uint32_t        I2C1BRGCLR __attribute__((section("sfrs"),address(0xBF805044)));
extern volatile uint32_t        I2C1BRGSET __attribute__((section("sfrs"),address(0xBF805048)));
extern volatile uint32_t        I2C1BRGINV __attribute__((section("sfrs"),address(0xBF80504C)));
#define I2C1TRN I2C1TRN
extern volatile uint32_t   I2C1TRN __attribute__((section("sfrs"), address(0xBF805050)));
extern volatile uint32_t        I2C1TRNCLR __attribute__((section("sfrs"),address(0xBF805054)));
extern volatile uint32_t        I2C1TRNSET __attribute__((section("sfrs"),address(0xBF805058)));
extern volatile uint32_t        I2C1TRNINV __attribute__((section("sfrs"),address(0xBF80505C)));
#define I2C1RCV I2C1RCV
extern volatile uint32_t   I2C1RCV __attribute__((section("sfrs"), address(0xBF805060)));
#define I2C2CON I2C2CON
extern volatile uint32_t   I2C2CON __attribute__((section("sfrs"), address(0xBF805200)));
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
extern volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON") __attribute__((section("sfrs"), address(0xBF805200)));
extern volatile uint32_t        I2C2CONCLR __attribute__((section("sfrs"),address(0xBF805204)));
extern volatile uint32_t        I2C2CONSET __attribute__((section("sfrs"),address(0xBF805208)));
extern volatile uint32_t        I2C2CONINV __attribute__((section("sfrs"),address(0xBF80520C)));
#define I2C2STAT I2C2STAT
extern volatile uint32_t   I2C2STAT __attribute__((section("sfrs"), address(0xBF805210)));
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
extern volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT") __attribute__((section("sfrs"), address(0xBF805210)));
extern volatile uint32_t        I2C2STATCLR __attribute__((section("sfrs"),address(0xBF805214)));
extern volatile uint32_t        I2C2STATSET __attribute__((section("sfrs"),address(0xBF805218)));
extern volatile uint32_t        I2C2STATINV __attribute__((section("sfrs"),address(0xBF80521C)));
#define I2C2ADD I2C2ADD
extern volatile uint32_t   I2C2ADD __attribute__((section("sfrs"), address(0xBF805220)));
extern volatile uint32_t        I2C2ADDCLR __attribute__((section("sfrs"),address(0xBF805224)));
extern volatile uint32_t        I2C2ADDSET __attribute__((section("sfrs"),address(0xBF805228)));
extern volatile uint32_t        I2C2ADDINV __attribute__((section("sfrs"),address(0xBF80522C)));
#define I2C2MSK I2C2MSK
extern volatile uint32_t   I2C2MSK __attribute__((section("sfrs"), address(0xBF805230)));
extern volatile uint32_t        I2C2MSKCLR __attribute__((section("sfrs"),address(0xBF805234)));
extern volatile uint32_t        I2C2MSKSET __attribute__((section("sfrs"),address(0xBF805238)));
extern volatile uint32_t        I2C2MSKINV __attribute__((section("sfrs"),address(0xBF80523C)));
#define I2C2BRG I2C2BRG
extern volatile uint32_t   I2C2BRG __attribute__((section("sfrs"), address(0xBF805240)));
extern volatile uint32_t        I2C2BRGCLR __attribute__((section("sfrs"),address(0xBF805244)));
extern volatile uint32_t        I2C2BRGSET __attribute__((section("sfrs"),address(0xBF805248)));
extern volatile uint32_t        I2C2BRGINV __attribute__((section("sfrs"),address(0xBF80524C)));
#define I2C2TRN I2C2TRN
extern volatile uint32_t   I2C2TRN __attribute__((section("sfrs"), address(0xBF805250)));
extern volatile uint32_t        I2C2TRNCLR __attribute__((section("sfrs"),address(0xBF805254)));
extern volatile uint32_t        I2C2TRNSET __attribute__((section("sfrs"),address(0xBF805258)));
extern volatile uint32_t        I2C2TRNINV __attribute__((section("sfrs"),address(0xBF80525C)));
#define I2C2RCV I2C2RCV
extern volatile uint32_t   I2C2RCV __attribute__((section("sfrs"), address(0xBF805260)));
#define SPI1CON SPI1CON
extern volatile uint32_t   SPI1CON __attribute__((section("sfrs"), address(0xBF805800)));
typedef union {
  struct {
    uint32_t :5;
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
    uint32_t :1;
    uint32_t SPIFE:1;
    uint32_t :11;
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
    uint32_t :2;
    uint32_t SPITBE:1;
    uint32_t :2;
    uint32_t SPIROV:1;
    uint32_t :4;
    uint32_t SPIBUSY:1;
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
#define SPI2CON SPI2CON
extern volatile uint32_t   SPI2CON __attribute__((section("sfrs"), address(0xBF805A00)));
typedef union {
  struct {
    uint32_t :5;
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
    uint32_t :1;
    uint32_t SPIFE:1;
    uint32_t :11;
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
    uint32_t :2;
    uint32_t SPITBE:1;
    uint32_t :2;
    uint32_t SPIROV:1;
    uint32_t :4;
    uint32_t SPIBUSY:1;
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
extern volatile uint32_t        U1MODECLR __attribute__((section("sfrs"),address(0xBF806004)));
extern volatile uint32_t        U1MODESET __attribute__((section("sfrs"),address(0xBF806008)));
extern volatile uint32_t        U1MODEINV __attribute__((section("sfrs"),address(0xBF80600C)));
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
extern volatile uint32_t        U1STACLR __attribute__((section("sfrs"),address(0xBF806014)));
extern volatile uint32_t        U1STASET __attribute__((section("sfrs"),address(0xBF806018)));
extern volatile uint32_t        U1STAINV __attribute__((section("sfrs"),address(0xBF80601C)));
#define U1TXREG U1TXREG
extern volatile uint32_t   U1TXREG __attribute__((section("sfrs"), address(0xBF806020)));
#define U1RXREG U1RXREG
extern volatile uint32_t   U1RXREG __attribute__((section("sfrs"), address(0xBF806030)));
#define U1BRG U1BRG
extern volatile uint32_t   U1BRG __attribute__((section("sfrs"), address(0xBF806040)));
extern volatile uint32_t        U1BRGCLR __attribute__((section("sfrs"),address(0xBF806044)));
extern volatile uint32_t        U1BRGSET __attribute__((section("sfrs"),address(0xBF806048)));
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
extern volatile uint32_t        U2MODECLR __attribute__((section("sfrs"),address(0xBF806204)));
extern volatile uint32_t        U2MODESET __attribute__((section("sfrs"),address(0xBF806208)));
extern volatile uint32_t        U2MODEINV __attribute__((section("sfrs"),address(0xBF80620C)));
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
extern volatile uint32_t        U2STACLR __attribute__((section("sfrs"),address(0xBF806214)));
extern volatile uint32_t        U2STASET __attribute__((section("sfrs"),address(0xBF806218)));
extern volatile uint32_t        U2STAINV __attribute__((section("sfrs"),address(0xBF80621C)));
#define U2TXREG U2TXREG
extern volatile uint32_t   U2TXREG __attribute__((section("sfrs"), address(0xBF806220)));
#define U2RXREG U2RXREG
extern volatile uint32_t   U2RXREG __attribute__((section("sfrs"), address(0xBF806230)));
#define U2BRG U2BRG
extern volatile uint32_t   U2BRG __attribute__((section("sfrs"), address(0xBF806240)));
extern volatile uint32_t        U2BRGCLR __attribute__((section("sfrs"),address(0xBF806244)));
extern volatile uint32_t        U2BRGSET __attribute__((section("sfrs"),address(0xBF806248)));
extern volatile uint32_t        U2BRGINV __attribute__((section("sfrs"),address(0xBF80624C)));
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
    uint32_t LOCK:1;
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
  uint32_t :2;
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
typedef struct {
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
} __INTCONbits_t;
extern volatile __INTCONbits_t INTCONbits __asm__ ("INTCON") __attribute__((section("sfrs"), address(0xBF881000)));
extern volatile uint32_t        INTCONCLR __attribute__((section("sfrs"),address(0xBF881004)));
extern volatile uint32_t        INTCONSET __attribute__((section("sfrs"),address(0xBF881008)));
extern volatile uint32_t        INTCONINV __attribute__((section("sfrs"),address(0xBF88100C)));
#define INTSTAT INTSTAT
extern volatile uint32_t   INTSTAT __attribute__((section("sfrs"), address(0xBF881010)));
typedef union {
  struct {
    uint32_t VEC:6;
    uint32_t :2;
    uint32_t RIPL:3;
  };
  struct {
    uint32_t :8;
    uint32_t SRIPL:3;
  };
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT") __attribute__((section("sfrs"), address(0xBF881010)));
#define IPTMR IPTMR
extern volatile uint32_t   IPTMR __attribute__((section("sfrs"), address(0xBF881020)));
extern volatile uint32_t        IPTMRCLR __attribute__((section("sfrs"),address(0xBF881024)));
extern volatile uint32_t        IPTMRSET __attribute__((section("sfrs"),address(0xBF881028)));
extern volatile uint32_t        IPTMRINV __attribute__((section("sfrs"),address(0xBF88102C)));
#define IFS0 IFS0
extern volatile uint32_t   IFS0 __attribute__((section("sfrs"), address(0xBF881030)));
typedef struct {
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
  uint32_t SPI1TXIF:1;
  uint32_t SPI1RXIF:1;
  uint32_t U1EIF:1;
  uint32_t U1RXIF:1;
  uint32_t U1TXIF:1;
  uint32_t I2C1BIF:1;
  uint32_t I2C1SIF:1;
  uint32_t I2C1MIF:1;
} __IFS0bits_t;
extern volatile __IFS0bits_t IFS0bits __asm__ ("IFS0") __attribute__((section("sfrs"), address(0xBF881030)));
extern volatile uint32_t        IFS0CLR __attribute__((section("sfrs"),address(0xBF881034)));
extern volatile uint32_t        IFS0SET __attribute__((section("sfrs"),address(0xBF881038)));
extern volatile uint32_t        IFS0INV __attribute__((section("sfrs"),address(0xBF88103C)));
#define IFS1 IFS1
extern volatile uint32_t   IFS1 __attribute__((section("sfrs"), address(0xBF881040)));
typedef struct {
  uint32_t CNIF:1;
  uint32_t AD1IF:1;
  uint32_t PMPIF:1;
  uint32_t CMP1IF:1;
  uint32_t CMP2IF:1;
  uint32_t SPI2EIF:1;
  uint32_t SPI2TXIF:1;
  uint32_t SPI2RXIF:1;
  uint32_t U2EIF:1;
  uint32_t U2RXIF:1;
  uint32_t U2TXIF:1;
  uint32_t I2C2BIF:1;
  uint32_t I2C2SIF:1;
  uint32_t I2C2MIF:1;
  uint32_t FSCMIF:1;
  uint32_t RTCCIF:1;
  uint32_t :8;
  uint32_t FCEIF:1;
} __IFS1bits_t;
extern volatile __IFS1bits_t IFS1bits __asm__ ("IFS1") __attribute__((section("sfrs"), address(0xBF881040)));
extern volatile uint32_t        IFS1CLR __attribute__((section("sfrs"),address(0xBF881044)));
extern volatile uint32_t        IFS1SET __attribute__((section("sfrs"),address(0xBF881048)));
extern volatile uint32_t        IFS1INV __attribute__((section("sfrs"),address(0xBF88104C)));
#define IEC0 IEC0
extern volatile uint32_t   IEC0 __attribute__((section("sfrs"), address(0xBF881060)));
typedef struct {
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
  uint32_t SPI1TXIE:1;
  uint32_t SPI1RXIE:1;
  uint32_t U1EIE:1;
  uint32_t U1RXIE:1;
  uint32_t U1TXIE:1;
  uint32_t I2C1BIE:1;
  uint32_t I2C1SIE:1;
  uint32_t I2C1MIE:1;
} __IEC0bits_t;
extern volatile __IEC0bits_t IEC0bits __asm__ ("IEC0") __attribute__((section("sfrs"), address(0xBF881060)));
extern volatile uint32_t        IEC0CLR __attribute__((section("sfrs"),address(0xBF881064)));
extern volatile uint32_t        IEC0SET __attribute__((section("sfrs"),address(0xBF881068)));
extern volatile uint32_t        IEC0INV __attribute__((section("sfrs"),address(0xBF88106C)));
#define IEC1 IEC1
extern volatile uint32_t   IEC1 __attribute__((section("sfrs"), address(0xBF881070)));
typedef struct {
  uint32_t CNIE:1;
  uint32_t AD1IE:1;
  uint32_t PMPIE:1;
  uint32_t CMP1IE:1;
  uint32_t CMP2IE:1;
  uint32_t SPI2EIE:1;
  uint32_t SPI2TXIE:1;
  uint32_t SPI2RXIE:1;
  uint32_t U2EIE:1;
  uint32_t U2RXIE:1;
  uint32_t U2TXIE:1;
  uint32_t I2C2BIE:1;
  uint32_t I2C2SIE:1;
  uint32_t I2C2MIE:1;
  uint32_t FSCMIE:1;
  uint32_t RTCCIE:1;
  uint32_t :8;
  uint32_t FCEIE:1;
} __IEC1bits_t;
extern volatile __IEC1bits_t IEC1bits __asm__ ("IEC1") __attribute__((section("sfrs"), address(0xBF881070)));
extern volatile uint32_t        IEC1CLR __attribute__((section("sfrs"),address(0xBF881074)));
extern volatile uint32_t        IEC1SET __attribute__((section("sfrs"),address(0xBF881078)));
extern volatile uint32_t        IEC1INV __attribute__((section("sfrs"),address(0xBF88107C)));
#define IPC0 IPC0
extern volatile uint32_t   IPC0 __attribute__((section("sfrs"), address(0xBF881090)));
typedef struct {
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
} __IPC0bits_t;
extern volatile __IPC0bits_t IPC0bits __asm__ ("IPC0") __attribute__((section("sfrs"), address(0xBF881090)));
extern volatile uint32_t        IPC0CLR __attribute__((section("sfrs"),address(0xBF881094)));
extern volatile uint32_t        IPC0SET __attribute__((section("sfrs"),address(0xBF881098)));
extern volatile uint32_t        IPC0INV __attribute__((section("sfrs"),address(0xBF88109C)));
#define IPC1 IPC1
extern volatile uint32_t   IPC1 __attribute__((section("sfrs"), address(0xBF8810A0)));
typedef struct {
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
} __IPC1bits_t;
extern volatile __IPC1bits_t IPC1bits __asm__ ("IPC1") __attribute__((section("sfrs"), address(0xBF8810A0)));
extern volatile uint32_t        IPC1CLR __attribute__((section("sfrs"),address(0xBF8810A4)));
extern volatile uint32_t        IPC1SET __attribute__((section("sfrs"),address(0xBF8810A8)));
extern volatile uint32_t        IPC1INV __attribute__((section("sfrs"),address(0xBF8810AC)));
#define IPC2 IPC2
extern volatile uint32_t   IPC2 __attribute__((section("sfrs"), address(0xBF8810B0)));
typedef struct {
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
} __IPC2bits_t;
extern volatile __IPC2bits_t IPC2bits __asm__ ("IPC2") __attribute__((section("sfrs"), address(0xBF8810B0)));
extern volatile uint32_t        IPC2CLR __attribute__((section("sfrs"),address(0xBF8810B4)));
extern volatile uint32_t        IPC2SET __attribute__((section("sfrs"),address(0xBF8810B8)));
extern volatile uint32_t        IPC2INV __attribute__((section("sfrs"),address(0xBF8810BC)));
#define IPC3 IPC3
extern volatile uint32_t   IPC3 __attribute__((section("sfrs"), address(0xBF8810C0)));
typedef struct {
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
} __IPC3bits_t;
extern volatile __IPC3bits_t IPC3bits __asm__ ("IPC3") __attribute__((section("sfrs"), address(0xBF8810C0)));
extern volatile uint32_t        IPC3CLR __attribute__((section("sfrs"),address(0xBF8810C4)));
extern volatile uint32_t        IPC3SET __attribute__((section("sfrs"),address(0xBF8810C8)));
extern volatile uint32_t        IPC3INV __attribute__((section("sfrs"),address(0xBF8810CC)));
#define IPC4 IPC4
extern volatile uint32_t   IPC4 __attribute__((section("sfrs"), address(0xBF8810D0)));
typedef struct {
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
} __IPC4bits_t;
extern volatile __IPC4bits_t IPC4bits __asm__ ("IPC4") __attribute__((section("sfrs"), address(0xBF8810D0)));
extern volatile uint32_t        IPC4CLR __attribute__((section("sfrs"),address(0xBF8810D4)));
extern volatile uint32_t        IPC4SET __attribute__((section("sfrs"),address(0xBF8810D8)));
extern volatile uint32_t        IPC4INV __attribute__((section("sfrs"),address(0xBF8810DC)));
#define IPC5 IPC5
extern volatile uint32_t   IPC5 __attribute__((section("sfrs"), address(0xBF8810E0)));
typedef struct {
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
} __IPC5bits_t;
extern volatile __IPC5bits_t IPC5bits __asm__ ("IPC5") __attribute__((section("sfrs"), address(0xBF8810E0)));
extern volatile uint32_t        IPC5CLR __attribute__((section("sfrs"),address(0xBF8810E4)));
extern volatile uint32_t        IPC5SET __attribute__((section("sfrs"),address(0xBF8810E8)));
extern volatile uint32_t        IPC5INV __attribute__((section("sfrs"),address(0xBF8810EC)));
#define IPC6 IPC6
extern volatile uint32_t   IPC6 __attribute__((section("sfrs"), address(0xBF8810F0)));
typedef struct {
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
} __IPC6bits_t;
extern volatile __IPC6bits_t IPC6bits __asm__ ("IPC6") __attribute__((section("sfrs"), address(0xBF8810F0)));
extern volatile uint32_t        IPC6CLR __attribute__((section("sfrs"),address(0xBF8810F4)));
extern volatile uint32_t        IPC6SET __attribute__((section("sfrs"),address(0xBF8810F8)));
extern volatile uint32_t        IPC6INV __attribute__((section("sfrs"),address(0xBF8810FC)));
#define IPC7 IPC7
extern volatile uint32_t   IPC7 __attribute__((section("sfrs"), address(0xBF881100)));
typedef struct {
  uint32_t PMPIS:2;
  uint32_t PMPIP:3;
  uint32_t :3;
  uint32_t CMP1IS:2;
  uint32_t CMP1IP:3;
  uint32_t :3;
  uint32_t CMP2IS:2;
  uint32_t CMP2IP:3;
  uint32_t :3;
  uint32_t SPI2IS:2;
  uint32_t SPI2IP:3;
} __IPC7bits_t;
extern volatile __IPC7bits_t IPC7bits __asm__ ("IPC7") __attribute__((section("sfrs"), address(0xBF881100)));
extern volatile uint32_t        IPC7CLR __attribute__((section("sfrs"),address(0xBF881104)));
extern volatile uint32_t        IPC7SET __attribute__((section("sfrs"),address(0xBF881108)));
extern volatile uint32_t        IPC7INV __attribute__((section("sfrs"),address(0xBF88110C)));
#define IPC8 IPC8
extern volatile uint32_t   IPC8 __attribute__((section("sfrs"), address(0xBF881110)));
typedef struct {
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
} __IPC8bits_t;
extern volatile __IPC8bits_t IPC8bits __asm__ ("IPC8") __attribute__((section("sfrs"), address(0xBF881110)));
extern volatile uint32_t        IPC8CLR __attribute__((section("sfrs"),address(0xBF881114)));
extern volatile uint32_t        IPC8SET __attribute__((section("sfrs"),address(0xBF881118)));
extern volatile uint32_t        IPC8INV __attribute__((section("sfrs"),address(0xBF88111C)));
#define IPC11 IPC11
extern volatile uint32_t   IPC11 __attribute__((section("sfrs"), address(0xBF881140)));
typedef struct {
  uint32_t FCEIS:2;
  uint32_t FCEIP:3;
} __IPC11bits_t;
extern volatile __IPC11bits_t IPC11bits __asm__ ("IPC11") __attribute__((section("sfrs"), address(0xBF881140)));
extern volatile uint32_t        IPC11CLR __attribute__((section("sfrs"),address(0xBF881144)));
extern volatile uint32_t        IPC11SET __attribute__((section("sfrs"),address(0xBF881148)));
extern volatile uint32_t        IPC11INV __attribute__((section("sfrs"),address(0xBF88114C)));
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
    uint32_t TRISF6:1;
    uint32_t TRISF7:1;
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
    uint32_t RF6:1;
    uint32_t RF7:1;
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
    uint32_t LATF6:1;
    uint32_t LATF7:1;
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
    uint32_t ODCF6:1;
    uint32_t ODCF7:1;
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
#define DEVCFG3 DEVCFG3
extern volatile uint32_t   DEVCFG3 __attribute__((section("sfrs"), address(0xBFC02FF0)));
typedef union {
  struct {
    uint32_t USERID:16;
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
    uint32_t :9;
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
  .extern I2C1CON          /* 0xBF805000 */
  .extern I2C1CONCLR       /* 0xBF805004 */
  .extern I2C1CONSET       /* 0xBF805008 */
  .extern I2C1CONINV       /* 0xBF80500C */
  .extern I2C1STAT         /* 0xBF805010 */
  .extern I2C1STATCLR      /* 0xBF805014 */
  .extern I2C1STATSET      /* 0xBF805018 */
  .extern I2C1STATINV      /* 0xBF80501C */
  .extern I2C1ADD          /* 0xBF805020 */
  .extern I2C1ADDCLR       /* 0xBF805024 */
  .extern I2C1ADDSET       /* 0xBF805028 */
  .extern I2C1ADDINV       /* 0xBF80502C */
  .extern I2C1MSK          /* 0xBF805030 */
  .extern I2C1MSKCLR       /* 0xBF805034 */
  .extern I2C1MSKSET       /* 0xBF805038 */
  .extern I2C1MSKINV       /* 0xBF80503C */
  .extern I2C1BRG          /* 0xBF805040 */
  .extern I2C1BRGCLR       /* 0xBF805044 */
  .extern I2C1BRGSET       /* 0xBF805048 */
  .extern I2C1BRGINV       /* 0xBF80504C */
  .extern I2C1TRN          /* 0xBF805050 */
  .extern I2C1TRNCLR       /* 0xBF805054 */
  .extern I2C1TRNSET       /* 0xBF805058 */
  .extern I2C1TRNINV       /* 0xBF80505C */
  .extern I2C1RCV          /* 0xBF805060 */
  .extern I2C2CON          /* 0xBF805200 */
  .extern I2C2CONCLR       /* 0xBF805204 */
  .extern I2C2CONSET       /* 0xBF805208 */
  .extern I2C2CONINV       /* 0xBF80520C */
  .extern I2C2STAT         /* 0xBF805210 */
  .extern I2C2STATCLR      /* 0xBF805214 */
  .extern I2C2STATSET      /* 0xBF805218 */
  .extern I2C2STATINV      /* 0xBF80521C */
  .extern I2C2ADD          /* 0xBF805220 */
  .extern I2C2ADDCLR       /* 0xBF805224 */
  .extern I2C2ADDSET       /* 0xBF805228 */
  .extern I2C2ADDINV       /* 0xBF80522C */
  .extern I2C2MSK          /* 0xBF805230 */
  .extern I2C2MSKCLR       /* 0xBF805234 */
  .extern I2C2MSKSET       /* 0xBF805238 */
  .extern I2C2MSKINV       /* 0xBF80523C */
  .extern I2C2BRG          /* 0xBF805240 */
  .extern I2C2BRGCLR       /* 0xBF805244 */
  .extern I2C2BRGSET       /* 0xBF805248 */
  .extern I2C2BRGINV       /* 0xBF80524C */
  .extern I2C2TRN          /* 0xBF805250 */
  .extern I2C2TRNCLR       /* 0xBF805254 */
  .extern I2C2TRNSET       /* 0xBF805258 */
  .extern I2C2TRNINV       /* 0xBF80525C */
  .extern I2C2RCV          /* 0xBF805260 */
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
  .extern U1MODE           /* 0xBF806000 */
  .extern U1MODECLR        /* 0xBF806004 */
  .extern U1MODESET        /* 0xBF806008 */
  .extern U1MODEINV        /* 0xBF80600C */
  .extern U1STA            /* 0xBF806010 */
  .extern U1STACLR         /* 0xBF806014 */
  .extern U1STASET         /* 0xBF806018 */
  .extern U1STAINV         /* 0xBF80601C */
  .extern U1TXREG          /* 0xBF806020 */
  .extern U1RXREG          /* 0xBF806030 */
  .extern U1BRG            /* 0xBF806040 */
  .extern U1BRGCLR         /* 0xBF806044 */
  .extern U1BRGSET         /* 0xBF806048 */
  .extern U1BRGINV         /* 0xBF80604C */
  .extern U2MODE           /* 0xBF806200 */
  .extern U2MODECLR        /* 0xBF806204 */
  .extern U2MODESET        /* 0xBF806208 */
  .extern U2MODEINV        /* 0xBF80620C */
  .extern U2STA            /* 0xBF806210 */
  .extern U2STACLR         /* 0xBF806214 */
  .extern U2STASET         /* 0xBF806218 */
  .extern U2STAINV         /* 0xBF80621C */
  .extern U2TXREG          /* 0xBF806220 */
  .extern U2RXREG          /* 0xBF806230 */
  .extern U2BRG            /* 0xBF806240 */
  .extern U2BRGCLR         /* 0xBF806244 */
  .extern U2BRGSET         /* 0xBF806248 */
  .extern U2BRGINV         /* 0xBF80624C */
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
  .extern IPC11            /* 0xBF881140 */
  .extern IPC11CLR         /* 0xBF881144 */
  .extern IPC11SET         /* 0xBF881148 */
  .extern IPC11INV         /* 0xBF88114C */
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

#define _SPI1CON_SPIFE_POSITION                  0x00000011
#define _SPI1CON_SPIFE_MASK                      0x00020000
#define _SPI1CON_SPIFE_LENGTH                    0x00000001

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

#define _SPI1STAT_SPITBE_POSITION                0x00000003
#define _SPI1STAT_SPITBE_MASK                    0x00000008
#define _SPI1STAT_SPITBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI1STAT_SPIBUSY_MASK                   0x00000800
#define _SPI1STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI1STAT_w_POSITION                     0x00000000
#define _SPI1STAT_w_MASK                         0xFFFFFFFF
#define _SPI1STAT_w_LENGTH                       0x00000020

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

#define _SPI2CON_SPIFE_POSITION                  0x00000011
#define _SPI2CON_SPIFE_MASK                      0x00020000
#define _SPI2CON_SPIFE_LENGTH                    0x00000001

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

#define _SPI2STAT_SPITBE_POSITION                0x00000003
#define _SPI2STAT_SPITBE_MASK                    0x00000008
#define _SPI2STAT_SPITBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI2STAT_SPIBUSY_MASK                   0x00000800
#define _SPI2STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI2STAT_w_POSITION                     0x00000000
#define _SPI2STAT_w_MASK                         0xFFFFFFFF
#define _SPI2STAT_w_LENGTH                       0x00000020

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

#define _OSCCON_LOCK_POSITION                    0x00000005
#define _OSCCON_LOCK_MASK                        0x00000020
#define _OSCCON_LOCK_LENGTH                      0x00000001

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

#define _INTCON_SS0_POSITION                     0x00000010
#define _INTCON_SS0_MASK                         0x00010000
#define _INTCON_SS0_LENGTH                       0x00000001

#define _INTSTAT_VEC_POSITION                    0x00000000
#define _INTSTAT_VEC_MASK                        0x0000003F
#define _INTSTAT_VEC_LENGTH                      0x00000006

#define _INTSTAT_RIPL_POSITION                   0x00000008
#define _INTSTAT_RIPL_MASK                       0x00000700
#define _INTSTAT_RIPL_LENGTH                     0x00000003

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

#define _IFS0_SPI1TXIF_POSITION                  0x00000018
#define _IFS0_SPI1TXIF_MASK                      0x01000000
#define _IFS0_SPI1TXIF_LENGTH                    0x00000001

#define _IFS0_SPI1RXIF_POSITION                  0x00000019
#define _IFS0_SPI1RXIF_MASK                      0x02000000
#define _IFS0_SPI1RXIF_LENGTH                    0x00000001

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

#define _IFS1_SPI2EIF_POSITION                   0x00000005
#define _IFS1_SPI2EIF_MASK                       0x00000020
#define _IFS1_SPI2EIF_LENGTH                     0x00000001

#define _IFS1_SPI2TXIF_POSITION                  0x00000006
#define _IFS1_SPI2TXIF_MASK                      0x00000040
#define _IFS1_SPI2TXIF_LENGTH                    0x00000001

#define _IFS1_SPI2RXIF_POSITION                  0x00000007
#define _IFS1_SPI2RXIF_MASK                      0x00000080
#define _IFS1_SPI2RXIF_LENGTH                    0x00000001

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

#define _IFS1_FCEIF_POSITION                     0x00000018
#define _IFS1_FCEIF_MASK                         0x01000000
#define _IFS1_FCEIF_LENGTH                       0x00000001

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

#define _IEC0_SPI1TXIE_POSITION                  0x00000018
#define _IEC0_SPI1TXIE_MASK                      0x01000000
#define _IEC0_SPI1TXIE_LENGTH                    0x00000001

#define _IEC0_SPI1RXIE_POSITION                  0x00000019
#define _IEC0_SPI1RXIE_MASK                      0x02000000
#define _IEC0_SPI1RXIE_LENGTH                    0x00000001

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

#define _IEC1_SPI2EIE_POSITION                   0x00000005
#define _IEC1_SPI2EIE_MASK                       0x00000020
#define _IEC1_SPI2EIE_LENGTH                     0x00000001

#define _IEC1_SPI2TXIE_POSITION                  0x00000006
#define _IEC1_SPI2TXIE_MASK                      0x00000040
#define _IEC1_SPI2TXIE_LENGTH                    0x00000001

#define _IEC1_SPI2RXIE_POSITION                  0x00000007
#define _IEC1_SPI2RXIE_MASK                      0x00000080
#define _IEC1_SPI2RXIE_LENGTH                    0x00000001

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

#define _IEC1_FCEIE_POSITION                     0x00000018
#define _IEC1_FCEIE_MASK                         0x01000000
#define _IEC1_FCEIE_LENGTH                       0x00000001

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

#define _IPC7_SPI2IS_POSITION                    0x00000018
#define _IPC7_SPI2IS_MASK                        0x03000000
#define _IPC7_SPI2IS_LENGTH                      0x00000002

#define _IPC7_SPI2IP_POSITION                    0x0000001A
#define _IPC7_SPI2IP_MASK                        0x1C000000
#define _IPC7_SPI2IP_LENGTH                      0x00000003

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

#define _IPC11_FCEIS_POSITION                    0x00000000
#define _IPC11_FCEIS_MASK                        0x00000003
#define _IPC11_FCEIS_LENGTH                      0x00000002

#define _IPC11_FCEIP_POSITION                    0x00000002
#define _IPC11_FCEIP_MASK                        0x0000001C
#define _IPC11_FCEIP_LENGTH                      0x00000003

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

#define _TRISF_TRISF6_POSITION                   0x00000006
#define _TRISF_TRISF6_MASK                       0x00000040
#define _TRISF_TRISF6_LENGTH                     0x00000001

#define _TRISF_TRISF7_POSITION                   0x00000007
#define _TRISF_TRISF7_MASK                       0x00000080
#define _TRISF_TRISF7_LENGTH                     0x00000001

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

#define _PORTF_RF6_POSITION                      0x00000006
#define _PORTF_RF6_MASK                          0x00000040
#define _PORTF_RF6_LENGTH                        0x00000001

#define _PORTF_RF7_POSITION                      0x00000007
#define _PORTF_RF7_MASK                          0x00000080
#define _PORTF_RF7_LENGTH                        0x00000001

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

#define _LATF_LATF6_POSITION                     0x00000006
#define _LATF_LATF6_MASK                         0x00000040
#define _LATF_LATF6_LENGTH                       0x00000001

#define _LATF_LATF7_POSITION                     0x00000007
#define _LATF_LATF7_MASK                         0x00000080
#define _LATF_LATF7_LENGTH                       0x00000001

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

#define _ODCF_ODCF6_POSITION                     0x00000006
#define _ODCF_ODCF6_MASK                         0x00000040
#define _ODCF_ODCF6_LENGTH                       0x00000001

#define _ODCF_ODCF7_POSITION                     0x00000007
#define _ODCF_ODCF7_MASK                         0x00000080
#define _ODCF_ODCF7_LENGTH                       0x00000001

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

#define _DEVCFG3_USERID_POSITION                 0x00000000
#define _DEVCFG3_USERID_MASK                     0x0000FFFF
#define _DEVCFG3_USERID_LENGTH                   0x00000010

#define _DEVCFG3_w_POSITION                      0x00000000
#define _DEVCFG3_w_MASK                          0xFFFFFFFF
#define _DEVCFG3_w_LENGTH                        0x00000020

#define _DEVCFG2_FPLLIDIV_POSITION               0x00000000
#define _DEVCFG2_FPLLIDIV_MASK                   0x00000007
#define _DEVCFG2_FPLLIDIV_LENGTH                 0x00000003

#define _DEVCFG2_FPLLMUL_POSITION                0x00000004
#define _DEVCFG2_FPLLMUL_MASK                    0x00000070
#define _DEVCFG2_FPLLMUL_LENGTH                  0x00000003

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
#define _EXTERNAL_1_VECTOR                       7
#define _EXTERNAL_2_VECTOR                       11
#define _EXTERNAL_3_VECTOR                       15
#define _EXTERNAL_4_VECTOR                       19
#define _TIMER_1_VECTOR                          4
#define _TIMER_2_VECTOR                          8
#define _TIMER_3_VECTOR                          12
#define _TIMER_4_VECTOR                          16
#define _TIMER_5_VECTOR                          20
#define _CHANGE_NOTICE_VECTOR                    26
#define _INPUT_CAPTURE_1_VECTOR                  5
#define _INPUT_CAPTURE_2_VECTOR                  9
#define _INPUT_CAPTURE_3_VECTOR                  13
#define _INPUT_CAPTURE_4_VECTOR                  17
#define _INPUT_CAPTURE_5_VECTOR                  21
#define _OUTPUT_COMPARE_1_VECTOR                 6
#define _OUTPUT_COMPARE_2_VECTOR                 10
#define _OUTPUT_COMPARE_3_VECTOR                 14
#define _OUTPUT_COMPARE_4_VECTOR                 18
#define _OUTPUT_COMPARE_5_VECTOR                 22
#define _SPI_1_VECTOR                            23
#define _UART_1_VECTOR                           24
#define _I2C_1_VECTOR                            25
#define _SPI_2_VECTOR                            31
#define _UART_2_VECTOR                           32
#define _I2C_2_VECTOR                            33
#define _COMPARATOR_1_VECTOR                     29
#define _COMPARATOR_2_VECTOR                     30
#define _ADC_VECTOR                              27
#define _PMP_VECTOR                              28
#define _FAIL_SAFE_MONITOR_VECTOR                34
#define _RTCC_VECTOR                             35
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
#define _SPI1_TX_IRQ                             24
#define _SPI1_RX_IRQ                             25
#define _UART1_ERR_IRQ                           26
#define _UART1_RX_IRQ                            27
#define _UART1_TX_IRQ                            28
#define _I2C1_BUS_IRQ                            29
#define _I2C1_SLAVE_IRQ                          30
#define _I2C1_MASTER_IRQ                         31
#define _CHANGE_NOTICE_IRQ                       32
#define _ADC_IRQ                                 33
#define _PMP_IRQ                                 34
#define _COMPARATOR_1_IRQ                        35
#define _COMPARATOR_2_IRQ                        36
#define _SPI2_ERR_IRQ                            37
#define _SPI2_TX_IRQ                             38
#define _SPI2_RX_IRQ                             39
#define _UART2_ERR_IRQ                           40
#define _UART2_RX_IRQ                            41
#define _UART2_TX_IRQ                            42
#define _I2C2_BUS_IRQ                            43
#define _I2C2_SLAVE_IRQ                          44
#define _I2C2_MASTER_IRQ                         45
#define _FAIL_SAFE_MONITOR_IRQ                   46
#define _RTCC_IRQ                                47
#define _DMA0_IRQ                                48
#define _DMA1_IRQ                                49
#define _DMA2_IRQ                                50
#define _DMA3_IRQ                                51
#define _FLASH_CONTROL_IRQ                       56

/* Device Peripherals */
#define _ADC10
#define _BMX
#define _CFG
#define _CMP
#define _CMP1
#define _CMP2
#define _CVR
#define _I2C1
#define _I2C2
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
#define _SPI2
#define _TMR1
#define _TMR2
#define _TMR23
#define _TMR3
#define _TMR4
#define _TMR45
#define _TMR5
#define _UART1
#define _UART2
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
#define _I2C1_BASE_ADDRESS                       0xBF805000
#define _I2C2_BASE_ADDRESS                       0xBF805200
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
#define _SPI1_BASE_ADDRESS                       0xBF805800
#define _SPI2_BASE_ADDRESS                       0xBF805A00
#define _TMR1_BASE_ADDRESS                       0xBF800600
#define _TMR23_BASE_ADDRESS                      0xBF800800
#define _TMR2_BASE_ADDRESS                       0xBF800800
#define _TMR3_BASE_ADDRESS                       0xBF800A00
#define _TMR45_BASE_ADDRESS                      0xBF800C00
#define _TMR4_BASE_ADDRESS                       0xBF800C00
#define _TMR5_BASE_ADDRESS                       0xBF800E00
#define _UART1_BASE_ADDRESS                      0xBF806000
#define _UART2_BASE_ADDRESS                      0xBF806200
#define _WDT_BASE_ADDRESS                        0xBF800000
#define __APPI_BASE_ADDRESS                      0xBF880190
#define __APPO_BASE_ADDRESS                      0xBF880180
#define __DDPSTAT_BASE_ADDRESS                   0xBF880140
#define __STRO_BASE_ADDRESS                      0xBF880170

/* Default Memory-region macros */
#define __EXCEPTION_MEM_BASE                     0x9FC01000
#define __EXCEPTION_MEM_LENGTH                   0x1000
#define __KSEG0_PROGRAM_MEM_BASE                 0x9D000000
#define __KSEG0_PROGRAM_MEM_LENGTH               0x20000
#define __DEBUG_EXEC_MEM_BASE                    0xBFC02000
#define __DEBUG_EXEC_MEM_LENGTH                  0xFF0
#define __KSEG0_BOOT_MEM_BASE                    0x9FC00490
#define __KSEG0_BOOT_MEM_LENGTH                  0x970
#define __KSEG1_BOOT_MEM_BASE                    0xBFC00000
#define __KSEG1_BOOT_MEM_LENGTH                  0x490
#define __KSEG1_DATA_MEM_BASE                    0xA0000000
#define __KSEG1_DATA_MEM_LENGTH                  0x4000
#define __CONFIGSFRS_BASE                        0xBFC02FF0
#define __CONFIGSFRS_LENGTH                      0x10
#define __SFRS_BASE                              0xBF800000
#define __SFRS_LENGTH                            0x100000

/*  The following device macros are predefined by the MPLAB XC32
 *  compiler when compiling with the -mprocessor=<device> option.
 *  We also define them here to help the MPLAB X editor evaluate
 *  them correctly.
 */
#ifndef __32MX320F128L
#  define __32MX320F128L 1
#endif
#ifndef __32MX320F128L__
#  define __32MX320F128L__ 1
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
#  define __PIC32_FLASH_SIZE 128
#endif
#ifndef __PIC32_FEATURE_SET
#  define __PIC32_FEATURE_SET 320
#endif
#ifndef __PIC32_FEATURE_SET__
#  define __PIC32_FEATURE_SET__ 320
#endif
#ifndef __PIC32_MEMORY_SIZE
#  define __PIC32_MEMORY_SIZE 128
#endif
#ifndef __PIC32_MEMORY_SIZE__
#  define __PIC32_MEMORY_SIZE__ 128
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