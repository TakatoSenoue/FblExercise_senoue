/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: FblBm
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FblBm_Cfg.h
 *   Generation Time: 2026-02-13 14:11:17
 *           Project: DemoFbl - Version 1.0
 *          Delivery: CBD1900263_D01
 *      Tool Version: DaVinci Configurator Classic (beta) 5.31.24
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Classic and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

#if !defined (FBLBM_CFG_H)
# define FBLBM_CFG_H


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Configuration major version identification */ 
# define FBLBM_CFG_MAJOR_VERSION 2u 
/* Configuration minor version identification */ 
# define FBLBM_CFG_MINOR_VERSION 5u 
/* Defines how a corrupted bootloader is handled */ 
# define FBLBM_ENABLE_UPDATER_FAILSAFE 
# define FBLBM_DISABLE_UPDATER_FAILSAFE_USER 
/* Defines how missing keys are handled */ 
# define FBLBM_DISABLE_SECBOOT_FBL_INIT_KEY 
/* Defines how a missing bootloader mac is handled */ 
# define FBLBM_DISABLE_SECBOOT_FBL_INIT_MAC 
/* Defines whether secure boot is enabled or disabled */ 
# define FBLBM_DISABLE_SECURE_BOOT 
/* Defines whether stand-alone mode is enabled or disabled */ 
# define FBLBM_ENABLE_STANDALONE_MODE 
/* Defines the start address of the header */ 
# define FBLBM_HEADER_ADDRESS 0x0000FEF0u 
/* Defines size of the boottarget list */ 
# define FBLBM_BOOTTARGETLIST_SIZE 1u 
/* Defines build context */ 
# define FBLBM_INSTANCE_BOOTLOADER 
/* Defines configuration files to be included */ 
# define FBLBM_DISABLE_GENERIC_CONFIGURATION 
# define FBLBM_DISABLE_HARDWARE_CONFIGURATION 
# define FBLBM_DISABLE_OEM_CONFIGURATION 
/* If enabled it is possible to verify the header structure separately */ 
# define FBLBM_DISABLE_HEADER_VERIFICATION 
/* If enabled it is possible to verify the LBT of the FBL separately */ 
# define FBLBM_DISABLE_FBLLBT_VERIFICATION 

/* General define block */
# ifndef FBLBM_USE_DUMMY_STATEMENT
#  define FBLBM_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
# endif
# ifndef FBLBM_DUMMY_STATEMENT
#  define FBLBM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
# endif
# ifndef FBLBM_DUMMY_STATEMENT_CONST
#  define FBLBM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
# endif
# ifndef FBLBM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#  define FBLBM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
# endif
# ifndef FBLBM_ATOMIC_VARIABLE_ACCESS
#  define FBLBM_ATOMIC_VARIABLE_ACCESS 8u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
# endif
# ifndef FBLBM_PROCESSOR_RH850_1649
#  define FBLBM_PROCESSOR_RH850_1649
# endif
# ifndef FBLBM_COMP_GREENHILLS
#  define FBLBM_COMP_GREENHILLS
# endif
# ifndef FBLBM_GEN_GENERATOR_MSR
#  define FBLBM_GEN_GENERATOR_MSR
# endif
# ifndef FBLBM_CPUTYPE_BITORDER_LSB2MSB
#  define FBLBM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
# endif
# ifndef FBLBM_CONFIGURATION_VARIANT_PRECOMPILE
#  define FBLBM_CONFIGURATION_VARIANT_PRECOMPILE 1
# endif
# ifndef FBLBM_CONFIGURATION_VARIANT_LINKTIME
#  define FBLBM_CONFIGURATION_VARIANT_LINKTIME 2
# endif
# ifndef FBLBM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#  define FBLBM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
# endif
# ifndef FBLBM_CONFIGURATION_VARIANT
#  define FBLBM_CONFIGURATION_VARIANT FBLBM_CONFIGURATION_VARIANT_PRECOMPILE
# endif
# ifndef FBLBM_POSTBUILD_VARIANT_SUPPORT
#  define FBLBM_POSTBUILD_VARIANT_SUPPORT STD_OFF
# endif


/**********************************************************************************************************************
 *  USER CONFIG FILE
 *********************************************************************************************************************/



#endif /* FBLBM_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: FblBm_Cfg.h
 *********************************************************************************************************************/
