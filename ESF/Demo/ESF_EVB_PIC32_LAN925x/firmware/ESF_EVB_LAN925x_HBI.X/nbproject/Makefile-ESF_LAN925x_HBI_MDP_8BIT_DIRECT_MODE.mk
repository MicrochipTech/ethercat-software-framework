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
ifeq "$(wildcard nbproject/Makefile-local-ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE.mk)" "nbproject/Makefile-local-ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE.mk"
include nbproject/Makefile-local-ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE
MACRO1=gcc -std=c99 foo.c -o foo
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/ESF_EVB_LAN925x_HBI.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/ESF_EVB_LAN925x_HBI.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
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
SOURCEFILES_QUOTED_IF_SPACED=../src/config/default/stdio/xc32_monitor.c ../src/config/default/initialization.c ../src/config/default/interrupts.c ../src/config/default/exceptions.c ../src/config/default/tasks.c ../../../../SOC_Portable/PIC32/Drivers.c ../../../../Source/ESC/ESC_Utils.c ../../../../Source/ESC/LAN925x.c ../../../../Source/SSC/bootmode.c ../../../../Source/SSC/coeappl.c ../../../../Source/SSC/ecatappl.c ../../../../Source/SSC/ecatcoe.c ../../../../Source/SSC/ecatfoe.c ../../../../Source/SSC/ecatslv.c ../../../../Source/SSC/emcy.c ../../../../Source/SSC/foeappl.c ../../../../Source/SSC/mailbox.c ../../../../Source/SSC/objdef.c ../../../../Source/SSC/sample_app.c ../../../../Source/SSC/sdoserv.c ../src/main.c ../src/app.c ../src/Developer_Test.c ../src/config/default/peripheral/clk/plib_clk.c ../src/config/default/peripheral/coretimer/plib_coretimer.c ../src/config/default/peripheral/evic/plib_evic.c ../src/config/default/peripheral/gpio/plib_gpio.c ../src/config/default/peripheral/pmp/plib_pmp.c ../src/config/default/peripheral/tmr1/plib_tmr1.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/163028504/xc32_monitor.o ${OBJECTDIR}/_ext/1171490990/initialization.o ${OBJECTDIR}/_ext/1171490990/interrupts.o ${OBJECTDIR}/_ext/1171490990/exceptions.o ${OBJECTDIR}/_ext/1171490990/tasks.o ${OBJECTDIR}/_ext/610655027/Drivers.o ${OBJECTDIR}/_ext/108147519/ESC_Utils.o ${OBJECTDIR}/_ext/108147519/LAN925x.o ${OBJECTDIR}/_ext/108134065/bootmode.o ${OBJECTDIR}/_ext/108134065/coeappl.o ${OBJECTDIR}/_ext/108134065/ecatappl.o ${OBJECTDIR}/_ext/108134065/ecatcoe.o ${OBJECTDIR}/_ext/108134065/ecatfoe.o ${OBJECTDIR}/_ext/108134065/ecatslv.o ${OBJECTDIR}/_ext/108134065/emcy.o ${OBJECTDIR}/_ext/108134065/foeappl.o ${OBJECTDIR}/_ext/108134065/mailbox.o ${OBJECTDIR}/_ext/108134065/objdef.o ${OBJECTDIR}/_ext/108134065/sample_app.o ${OBJECTDIR}/_ext/108134065/sdoserv.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/Developer_Test.o ${OBJECTDIR}/_ext/60165520/plib_clk.o ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o ${OBJECTDIR}/_ext/1865200349/plib_evic.o ${OBJECTDIR}/_ext/1865254177/plib_gpio.o ${OBJECTDIR}/_ext/60178049/plib_pmp.o ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d ${OBJECTDIR}/_ext/1171490990/initialization.o.d ${OBJECTDIR}/_ext/1171490990/interrupts.o.d ${OBJECTDIR}/_ext/1171490990/exceptions.o.d ${OBJECTDIR}/_ext/1171490990/tasks.o.d ${OBJECTDIR}/_ext/610655027/Drivers.o.d ${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d ${OBJECTDIR}/_ext/108147519/LAN925x.o.d ${OBJECTDIR}/_ext/108134065/bootmode.o.d ${OBJECTDIR}/_ext/108134065/coeappl.o.d ${OBJECTDIR}/_ext/108134065/ecatappl.o.d ${OBJECTDIR}/_ext/108134065/ecatcoe.o.d ${OBJECTDIR}/_ext/108134065/ecatfoe.o.d ${OBJECTDIR}/_ext/108134065/ecatslv.o.d ${OBJECTDIR}/_ext/108134065/emcy.o.d ${OBJECTDIR}/_ext/108134065/foeappl.o.d ${OBJECTDIR}/_ext/108134065/mailbox.o.d ${OBJECTDIR}/_ext/108134065/objdef.o.d ${OBJECTDIR}/_ext/108134065/sample_app.o.d ${OBJECTDIR}/_ext/108134065/sdoserv.o.d ${OBJECTDIR}/_ext/1360937237/main.o.d ${OBJECTDIR}/_ext/1360937237/app.o.d ${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d ${OBJECTDIR}/_ext/60165520/plib_clk.o.d ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o.d ${OBJECTDIR}/_ext/1865200349/plib_evic.o.d ${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d ${OBJECTDIR}/_ext/60178049/plib_pmp.o.d ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/163028504/xc32_monitor.o ${OBJECTDIR}/_ext/1171490990/initialization.o ${OBJECTDIR}/_ext/1171490990/interrupts.o ${OBJECTDIR}/_ext/1171490990/exceptions.o ${OBJECTDIR}/_ext/1171490990/tasks.o ${OBJECTDIR}/_ext/610655027/Drivers.o ${OBJECTDIR}/_ext/108147519/ESC_Utils.o ${OBJECTDIR}/_ext/108147519/LAN925x.o ${OBJECTDIR}/_ext/108134065/bootmode.o ${OBJECTDIR}/_ext/108134065/coeappl.o ${OBJECTDIR}/_ext/108134065/ecatappl.o ${OBJECTDIR}/_ext/108134065/ecatcoe.o ${OBJECTDIR}/_ext/108134065/ecatfoe.o ${OBJECTDIR}/_ext/108134065/ecatslv.o ${OBJECTDIR}/_ext/108134065/emcy.o ${OBJECTDIR}/_ext/108134065/foeappl.o ${OBJECTDIR}/_ext/108134065/mailbox.o ${OBJECTDIR}/_ext/108134065/objdef.o ${OBJECTDIR}/_ext/108134065/sample_app.o ${OBJECTDIR}/_ext/108134065/sdoserv.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/Developer_Test.o ${OBJECTDIR}/_ext/60165520/plib_clk.o ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o ${OBJECTDIR}/_ext/1865200349/plib_evic.o ${OBJECTDIR}/_ext/1865254177/plib_gpio.o ${OBJECTDIR}/_ext/60178049/plib_pmp.o ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o

# Source Files
SOURCEFILES=../src/config/default/stdio/xc32_monitor.c ../src/config/default/initialization.c ../src/config/default/interrupts.c ../src/config/default/exceptions.c ../src/config/default/tasks.c ../../../../SOC_Portable/PIC32/Drivers.c ../../../../Source/ESC/ESC_Utils.c ../../../../Source/ESC/LAN925x.c ../../../../Source/SSC/bootmode.c ../../../../Source/SSC/coeappl.c ../../../../Source/SSC/ecatappl.c ../../../../Source/SSC/ecatcoe.c ../../../../Source/SSC/ecatfoe.c ../../../../Source/SSC/ecatslv.c ../../../../Source/SSC/emcy.c ../../../../Source/SSC/foeappl.c ../../../../Source/SSC/mailbox.c ../../../../Source/SSC/objdef.c ../../../../Source/SSC/sample_app.c ../../../../Source/SSC/sdoserv.c ../src/main.c ../src/app.c ../src/Developer_Test.c ../src/config/default/peripheral/clk/plib_clk.c ../src/config/default/peripheral/coretimer/plib_coretimer.c ../src/config/default/peripheral/evic/plib_evic.c ../src/config/default/peripheral/gpio/plib_gpio.c ../src/config/default/peripheral/pmp/plib_pmp.c ../src/config/default/peripheral/tmr1/plib_tmr1.c



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
	${MAKE}  -f nbproject/Makefile-ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE.mk dist/${CND_CONF}/${IMAGE_TYPE}/ESF_EVB_LAN925x_HBI.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX795F512L
MP_LINKER_FILE_OPTION=,--script="..\src\config\default\p32MX795F512L.ld"
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
${OBJECTDIR}/_ext/163028504/xc32_monitor.o: ../src/config/default/stdio/xc32_monitor.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/163028504" 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ../src/config/default/stdio/xc32_monitor.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1171490990/initialization.o: ../src/config/default/initialization.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1171490990/initialization.o.d" -o ${OBJECTDIR}/_ext/1171490990/initialization.o ../src/config/default/initialization.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/initialization.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1171490990/interrupts.o: ../src/config/default/interrupts.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" -o ${OBJECTDIR}/_ext/1171490990/interrupts.o ../src/config/default/interrupts.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1171490990/exceptions.o: ../src/config/default/exceptions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1171490990/exceptions.o.d" -o ${OBJECTDIR}/_ext/1171490990/exceptions.o ../src/config/default/exceptions.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/exceptions.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1171490990/tasks.o: ../src/config/default/tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1171490990/tasks.o.d" -o ${OBJECTDIR}/_ext/1171490990/tasks.o ../src/config/default/tasks.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/610655027/Drivers.o: ../../../../SOC_Portable/PIC32/Drivers.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/610655027" 
	@${RM} ${OBJECTDIR}/_ext/610655027/Drivers.o.d 
	@${RM} ${OBJECTDIR}/_ext/610655027/Drivers.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/610655027/Drivers.o.d" -o ${OBJECTDIR}/_ext/610655027/Drivers.o ../../../../SOC_Portable/PIC32/Drivers.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/610655027/Drivers.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108147519/ESC_Utils.o: ../../../../Source/ESC/ESC_Utils.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108147519" 
	@${RM} ${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/108147519/ESC_Utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d" -o ${OBJECTDIR}/_ext/108147519/ESC_Utils.o ../../../../Source/ESC/ESC_Utils.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108147519/LAN925x.o: ../../../../Source/ESC/LAN925x.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108147519" 
	@${RM} ${OBJECTDIR}/_ext/108147519/LAN925x.o.d 
	@${RM} ${OBJECTDIR}/_ext/108147519/LAN925x.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108147519/LAN925x.o.d" -o ${OBJECTDIR}/_ext/108147519/LAN925x.o ../../../../Source/ESC/LAN925x.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108147519/LAN925x.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/bootmode.o: ../../../../Source/SSC/bootmode.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/bootmode.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/bootmode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/bootmode.o.d" -o ${OBJECTDIR}/_ext/108134065/bootmode.o ../../../../Source/SSC/bootmode.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/bootmode.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/coeappl.o: ../../../../Source/SSC/coeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/coeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/coeappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/coeappl.o.d" -o ${OBJECTDIR}/_ext/108134065/coeappl.o ../../../../Source/SSC/coeappl.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/coeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/ecatappl.o: ../../../../Source/SSC/ecatappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatappl.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatappl.o ../../../../Source/SSC/ecatappl.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/ecatappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/ecatcoe.o: ../../../../Source/SSC/ecatcoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatcoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatcoe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatcoe.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatcoe.o ../../../../Source/SSC/ecatcoe.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/ecatcoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/ecatfoe.o: ../../../../Source/SSC/ecatfoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatfoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatfoe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatfoe.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatfoe.o ../../../../Source/SSC/ecatfoe.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/ecatfoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/ecatslv.o: ../../../../Source/SSC/ecatslv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatslv.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatslv.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatslv.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatslv.o ../../../../Source/SSC/ecatslv.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/ecatslv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/emcy.o: ../../../../Source/SSC/emcy.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/emcy.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/emcy.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/emcy.o.d" -o ${OBJECTDIR}/_ext/108134065/emcy.o ../../../../Source/SSC/emcy.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/emcy.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/foeappl.o: ../../../../Source/SSC/foeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/foeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/foeappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/foeappl.o.d" -o ${OBJECTDIR}/_ext/108134065/foeappl.o ../../../../Source/SSC/foeappl.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/foeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/mailbox.o: ../../../../Source/SSC/mailbox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/mailbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/mailbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/mailbox.o.d" -o ${OBJECTDIR}/_ext/108134065/mailbox.o ../../../../Source/SSC/mailbox.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/mailbox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/objdef.o: ../../../../Source/SSC/objdef.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/objdef.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/objdef.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/objdef.o.d" -o ${OBJECTDIR}/_ext/108134065/objdef.o ../../../../Source/SSC/objdef.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/objdef.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/sample_app.o: ../../../../Source/SSC/sample_app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/sample_app.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/sample_app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/sample_app.o.d" -o ${OBJECTDIR}/_ext/108134065/sample_app.o ../../../../Source/SSC/sample_app.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/sample_app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/sdoserv.o: ../../../../Source/SSC/sdoserv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/sdoserv.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/sdoserv.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/sdoserv.o.d" -o ${OBJECTDIR}/_ext/108134065/sdoserv.o ../../../../Source/SSC/sdoserv.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/sdoserv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1360937237/Developer_Test.o: ../src/Developer_Test.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/Developer_Test.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d" -o ${OBJECTDIR}/_ext/1360937237/Developer_Test.o ../src/Developer_Test.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/60165520/plib_clk.o: ../src/config/default/peripheral/clk/plib_clk.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/60165520" 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/60165520/plib_clk.o.d" -o ${OBJECTDIR}/_ext/60165520/plib_clk.o ../src/config/default/peripheral/clk/plib_clk.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/60165520/plib_clk.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1249264884/plib_coretimer.o: ../src/config/default/peripheral/coretimer/plib_coretimer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1249264884" 
	@${RM} ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1249264884/plib_coretimer.o.d" -o ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o ../src/config/default/peripheral/coretimer/plib_coretimer.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1249264884/plib_coretimer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1865200349/plib_evic.o: ../src/config/default/peripheral/evic/plib_evic.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1865200349" 
	@${RM} ${OBJECTDIR}/_ext/1865200349/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865200349/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1865200349/plib_evic.o.d" -o ${OBJECTDIR}/_ext/1865200349/plib_evic.o ../src/config/default/peripheral/evic/plib_evic.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1865200349/plib_evic.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1865254177/plib_gpio.o: ../src/config/default/peripheral/gpio/plib_gpio.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1865254177" 
	@${RM} ${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865254177/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d" -o ${OBJECTDIR}/_ext/1865254177/plib_gpio.o ../src/config/default/peripheral/gpio/plib_gpio.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/60178049/plib_pmp.o: ../src/config/default/peripheral/pmp/plib_pmp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/60178049" 
	@${RM} ${OBJECTDIR}/_ext/60178049/plib_pmp.o.d 
	@${RM} ${OBJECTDIR}/_ext/60178049/plib_pmp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/60178049/plib_pmp.o.d" -o ${OBJECTDIR}/_ext/60178049/plib_pmp.o ../src/config/default/peripheral/pmp/plib_pmp.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/60178049/plib_pmp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1865638794/plib_tmr1.o: ../src/config/default/peripheral/tmr1/plib_tmr1.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1865638794" 
	@${RM} ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1865638794/plib_tmr1.o.d" -o ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o ../src/config/default/peripheral/tmr1/plib_tmr1.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1865638794/plib_tmr1.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
else
${OBJECTDIR}/_ext/163028504/xc32_monitor.o: ../src/config/default/stdio/xc32_monitor.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/163028504" 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ../src/config/default/stdio/xc32_monitor.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1171490990/initialization.o: ../src/config/default/initialization.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1171490990/initialization.o.d" -o ${OBJECTDIR}/_ext/1171490990/initialization.o ../src/config/default/initialization.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/initialization.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1171490990/interrupts.o: ../src/config/default/interrupts.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" -o ${OBJECTDIR}/_ext/1171490990/interrupts.o ../src/config/default/interrupts.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1171490990/exceptions.o: ../src/config/default/exceptions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1171490990/exceptions.o.d" -o ${OBJECTDIR}/_ext/1171490990/exceptions.o ../src/config/default/exceptions.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/exceptions.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1171490990/tasks.o: ../src/config/default/tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1171490990/tasks.o.d" -o ${OBJECTDIR}/_ext/1171490990/tasks.o ../src/config/default/tasks.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/610655027/Drivers.o: ../../../../SOC_Portable/PIC32/Drivers.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/610655027" 
	@${RM} ${OBJECTDIR}/_ext/610655027/Drivers.o.d 
	@${RM} ${OBJECTDIR}/_ext/610655027/Drivers.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/610655027/Drivers.o.d" -o ${OBJECTDIR}/_ext/610655027/Drivers.o ../../../../SOC_Portable/PIC32/Drivers.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/610655027/Drivers.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108147519/ESC_Utils.o: ../../../../Source/ESC/ESC_Utils.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108147519" 
	@${RM} ${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/108147519/ESC_Utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d" -o ${OBJECTDIR}/_ext/108147519/ESC_Utils.o ../../../../Source/ESC/ESC_Utils.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108147519/ESC_Utils.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108147519/LAN925x.o: ../../../../Source/ESC/LAN925x.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108147519" 
	@${RM} ${OBJECTDIR}/_ext/108147519/LAN925x.o.d 
	@${RM} ${OBJECTDIR}/_ext/108147519/LAN925x.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108147519/LAN925x.o.d" -o ${OBJECTDIR}/_ext/108147519/LAN925x.o ../../../../Source/ESC/LAN925x.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108147519/LAN925x.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/bootmode.o: ../../../../Source/SSC/bootmode.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/bootmode.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/bootmode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/bootmode.o.d" -o ${OBJECTDIR}/_ext/108134065/bootmode.o ../../../../Source/SSC/bootmode.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/bootmode.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/coeappl.o: ../../../../Source/SSC/coeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/coeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/coeappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/coeappl.o.d" -o ${OBJECTDIR}/_ext/108134065/coeappl.o ../../../../Source/SSC/coeappl.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/coeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/ecatappl.o: ../../../../Source/SSC/ecatappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatappl.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatappl.o ../../../../Source/SSC/ecatappl.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/ecatappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/ecatcoe.o: ../../../../Source/SSC/ecatcoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatcoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatcoe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatcoe.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatcoe.o ../../../../Source/SSC/ecatcoe.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/ecatcoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/ecatfoe.o: ../../../../Source/SSC/ecatfoe.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatfoe.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatfoe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatfoe.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatfoe.o ../../../../Source/SSC/ecatfoe.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/ecatfoe.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/ecatslv.o: ../../../../Source/SSC/ecatslv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatslv.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/ecatslv.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/ecatslv.o.d" -o ${OBJECTDIR}/_ext/108134065/ecatslv.o ../../../../Source/SSC/ecatslv.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/ecatslv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/emcy.o: ../../../../Source/SSC/emcy.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/emcy.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/emcy.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/emcy.o.d" -o ${OBJECTDIR}/_ext/108134065/emcy.o ../../../../Source/SSC/emcy.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/emcy.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/foeappl.o: ../../../../Source/SSC/foeappl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/foeappl.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/foeappl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/foeappl.o.d" -o ${OBJECTDIR}/_ext/108134065/foeappl.o ../../../../Source/SSC/foeappl.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/foeappl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/mailbox.o: ../../../../Source/SSC/mailbox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/mailbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/mailbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/mailbox.o.d" -o ${OBJECTDIR}/_ext/108134065/mailbox.o ../../../../Source/SSC/mailbox.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/mailbox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/objdef.o: ../../../../Source/SSC/objdef.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/objdef.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/objdef.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/objdef.o.d" -o ${OBJECTDIR}/_ext/108134065/objdef.o ../../../../Source/SSC/objdef.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/objdef.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/sample_app.o: ../../../../Source/SSC/sample_app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/sample_app.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/sample_app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/sample_app.o.d" -o ${OBJECTDIR}/_ext/108134065/sample_app.o ../../../../Source/SSC/sample_app.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/sample_app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/108134065/sdoserv.o: ../../../../Source/SSC/sdoserv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/108134065" 
	@${RM} ${OBJECTDIR}/_ext/108134065/sdoserv.o.d 
	@${RM} ${OBJECTDIR}/_ext/108134065/sdoserv.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/108134065/sdoserv.o.d" -o ${OBJECTDIR}/_ext/108134065/sdoserv.o ../../../../Source/SSC/sdoserv.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/108134065/sdoserv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1360937237/Developer_Test.o: ../src/Developer_Test.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/Developer_Test.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d" -o ${OBJECTDIR}/_ext/1360937237/Developer_Test.o ../src/Developer_Test.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/Developer_Test.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/60165520/plib_clk.o: ../src/config/default/peripheral/clk/plib_clk.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/60165520" 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/60165520/plib_clk.o.d" -o ${OBJECTDIR}/_ext/60165520/plib_clk.o ../src/config/default/peripheral/clk/plib_clk.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/60165520/plib_clk.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1249264884/plib_coretimer.o: ../src/config/default/peripheral/coretimer/plib_coretimer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1249264884" 
	@${RM} ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1249264884/plib_coretimer.o.d" -o ${OBJECTDIR}/_ext/1249264884/plib_coretimer.o ../src/config/default/peripheral/coretimer/plib_coretimer.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1249264884/plib_coretimer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1865200349/plib_evic.o: ../src/config/default/peripheral/evic/plib_evic.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1865200349" 
	@${RM} ${OBJECTDIR}/_ext/1865200349/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865200349/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1865200349/plib_evic.o.d" -o ${OBJECTDIR}/_ext/1865200349/plib_evic.o ../src/config/default/peripheral/evic/plib_evic.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1865200349/plib_evic.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1865254177/plib_gpio.o: ../src/config/default/peripheral/gpio/plib_gpio.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1865254177" 
	@${RM} ${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865254177/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d" -o ${OBJECTDIR}/_ext/1865254177/plib_gpio.o ../src/config/default/peripheral/gpio/plib_gpio.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/60178049/plib_pmp.o: ../src/config/default/peripheral/pmp/plib_pmp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/60178049" 
	@${RM} ${OBJECTDIR}/_ext/60178049/plib_pmp.o.d 
	@${RM} ${OBJECTDIR}/_ext/60178049/plib_pmp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/60178049/plib_pmp.o.d" -o ${OBJECTDIR}/_ext/60178049/plib_pmp.o ../src/config/default/peripheral/pmp/plib_pmp.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/60178049/plib_pmp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1865638794/plib_tmr1.o: ../src/config/default/peripheral/tmr1/plib_tmr1.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1865638794" 
	@${RM} ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -DDIRECT_MODE -DDC_SUPPORTED -DESF_PDI=HBI -DHBI=1 -DHBI_MDP_8BIT -I"../src" -I"../src/config/default" -I"../src/packs/PIC32MX_DFP" -I"../src/packs/PIC32MX795F512L_DFP" -I"../../../../SOC_Portable/PIC32" -I"../../../../Source/ESC" -I"../../../../Source/SSC" -MMD -MF "${OBJECTDIR}/_ext/1865638794/plib_tmr1.o.d" -o ${OBJECTDIR}/_ext/1865638794/plib_tmr1.o ../src/config/default/peripheral/tmr1/plib_tmr1.c    -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  $(COMPARISON_BUILD)  -std=c99 -mdfp="${DFP_DIR}"  
	@${FIXDEPS} "${OBJECTDIR}/_ext/1865638794/plib_tmr1.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/ESF_EVB_LAN925x_HBI.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    ../src/config/default/p32MX795F512L.ld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g -mdebugger -D__MPLAB_DEBUGGER_PK3=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/ESF_EVB_LAN925x_HBI.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  -std=c99 $(COMPARISON_BUILD)   -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC024FF  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_PK3=1,--defsym=_min_heap_size=512,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp="${DFP_DIR}"
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/ESF_EVB_LAN925x_HBI.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   ../src/config/default/p32MX795F512L.ld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/ESF_EVB_LAN925x_HBI.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE=$(CND_CONF)  -legacy-libc  -std=c99 $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp="${DFP_DIR}"
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/ESF_EVB_LAN925x_HBI.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE
	${RM} -r dist/ESF_LAN925x_HBI_MDP_8BIT_DIRECT_MODE

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
