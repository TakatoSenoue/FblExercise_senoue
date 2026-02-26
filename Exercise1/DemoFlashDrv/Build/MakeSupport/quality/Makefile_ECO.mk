########################################################################################################################
# File Name  : Makefile_ECO.mk
# Description: This Sub-Makefile implements the rules that are needed to perform a code coverage analysis with
#              preprocessed sources with the help of the ECO-tool.
#
#              This file has to be included by the project local "Makefile".
#
#              This file works together with MakeSupport 4.1
#
#              Example (see the project local "Makefile"):
#              include $(MAKESUPPORT_DIR)/Global.Makefile.target.$(VERSION).mk
#              -include Makefile_ECO.config
#          --> -include $(MAKESUPPORT_DIR_U)/quality/Makefile_ECO.mk
#
#              This file MUST NOT BE CHANGED.
#
#-----------------------------------------------------------------------------------------------------------------------
# COPYRIGHT                                                                                                           
#-----------------------------------------------------------------------------------------------------------------------
# Copyright (c) 2024 by Vector Informatik GmbH.                                                  All rights reserved. 
#                                                                                                                     
#-----------------------------------------------------------------------------------------------------------------------
# AUTHOR IDENTITY                                                                                                     
#-----------------------------------------------------------------------------------------------------------------------
# Name                          Initials      Company                                                                 
# ----------------------------  ------------  --------------------------------------------------------------------------
# Clemens von Mann              vircvo        Vector Informatik GmbH
# Claudia Buhl                  vircbl        Vector Informatik GmbH
#-----------------------------------------------------------------------------------------------------------------------
# REVISION HISTORY
#-----------------------------------------------------------------------------------------------------------------------
# Refer to the file Global.Makefile.target.4.mk.
########################################################################################################################

########################################################################################################################
#    EXAMPLE CODE ONLY
#    -------------------------------------------------------------------------------------------------------------------
#    This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
#    The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
#    intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
#    implementations must be tested with diligent care and must comply with all quality requirements which are necessary
#    according to the state of the art before their use.
########################################################################################################################


## @file
#
#  Makefile_ECO.mk
#  ===============
#
#  This Sub-Makefile provides targets for ECO usage (Vector Code Coverage). It is included by Global.Makefile.target.\$(VERSION).mk.
#
#  ECO is the code coverage tool for embedded source code. Please have a look at ECO documentation:
#  D:/usr/development/zCantate/zCantate_Eco
#
#
#  Targets:
#  --------
#  - eco_setup
#  - eco_clean
#  - eco_calculate
#  - eco_summary
#  - eco_mcdc
#  - eco_global
#  - eco_listfiles
#  - eco_listreports
#  - eco_create_reports
#  - eco_add_reports
#  - eco_help
#  - clean
#  - distclean
#  - help	
#
#  Mandatory variables:
#  --------------------
#  - `SRCS`                                : All sources may include files from `ECO_FILES_THAT_NEED_INSTRUMENTATION`
#  - `TARGET`                              : Target of project
#  - `ECO_FILES_THAT_NEED_INSTRUMENTATION` : Files to cover code. If empty use all from `SRCS`
#  - `ECO_SUMMARY_REPORT_FILENAME`         : XML output file. Default: SummaryReport.xml
#
#
#  Standard build variables:
#  -------------------------
#  - `CC`, `CXX`, `CPP`, `DEPEND`                  : Build toolchain
#  - `CPPFLAGS`, `CFLAGS`, `CXXFLAGS`, `LDFLAGS`   : Standard variables supported by make. Must be overwritten by precompiler.
#
#  Optional variables:
#  -------------------
#  - `ECO_TOOL_PATH`                       : Installation directory of ECO
#  - `ECO_CPP_DIR`                         : Directory for preprocessed sources
#  - `ECO_GEN_SRC_DIR`                     : Directory for generated sources
#  - `ECO_OBJ_DIR`                         : Directory for compiled sources
#  - `ECO_BIN_DIR`                         : Directory for executable
#  - `ECO_PROJECT_FILENAME`                : XML project file. Default is `$``(ECO_TARGET)_project.xml`
#  - `ECO_CPPFLAGS`                        : Additional ECO flags
#  - `ECO_CXXFLAGS`                        : Additional C++ flags
#  - `ECO_CFLAGS`                          : Additional C flags
#  - `ECO_LDFLAGS`                         : Additional LD flags. Default is `LDFLAGS` with modified -o <output>
#
#  @internal
#
#  How This Sub-Makefile works with ECO generation process:
#
#  We have a dependency list:
#  elf -> objfile -> generate.c -> preprocessed.c -> source.c
#
#  ECO-tool generates all generate.c files in one step.
#
#  Problem is now that make handles multiple targets in another way:
#  https://www.gnu.org/software/automake/manual/html_node/Multiple-Outputs.html
#
#  gen1.c gen2.c: cpp1.c cpp2.c
#    eco ...
#
#  is equivalent to
#
#  gen1.c : cpp1.c cpp2.c
#    eco ...
#
#  gen2.c: cpp1.c cpp2.c
#    eco ...
#
#  This means it is called separately for each file. This leads to an error.
#  Especially in parallel build process, multiple calls to ECO would produce
#  a conflict in result eco-project-file.
#
#  To solve this problem, an invisible timestamp file is introduced to
#  synchronize ECO generation.
#
#  Please have a look at the dia/pdf file in doc subdirectory.
#
#  An example Makefile which reduces the complexity is also in doc folder.
#
#  @image html make_eco.svg
#
#
#  @internal
#


###################################################
#
#  Check section
#

ifeq ($(filter %/Global.Makefile.target.$(VERSION).mk,$(MAKEFILE_LIST)),)
  $(error Error: Makefile_ECO.mk has to be included after Global.Makefile.target.$(VERSION).mk.)
endif

#
#  function var-is-set(variable)
#
#  return 1 on set _NOT_SET_$(VARIABLE) not set
#
eco-var-is-set=$(if $($(1)),1,_NOT_SET_$(1))

ifeq ($(filter Makefile_ECO.config,$(MAKEFILE_LIST)),)
  $(warning 'Warning: No Makefile_ECO.config included.')
endif

ECO_REQUIRED_VARIABLES = ECO_TARGET_PLATFORM                           \
                         ECO_COVERAGE_TYPE                             \
                         ECO_FILES_THAT_NEED_INSTRUMENTATION           \
                         ECO_COMPILER_DEFINE_PREPROCESSING_SYMBOL_FLAG \
                         ECO_COMPILER_PREPROCESS_FILE_FLAGS

ECO_REQUIRED_VARIABLES_SET=$(foreach V,$(ECO_REQUIRED_VARIABLES),$(call eco-var-is-set,$(V)))
ECO_MISSING_VARIABLES=$(filter-out 1,$(patsubst _NOT_SET_%,%,$(ECO_REQUIRED_VARIABLES_SET)))

ifneq ($(ECO_MISSING_VARIABLES),)
  $(warning Warning: The following variables are missing: $(ECO_MISSING_VARIABLES). Please check 'Makefile_ECO.config'.)
endif

ifeq ($(SRCS),)
  $(error Error: SCRS not specified.)
endif

ifeq ($(TARGET),)
  $(error Error: TARGET not specified.)
endif

ifeq ($(ECO_PROJECT_FILENAME),)
  ECO_PROJECT_FILENAME=CoverageProject.xml
endif

ifeq ($(ECO_SUMMARY_REPORT_FILENAME),)
  ECO_SUMMARY_REPORT_FILENAME=SummaryReport.xml
endif

ifeq ($(ECO_EMBEDDED_FILES_PATH),)
  ECO_EMBEDDED_FILES_PATH = D:/usr/usage/zCantate/zCantate_Eco/zCantate_Eco/Implementation/ECO_Embedded
endif

ifeq ($(ECO_GLOBAL_REPORT_PATH),)
  ECO_GLOBAL_REPORT_PATH = ./GlobalReport
endif

###################################################
#
#  ECO installation
#
ifeq ($(ECO_TOOL_PATH),)
  ECO_TOOL_PATH=D:/usr/usage/zCantate/zCantate_Eco/zCantate_Eco/Implementation/ECO/x64
endif

ECO_TOOL_PATH_U=$(call os_path,$(ECO_TOOL_PATH))
ECO?=$(ECO_TOOL_PATH_U)/eco.exe
ECO_COVER_RES_XSL_PATH?=$(ECO_TOOL_PATH_U)/CoverageResult_Transformation.xsl
ECO_COVER_RES_XSL_PATH_LOCAL=$(notdir $(ECO_COVER_RES_XSL_PATH))

###################################################
#
#  Variable folders
#
ifeq ($(ECO_CPP_DIR),)
  ECO_CPP_DIR = eco-preprocessed
endif
ECO_CPP_DIR_U = $(call os_path,$(ECO_CPP_DIR))

ifeq ($(ECO_GEN_SRC_DIR),)
  ECO_GEN_SRC_DIR = eco-gen-srcs
endif
ECO_GEN_SRC_DIR_U = $(call os_path,$(ECO_GEN_SRC_DIR))

ifeq ($(ECO_OBJ_DIR),)
  ECO_OBJ_DIR = eco-obj
endif
ECO_OBJ_DIR_U = $(call os_path,$(ECO_OBJ_DIR))

ifeq ($(ECO_BIN_DIR),)
  ECO_BIN_DIR = eco-bin
endif
ECO_BIN_DIR_U = $(call os_path,$(ECO_BIN_DIR))

ifeq ($(ECO_DOC_PATH),)
  ECO_DOC_PATH = eco-doc
endif
ECO_DOC_PATH_U = $(call os_path,$(ECO_DOC_PATH))


ECO_LOCK_FILE=.eco_xml.lock

##################################################
#
#  State Variable
#
#  State variable hold the timestamp of a specific action
#
ECO_CREATE_FILE_STAMP=.eco-create
ECO_STATE_PROJECT_FILE_CREATED=.eco-report-created
ECO_STATE_FILE_XML_ADDED=.eco-report-xml-added
ECO_STATE_CALC_COVERAGE_RESULTS=.eco-report-calc-coverage-results

##################################################
#
#  Windows->UNIX PATH variables
#
ECO_FUNCTION_BLACKLIST_FILES_U=$(call os_path,$(ECO_FUNCTION_BLACKLIST_FILES))
ECO_EMBEDDED_FILES_PATH_U=$(call os_path,$(ECO_EMBEDDED_FILES_PATH))
ECO_GLOBAL_REPORT_PATH_U=$(call os_path,$(ECO_GLOBAL_REPORT_PATH))
ECO_MCDC_REPORT_FILENAME_U=$(call os_path,$(ECO_MCDC_REPORT_FILENAME))
ECO_MEASUREMENT_REPORT_HEX_FILES_U=$(call os_path,$(ECO_MEASUREMENT_REPORT_HEX_FILES))

##################################################
#
#  ECO sources
#
ECO_SYS_SRCS=$(ECO_EMBEDDED_FILES_PATH_U)/ECO.c
ECO_SYS_OBJS=$(addprefix $(ECO_OBJ_DIR_U)/,$(notdir $(ECO_SYS_SRCS:.c=.$(OBJ_SUFFIX))))

ECO_SRCS_U=$(call os_path,$(ECO_FILES_THAT_NEED_INSTRUMENTATION))

ECO_CPP_SRCS=$(addprefix $(ECO_CPP_DIR_U)/,$(call realpath_rel,$(PRJROOT_U),$(ECO_SRCS_U)))

ECO_GEN_SRCS=$(addprefix $(ECO_GEN_SRC_DIR_U)/,$(notdir $(ECO_SRCS_U)))
ECO_GEN_OBJS_NAME=$(filter-out %.c %.cpp,$(notdir $(ECO_GEN_SRCS:.c=.o) $(ECO_GEN_SRCS:.cpp=.o)))
ECO_GEN_OBJS=$(addprefix $(ECO_OBJ_DIR_U)/,$(ECO_GEN_OBJS_NAME))

ECO_SRCS_NOT_COVERED=$(filter-out $(ECO_SRCS_U),$(SRCS))
ECO_OBJS_NOT_COVERED=$(filter-out $(addprefix $(OBJ_PATH)/%/,$(ECO_GEN_OBJS_NAME)),$(OBJS))

ECO_ALL_OBJS+=$(ECO_GEN_OBJS)

#
#  Add all ECO-related files to the general "compile and link" mechanism
#
ifdef ADD_ECO_EMBEDDED_FILES_TO_MAKESUPPORT
  CPPFLAGS += -DECO_USEECO
  ADDITIONAL_INCLUDES += $(ECO_GEN_SRC_DIR_U) $(ECO_EMBEDDED_FILES_PATH_U)
  APP_SOURCE_LST += $(ECO_EMBEDDED_FILES_PATH_U)/ECO.c
endif


#
#  Avoid double files from TFW
#
ECO_ALL_OBJS+=$(filter-out %/$(notdir $(ECO_SYS_OBJS)),$(ECO_OBJS_NOT_COVERED))
ECO_ALL_OBJS+=$(ECO_SYS_OBJS)

ECO_TARGET?=$(ECO_BIN_DIR_U)/$(TARGET)

ECO_CPPFLAGS+= -I$(ECO_EMBEDDED_FILES_PATH_U) \
               -I$(ECO_GEN_SRC_DIR_U)         \
               $(CPPFLAGS)

CFLAGS?=-o $@

ECO_CFLAGS+=$(CFLAGS)

ECO_CONFIG_HEADER=$(ECO_GEN_SRC_DIR_U)/ECO_Coverage_Cfg.h

ECO_MAKEFILE_CONFIG=$(filter %/Makefile_ECO.config Makefile_ECO.config,$(MAKEFILE_LIST))

#####################################################
#
#  Flags section
#

#
# Optional arguments:
#
ECO_MEASUREMENT_REPORT_HEX_FILES?=../Canoe/ECO_DUMP.hex


#
#  eco_flag_2_opt flag,option
#
#  flag   : 0,1
#  option : -any-option
#
eco_flag_2_opt=$(if $($(1)),$(subst 1,$(2),$(subst 0,,$($(1)))))

#
#  eco_opt_arg opt arg
#
#  opt   : option name
#  arg   : argument for option
eco_opt_arg=$(if $($(2)),$(1) $(call os_path,$($(2))))

#
#  function eco_to_csv(list)
#
#  Convert a space separated list into a comma separated list
#
ECO_EMPTY=
ECO_SPACE = $(ECO_EMPTY) $(ECO_EMPTY)
ECO_COMMA = ,
eco_to_csv=$(subst $(ECO_SPACE),$(ECO_COMMA)$(ECO_SPACE),$(strip $($(1))))

ECO_CREATE_FLAGS += $(call eco_opt_arg,-FunctionBlacklist,ECO_FUNCTION_BLACKLIST_FILES_U)

ECO_COVERAGE_TYPE_FLAGS = "$(call eco_to_csv,ECO_COVERAGE_TYPE)"
ECO_CREATE_FLAGS += $(call eco_opt_arg,-CoverageType,ECO_COVERAGE_TYPE_FLAGS)

ECO_CREATE_FLAGS += $(call eco_flag_2_opt,ECO_USE_BITVECTORSUPPORT,-EnableBitVectorSupport)
ECO_CREATE_FLAGS += $(call eco_flag_2_opt,ECO_ELIMINATE_DUPLICATE_LINE_DIRECTIVES,-EliminateDuplicateLineDirectives)
ECO_CREATE_FLAGS += $(call eco_flag_2_opt,ECO_GENERATE_PREPARSER_DEBUG_FILES,-GenerateTempFiles)

ECO_CREATE_FLAGS += $(call eco_flag_2_opt,ECO_HANDLE_STATIC_INLINE_FUNCTIONS_IN_HEADER_FILES,-HandleHeaderFiles)

ifneq ($(ECO_INLINE_DIRECTIVE_SYNTAX),)
ECO_CREATE_FLAGS += $(call eco_flag_2_opt,ECO_HANDLE_STATIC_INLINE_FUNCTIONS_IN_HEADER_FILES,-InlineDirectiveSyntax $(ECO_INLINE_DIRECTIVE_SYNTAX))
endif

ifneq ($(ECO_HEADER_FILES),)
ECO_CREATE_FLAGS += $(call eco_flag_2_opt,ECO_HANDLE_STATIC_INLINE_FUNCTIONS_IN_HEADER_FILES,-HeaderFiles "$(ECO_HEADER_FILES)")
endif

ifeq ($(filter MCDC,$(ECO_COVERAGE_TYPE)),MCDC)
  ECO_CREATE_FLAGS += -PerformMcdcAnalysis
endif

ifeq ($(V),1)
  $(info 'ECO - flags: $(ECO_CREATE_FLAGS)')
endif

ECO_GEN_REPORT_FROM_HEX_FLAGS+=$(call eco_flag_2_opt,ECO_GENERATE_LOGFILE_DURING_MEASUREMENT_REPORT_HEX_FILE_CONVERSION,-LogBinaryDataToFile)


#####################################################
#
#  Check section
#

ifneq ($(words $(ECO_TARGET_PLATFORM)),1)
  $(error Error: ECO_TARGET_PLATFORM must have exactly one value: '$(ECO_TARGET_PLATFORM)')
endif

ECO_VALID_TARGETS=EcoWindows EcoEmbedded EricFpga

ifneq ($(filter-out $(ECO_VALID_TARGETS),$(ECO_TARGET_PLATFORM)),)
  $(error Error: Invalid ECO_TARGET_PLATFORM='$(ECO_TARGET_PLATFORM)'. Supported platform: '$(ECO_VALID_TARGETS)')
endif

ifeq ($(ECO_COVERAGE_TYPE),)
  $(error Error: ECO_COVERAGE_TYPE must not be empty)
endif

ECO_SUPPORTED_COVERAGE_TYPE_VALUES = FunctionCoverage                 \
                                     DecisionCoverage                 \
                                     ConditionDecisionCoverage        \
                                     MinimalMultipleConditionCoverage \
                                     MCDC                             \
                                     StatementCoverage                \
                                     LineCoverage                     \
                                     DefineCoverage                   \
                                     All

ifneq ($(filter-out $(ECO_SUPPORTED_COVERAGE_TYPE_VALUES),$(ECO_COVERAGE_TYPE)),)
  $(error Error: Not supported '-CoverageType' : $(ECO_COVERAGE_TYPE))
endif

######################################
#
ECO_REDIRECT=$(if $(Q),>/dev/null)

######################################
#
#  Rules section
#

#
#   Target - Link section
#
.PHONY: eco_build eco_setup
eco_build eco_link eco_elf: $(ECO_TARGET)

eco_setup:
	$(Q)$(MAKE) --no-print-directory ADD_ECO_EMBEDDED_FILES_TO_MAKESUPPORT=1 eco_build

ECO_LDFLAGS ?= $(subst $(TARGET),$(ECO_TARGET),$(LDFLAGS))


.SECONDEXPANSION:
$(ECO_TARGET): $$(ECO_ALL_OBJS) $(LINKER_COMMAND_FILE)
	@$(ECHO) "ECO-LD        $(notdir $@)"
	$(Q)$(LD_ENV) $(LD) $(ECO_LDFLAGS) $(ECO_ALL_OBJS) \
	                                   $(ADDITIONAL_OBJECTS_U) \
																		 $(ADDITIONAL_LIBRARIES_U) \
																		 $(SYSLIBS) \
																		 $(LD_REDIRECT_OUTPUT)
	$(Q)$(MAKESUPPORT_POST_LINK_CMD,$@,$<)

#
#  Compile section
#
.SECONDARY:: $(ECO_ALL_OBJS)

$(ECO_SYS_OBJS): $(ECO_CONFIG_HEADER)

ECO_LST_PATH          = $(subst $(OBJ_PATH),$(LST_PATH),$(ECO_OBJ_DIR_U))
ECO_LST_PATH_DIRSTAMP = $(ECO_LST_PATH)/.dirstamp
ECO_ERR_PATH          = $(subst $(OBJ_PATH),$(ERR_PATH),$(ECO_OBJ_DIR_U))
ECO_ERR_PATH_DIRSTAMP = $(ECO_ERR_PATH)/.dirstamp

.SECONDARY:: $(ECO_OBJ_DIR_U)/.dirstamp

eco_compile: $(ECO_GEN_OBJS)

$(ECO_OBJ_DIR_U)/%.o: $(ECO_GEN_SRC_DIR_U)/%.c $(ECO_CONFIG_HEADER) $(ECO_OBJ_DIR_U)/.dirstamp $(ECO_LST_PATH_DIRSTAMP) $(ECO_ERR_PATH_DIRSTAMP)
	@$(ECHO) "ECO-CC    $(notdir $@)"
	$(Q)$(CC_ENV) $(CC) $(filter-out $(FILTER_$(call to_upper,$(*F))),$(ECO_CPPFLAGS) $(ECO_CFLAGS)) $(CFLAGS_$(call to_upper,$*)) $<

$(ECO_OBJ_DIR_U)/%.o: $(ECO_GEN_SRC_DIR_U)/%.cpp $(ECO_CONFIG_HEADER) $(ECO_OBJ_DIR_U)/.dirstamp $(ECO_LST_PATH_DIRSTAMP) $(ECO_ERR_PATH_DIRSTAMP)
	@$(ECHO) "ECO-CXX   $(notdir $@)"
	$(Q)$(CC_ENV) $(CXX) $(filter-out $(FILTER_$(call to_upper,$(*F))),$(ECO_CPPFLAGS) $(ECO_CXXFLAGS)) $(CFLAGS_$(call to_upper,$*)) $<

$(ECO_OBJ_DIR_U)/%.o: $(ECO_EMBEDDED_FILES_PATH_U)/%.c $(ECO_CONFIG_HEADER) $(ECO_OBJ_DIR_U)/.dirstamp
	@$(ECHO) "ECO-CC    $(notdir $@)"
	$(Q)$(CC_ENV) $(CC) $(ECO_CPPFLAGS) $(ECO_CFLAGS) $<


#
#  Generation section
#
.SECONDARY:: $(ECO_GEN_SRCS)

$(ECO_CONFIG_HEADER): $(ECO_CREATE_FILE_STAMP)
	@true              # fulfill Makefile logic. Without you need 2 calls of 'make'

$(ECO_PROJECT_FILENAME): $(ECO_CREATE_FILE_STAMP)
	@true # fulfill Makefile logic

.PHONY: eco_instrument
eco_instrument: $(ECO_CREATE_FILE_STAMP)

.SECONDARY:: $(ECO_CREATE_FILE_STAMP)

$(ECO_CREATE_FILE_STAMP): $(ECO_CPP_SRCS) $(ECO_MAKEFILE_CONFIG) $(ECO_BIN_DIR_U)/.dirstamp
	@$(ECHO) "ECO       -CreateProject $(ECO_PROJECT_FILENAME)"
	$(Q)$(TOUCH) $@
	$(Q)$(ECO) -CreateProject  $(ECO_PROJECT_FILENAME)   \
	           -CoverageTarget $(ECO_TARGET_PLATFORM)    \
	           -Parse         "$(ECO_CPP_SRCS)"          \
	           -Generate       $(ECO_GEN_SRC_DIR_U)      \
	           $(ECO_CREATE_FLAGS)                       \
	           -s       $(ECO_REDIRECT)
	$(Q)$(RM) $(ECO_STATE_PROJECT_FILE_CREATED)

#
#  Preprocess section
#
#  Generation of xml-project; generates instructed sources as well
#
#  ECO system files can compile after generation process only
#  because common unique id
#
#  Attention:
#    The preprocess needs CFLAGS, because it is possible than
#    architectur options like CPU produces #define variables.
#
.SECONDARY:: $(addsuffix .dirstamp,$(sort $(dir $(ECO_CPP_SRCS))))

$(ECO_GEN_SRCS): $(ECO_CREATE_FILE_STAMP)
	@test -f $@ && $(TOUCH) $@

eco_preprocess: $(ECO_CPP_SRCS)

ifeq ($(ECO_COMPILER_PREPROCESS_STDOUT),1)
  ECO_REDIRECT_PP= > $@
endif

.SECONDEXPANSION:
$(ECO_CPP_DIR_U)/%.c: $(PRJROOT_U)/%.c $$(dir $(ECO_CPP_DIR_U)/%).dirstamp
ifneq ($(ECO_CPP_SUPPORTS_DEPEND),1)
	@$(ECHO) "ECO-DEPEND    $(notdir $(@:.c=.d))"
	$(Q)$(DEPEND) $(filter-out $(FILTER_$(call to_upper,$(*F))),$(DEPENDFLAGS) $(ECO_CPPFLAGS)) $(CFLAGS_$(call to_upper,$(*F))) $<
endif
	@$(ECHO) "ECO-CPP       $(@F)"
ifeq ($(ECO_COMPILER_PREPROCESS_FILE_OUTPUT_FILE_FLAG),)
	$(Q)$(CC_ENV) $(CC) $(filter-out $(FILTER_$(call to_upper,$(*F))), $(ECO_COMPILER_PREPROCESS_FILE_FLAGS) $(ECO_CPPFLAGS)) $(CFLAGS_$(call to_upper,$(*F))) $< $(ECO_REDIRECT_PP)
ifeq ($(ECO_COMPILER_PREPROCESS_STDOUT),0)
ifneq ($(ECO_COMPILER_PREPROCESSED_FILE_FIXED_OUTPUT_PATH),)
ifneq ($(ECO_COMPILER_PREPROCESSED_FILE_EXTENSION),)
	$(Q)$(MV) $(ECO_COMPILER_PREPROCESSED_FILE_FIXED_OUTPUT_PATH)/$(basename $(<F)).$(ECO_COMPILER_PREPROCESSED_FILE_EXTENSION) $@
else   # no file extension
	$(warning Warning: "Currently not supported: ECO_COMPILER_PREPROCESSED_FILE_FIXED_OUTPUT_PATH without ECO_COMPILER_PREPROCESSED_FILE_EXTENSION")
endif
else  # no current dir
ifneq ($(ECO_COMPILER_PREPROCESSED_FILE_EXTENSION),)
	$(Q)$(MV) $(@F).$(ECO_COMPILER_PREPROCESSED_FILE_EXTENSION) $@
endif
endif   # no current dir
endif
else
	$(Q)$(CC_ENV) $(CC) $(filter-out $(FILTER_$(call to_upper,$(*F))), $(ECO_COMPILER_PREPROCESS_FILE_FLAGS) $(ECO_COMPILER_PREPROCESS_FILE_OUTPUT_FILE_FLAG)$@ $(ECO_CPPFLAGS)) $(CFLAGS_$(call to_upper,$(*F))) $<   
endif

-include $(call setext,d,$(ECO_CPP_SRCS))

eco_clean::
	@$(ECHO) "CLEAN      ECO"
	$(Q)$(RM) $(ECO_SUMMARY_REPORT_FILENAME)
	$(Q)$(RM) $(ECO_CPP_SRCS) $(call setext,d,$(ECO_CPP_SRCS))
	$(Q)$(RM) $(ECO_GEN_SRCS)
	$(Q)$(RM) $(ECO_TARGET) $(ECO_TARGET).*
	$(Q)$(RM) $(ECO_CREATE_FILE_STAMP)
	$(Q)$(RM) $(ECO_LOCK_FILE)
	$(Q)$(RM) $(ECO_GEN_OBJS)
	$(Q)$(RM) $(ECO_SYS_OBJS)
	$(Q)$(RM) $(ECO_CONFIG_HEADER)
	$(Q)$(RM) $(ECO_COVER_RES_XSL_PATH_LOCAL)
	$(Q)$(RM) $(ECO_STATE_PROJECT_FILE_CREATED)
	$(Q)$(RM) $(ECO_STATE_FILE_XML_ADDED)
	$(Q)$(RM) $(ECO_STATE_CALC_COVERAGE_RESULTS)
	$(Q)$(RM) $(ECO_LOCK_FILE)
	$(Q)$(RM) $(ECO_PROJECT_FILENAME)

distclean:: clean
	@$(ECHO) "DISTCLEAN  ECO"
	$(Q)$(RM) $(ECO_PROJECT_FILENAME)
	$(Q)$(RMDIR) $(ECO_OBJ_DIR_U) $(ECO_GEN_SRC_DIR_U) $(ECO_BIN_DIR_U)
	$(Q)$(RM) $(ECO_MEASUREMENT_HEX_FILES)
	$(Q)$(RMDIR) $(ECO_CPP_DIR_U)
	$(Q)$(RMDIR) $(ECO_LST_PATH) $(ECO_ERR_PATH)

################################################################################
#
#  Report section
#

$(ECO_COVER_RES_XSL_PATH_LOCAL): $(ECO_COVER_RES_XSL_PATH)
	@$(ECHO) COPY $@
	$(Q)$(CP) $< $@

#
#  Make it possible to add only existent hex files to report
#
ECO_MEASUREMENT_HEX_FILES=$(wildcard $(ECO_MEASUREMENT_REPORT_HEX_FILES_U))
ECO_MEASUREMENT_XML_FILES=$(addsuffix .xml,$(basename $(ECO_MEASUREMENT_HEX_FILES)))

#  -------------  eco_create_reports  -----------------

ECO_TIME_PER_GEN_REPORT_CALL_SEC=1
ECO_FLOCK_WAIT_TIME:=$(shell echo $$(($(words $(ECO_MEASUREMENT_XML_FILES)) * $(ECO_TIME_PER_GEN_REPORT_CALL_SEC) + 1)))
ECO_FLOCK=$(FLOCK) -w $(ECO_FLOCK_WAIT_TIME) $(ECO_LOCK_FILE)

%.xml: %.hex
	@$(ECHO) ECO        -GenReportFromHex $@
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) \
                          -GenReportFromHex "$< $@" \
                          $(ECO_GEN_REPORT_FROM_HEX_FLAGS) -s $(ECO_REDIRECT)

%.xml: %.bin
	@$(ECHO) ECO        -GenReportFromHex $@
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) \
                          -GenReportFromHex "$< $@" \
                          $(ECO_GEN_REPORT_FROM_HEX_FLAGS) -s $(ECO_REDIRECT)

.PHONY: eco_create_reports
eco_create_reports: $(ECO_MEASUREMENT_XML_FILES)
	$(Q)$(RM) $(ECO_LOCK_FILE)

#  -------------  eco_delete_reports  -----------------

.PHONY: eco_delete_reports
eco_delete_reports: $(ECO_PROJECT_FILENAME)
	@$(ECHO) "ECO        -DeleteReports $(notdir $(ECO_PROJECT_FILENAME))"
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) -DeleteReports -s $(ECO_REDIRECT)

#  -------------  eco_add_reports  -----------------

.PHONY: eco_add_reports
eco_add_reports: $(ECO_STATE_FILE_XML_ADDED)

$(ECO_STATE_FILE_XML_ADDED): $(ECO_MEASUREMENT_XML_FILES)
ifeq ($(ECO_MEASUREMENT_REPORT_HEX_FILES_U),)
	@$(ECHO) "ECO_MEASUREMENT_REPORT_HEX_FILES are not specified."
endif
ifeq ($(ECO_MEASUREMENT_XML_FILES),)
	@$(ECHO) "ECO_MEASUREMENT_REPORT_HEX_FILES='$(ECO_MEASUREMENT_REPORT_HEX_FILES)' are not available."
endif
	@$(ECHO) "ECO        -DeleteReports/AddReports    $(notdir $(ECO_MEASUREMENT_XML_FILES))"
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) -DeleteReports -s $(ECO_REDIRECT)
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) -AddReports $(ECO_MEASUREMENT_XML_FILES) -s $(ECO_REDIRECT)
	@$(TOUCH) $@

#  -------------  eco_calculate_coverage  -----------------

.PHONY: eco_calculate eco_calculate_coverage
eco_calculate eco_calculate_coverage: $(ECO_STATE_CALC_COVERAGE_RESULTS)

$(ECO_STATE_CALC_COVERAGE_RESULTS): $(ECO_STATE_FILE_XML_ADDED) $(ECO_COVER_RES_XSL_PATH_LOCAL)
	@$(ECHO) "ECO        -CalculateCoverageResults $(notdir $(ECO_MEASUREMENT_XML_FILES))"
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) -CalculateCoverageResults -s $(ECO_REDIRECT)
	@$(TOUCH) $@

#  -------------  eco_summary  -----------------

.PHONY: eco_summary
eco_summary:$(ECO_SUMMARY_REPORT_FILENAME)

$(ECO_SUMMARY_REPORT_FILENAME): $(ECO_STATE_CALC_COVERAGE_RESULTS) $(ECO_COVER_RES_XSL_PATH_LOCAL)
	@$(ECHO) "ECO        -GenReportSummary $(notdir $(ECO_SUMMARY_REPORT_FILENAME))"
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) -GenReportSummary $(ECO_SUMMARY_REPORT_FILENAME) -s $(ECO_REDIRECT)

#  -------------  eco_mcdc  -----------------

.PHONY: eco_mcdc
eco_mcdc:
ifeq ($(ECO_MCDC_MEASUREMENT_REPORT_HEX_FILES),)
	@$(ECHO) "Error: no 'ECO_MCDC_MEASUREMENT_REPORT_HEX_FILES' specified"
	@exit 1
endif	  
	@$(ECHO) "ECO        -GenMcdcReport $(notdir $(ECO_MCDC_REPORT_FILENAME_U))"
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) -GenMcdcReport "$(ECO_MCDC_REPORT_FILENAME_U)" -s $(ECO_REDIRECT)

#  -------------  eco_listreports  -----------------

.PHONY: eco_listreports
eco_listreports:
	@$(ECHO) "ECO        -ListReports $(ECO_PROJECT_FILENAME)"
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) -ListReports -s $(ECO_REDIRECT)

#  -------------  eco_listfiles  -----------------

.PHONY: eco_listfiles
eco_listfiles:
	@$(ECHO) "ECO        -ListFiles $(ECO_PROJECT_FILENAME)"
	$(Q)$(ECO_FLOCK) $(ECO) -LoadProject $(ECO_PROJECT_FILENAME) -ListFiles -s $(ECO_REDIRECT)

################################################################################
#
#  global report section
#
.PHONY: eco_global
eco_global:
	@$(ECHO) "ECO        -GenGlobalReport $(ECO_GLOBAL_REPORT_PATH_U)"
	$(Q)$(ECO_FLOCK) $(ECO) -GenGlobalReport "$(wildcard $(ECO_ECO_PROJECT_FILES_FOR_GLOBAL_REPORT))" -GlobalReportPath $(ECO_GLOBAL_REPORT_PATH_U) -s $(ECO_REDIRECT)


help::
	@$(ECHO) " *"
	@$(ECHO) " *   ECO - Targets:"
	@$(ECHO) " *   --------------"
	@$(ECHO) " *    eco_setup                        Create ECO project and build all targets with ECO-specific code"
	@$(ECHO) " *    eco_clean                        Clean build all ECO specific build files"
	@$(ECHO) " *    eco_calculate                    Calculate code coverage based on measurement files"
	@$(ECHO) " *    eco_summary                      Create ECO summary report"
	@$(ECHO) " *    eco_mcdc                         Create ECO MC/DC report"
	@$(ECHO) " *    eco_global                       Create ECO global report"
	@$(ECHO) " *    eco_listfiles                    List instrumented files"
	@$(ECHO) " *    eco_listreports                  List measurement reports"
	@$(ECHO) " *    eco_create_reports               Build xml reports from input files (input: hex or bin file)"
	@$(ECHO) " *    eco_add_reports                  Add reports to project file"
	@$(ECHO) " *    eco_help                         Show information about ECO tool"
	@$(ECHO) " *"
	@$(ECHO) " *    Typical ECO execution sequence:"
	@$(ECHO) " *     - 'eco_setup'"
	@$(ECHO) " *     - execute binary"
	@$(ECHO) " *     - optional: copy binary files on embedded systems"
	@$(ECHO) " *     - 'eco_calculate' and/or 'eco_summary', but not in parallel"
	@$(ECHO) " *"
	@$(ECHO) " ***********************************************************************************"

.PHONY: eco_help
eco_help:
	$(Q)$(ECO) -h -s
