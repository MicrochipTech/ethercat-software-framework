/*********************************************************************
 *
 *          C Runtime Startup for Position Independent Code
 *
 *********************************************************************
 * Filename:        crt0_pic.S
 *
 * Processor:       PIC32
 *
 * Compiler:        MPLAB XC32
 *                  MPLAB X IDE
 * Company:         Microchip Technology Inc.
 *
 * Software License Agreement
 *
 * Copyright (c) 2014, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 *
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1.      Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2.      Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * Publication is not required when this file is used in an embedded 
 * application.
 *
 * 3.      Microchip's name may not be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************/

#include "xc.h"
#include <cp0defs.h>

#ifdef __LIBBUILD__
   # Replace the standard debugging information with a simple filename. This
   # prevents the library build directory from showing up in MPLAB IDE. It
   # also effectively disables source-line debugging.
   .file 1 "libpic32/startup/crt0_pic.S"
   .loc 1 0
#endif

#if (__XC32_VERSION > 1000) && !defined(CPP_INIT)
#define CPP_INIT
#endif

#if !defined(PIC32_SRS_SET_COUNT)
# warning PIC32_SRS_SET_COUNT not defined on build line
# define PIC32_SRS_SET_COUNT 2
#endif

#if defined(__PIC32MX) || defined(__PIC32MM) || defined(__PIC32MZ)
#define INIT_DATA 1
#endif

/* This file contains 32-bit assembly code */
       .set nomips16

##################################################################
# Entry point of the entire application
##################################################################
        .section .reset,code,keep
        .align 2
        .set noreorder
        .ent _reset

############################
# Begin ISA switching code #
############################

#if defined (__mips_micromips)
        .set micromips
#endif

#if (defined(__PIC32_HAS_MICROMIPS)) && (defined(__PIC32_HAS_MIPS32R2))
_reset:
        .word 0x10000004     /* MIPS32:    branch forward 0x10 bytes from here  */
                             /* MicroMIPS: ADDI32 $0, $0, 0x0007 (nop)          */
                             /* DO NOT change the relative branch               */

        .word 0x00000000     /* NOP */
__reset_micromips_isa:
        .set    micromips
        jal     _startup
        nop

        .align 2
        /* Device not in proper ISA mode */
        .set nomicromips
__reset_switch_isa:
        jal _startup
        nop

#else

_reset:
        jal _startup
        nop

#endif  /* __PIC32_HAS_MICROMIPS */

        .align 2
        .end _reset
        .globl _reset
        .size _reset, .-_reset

        .section .reset.startup,code,keep
        .align 2
        .set noreorder

#if defined (__mips_micromips)
        .set micromips
#else
        .set nomicromips
#endif

############################
# End ISA switching code   #
############################


        ##################################################################
        # Startup code
        ##################################################################
        .align 2
        .set noreorder
        .ent _startup
_startup:
        ##################################################################
        # If entered because of an NMI, jump to the NMI handler.
        ##################################################################
        mfc0    k0,_CP0_STATUS
        ext     k0,k0,19,1              # Extract NMI bit
        beqz    k0,_no_nmi
        nop
        lw	t9, %call16(_nmi_handler)(gp)
        jr 	t9
        nop
_no_nmi:


#if (PIC32_SRS_SET_COUNT == 2)
        ##################################################################
        # Initialize Global Pointer in Shadow Set
        #   The SRSCtl's PSS field must be set to the shadow set in which
        #   to initialize the global pointer.  Since we have only a
        #   single shadow set (besides the normal), we will initialize
        #   SRSCtl<PSS> to SRSCtl<HSS>.  We then write the global pointer
        #   to the previous shadow set to ensure that on interrupt, the
        #   global pointer has been initialized.
        ##################################################################
        mfc0    t1,_CP0_SRSCTL          # Read SRSCtl register
        add     t3,t1,zero              # Save off current SRSCtl
        ext     t2,t1,26,4              # to obtain HSS field
        ins     t1,t2,6,4               # Put HSS field
        mtc0    t1,_CP0_SRSCTL          # into SRSCtl<PSS>
        ehb                             # Clear hazard before using new SRSCTL
        wrpgpr  gp,gp                   # Set global pointer in PSS
        mtc0    t3,_CP0_SRSCTL          # Restore SRSCtl
        ehb

#elif (PIC32_SRS_SET_COUNT > 2)
        ##################################################################
        # Initialize Global Pointer in Shadow Set(s)
        #   The SRSCtl PSS field must be set to the shadow set in which
        #   to initialize the global pointer.  We will initialize
        #   SRSCtl<PSS> to the number of reg sets and work down to set zero.
        #   We write the global pointer to the previous shadow set to
        #   ensure that on interrupt, the global pointer has been
        #   initialized.
        ##################################################################
        mfc0    t1,_CP0_SRSCTL          # Read SRSCtl register
        add     t3,t1,zero              # Save off current SRSCtl

        li      t2,(PIC32_SRS_SET_COUNT-1)

1:      ins     t1,t2,6,4               # Put next shadow set field
        mtc0    t1,_CP0_SRSCTL          # into SRSCtl<PSS>
        ehb                             # Clear hazard before using new SRSCTL
        wrpgpr  gp,gp                   # Set global pointer in PSS

        addiu   t2,t2,-1                # Next lower shadow set
                                        # Loop for all sets
        bne     t2,$0,1b                # Down to zero (normal GPR set)
        nop

        mtc0    t3,_CP0_SRSCTL          # Restore SRSCtl
        ehb

#endif /* (PIC32_SRS_SET_COUNT > 2) */

        ##################################################################
        # Call the "on reset" procedure
        ##################################################################
        lw	t9, %call16(_on_reset)(gp)
        jalr 	t9
        nop

#if 0 /* Check for PIC */
#if defined(INIT_MMU_MZ_FIXED)
        ##################################################################
        # Initialize TLB for fixed mapping to EBI and SQI
        ##################################################################
        .extern __pic32_tlb_init_ebi_sqi
        lw	t9,%call16(__pic32_tlb_init_ebi_sqi)(gp)
        jalr    t9
        nop
#endif

#if defined(INIT_L1_CACHE)
        ##################################################################
        # Initialize L1 cache register
        ##################################################################
        .extern __pic32_init_cache
        lw	t9,%call16(__pic32_init_cache)(gp)
        jalr    t9
        nop
#endif

#if defined(INIT_DATA)
        ##################################################################
        # Clear uninitialized data sections
        ##################################################################
        lw	v0,%got(_bss_begin)(gp)
        lw	t0,0(v0)
        lw	v0,%got(_bss_end)(gp)
        lw	t0,0(v0)
        b       _bss_check
        nop

_bss_init:
        sw      zero,0x0(t0)
        sw      zero,0x4(t0)
        sw      zero,0x8(t0)
        sw      zero,0xc(t0)
        addu    t0,16
_bss_check:
        bltu    t0,t1,_bss_init
        nop
#endif /* INIT_DATA */

#if defined(INIT_DATA)
        ##################################################################
        # Initialize data using the linker-generated .dinit table
        ##################################################################
        .equiv FMT_CLEAR,0
        .equiv FMT_COPY,1
_dinit_init:
        lw	v0,%got(_dinit_addr)(gp)
        lw	t0,0(v0)

#define SRC t0
#define DST t1
#define LEN t2
#define FMT t3

0:      lw      DST,0(SRC)
        beqz    DST,9f
        addu    SRC,4
        lw      LEN,0(SRC)
        addu    SRC,4
        lw      FMT,0(SRC)
        beq     FMT,$0,_dinit_clear
        addu    SRC,4

_dinit_copy:
        lbu     t4,0(SRC)
        subu    LEN,1
        addu    SRC,1
        sb      t4,0(DST)
        bne     LEN,$0,_dinit_copy
        addu    DST,1

        b       _dinit_end
        nop

_dinit_clear:
        sb      $0,(DST)
        subu    LEN,1
        bne     LEN,$0,_dinit_clear
        addu    DST,1

_dinit_end:
        addu    SRC,3
        addiu   LEN,$0,-4
        and     SRC,LEN,SRC
        lw      DST,0(SRC)
        bne     DST,$0,0b
        nop
9:
#endif /* INIT_DATA */
#endif /* Check for PIC */

        ##################################################################
        # Initialize CP0 registers
        ##################################################################
        # Initialize Count register
        ##################################################################
        mtc0    zero,_CP0_COUNT

        ##################################################################
        # Initialize Compare register
        ##################################################################
        li      t2,-1
        mtc0    t2,_CP0_COMPARE

        ##################################################################
        # Initialize EBase register
        ##################################################################
        lw	t1,%got(_ebase_address)(gp)
        mtc0    t1,_CP0_EBASE

        ##################################################################
        # Initialize IntCtl/INTCON.VS register with _vector_spacing
        ##################################################################
        lw      t1,%got(_vector_spacing)(gp) 
#if defined(INIT_INTCONVS)
        la      t0, INTCON
        lw      t2, 0(t0)
        li      t2, 0
        ins     t2, t1, 16, 7
#if defined(__PIC32MM) && defined(_INTCON_MVEC_MASK)
        ori     t2, t2, _INTCON_MVEC_MASK
#endif
        sw      t2, 0(t0)
#endif
        li      t2,0                    # Clear t2 and
        ins     t2,t1,5,5               # shift value to VS field
        mtc0    t2,_CP0_INTCTL

        ##################################################################
        # Initialize CAUSE registers
        # - Enable counting of Count register <DC = 0>
        # - Use special exception vector <IV = 1>
        # - Clear pending software interrupts <IP1:IP0 = 0>
        ##################################################################
        li      t1,0x00800000
        mtc0    t1,_CP0_CAUSE

        ##################################################################
        # Initialize STATUS register
        # - Access to Coprocessor 0 not allowed in user mode <CU0 = 0>
        # - User mode uses configured endianness <RE = 0>
        # - Preserve Bootstrap Exception vectors <BEV>
        # - Preserve soft reset <SR> and non-maskable interrupt <NMI>
        # - CorExtend enabled based on whether CorExtend User Defined
        #   Instructions have been implemented <CEE = Config<UDI>>
        # - Disable any pending interrupts <IM7..IM2 = 0, IM1..IM0 = 0>
        # - Disable hardware interrupts <IPL7:IPL2 = 0>
        # - Base mode is Kernel mode <UM = 0>
        # - Error level is normal <ERL = 0>
        # - Exception level is normal <EXL = 0>
        # - Interrupts are disabled <IE = 0>
        # - DSPr2 ASE is enabled for devices that support it <MX = 1>
        # - FPU64 is enabled for devices that support it <CU1=1> & <FR=1>
        ##################################################################
        mfc0    t0,_CP0_CONFIG
        ext     t1,t0,22,1              # Extract UDI from Config register
        sll     t1,t1,17                # Move UDI to Status.CEE location
        mfc0    t0,_CP0_STATUS
        and     t0,t0,0x00580000        # Preserve SR, NMI, and BEV
#if defined(INIT_DSPR2)
        li      t2, 0x01000000          # Set the Status.MX bit to enable DSP
        or      t0,t2,t0
#endif
#if defined(INIT_FPU64)
        li      t2, 0x24000000          # Set the Status.CU1 and Status.FR bits to
        or      t0,t2,t0                # enable the FPU in FR64 mode
#endif

        or      t0,t1,t0                # Include Status.CEE (from UDI)
        mtc0    t0,_CP0_STATUS

#if defined(INIT_FPU64)
                                        # FPU Control and Status
        li      t2,0x1000000            # FCSR: RM=0, FS=1, FO=0, FN=0
                                        # Enables: 0b00000 E=1, V=0, Z=0, O=0, U=0, I=0
        ctc1    t2, $31                 # High perf on denormal operands & tiny results
#endif
        ehb

        ##################################################################
        # Call the "on bootstrap" procedure
        ##################################################################
        lw	t9,%call16(_on_bootstrap)(gp)
        jalr    t9
        nop

        ##################################################################
        # Initialize Status<BEV> for normal exception vectors
        ##################################################################
        mfc0    t0,_CP0_STATUS
        and     t0,t0,0xffbfffff        # Clear BEV
        mtc0    t0,_CP0_STATUS

        ##################################################################
        # Call main. We do this via a thunk in the text section so that
        # a normal jump and link can be used, enabling the startup code
        # to work properly whether main is written in MIPS16 or MIPS32
        # code. I.e., the linker will correctly adjust the JAL to JALX if
        # necessary
        ##################################################################
        and     a0,a0,0
        and     a1,a1,0
        lw	t9,%call16(_main_entry)(gp)
        jr      t9
        nop

        .globl _startup
        .end _startup

        ##################################################################
        # Boot Exception Vector Handler
        # Jumps to _bootstrap_exception_handler
        ##################################################################
        .section .bev_handler,code,keep
        .align 2
        .set noreorder
        .ent _bev_exception
_bev_exception:
	lw	t9,%call16(_bootstrap_exception_handler)(gp)
        jr        t9
        nop
        .globl _bev_exception
        .end _bev_exception

        ##################################################################
        # General Exception Vector Handler
        # Jumps to _general_exception_context
        ##################################################################
        .section .gen_handler,code
        .align 2
        .set noreorder
        .ent _gen_exception
_gen_exception:
0:
        lw	t9,%call16(_general_exception_context)(gp)
        jr      t9
        nop

        .end _gen_exception

#if 0 /* Check for PIC */
#if defined(INIT_MMU_MZ_FIXED)
        ##################################################################
        # Simple TLB-Refill Exception Vector
        # Jumps to _simple_tlb_refill_exception_context
        ##################################################################
        .section .simple_tlb_refill_vector,code,keep
        .align 2
        .set noreorder
        .ent simple_tlb_refill_vector
simple_tlb_refill_vector:
        lw	t9,%call16(_simple_tlb_refill_exception_context)(gp)
        jr      t9
        nop

        .end simple_tlb_refill_vector
#endif

#if defined(INIT_L1_CACHE)
        ##################################################################
        # Cache-Error Exception Vector Handler
        # Jumps to _cache_err_exception_context
        ##################################################################
        .section .cache_err_vector,code,keep
        .align 2
        .set noreorder
        .ent _cache_err_vector
_cache_err_vector:
	lw	t9,%call16(_cache_err_exception_context)(gp)
        jr      t9
        nop

        .end _cache_err_vector
#endif
#endif /* Check for PIC */

        .section .text.main_entry,code,keep
        .align 2
        .global _main_entry
        .ent _main_entry
_main_entry:


#if 0

#if defined(CPP_INIT)
        .weak _init
        # call .init section to run constructors etc

        lw     t9,%call16(_init)
        beq    t9,$0,2f
        jalr   t9
        nop

2:
#endif

#endif 
        and     a0,a0,0
        and     a1,a1,0

        ##################################################################

        # Call main
        ##################################################################
        lw	t9,%call16(main)(gp)
        jalr 	t9
        nop

#if defined(CALL_EXIT)
        ##################################################################
        # Call exit()
        ##################################################################
        lw	t9,%call16(exit)(gp)
        jalr    t9
        nop
#endif

        ##################################################################
        # Just in case, go into infinite loop
        # Call a software breakpoint only with -mdebugger compiler option
        ##################################################################
        .weak __exception_handler_break
__crt0_exit:
1:
        lw	t9,%call16(__exception_handler_break)(gp)
        beq     t9,0,0f
        nop
        jalr    t9
        nop

0:      b       1b
        nop

        addiu	sp,sp,32

        .set	macro
        .set	reorder

        .globl __crt0_exit
        .end _main_entry
