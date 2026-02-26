########################################################################################################################
# File Name  : Makefile
# Description: Local main project Makefile
# Project    : Vector Basic Runtime System
# Module     : BrsHw for platform Renesas RH850
#              and Compiler GreenHills,
#              using Vector PES MakeSupport 4.1
# Template   : This Makefile is reviewed according to Brs_Template@MakeSupport[1.01.04]
#
#-----------------------------------------------------------------------------------------------------------------------
# COPYRIGHT
#-----------------------------------------------------------------------------------------------------------------------
# Copyright (c) 2024 by Vector Informatik GmbH.                                                  All rights reserved.
#
#-----------------------------------------------------------------------------------------------------------------------
# REVISION HISTORY
#-----------------------------------------------------------------------------------------------------------------------
# Version   Date        Author  Description
# --------  ----------  ------  ----------------------------------------------------------------------------------------
# 01.00.00  2020-05-18  visbwa  New branch for vBaseEnv 2.0, based on zBrs_Rh850 Makefile@GreenHills 5.02.08
# 01.01.00  2021-09-30  visjhr  HALBE-4583 Update all MakeSupport subpackages to Brs_Template 1.01.00
#           2022-02-14  visbwa  Update to Brs_Template@MakeSupport 1.01.01
# 01.01.01  2022-10-11  visbwa  Update to Brs_Template 1.01.02, fixed COMPILER_SUPPORTS_DEPEND support
# 01.01.02  2023-01-11  visqli  Moved PROJECT_NAME to Makefile.static and included Makefile.static forwards,
#                               enabled generation of PROJECT_NAME and LINKER_COMMAND_FILE
# 01.01.03  2023-03-03  visbwa  Changed default compiler from comp_201715 to comp_201855
# 01.01.04  2023-03-31  visbwa  Fixed eserv command for several x2x derivatives, changed license server to vistrlic17
# 01.01.05  2023-05-09  sgj     Fixed compiler flags for FPU usage (handling of generated FPU_USED)
# 01.01.06  2024-06-24  kal     Explicitly set CFLGS_VECTOR_OPTIONS to support C99
# 01.01.07  2024-11-25  kal     Set LDFLAGS_RESPONSE_FILE by default
# 01.01.16  2025-01-20  mna     Add G4KH core to supported cores
# 01.01.17  2025-01-20  mna     Adjust compile option for small data handling for hypervisor support
########################################################################################################################

########################################################################################################################
# EXAMPLE CODE ONLY
#-----------------------------------------------------------------------------------------------------------------------
# This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
# The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
# intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
# implementations must be tested with diligent care and must comply with all quality requirements which are necessary
# according to the state of the art before their use.
########################################################################################################################

#------------------------------------------------------------------------------
# Static settings placed inside separate file
#------------------------------------------------------------------------------
include Makefile.static

#------------------------------------------------------------------------------
# Name of linker file
#
# If BRS_LINKER_COMMAND_FILE_POSTFIX (derived from referenced vLinGen variant
# vBRS/vBRSGeneral/vBRSVariantUsageOfvLinkGen) was generated into
# Makefile.config.generated (by vBRS Cfg5 generator), use that file.
#------------------------------------------------------------------------------
ifeq ($(BRS_LINKER_COMMAND_FILE_POSTFIX),)
LINKER_COMMAND_FILE = ../../DemoFbl/Appl/Source/vLinkGen_Template_$(PROJECT_NAME).ld
else
LINKER_COMMAND_FILE = ../../DemoFbl/Appl/Source/vLinkGen_Template_$(BRS_LINKER_COMMAND_FILE_POSTFIX).ld
endif

#------------------------------------------------------------------------------
# Define Compiler path, e.g.
#   COMPILER_BASE_WIN = D:\uti\%vendor%\%platform%\%version% (\ can be used)
#   COMPILER_BASE    := $(subst \,/,$(COMPILER_BASE_WIN)) (\ is converted to /)
#   COMPILER_BIN      = $(COMPILER_BASE)/bin
#   COMPILER_INC      = $(COMPILER_BASE)/inc
#   COMPILER_LIB      = $(COMPILER_BASE)/lib
#
# If BRS_COMPILER_PATH (vBRS/vBRSHwConfig/vBRSCompilerPath) was generated into
# Makefile.config.generated (by vBRS Cfg5 generator), use that path.
#------------------------------------------------------------------------------
ifeq ($(BRS_COMPILER_PATH),)
COMPILER_BASE_WIN = C:\uti\GHS\RH850\comp_201517
else
COMPILER_BASE_WIN = $(BRS_COMPILER_PATH)
endif
COMPILER_BASE    := $(subst \,/,$(COMPILER_BASE_WIN))
COMPILER_BIN      = $(COMPILER_BASE)
COMPILER_INC      = $(COMPILER_BASE)/ansi $(COMPILER_BASE)/include/v800
COMPILER_LIB      = $(COMPILER_BASE)/lib/rh850

#------------------------------------------------------------------------------
# Select the path of the device file
#------------------------------------------------------------------------------
DEVICE_FILE_FOLDER = $(COMPILER_BASE)/rh850

#------------------------------------------------------------------------------
# To be able to communicate with the debugger, it needs a device file.
# Device files for GHS can be found at
# \\vi.vector.int\backup\PES\DevelopmentTools\EmuAndDebugger\RH850\GettingStartedPaket_(DeviceFile)
#
# Example: dr7f7010352afp
#          use dr7f701312 for R7F701353
#
# And for CS+, Device files can be found at:
# $(EMU_PATH)\Device\RH850
#
# For further informations read in OneNote: Debugging RH850 with Renesas Cube Suite +
# Example: R7F701034xAFP_common.xml
#          use R7F701034xAFP for R7F701034
#
# The default value is related to the DERIVATIVE, generated into Makefile.config.generated,
# and should fit for GHS multi usage.
#------------------------------------------------------------------------------
ifeq ($(BRS_ENABLE_HSM_SUPPORT),1)
 ifeq ($(DERIVATIVE),RH850_2Z19)
  DEVICE_FILE_NAME = dr7f$(subst RH850_,70,$(DERIVATIVE)ai)
 else
  DEVICE_FILE_NAME = dr7f$(subst RH850_,70,$(DERIVATIVE)i)
  endif
else
  DEVICE_FILE_NAME = dr7f$(subst RH850_,70,$(DERIVATIVE))
endif

#------------------------------------------------------------------------------
# Select the path of the Multi IDE
#------------------------------------------------------------------------------
MULTI_BASE = D:/uti/GHS/RH850/multi_716

#------------------------------------------------------------------------------
# Build Options Selection: VECTOR / CUSTOMER
#------------------------------------------------------------------------------
ASFLAGS_SELECTOR  = VECTOR
CFLAGS_SELECTOR   = VECTOR
LDFLAGS_SELECTOR  = VECTOR

#------------------------------------------------------------------------------
# Default license server and port for the Multi IDE
#------------------------------------------------------------------------------
LICENSE_SERVER      = vistrlic17
LICENSE_SERVER_PORT = 2009

#------------------------------------------------------------------------------
# Define Emulator path
# E.g.: EMU_PATH = C:/UTI/HITOPWIN/P6811
#
# This parameter is not mandatory. It is used for some platforms, to provide
# e.g. debug connect scripts (e.g. multi within RH850).
#------------------------------------------------------------------------------
ifeq ($(EMU_PATH),)
EMU_PATH = $(COMPILER_BASE)
endif

#------------------------------------------------------------------------------
# Set $(NANT_USED) to '1', to enable the usage of NAnt support within
# Global Makefile. If this is enabled, the MakeSupport will include the
# NAnt support from an internal link and the NAnt build targets can be used.
#------------------------------------------------------------------------------
#NANT_USED = 1

#------------------------------------------------------------------------------
# Set MKVERBOSE to a various value, to enable enhanced debug output from
# MakeSupport. To disable this afterwards, set MKVERBOSE to nothing
# (comment out this line and type "set MKVERBOSE=" in command window)
#------------------------------------------------------------------------------
#MKVERBOSE = 1

#------------------------------------------------------------------------------
# Set $(BRSVINFO_USED) to 1 to enable the generation of BrsVInfo.h within the
# GenData folder by the MakeSupport.
# The BrsVInfo.h will contain e.g. kBrsCompilerVersion, to use this
# information within the embedded code.
#------------------------------------------------------------------------------
#BRSVINFO_USED = 1

#------------------------------------------------------------------------------
# Set $(USE_RESPONSE_FILE_FOR_LINKAGE) to '1' to pass object files in a response file
# to the linker instead of using the command line.
#
# Use it if you hit the limit of maximum length command line length under Windows.
#
# See e.g. the following link regarding some information on response files:
# https://gcc.gnu.org/wiki/Response_Files
#
# If you enable 'USE_RESPONSE_FILE_FOR_LINKAGE', you also need to define
# 'LDFLAGS_RESPONSE_FILE' in Makefile.static.
#------------------------------------------------------------------------------
#USE_RESPONSE_FILE_FOR_LINKAGE=1

#------------------------------------------------------------------------------
# Functions used within Assembler/Compiler/Linker options.
#
# Common functionality is encapsulated in the following functions:
# - obj2err
# - obj2lst
#
# Example:
# --list-file=$(call obj2lst,$@)
# --error-file=$(call obj2err,$@)
#
# Please have a look at Makefile_functions.mk for further detailed information.
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# Extra dependency defines
# The DEPEND tool which is normally a preprocessor
# is called with $(EXTRA_DEPENDFLAGS) and $(CPPFLAGS).
#
# The cross compiler adds its own defines which DEPEND
# doesn't know.
#
# Add cross options set by compiler and other options
# for the preprocessor here.
# e.g.: EXTRA_DEPENDFLAGS += -D__CTC__
#
# For normal build defines use $(CPPFLAGS_VECTOR_MAKESUPPORT).
#------------------------------------------------------------------------------
EXTRA_DEPENDFLAGS +=

ifeq ($(CPU_CORE), G3M)
GHS_CPU_SWITCH = rh850g3m
endif

ifeq ($(CPU_CORE), G3K)
GHS_CPU_SWITCH = rh850g3k
endif

ifeq ($(CPU_CORE), G3KH)
GHS_CPU_SWITCH = rh850g3kh
endif

ifeq ($(CPU_CORE), G4MH)
GHS_CPU_SWITCH = rh850g4mh
endif

ifeq ($(CPU_CORE), G4KH)
GHS_CPU_SWITCH = rh850g4kh
endif

ifeq ($(CPU_CORE),)
$(error Your core is not supported.) 
endif

#------------------------------------------------------------------------------
# $(AS_ENV) is the environment necessary to run the assembler
# $(AS) defines the path to the assembler
# $(ASFLAGS_VECTOR_MAKESUPPORT) defines all assembler switches, mandatory for
#                               the Vector build environment (MakeSupport/BrsHw)
# $(ASFLAGS_VECTOR_OPTIONS) defines the Vector default assembler switches
# $(ASFLAGS_CUSTOMER_OPTIONS) defines the customer requested assembler switches
# Depending of ASFLAGS_SELECTOR, ASFLAGS_VECTOR_OPTIONS or ASFLAGS_CUSTOMER_OPTIONS
# are used together with $(ASFLAGS_VECTOR_MAKESUPPORT) for build.
#------------------------------------------------------------------------------
AS_ENV = $(CC_ENV)
AS     = $(CC)

#------------------------------------------------------------------------------
# Please add only absolutely mandatory options below
#------------------------------------------------------------------------------
ASFLAGS_VECTOR_MAKESUPPORT = -o $@ \
                             -c -preprocess_assembly_files

#------------------------------------------------------------------------------
# $(ASFLAGS_VECTOR_PREPROCESS) defines the options in preprocessing
# just before assembler starts. This flag is used only if
# AS_VECTOR_PREPROCESS (located in Makefile.static) is enabled.
#
# $(CPPFLAGS_CORE) can be added here.
#------------------------------------------------------------------------------
ASFLAGS_VECTOR_PREPROCESS =

#------------------------------------------------------------------------------
# Please add any other option below (Vector default options)
#
# Use $(ASFLAGS_VECTOR_OPTIONS) if assembler supports preprocessing by default.
# In case of assembler does not support preprocessing and preprocessing is
# enabled by $(ASFLAGS_VECTOR_PREPROCESS) in a prestep
# $(CPPFLAGS_CORE) must be set in $(ASFLAGS_VECTOR_PREPROCESS)
#------------------------------------------------------------------------------
ASFLAGS_VECTOR_OPTIONS = -cpu=$(GHS_CPU_SWITCH)

#------------------------------------------------------------------------------
# Please enter all customer options below
#------------------------------------------------------------------------------
ASFLAGS_CUSTOMER_OPTIONS =

#------------------------------------------------------------------------------
# $(ASVERSION) defines the assembler switch for version report.
# E.g.: ASVERSION = -V
#------------------------------------------------------------------------------
ASVERSION = test.asm -V

#------------------------------------------------------------------------------
# $(AS_LC) defines the number of lines used for assembler version information.
# $(AS_OFF) defines the offset of lines used for assembler version information
# in BrsVinfo.h and Deliverydescription (default is 5).
#------------------------------------------------------------------------------
AS_OFF = 1
AS_LC  = 2

#------------------------------------------------------------------------------
#------------------------- MUST be filled out ---------------------------------
# $(CC_ENV) is the environment necessary to run the compiler
# $(CC) defines the path to the C-Compiler
# $(CFLAGS_VECTOR_MAKESUPPORT) defines all compiler switches, mandatory for
#                              the Vector build environment (Makesupport/BrsHw)
# $(CFLAGS_VECTOR_OPTIONS) defines the Vector default compiler switches
# $(CFLAGS_CUSTOMER_OPTIONS) defines the customer requested compiler switches
# Depending $(CFLAGS_SELECTOR), $(CFLAGS_VECTOR_OPTIONS) or
# $(CFLAGS_CUSTOMER_OPTIONS) is used together with $(CFLAGS_VECTOR_MAKESUPPORT)
# for build.
#
#  Avoid $(OBJ_SUFFIX) to filter use $(basename $@) because
#  ECO has a preprocess using CFLAGS_xx and the target is of type source.
#------------------------------------------------------------------------------
CC_ENV = GHS_LMHOST=@$(LICENSE_SERVER) \
         GHS_LMPORT=$(LICENSE_SERVER_PORT)
CC     = $(COMPILER_BIN)/ccrh850

#------------------------------------------------------------------------------
# Please add only absolutely mandatory options below
#
#  BRS values:
#    -DBRS_COMP_$(COMPILER_MANUFACTURER)
#    -DBRS_PLATFORM_$(PLATFORM)
#
#  Avoid $(OBJ_SUFFIX) to filter. Use $(basename $@) because
#  ECO has a preprocess using CFLAGS_xx and the target is of type source.
#------------------------------------------------------------------------------
CPPFLAGS_VECTOR_MAKESUPPORT = -DBRS_PLATFORM_$(PLATFORM) \
                              -DBRS_COMP_$(COMPILER_MANUFACTURER)

CFLAGS_VECTOR_MAKESUPPORT = -c \
                            -o $@

#------------------------------------------------------------------------------
#  Add depend options here.
#  It is separated because of the option to overwrite
#  $(COMPILER_SUPPORTS_DEPEND) or have different compile without
#  path length problem in command line.
#
#  Pay attention below if $(MAKESUPPORT_POST_COMPILE_CMD) is
#  used in context of depend file creation.
#
#  Example:
#    CFLAGS_VECTOR_MAKESUPPORT    += -MMD -MF $(@:.o=.dt)
#    MAKESUPPORT_POST_COMPILE_CMD += $(SED) -Ef $(MAKESUPPORT_DIR_U)/util/fix_dos_dep_file.sed < $(@:.o=.dt) > $(@:.o=.d);
#    MAKESUPPORT_POST_COMPILE_CMD += $(RM) $(@:.o=.dt);
#------------------------------------------------------------------------------
ifeq ($(COMPILER_SUPPORTS_DEPEND),1)
  CFLAGS_VECTOR_MAKESUPPORT    += -MMD
  MAKESUPPORT_POST_COMPILE_CMD +=

  #-----------------------------------------------------------------------------
  # If $(CC) shall create dependency file as well, fill the following variables.
  # Otherwise, 'clang' does the task without using a floating license.
  #-----------------------------------------------------------------------------
  #DEPEND = $(CC_ENV) $(CC)
  #DEPENDFLAGS =
endif

#------------------------------------------------------------------------------
#  $(REUSE_CPP_DEPEND) is set because compiler has a path length problem
#------------------------------------------------------------------------------
#REUSE_CPP_DEPEND = 1
ifeq ($(COMPILER_SUPPORTS_DEPEND)+$(REUSE_CPP_DEPEND),1+1)
  $(error Can not set both: COMPILER_SUPPORTS_DEPEND and REUSE_CPP_DEPEND
endif

#------------------------------------------------------------------------------
#  Post compile command to cleanup anything during compilation process
#
#  Calling convention:
#    $(call MAKESUPPORT_POST_COMPILE_CMD,$@,$<)
#------------------------------------------------------------------------------
MAKESUPPORT_POST_COMPILE_CMD +=

#------------------------------------------------------------------------------
# Please add any other option below (Vector default options)
#  Avoid $(OBJ_SUFFIX) to filter use $(basename $@) because
#  ECO has a preprocess using CFLAGS_xx and the target is of type source.
#------------------------------------------------------------------------------
# Some MCAL and old OS formerly required mode 22.
REGISTERMODE = 32

ifeq ($(FPU_USED),1)
 CFLAGS_FPU = -fhard
else
 CFLAGS_FPU = -fsoft
endif

ifdef (BRS_ENABLE_HYPERVISOR_SUPPORT)
ifdef (BRS_HYPERVISOR_GUEST_EXECUTION_INSTANCE)
ifeq ($(BRS_ENABLE_HYPERVISOR_SUPPORT), 1)
  CFLAGS_SDA = -no_rosda
else
ifeq ($(BRS_HYPERVISOR_GUEST_EXECUTION_INSTANCE), 1)
  CFLAGS_SDA = -no_rosda
else
  CFLAGS_SDA = -sda=all
endif
endif
else
  CFLAGS_SDA = -sda=all
endif
else
  CFLAGS_SDA = -sda=all
endif

CFLAGS_VECTOR_OPTIONS = -cpu=$(GHS_CPU_SWITCH) \
                        -c99                   \
                        -needprototype         \
                        -Wundef                \
                        --no_commons           \
                        -G                     \
                        -dual_debug            \
                        -noobj                 \
                        -pragma_asm_inline     \
                        -inline_prologue       \
                        --long_long            \
                        $(CFLAGS_SDA)          \
                        -large_sda             \
                        -Ogeneral              \
                        $(CFLAGS_FPU)          \
                        -nostartfiles          \
                        -nostdlib              \
                        -registermode=$(REGISTERMODE)

#                        -list=$(call obj2lst,$@) \

#------------------------------------------------------------------------------
# Please enter all customer options below
#  Avoid $(OBJ_SUFFIX) to filter use $(basename $@) because
#  ECO has a preprocess using CFLAGS_xx and the target is of type source.
#------------------------------------------------------------------------------
CFLAGS_CUSTOMER_OPTIONS =

#------------------------------------------------------------------------------
# $(CVERSION) defines the compiler switch for version report
# E.g.: CVERSION = -V
#------------------------------------------------------------------------------
CVERSION = -V dummy.c

#------------------------------------------------------------------------------
# $(CC_LC) defines the number of lines used for compiler version information
# $(CC_OFF) defines the offset of lines used for compiler version information
# in BrsVinfo.h and Deliverydescription (default is 5)
#------------------------------------------------------------------------------
CC_OFF = 5
CC_LC  = 5

#------------------------------------------------------------------------------
#  Filter out section
#  Add flags which must be filtered out for specific files
#
#  Examples:
#    FILTER_Os=-g              # no debug option for file Os.c
#    FILTER_COMPONENT_Det=-g   # no debug option for component Det
#------------------------------------------------------------------------------
#FILTER_<file_without_extension> =
#FILTER_COMPONENT_<module_name>  =

#------------------------------------------------------------------------------
# Additional file specific compiler options
#------------------------------------------------------------------------------
#CFLAGS_<file_without_extension>   =
#CFLAGS_COMPONENT_<module_name>    =

#------------------------------------------------------------------------------
#------------------------- MUST be filled out ---------------------------------
# $(LD_ENV) is the environment necessary to run the linker
# $(LD) defines the path to the linker
# $(LDFLAGS_VECTOR_MAKESUPPORT) defines all linker switches, mandatory for the
#                               Vector build environment (MakeSupport/BrsHw)
# $(LDFLAGS_VECTOR_OPTIONS) defines the Vector default linker switches
# $(LDFLAGS_CUSTOMER_OPTIONS) defines the customer requested linker switches
# Depending on $(LDFLAGS_SELECTOR), $(LDFLAGS_VECTOR_OPTIONS) or
# $(LDFLAGS_CUSTOMER_OPTIONS)is used together with $(LDFLAGS_VECTOR_MAKESUPPORT)
# for build.
#------------------------------------------------------------------------------
LD_ENV = $(CC_ENV)
LD     = $(CC)

#------------------------------------------------------------------------------
# Please add only absolutely mandatory options below
#
#  Please use $(PROJECT_NAME).$(BINARY_SUFFIX) or $(TARGET) instead of $@ and
#  $(PROJECT_NAME) instead of $* because flags
#  are used in delivery description.
#
#  Linker script file name : $(LINKER_COMMAND_FILE)
#------------------------------------------------------------------------------
LDFLAGS_VECTOR_MAKESUPPORT = -o $(TARGET)                       \
                             -map=$(PROJECT_NAME).map           \
                             -cpu=$(GHS_CPU_SWITCH)             \
                             --preprocess_linker_directive_full \
                             $(LINKER_COMMAND_FILE)             \
                             -e brsStartupEntry

#------------------------------------------------------------------------------
# Set $(PREPROCESS_LINKER_COMMAND_FILE) to 1 to preprocess
# linker command file. $(USER_LINKER_COMMAND_FILE) can be set manually
# but is $(PROJECT_NAME).$(LNK_SUFFIX) by default.
#------------------------------------------------------------------------------
#PREPROCESS_LINKER_COMMAND_FILE = 1

#------------------------------------------------------------------------------
#  Post link command to cleanup anything during linking process
#
#  Calling convention:
#    $(call MAKESUPPORT_POST_LINK_CMD,$@,$<)
#------------------------------------------------------------------------------
MAKESUPPORT_POST_LINK_CMD +=

#------------------------------------------------------------------------------
# Please add any other option below (Vector default options)
#
#  Please use $(PROJECT_NAME).$(BINARY_SUFFIX) or $(TARGET) instead of
#  $@ and $(PROJECT_NAME) instead of $* because flags
#  are used in delivery description.
#
#  Linker script file name : $(LINKER_COMMAND_FILE)
#------------------------------------------------------------------------------
LDFLAGS_VECTOR_OPTIONS = -Manx          \
                         -G             \
                         -dual_debug    \
                         -sda=all       \
                         -large_sda     \
                         -nostartfiles  \
                         -nostdlib      \
                         -Ogeneral

#------------------------------------------------------------------------------
# Please enter all customer options below
#
#  Please use $(PROJECT_NAME).$(BINARY_SUFFIX) instead of $@ and
#  $(PROJECT_NAME) instead of $*, because flags
#  are used in delivery description.
#------------------------------------------------------------------------------
LDFLAGS_CUSTOMER_OPTIONS =

#------------------------------------------------------------------------------
# Please add additional system libraries below
#
#  For some compilers, it is necessary to add additional system libraries.
#  E.g. the ARM GCC Gnu compiler may need libc for memcpy or libgcc for modulo
#
#  To add additional libraries use:
#  -lgcc  (libgcc: e.g. support for modulo operation)
#  -lc    (libc:   e.g. support for memcpy function)
#------------------------------------------------------------------------------
SYSLIBS +=

#------------------------------------------------------------------------------
# $(LDVERSION) defines the linker switch for version report
# E.g.: LDVERSION = -v
#------------------------------------------------------------------------------
LDVERSION = $(CVERSION)

#------------------------------------------------------------------------------
# $(LD_LC) defines the number of lines used for linker version information
# $(LD_OFF) defines the offset of lines used for linker version information
# in BrsVinfo.h and Delivery Description (default is 5)
#------------------------------------------------------------------------------
LD_OFF = $(CC_OFF)
LD_LC  = $(CC_LC)

#------------------------------------------------------------------------------
#------------------------- MUST be filled out if used -------------------------
# $(HEX_ENV) is the environment necessary to run the hexfile generator
# $(HEX) defines the path to the hex converter, e.g. $(COMPILER_BIN)/gsrec
# $(HEXFLAGS) contains options for HEX tool, e.g. -nos5 -skip .tdata $< -o $@
#------------------------------------------------------------------------------
HEX_ENV  = $(CC_ENV)
HEX      = $(COMPILER_BIN)/gsrec

HEXFLAGS = -nos5 -skip .tdata -allow_overlap $< -o $@ 

#------------------------------------------------------------------------------
#------------------------- MUST be filled out if used -------------------------
# $(AR_ENV) is the environment necessary to run the librarian
# $(AR) defines the path to the C-librarian
# $(ARFLAGS) defines all librarian switches
#
# Don't add $@. It is added in rule because AR rule is dynamically generated.
#------------------------------------------------------------------------------
AR_ENV = $(LD_ENV)
AR     = $(LD)

ARFLAGS = :archiver.args=-c \
          -archive          \
          -o

#------------------------------------------------------------------------------
# $(ARVERSION) defines the archiver switch for version report
# E.g.: ARVERSION = -v
#------------------------------------------------------------------------------
ARVERSION = $(LDVERSION)

#------------------------------------------------------------------------------
# $(AR_LC) defines the number of lines used for librarian version information
# $(AR_OFF) defines the offset of lines used for archiver version information
# in BrsVinfo.h
#------------------------------------------------------------------------------
AR_OFF = $(LD_OFF)
AR_LC  = $(LD_LC)

#------------------------------------------------------------------------------
# Additional includes essentially for compilation
#------------------------------------------------------------------------------
ADDITIONAL_INCLUDES +=

#------------------------------------------------------------------------------
# Additional objects essentially for linking
# E.g.: ADDITIONAL_OBJECTS = $(OBJ_PATH)/myobject.$(OBJ_SUFFIX)
#------------------------------------------------------------------------------
ADDITIONAL_OBJECTS +=

#------------------------------------------------------------------------------
# List of assembler source files
# E.g.: ASM_SOURCES = source/startup.$(ASM_SUFFIX)
#------------------------------------------------------------------------------
ASM_SOURCES +=

#------------------------------------------------------------------------------
# Add Startup code to application source list
# E.g.: APP_SOURCE_LST += source/startup.c
#------------------------------------------------------------------------------
APP_SOURCE_LST +=

#------------------------------------------------------------------------------
# Check if all necessary variables are set
# (Checks that are not possible to be performed within Makefile.static)
#------------------------------------------------------------------------------

###############################################################################
######### DO NOT remove these lines from the end of the Makefile!!! ###########
###############################################################################

#------------------------------------------------------------------------------
# Include the main makefile where all the targets are defined
#------------------------------------------------------------------------------
include $(MAKESUPPORT_DIR)/Global.Makefile.target.$(VERSION).mk

# End of Makefile
