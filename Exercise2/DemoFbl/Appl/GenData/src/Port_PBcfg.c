/*===========================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Port_PBcfg.c                                                */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2021 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Base Address of Port Groups and Filters configured      */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        X1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 *  V1.0.0:  09-Sep-2015  : Initial Version
 *
 *  V1.0.1:  16-Sep-2015  : The value generation for JPMCSR and APSR are
 *                          corrected
 *
 *  V1.0.2:  30-Dec-2015  : The following changes are made
 *                          1. As a part of ticket ARDAAGA-138
 *                          ucNoOfPortNumRegs, ucNoOfPortAnalogRegs
 *                          ucNoOfPortInputRegs, ucNoOfPortJRegs is updated
 *                          in case of multiple configure set  for
 *                          number of port groups configured in
 *                          Port_GstConfigType structure.
 *                          2. As a part of ticket ARDAAGA-139
 *                          usInitModeJPSRRegVal, usInitModeRegJPUVal
 *                          is corrected to ulInitModeJPSRRegVal,
 *                          usInitModeJPURegVal respectively.
 *                          3. As a part of ticket ARDAAGA-141
 *                          ucPortGroupIndex is updated in
 *                          Port_GstPinChangeableDetailsList for JTAG during
 *                          PortPinModeChangeable.
 *                          and ucPortGroupIndex is updated in
 *                          Port_GstPinChangeableDetailsList for ANALOG
 *                          during PortPinDirectionChangeable.
 *                          5. As part JIRA ARDAAGA-8, Digital_Filter_Group
 *                          and Analog_Filter_Group implementation
 *                          is modified
 *                          6. As part JIRA ARDAAGA-133 new member
 *                          ucDeepStopSupp is implemented and added
 *                          for Port_GstNumRegs and Port_GstAnalogRegs
 *                          structure.
 * V2.0.0:  21-Oct-2016   : As part of ARDAABC-867 Jira ticket, the following
 *                          changes are made:
 *                          1. Generate 32-bit masks values instead of 64-bit
 *                          for PMSR, JPMSR and APMSR.
 * V2.2.0:  14-Nov-2016   : As part of ARDAABC-542 Jira ticket the following
 *                          changes are made:
 *                          1. Include MemMap header file from "Port_Cfg.h".
 *                          2. Use precompile switches to select different
 *                          memory section names in AR4.0.3 and AR4.2.2.
 * V2.2.1:  24-Nov-2016   : As part of ARDAABC-542 Jira ticket the following
 *                          changes are made:
 *                          1. Removed multiple memory sections Start/Stop
 *                          with the same section.
 * V2.2.2:  24-Jan-2017   : As part of ARDAABC-867 Jira ticket the following
 *                          changes are made:
 *                          1. Removed Port_GstAlphaRegs array.
 * V2.2.3:  07-Feb-2017   : As part of ARDAABC-867 Jira ticket the following
 *                          changes are made:
 *                          1. Removed Port_GstEDCRegs and Port_GstDNFCKSRegs
 *                             arrays.
 * V2.2.4:  29-Jun-2017   : As per the requirement EAAR_PN0034_NR_0018,
 *                          1. Copyright information is updated.
 * V2.2.5:  25-May-2018   : 1. As part of JIRA ARDAABD-2125, new member
 *                          ucDeepStopSupp is implemented and added
 *                          for Port_GstJTAGRegs structure.
 *                          2. As part of ARDAABD-1580, Comment of
 *                          the structure Port_GstFCLARegs is updated.
 * V2.2.6:  09-Apr-2021   : As part of ARDAABD-5045, the following changes are
 *                          made:
 *                          a) Removed
 *                             'PORT_START_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED'
 *                             and
 *                             'PORT_STOP_SEC_CONFIG_DATA_ASIL_B_UNSPECIFIED'.
 *                          b) Copyright information is updated.
 * V2.2.7:  12-Aug-2021   : As part of ARDAABD-6891, corrected the generation
 *                          of ucNoOfPinChangeableDetails.
 * V2.2.8:  09-Sep-2021   : As part of ARDAABD-6581, corrected the generation
 *                          of ucNoOfPortNumRegs, ucNoOfPortAnalogRegs,
 *                          ucNoOfPortInputRegs and ucNoOfPortJRegs variables.
 */
/******************************************************************************/

/*******************************************************************************
**                       Generation Tool Version                              **
*******************************************************************************/
/*
 * TOOL VERSION:  2.2.9
 */

/*******************************************************************************
**                      Input File                                            **
*******************************************************************************/
/*
 * INPUT FILE:    C:\Users\tsenoue\AppData\Local\Temp\DaVinci\Cfg-tsenoue0620475\Generation\Cfg_Gen-1772671367223-0\GenStep3715489456518337044\ECUC_Internal_Xslt994911558486044263.arxml
 *                D:\usr\usage\Delivery\CBD19x\CBD1900263\D01\external\ThirdParty\Mcal_Rh850F1x\Supply\ASR_RH850_F1KM_42.13.00\X1X\F1x\modules\port\generator\R422_PORT_F1x_BSWMDT.arxml
 * GENERATED ON:   5 Mar 2026 - 15:05:49
 */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Port.h"


/*******************************************************************************
**                       Version Information                                  **
*******************************************************************************/

/* AUTOSAR specification version information */
#define PORT_PBCFG_C_AR_RELEASE_MAJOR_VERSION  4U
#define PORT_PBCFG_C_AR_RELEASE_MINOR_VERSION  2U
#define PORT_PBCFG_C_AR_RELEASE_REVISION_VERSION  2U

/* File version information */
#define PORT_PBCFG_C_SW_MAJOR_VERSION  2U
#define PORT_PBCFG_C_SW_MINOR_VERSION  4U

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/

#if (PORT_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
  PORT_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Major Version"
#endif

#if (PORT_PBTYPES_AR_RELEASE_MINOR_VERSION != \
  PORT_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Minor Version"
#endif

#if (PORT_PBTYPES_AR_RELEASE_REVISION_VERSION != \
  PORT_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Revision Version"
#endif

#if (PORT_PBTYPES_SW_MAJOR_VERSION != \
  PORT_PBCFG_C_SW_MAJOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Software Major Version"
#endif

#if (PORT_PBTYPES_SW_MINOR_VERSION != \
  PORT_PBCFG_C_SW_MINOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Software Minor Version"
#endif

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include PORT_MEMMAP_FILE

/* The following structure indicates the starting point of database */
CONST(Port_ConfigType, PORT_CONST) 
                          Port_GstConfiguration[PORT_NUM_OF_CONFIGSET] =
{
  /* Index: 0 - PortConfigSet */
  {
    /* ulStartOfDbToc */
    0x0EDF0220UL,

    /* pPortNumRegs */
    &Port_GstNumRegs[0],

    /* ucNoOfPortNumRegs */
    0x01U
  }
};



/*
 * Array of structures of  port group registers.
 */
CONST(Port_NumRegs, PORT_CONST) 
                            Port_GstNumRegs[PORT_NUM_OF_NUMERIC_PORTS] =
{
  /* Index: 0 - PortConfigSet_0_Port_Group_10 */
  {
    /* ulRegListAvailable */
    0x001FCBFBUL,

    /* ulInitModePSRRegVal */
    0x00000000UL,

    /* ulInitModePMSRRegVal */
    0x0000FFFDUL,

    /* ulMaskConfigPMSRRegVal */
    0xFFFFFFFDUL,

    /* ulInitModePMCSRRegVal */
    0x00000003UL,

    /* ulInitModePODCRegVal */
    0x00000000UL,

    /* ulInitModePDSCRegVal */
    0x00000000UL,

    /* usInitModePISRegVal */
    0x0003U,

    /* usInitModePISARegVal */
    0x0000U,

    /* usInitModePIBCRegVal */
    0x0000U,

    /* usInitModePIPCRegVal */
    0x0000U,

    /* usInitModePURegVal */
    0x0000U,

    /* usInitModePDRegVal */
    0x0000U,

    /* usInitModePBDCRegVal */
    0x0000U,

    /* usInitModePFCERegVal */
    0x0000U,

    /* usInitModePFCRegVal */
    0x0003U,

    /* usInitModePFCAERegVal */
    0x0000U,

    /* ucPortIndex */
    0x00U,

    /* ucDeepStopSupp */
    0x01U
  }
};



/*
 * Array of structures of  JTAG port group registers.
 */
/* CONST(Port_JTAGRegs, PORT_CONST) 
                            Port_GstJTAGRegs[PORT_NUM_OF_JTAG_PORTS]; */

/*
 * Array of structures of  Analog port group registers.
 */
/* CONST(Port_AnalogRegs, PORT_CONST) 
                            Port_GstAnalogRegs[PORT_NUM_OF_ANALOG_PORTS]; */

/*
 * Array of structures of  Input port group registers.
 */
/* CONST(Port_IPortRegs, PORT_CONST) Port_GstInputRegs[PORT_NUM_OF_INPUT_PORTS]; */

/*
 * Array provides information of port groups which contain run time
 * changeable port pins.
 */
/* CONST(Port_PinChangeableDetails, PORT_CONST) 
          Port_GstPinChangeableDetailsList[PORT_NUM_OF_PINS_MODIFIABLE]; */

/* Array of structures for Digital Filter registers and Delay */
/* CONST(Port_DNFARegs, PORT_CONST) Port_GstDNFARegs[PORT_NUM_OF_DNFA]; */

/* Array for Analog and/or Digital Filter registers */
/* CONST(Port_FCLARegs, PORT_CONST) Port_GstFCLARegs[PORT_NUM_OF_FCLA]; */

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include PORT_MEMMAP_FILE

/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
