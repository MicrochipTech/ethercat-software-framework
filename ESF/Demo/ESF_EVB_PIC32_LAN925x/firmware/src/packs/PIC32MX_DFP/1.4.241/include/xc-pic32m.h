/*-------------------------------------------------------------------------
 * XC processor header
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
#ifndef __XC_PIC32M_H
#define __XC_PIC32M_H

#ifndef __XC32_PART_SUPPORT_VERSION
#define __XC32_PART_SUPPORT_VERSION 2050
#endif
#ifndef __XC32_PART_SUPPORT_UPDATE
#define __XC32_PART_SUPPORT_UPDATE A
#endif

#if defined(__32MX110F016B__)
#  include <proc/p32mx110f016b.h>
#elif defined(__32MX110F016C__)
#  include <proc/p32mx110f016c.h>
#elif defined(__32MX110F016D__)
#  include <proc/p32mx110f016d.h>
#elif defined(__32MX120F032B__)
#  include <proc/p32mx120f032b.h>
#elif defined(__32MX120F032C__)
#  include <proc/p32mx120f032c.h>
#elif defined(__32MX120F032D__)
#  include <proc/p32mx120f032d.h>
#elif defined(__32MX120F064H__)
#  include <proc/p32mx120f064h.h>
#elif defined(__32MX130F064B__)
#  include <proc/p32mx130f064b.h>
#elif defined(__32MX130F064C__)
#  include <proc/p32mx130f064c.h>
#elif defined(__32MX130F064D__)
#  include <proc/p32mx130f064d.h>
#elif defined(__32MX130F128H__)
#  include <proc/p32mx130f128h.h>
#elif defined(__32MX130F128L__)
#  include <proc/p32mx130f128l.h>
#elif defined(__32MX130F256B__)
#  include <proc/p32mx130f256b.h>
#elif defined(__32MX130F256D__)
#  include <proc/p32mx130f256d.h>
#elif defined(__32MX150F128B__)
#  include <proc/p32mx150f128b.h>
#elif defined(__32MX150F128C__)
#  include <proc/p32mx150f128c.h>
#elif defined(__32MX150F128D__)
#  include <proc/p32mx150f128d.h>
#elif defined(__32MX150F256H__)
#  include <proc/p32mx150f256h.h>
#elif defined(__32MX150F256L__)
#  include <proc/p32mx150f256l.h>
#elif defined(__32MX154F128B__)
#  include <proc/p32mx154f128b.h>
#elif defined(__32MX154F128D__)
#  include <proc/p32mx154f128d.h>
#elif defined(__32MX170F256B__)
#  include <proc/p32mx170f256b.h>
#elif defined(__32MX170F256D__)
#  include <proc/p32mx170f256d.h>
#elif defined(__32MX170F512H__)
#  include <proc/p32mx170f512h.h>
#elif defined(__32MX170F512L__)
#  include <proc/p32mx170f512l.h>
#elif defined(__32MX174F256B__)
#  include <proc/p32mx174f256b.h>
#elif defined(__32MX174F256D__)
#  include <proc/p32mx174f256d.h>
#elif defined(__32MX210F016B__)
#  include <proc/p32mx210f016b.h>
#elif defined(__32MX210F016C__)
#  include <proc/p32mx210f016c.h>
#elif defined(__32MX210F016D__)
#  include <proc/p32mx210f016d.h>
#elif defined(__32MX220F032B__)
#  include <proc/p32mx220f032b.h>
#elif defined(__32MX220F032C__)
#  include <proc/p32mx220f032c.h>
#elif defined(__32MX220F032D__)
#  include <proc/p32mx220f032d.h>
#elif defined(__32MX230F064B__)
#  include <proc/p32mx230f064b.h>
#elif defined(__32MX230F064C__)
#  include <proc/p32mx230f064c.h>
#elif defined(__32MX230F064D__)
#  include <proc/p32mx230f064d.h>
#elif defined(__32MX230F128H__)
#  include <proc/p32mx230f128h.h>
#elif defined(__32MX230F128L__)
#  include <proc/p32mx230f128l.h>
#elif defined(__32MX230F256B__)
#  include <proc/p32mx230f256b.h>
#elif defined(__32MX230F256D__)
#  include <proc/p32mx230f256d.h>
#elif defined(__32MX250F128B__)
#  include <proc/p32mx250f128b.h>
#elif defined(__32MX250F128C__)
#  include <proc/p32mx250f128c.h>
#elif defined(__32MX250F128D__)
#  include <proc/p32mx250f128d.h>
#elif defined(__32MX250F256H__)
#  include <proc/p32mx250f256h.h>
#elif defined(__32MX250F256L__)
#  include <proc/p32mx250f256l.h>
#elif defined(__32MX254F128B__)
#  include <proc/p32mx254f128b.h>
#elif defined(__32MX254F128D__)
#  include <proc/p32mx254f128d.h>
#elif defined(__32MX270F256B__)
#  include <proc/p32mx270f256b.h>
#elif defined(__32MX270F256D__)
#  include <proc/p32mx270f256d.h>
#elif defined(__32MX270F512H__)
#  include <proc/p32mx270f512h.h>
#elif defined(__32MX270F512L__)
#  include <proc/p32mx270f512l.h>
#elif defined(__32MX274F256B__)
#  include <proc/p32mx274f256b.h>
#elif defined(__32MX274F256D__)
#  include <proc/p32mx274f256d.h>
#elif defined(__32MX320F032H__)
#  include <proc/p32mx320f032h.h>
#elif defined(__32MX320F064H__)
#  include <proc/p32mx320f064h.h>
#elif defined(__32MX320F128H__)
#  include <proc/p32mx320f128h.h>
#elif defined(__32MX320F128L__)
#  include <proc/p32mx320f128l.h>
#elif defined(__32MX330F064H__)
#  include <proc/p32mx330f064h.h>
#elif defined(__32MX330F064L__)
#  include <proc/p32mx330f064l.h>
#elif defined(__32MX340F128H__)
#  include <proc/p32mx340f128h.h>
#elif defined(__32MX340F128L__)
#  include <proc/p32mx340f128l.h>
#elif defined(__32MX340F256H__)
#  include <proc/p32mx340f256h.h>
#elif defined(__32MX340F512H__)
#  include <proc/p32mx340f512h.h>
#elif defined(__32MX350F128H__)
#  include <proc/p32mx350f128h.h>
#elif defined(__32MX350F128L__)
#  include <proc/p32mx350f128l.h>
#elif defined(__32MX350F256H__)
#  include <proc/p32mx350f256h.h>
#elif defined(__32MX350F256L__)
#  include <proc/p32mx350f256l.h>
#elif defined(__32MX360F256L__)
#  include <proc/p32mx360f256l.h>
#elif defined(__32MX360F512L__)
#  include <proc/p32mx360f512l.h>
#elif defined(__32MX370F512H__)
#  include <proc/p32mx370f512h.h>
#elif defined(__32MX370F512L__)
#  include <proc/p32mx370f512l.h>
#elif defined(__32MX420F032H__)
#  include <proc/p32mx420f032h.h>
#elif defined(__32MX430F064H__)
#  include <proc/p32mx430f064h.h>
#elif defined(__32MX430F064L__)
#  include <proc/p32mx430f064l.h>
#elif defined(__32MX440F128H__)
#  include <proc/p32mx440f128h.h>
#elif defined(__32MX440F128L__)
#  include <proc/p32mx440f128l.h>
#elif defined(__32MX440F256H__)
#  include <proc/p32mx440f256h.h>
#elif defined(__32MX440F512H__)
#  include <proc/p32mx440f512h.h>
#elif defined(__32MX450F128H__)
#  include <proc/p32mx450f128h.h>
#elif defined(__32MX450F128L__)
#  include <proc/p32mx450f128l.h>
#elif defined(__32MX450F256H__)
#  include <proc/p32mx450f256h.h>
#elif defined(__32MX450F256L__)
#  include <proc/p32mx450f256l.h>
#elif defined(__32MX460F256L__)
#  include <proc/p32mx460f256l.h>
#elif defined(__32MX460F512L__)
#  include <proc/p32mx460f512l.h>
#elif defined(__32MX470F512H__)
#  include <proc/p32mx470f512h.h>
#elif defined(__32MX470F512L__)
#  include <proc/p32mx470f512l.h>
#elif defined(__32MX530F128H__)
#  include <proc/p32mx530f128h.h>
#elif defined(__32MX530F128L__)
#  include <proc/p32mx530f128l.h>
#elif defined(__32MX534F064H__)
#  include <proc/p32mx534f064h.h>
#elif defined(__32MX534F064L__)
#  include <proc/p32mx534f064l.h>
#elif defined(__32MX550F256H__)
#  include <proc/p32mx550f256h.h>
#elif defined(__32MX550F256L__)
#  include <proc/p32mx550f256l.h>
#elif defined(__32MX564F064H__)
#  include <proc/p32mx564f064h.h>
#elif defined(__32MX564F064L__)
#  include <proc/p32mx564f064l.h>
#elif defined(__32MX564F128H__)
#  include <proc/p32mx564f128h.h>
#elif defined(__32MX564F128L__)
#  include <proc/p32mx564f128l.h>
#elif defined(__32MX570F512H__)
#  include <proc/p32mx570f512h.h>
#elif defined(__32MX570F512L__)
#  include <proc/p32mx570f512l.h>
#elif defined(__32MX575F256H__)
#  include <proc/p32mx575f256h.h>
#elif defined(__32MX575F256L__)
#  include <proc/p32mx575f256l.h>
#elif defined(__32MX575F512H__)
#  include <proc/p32mx575f512h.h>
#elif defined(__32MX575F512L__)
#  include <proc/p32mx575f512l.h>
#elif defined(__32MX664F064H__)
#  include <proc/p32mx664f064h.h>
#elif defined(__32MX664F064L__)
#  include <proc/p32mx664f064l.h>
#elif defined(__32MX664F128H__)
#  include <proc/p32mx664f128h.h>
#elif defined(__32MX664F128L__)
#  include <proc/p32mx664f128l.h>
#elif defined(__32MX675F256H__)
#  include <proc/p32mx675f256h.h>
#elif defined(__32MX675F256L__)
#  include <proc/p32mx675f256l.h>
#elif defined(__32MX675F512H__)
#  include <proc/p32mx675f512h.h>
#elif defined(__32MX675F512L__)
#  include <proc/p32mx675f512l.h>
#elif defined(__32MX695F512H__)
#  include <proc/p32mx695f512h.h>
#elif defined(__32MX695F512L__)
#  include <proc/p32mx695f512l.h>
#elif defined(__32MX764F128H__)
#  include <proc/p32mx764f128h.h>
#elif defined(__32MX764F128L__)
#  include <proc/p32mx764f128l.h>
#elif defined(__32MX775F256H__)
#  include <proc/p32mx775f256h.h>
#elif defined(__32MX775F256L__)
#  include <proc/p32mx775f256l.h>
#elif defined(__32MX775F512H__)
#  include <proc/p32mx775f512h.h>
#elif defined(__32MX775F512L__)
#  include <proc/p32mx775f512l.h>
#elif defined(__32MX795F512H__)
#  include <proc/p32mx795f512h.h>
#elif defined(__32MX795F512L__)
#  include <proc/p32mx795f512l.h>
#elif defined(__32M4KCORE__)
#  include <proc/p32m4kcore.h>
#elif defined(__32MXGENERIC__)
#  include <proc/p32mxgeneric.h>
#else
#  error Unknown processor!
#endif

#ifdef __LANGUAGE_ASSEMBLY__
/*
 * Conventional register names.
 */

/* Zero register:  Always returns 0 */
#define zero               $0

/* Assembler temporary register:  Reserved for use by the assembler */
#define at_reg             $1
#define AT_reg             $1

/* Return value registers:  Value returned by subroutine */
#define v0                 $2
#define v1                 $3

/* Argument registers:  First few parameters for a subroutine */
#define a0                 $4
#define a1                 $5
#define a2                 $6
#define a3                 $7

/* Subroutine register temporaries:  Registers that subroutines can use
 * without saving
 */
#define t0                 $8
#define t1                 $9
#define t2                 $10
#define t3                 $11
#define t4                 $12
#define t5                 $13
#define t6                 $14
#define t7                 $15
#define t8                 $24
#define t9                 $25

/* Subroutine register variables:  A subroutine that writes one of these
 * must save the old value and restore it before it exists, so the calling
 * routine sees the values preserved
 */
#define s0                 $16
#define s1                 $17
#define s2                 $18
#define s3                 $19
#define s4                 $20
#define s5                 $21
#define s6                 $22
#define s7                 $23

/* Ninth subroutine register variable:  Can either be used as above or
 * as the frame pointer for functions that require one
 */
#define s8                 $30
#define fp                 $30

/* Interrupt/Trap handler registers:  Reserved for use by interrupt/trap
 * handler.  May change under your feet!
 */
#define k0                 $26
#define k1                 $27

/* Global pointer register:  Gives easy access to (some) `static' or `extern'
 * variables
 */
#define gp                 $28

/* Stack pointer register:  Stack pointer */
#define sp                 $29

/* Return address register:  Contains the return address for the subroutine */
#define ra                 $31
#endif

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS__)

#if defined (__XC32_VERSION) && (__XC32_VERSION >= 2490)
#include <pic32m_builtins.h>
#endif

/*
 * __XC_UART selects the default UART port that read() and write() will use.
 * read() is called by fscanf and family, while write() is called by printf
 * and family.
 */
extern int __XC_UART;

/* 
 * When __DEBUG is defined, __debug_break() resolves to an MPLAB XC32 builtin 
 * function, which creates a MIPS32 software debug-breakpoint (sddbp 0) 
 * instruction.
 */
/* #if defined(__DEBUG)
 *  #define __debug_break() __builtin_software_breakpoint()
 * #else
 *  #define __debug_break() ((void)0)
 * #endif
 */

typedef unsigned long _reg_t;

/*
 * Inline assembly macros
 */

#ifndef _nop
#ifdef __mips16
#define _nop()  __asm__ __volatile__ (" move $0,$16" : :) 
#else
#define _nop()  __asm__ __volatile__ ("%(ssnop%)" : :) 
#endif
#endif

#ifndef Nop
/* Consider using _nop rather than Nop */
#define Nop()  _nop()
#endif

#ifndef _ehb
#define _ehb()  __asm__ __volatile__ ("%(ehb%)" : :) 
#endif

#ifdef __mips16
extern void __attribute__((__nomips16__)) _sync(void);
#else
#define _sync() __asm__ __volatile__ ("sync" : : : "memory")
#endif

#define _wait() __asm__ __volatile__ ("wait")

#if defined(__GCC_HAVE_BUILTIN_MIPS_CACHE) && defined(__PIC32_HAS_L1CACHE)
#  define _cache(op,addr)      __builtin_mips_cache(op,addr)
#else /* _cache() */
#  define _cache(op,addr)      _Pragma("message (\"Warning - Using _cache(op,addr) on an uncached target device\")")
#endif /* _cache */

#if defined(__PIC32_HAS_L1CACHE)
#  define _synci(x) __extension__({ \
       __asm__ ("synci %a0" :: "d" (x)); \
   })
#else /* _synci */
#  define _synci(addr)         _Pragma("message (\"Warning - Using _synci(addr) on an uncached target device\")")
#endif /* _synci */

#if defined(__PIC32_HAS_L1CACHE)
#  define _prefetch(hint,x) __extension__({ \
      __asm__ ("pref %0, %a1" :: "JYA" (hint), "d" (x) : "memory"); \
   })
#else /* _prefetch */
#  define _prefetch(hint,addr) _Pragma("message (\"Warning - Using _prefetch(hint,addr) on an uncached target device\")")
#endif /* _prefetch */

#define _mfc0(rn, sel)            __builtin_mfc0(rn,sel)
#define _mtc0(rn, sel, v)         __builtin_mtc0(rn,sel,v)
/* exchange (swap) VAL and CP0 register REG,SEL */
#define _mxc0(rn, sel, v)         __builtin_mxc0(rn,sel,v)
/* bit clear non-zero bits from CLR in CP0 register REG,SEL */
#define _bcc0(rn, sel, clr)       __builtin_bcc0(rn,sel,clr)
/* bit set non-zero bits from SET in CP0 register REG,SEL */
#define _bsc0(rn, sel, set)       __builtin_bsc0(rn,sel,set)
/* bit clear non-zero bits from CLR and set non-zero bits from SET in REG,SEL */
#define _bcsc0(rn, sel, clr, set) __builtin_bcsc0(rn,sel,clr,set)

/* count leading zeroes */
#define _clz(x) __builtin_clz (x)

/* count trailing zeroes */
#define _ctz(x) __builtin_ctz (x)

#if ! __mips16
/* count leading ones */
#define _clo(x) __extension__({ \
    unsigned int __x = (x); \
    unsigned int __v; \
    __asm__ ("clo %0,%1" : "=d" (__v) : "d" (__x)); \
    __v; \
})

/* Simulate 64-bit count leading zeroes */
#define _dclz(x) __extension__({ \
    unsigned long long __x = (x); \
    unsigned int __hx = (__x >> 32); \
    __hx ? _clz(__hx) : 32 + _clz(__x); \
})

/* Simulate 64-bit count leading ones */
#define _dclo(x) __extension__({ \
    unsigned long long __llx = (x); \
    unsigned int __hx = (__llx >> 32); \
    (~__hx) ? _clo(__hx) : 32 + _clo(__llx); \
})

/* Simulate 64-bit count trailing zeroes */
#define _dctz(x) __extension__({ \
    unsigned long long __dx = (x); \
    unsigned int __ldx = __dx; \
    unsigned int __hdx = __dx >> 32; \
    __ldx ? _ctz(__ldx) : (63 ^ _clz(__hdx & -__hdx)); \
   })

/* MIPS32r2 wsbh opcode */
#define _wsbh(x) __extension__({ \
    unsigned int __x = (x), __v; \
    __asm__ ("wsbh %0,%1" \
             : "=d" (__v) \
             : "d" (__x)); \
    __v; \
})

/* MIPS32r2 byte-swap word */
#define _bswapw(x) __extension__({ \
    unsigned int __x = (x), __v; \
    __asm__ ("wsbh %0,%1; rotr %0,16" \
             : "=d" (__v) \
             : "d" (__x)); \
    __v; \
})

/* MIPS32r2 insert bits */
#define _ins(tgt,val,pos,sz) __extension__({ \
    unsigned int __t = (tgt), __v = (val); \
    __asm__ ("ins %0,%z1,%2,%3" \
             : "+d" (__t) \
             : "dJ" (__v), "I" (pos), "I" (sz)); \
    __t; \
})

/* MIPS32r2 extract bits */
#define _ext(x,pos,sz) __extension__({ \
    unsigned int __x = (x), __v; \
    __asm__ ("ext %0,%z1,%2,%3" \
             : "=d" (__v) \
             : "dJ" (__x), "I" (pos), "I" (sz)); \
    __v; \
})

/* MIPS32r2 jr.hb */
#define _jr_hb() __asm__ __volatile__( \
       "bltzal  $0,0f\n"               \
"0:     addiu   $31,1f-0b\n"           \
"       jr.hb   $31\n"                 \
"1:"                                   \
        : : : "$31")

/* MIPS32r2 write previous gpr */
#define _wrpgpr(regno, val) \
do { \
    __asm __volatile__ ("wrpgpr $%0,%z1" \
                        : /* no outputs */ \
                        : "JK" (regno), "dJ" (val)); \
} while (0)

/* MIPS32r2 read previous gpr */
#define _rdpgpr(regno) \
__extension__({ \
    _reg_t __val; \
    __asm __volatile__ ("rdpgpr %0,$%1" \
                        : "=d" (__val) \
                        : "JK" (regno)); \
    __val; \
})

/* MIPS32r2 set SRSCtl.PSS (previous shadow set), returning old value */
extern unsigned int _xchsrspss (unsigned int);
#endif

#define _get_byte(addr, errp)   (*(volatile unsigned char *)(addr))
#define _get_half(addr, errp)   (*(volatile unsigned short *)(addr))
#define _get_word(addr, errp)   (*(volatile unsigned int *)(addr))
#define _get_dword(addr, errp)  (*(volatile unsigned long long *)(addr))

#define _put_byte(addr, v)      (*(volatile unsigned char *)(addr)=(v), 0)
#define _put_half(addr, v)      (*(volatile unsigned short *)(addr)=(v), 0)
#define _put_word(addr, v)      (*(volatile unsigned int *)(addr)=(v), 0)
#define _put_dword(addr, v)     (*(volatile unsigned long long *)(addr)=(v), 0)
#endif

#include <cp0defs.h>

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS__)
#  include <sys/appio.h>
#  include <sys/l1cache.h>
#endif

#endif
