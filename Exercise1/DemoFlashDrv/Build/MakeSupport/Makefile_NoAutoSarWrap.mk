########################################################################################################################
# File Name  : Makefile_NoAutoSarWrap.mk
# Description: This Sub-Makefile encapsulates the Makefile.project.part.defines settings to a common set of variables
#              Another encapsulation is Makefile_AutoSarWrap.mk
#
#              This file MUST NOT BE CHANGED on project integration
#
# Project    : Vector PES Build Environment
# Module     : GlobalMake 4.1
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
#  Makefile_NoAutoSarWrap.mk
#  =========================
#
#  This Sub-Makefile encapsulates the Makefile.project.part.defines settings to a common set of variables.
#  It is included by Global.Makefile.target.\$(VERSION).mk if the value of `USE_AUTOSAR_MAKE` is 0 (delivery type is FBL or CANbedded).
#


#############################
#   check section
WRAP_NEEDED_VARS=MODULE_USED_LST \
                 GENDATA_DIR
$(foreach _V,$(WRAP_NEEDED_VARS),$(if $(_V),,$(error Error: $(_V) not set)))

###################################################
#  These variables are set by AUTOSAR Makefiles.
#
#  In case of avoiding AUTOSAR Makefiles
#  USE_AUTOSAR_MAKE != 1
#  Set these variables automatically by best guess.
#
ifeq ($(USE_AUTOSAR_MAKE),1)
  $(error Error: Must never be included when set USE_AUTOSAR_MAKE=1)
endif

#
#  In case of no AUTOSAR path is set use module name as library name
#
mod2lib=$(1)

###########################################################
#
#  LIBRARIES_TO_BUILD
#
#  Example:
#    [NM_ASR4NMCAN_PATH] -> CanNm
#
LIBRARIES_TO_BUILD = $(foreach MODULE,$(MODULE_USED_LST), $(MODULE))

###########################################################
#
#  Generate <MODULE>_FILES
#
#  Example:
#    [Can_FILES]               = Can\Can.c
#
$(foreach _M,$(MODULE_USED_LST),$(eval $(_M)_FILES=$(call wildcard_dir,$(BSW_DIR),$($(_M)_SOURCES))))

###########################################################
#
#  MODULE_DATA_LST_U
#   Contains all sources in APPL_DIR
#
#  Example:
#    MODULE_DATA_LST += $(GENDATA_DIR)\Can_PBcfg.c
#
MODULE_DATA_LST  := $(foreach _M,$(MODULE_USED_LST),$($(_M)_DATA))
MODULE_DATA_LST_U = $(call wildcard_dir_u,$(APPL_DIR),$(call os_path,$(MODULE_DATA_LST)))

CC_INCLUDE_PATH += $(GENDATA_DIR)

#########################################################
#
#  MODULE_SOURCE_LST_U
#    Contains all sources of modules in ROOT_U
#
MODULE_SOURCE_LST=$(foreach _M,$(MODULE_USED_LST),$($(_M)_SOURCES))
MODULE_SOURCE_LST_U=$(sort $(call wildcard_dir_u,$(ROOT_U),$(call os_path,$(MODULE_SOURCE_LST))))

#########################################################
#
#  MODULE_ASM_LST_U
#    Contains all assembler sources of modules in ROOT_U
#
MODULE_ASM_LST=$(foreach _M,$(MODULE_USED_LST),$($(_M)_ASM_SOURCES))
MODULE_ASM_LST_U=$(sort $(call wildcard_dir_u,$(ROOT_U),$(call os_path,$(MODULE_ASM_LST))))

##########################################################
#
#  MODULE_INCLUDE_SUBDIRS_U
#   Contains all source and include directories of modules
#
MODULE_INCLUDE_SUBDIRS_U_RAW=$(foreach _M,$(MODULE_USED_LST),$(addprefix $(ROOT_U)/,$(sort $(dir $(call os_path,$($(_M)_SOURCES))))))
MODULE_INCLUDE_SUBDIRS_U_RAW+=$(foreach _M,$(MODULE_USED_LST), \
                               $(patsubst %,$(ROOT_U)/%$(BSW_SRC_DIR),$(call os_path,$($(_M)_PATH)))) \
                               $(call realpath_rel,.,$(call wildcard_dir,.,$(addprefix $(BSW_DIR)/,$(CC_INCLUDE_PATH_U))))
# Remove trailing /, then sort and remove dublicates
MODULE_INCLUDE_SUBDIRS_U=$(sort $(patsubst %/,%,$(MODULE_INCLUDE_SUBDIRS_U_RAW)))

#
#  Generate <module>_SOURCES_U
#
#  This produces the variables analog to settings in Makefile.project.part.defines not using AUTOSAR mak files.
#
$(foreach _M,$(MODULE_USED_LST),$(eval $(_M)_SOURCES_U=$(strip $(call os_path,$($(_M)_SOURCES)))))

##########################################################
#
#  COMMON_INC
#
COMMON_DIR?=$(GLOBAL_COMP_DIR)/_Common$(BSW_SRC_DIR)
COMMON_INC=$(foreach dir, $(COMMON_DIR), $(ROOT_U)/$(dir))


##########################################################
#
#  MODULE_LIB_LIST_U
#   Contains modules of modules
#
LIBRARIES_LINK_ONLY_U=$(call os_path,$(LIBRARIES_LINK_ONLY))
MODULE_LIB_LIST_RAW_U  = $(addprefix $(ROOT_U)/$(GLOBAL_COMP_DIR)/,$(LIBRARIES_LINK_ONLY_U))
MODULE_LIB_LIST_RAW_U += $(addprefix $(ROOT_U)/$(GLOBAL_DEMOCOMP_DIR)/,$(LIBRARIES_LINK_ONLY_U))

# $(MODULE_LIB_LIST_RAW_U) with expanded wildcards (*), reduce '..' from paths, sort list and remove duplicates
MODULE_LIB_LIST_U=$(sort $(call realpath_rel,.,$(call wildcard_dir,.,$(MODULE_LIB_LIST_RAW_U))))


##########################################################
#
#  MODULE_OBJ_LIST_U
#   Contains object files of modules
#
OBJECTS_LINK_ONLY_U=$(call os_path,$(OBJECTS_LINK_ONLY))
MODULE_OBJ_LIST_RAW_U  = $(addprefix $(GLOBAL_COMP_DIR)/,$(OBJECTS_LINK_ONLY_U))
MODULE_OBJ_LIST_RAW_U += $(addprefix $(GLOBAL_DEMOCOMP_DIR)/,$(OBJECTS_LINK_ONLY_U))

# $(MODULE_OBJ_LIST_RAW_U) with expanded wildcards (*), reduce '..' from paths, sort list and remove duplicates
MODULE_OBJ_LIST_U=$(sort $(call realpath_rel,.,$(call wildcard_dir,$(ROOT_U),$(MODULE_OBJ_LIST_RAW_U))))
