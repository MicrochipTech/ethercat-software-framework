#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-LAN9252_D51_SPI_Indirect_mode.mk)" "nbproject/Makefile-local-LAN9252_D51_SPI_Indirect_mode.mk"
include nbproject/Makefile-local-LAN9252_D51_SPI_Indirect_mode.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=LAN9252_D51_SPI_Indirect_mode
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/ESF_EVB_LAN9252.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/ESF_EVB_LAN9252.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../src/config/default/driver/spi/src/drv_spi.c ../src/config/default/peripheral/clock/plib_clock.c ../src/config/default/peripheral/cmcc/plib_cmcc.c ../src/config/default/peripheral/dmac/plib_dmac.c ../src/config/default/peripheral/eic/plib_eic.c ../src/config/default/peripheral/evsys/plib_evsys.c ../src/config/default/peripheral/nvic/plib_nvic.c ../src/config/default/peripheral/nvmctrl/plib_nvmctrl.c ../src/config/default/peripheral/port/plib_port.c ../src/config/default/peripheral/qspi/plib_qspi_spi.c ../src/config/default/peripheral/qspi/plib_qspi.c ../src/config/default/peripheral/systick/plib_systick.c ../src/config/default/stdio/xc32_monitor.c ../src/config/default/system/cache/sys_cache.c ../src/config/default/system/dma/sys_dma.c ../src/config/default/system/int/src/sys_int.c ../src/config/default/exceptions.c ../src/config/default/initialization.c ../src/config/default/interrupts.c ../src/config/default/libc_syscalls.c ../src/config/default/startup_xc32.c ../src/config/default/tasks.c ../../../../SOC_Portable/SAMD51_LAN9252/Drivers.c ../../../../Source/ESC/ESC_Utils.c ../../../../Source/ESC/LAN925x.c ../../../../Source/SSC/bootmode.c ../../../../Source/SSC/coeappl.c ../../../../Source/SSC/ecatappl.c ../../../../Source/SSC/ecatcoe.c ../../../../Source/SSC/ecatfoe.c ../../../../Source/SSC/ecatslv.c ../../../../Source/SSC/emcy.c ../../../../Source/SSC/foeappl.c ../../../../Source/SSC/mailbox.c ../../../../Source/SSC/objdef.c ../../../../Source/SSC/sample_app.c ../../../../Source/SSC/sdoserv.c ../src/main.c ../src/app.c ../src/Developer_Test.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/2070931557/drv_spi.o ${OBJECTDIR}/_ext/1984496892/plib_clock.o ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o ${OBJECTDIR}/_ext/1865161661/plib_dmac.o ${OBJECTDIR}/_ext/60167341/plib_eic.o ${OBJECTDIR}/_ext/1986646378/plib_evsys.o ${OBJECTDIR}/_ext/1865468468/plib_nvic.o ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o ${OBJECTDIR}/_ext/1865521619/plib_port.o ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o ${OBJECTDIR}/_ext/1865555181/plib_qspi.o ${OBJECTDIR}/_ext/1827571544/plib_systick.o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ${OBJECTDIR}/_ext/1014039709/sys_cache.o ${OBJECTDIR}/_ext/14461671/sys_dma.o ${OBJECTDIR}/_ext/1881668453/sys_int.o ${OBJECTDIR}/_ext/1171490990/exceptions.o ${OBJECTDIR}/_ext/1171490990/initialization.o ${OBJECTDIR}/_ext/1171490990/interrupts.o ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o ${OBJECTDIR}/_ext/1171490990/startup_xc32.o ${OBJECTDIR}/_ext/1171490990/tasks.o ${OBJECTDIR}/_ext/668003091/Drivers.o ${OBJECTDIR}/_ext/108147519/ESC_Utils.o ${OBJECTDIR}/_ext/108147519/LAN925x.o ${OBJECTDIR}/_ext/108134065/bootmode.o ${OBJECTDIR}/_ext/108134065/coeappl.o ${OBJECTDIR}/_ext/108134065/ecatappl.o ${OBJECTDIR}/_ext/108134065/ecatcoe.o ${OBJECTDIR}/_ext/108134065/ecatfoe.o ${OBJECTDIR}/_ext/108134065/ecatslv.o ${OBJECTDIR}/_ext/108134065/emcy.o ${OBJECTDIR}/_ext/108134065/foeappl.o ${OBJECTDIR}/_ext/108134065/mailbox.o ${OBJECTDIR}/_ext/108134065/objdef.o ${OBJECTDIR}/_ext/108134065/sample_app.o ${OBJECTDIR}/_ext/108134065/sdoserv.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/Developer_Test.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/2070931557/drv_spi.o.d ${OBJECTDIR}/_ext/1984496892/plib_clock.o.d ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o.d ${OBJECTDIR}/_ext/1865161661/plib_dmac.o.d ${OBJECTDIR}/_ext/60167341/plib_eic.o.d ${OBJECTDIR}/_ext/1986646378/plib_evsys.o.d ${OBJECTDIR}/_ext/1865468468/plib_nvic.o.d ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o.d ${OBJECTDIR}/_ext/1865521619/plib_port.o.d ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o.d ${OBJECTDIR}/_ext/1865555181/plib_qspi.o.d ${OBJECTDIR}/_ext/1827571544/plib_systick.o.d ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d ${OBJECTDIR}/_ext/1014039709/sys_cache.o.d ${OBJECTDIR}/_ext/14461671/sys_dma.o.d ${OBJECTDIR}/_ext/1881668453/sys_int.o.d ${OBJECTDIR}/_ext/1171490990/exceptions.o.d ${OBJECTDIR}/_ext/1171490990/initialization.o.d ${OBJECTDIR}/_ext/1171490990/interrupts.o.d ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o.d ${OBJECTDIR}/_ext/1171490990/startup_xc32.o.d ${OBJECTDIR}/_ext/1171490990/tasks.o.d ${OBJECTDIR}/_ext/668003091/Drivers.o.d ${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d ${OBJECTDIR}/_ext/108147519/LAN925x.o.d ${OBJECTDIR}/_ext/108134065/bootmode.o.d ${OBJECTDIR}/_ext/108134065/coeappl.o.d ${OBJECTDIR}/_ext/108134065/ecatappl.o.d ${OBJECTDIR}/_ext/108134065/ecatcoe.o.d ${OBJECTDIR}/_ext/108134065/ecatfoe.o.d ${OBJECTDIR}/_ext/108134065/ecatslv.o.d ${OBJECTDIR}/_ext/108134065/emcy.o.d ${OBJECTDIR}/_ext/108134065/foeappl.o.d ${OBJECTDIR}/_ext/108134065/mailbox.o.d ${OBJECTDIR}/_ext/108134065/objdef.o.d ${OBJECTDIR}/_ext/108134065/sample_app.o.d ${OBJECTDIR}/_ext/108134065/sdoserv.o.d ${OBJECTDIR}/_ext/1360937237/main.o.d ${OBJECTDIR}/_ext/1360937237/app.o.d ${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/2070931557/drv_spi.o ${OBJECTDIR}/_ext/1984496892/plib_clock.o ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o ${OBJECTDIR}/_ext/1865161661/plib_dmac.o ${OBJECTDIR}/_ext/60167341/plib_eic.o ${OBJECTDIR}/_ext/1986646378/plib_evsys.o ${OBJECTDIR}/_ext/1865468468/plib_nvic.o ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o ${OBJECTDIR}/_ext/1865521619/plib_port.o ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o ${OBJECTDIR}/_ext/1865555181/plib_qspi.o ${OBJECTDIR}/_ext/1827571544/plib_systick.o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ${OBJECTDIR}/_ext/1014039709/sys_cache.o ${OBJECTDIR}/_ext/14461671/sys_dma.o ${OBJECTDIR}/_ext/1881668453/sys_int.o ${OBJECTDIR}/_ext/1171490990/exceptions.o ${OBJECTDIR}/_ext/1171490990/initialization.o ${OBJECTDIR}/_ext/1171490990/interrupts.o ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o ${OBJECTDIR}/_ext/1171490990/startup_xc32.o ${OBJECTDIR}/_ext/1171490990/tasks.o ${OBJECTDIR}/_ext/668003091/Drivers.o ${OBJECTDIR}/_ext/108147519/ESC_Utils.o ${OBJECTDIR}/_ext/108147519/LAN925x.o ${OBJECTDIR}/_ext/108134065/bootmode.o ${OBJECTDIR}/_ext/108134065/coeappl.o ${OBJECTDIR}/_ext/108134065/ecatappl.o ${OBJECTDIR}/_ext/108134065/ecatcoe.o ${OBJECTDIR}/_ext/108134065/ecatfoe.o ${OBJECTDIR}/_ext/108134065/ecatslv.o ${OBJECTDIR}/_ext/108134065/emcy.o ${OBJECTDIR}/_ext/108134065/foeappl.o ${OBJECTDIR}/_ext/108134065/mailbox.o ${OBJECTDIR}/_ext/108134065/objdef.o ${OBJECTDIR}/_ext/108134065/sample_app.o ${OBJECTDIR}/_ext/108134065/sdoserv.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/Developer_Test.o

# Source Files
SOURCEFILES=../src/config/default/driver/spi/src/drv_spi.c ../src/config/default/peripheral/clock/plib_clock.c ../src/config/default/peripheral/cmcc/plib_cmcc.c ../src/config/default/peripheral/dmac/plib_dmac.c ../src/config/default/peripheral/eic/plib_eic.c ../src/config/default/peripheral/evsys/plib_evsys.c ../src/config/default/peripheral/nvic/plib_nvic.c ../src/config/default/peripheral/nvmctrl/plib_nvmctrl.c ../src/config/default/peripheral/port/plib_port.c ../src/config/default/peripheral/qspi/plib_qspi_spi.c ../src/config/default/peripheral/qspi/plib_qspi.c ../src/config/default/peripheral/systick/plib_systick.c ../src/config/default/stdio/xc32_monitor.c ../src/config/default/system/cache/sys_cache.c ../src/config/default/system/dma/sys_dma.c ../src/config/default/system/int/src/sys_int.c ../src/config/default/exceptions.c ../src/config/default/initialization.c ../src/config/default/interrupts.c ../src/config/default/libc_syscalls.c ../src/config/default/startup_xc32.c ../src/config/default/tasks.c ../../../../SOC_Portable/SAMD51_LAN9252/Drivers.c ../../../../Source/ESC/ESC_Utils.c ../../../../Source/ESC/LAN925x.c ../../../../Source/SSC/bootmode.c ../../../../Source/SSC/coeappl.c ../../../../Source/SSC/ecatappl.c ../../../../Source/SSC/ecatcoe.c ../../../../Source/SSC/ecatfoe.c ../../../../Source/SSC/ecatslv.c ../../../../Source/SSC/emcy.c ../../../../Source/SSC/foeappl.c ../../../../Source/SSC/mailbox.c ../../../../Source/SSC/objdef.c ../../../../Source/SSC/sample_app.c ../../../../Source/SSC/sdoserv.c ../src/main.c ../src/app.c ../src/Developer_Test.c

# Pack Options 
PACK_COMMON_OPTIONS=-I "${CMSIS_DIR}/CMSIS/Core/Include"



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-LAN9252_D51_SPI_Indirect_mode.mk ${DISTDIR}/ESF_EVB_LAN9252.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=ATSAMD51J19A
MP_LINKER_FILE_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/2070931557/drv_spi.o: ../src/config/default/driver/spi/src/drv_spi.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/72ef27d08c77df6362ae8e84dd1029b7f52a572f .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/2070931557" 
	@${RM} ${OBJECTDIR}/_ext/2070931557/drv_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/2070931557/drv_spi.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2070931557/drv_spi.o.d" -o ${OBJECTDIR}/_ext/2070931557/drv_spi.o ../src/config/default/driver/spi/src/drv_spi.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1984496892/plib_clock.o: ../src/config/default/peripheral/clock/plib_clock.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/a2c0b8fbec9ff35b9da7b357bd2e5b7edd8893de .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1984496892" 
	@${RM} ${OBJECTDIR}/_ext/1984496892/plib_clock.o.d 
	@${RM} ${OBJECTDIR}/_ext/1984496892/plib_clock.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1984496892/plib_clock.o.d" -o ${OBJECTDIR}/_ext/1984496892/plib_clock.o ../src/config/default/peripheral/clock/plib_clock.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865131932/plib_cmcc.o: ../src/config/default/peripheral/cmcc/plib_cmcc.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/a7dde348130a20b5011dc1e3c5fac9390960d95f .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865131932" 
	@${RM} ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865131932/plib_cmcc.o.d" -o ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o ../src/config/default/peripheral/cmcc/plib_cmcc.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865161661/plib_dmac.o: ../src/config/default/peripheral/dmac/plib_dmac.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/ce8454fa109132bea3ae4e99511ec030b8b2c59c .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865161661" 
	@${RM} ${OBJECTDIR}/_ext/1865161661/plib_dmac.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865161661/plib_dmac.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865161661/plib_dmac.o.d" -o ${OBJECTDIR}/_ext/1865161661/plib_dmac.o ../src/config/default/peripheral/dmac/plib_dmac.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/60167341/plib_eic.o: ../src/config/default/peripheral/eic/plib_eic.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/4e5e0b42fb0405467129530f3068a80a32df942b .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/60167341" 
	@${RM} ${OBJECTDIR}/_ext/60167341/plib_eic.o.d 
	@${RM} ${OBJECTDIR}/_ext/60167341/plib_eic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60167341/plib_eic.o.d" -o ${OBJECTDIR}/_ext/60167341/plib_eic.o ../src/config/default/peripheral/eic/plib_eic.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1986646378/plib_evsys.o: ../src/config/default/peripheral/evsys/plib_evsys.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/3f2d9b08c093be9090c65836b2a52407319d7353 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1986646378" 
	@${RM} ${OBJECTDIR}/_ext/1986646378/plib_evsys.o.d 
	@${RM} ${OBJECTDIR}/_ext/1986646378/plib_evsys.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1986646378/plib_evsys.o.d" -o ${OBJECTDIR}/_ext/1986646378/plib_evsys.o ../src/config/default/peripheral/evsys/plib_evsys.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865468468/plib_nvic.o: ../src/config/default/peripheral/nvic/plib_nvic.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/f7b6c0906c859de78119bd9ba351bfc956aa7528 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865468468" 
	@${RM} ${OBJECTDIR}/_ext/1865468468/plib_nvic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865468468/plib_nvic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865468468/plib_nvic.o.d" -o ${OBJECTDIR}/_ext/1865468468/plib_nvic.o ../src/config/default/peripheral/nvic/plib_nvic.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o: ../src/config/default/peripheral/nvmctrl/plib_nvmctrl.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/ff64ab9c189aa798acfb862697b5f5c8fe1b61f1 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1593096446" 
	@${RM} ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o.d" -o ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o ../src/config/default/peripheral/nvmctrl/plib_nvmctrl.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865521619/plib_port.o: ../src/config/default/peripheral/port/plib_port.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/53a6fd39bac25b56083cb5e88378c43d645e2c5d .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865521619" 
	@${RM} ${OBJECTDIR}/_ext/1865521619/plib_port.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865521619/plib_port.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865521619/plib_port.o.d" -o ${OBJECTDIR}/_ext/1865521619/plib_port.o ../src/config/default/peripheral/port/plib_port.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o: ../src/config/default/peripheral/qspi/plib_qspi_spi.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/3f4e7473076173c01afd4b8a8223d31a83567f95 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865555181" 
	@${RM} ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o.d" -o ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o ../src/config/default/peripheral/qspi/plib_qspi_spi.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865555181/plib_qspi.o: ../src/config/default/peripheral/qspi/plib_qspi.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/9d2f7dc6ad162f7c60605ac73d4570b74e05a766 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865555181" 
	@${RM} ${OBJECTDIR}/_ext/1865555181/plib_qspi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865555181/plib_qspi.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865555181/plib_qspi.o.d" -o ${OBJECTDIR}/_ext/1865555181/plib_qspi.o ../src/config/default/peripheral/qspi/plib_qspi.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1827571544/plib_systick.o: ../src/config/default/peripheral/systick/plib_systick.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/b9192bc625d5ec03c5301f078ca5fe9a4aca4c24 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1827571544" 
	@${RM} ${OBJECTDIR}/_ext/1827571544/plib_systick.o.d 
	@${RM} ${OBJECTDIR}/_ext/1827571544/plib_systick.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1827571544/plib_systick.o.d" -o ${OBJECTDIR}/_ext/1827571544/plib_systick.o ../src/config/default/peripheral/systick/plib_systick.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/163028504/xc32_monitor.o: ../src/config/default/stdio/xc32_monitor.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/44df420639075055e503b30c5d10a07809f68ced .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/163028504" 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ../src/config/default/stdio/xc32_monitor.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1014039709/sys_cache.o: ../src/config/default/system/cache/sys_cache.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/6fd7437007177cfcfbd8fbe292c38431026e179f .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1014039709" 
	@${RM} ${OBJECTDIR}/_ext/1014039709/sys_cache.o.d 
	@${RM} ${OBJECTDIR}/_ext/1014039709/sys_cache.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1014039709/sys_cache.o.d" -o ${OBJECTDIR}/_ext/1014039709/sys_cache.o ../src/config/default/system/cache/sys_cache.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/14461671/sys_dma.o: ../src/config/default/system/dma/sys_dma.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/9b74cc62638188ec8d2954dfa1323181d02f0c2a .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/14461671" 
	@${RM} ${OBJECTDIR}/_ext/14461671/sys_dma.o.d 
	@${RM} ${OBJECTDIR}/_ext/14461671/sys_dma.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/14461671/sys_dma.o.d" -o ${OBJECTDIR}/_ext/14461671/sys_dma.o ../src/config/default/system/dma/sys_dma.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1881668453/sys_int.o: ../src/config/default/system/int/src/sys_int.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/522a9cc6e9db8d57ffa04d2ea0c1e18c6de24d3d .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1881668453" 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1881668453/sys_int.o.d" -o ${OBJECTDIR}/_ext/1881668453/sys_int.o ../src/config/default/system/int/src/sys_int.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/exceptions.o: ../src/config/default/exceptions.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/dd1d74c536d3693b68d369a5d0ae1d383a0f74f7 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/exceptions.o.d" -o ${OBJECTDIR}/_ext/1171490990/exceptions.o ../src/config/default/exceptions.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/initialization.o: ../src/config/default/initialization.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/8e32f3336f940d6e53cf4e006064cfbf9bd291b8 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/initialization.o.d" -o ${OBJECTDIR}/_ext/1171490990/initialization.o ../src/config/default/initialization.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/interrupts.o: ../src/config/default/interrupts.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/22ca8d40f38886cf4516daaa4df836d112aaa55 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" -o ${OBJECTDIR}/_ext/1171490990/interrupts.o ../src/config/default/interrupts.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/libc_syscalls.o: ../src/config/default/libc_syscalls.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/2bb6eb5f2800c090cc22b37d7003ad5292dd7a4f .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/libc_syscalls.o.d" -o ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o ../src/config/default/libc_syscalls.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/startup_xc32.o: ../src/config/default/startup_xc32.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/2197f633d83ee7951f00cc42f732fdbbc280ee8 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/startup_xc32.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/startup_xc32.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/startup_xc32.o.d" -o ${OBJECTDIR}/_ext/1171490990/startup_xc32.o ../src/config/default/startup_xc32.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/tasks.o: ../src/config/default/tasks.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/4ee5563558531ae3d00f9777627503a00ba0dd59 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/tasks.o.d" -o ${OBJECTDIR}/_ext/1171490990/tasks.o ../src/config/default/tasks.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/668003091/Drivers.o: ../../../../SOC_Portable/SAMD51_LAN9252/Drivers.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/64a0cbb1b6804fdb52c403c82c7be0e29bce7de2 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/668003091" 
	@${RM} ${OBJECTDIR}/_ext/668003091/Drivers.o.d 
	@${RM} ${OBJECTDIR}/_ext/668003091/Drivers.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/668003091/Drivers.o.d" -o ${OBJECTDIR}/_ext/668003091/Drivers.o ../../../../SOC_Portable/SAMD51_LAN9252/Drivers.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108147519/ESC_Utils.o: ../../../../Source/ESC/ESC_Utils.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/512013b2b4bfdd808ec7dbb51c833241cd6988a7 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108147519" 
	@${RM} ${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/108147519/ESC_Utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d" -o ${OBJECTDIR}/_ext/108147519/ESC_Utils.o ../../../../Source/ESC/ESC_Utils.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108147519/LAN925x.o: ../../../../Source/ESC/LAN925x.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/80ad5f447d5cc80d8e7aa97d34353564ea990e0d .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108147519" 
	@${RM} ${OBJECTDIR}/_ext/108147519/LAN925x.o.d 
	@${RM} ${OBJECTDIR}/_ext/108147519/LAN925x.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108147519/LAN925x.o.d" -o ${OBJECTDIR}/_ext/108147519/LAN925x.o ../../../../Source/ESC/LAN925x.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/bootmode.o: ../../../../Source/SSC/bootmode.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/3af17d9861fbb73b0b4a95316a22427c278331e0 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/bootmode.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/bootmode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/bootmode.o.d" -o ${OBJECTDIR}/_ext/108134065/bootmode.o ../../../../Source/SSC/bootmode.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/coeappl.o: ../../../../Source/SSC/coeappl.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e4ca0025e09bb9f2c8a1e8a29a6658f34fdb0987 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/coeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/coeappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/coeappl.o.d" -o ${OBJECTDIR}/_ext/108134065/coeappl.o ../../../../Source/SSC/coeappl.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/ecatappl.o: ../../../../Source/SSC/ecatappl.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/27d58ec55bd06de96a91c1edab63d5683b91a8af .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatappl.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatappl.o ../../../../Source/SSC/ecatappl.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/ecatcoe.o: ../../../../Source/SSC/ecatcoe.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/fa48735aa6b3dc24c48d6863c46400cfa7e15291 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatcoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatcoe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatcoe.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatcoe.o ../../../../Source/SSC/ecatcoe.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/ecatfoe.o: ../../../../Source/SSC/ecatfoe.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/251385b34af8373fe18e9774097b220e051aebab .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatfoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatfoe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatfoe.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatfoe.o ../../../../Source/SSC/ecatfoe.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/ecatslv.o: ../../../../Source/SSC/ecatslv.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/f4ce257735ace3a40ab57f7d01e94a7ef9ccc121 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatslv.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatslv.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatslv.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatslv.o ../../../../Source/SSC/ecatslv.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/emcy.o: ../../../../Source/SSC/emcy.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/85d0d424c9eb43d2a9bb559d73d1daf139d68a83 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/emcy.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/emcy.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/emcy.o.d" -o ${OBJECTDIR}/_ext/108134065/emcy.o ../../../../Source/SSC/emcy.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/foeappl.o: ../../../../Source/SSC/foeappl.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/450d0c71b23cba85d354ffb0860b82f6cbb0463 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/foeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/foeappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/foeappl.o.d" -o ${OBJECTDIR}/_ext/108134065/foeappl.o ../../../../Source/SSC/foeappl.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/mailbox.o: ../../../../Source/SSC/mailbox.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/29d84fabb99d5f3ea036e754e605c27967d62439 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/mailbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/mailbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/mailbox.o.d" -o ${OBJECTDIR}/_ext/108134065/mailbox.o ../../../../Source/SSC/mailbox.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/objdef.o: ../../../../Source/SSC/objdef.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/2aea9cdd61c1503a1b8afccaa8b61bd71d56dd17 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/objdef.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/objdef.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/objdef.o.d" -o ${OBJECTDIR}/_ext/108134065/objdef.o ../../../../Source/SSC/objdef.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/sample_app.o: ../../../../Source/SSC/sample_app.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/657899e28e95d791dbb9e2e524c74790dc0dcb77 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/sample_app.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/sample_app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/sample_app.o.d" -o ${OBJECTDIR}/_ext/108134065/sample_app.o ../../../../Source/SSC/sample_app.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/sdoserv.o: ../../../../Source/SSC/sdoserv.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/f4cedf4c344d731a63e551e6fe6c30b1425f124e .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/sdoserv.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/sdoserv.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/sdoserv.o.d" -o ${OBJECTDIR}/_ext/108134065/sdoserv.o ../../../../Source/SSC/sdoserv.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/158f6ce2b2624701bba818052e39594f6ba53f7b .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/c0f9043ad18bb0145d5494b91084a9533b56dad9 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/Developer_Test.o: ../src/Developer_Test.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/70c671900ae31b1189b680cf427b86a0934bdaa6 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/Developer_Test.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d" -o ${OBJECTDIR}/_ext/1360937237/Developer_Test.o ../src/Developer_Test.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
else
${OBJECTDIR}/_ext/2070931557/drv_spi.o: ../src/config/default/driver/spi/src/drv_spi.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/1931deb478835c01521c2728b943ad2c04f49600 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/2070931557" 
	@${RM} ${OBJECTDIR}/_ext/2070931557/drv_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/2070931557/drv_spi.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2070931557/drv_spi.o.d" -o ${OBJECTDIR}/_ext/2070931557/drv_spi.o ../src/config/default/driver/spi/src/drv_spi.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1984496892/plib_clock.o: ../src/config/default/peripheral/clock/plib_clock.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/9e371d713f29b7899ffb5b99f294c8255dd5a168 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1984496892" 
	@${RM} ${OBJECTDIR}/_ext/1984496892/plib_clock.o.d 
	@${RM} ${OBJECTDIR}/_ext/1984496892/plib_clock.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1984496892/plib_clock.o.d" -o ${OBJECTDIR}/_ext/1984496892/plib_clock.o ../src/config/default/peripheral/clock/plib_clock.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865131932/plib_cmcc.o: ../src/config/default/peripheral/cmcc/plib_cmcc.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/607af8a7b7549aca655a349c897d15e28facdabe .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865131932" 
	@${RM} ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865131932/plib_cmcc.o.d" -o ${OBJECTDIR}/_ext/1865131932/plib_cmcc.o ../src/config/default/peripheral/cmcc/plib_cmcc.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865161661/plib_dmac.o: ../src/config/default/peripheral/dmac/plib_dmac.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e252ead80e953101a1d25ce68e33a58672ecbe1f .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865161661" 
	@${RM} ${OBJECTDIR}/_ext/1865161661/plib_dmac.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865161661/plib_dmac.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865161661/plib_dmac.o.d" -o ${OBJECTDIR}/_ext/1865161661/plib_dmac.o ../src/config/default/peripheral/dmac/plib_dmac.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/60167341/plib_eic.o: ../src/config/default/peripheral/eic/plib_eic.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/a59e19e8688bb7b0ad17b64c4a2bc1620b9d92a3 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/60167341" 
	@${RM} ${OBJECTDIR}/_ext/60167341/plib_eic.o.d 
	@${RM} ${OBJECTDIR}/_ext/60167341/plib_eic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60167341/plib_eic.o.d" -o ${OBJECTDIR}/_ext/60167341/plib_eic.o ../src/config/default/peripheral/eic/plib_eic.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1986646378/plib_evsys.o: ../src/config/default/peripheral/evsys/plib_evsys.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/166a64594d693ee7c62a4176aed12933d6d57315 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1986646378" 
	@${RM} ${OBJECTDIR}/_ext/1986646378/plib_evsys.o.d 
	@${RM} ${OBJECTDIR}/_ext/1986646378/plib_evsys.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1986646378/plib_evsys.o.d" -o ${OBJECTDIR}/_ext/1986646378/plib_evsys.o ../src/config/default/peripheral/evsys/plib_evsys.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865468468/plib_nvic.o: ../src/config/default/peripheral/nvic/plib_nvic.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/fcaf8860e8915bc589e7e7a861e29bf812802ec6 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865468468" 
	@${RM} ${OBJECTDIR}/_ext/1865468468/plib_nvic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865468468/plib_nvic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865468468/plib_nvic.o.d" -o ${OBJECTDIR}/_ext/1865468468/plib_nvic.o ../src/config/default/peripheral/nvic/plib_nvic.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o: ../src/config/default/peripheral/nvmctrl/plib_nvmctrl.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/c2aa5d23505bca6ae7d8b616fe246e0426202790 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1593096446" 
	@${RM} ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o.d" -o ${OBJECTDIR}/_ext/1593096446/plib_nvmctrl.o ../src/config/default/peripheral/nvmctrl/plib_nvmctrl.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865521619/plib_port.o: ../src/config/default/peripheral/port/plib_port.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/55c5d014891b7d1e5813fc2956702a4e56dbeaab .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865521619" 
	@${RM} ${OBJECTDIR}/_ext/1865521619/plib_port.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865521619/plib_port.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865521619/plib_port.o.d" -o ${OBJECTDIR}/_ext/1865521619/plib_port.o ../src/config/default/peripheral/port/plib_port.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o: ../src/config/default/peripheral/qspi/plib_qspi_spi.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/896d39ad19e1ff8d0ff0ea4bc169781cf4e2bae .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865555181" 
	@${RM} ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o.d" -o ${OBJECTDIR}/_ext/1865555181/plib_qspi_spi.o ../src/config/default/peripheral/qspi/plib_qspi_spi.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1865555181/plib_qspi.o: ../src/config/default/peripheral/qspi/plib_qspi.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/d5e44774d130d31080330ca46d1ad3a58b585f75 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1865555181" 
	@${RM} ${OBJECTDIR}/_ext/1865555181/plib_qspi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865555181/plib_qspi.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865555181/plib_qspi.o.d" -o ${OBJECTDIR}/_ext/1865555181/plib_qspi.o ../src/config/default/peripheral/qspi/plib_qspi.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1827571544/plib_systick.o: ../src/config/default/peripheral/systick/plib_systick.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/de0204d65fd48442a88fdac9dd9da3d246c1876 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1827571544" 
	@${RM} ${OBJECTDIR}/_ext/1827571544/plib_systick.o.d 
	@${RM} ${OBJECTDIR}/_ext/1827571544/plib_systick.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1827571544/plib_systick.o.d" -o ${OBJECTDIR}/_ext/1827571544/plib_systick.o ../src/config/default/peripheral/systick/plib_systick.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/163028504/xc32_monitor.o: ../src/config/default/stdio/xc32_monitor.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/84c8e5303ca1e4b1b4b8ce87519e5824589816ea .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/163028504" 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ../src/config/default/stdio/xc32_monitor.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1014039709/sys_cache.o: ../src/config/default/system/cache/sys_cache.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/27c5bcaf64bf7aca9229d70620d20b4f4712dbf6 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1014039709" 
	@${RM} ${OBJECTDIR}/_ext/1014039709/sys_cache.o.d 
	@${RM} ${OBJECTDIR}/_ext/1014039709/sys_cache.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1014039709/sys_cache.o.d" -o ${OBJECTDIR}/_ext/1014039709/sys_cache.o ../src/config/default/system/cache/sys_cache.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/14461671/sys_dma.o: ../src/config/default/system/dma/sys_dma.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/7a02fc0d2737cac11e4072e256e6c714f12bdf5f .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/14461671" 
	@${RM} ${OBJECTDIR}/_ext/14461671/sys_dma.o.d 
	@${RM} ${OBJECTDIR}/_ext/14461671/sys_dma.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/14461671/sys_dma.o.d" -o ${OBJECTDIR}/_ext/14461671/sys_dma.o ../src/config/default/system/dma/sys_dma.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1881668453/sys_int.o: ../src/config/default/system/int/src/sys_int.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/2427d6c0eb3543d849dff48dd765c4ca1d772ee .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1881668453" 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1881668453/sys_int.o.d" -o ${OBJECTDIR}/_ext/1881668453/sys_int.o ../src/config/default/system/int/src/sys_int.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/exceptions.o: ../src/config/default/exceptions.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/ed4dd7f7c3ba763aadf91ed74eda3bd6e91babb9 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/exceptions.o.d" -o ${OBJECTDIR}/_ext/1171490990/exceptions.o ../src/config/default/exceptions.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/initialization.o: ../src/config/default/initialization.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/a9a0f71bc7074d41c623c161587b687d90f2b3e4 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/initialization.o.d" -o ${OBJECTDIR}/_ext/1171490990/initialization.o ../src/config/default/initialization.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/interrupts.o: ../src/config/default/interrupts.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e7d88fe83a8484ec218df5144441adca65456532 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" -o ${OBJECTDIR}/_ext/1171490990/interrupts.o ../src/config/default/interrupts.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/libc_syscalls.o: ../src/config/default/libc_syscalls.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/cc51d664901951c2d08b16c0c6716291825530b .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/libc_syscalls.o.d" -o ${OBJECTDIR}/_ext/1171490990/libc_syscalls.o ../src/config/default/libc_syscalls.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/startup_xc32.o: ../src/config/default/startup_xc32.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/4ebc33ddb33a1ab50f052278b67a5c4f37073cf8 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/startup_xc32.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/startup_xc32.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/startup_xc32.o.d" -o ${OBJECTDIR}/_ext/1171490990/startup_xc32.o ../src/config/default/startup_xc32.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1171490990/tasks.o: ../src/config/default/tasks.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/b749278581d1a1ea150f5d66c4f487d434ce3d37 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/tasks.o.d" -o ${OBJECTDIR}/_ext/1171490990/tasks.o ../src/config/default/tasks.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/668003091/Drivers.o: ../../../../SOC_Portable/SAMD51_LAN9252/Drivers.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/257e3cb4fa75dece409541556cc8746dd0035a86 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/668003091" 
	@${RM} ${OBJECTDIR}/_ext/668003091/Drivers.o.d 
	@${RM} ${OBJECTDIR}/_ext/668003091/Drivers.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/668003091/Drivers.o.d" -o ${OBJECTDIR}/_ext/668003091/Drivers.o ../../../../SOC_Portable/SAMD51_LAN9252/Drivers.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108147519/ESC_Utils.o: ../../../../Source/ESC/ESC_Utils.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/190d1dcaaeb80f258563d857980f9d83884ec9cd .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108147519" 
	@${RM} ${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/108147519/ESC_Utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d" -o ${OBJECTDIR}/_ext/108147519/ESC_Utils.o ../../../../Source/ESC/ESC_Utils.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108147519/LAN925x.o: ../../../../Source/ESC/LAN925x.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/8762f602f5552cd9c6b168685698a4febc654867 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108147519" 
	@${RM} ${OBJECTDIR}/_ext/108147519/LAN925x.o.d 
	@${RM} ${OBJECTDIR}/_ext/108147519/LAN925x.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108147519/LAN925x.o.d" -o ${OBJECTDIR}/_ext/108147519/LAN925x.o ../../../../Source/ESC/LAN925x.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/bootmode.o: ../../../../Source/SSC/bootmode.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/fdcd322885ec2f6dc2b6df8299ee5b9cb91c5874 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/bootmode.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/bootmode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/bootmode.o.d" -o ${OBJECTDIR}/_ext/108134065/bootmode.o ../../../../Source/SSC/bootmode.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/coeappl.o: ../../../../Source/SSC/coeappl.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/bf5df5f1030159d014bf5d68d73cc8d79e0c4b3 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/coeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/coeappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/coeappl.o.d" -o ${OBJECTDIR}/_ext/108134065/coeappl.o ../../../../Source/SSC/coeappl.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/ecatappl.o: ../../../../Source/SSC/ecatappl.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/9786bc1bd270f8e6e672ebd1d43020ef455a1660 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatappl.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatappl.o ../../../../Source/SSC/ecatappl.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/ecatcoe.o: ../../../../Source/SSC/ecatcoe.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/30a588b214e7ad107b5496d36ded7bb4c90f1d16 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatcoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatcoe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatcoe.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatcoe.o ../../../../Source/SSC/ecatcoe.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/ecatfoe.o: ../../../../Source/SSC/ecatfoe.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/805b29f61e783a9abcda3e60fa4bd2a7d4f62222 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatfoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatfoe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatfoe.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatfoe.o ../../../../Source/SSC/ecatfoe.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/ecatslv.o: ../../../../Source/SSC/ecatslv.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/af02924e5c371ff7bdc4f967affaca6a8b41826e .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatslv.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatslv.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatslv.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatslv.o ../../../../Source/SSC/ecatslv.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/emcy.o: ../../../../Source/SSC/emcy.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/90b6c3cefc146ece3ca9fb9279029fc540d4f6 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/emcy.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/emcy.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/emcy.o.d" -o ${OBJECTDIR}/_ext/108134065/emcy.o ../../../../Source/SSC/emcy.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/foeappl.o: ../../../../Source/SSC/foeappl.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/95b4ccfb29da4a6e5d0c20415a67812acf464809 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/foeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/foeappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/foeappl.o.d" -o ${OBJECTDIR}/_ext/108134065/foeappl.o ../../../../Source/SSC/foeappl.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/mailbox.o: ../../../../Source/SSC/mailbox.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/463e1bfa03caaa865d7d4d5d9502f8cc5eb1186e .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/mailbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/mailbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/mailbox.o.d" -o ${OBJECTDIR}/_ext/108134065/mailbox.o ../../../../Source/SSC/mailbox.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/objdef.o: ../../../../Source/SSC/objdef.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/d0174195c91ad02bb4a95646b53f2ae3e9235421 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/objdef.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/objdef.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/objdef.o.d" -o ${OBJECTDIR}/_ext/108134065/objdef.o ../../../../Source/SSC/objdef.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/sample_app.o: ../../../../Source/SSC/sample_app.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/ec32959b231243302c1b67b1c4df5c14564bf6cb .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/sample_app.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/sample_app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/sample_app.o.d" -o ${OBJECTDIR}/_ext/108134065/sample_app.o ../../../../Source/SSC/sample_app.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/108134065/sdoserv.o: ../../../../Source/SSC/sdoserv.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/58521852bb9c34c2169ba65449482e49386af3a1 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/sdoserv.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/sdoserv.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/108134065/sdoserv.o.d" -o ${OBJECTDIR}/_ext/108134065/sdoserv.o ../../../../Source/SSC/sdoserv.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/4423c237a4a8ab77cdfaa8794aa697b494023140 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/824c9891f10ae72996e135130a9d4d20d80220eb .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/Developer_Test.o: ../src/Developer_Test.c  .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/b90402f86674583135ea0d56450fa5c924ffc009 .generated_files/flags/LAN9252_D51_SPI_Indirect_mode/e6e298b3b0156ed14181924f788977424cd26c9
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/Developer_Test.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -DDC_SUPPORTED -DINDIRECT_MODE -DESF_PDI=SPI -DSPI=1 -DSQI=0 -I"../src/config/default/peripheral" -I"../src/config/default/system/int/src" -I"../src/config/default/system/ports" -I"../src/packs/ATSAMD51J19A_DFP/component" -I"../src/packs/ATSAMD51J19A_DFP/pio" -I"../src/packs/ATSAMD51J19A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/config/default" -I"../src" -I"../../../../Source/ESC" -I"../../../../SOC_Portable/SAMD51_LAN9252" -I"../../../../Source/SSC" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d" -o ${OBJECTDIR}/_ext/1360937237/Developer_Test.o ../src/Developer_Test.c    -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd51a" ${PACK_COMMON_OPTIONS} 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/ESF_EVB_LAN9252.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g   -mprocessor=$(MP_PROCESSOR_OPTION) -mno-device-startup-code -o ${DISTDIR}/ESF_EVB_LAN9252.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=_min_heap_size=512,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}/samd51a"
	
else
${DISTDIR}/ESF_EVB_LAN9252.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION) -mno-device-startup-code -o ${DISTDIR}/ESF_EVB_LAN9252.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_LAN9252_D51_SPI_Indirect_mode=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}/samd51a"
	${MP_CC_DIR}\\xc32-bin2hex ${DISTDIR}/ESF_EVB_LAN9252.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
