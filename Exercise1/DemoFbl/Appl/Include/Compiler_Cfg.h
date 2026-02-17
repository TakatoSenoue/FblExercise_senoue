/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2007 - 2013 by Vector Informatik GmbH.                                           All rights reserved.
 *
 *                Please note, that this file contains example configuration used by the 
 *                MICROSAR BSW. This code may influence the behaviour of the MICROSAR BSW
 *                in principle. Therefore, great care must be taken to verify
 *                the correctness of the implementation.
 *
 *                The contents of the originally delivered files are only examples respectively 
 *                implementation proposals. With regard to the fact that these functions
 *                are meant for demonstration purposes only, the liability of Vector Informatik
 *                shall be expressly excluded in cases of ordinary negligence, 
 *                to the extent admissible by law or statute.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  _Compiler_Cfg.h
 *    Component:  -
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  This File is a template for the Compiler_Cfg.h
 *                This file has to be extended with the memory and pointer classes for all BSW modules
 *                which where used.
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  MISRA VIOLATIONS
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Joachim Kalmbach              Jk            Vector Informatik GmbH
 *  Heike Honert                  Ht            Vector Informatik GmbH
 *  Eugen Stripling               Seu           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2007-08-01  Jk                    Initial creation
 *  01.01.00  2007-12-14  Jk                    Component specific defines filtering added
 *  01.01.01  2008-12-17  Ht                    Improve list of components  (Tp_AsrTpCan,Tp_AsrTpFr,DrvMcu,DrvIcu added)
 *  01.01.02  2009-04-27  Ht                    support OEM specific _compiler_cfg.inc file, improve list of components 
 *                                              (Cp_XcpOnCanAsr, Il_AsrIpduM, If_VxFblDcm, If_VxFblVpm_Volvo_ab, DrvFls added)
 *  01.01.03  2009-04-24  Msr                   Renamed J1939_AsrBase as TpJ1939_AsrBase
 *  01.01.04  2009-06-03  Ht                    Improve list of components (Adc, Dio, Gpt, Pwm, Spi, Wdg, Fls, Port, Fim)
 *  01.02.00  2009-08-01  Ht                    Improve list of components (Fee_30_Inst2, Can, ...Sub)
 *                                              Support filtering for RTE
 *  01.02.01  2009-09-02  Lo                    add external Flash driver support
 *  01.02.02  2009-09-21  Lo                    add DrvFls_Mcs12xFslftm01ExtVx
 *                        Ht                    Improve list of components (CanTrcv_30_Tja1040dio,
 *                                                Eth, EthTrcv, EthIf, SoAd, TcpIp, EthSM)
 *  01.03.00  2009-10-30  Ht                    support R8: change EthTrcv to EthTrcv_30_Canoeemu
 *                                              support EthTrcv_30_Dp83848
 *                                              change CanTrcv_30_Xdio to CanTrcv_30___Your_Trcv__
 *                                              change CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1041
 *                                              change name FrTrcv to FrTrcv_30_Tja1080dio
 *                        Lo                    add Cp_AsrXcp
 *                        Ht                    add Cp_XcpOnFrAsr
 *  01.03.01  2010-01-13  Ht                    support SysService_AsrCal
 *  01.03.02  2010-02-15  Ht                   support SysService_SswRcs_Daimler, SysService_Tls, Tp_Http, 
 *                                                      SysService_Dns, SysService_Json, DrvTrans_GenericLindioAsr
 *                        Lo                    add Diag_AsrDem for all OEMs
 *                                              rename internal variables and filter methods
 *  01.04.00  2010-03-04  Ht                    change name FrTrcv_30_Tja1080dio to FrTrcv_30_Tja1080
 *  01.04.01  2010-03-10  Ht                    support DrvTrans_GenericFrAsr, DrvTrans_As8223FrspiAsr, DrvEep and If_AsrIfEa
 *  01.04.02  2010-04-07  Lo                    change IfFee to real components and add If_AsrIfWdV85xNec01Sub
 *  01.04.03  2010-06-11  Ht                    add CanTrcv_30_Tja1043
 *                        Lo                    add Il_AsrIpduMEbBmwSub
 *  01.04.04  2010-08-24  Ht                    add CanTrcv_30_Tle62512G, DrvEep_XAt25128EAsr, Tp_AsrTpFrEbBmwSub
 *  01.05.00  2010-08-24  Ht                    support R10:
 *                                              change LinTrcv_30_Tle7259dio to LinTrcv_30_Tle7259
 *  01.05.01  2010-10-14  Ht                    add VStdLib, SysService_SswScc, SysService_IpBase, SysService_Crypto
 *  01.05.02  2010-10-20  Ht                    support comments for Package Merge Tool
 *  01.05.03  2010-11-03  Ht                    add SysService_E2eLibTttechSub, SysService_E2ePwTttechSub
 *  01.05.04  2010-11-16  Ht                    add SysService_Exi, DrvTrans_Int6400EthAsr, Cdd_AsrCdd_Fiat, Diag_AsrDem_Fiat,
 *  01.05.05  2010-12-17  Ht                    add SysService_AsrSchM, DrvEep_XXStubAsr, DrvIcu_Tms570Tinhet01ExtVx
 *                                                  DrvWd_XTle4278gEAsr, DrvWd_XXStubAsr
 *  01.05.06  2011-02-17  Ht                    add DrvEed, SysService_AsrBswM
 *  01.05.07  2011-03-04  Ht                    add DrvTrans_Tja1055CandioAsr
 *                                              rename CanTrcv_30_Tja1040dio to CanTrcv_30_Tja1040
 *                                              add SysService_XmlEngine
 *  01.06.00  2011-03-04  Ht                    support ASR4.0
 *                                              add Ccl_Asr4ComM, Ccl_Asr4SmCan, Nm_Asr4NmIf, Nm_AsrNmDirOsek
 *  01.06.01  2011-04-15  Ht                    add Diag_AsrDcm_<OEM>
 *  01.06.02  2011-06-17  Ht                    correct Diag_AsrDcm_<OEM>
 *                                              add Monitoring_AsrDlt and Monitoring_GenericMeasurement
 *  01.06.03  2011-09-01  Ht                    add DrvTrans_Tja1145CanSpiAsr, DrvTrans_E52013CanspiAsr, DrvFls_XXStubAsr,
 *                                              If_AsrIfFeeV85xNec05Sub, If_AsrIfFeeV85xNec06Sub, If_AsrIfFeeV85xNec07Sub
 *                                              SysService_AsrWdMTttechSub and If_AsrIfWdTttechSub
 *  01.06.04  2011-10-20  Ht                    ESCAN00054334: add If_AsrIfFeeTiSub
 *                                              ESCAN00054719: add Cdd_AsrCdd
 *  01.06.05  2011-12-09  Ht                    add Tp_IpV4, Tp_IpV6
 *  01.06.06  2011-12-14  Ht                    add Monitoring_RuntimeMeasurement
 *  01.06.07  2012-01-03  Ht                    add DrvI2c, SysService_Asr4BswM
 *  01.06.08  2012-01-31  Ht                    add DrvTrans_Ar7000EthAsr, DrvTrans_GenericEthmiiAsr
 *  01.06.09  2012-03-06  Ht                    add If_AsrIfFeeMb9df126Fuji01Sub, 
 *                                              Infineon_Tc1767Inf01Sub, Infineon_Tc178xInf01Sub, Infineon_Tc1797Inf01Sub, Infineon_Tc1797Inf02Sub
 *  01.06.10  2012-03-13  Ht                    add Gw_AsrPduRCfg5, Il_AsrComCfg5, Il_AsrIpduMCfg5, Cdd_AsrCddCfg5,
 *                                              Tp_Asr4TpCan, Diag_Asr4Dcm, Diag_Asr4Dem
 *  01.06.11  2012-03-20  Ht                    add Cp_AsrCcp, Cp_XcpOnTcpIpAsr
 *  01.07.00  2012-07-26  Ht                    add Nm_Asr4NmCan, Nm_Asr4NmFr, Infineon_Xc2000Inf01Sub, Ccl_Asr4ComMCfg5, SysService_Asr4BswMCfg5, SysService_Asr4EcuM, SysService_AsrRamTst,
 *                                                  Ccl_Asr4SmLin
 *                                              add define REGSPACE - add support for ASR specification 4.0 R3
 *  01.07.01  2012-10-23  Seu                   add SysService_XmlSecurity
 *  01.07.02  2013-12-16  Seu                   MISRA compliance: usage of character "'" removed, typos corrected
 *********************************************************************************************************************/
#ifndef COMPILER_CFG_H
#define COMPILER_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
/* Package Merger: Start Section CompilerCfgIncludes */



/* Package Merger: Stop Section CompilerCfgIncludes */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define AUTOSAR_COMSTACKDATA

#define MSR_REGSPACE  REGSPACE

/* Configurable memory class for pointers to registers (e.g. static volatile CONSTP2VAR(uint16, PWM_CONST, REGSPACE)). */
#define REGSPACE


/* due to compatibility to ASR 2.1 */
#define _STATIC_   STATIC
#define _INLINE_   INLINE

/* Package Merger: Start Section CompilerCfgModuleList */



/**********************************************************************************************************************
 *  Cdd_AsrCdd START 
 *********************************************************************************************************************/

/* Copy the compiler abstraction defines for each of your configured CDDs and replace the prefix _CDD with the MSN of your configured CDD as higher case. */

#define _CDD_CODE
#define _CDD_APPL_DATA

/* Add additional compiler abstraction defines for each of you configured CDDs here. */

/**********************************************************************************************************************
 *  Cdd_AsrCdd END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  Can START    DRVCAN_RH850RSCANFDASR
 *********************************************************************************************************************/

#define CAN_CODE                                   /* CAN module code qualifier                */
#define CAN_STATIC_CODE                            /* CAN local code qualifier                 */
#define CAN_CONST                                  /* constant memory                          */
#define CAN_CONST_PBCFG                            /* postbuild generated constant/flash       */
#define CAN_VAR_NOINIT                             /* none initialized variables               */
#define CAN_VAR_INIT                               /* initialized variables                    */
#define CAN_VAR_PBCFG                              /* postbuild generated variables/dynamic RAM (CFG5 only) */
#define CAN_INT_CTRL                               /* access to Interrupt controller registers */
#define CAN_REG_CANCELL                            /* CAN cell register qualifier              */
#define CAN_RX_TX_DATA                             /* pointer width >= CAN_REG_CANCELL / CAN rx/tx data / RAM or SFR (rx data pointer for Indication and PreCopy functions to higher layers / tx data pointers / sdu from application) */
#define CAN_APPL_CODE                              /* Application code qualifier               */
#define CAN_APPL_CONST                             /* Application constant memory              */
#define CAN_APPL_VAR                               /* Application variables                    */
#define CAN_VAR_FAR                                /* far local variable qualifier             */
#define CAN_VAR_NEAR                               /* near local variable qualifier            */

#define CAN_PBCFG            CAN_CONST_PBCFG       /* for compatibility (used by EcuM)         */

/**********************************************************************************************************************
 *  Can END      DRVCAN_RH850RSCANFDASR
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CRYPTO_30_CRYWRAPPER START
 *********************************************************************************************************************/

#define CRYPTO_30_CRYWRAPPER_CODE
#define CRYPTO_30_CRYWRAPPER_APPL_CODE

#define CRYPTO_30_CRYWRAPPER_CONST

#define CRYPTO_30_CRYWRAPPER_VAR_NOINIT
#define CRYPTO_30_CRYWRAPPER_VAR_ZERO_INIT
#define CRYPTO_30_CRYWRAPPER_APPL_VAR
#define CRYPTO_30_CRYWRAPPER_APPL_DATA

/**********************************************************************************************************************
 *  CRYPTO_30_CRYWRAPPER END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CRYPTO_30_LIBCV START
 *********************************************************************************************************************/

#define CRYPTO_30_LIBCV_CODE
#define CRYPTO_30_LIBCV_APPL_CODE

#define CRYPTO_30_LIBCV_CONST

#define CRYPTO_30_LIBCV_VAR_NOINIT
#define CRYPTO_30_LIBCV_VAR_ZERO_INIT
#define CRYPTO_30_LIBCV_APPL_VAR
#define CRYPTO_30_LIBCV_APPL_DATA

#define CRYPTO_30_LIBCV_CRYPTOCV_APPL_VAR

/**********************************************************************************************************************
 *  CRYPTO_30_LIBCV END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  MEM_30_FBLHIS START
 *********************************************************************************************************************/

#define MEM_30_FBLHIS_VAR_NOINIT

#define MEM_30_FBLHIS_CONST

/**********************************************************************************************************************
 *  MEM_30_FBLHIS END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  BSWSTUB-COMM START
 *********************************************************************************************************************/

#define COMM_CODE

/**********************************************************************************************************************
 *  BSWSTUB-COMM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  FBLBM_HDR START
 *********************************************************************************************************************/

#define FBLBMHDR_CONST
#define FBLBMHDR_CODE

/**********************************************************************************************************************
 *  FBLBM_HDR END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  FBLBM_MAIN START
 *********************************************************************************************************************/

#define FBLBM_CONST
#define FBLBM_HEADER_CONST

/**********************************************************************************************************************
 *  FBLBM_MAIN END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  FblCw START
 *********************************************************************************************************************/

/* Module Constant Data */
#define FBLCW_CONST
/* Module Constant Data of the Postbuild Configuration */
#define FBLCW_PBCFG
/* Module Var Data of the Postbuild Configuration */
#define FBLCW_VAR_PBCFG


/* Module Implementation */
#define FBLCW_CODE

/* Module Variables which are initialized by the startup code or by the call of FblCw_InitMemory() */
#define FBLCW_VAR_NO_INIT
/* Module Variables which are initialized by call of FblCw_Init() */
#define FBLCW_VAR_CLEARED
/* Module Variables which are initialized by call of FblCw_Init() */
#define FBLCW_VAR_INIT

/* Application Code Implementation (e.g. Callbacks) */
#define FBLCW_APPL_CODE
/* Application Buffer which is located in RAM */
#define FBLCW_APPL_VAR
/* Application Buffer which is located in ROM or RAM */
#define FBLCW_APPL_DATA

/**********************************************************************************************************************
 *  FblCw END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  PDUR START
 *********************************************************************************************************************/

#define PDUR_CODE
#define PDUR_VAR_NO_INIT
#define PDUR_VAR_CLEARED
#define PDUR_VAR
#define PDUR_CONST
#define PDUR_PBCFG
#define PDUR_VAR_PBCFG
#define PDUR_APPL_DATA
#define PDUR_APPL_CODE

/**********************************************************************************************************************
 *  PDUR END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  CANIF START 
 *********************************************************************************************************************/

#define CANIF_CODE
#define CANIF_CODE_FAST
#define CANIF_CODE_ISR


#define CANIF_CONST
#define CANIF_CONST_FAST
#define CANIF_PBCFG

#define CANIF_VAR_PBCFG /* ESCAN00065502 */

#define CANIF_VAR_INIT
#define CANIF_VAR_NOINIT
#define CANIF_VAR_ZERO_INIT

#define CANIF_VAR_INIT_FAST
#define CANIF_VAR_NOINIT_FAST
#define CANIF_VAR_ZERO_INIT_FAST

#define CANIF_VAR_INIT_NOCACHE
#define CANIF_VAR_NOINIT_NOCACHE
#define CANIF_VAR_ZERO_INIT_NOCACHE


#define CANIF_APPL_CODE
#define CANIF_APPL_VAR
#define CANIF_APPL_PBCFG


/*-------------------------------------------------------------------------------------------------------------------*/

/* Has to be kept in default section -> Default access */
#define CANIF_VAR_STACK


/* VAR section of higher layers (TP / NM / PduR / CanSM / EcuM) automatically mapped to APPL_VAR */
#define CANIF_APPL_STATE_VAR   CANIF_APPL_VAR
#define CANIF_APPL_MSG_VAR     CANIF_APPL_VAR

/* VAR section of lower layers (CAN Driver / Transceiver Driver) automatically mapped to APPL_VAR */
#define CANIF_CBK_VAR          CANIF_APPL_VAR

/* #define CANIF_CBK_TRCV_VAR     CANIF_CBK_VAR    not used yet */
#define CANIF_CBK_DRV_VAR      CANIF_CBK_VAR

/* Code sections - DO NOT MODIFY */
#define CANIF_CBK_TRCV_CODE     CANIF_APPL_CODE
#define CANIF_CBK_CANDRV_CODE   CANIF_APPL_CODE
#define CANIF_APPL_STATE_CODE   CANIF_APPL_CODE
#define CANIF_APPL_MSG_CODE     CANIF_APPL_CODE


/* Upper layer data pointer */
#define CANIF_UL_STANDARD_VAR    CANIF_APPL_VAR
#define CANIF_UL_ADVANCED_VAR    CANIF_APPL_VAR
#define CANIF_UL_OSEKNM_VAR      CANIF_APPL_VAR

/**********************************************************************************************************************
 *  CANIF END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CRYIF START
 *********************************************************************************************************************/

#define CRYIF_CODE
#define CRYIF_CONST

#define CRYIF_VAR_ZERO_INIT
#define CRYIF_APPL_VAR
#define CRYIF_APPL_DATA

/**********************************************************************************************************************
 *  CRYIF END
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  If_AsrIfFeeSmallSector START
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_PUBLIC_CODE
#define FEE_30_SMALLSECTOR_PRIVATE_CODE

#define FEE_30_SMALLSECTOR_APPL_DATA
#define FEE_30_SMALLSECTOR_FAST_DATA

#define FEE_30_SMALLSECTOR_PRIVATE_CONST
#define FEE_30_SMALLSECTOR_PUBLIC_CONST

#define FEE_30_SMALLSECTOR_NVM_CODE

/* In ASR4 SchM/RTE declares Fee_MainFunction, using FEE_30_SMALLSECTOR_CODE *
 * It MUST be defined to FEE_30_SMALLSECTOR_PUBLIC_CODE!                     */
#define FEE_30_SMALLSECTOR_CODE FEE_30_SMALLSECTOR_PUBLIC_CODE

/**********************************************************************************************************************
 *  If_AsrIfFeeSmallSector END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  FEE_30_FLEXNOR START 
 *********************************************************************************************************************/

#define FEE_30_FLEXNOR_CODE

#define FEE_30_FLEXNOR_VAR
#define FEE_30_FLEXNOR_APPL_VAR

#define FEE_30_FLEXNOR_CONST
#define FEE_30_FLEXNOR_PBCFG
#define FEE_30_FLEXNOR_VAR_PBCFG

#define FEE_30_FLEXNOR_VAR_INIT
#define FEE_30_FLEXNOR_VAR_NOINIT
#define FEE_30_FLEXNOR_VAR_ZERO_INIT

/**********************************************************************************************************************
 *  FEE_30_FLEXNOR END
 *********************************************************************************************************************/


/* Additional defines necessary for MCAL */
#define _INTERRUPT_  __interrupt
#define STATIC  static
/* Inline assembler support for syncp instruction */
#define EXECUTE_SYNCP()           __asm("syncp")
/* Inline assembler support for NOP instruction */
#define ASM_NOP() __asm("nop")
/* Inline assembler support for HALT instruction */
#define ASM_HALT() __asm("halt")

#define DEFINE_FE_INTERRUPT _Pragma("ghs interrupt(FE)")

/* ---------------------------------------------------------------------------*/
/*                   ADC                                                      */
/* ---------------------------------------------------------------------------*/

#define ADC_PUBLIC_CODE                /* API functions                       */
#define ADC_PUBLIC_CONST               /* API constants                       */
#define ADC_PRIVATE_CODE               /* Internal functions                  */
#define ADC_PRIVATE_DATA               /* Module internal data                */
#define ADC_PRIVATE_CONST              /* Internal ROM Data                   */
#define ADC_APPL_CODE                  /* callbacks of the Application        */
#define ADC_APPL_CONST                 /* Applications' ROM Data              */
#define ADC_APPL_DATA                  /* Applications' RAM Data              */
#define ADC_FAST_DATA                  /* 'Near' RAM Data                     */
#define ADC_FAST_CODE                  /* API functions                       */
#define ADC_FAST_CONST                 /* API constants                       */
#define ADC_FAST_DATA                  /* API constants                       */
#define ADC_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define ADC_CONFIG_DATA                /* Config. dependent (reg. size) data  */
#define ADC_INIT_DATA                  /* Data which is initialized during Startup */
#define ADC_NOINIT_DATA                /* Data which is not initialized during Startup */
#define ADC_CONST                      /* Data Constants                      */
#define ADC_VAR                        /* Memory class for global variables which are initialized after every reset */
#define ADC_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver     */
#define ADC_CODE
#define ADC_CALLOUT_CODE
#define ADC_VAR_POWER_ON_INIT
#define ADC_VAR_FAST


/* ---------------------------------------------------------------------------*/
/*                   CORTST                                                   */
/* ---------------------------------------------------------------------------*/

#define CORTST_PUBLIC_CODE             /* API functions                       */
#define CORTST_PUBLIC_CONST            /* API constants                       */
#define CORTST_PRIVATE_CODE            /* Internal functions                  */
#define CORTST_PRIVATE_DATA            /* Module internal data                */
#define CORTST_PRIVATE_CONST           /* Internal ROM Data                   */
#define CORTST_APPL_CODE               /* callbacks of the Application        */
#define CORTST_APPL_CONST              /* Applications' ROM Data              */
#define CORTST_APPL_DATA               /* Applications' RAM Data              */
#define CORTST_FAST_DATA               /* 'Near' RAM Data                     */
#define CORTST_FAST_CODE               /* API functions                       */
#define CORTST_FAST_CONST              /* API constants                       */
#define CORTST_FAST_DATA               /* API constants                       */
#define CORTST_CONFIG_CONST            /* Desc. Tables -> Config-dependent    */
#define CORTST_CONFIG_DATA             /* Config. dependent (reg. size) data  */
#define CORTST_INIT_DATA               /* Data which is initialized during Startup */
#define CORTST_NOINIT_DATA             /* Data which is not initialized during Startup */
#define CORTST_CONST                   /* Data Constants                      */
#define CORTST_VAR                     /* Memory class for global variables which are initialized after every reset */
#define CORTST_VAR_NOINIT              /* Memory class for global variables which are initialized by driver     */
#define CORTST_CODE
#define CORTST_CALLOUT_CODE
#define CORTST_VAR_POWER_ON_INIT
#define CORTST_VAR_FAST


/* ---------------------------------------------------------------------------*/
/*                   DIO                                                      */
/* ---------------------------------------------------------------------------*/

#define DIO_PUBLIC_CODE                /* API functions                       */
#define DIO_PUBLIC_CONST               /* API constants                       */
#define DIO_PRIVATE_CODE               /* Internal functions                  */
#define DIO_PRIVATE_DATA               /* Module internal data                */
#define DIO_PRIVATE_CONST              /* Internal ROM Data                   */
#define DIO_APPL_CODE                  /* callbacks of the Application        */
#define DIO_APPL_CONST                 /* Applications' ROM Data              */
#define DIO_APPL_DATA                  /* Applications' RAM Data              */
#define DIO_FAST_DATA                  /* 'Near' RAM Data                     */
#define DIO_FAST_CODE                  /* API functions                       */
#define DIO_FAST_CONST                 /* API constants                       */
#define DIO_FAST_DATA                  /* API constants                       */
#define DIO_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define DIO_CONFIG_DATA                /* Config. dependent (reg. size) data  */
#define DIO_INIT_DATA                  /* Data which is initialized during Startup */
#define DIO_NOINIT_DATA                /* Data which is not initialized during Startup */
#define DIO_CONST                      /* Data Constants                      */
#define DIO_VAR                        /* Memory class for global variables which are initialized after every reset  */
#define DIO_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver     */
#define DIO_CODE
#define DIO_CALLOUT_CODE
#define DIO_VAR_POWER_ON_INIT
#define DIO_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   FLS                                                      */
/* ---------------------------------------------------------------------------*/

#define FLS_PUBLIC_CODE                /* API functions                       */
#define FLS_PUBLIC_CONST               /* API constants                       */
#define FLS_PRIVATE_CODE               /* Internal functions                  */
#define FLS_PRIVATE_DATA               /* Module internal data                */
#define FLS_PRIVATE_CONST              /* Internal ROM Data                   */
#define FLS_APPL_CODE                  /* callbacks of the Application        */
#define FLS_APPL_CONST                 /* Applications' ROM Data              */
#define FLS_APPL_DATA                  /* Applications' RAM Data              */
#define FLS_FAST_DATA                  /* 'Near' RAM Data                     */
#define FLS_FAST_CODE                  /* API functions                       */
#define FLS_FAST_CONST                 /* API constants                       */
#define FLS_FAST_DATA                  /* API constants                       */
#define FLS_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define FLS_CONFIG_DATA                /* Config. dependent (reg. size) data  */
#define FLS_INIT_DATA                  /* Data which is initialized during Startup */
#define FLS_NOINIT_DATA                /* Data which is not initialized during Startup */
#define FLS_CONST                      /* Data Constants                      */
#define FLS_VAR                        /* Memory class for global variables which are initialized after every reset */
#define FLS_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver     */
#define FLS_CODE
#define FLS_CALLOUT_CODE
#define FLS_VAR_POWER_ON_INIT
#define FLS_VAR_FAST


/* ---------------------------------------------------------------------------*/
/*                   FLSTST                                                   */
/* ---------------------------------------------------------------------------*/

#define FLSTST_PUBLIC_CODE             /* API functions                       */
#define FLSTST_PUBLIC_CONST            /* API constants                       */
#define FLSTST_PRIVATE_CODE            /* Internal functions                  */
#define FLSTST_PRIVATE_DATA            /* Module internal data                */
#define FLSTST_PRIVATE_CONST           /* Internal ROM Data                   */
#define FLSTST_APPL_CODE               /* callbacks of the Application        */
#define FLSTST_APPL_CONST              /* Applications' ROM Data              */
#define FLSTST_APPL_DATA               /* Applications' RAM Data              */
#define FLSTST_FAST_DATA               /* 'Near' RAM Data                     */
#define FLSTST_FAST_CODE               /* API functions                       */
#define FLSTST_FAST_CONST              /* API constants                       */
#define FLSTST_FAST_DATA               /* API constants                       */
#define FLSTST_CONFIG_CONST            /* Desc. Tables -> Config-dependent    */
#define FLSTST_CONFIG_DATA             /* Config. dependent (reg. size) data  */
#define FLSTST_INIT_DATA               /* Data which is initialized during Startup */
#define FLSTST_NOINIT_DATA             /* Data which is not initialized during Startup */
#define FLSTST_CONST                   /* Data Constants                      */
#define FLSTST_VAR                     /* Memory class for global variables which are initialized after every reset */
#define FLSTST_VAR_NOINIT              /* Memory class for global variables which are initialized by driver     */
#define FLSTST_CODE
#define FLSTST_CALLOUT_CODE
#define FLSTST_VAR_POWER_ON_INIT
#define FLSTST_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   GPT                                                      */
/* ---------------------------------------------------------------------------*/

#define GPT_PUBLIC_CODE                /* API functions                       */
#define GPT_PUBLIC_CONST               /* API constants                       */
#define GPT_PRIVATE_CODE               /* Internal functions                  */
#define GPT_PRIVATE_DATA               /* Module internal data                */
#define GPT_PRIVATE_CONST              /* Internal ROM Data                   */
#define GPT_APPL_CODE                  /* callbacks of the Application        */
#define GPT_APPL_CONST                 /* Applications' ROM Data              */
#define GPT_APPL_DATA                  /* Applications' RAM Data              */
#define GPT_FAST_DATA                  /* 'Near' RAM Data                     */
#define GPT_FAST_CODE                  /* API functions                       */
#define GPT_FAST_CONST                 /* API constants                       */
#define GPT_FAST_DATA                  /* API constants                       */
#define GPT_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define GPT_CONFIG_DATA                /* Config. dependent (reg. size) data  */
#define GPT_INIT_DATA                  /* Data which is initialized during Startup */
#define GPT_NOINIT_DATA                /* Data which is not initialized during Startup */
#define GPT_CONST                      /* Data Constants                      */
#define GPT_VAR                        /* Memory class for global variables which are initialized after every reset */
#define GPT_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver     */
#define GPT_CODE
#define GPT_CALLOUT_CODE
#define GPT_VAR_POWER_ON_INIT
#define GPT_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   ICU                                                      */
/* ---------------------------------------------------------------------------*/

#define ICU_PUBLIC_CODE                /* API functions                       */
#define ICU_PUBLIC_CONST               /* API constants                       */
#define ICU_PRIVATE_CODE               /* Internal functions                  */
#define ICU_PRIVATE_DATA               /* Module internal data                */
#define ICU_PRIVATE_CONST              /* Internal ROM Data                   */
#define ICU_APPL_CODE                  /* callbacks of the Application        */
#define ICU_APPL_CONST                 /* Applications' ROM Data              */
#define ICU_APPL_DATA                  /* Applications' RAM Data              */
#define ICU_FAST_DATA                  /* 'Near' RAM Data                     */
#define ICU_FAST_CODE                  /* API functions                       */
#define ICU_FAST_CONST                 /* API constants                       */
#define ICU_FAST_DATA                  /* API constants                       */
#define ICU_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define ICU_CONFIG_DATA                /* Config. dependent (reg. size) data  */
#define ICU_INIT_DATA                  /* Data which is initialized during Startup */
#define ICU_NOINIT_DATA                /* Data which is not initialized during Startup */
#define ICU_CONST                      /* Data Constants                      */
#define ICU_VAR                        /* Memory class for global variables which are initialized after every reset */
#define ICU_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver     */
#define ICU_CODE
#define ICU_CALLOUT_CODE
#define ICU_VAR_POWER_ON_INIT
#define ICU_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   MCU                                                      */
/* ---------------------------------------------------------------------------*/

#define MCU_PUBLIC_CODE                /* API functions                       */
#define MCU_PUBLIC_CONST               /* API constants                       */
#define MCU_PRIVATE_CODE               /* Internal functions                  */
#define MCU_PRIVATE_DATA               /* Module internal data                */
#define MCU_PRIVATE_CONST              /* Internal ROM Data                   */
#define MCU_APPL_CODE                  /* callbacks of the Application        */
#define MCU_APPL_CONST                 /* Applications' ROM Data              */
#define MCU_APPL_DATA                  /* Applications' RAM Data              */
#define MCU_FAST_DATA                  /* 'Near' RAM Data                     */
#define MCU_FAST_CODE                  /* API functions                       */
#define MCU_FAST_CONST                 /* API constants                       */
#define MCU_FAST_DATA                  /* API constants                       */
#define MCU_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define MCU_CONFIG_DATA                /* Config. dependent (reg. size) data  */
#define MCU_INIT_DATA                  /* Data which is initialized during Startup */
#define MCU_NOINIT_DATA                /* Data which is not initialized during Startup */
#define MCU_CONST                      /* Data Constants                      */
#define MCU_VAR                        /* Memory class for global variables which are initialized after every reset  */
#define MCU_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver     */
#define MCU_CODE
#define MCU_CALLOUT_CODE
#define MCU_VAR_POWER_ON_INIT
#define MCU_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   PORT                                                     */
/* ---------------------------------------------------------------------------*/

#define PORT_PUBLIC_CODE                /* API functions                      */
#define PORT_PUBLIC_CONST               /* API constants                      */
#define PORT_PRIVATE_CODE               /* Internal functions                 */
#define PORT_PRIVATE_DATA               /* Module internal data               */
#define PORT_PRIVATE_CONST              /* Internal ROM Data                  */
#define PORT_APPL_CODE                  /* callbacks of the Application       */
#define PORT_APPL_CONST                 /* Applications' ROM Data             */
#define PORT_APPL_DATA                  /* Applications' RAM Data             */
#define PORT_FAST_DATA                  /* 'Near' RAM Data                    */
#define PORT_FAST_CODE                  /* API functions                      */
#define PORT_FAST_CONST                 /* API constants                      */
#define PORT_FAST_DATA                  /* API constants                      */
#define PORT_CONFIG_CONST               /* Desc. Tables -> Config-dependent   */
#define PORT_CONFIG_DATA                /* Config. dependent (reg. size) data */
#define PORT_INIT_DATA                  /* Data which is initialized during Startup */
#define PORT_NOINIT_DATA                /* Data which is not initialized during Startup */
#define PORT_CONST                      /* Data Constants Memory class for global variables which are initialized after every reset */
#define PORT_VAR
#define PORT_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver    */
#define PORT_CODE
#define PORT_CALLOUT_CODE
#define PORT_VAR_POWER_ON_INIT
#define PORT_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   PWM                                                      */
/* ---------------------------------------------------------------------------*/

#define PWM_PUBLIC_CODE                /* API functions                       */
#define PWM_PUBLIC_CONST               /* API constants                       */
#define PWM_PRIVATE_CODE               /* Internal functions                  */
#define PWM_PRIVATE_DATA               /* Module internal data                */
#define PWM_PRIVATE_CONST              /* Internal ROM Data                   */
#define PWM_APPL_CODE                  /* callbacks of the Application        */
#define PWM_APPL_CONST                 /* Applications' ROM Data              */
#define PWM_APPL_DATA                  /* Applications' RAM Data              */
#define PWM_FAST_DATA                  /* 'Near' RAM Data                     */
#define PWM_FAST_CODE                  /* API functions                       */
#define PWM_FAST_CONST                 /* API constants                       */
#define PWM_FAST_DATA                  /* API constants                       */
#define PWM_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define PWM_CONFIG_DATA                /* Config. dependent (reg. size) data  */
#define PWM_INIT_DATA                  /* Data which is initialized during Startup */
#define PWM_NOINIT_DATA                /* Data which is not initialized during Startup */
#define PWM_CONST                      /* Data Constants                      */
#define PWM_VAR                        /* Memory class for global variables which are initialized after every reset */
#define PWM_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver     */
#define PWM_CODE
#define PWM_CALLOUT_CODE
#define PWM_VAR_POWER_ON_INIT
#define PWM_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   RAMTST                                                     */
/* ---------------------------------------------------------------------------*/

#define RAMTST_PUBLIC_CODE             /* API functions                       */
#define RAMTST_PUBLIC_CONST            /* API constants                       */
#define RAMTST_PRIVATE_CODE            /* Internal functions                  */
#define RAMTST_PRIVATE_DATA            /* Module internal data                */
#define RAMTST_PRIVATE_CONST           /* Internal ROM Data                   */
#define RAMTST_APPL_CODE               /* callbacks of the Application        */
#define RAMTST_APPL_CONST              /* Applications' ROM Data              */
#define RAMTST_APPL_DATA               /* Applications' RAM Data              */
#define RAMTST_FAST_DATA               /* 'Near' RAM Data                     */
#define RAMTST_FAST_CODE               /* API functions                       */
#define RAMTST_FAST_CONST              /* API constants                       */
#define RAMTST_FAST_DATA               /* API constants                       */
#define RAMTST_CONFIG_CONST            /* Desc. Tables -> Config-dependent    */
#define RAMTST_CONFIG_DATA             /* Config. dependent (reg. size) data  */
#define RAMTST_INIT_DATA               /* Data which is initialized during Startup */
#define RAMTST_NOINIT_DATA             /* Data which is not initialized during Startup */
#define RAMTST_CONST                   /* Data Constants                      */
#define RAMTST_VAR                     /* Memory class for global variables which are initialized after every reset */
#define RAMTST_VAR_NOINIT              /* Memory class for global variables which are initialized by driver     */
#define RAMTST_CODE
#define RAMTST_CALLOUT_CODE
#define RAMTST_VAR_POWER_ON_INIT
#define RAMTST_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   SPI                                                      */
/* ---------------------------------------------------------------------------*/

#define SPI_PUBLIC_CODE                /* API functions                       */
#define SPI_PUBLIC_CONST               /* API constants                       */
#define SPI_PRIVATE_CODE               /* Internal functions                  */
#define SPI_PRIVATE_DATA               /* Module internal data                */
#define SPI_PRIVATE_CONST              /* Internal ROM Data                   */
#define SPI_APPL_CODE                  /* callbacks of the Application        */
#define SPI_APPL_CONST                 /* Applications' ROM Data              */
#define SPI_APPL_DATA                  /* Applications' RAM Data              */
#define SPI_FAST_DATA                  /* 'Near' RAM Data                     */
#define SPI_FAST_CODE                  /* API functions                       */
#define SPI_FAST_CONST                 /* API constants                       */
#define SPI_FAST_DATA                  /* API constants                       */
#define SPI_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define SPI_CONFIG_DATA                /* Config. dependent (reg. size) data  */
#define SPI_INIT_DATA                  /* Data which is initialized during Startup */
#define SPI_NOINIT_DATA                /* Data which is not initialized during Startup */
#define SPI_CONST                      /* Data Constants                      */
#define SPI_VAR                        /* Memory class for global variables which are initialized after every reset */
#define SPI_VAR_NOINIT                 /* Memory class for global variables which are initialized by driver     */
#define SPI_CODE
#define SPI_CALLOUT_CODE
#define SPI_VAR_POWER_ON_INIT
#define SPI_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   WDG   DRIVER A                                           */
/* ---------------------------------------------------------------------------*/

#define WDG_59_DRIVERA_PUBLIC_CODE        /* API functions                    */
#define WDG_59_DRIVERA_PUBLIC_CONST       /* API constants                    */
#define WDG_59_DRIVERA_PRIVATE_CODE       /* Internal functions               */
#define WDG_59_DRIVERA_PRIVATE_DATA       /* Module internal data             */
#define WDG_59_DRIVERA_PRIVATE_CONST      /* Internal ROM Data                */
#define WDG_59_DRIVERA_APPL_CODE          /* callbacks of the Application     */
#define WDG_59_DRIVERA_APPL_CONST         /* Applications' ROM Data           */
#define WDG_59_DRIVERA_APPL_DATA          /* Applications' RAM Data           */
#define WDG_59_DRIVERA_FAST_DATA          /* 'Near' RAM Data                  */
#define WDG_59_DRIVERA_FAST_CODE          /* API functions                    */
#define WDG_59_DRIVERA_FAST_CONST         /* API constants                    */
#define WDG_59_DRIVERA_FAST_DATA          /* API constants                    */
#define WDG_59_DRIVERA_CONFIG_CONST       /* Desc. Tables -> Config-dependent */
#define WDG_59_DRIVERA_CONFIG_DATA        /* Config. dependent (reg. size) data */
#define WDG_59_DRIVERA_INIT_DATA          /* Data which is initialized during Startup */
#define WDG_59_DRIVERA_NOINIT_DATA        /* Data which is not initialized during Startup */
#define WDG_59_DRIVERA_CONST              /* Data Constants */
#define WDG_59_DRIVERA_VAR                /* Memory class for global variables which are initialized after every reset */
#define WDG_59_DRIVERA_VAR_NOINIT         /* Memory class for global variables which are initialized by driver     */
#define WDG_59_DRIVERA_CODE
#define WDG_59_DRIVERA_CALLOUT_CODE
#define WDG_59_DRIVERA_VAR_POWER_ON_INIT
#define WDG_59_DRIVERA_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   WDG   DRIVER B                                           */
/* ---------------------------------------------------------------------------*/

#define WDG_59_DRIVERB_PUBLIC_CODE        /* API functions                    */
#define WDG_59_DRIVERB_PUBLIC_CONST       /* API constants                    */
#define WDG_59_DRIVERB_PRIVATE_CODE       /* Internal functions               */
#define WDG_59_DRIVERB_PRIVATE_DATA       /* Module internal data             */
#define WDG_59_DRIVERB_PRIVATE_CONST      /* Internal ROM Data                */
#define WDG_59_DRIVERB_APPL_CODE          /* callbacks of the Application     */
#define WDG_59_DRIVERB_APPL_CONST         /* Applications' ROM Data           */
#define WDG_59_DRIVERB_APPL_DATA          /* Applications' RAM Data           */
#define WDG_59_DRIVERB_FAST_DATA          /* 'Near' RAM Data                  */
#define WDG_59_DRIVERB_FAST_CODE          /* API functions                    */
#define WDG_59_DRIVERB_FAST_CONST         /* API constants                    */
#define WDG_59_DRIVERB_FAST_DATA          /* API constants                    */
#define WDG_59_DRIVERB_CONFIG_CONST       /* Desc. Tables -> Config-dependent */
#define WDG_59_DRIVERB_CONFIG_DATA        /* Config. dependent (reg. size) data */
#define WDG_59_DRIVERB_INIT_DATA          /* Data which is initialized during Startup */
#define WDG_59_DRIVERB_NOINIT_DATA        /* Data which is not initialized during Startup */
#define WDG_59_DRIVERB_CONST              /* Data Constants */
#define WDG_59_DRIVERB_VAR                /* Memory class for global variables which are initialized after every reset */
#define WDG_59_DRIVERB_VAR_NOINIT         /* Memory class for global variables which are initialized by driver     */
#define WDG_59_DRIVERB_CODE
#define WDG_59_DRIVERB_CALLOUT_CODE
#define WDG_59_DRIVERB_VAR_POWER_ON_INIT
#define WDG_59_DRIVERB_VAR_FAST

/* ---------------------------------------------------------------------------*/
/*                   WDG   DRIVER C                                           */
/* ---------------------------------------------------------------------------*/

#define WDG_59_DRIVERC_PUBLIC_CODE        /* API functions                    */
#define WDG_59_DRIVERC_PUBLIC_CONST       /* API constants                    */
#define WDG_59_DRIVERC_PRIVATE_CODE       /* Internal functions               */
#define WDG_59_DRIVERC_PRIVATE_DATA       /* Module internal data             */
#define WDG_59_DRIVERC_PRIVATE_CONST      /* Internal ROM Data                */
#define WDG_59_DRIVERC_APPL_CODE          /* callbacks of the Application     */
#define WDG_59_DRIVERC_APPL_CONST         /* Applications' ROM Data           */
#define WDG_59_DRIVERC_APPL_DATA          /* Applications' RAM Data           */
#define WDG_59_DRIVERC_FAST_DATA          /* 'Near' RAM Data                  */
#define WDG_59_DRIVERC_FAST_CODE          /* API functions                    */
#define WDG_59_DRIVERC_FAST_CONST         /* API constants                    */
#define WDG_59_DRIVERC_FAST_DATA          /* API constants                    */
#define WDG_59_DRIVERC_CONFIG_CONST       /* Desc. Tables -> Config-dependent */
#define WDG_59_DRIVERC_CONFIG_DATA        /* Config. dependent (reg. size) data */
#define WDG_59_DRIVERC_INIT_DATA          /* Data which is initialized during Startup */
#define WDG_59_DRIVERC_NOINIT_DATA        /* Data which is not initialized during Startup */
#define WDG_59_DRIVERC_CONST              /* Data Constants */
#define WDG_59_DRIVERC_VAR                /* Memory class for global variables which are initialized after every reset */
#define WDG_59_DRIVERC_VAR_NOINIT         /* Memory class for global variables which are initialized by driver     */
#define WDG_59_DRIVERC_CODE
#define WDG_59_DRIVERC_CALLOUT_CODE
#define WDG_59_DRIVERC_VAR_POWER_ON_INIT
#define WDG_59_DRIVERC_VAR_FAST


/**********************************************************************************************************************
 *  CSM START
 *********************************************************************************************************************/

#define CSM_CODE
#define CSM_APPL_CODE
#define CSM_RTE_CODE

#define CSM_CONST

#define CSM_VAR_NOINIT
#define CSM_VAR_ZERO_INIT
#define CSM_APPL_VAR
#define CSM_APPL_CONST

/**********************************************************************************************************************
 *  CSM END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VSECPRIM START
 *********************************************************************************************************************/

#define VSECPRIM_CODE
#define VSECPRIM_CONST
#define VSECPRIM_APPL_CONST
#define VSECPRIM_APPL_VAR
#define VSECPRIM_APPL_DATA

/**********************************************************************************************************************
 *  VSECPRIM END
 *********************************************************************************************************************/


# define DET_CODE
# define DET_VAR
# define DET_APPL_DATA
# define DET_CONST



/**********************************************************************************************************************
 *  WRAPNV START
 *********************************************************************************************************************/

#define WRAPNV_CODE
#define WRAPNV_VAR_NOINIT
#define WRAPNV_CONST
#define WRAPNV_DATA
#define WRAPNV_NVM_APPL_DATA

/**********************************************************************************************************************
 *  WRAPNV END
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  CANTP START 
 *********************************************************************************************************************/

#define CANTP_CODE
#define CANTP_CONST

#define CANTP_PBCFG
#define CANTP_VAR_PBCFG

#define CANTP_VAR_CLEARED
#define CANTP_VAR_NO_INIT

#define CANTP_APPL_CODE
#define CANTP_APPL_DATA

/**********************************************************************************************************************
 *  CANTP END
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VSTDLIB START
 *********************************************************************************************************************/

#define VSTDLIB_CODE
#define VSTDLIB_VAR_FAR
#define VSTDLIB_APPL_VAR
#define VSTDLIB_CONST

/**********************************************************************************************************************
 *  VSTDLIB END
 *********************************************************************************************************************/





#define _GREENHILLS_C_S32K14x_
#define _GREENHILLS_C_S32K1xx_
#define _GREENHILLS_C_S32K1XX_

#define _GREENHILLS_C_S32K2XX_

#define _GREENHILLS_C_S32K3XX_

#define _GREENHILLS_C_S32N_

#define _GREENHILLS_C_S32R274_
#define _GREENHILLS_C_S32R294_
#define _GREENHILLS_C_S32R_

#define _GREENHILLS_C_S32XX_

#define _GREENHILLS_C_S32G2XX_

#define _GREENHILLS_C_S32S2XX_
#define _GREENHILLS_C_S32ZSE_
#define _GREENHILLS_C_S32ZE_

#define _GREENHILLS_C_IMX8QXP_
#define _GREENHILLS_C_IMX8_

#define _GREENHILLS_C_IMXRT_
#define _GREENHILLS_C_IMXRT1170_

#define _GREENHILLS_C_MWCT101xS_

#define _GREENHILLS_C_SAF85_S32R41_
#define _GREENHILLS_C_SAF85_
#define _GREENHILLS_C_SAF85XX_SAF86XX_S32R41_
#define _GREENHILLS_C_SAF85XX_

#define _GREENHILLS_C_MPC564XC_
#define _GREENHILLS_C_MPC56XXK_
#define _GREENHILLS_C_MPC560XB_
#define _GREENHILLS_C_MPC567XF_
#define _GREENHILLS_C_XPC56XXL_
#define _GREENHILLS_C_MPC567XR_

#define _GREENHILLS_C_MPC5777C_
#define _GREENHILLS_C_MPC577XM_
#define _GREENHILLS_C_MPC577XK_
#define _GREENHILLS_C_MPC574XG_
#define _GREENHILLS_C_MPC574XR_
#define _GREENHILLS_C_MPC574XP_

#define _GREENHILLS_C_SPC560XB_
#define _GREENHILLS_C_SPC56XXL_
#define _GREENHILLS_C_SPC56XXP_

#define _GREENHILLS_C_SPC574SX_
#define _GREENHILLS_C_SPC570SX_
#define _GREENHILLS_C_SPC574KX_

#define _GREENHILLS_C_SPC58XBCGH_ 1
#define _GREENHILLS_C_SPC58XBCG_
#define _GREENHILLS_C_SPC58XEN_
#define _GREENHILLS_C_SPC58XH_
#define _GREENHILLS_C_SPC582B_

#define _GREENHILLS_C_SR6G7_
#define _GREENHILLS_C_SR6GX_
#define _GREENHILLS_C_SR6P6_
#define _GREENHILLS_C_SR6PX_
#define _GREENHILLS_C_SR6PG_

#ifndef __ghs__
#define __ghs__
#endif

#ifndef _GHS_C_SAM_
#define _GHS_C_SAM_
#endif

#define _GREENHILLS_C_RH850_
#define _GREENHILLS_C_V850_

#define _GREENHILLS_C_MXS40_ 1U

#define _GHS_C_TRICORE_ 1U

#define _GHS_C_ARM_ 1U

#define _GHS_C_Z20K14XM_

#define _GREENHILLS_C_ALIOTHXX_

#define _GREENHILLS_C_XC2XX_

#define _GHS_C_THA6_

#define _GREENHILLS_C_JOURNEY6X_

#define _GREENHILLS_C_FC7XXX_



/* Package Merger: Stop Section CompilerCfgModuleList */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif  /* COMPILER_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Compiler_Cfg.h
 *********************************************************************************************************************/
