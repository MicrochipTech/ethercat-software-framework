/*--------------------------------------------------------------------------
 * MPLAB XC Compiler -  PIC32MX110F016D linker script
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

/* Default linker script, for position independent executables */

/*  IMPORTANT: PIC32MX MCUs use two files for the default linker script: 
 *    1) pic32mx/lib/ldscripts/elf32pic32.x (main linker script)
 *    2) pic32mx/lib/proc/32MX110F016D/procdefs.ld (variant-specific fragment)
 *
 *  This file is provided only as a convenience when adding a custom linker script
 *  to your application.
 */

OUTPUT_FORMAT("elf32-tradlittlemips")
OUTPUT_ARCH(pic32mx)
ENTRY(_reset)
/*************************************************************************
 * Legacy processor-specific object file.  Contains SFR definitions.
 * The SFR definitions are now provided in a processor-specific *.S
 * assembly source file rather than the processor.o file. Use the new
 * .S file rather than this processor.o file for new projects. MPLAB XC32
 * v2.10 and later will automatically link the new .S file.
 *************************************************************************/
#if defined(__XC32_VERSION__) && (__XC32_VERSION__ < 2100)
OPTIONAL("processor.o")
#endif
/*************************************************************************
 * Processor-specific legacy peripheral libraries are optional.
 * These legacy plibs are available as a separate download from
 *   http://www.microchip.com/mplabxc
 * Use MPLAB Harmony for new projects.
 *   http://www.microchip.com/mplabharmony
 *************************************************************************/
OPTIONAL("libmchp_peripheral.a")
OPTIONAL("libmchp_peripheral_32MX110F016D.a")


SECTIONS
{
  /* Read-only sections, merged into text segment: */
  . = SEGMENT_START("text-segment", 0) + SIZEOF_HEADERS;
  .reginfo        : { *(.reginfo) }
  .note.gnu.build-id : { *(.note.gnu.build-id) }
  .dynamic        : { *(.dynamic) }
  .hash           : { *(.hash) }
  .gnu.hash       : { *(.gnu.hash) }
  .dynsym         : { *(.dynsym) }
  .dynstr         : { *(.dynstr) }
  .gnu.version    : { *(.gnu.version) }
  .gnu.version_d  : { *(.gnu.version_d) }
  .gnu.version_r  : { *(.gnu.version_r) }
  .rel.dyn        :
  {
    *(.rel.init)
    *(.rel.text .rel.text.* .rel.gnu.linkonce.t.*)
    *(.rel.fini)
    *(.rel.rodata .rel.rodata.* .rel.gnu.linkonce.r.*)
    *(.rel.data.rel.ro .rel.data.rel.ro.* .rel.gnu.linkonce.d.rel.ro.*)
    *(.rel.data .rel.data.* .rel.gnu.linkonce.d.*)
    *(.rel.tdata .rel.tdata.* .rel.gnu.linkonce.td.*)
    *(.rel.tbss .rel.tbss.* .rel.gnu.linkonce.tb.*)
    *(.rel.ctors)
    *(.rel.dtors)
    *(.rel.got)
    *(.rel.dyn)
    *(.rel.sdata .rel.sdata.* .rel.gnu.linkonce.s.*)
    *(.rel.sbss .rel.sbss.* .rel.gnu.linkonce.sb.*)
    *(.rel.sdata2 .rel.sdata2.* .rel.gnu.linkonce.s2.*)
    *(.rel.sbss2 .rel.sbss2.* .rel.gnu.linkonce.sb2.*)
    *(.rel.bss .rel.bss.* .rel.gnu.linkonce.b.*)
    *(.rel.iplt)
  }
  .rela.dyn       :
  {
    *(.rela.init)
    *(.rela.text .rela.text.* .rela.gnu.linkonce.t.*)
    *(.rela.fini)
    *(.rela.rodata .rela.rodata.* .rela.gnu.linkonce.r.*)
    *(.rela.data .rela.data.* .rela.gnu.linkonce.d.*)
    *(.rela.tdata .rela.tdata.* .rela.gnu.linkonce.td.*)
    *(.rela.tbss .rela.tbss.* .rela.gnu.linkonce.tb.*)
    *(.rela.ctors)
    *(.rela.dtors)
    *(.rela.got)
    *(.rela.sdata .rela.sdata.* .rela.gnu.linkonce.s.*)
    *(.rela.sbss .rela.sbss.* .rela.gnu.linkonce.sb.*)
    *(.rela.sdata2 .rela.sdata2.* .rela.gnu.linkonce.s2.*)
    *(.rela.sbss2 .rela.sbss2.* .rela.gnu.linkonce.sb2.*)
    *(.rela.bss .rela.bss.* .rela.gnu.linkonce.b.*)
    *(.rela.iplt)
  }
  .rel.plt        :
  {
    *(.rel.plt)
  }
  .rela.plt       :
  {
    *(.rela.plt)
  }
}


/*************************************************************************
 * Memory Address Equates
 * _DBG_CODE_SIZE                 -- In-circuit Debug Executive size
 *************************************************************************/
_DBG_CODE_SIZE                 = 0x760;

SECTIONS
{
  /* Boot Sections */
  .reset :
  {
    KEEP(*(.reset))
    KEEP(*(.reset.startup))
  }
  .bev_excpt :
  {
    KEEP(*(.bev_handler))
  }
  /* Debug exception vector */
  .dbg_excpt (NOLOAD) :
  {
    . += (DEFINED (_DEBUGGER) ? 0x8 : 0x0);
  }
  /* Space reserved for the debug executive */
  .dbg_code (NOLOAD) :
  {
    . += (DEFINED (_DEBUGGER) ? _DBG_CODE_SIZE : 0x0);
  }

  .app_excpt :
  {
    KEEP(*(.gen_handler))
  }

.plt            : { *(.plt) }
.iplt           : { *(.iplt) }

/*************************************************************************
 * Symbols used for interrupt-vector table generation
 * To override the defaults, define the _vector_spacing & _ebase_address
 * symbols using the --defsym linker opt as shown in these examples:
 *   xc32-gcc src.c -Wl,--defsym=_vector_spacing=2
 *   xc32-gcc src.c -Wl,--defsym=_ebase_address=0x9D001000
 *************************************************************************/
PROVIDE(_vector_spacing = 0x0001);
PROVIDE(_ebase_address = ABSOLUTE(.));


  .vector_0 _ebase_address + 0x200 + ((_vector_spacing << 5) * 0) :
  {
     KEEP(*(.vector_0))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_0) <= (_vector_spacing << 5), "function at exception vector 0 too large")
  .vector_1 _ebase_address + 0x200 + ((_vector_spacing << 5) * 1) :
  {
     KEEP(*(.vector_1))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_1) <= (_vector_spacing << 5), "function at exception vector 1 too large")
  .vector_2 _ebase_address + 0x200 + ((_vector_spacing << 5) * 2) :
  {
     KEEP(*(.vector_2))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_2) <= (_vector_spacing << 5), "function at exception vector 2 too large")
  .vector_3 _ebase_address + 0x200 + ((_vector_spacing << 5) * 3) :
  {
     KEEP(*(.vector_3))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_3) <= (_vector_spacing << 5), "function at exception vector 3 too large")
  .vector_4 _ebase_address + 0x200 + ((_vector_spacing << 5) * 4) :
  {
     KEEP(*(.vector_4))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_4) <= (_vector_spacing << 5), "function at exception vector 4 too large")
  .vector_5 _ebase_address + 0x200 + ((_vector_spacing << 5) * 5) :
  {
     KEEP(*(.vector_5))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_5) <= (_vector_spacing << 5), "function at exception vector 5 too large")
  .vector_6 _ebase_address + 0x200 + ((_vector_spacing << 5) * 6) :
  {
     KEEP(*(.vector_6))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_6) <= (_vector_spacing << 5), "function at exception vector 6 too large")
  .vector_7 _ebase_address + 0x200 + ((_vector_spacing << 5) * 7) :
  {
     KEEP(*(.vector_7))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_7) <= (_vector_spacing << 5), "function at exception vector 7 too large")
  .vector_8 _ebase_address + 0x200 + ((_vector_spacing << 5) * 8) :
  {
     KEEP(*(.vector_8))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_8) <= (_vector_spacing << 5), "function at exception vector 8 too large")
  .vector_9 _ebase_address + 0x200 + ((_vector_spacing << 5) * 9) :
  {
     KEEP(*(.vector_9))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_9) <= (_vector_spacing << 5), "function at exception vector 9 too large")
  .vector_10 _ebase_address + 0x200 + ((_vector_spacing << 5) * 10) :
  {
     KEEP(*(.vector_10))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_10) <= (_vector_spacing << 5), "function at exception vector 10 too large")
  .vector_11 _ebase_address + 0x200 + ((_vector_spacing << 5) * 11) :
  {
     KEEP(*(.vector_11))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_11) <= (_vector_spacing << 5), "function at exception vector 11 too large")
  .vector_12 _ebase_address + 0x200 + ((_vector_spacing << 5) * 12) :
  {
     KEEP(*(.vector_12))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_12) <= (_vector_spacing << 5), "function at exception vector 12 too large")
  .vector_13 _ebase_address + 0x200 + ((_vector_spacing << 5) * 13) :
  {
     KEEP(*(.vector_13))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_13) <= (_vector_spacing << 5), "function at exception vector 13 too large")
  .vector_14 _ebase_address + 0x200 + ((_vector_spacing << 5) * 14) :
  {
     KEEP(*(.vector_14))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_14) <= (_vector_spacing << 5), "function at exception vector 14 too large")
  .vector_15 _ebase_address + 0x200 + ((_vector_spacing << 5) * 15) :
  {
     KEEP(*(.vector_15))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_15) <= (_vector_spacing << 5), "function at exception vector 15 too large")
  .vector_16 _ebase_address + 0x200 + ((_vector_spacing << 5) * 16) :
  {
     KEEP(*(.vector_16))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_16) <= (_vector_spacing << 5), "function at exception vector 16 too large")
  .vector_17 _ebase_address + 0x200 + ((_vector_spacing << 5) * 17) :
  {
     KEEP(*(.vector_17))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_17) <= (_vector_spacing << 5), "function at exception vector 17 too large")
  .vector_18 _ebase_address + 0x200 + ((_vector_spacing << 5) * 18) :
  {
     KEEP(*(.vector_18))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_18) <= (_vector_spacing << 5), "function at exception vector 18 too large")
  .vector_19 _ebase_address + 0x200 + ((_vector_spacing << 5) * 19) :
  {
     KEEP(*(.vector_19))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_19) <= (_vector_spacing << 5), "function at exception vector 19 too large")
  .vector_20 _ebase_address + 0x200 + ((_vector_spacing << 5) * 20) :
  {
     KEEP(*(.vector_20))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_20) <= (_vector_spacing << 5), "function at exception vector 20 too large")
  .vector_21 _ebase_address + 0x200 + ((_vector_spacing << 5) * 21) :
  {
     KEEP(*(.vector_21))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_21) <= (_vector_spacing << 5), "function at exception vector 21 too large")
  .vector_22 _ebase_address + 0x200 + ((_vector_spacing << 5) * 22) :
  {
     KEEP(*(.vector_22))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_22) <= (_vector_spacing << 5), "function at exception vector 22 too large")
  .vector_23 _ebase_address + 0x200 + ((_vector_spacing << 5) * 23) :
  {
     KEEP(*(.vector_23))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_23) <= (_vector_spacing << 5), "function at exception vector 23 too large")
  .vector_24 _ebase_address + 0x200 + ((_vector_spacing << 5) * 24) :
  {
     KEEP(*(.vector_24))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_24) <= (_vector_spacing << 5), "function at exception vector 24 too large")
  .vector_25 _ebase_address + 0x200 + ((_vector_spacing << 5) * 25) :
  {
     KEEP(*(.vector_25))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_25) <= (_vector_spacing << 5), "function at exception vector 25 too large")
  .vector_26 _ebase_address + 0x200 + ((_vector_spacing << 5) * 26) :
  {
     KEEP(*(.vector_26))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_26) <= (_vector_spacing << 5), "function at exception vector 26 too large")
  .vector_27 _ebase_address + 0x200 + ((_vector_spacing << 5) * 27) :
  {
     KEEP(*(.vector_27))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_27) <= (_vector_spacing << 5), "function at exception vector 27 too large")
  .vector_28 _ebase_address + 0x200 + ((_vector_spacing << 5) * 28) :
  {
     KEEP(*(.vector_28))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_28) <= (_vector_spacing << 5), "function at exception vector 28 too large")
  .vector_29 _ebase_address + 0x200 + ((_vector_spacing << 5) * 29) :
  {
     KEEP(*(.vector_29))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_29) <= (_vector_spacing << 5), "function at exception vector 29 too large")
  .vector_30 _ebase_address + 0x200 + ((_vector_spacing << 5) * 30) :
  {
     KEEP(*(.vector_30))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_30) <= (_vector_spacing << 5), "function at exception vector 30 too large")
  .vector_31 _ebase_address + 0x200 + ((_vector_spacing << 5) * 31) :
  {
     KEEP(*(.vector_31))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_31) <= (_vector_spacing << 5), "function at exception vector 31 too large")
  .vector_32 _ebase_address + 0x200 + ((_vector_spacing << 5) * 32) :
  {
     KEEP(*(.vector_32))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_32) <= (_vector_spacing << 5), "function at exception vector 32 too large")
  .vector_33 _ebase_address + 0x200 + ((_vector_spacing << 5) * 33) :
  {
     KEEP(*(.vector_33))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_33) <= (_vector_spacing << 5), "function at exception vector 33 too large")
  .vector_34 _ebase_address + 0x200 + ((_vector_spacing << 5) * 34) :
  {
     KEEP(*(.vector_34))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_34) <= (_vector_spacing << 5), "function at exception vector 34 too large")
  .vector_35 _ebase_address + 0x200 + ((_vector_spacing << 5) * 35) :
  {
     KEEP(*(.vector_35))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_35) <= (_vector_spacing << 5), "function at exception vector 35 too large")
  .vector_36 _ebase_address + 0x200 + ((_vector_spacing << 5) * 36) :
  {
     KEEP(*(.vector_36))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_36) <= (_vector_spacing << 5), "function at exception vector 36 too large")
  .vector_37 _ebase_address + 0x200 + ((_vector_spacing << 5) * 37) :
  {
     KEEP(*(.vector_37))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_37) <= (_vector_spacing << 5), "function at exception vector 37 too large")
  .vector_38 _ebase_address + 0x200 + ((_vector_spacing << 5) * 38) :
  {
     KEEP(*(.vector_38))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_38) <= (_vector_spacing << 5), "function at exception vector 38 too large")
  .vector_39 _ebase_address + 0x200 + ((_vector_spacing << 5) * 39) :
  {
     KEEP(*(.vector_39))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_39) <= (_vector_spacing << 5), "function at exception vector 39 too large")
  .vector_40 _ebase_address + 0x200 + ((_vector_spacing << 5) * 40) :
  {
     KEEP(*(.vector_40))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_40) <= (_vector_spacing << 5), "function at exception vector 40 too large")
  .vector_41 _ebase_address + 0x200 + ((_vector_spacing << 5) * 41) :
  {
     KEEP(*(.vector_41))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_41) <= (_vector_spacing << 5), "function at exception vector 41 too large")
  .vector_42 _ebase_address + 0x200 + ((_vector_spacing << 5) * 42) :
  {
     KEEP(*(.vector_42))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_42) <= (_vector_spacing << 5), "function at exception vector 42 too large")
  .vector_43 _ebase_address + 0x200 + ((_vector_spacing << 5) * 43) :
  {
     KEEP(*(.vector_43))
  }
  ASSERT (_vector_spacing == 0 || SIZEOF(.vector_43) <= (_vector_spacing << 5), "function at exception vector 43 too large")

  /*  The startup code is in the .reset.startup section.
   *  Keep this here for backwards compatibility with older
   *  C32 v1.xx releases.
   */
  .startup :
  {
    KEEP(*(.startup))
  }
  .text :
  {
    *(.text.unlikely .text.*_unlikely .text.unlikely.*)
    *(.text.exit .text.exit.*)
    *(.text.hot .text.hot.*)
    *(.text .stub .text.* .gnu.linkonce.t.*)
    KEEP (*(.text.*personality*))
    *(.mips16.fn.*)
    *(.mips16.call.*)
    *(.gnu.warning)
    . = ALIGN(4) ;
  }
  /* Global-namespace object initialization */
  .init   :
  {
    KEEP (*crti.o(.init))
    KEEP (*crtbegin.o(.init))
    KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o *crtn.o ).init))
    KEEP (*crtend.o(.init))
    KEEP (*crtn.o(.init))
    . = ALIGN(4) ;
  }
  .fini   :
  {
    KEEP (*(.fini))
    . = ALIGN(4) ;
  }
  .preinit_array   :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array))
    PROVIDE_HIDDEN (__preinit_array_end = .);
    . = ALIGN(4) ;
  }
  .init_array   :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT(.init_array.*)))
    KEEP (*(.init_array))
    PROVIDE_HIDDEN (__init_array_end = .);
    . = ALIGN(4) ;
  }
  .fini_array   :
  {
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP (*(SORT(.fini_array.*)))
    KEEP (*(.fini_array))
    PROVIDE_HIDDEN (__fini_array_end = .);
    . = ALIGN(4) ;
  }
  .ctors   :
  {
    /* XC32 uses crtbegin.o to find the start of
       the constructors, so we make sure it is
       first.  Because this is a wildcard, it
       doesn't matter if the user does not
       actually link against crtbegin.o; the
       linker won't look for a file to match a
       wildcard.  The wildcard also means that it
       doesn't matter which directory crtbegin.o
       is in.  */
    KEEP (*crtbegin.o(.ctors))
    KEEP (*crtbegin?.o(.ctors))
    /* We don't want to include the .ctor section from
       the crtend.o file until after the sorted ctors.
       The .ctor section from the crtend file contains the
       end of ctors marker and it must be last */
    KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o ) .ctors))
    KEEP (*(SORT(.ctors.*)))
    KEEP (*(.ctors))
    . = ALIGN(4) ;
  }
  .dtors   :
  {
    KEEP (*crtbegin.o(.dtors))
    KEEP (*crtbegin?.o(.dtors))
    KEEP (*(EXCLUDE_FILE (*crtend.o *crtend?.o ) .dtors))
    KEEP (*(SORT(.dtors.*)))
    KEEP (*(.dtors))
    . = ALIGN(4) ;
  }
  /* Read-only sections */
  .rodata   :
  {
    *( .gnu.linkonce.r.*)
    *(.rodata1)
    . = ALIGN(4) ;
  }
  /*
   * Small initialized constant global and static data can be placed in the
   * .sdata2 section.  This is different from .sdata, which contains small
   * initialized non-constant global and static data.
   */
  .sdata2 ALIGN(4) :
  {
    *(.sdata2 .sdata2.* .gnu.linkonce.s2.*)
    . = ALIGN(4) ;
  }
  /*
   * Uninitialized constant global and static data (i.e., variables which will
   * always be zero).  Again, this is different from .sbss, which contains
   * small non-initialized, non-constant global and static data.
   */
  .sbss2 ALIGN(4) :
  {
    *(.sbss2 .sbss2.* .gnu.linkonce.sb2.*)
    . = ALIGN(4) ;
  }
  .eh_frame_hdr   :
  {
    *(.eh_frame_hdr)
  }
    . = ALIGN(4) ;
  .eh_frame   : ONLY_IF_RO
  {
    KEEP (*(.eh_frame))
  }
    . = ALIGN(4) ;
  .gcc_except_table   : ONLY_IF_RO
  {
    *(.gcc_except_table .gcc_except_table.*)
  }
    . = ALIGN(4) ;
  .gnu_extab   : ONLY_IF_RO
  {
    *(.gnu_extab*)
  }
    . = ALIGN(4) ;
  .dbg_data (NOLOAD) :
  {
    . += (DEFINED (_DEBUGGER) ? 0x200 : 0x0);
  }
  . = .;
  _gp = ALIGN(4) ;
  .got ALIGN(4) :
  {
    *(.got)
    . = ALIGN(4) ;
  }
  .jcr   :
  {
    KEEP (*(.jcr))
    . = ALIGN(4) ;
  }
  .eh_frame    : ONLY_IF_RW
  {
    KEEP (*(.eh_frame))
    KEEP (*(.eh_frame.*))
  }
    . = ALIGN(4) ;
  .gcc_except_table    : ONLY_IF_RW
  {
    *(.gcc_except_table .gcc_except_table.*)
  }
    . = ALIGN(4) ;
  .gnu_extab      : ONLY_IF_RW { *(.gnu_extab) }
    . = ALIGN(4) ;
  .exception_ranges   : ONLY_IF_RW { *(.exception_ranges .exception_ranges*) }
    . = ALIGN(4) ;
  /* Persistent data - Use the new C 'persistent' attribute instead. */
  .persist   :
  {
    _persist_begin = .;
    *(.persist .persist.*)
    *(.pbss .pbss.*)
    . = ALIGN(4) ;
    _persist_end = .;
  }
  .data.rel.ro : { *(.data.rel.ro.local* .gnu.linkonce.d.rel.ro.local.*) *(.data.rel.ro .data.rel.ro.* .gnu.linkonce.d.rel.ro.*) }
  .got.plt        : { *(.got.plt) }
  .data   :
  {
    *(.data .data.* .gnu.linkonce.d.*)
    SORT(CONSTRUCTORS)
    . = ALIGN(4) ;
  }
  .data1          : { *(.data1) }
  . = .;
  /*
   * Note that 'small' data sections are still mapped in the linker
   * script. This ensures that they are grouped together for
   * gp-relative addressing. Absolute sections are allocated after
   * the 'small' data sections so small data cannot flow around them.
   */
  /*
   * We want the small data sections together, so single-instruction offsets
   * can access them all, and initialized data all before uninitialized, so
   * we can shorten the on-disk segment size.
   */
  .sdata ALIGN(4) :
  {
    _sdata_begin = . ;
    *(.sdata .sdata.* .gnu.linkonce.s.*)
    . = ALIGN(4) ;
    _sdata_end = . ;
  }
  .lit8           :
  {
    *(.lit8)
  }
  .lit4           :
  {
    *(.lit4)
  }
  . = ALIGN (4) ;
  _data_end = . ;
  _bss_begin = . ;
  .sbss ALIGN(4) :
  {
    _sbss_begin = . ;
    *(.dynsbss)
    *(.sbss .sbss.* .gnu.linkonce.sb.*)
    *(.scommon)
    _sbss_end = . ;
    . = ALIGN(4) ;
  }
  /*
   *  Align here to ensure that the .bss section occupies space up to
   *  _end.  Align after .bss to ensure correct alignment even if the
   *  .bss section disappears because there are no input sections.
   *
   *  Note that input sections named .bss* are no longer mapped here.
   *  The best-fit allocator locates them, so that they may flow
   *  around absolute sections as needed.
   *
   */
  .bss     :
  {
    *(.dynbss)
    *(.bss .bss.* .gnu.linkonce.b.*)
    *(COMMON)
   /* Align here to ensure that the .bss section occupies space up to
      _end.  Align after .bss to ensure correct alignment even if the
      .bss section disappears because there are no input sections. */
   . = ALIGN(. != 0 ? 4 : 1);
  }
  . = ALIGN(4) ;
  _end = . ;
  _bss_end = . ;
    /* The .pdr section belongs in the absolute section */
    /DISCARD/ : { *(.pdr) }
  .gptab.sdata : { *(.gptab.data) *(.gptab.sdata) }
  .gptab.sbss : { *(.gptab.bss) *(.gptab.sbss) }
  .mdebug.abi32 : { KEEP(*(.mdebug.abi32)) }
  .mdebug.abiN32 : { KEEP(*(.mdebug.abiN32)) }
  .mdebug.abi64 : { KEEP(*(.mdebug.abi64)) }
  .mdebug.abiO64 : { KEEP(*(.mdebug.abiO64)) }
  .mdebug.eabi32 : { KEEP(*(.mdebug.eabi32)) }
  .mdebug.eabi64 : { KEEP(*(.mdebug.eabi64)) }
  .gcc_compiled_long32 : { KEEP(*(.gcc_compiled_long32)) }
  .gcc_compiled_long64 : { KEEP(*(.gcc_compiled_long64)) }
  /* Stabs debugging sections.  */
  .stab          0 : { *(.stab) }
  .stabstr       0 : { *(.stabstr) }
  .stab.excl     0 : { *(.stab.excl) }
  .stab.exclstr  0 : { *(.stab.exclstr) }
  .stab.index    0 : { *(.stab.index) }
  .stab.indexstr 0 : { *(.stab.indexstr) }
  .comment       0 : { *(.comment) }
  /* DWARF debug sections used by MPLAB X for source-level debugging. 
     Symbols in the DWARF debugging sections are relative to the beginning
     of the section so we begin them at 0.  */
  /* DWARF 1 */
  .debug          0 : { *(.debug) }
  .line           0 : { *(.line) }
  /* GNU DWARF 1 extensions */
  .debug_srcinfo  0 : { *(.debug_srcinfo) }
  .debug_sfnames  0 : { *(.debug_sfnames) }
  /* DWARF 1.1 and DWARF 2 */
  .debug_aranges  0 : { *(.debug_aranges) }
  .debug_pubnames 0 : { *(.debug_pubnames) }
  /* DWARF 2 */
  .debug_info     0 : { *(.debug_info .gnu.linkonce.wi.*) }
  .debug_abbrev   0 : { *(.debug_abbrev) }
  .debug_line     0 : { *(.debug_line) }
  .debug_frame    0 : { *(.debug_frame) }
  .debug_str      0 : { *(.debug_str) }
  .debug_loc      0 : { *(.debug_loc) }
  .debug_macinfo  0 : { *(.debug_macinfo) }
  /* SGI/MIPS DWARF 2 extensions */
  .debug_weaknames 0 : { *(.debug_weaknames) }
  .debug_funcnames 0 : { *(.debug_funcnames) }
  .debug_typenames 0 : { *(.debug_typenames) }
  .debug_varnames  0 : { *(.debug_varnames) }
  .debug_pubtypes 0 : { *(.debug_pubtypes) }
  .debug_ranges   0 : { *(.debug_ranges) }
  .gnu.attributes 0 : { KEEP (*(.gnu.attributes)) }
  /DISCARD/ : { *(.note.GNU-stack) }
  /DISCARD/ : { *(.note.GNU-stack) *(.gnu_debuglink) *(.gnu.lto_*) *(.discard) }
}

