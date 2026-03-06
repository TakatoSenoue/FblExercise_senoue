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
 *            Module: Smh
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: SecMPar.h
 *   Generation Time: 2026-02-17 14:09:27
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


#if !defined(SECMPAR_H)
#define SECMPAR_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

#include "Sec_Inc.h"

/***********************************************************************************************************************
 *  FUNCTION PROTOTYPES
 **********************************************************************************************************************/

#define SECM_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* Decryption functions */
SecM_StatusType DecryptAes128 ( const V_MEMRAM1 SecM_DecInputParamType V_MEMRAM2 V_MEMRAM3 * pInBlock,
   V_MEMRAM1 SecM_DecOutputParamType V_MEMRAM2 V_MEMRAM3 * pOutBlock,
   const V_MEMRAM1 SecM_DecParamType V_MEMRAM2 V_MEMRAM3 * pDecParam);



SecM_StatusType SecM_VerifyClass_DDD( V_MEMRAM1 SecM_SignatureParamType V_MEMRAM2 V_MEMRAM3 * pVerifyParam );
SecM_StatusType SecM_Verify_ClassC( V_MEMRAM1 SecM_SignatureParamType V_MEMRAM2 V_MEMRAM3 * pVerifyParam );
SecM_StatusType SecM_VerifyClass_CCC( V_MEMRAM1 SecM_SignatureParamType V_MEMRAM2 V_MEMRAM3 * pVerifyParam );

SecM_StatusType SecM_VerificationClassDDD( V_MEMRAM1 SecM_VerifyParamType V_MEMRAM2 V_MEMRAM3 * pVerifyParam );
SecM_StatusType SecM_Verification_ClassC( V_MEMRAM1 SecM_VerifyParamType V_MEMRAM2 V_MEMRAM3 * pVerifyParam );
SecM_StatusType SecM_Verification_ClassCCC( V_MEMRAM1 SecM_VerifyParamType V_MEMRAM2 V_MEMRAM3 * pVerifyParam );



#define SECM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

#define SECM_START_SEC_VAR
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define SECM_STOP_SEC_VAR
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define SECM_START_SEC_CONST
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/* Decryption key for security class AAA */
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 AesKeyKey[16];
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 AesKeyIV[16];
/* Public key for Ed25519 signature check */
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 ClassCCC_Ed25519Key[32];
/* Example key for asymmetric signature checks (CMAC or HMAC) */
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 ClassC_Key[16];
/* Public key for RSA (1024 Bits) */
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 ClassCCC_Rsa1024KeyExp[4];
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 ClassCCC_Rsa1024KeyMod[128];
/* Public key for RSA (2048 Bits) */
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 ClassCCC_Rsa2048KeyExp[4];
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 ClassCCC_Rsa2048KeyMod[256];
/* Public key for RSA (3072 Bits) */
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 ClassCCC_Rsa3072KeyExp[4];
V_MEMROM0 extern V_MEMROM1 vuint8 V_MEMROM2 ClassCCC_Rsa3072KeyMod[384];

V_MEMROM0 extern V_MEMROM1 SecM_CryptographicKeyType V_MEMROM2 SecM_CryptographicKeys[6];

V_MEMROM0 extern V_MEMROM1 SecM_DecPrimitiveType V_MEMROM2 SecM_DecryptionPrimitives[1];

V_MEMROM0 extern V_MEMROM1 SecM_CrcPrimitiveType V_MEMROM2 SecM_CrcPrimitives[1];


V_MEMROM0 extern V_MEMROM1 SecM_RamDataType V_MEMROM2 SecM_MacPrimitivesContextBuffs[1];

V_MEMROM0 extern V_MEMROM1 SecM_MacPrimitiveType V_MEMROM2 SecM_MacPrimitives[1];

V_MEMROM0 extern V_MEMROM1 SecM_RamDataType V_MEMROM2 SecM_SignaturePrimitivesContextBuffs[1];

V_MEMROM0 extern V_MEMROM1 SecM_SigPrimitiveType V_MEMROM2 SecM_SignaturePrimitives[1];



V_MEMROM0 extern V_MEMROM1 SecM_JobInfoType V_MEMROM2 SecM_JobInfo[4];


#define SECM_STOP_SEC_CONST
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#endif /* SECMPAR_H */
