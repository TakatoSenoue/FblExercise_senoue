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
 *            Module: Crypto_30_LibCv
 *           Program: FBL Vector SLP3 (FBL_Vector_SLP3)
 *          Customer: Vector Japan Co., Ltd.
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7016493AFP-C
 *    License Scope : The usage is restricted to CBD1900263_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Crypto_30_LibCv_Cfg.h
 *   Generation Time: 2026-02-10 09:18:59
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


#if !defined (CRYPTO_30_LIBCV_CFG_H)
#define CRYPTO_30_LIBCV_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Os.h"
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0759 EOF */ /* MD_CSL_18.4 */
#include "Csm_Types.h"
#include "vSecPrim.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#ifndef CRYPTO_30_LIBCV_USE_DUMMY_STATEMENT
#define CRYPTO_30_LIBCV_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CRYPTO_30_LIBCV_DUMMY_STATEMENT
#define CRYPTO_30_LIBCV_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CRYPTO_30_LIBCV_DUMMY_STATEMENT_CONST
#define CRYPTO_30_LIBCV_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef CRYPTO_30_LIBCV_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CRYPTO_30_LIBCV_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CRYPTO_30_LIBCV_ATOMIC_VARIABLE_ACCESS
#define CRYPTO_30_LIBCV_ATOMIC_VARIABLE_ACCESS 8u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CRYPTO_30_LIBCV_PROCESSOR_RH850_1649
#define CRYPTO_30_LIBCV_PROCESSOR_RH850_1649
#endif
#ifndef CRYPTO_30_LIBCV_COMP_GREENHILLS
#define CRYPTO_30_LIBCV_COMP_GREENHILLS
#endif
#ifndef CRYPTO_30_LIBCV_GEN_GENERATOR_MSR
#define CRYPTO_30_LIBCV_GEN_GENERATOR_MSR
#endif
#ifndef CRYPTO_30_LIBCV_CPUTYPE_BITORDER_LSB2MSB
#define CRYPTO_30_LIBCV_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef CRYPTO_30_LIBCV_CONFIGURATION_VARIANT_PRECOMPILE
#define CRYPTO_30_LIBCV_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CRYPTO_30_LIBCV_CONFIGURATION_VARIANT_LINKTIME
#define CRYPTO_30_LIBCV_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CRYPTO_30_LIBCV_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CRYPTO_30_LIBCV_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CRYPTO_30_LIBCV_CONFIGURATION_VARIANT
#define CRYPTO_30_LIBCV_CONFIGURATION_VARIANT CRYPTO_30_LIBCV_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CRYPTO_30_LIBCV_POSTBUILD_VARIANT_SUPPORT
#define CRYPTO_30_LIBCV_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define CRYPTO_30_LIBCV_SINGLE_PARTITION                                                            0u
#define Crypto_30_LibCv_MainApplicationId                                                           CRYPTO_30_LIBCV_SINGLE_PARTITION
#define Crypto_30_LibCv_MainPartitionIdx                                                            Crypto_30_LibCv_PartitionIndexOfCSLForCRYPTO_30_LIBCV_SINGLE_PARTITION
#define Crypto_30_LibCv_GetWatchdogTriggerFunctionOfGeneral()                                       FblRealTimeSupportVoid
#define CRYPTO_30_LIBCV_WATCHDOGTRIGGERFUNCTIONOFGENERAL                                            STD_ON
#define CRYPTO_30_LIBCV_KEYVALIDITYSETCALLOUTFCTNAMEOFCONFIGURABLECALLOUTS                          STD_OFF
#define CRYPTO_30_LIBCV_KEYVALUECHANGEDCALLOUTFCTNAMEOFCONFIGURABLECALLOUTS                         STD_OFF
#define Crypto_30_LibCv_GetNvWriteBlockFctNameOfNvStorage()                                         NvM_WriteBlock
#define Crypto_30_LibCv_GetNvmEnableSetRamBlockStatusOfGeneral()                                    FALSE
#define CRYPTO_30_LIBCV_NVM_ENABLE_SET_RAM_BLOCK_STATUS                                             STD_OFF
#define Crypto_30_LibCv_GetEnableAes192OfCipherPrimitives()                                         FALSE
#define CRYPTO_30_LIBCV_ENABLE_AES192                                                               STD_OFF
#define Crypto_30_LibCv_GetEnableAes256OfCipherPrimitives()                                         FALSE
#define CRYPTO_30_LIBCV_ENABLE_AES256                                                               STD_OFF
#define Crypto_30_LibCv_GetAlignKeyStorageOfGeneral()                                               FALSE
#define CRYPTO_30_LIBCV_ALIGN_KEY_STORAGE                                                           STD_OFF
#define Crypto_30_LibCv_GetCmacAesRoundkeyReuseOfMacPrimitives()                                    FALSE
#define CRYPTO_30_LIBCV_CMAC_AES_ROUNDKEY_REUSE                                                     STD_OFF
#define Crypto_30_LibCv_GetEnableKeyLockingOfGeneral()                                              TRUE
#define CRYPTO_30_LIBCV_ENABLE_KEY_LOCKING                                                          STD_ON
#define Crypto_30_LibCv_GetKeyElementDeleteOfGeneral()                                              FALSE
#define CRYPTO_30_LIBCV_KEY_ELEMENT_DELETE                                                          STD_OFF
#define Crypto_30_LibCv_GetMultiPartitionRuntimeChecksOfGeneral()                                   FALSE
#define CRYPTO_30_LIBCV_MULTI_PARTITION_RUNTIME_CHECKS                                              STD_OFF
#define Crypto_30_LibCv_GetRedirectionOfGeneral()                                                   FALSE
#define CRYPTO_30_LIBCV_REDIRECTION                                                                 STD_OFF
#define CRYPTO_30_LIBCV_SHE_DEBUG_CMD                                                               STD_OFF
#define CRYPTO_30_LIBCV_SHE_ENABLE_COUNTER                                                          STD_OFF
#define CRYPTO_30_LIBCV_SHE_ENABLE_FID                                                              STD_OFF
#define Crypto_30_LibCv_GetNumberOfLongTermPrimitiveWorkspaceOfGeneral()                            0u
#define CRYPTO_30_LIBCV_NUMBER_OF_LONG_TERM_PRIMITIVE_WORKSPACE                                     0u
#define Crypto_30_LibCv_GetKeyGenerateMaxLengthOfGeneral()                                          32u
#define CRYPTO_30_LIBCV_KEY_GENERATE_MAX_LENGTH                                                     32u
#define Crypto_30_LibCv_GetDefaultRandomMaxRetriesOfGeneral()                                       10u
#define CRYPTO_30_LIBCV_DEFAULT_RANDOM_MAX_RETRIES                                                  10u
#define Crypto_30_LibCv_GetNvManagementDataPerKeyOfNvStorage()                                      4u
#define CRYPTO_30_LIBCV_NV_MANAGEMENT_DATA_PER_KEY                                                  4u
#define CRYPTO_30_LIBCV_NUMBER_OF_DRIVER_OBJECTS                                                    2u
#define CRYPTO_30_LIBCV_NUMBER_OF_PARTITIONS                                                        0u
#define CRYPTO_30_LIBCV_NO_DEFAULT_RANDOM_KEY                                                       0xffu
/* Module version information */
#define CRYPTO_30_LIBCV_CFG_MAJOR_VERSION                                                           14u
#define CRYPTO_30_LIBCV_CFG_MINOR_VERSION                                                           8u
#define CRYPTO_30_LIBCV_CFG_PATCH_VERSION                                                           1u
#define CRYPTO_30_LIBCV_GENERATOR_MAJOR_VERSION                                                     14u
#define CRYPTO_30_LIBCV_GENERATOR_MINOR_VERSION                                                     8u
#define CRYPTO_30_LIBCV_GENERATOR_PATCH_VERSION                                                     1u

/* Defines for general parameters of type boolean, integer and enumeration */
#define CRYPTO_30_LIBCV_VERSION_INFO_API                                                            STD_OFF 
#define CRYPTO_30_LIBCV_USE_VSTD_LIB                                                                STD_ON 
#define CRYPTO_30_LIBCV_STRICT_LENGTH_CHECK_FOR_KEY_ELEMENT_GET                                     STD_ON 
#define CRYPTO_30_LIBCV_SHE_KEY_UPDATE                                                              STD_OFF 

/* Symbolic Name Define Block */
#define CryptoConf_CryptoDriverObject_Crypto_30_LibCv_Aes                                           0u 
#define CryptoConf_CryptoDriverObject_Crypto_30_LibCv                                               1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Aead_ChaCha_Key                                 1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Cipher_Key                                      1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Cipher_Key_She                                  1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Cipher_Key_She_Ram                              1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Decrypt_Aes128_Key                          1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Signature_ClassC                            1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Signature_Ed25519                           1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Hash_Result                                     1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Password                          1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_SharedValue                         1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Key                                 1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyWrap_Aes_Kek                                 1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyWrap_Aes_PlaintextKey                        1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Mac_Key                                         1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Mac_Key_She                                     1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Mac_Key_She_Ram                                 1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EcDsa_SECp160r1_private               1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EcDsa_SECp160r1_public                1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EcDsa_SECp256r1_private               1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EcDsa_SECp256r1_public                1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EcDsa_SECp384r1_private               1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EcDsa_SECp384r1_public                1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EcDsa_SECp521r1_private               1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EcDsa_SECp521r1_public                1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EdDsa_Ed25519_private                 1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EdDsa_Ed25519_public                  1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EdDsa_Ed448_private                   1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_EdDsa_Ed448_public                    1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_Key                                   1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_SlhDsaSha2_128s_public                1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_Sm2Verify_P256Sm2_public              1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_Sm2_P256Sm2_private                   1u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Mac_Proof                                       2u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Seed                                     3u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Seed_Nist_800_90A_DRBG_AES128            3u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Seed_Nist_800_90A_DRBG_AES256            3u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Seed_Nist_800_90A_DRBG_HASH_SHA2_512     3u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Algorithm                                4u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Algorithm_Fips186_Sha1                   4u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Algorithm_Nist_800_90A_DRBG_AES128       4u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Algorithm_Nist_800_90A_DRBG_AES128_DF    4u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Algorithm_Nist_800_90A_DRBG_AES256       4u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Algorithm_Nist_800_90A_DRBG_AES256Df     4u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Algorithm_Nist_800_90A_DRBG_HASH_SHA2_512 4u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Aead_ChaCha_Nonce                               5u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Cipher_IV                                       5u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Decrypt_Aes128_IV                           5u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Cipher_Proof                                    6u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Cipher_2NDKey                                   7u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Base                                8u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_PrivKey                             9u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_OwnPubKey                           10u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_ANSIP256R1                12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_NISTP224R1_BD             12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_P256R1_BD                 12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_SECP256R1                 12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_SECP384R1                 12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_SECP521R1                 12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_Spake2Plus_Suite8         12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_Spake2Plus_Suite8_1       12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_X25519                    12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Algorithm_X448                      12u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Salt                              13u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Iterations_HKDF                   14u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Iterations_PBKDF2                 14u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_ASM_NISTFIPS1864        15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_HKDF_HMAC_SHA256        15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_HKDF_HMAC_SHA384        15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_HKDF_Option1_SHA256     15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_HKDF_Option1_SHA512     15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_ISO15118                15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_ISO15118_20             15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_KDF_X963_SHA256         15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_KDF_X963_SHA512         15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_NIST800108_CTR_CMAC_AES 15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_NIST80056A              15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_PBKDF2_HMAC_SHA1        15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_PBKDF2_HMAC_SHA256      15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_SYM_NIST800108          15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Algorithm_Spake2Plus_P256R1       15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerive_Algorithm                             15u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Seed                                16u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Algorithm                           17u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Algorithm_Ansi_Nist_Sec_P256R1      17u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Algorithm_Ed25519                   17u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Algorithm_Nist_Sec_P384R1           17u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Algorithm_Nist_Sec_P521R1           17u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Algorithm_Sm2P256v1                 17u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyGenerate_Algorithm_Symmetric_Generic         17u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Label                             130u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_AdditionalInfo                                  131u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_AdditionalInfo                    131u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Signature_Rsa1024_Mod                       160u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Signature_Rsa2048_Mod                       160u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Signature_Rsa3072_Mod                       160u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_Modulus                                     160u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Signature_Rsa1024_Exp                       161u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Signature_Rsa2048_Exp                       161u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Fbl_Signature_Rsa3072_Exp                       161u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_Pub_Exponent                                161u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_Priv_Exponent                               162u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_Salt                                        163u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_SaltLength                                  164u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_PartnerPubKey                       3003u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_PartnerPubKey_2                     3004u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_Intermediate                        3005u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_NumEcu                              3006u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyExchange_EcuId                               3007u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_SCC_Contract_PubKey                             3013u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_SCC_IV_And_Encrypted_PrivKey                    3014u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_PrivateString                            3015u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_AdditionalInput                          3016u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Nonce                                    3017u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Random_Reseed_Counter                           3018u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_She_Counter                                     3019u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_She_UId                                         3021u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_PrimeP                                      3051u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_PrimeQ                                      3052u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_ExponentDp                                  3053u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_ExponentDq                                  3054u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Rsa_InverseQi                                   3055u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_She_BootProtection                              3056u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_She_DebuggerProtection                          3057u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Label                                           3058u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_SCC_Contract_AAD                                3060u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_EdDsa_Context                                   3061u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_KeyDerivation_Context                           3061u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_SlhDsa_Context                                  3062u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_W0                                              3084u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_W1                                              3085u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_L                                               3086u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Verification                                    3087u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Verification_Result                             3088u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_Sm2_ID                                3092u 
#define CryptoConf_CryptoKeyElement_Crypto_30_LibCv_Signature_Sm2Generate_P256Sm2_public            3093u 
#define CryptoConf_CryptoKey_CryptoKey_Fbl_Decrypt_Aes128                                           0u 
#define CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Class_C                                        1u 
#define CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Ed25519                                        2u 
#define CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Rsa1024                                        3u 
#define CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Rsa2048                                        4u 
#define CryptoConf_CryptoKey_CryptoKey_Fbl_Signature_Rsa3072                                        5u 
#define CryptoConf_CryptoKey_CryptoKey_Fbl_HashDummy                                                6u 

#define CRYPTO_30_LIBCV_NV_PROCESSING_DEFERRED                                                      0x00u 
#define CRYPTO_30_LIBCV_NV_PROCESSING_IMMEDIATE                                                     0x01u 
#define CRYPTO_30_LIBCV_NV_CONSISTENCY_LEVEL_DETECT                                                 0x00u 
#define CRYPTO_30_LIBCV_NV_CONSISTENCY_LEVEL_NONE                                                   0x01u 

#define CRYPTO_30_LIBCV_RAM_KEY_EXPORT                                                              STD_OFF

#define CRYPTO_30_LIBCVPERSIST_SIZE                                                                 0
#ifndef CRYPTO_30_LIBCV_DEV_ERROR_DETECT
#define CRYPTO_30_LIBCV_DEV_ERROR_DETECT STD_ON
#endif
#ifndef CRYPTO_30_LIBCV_DEV_ERROR_REPORT
#define CRYPTO_30_LIBCV_DEV_ERROR_REPORT STD_ON
#endif

/* The following defines keep the max size of the used key elements. */

/* The following defines give an overview which services are used. */
#define CRYPTO_30_LIBCV_SERVICE_AEADDECRYPT                                                         STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_AEADENCRYPT                                                         STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_CERTIFICATE_PARSE                                                   STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_CERTIFICATE_VERIFY                                                  STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_DECRYPT                                                             STD_ON
#define CRYPTO_30_LIBCV_SERVICE_ENCRYPT                                                             STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_HASH                                                                STD_ON
#define CRYPTO_30_LIBCV_SERVICE_KEY_DERIVE                                                          STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_KEY_EXCHANGE_CALC_PUBVAL                                            STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_KEY_EXCHANGE_CALC_SECRET                                            STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_KEY_GENERATE                                                        STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_KEY_SET_VALID                                                       STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_MAC_GENERATE                                                        STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_MAC_VERIFY                                                          STD_ON
#define CRYPTO_30_LIBCV_SERVICE_RANDOM                                                              STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_RANDOM_SEED                                                         STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_SIGNATURE_GENERATE                                                  STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_SIGNATURE_VERIFY                                                    STD_ON
#define CRYPTO_30_LIBCV_SERVICE_KEYSETINVALID                                                       STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_KEYWRAP                                                             STD_OFF
#define CRYPTO_30_LIBCV_SERVICE_KEYUNWRAP                                                           STD_OFF
/* The following defines are used for key access rights. */
#define CRYPTO_30_LIBCV_RA_ALLOWED                                                                  0x00u
#define CRYPTO_30_LIBCV_RA_ENCRYPTED                                                                0x01u
#define CRYPTO_30_LIBCV_RA_INTERNAL_COPY                                                            0x02u
#define CRYPTO_30_LIBCV_RA_DENIED                                                                   0x03u
#define CRYPTO_30_LIBCV_WA_ALLOWED                                                                  0x00u
#define CRYPTO_30_LIBCV_WA_ENCRYPTED                                                                0x01u
#define CRYPTO_30_LIBCV_WA_INTERNAL_COPY                                                            0x02u
#define CRYPTO_30_LIBCV_WA_DENIED                                                                   0x03u

/* The following defines represent the configuration of CryptoKeyDeriveAlgorithm. */
#define CRYPTO_30_LIBCV_KEY_DERIVE_ALGORITHM                                                        STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_ASYM_NIST_FIPS_186_4_ERB_ENABLED                                   STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_SYM_NIST_800_108_CNT_MODE_SHA256_ENABLED                           STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_ISO_15118_CERTIFICATE_HANDLING_ENABLED                             STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_NIST_800_56_A_ONE_PASS_C1E1S_SINGLE_STEP_KDF_SHA256_ENABLED        STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_X963_SHA256_ENABLED                                                STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_PBKDF2_HMAC_SHA1_ENABLED                                           STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_PBKDF2_HMAC_SHA256_ENABLED                                         STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_X963_SHA512_ENABLED                                                STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_HKDF_HMAC_SHA256_ENABLED                                           STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_SPAKE2_PLUS_P256R1_ENABLED                                         STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_HKDF_OPTION1_SHA256_ENABLED                                        STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_HKDF_HMAC_SHA384_ENABLED                                           STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_HKDF_OPTION1_SHA512_ENABLED                                        STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_ISO_15118_20_CERTIFICATE_HANDLING_ENABLED                          STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_HKDF_EXPAND_HMAC_SHA256_ENABLED                                    STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_HKDF_EXPAND_HMAC_SHA384_ENABLED                                    STD_OFF
#define CRYPTO_30_LIBCV_KDF_ALGO_NIST_800_108_CTR_CMAC_AES_ENABLED                                  STD_OFF

/* The following defines represent the configuration of CryptoKeyExchangeAlgorithm. */
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM                                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_X25519_ENABLED                                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_ANSIP256R1_ENABLED                                   STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_SECP256R1_ENABLED                                    STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_SECP384R1_ENABLED                                    STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_SPAKE2_PLUS_CIPHERSUITE_8_ENABLED                    STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_NISTP224R1_BD_ENABLED                                STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_SECP521R1_ENABLED                                    STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_X448_ENABLED                                         STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_ALGORITHM_P256R1_BD_ENABLED                                    STD_OFF

/* The following defines represent the configuration of CryptoKeyGenerateAlgorithm. */
#define CRYPTO_30_LIBCV_KEY_GENERATE_ALGORITHM                                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ALGORITHM_SYMMETRIC_GENERIC_ENABLED                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ALGORITHM_ANSI_NIST_SEC_P256R1_ENABLED                         STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ALGORITHM_NIST_SEC_P384R1_ENABLED                              STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ALGORITHM_ED25519_ENABLED                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ALGORITHM_NIST_SEC_P521R1_ENABLED                              STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ALGORITHM_SM2P256V1_ENABLED                                    STD_OFF

#define CRYPTO_30_LIBCV_VSEC_PRIM_ESLT_LENGTH_32                                                    STD_ON

/* The following defines describes the used primitives. They are set together in the following way:
 * (Service | Family | Mode | Second Family) without prefixed CRYPTO_ALOGFAM and CRYPTO_ALGOMODE.
 * So, a configured encryption service with AES in CBC Mode without secondary family results in 
 * CRYPTO_30_LIBCV_ENCRYPT_AES_ECB_NOT_SET.
 */
#define CRYPTO_30_LIBCV_AEADDECRYPT_AES                                                             STD_OFF
#define CRYPTO_30_LIBCV_AEADDECRYPT_AES_CUSTOM_CCM_NOT_SET                                          STD_OFF
#define CRYPTO_30_LIBCV_AEADDECRYPT_AES_GCM_NOT_SET                                                 STD_OFF
#define CRYPTO_30_LIBCV_AEADDECRYPT_CHACHA                                                          STD_OFF
#define CRYPTO_30_LIBCV_AEADDECRYPT_CHACHA_20ROUNDS_CUSTOM_POLY_1305                                STD_OFF
#define CRYPTO_30_LIBCV_AEADDECRYPT_CHACHA_20ROUNDS_POLY1305                                        STD_OFF
#define CRYPTO_30_LIBCV_AEADDECRYPT_SECFAM_CUSTOM_POLY_1305                                         STD_OFF
#define CRYPTO_30_LIBCV_AEADDECRYPT_SECFAM_NOT_SET                                                  STD_OFF
#define CRYPTO_30_LIBCV_AEADDECRYPT_SECFAM_POLY1305                                                 STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_AES                                                             STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_AES_CUSTOM_CCM_NOT_SET                                          STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_AES_GCM_NOT_SET                                                 STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_CHACHA                                                          STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_CHACHA_20ROUNDS_CUSTOM_POLY_1305                                STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_CHACHA_20ROUNDS_POLY1305                                        STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_SECFAM_CUSTOM_POLY_1305                                         STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_SECFAM_NOT_SET                                                  STD_OFF
#define CRYPTO_30_LIBCV_AEADENCRYPT_SECFAM_POLY1305                                                 STD_OFF
#define CRYPTO_30_LIBCV_DECRYPT_AES                                                                 STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_CBC_CUSTOM_PADDING_PKCS7                                        STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_CBC_NOT_SET                                                     STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_CBC_PADDING_ONEWITHZEROS                                        STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_CBC_PADDING_PKCS7                                               STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_CTR_CUSTOM_PADDING_PKCS7                                        STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_CTR_NOT_SET                                                     STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_CTR_PADDING_ONEWITHZEROS                                        STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_CTR_PADDING_PKCS7                                               STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_ECB_CUSTOM_PADDING_PKCS7                                        STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_ECB_NOT_SET                                                     STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_ECB_PADDING_ONEWITHZEROS                                        STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_AES_ECB_PADDING_PKCS7                                               STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_RSA                                                                 STD_OFF
#define CRYPTO_30_LIBCV_DECRYPT_RSA_CUSTOM_RSAES_OAEP_CRT_SHA1                                      STD_OFF
#define CRYPTO_30_LIBCV_DECRYPT_RSA_CUSTOM_RSAES_OAEP_CRT_SHA2_256                                  STD_OFF
#define CRYPTO_30_LIBCV_DECRYPT_RSA_RSAES_OAEP_SHA1                                                 STD_OFF
#define CRYPTO_30_LIBCV_DECRYPT_RSA_RSAES_OAEP_SHA2_256                                             STD_OFF
#define CRYPTO_30_LIBCV_DECRYPT_RSA_RSAES_PKCS1_v1_5_NOT_SET                                        STD_OFF
#define CRYPTO_30_LIBCV_DECRYPT_SECFAM_CUSTOM_PADDING_PKCS7                                         STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_SECFAM_NOT_SET                                                      STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_SECFAM_PADDING_ONEWITHZEROS                                         STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_SECFAM_PADDING_PKCS7                                                STD_ON
#define CRYPTO_30_LIBCV_DECRYPT_SECFAM_SHA1                                                         STD_OFF
#define CRYPTO_30_LIBCV_DECRYPT_SECFAM_SHA2_256                                                     STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES                                                                 STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_CBC_CUSTOM_PADDING_PKCS7                                        STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_CBC_NOT_SET                                                     STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_CBC_PADDING_ONEWITHZEROS                                        STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_CBC_PADDING_PKCS7                                               STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_CTR_CUSTOM_PADDING_PKCS7                                        STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_CTR_NOT_SET                                                     STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_CTR_PADDING_ONEWITHZEROS                                        STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_CTR_PADDING_PKCS7                                               STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_ECB_CUSTOM_PADDING_PKCS7                                        STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_ECB_NOT_SET                                                     STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_ECB_PADDING_ONEWITHZEROS                                        STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_AES_ECB_PADDING_PKCS7                                               STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_RSA                                                                 STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_RSA_RSAES_OAEP_SHA1                                                 STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_RSA_RSAES_OAEP_SHA2_256                                             STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_RSA_RSAES_PKCS1_v1_5_NOT_SET                                        STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_SECFAM_CUSTOM_PADDING_PKCS7                                         STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_SECFAM_NOT_SET                                                      STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_SECFAM_PADDING_ONEWITHZEROS                                         STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_SECFAM_PADDING_PKCS7                                                STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_SECFAM_SHA1                                                         STD_OFF
#define CRYPTO_30_LIBCV_ENCRYPT_SECFAM_SHA2_256                                                     STD_OFF
#define CRYPTO_30_LIBCV_HASH_CUSTOM_MD5                                                             STD_OFF
#define CRYPTO_30_LIBCV_HASH_CUSTOM_MD5_NOT_SET_NOT_SET                                             STD_OFF
#define CRYPTO_30_LIBCV_HASH_RIPEMD160                                                              STD_OFF
#define CRYPTO_30_LIBCV_HASH_RIPEMD160_NOT_SET_NOT_SET                                              STD_OFF
#define CRYPTO_30_LIBCV_HASH_SECFAM_NOT_SET                                                         STD_ON
#define CRYPTO_30_LIBCV_HASH_SHA1                                                                   STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA1_NOT_SET_NOT_SET                                                   STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_224                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_224_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_256                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_256_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_384                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_384_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_512                                                               STD_ON
#define CRYPTO_30_LIBCV_HASH_SHA2_512_224                                                           STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_512_224_NOT_SET_NOT_SET                                           STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_512_256                                                           STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_512_256_NOT_SET_NOT_SET                                           STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA2_512_NOT_SET_NOT_SET                                               STD_ON
#define CRYPTO_30_LIBCV_HASH_SHA3_224                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA3_224_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA3_256                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA3_256_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA3_384                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA3_384_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA3_512                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHA3_512_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHAKE128                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHAKE128_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHAKE256                                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SHAKE256_NOT_SET_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_HASH_SM3                                                                    STD_OFF
#define CRYPTO_30_LIBCV_HASH_SM3_NOT_SET_NOT_SET                                                    STD_OFF
#define CRYPTO_30_LIBCV_KEYSETINVALID_NOT_SET                                                       STD_OFF
#define CRYPTO_30_LIBCV_KEYSETINVALID_NOT_SET_NOT_SET_NOT_SET                                       STD_OFF
#define CRYPTO_30_LIBCV_KEYSETINVALID_SECFAM_NOT_SET                                                STD_OFF
#define CRYPTO_30_LIBCV_KEYUNWRAP_AES                                                               STD_OFF
#define CRYPTO_30_LIBCV_KEYUNWRAP_AES_AESKEYWRAP_NOT_SET                                            STD_OFF
#define CRYPTO_30_LIBCV_KEYUNWRAP_SECFAM_NOT_SET                                                    STD_OFF
#define CRYPTO_30_LIBCV_KEYWRAP_AES                                                                 STD_OFF
#define CRYPTO_30_LIBCV_KEYWRAP_AES_AESKEYWRAP_NOT_SET                                              STD_OFF
#define CRYPTO_30_LIBCV_KEYWRAP_SECFAM_NOT_SET                                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM                                                           STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_FIPS186                                                   STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_FIPS186_NOT_SET_SHA2_256                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_HKDF                                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_HKDF_HMAC_SHA2_256                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_HKDF_HMAC_SHA2_384                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_HKDF_NOT_SET_SHA2_256                                     STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_ISO15118                                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_ISO15118_NOT_SET_NOT_SET                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_NOT_SET_NOT_SET                                           STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_SPAKE2_PLUS                                               STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_CUSTOM_SPAKE2_PLUS_CUSTOM_P256R1_NOT_SET                         STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_DH                                                               STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_DH_CUSTOM_P256R1_SHA2_256                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_FIPS186                                                          STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_FIPS186_NOT_SET_SHA2_256                                         STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_HKDF                                                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_HKDF_HMAC_SHA2_256                                               STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_HKDF_HMAC_SHA2_384                                               STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_HKDF_NOT_SET_SHA2_256                                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_HKDF_NOT_SET_SHA2_512                                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_KDFX963                                                          STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_KDFX963_NOT_SET_SHA2_256                                         STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_KDFX963_NOT_SET_SHA2_512                                         STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_NOT_SET                                                          STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_NOT_SET_CTR_SHA2_256                                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_PBKDF2                                                           STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_PBKDF2_HMAC_SHA1                                                 STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_PBKDF2_HMAC_SHA2_256                                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_SECFAM_NOT_SET                                                   STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_SECFAM_SHA1                                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_SECFAM_SHA2_256                                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_SECFAM_SHA2_384                                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_DERIVE_SECFAM_SHA2_512                                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_ECCANSI                                     STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_ECCANSI_CUSTOM_P256R1_NOT_SET               STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_ECCSEC                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_ECCSEC_CUSTOM_P256R1_NOT_SET                STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_ECCSEC_CUSTOM_P384R1_NOT_SET                STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_ECCSEC_CUSTOM_P521R1_NOT_SET                STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_SPAKE2_PLUS                                 STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_SPAKE2_PLUS_CUSTOM_MODE_1_CUSTOM_CIPHER_SUITE_8 STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_SPAKE2_PLUS_NOT_SET_CUSTOM_CIPHER_SUITE_8   STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_X25519                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_CUSTOM_X25519_NOT_SET_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCANSI                                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCANSI_CUSTOM_P256R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCNIST                                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCNIST_CUSTOM_P224R1_CUSTOM_BD                    STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCNIST_CUSTOM_P256R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCNIST_CUSTOM_P384R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCNIST_CUSTOM_P521R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCSEC                                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCSEC_CUSTOM_P224R1_CUSTOM_BD                     STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCSEC_CUSTOM_P256R1_NOT_SET                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCSEC_CUSTOM_P384R1_NOT_SET                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ECCSEC_CUSTOM_P521R1_NOT_SET                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ED25519                                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_ED25519_NOT_SET_NOT_SET                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_SECFAM_CUSTOM_BD                                   STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_SECFAM_CUSTOM_CIPHER_SUITE_8                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_SECFAM_NOT_SET                                     STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_X25519                                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_PUBVAL_X25519_NOT_SET_NOT_SET                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_ECCANSI                                     STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_ECCANSI_CUSTOM_P256R1_NOT_SET               STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_ECCSEC                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_ECCSEC_CUSTOM_P256R1_NOT_SET                STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_ECCSEC_CUSTOM_P384R1_NOT_SET                STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_ECCSEC_CUSTOM_P521R1_NOT_SET                STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_SPAKE2_PLUS                                 STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_SPAKE2_PLUS_CUSTOM_MODE_1_CUSTOM_CIPHER_SUITE_8 STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_SPAKE2_PLUS_NOT_SET_CUSTOM_CIPHER_SUITE_8   STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_X25519                                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_CUSTOM_X25519_NOT_SET_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCANSI                                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCANSI_CUSTOM_P256R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCNIST                                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCNIST_CUSTOM_P224R1_CUSTOM_BD                    STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCNIST_CUSTOM_P256R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCNIST_CUSTOM_P384R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCNIST_CUSTOM_P521R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCSEC                                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCSEC_CUSTOM_P224R1_CUSTOM_BD                     STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCSEC_CUSTOM_P256R1_NOT_SET                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCSEC_CUSTOM_P384R1_NOT_SET                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_ECCSEC_CUSTOM_P521R1_NOT_SET                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_SECFAM_CUSTOM_BD                                   STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_SECFAM_CUSTOM_CIPHER_SUITE_8                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_SECFAM_NOT_SET                                     STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_X25519                                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_EXCHANGE_CALC_SECRET_X25519_NOT_SET_NOT_SET                             STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_CUSTOM_ECCANSI                                                 STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_CUSTOM_ECCANSI_CUSTOM_P256R1_NOT_SET                           STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_CUSTOM_ECCSEC                                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_CUSTOM_ECCSEC_CUSTOM_P256R1_NOT_SET                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_CUSTOM_ECCSEC_CUSTOM_P384R1_NOT_SET                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ECCANSI                                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ECCANSI_CUSTOM_P256R1_NOT_SET                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ECCNIST                                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ECCNIST_CUSTOM_P256R1_NOT_SET                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ECCNIST_CUSTOM_P384R1_NOT_SET                                  STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ECCSEC                                                         STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ECCSEC_CUSTOM_P256R1_NOT_SET                                   STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ECCSEC_CUSTOM_P384R1_NOT_SET                                   STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ED25519                                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_ED25519_NOT_SET_NOT_SET                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_NOT_SET                                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_NOT_SET_NOT_SET_NOT_SET                                        STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_SECFAM_NOT_SET                                                 STD_OFF
#define CRYPTO_30_LIBCV_KEY_GENERATE_SM2                                                            STD_OFF
#define CRYPTO_30_LIBCV_KEY_SET_VALID_NOT_SET                                                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_SET_VALID_NOT_SET_NOT_SET_NOT_SET                                       STD_OFF
#define CRYPTO_30_LIBCV_KEY_SET_VALID_SECFAM_NOT_SET                                                STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_AES                                                            STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_AES_CMAC_CUSTOM_CMD_GET_ID                                     STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_AES_CMAC_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_AES_GMAC_NOT_SET                                               STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_RIPEMD160                                                      STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_RIPEMD160_HMAC_NOT_SET                                         STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SECFAM_CUSTOM_CMD_GET_ID                                       STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SECFAM_NOT_SET                                                 STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SHA1                                                           STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SHA1_HMAC_NOT_SET                                              STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SHA2_256                                                       STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SHA2_256_HMAC_NOT_SET                                          STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SHA2_384                                                       STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SHA2_384_HMAC_NOT_SET                                          STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SHA2_512                                                       STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SHA2_512_HMAC_NOT_SET                                          STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SIPHASH                                                        STD_OFF
#define CRYPTO_30_LIBCV_MAC_GENERATE_SIPHASH_SIPHASH_2_4_NOT_SET                                    STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_AES                                                              STD_ON
#define CRYPTO_30_LIBCV_MAC_VERIFY_AES_CMAC_NOT_SET                                                 STD_ON
#define CRYPTO_30_LIBCV_MAC_VERIFY_AES_GMAC_NOT_SET                                                 STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_RIPEMD160                                                        STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_RIPEMD160_HMAC_NOT_SET                                           STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_SECFAM_NOT_SET                                                   STD_ON
#define CRYPTO_30_LIBCV_MAC_VERIFY_SHA1                                                             STD_ON
#define CRYPTO_30_LIBCV_MAC_VERIFY_SHA1_HMAC_NOT_SET                                                STD_ON
#define CRYPTO_30_LIBCV_MAC_VERIFY_SHA2_256                                                         STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_SHA2_256_HMAC_NOT_SET                                            STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_SHA2_384                                                         STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_SHA2_384_HMAC_NOT_SET                                            STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_SHA2_512                                                         STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_SHA2_512_HMAC_NOT_SET                                            STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_SIPHASH                                                          STD_OFF
#define CRYPTO_30_LIBCV_MAC_VERIFY_SIPHASH_SIPHASH_2_4_NOT_SET                                      STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_CUSTOM_DRBG                                                          STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_CUSTOM_DRBG_CUSTOM_USE_DF_AES                                        STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_CUSTOM_DRBG_NOT_SET_AES                                              STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_CUSTOM_DRBG_NOT_SET_SHA2_512                                         STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_CUSTOM_FIPS186                                                       STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_CUSTOM_FIPS186_NOT_SET_NOT_SET                                       STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_CUSTOM_FIPS186_NOT_SET_SHA1                                          STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_DRBG                                                                 STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_DRBG_CUSTOM_USE_DF_AES                                               STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_DRBG_NOT_SET_AES                                                     STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_DRBG_NOT_SET_SHA2_512                                                STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_FIPS186                                                              STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_FIPS186_NOT_SET_NOT_SET                                              STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_FIPS186_NOT_SET_SHA1                                                 STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_RNG                                                                  STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_RNG_CUSTOM_USE_DF_AES                                                STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_RNG_NOT_SET_AES                                                      STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_RNG_NOT_SET_NOT_SET                                                  STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_RNG_NOT_SET_SHA1                                                     STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SECFAM_AES                                                           STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SECFAM_NOT_SET                                                       STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SECFAM_SHA1                                                          STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SECFAM_SHA2_512                                                      STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_CUSTOM_DRBG                                                     STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_CUSTOM_DRBG_CUSTOM_USE_DF_AES                                   STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_CUSTOM_DRBG_NOT_SET_AES                                         STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_CUSTOM_DRBG_NOT_SET_SHA2_512                                    STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_CUSTOM_FIPS186                                                  STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_CUSTOM_FIPS186_NOT_SET_NOT_SET                                  STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_CUSTOM_FIPS186_NOT_SET_SHA1                                     STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_DRBG                                                            STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_DRBG_CUSTOM_USE_DF_AES                                          STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_DRBG_NOT_SET_AES                                                STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_DRBG_NOT_SET_SHA2_512                                           STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_FIPS186                                                         STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_FIPS186_NOT_SET_NOT_SET                                         STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_FIPS186_NOT_SET_SHA1                                            STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_RNG                                                             STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_RNG_CUSTOM_USE_DF_AES                                           STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_RNG_NOT_SET_AES                                                 STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_RNG_NOT_SET_NOT_SET                                             STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_RNG_NOT_SET_SHA1                                                STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_SECFAM_AES                                                      STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_SECFAM_NOT_SET                                                  STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_SECFAM_SHA1                                                     STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SEED_SECFAM_SHA2_512                                                 STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCANSI                                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCANSI_CUSTOM_P256R1_NOT_SET                     STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCANSI_CUSTOM_P256R1_SHA1                        STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCANSI_CUSTOM_P256R1_SHA2_256                    STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCANSI_CUSTOM_P256R1_SHA2_384                    STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCANSI_CUSTOM_P256R1_SHA2_512                    STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC                                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P160R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P256R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P256R1_SHA1                         STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P256R1_SHA2_256                     STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P256R1_SHA2_384                     STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P256R1_SHA2_512                     STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P384R1_NOT_SET                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P384R1_SHA1                         STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P384R1_SHA2_256                     STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P384R1_SHA2_384                     STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_CUSTOM_ECCSEC_CUSTOM_P384R1_SHA2_512                     STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCANSI                                                  STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCANSI_CUSTOM_P256R1_NOT_SET                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCANSI_CUSTOM_P256R1_SHA1                               STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCANSI_CUSTOM_P256R1_SHA2_256                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCANSI_CUSTOM_P256R1_SHA2_384                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCANSI_CUSTOM_P256R1_SHA2_512                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST                                                  STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P256R1_NOT_SET                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P256R1_SHA1                               STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P256R1_SHA2_256                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P256R1_SHA2_384                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P256R1_SHA2_512                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P384R1_NOT_SET                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P384R1_SHA1                               STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P384R1_SHA2_256                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P384R1_SHA2_384                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P384R1_SHA2_512                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCNIST_CUSTOM_P521R1_SHA2_512                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC                                                   STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P160R1_NOT_SET                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P256R1_NOT_SET                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P256R1_SHA1                                STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P256R1_SHA2_256                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P256R1_SHA2_384                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P256R1_SHA2_512                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P384R1_NOT_SET                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P384R1_SHA1                                STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P384R1_SHA2_256                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P384R1_SHA2_384                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P384R1_SHA2_512                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ECCSEC_CUSTOM_P521R1_SHA2_512                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ED25519                                                  STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ED25519_NOT_SET_NOT_SET                                  STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_ED25519_NOT_SET_SHA2_512                                 STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_RSA                                                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_RSA_CUSTOM_RSASSA_PKCS1_v1_5_CRT_SHA1                    STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_RSA_CUSTOM_RSASSA_PKCS1_v1_5_CRT_SHA2_256                STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_RSA_RSASSA_PKCS1_v1_5_SHA1                               STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_RSA_RSASSA_PKCS1_v1_5_SHA2_256                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_RSA_RSASSA_PSS_SHA1                                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_RSA_RSASSA_PSS_SHA2_256                                  STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_RSA_RSASSA_PSS_SHA2_384                                  STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_SECFAM_NOT_SET                                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_SECFAM_SHA1                                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_SECFAM_SHA2_256                                          STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_SECFAM_SHA2_384                                          STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_SECFAM_SHA2_512                                          STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_GENERATE_SM2                                                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCANSI                                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCANSI_CUSTOM_P256R1_NOT_SET                       STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCANSI_CUSTOM_P256R1_SHA1                          STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCANSI_CUSTOM_P256R1_SHA2_256                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCANSI_CUSTOM_P256R1_SHA2_384                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCANSI_CUSTOM_P256R1_SHA2_512                      STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC                                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P160R1_NOT_SET                        STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P256R1_NOT_SET                        STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P256R1_SHA1                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P256R1_SHA2_256                       STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P256R1_SHA2_384                       STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P256R1_SHA2_512                       STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P384R1_NOT_SET                        STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P384R1_SHA1                           STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P384R1_SHA2_256                       STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P384R1_SHA2_384                       STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_CUSTOM_ECCSEC_CUSTOM_P384R1_SHA2_512                       STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCANSI                                                    STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCANSI_CUSTOM_P256R1_NOT_SET                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCANSI_CUSTOM_P256R1_SHA1                                 STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCANSI_CUSTOM_P256R1_SHA2_256                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCANSI_CUSTOM_P256R1_SHA2_384                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCANSI_CUSTOM_P256R1_SHA2_512                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST                                                    STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P256R1_NOT_SET                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P256R1_SHA1                                 STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P256R1_SHA2_256                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P256R1_SHA2_384                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P256R1_SHA2_512                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P384R1_NOT_SET                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P384R1_SHA1                                 STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P384R1_SHA2_256                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P384R1_SHA2_384                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P384R1_SHA2_512                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCNIST_CUSTOM_P521R1_SHA2_512                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC                                                     STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P160R1_NOT_SET                               STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P256R1_NOT_SET                               STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P256R1_SHA1                                  STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P256R1_SHA2_256                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P256R1_SHA2_384                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P256R1_SHA2_512                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P384R1_NOT_SET                               STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P384R1_SHA1                                  STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P384R1_SHA2_256                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P384R1_SHA2_384                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P384R1_SHA2_512                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ECCSEC_CUSTOM_P521R1_SHA2_512                              STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ED25519                                                    STD_ON
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ED25519_NOT_SET_NOT_SET                                    STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_ED25519_NOT_SET_SHA2_512                                   STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_RSA                                                        STD_ON
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_RSA_RSASSA_PKCS1_v1_5_SHA1                                 STD_ON
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_RSA_RSASSA_PKCS1_v1_5_SHA2_256                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_RSA_RSASSA_PSS_SHA1                                        STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_RSA_RSASSA_PSS_SHA2_256                                    STD_ON
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_RSA_RSASSA_PSS_SHA2_384                                    STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_SECFAM_NOT_SET                                             STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_SECFAM_SHA1                                                STD_ON
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_SECFAM_SHA2_256                                            STD_ON
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_SECFAM_SHA2_384                                            STD_OFF
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_SECFAM_SHA2_512                                            STD_ON
#define CRYPTO_30_LIBCV_SIGNATURE_VERIFY_SM2                                                        STD_OFF

#define CRYPTO_30_LIBCV_DEFAULT_RANDOM_SOURCE                                                       STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SOURCE_DRBG_AES                                                      STD_OFF
#define CRYPTO_30_LIBCV_RANDOM_SOURCE_DRBG_HASH                                                     STD_OFF


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Crypto_30_LibCvPCDataSwitches  Crypto_30_LibCv Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CRYPTO_30_LIBCV_AEADCHACHAPOLY1305DECRYPT                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFAEADCHACHAPOLY1305DECRYPT                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_AEADCHACHAPOLY1305ENCRYPT                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFAEADCHACHAPOLY1305ENCRYPT                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_AESCCMDECRYPT                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesCcmDecrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFAESCCMDECRYPT                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesCcmDecrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_AESCCMENCRYPT                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesCcmEncrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFAESCCMENCRYPT                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesCcmEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_AESDECRYPT                                                                  STD_ON
#define CRYPTO_30_LIBCV_WORKSPACEOFAESDECRYPT                                                       STD_ON
#define CRYPTO_30_LIBCV_AESENCRYPT                                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesEncrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFAESENCRYPT                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_AESGCMDECRYPT                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesGcmDecrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFAESGCMDECRYPT                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesGcmDecrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_AESGCMENCRYPT                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesGcmEncrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFAESGCMENCRYPT                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_AesGcmEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_BUFFERLENGTH                                                                STD_ON
#define CRYPTO_30_LIBCV_CMACAESGENERATE                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_CmacAesGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFCMACAESGENERATE                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_CmacAesGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_CMACAESVERIFY                                                               STD_ON
#define CRYPTO_30_LIBCV_WORKSPACEOFCMACAESVERIFY                                                    STD_ON
#define CRYPTO_30_LIBCV_DRBGAES                                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_DRBGAES' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFDRBGAES                                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_DRBGAES.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_DRBGHASHSHA512                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_DRBGHashSha512' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFDRBGHASHSHA512                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_DRBGHashSha512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_DISPATCH_QUEUEPRIMITIVEINFOIDX                                              STD_ON
#define CRYPTO_30_LIBCV_DRIVEROBJECTSTATE                                                           STD_ON
#define CRYPTO_30_LIBCV_ECP160GENERATE                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP160Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECP160GENERATE                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP160Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ECP160VERIFY                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP160Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECP160VERIFY                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP160Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ECP256GENERATE                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP256Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECP256GENERATE                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP256Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ECP256VERIFY                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP256Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECP256VERIFY                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP256Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ECP384GENERATE                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP384Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECP384GENERATE                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP384Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ECP384VERIFY                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP384Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECP384VERIFY                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP384Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ECP521GENERATE                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP521Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECP521GENERATE                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP521Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ECP521VERIFY                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP521Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECP521VERIFY                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcP521Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ECPKEYCHECK                                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcPKeyCheck' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFECPKEYCHECK                                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EcPKeyCheck.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ED25519GENERATE                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Ed25519Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFED25519GENERATE                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Ed25519Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ED25519VERIFY                                                               STD_ON
#define CRYPTO_30_LIBCV_WORKSPACEOFED25519VERIFY                                                    STD_ON
#define CRYPTO_30_LIBCV_ED448GENERATE                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Ed448Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFED448GENERATE                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Ed448Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_ED448VERIFY                                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Ed448Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFED448VERIFY                                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Ed448Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_EDKEYCHECK                                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EdKeyCheck' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFEDKEYCHECK                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_EdKeyCheck.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_EXPECTEDCOMPATIBILITYVERSION                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ExpectedCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define CRYPTO_30_LIBCV_FAMILYTOHASHMAPPING                                                         STD_ON
#define CRYPTO_30_LIBCV_FINALMAGICNUMBER                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CRYPTO_30_LIBCV_FIPS186                                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Fips186' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFFIPS186                                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Fips186.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_GENERATORCOMPATIBILITYVERSION                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define CRYPTO_30_LIBCV_GMACAESGENERATE                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_GmacAesGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFGMACAESGENERATE                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_GmacAesGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_GMACAESVERIFY                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_GmacAesVerify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFGMACAESVERIFY                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_GmacAesVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HASH                                                                        STD_ON
#define CRYPTO_30_LIBCV_WORKSPACEOFHASH                                                             STD_ON
#define CRYPTO_30_LIBCV_HMACRIPEMD160GENERATE                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACRIPEMD160GENERATE                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HMACRIPEMD160VERIFY                                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACRIPEMD160VERIFY                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HMACSHA1GENERATE                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha1Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACSHA1GENERATE                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha1Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HMACSHA1VERIFY                                                              STD_ON
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACSHA1VERIFY                                                   STD_ON
#define CRYPTO_30_LIBCV_HMACSHA256GENERATE                                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACSHA256GENERATE                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HMACSHA256VERIFY                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACSHA256VERIFY                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HMACSHA384GENERATE                                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACSHA384GENERATE                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HMACSHA384VERIFY                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACSHA384VERIFY                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HMACSHA512GENERATE                                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACSHA512GENERATE                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_HMACSHA512VERIFY                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFHMACSHA512VERIFY                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_INITDATAHASHCODE                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CRYPTO_30_LIBCV_INITVALUE                                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_InitValue' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEY                                                                         STD_ON
#define CRYPTO_30_LIBCV_KEYELEMENTSENDIDXOFKEY                                                      STD_ON
#define CRYPTO_30_LIBCV_KEYELEMENTSSTARTIDXOFKEY                                                    STD_ON
#define CRYPTO_30_LIBCV_NVBLOCKIDXOFKEY                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Key.NvBlockIdx' Reason: 'the optional indirection is deactivated because NvBlockUsedOfKey is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_NVBLOCKUSEDOFKEY                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Key.NvBlockUsed' Reason: 'the optional indirection is deactivated because NvBlockUsedOfKey is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFEXPANDHMACSHA256                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEHKDFEXPANDHMACSHA256                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFEXPANDHMACSHA384                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA384' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEHKDFEXPANDHMACSHA384                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA384.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHMACSHA256                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEHKDFHMACSHA256                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHMACSHA384                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA384' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEHKDFHMACSHA384                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA384.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHASHOPTION1SHA256                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEHKDFHASHOPTION1SHA256                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHASHOPTION1SHA512                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA512' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEHKDFHASHOPTION1SHA512                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEISO15118                                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEISO15118                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEISO15118_20                                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118_20' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEISO15118_20                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118_20.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEKDF2HMACSHA1                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEKDF2HMACSHA1                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEKDF2HMACSHA256                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEKDF2HMACSHA256                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST800108CNTSHA256                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CntSha256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVENIST800108CNTSHA256                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CntSha256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST800108CTRCMACAES                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CtrCmacAes' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVENIST800108CTRCMACAES                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CtrCmacAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST80056AONEPASS                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist80056AOnePass' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVENIST80056AONEPASS                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist80056AOnePass.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVENISTFIPS186ERB                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNistFips186Erb' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVENISTFIPS186ERB                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNistFips186Erb.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVESPAKE2P                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveSpake2P' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVESPAKE2P                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveSpake2P.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEX963SHA256                                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEX963SHA256                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYDERIVEX963SHA512                                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA512' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYDERIVEX963SHA512                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYELEMENTINFO                                                              STD_ON
#define CRYPTO_30_LIBCV_IDOFKEYELEMENTINFO                                                          STD_ON
#define CRYPTO_30_LIBCV_INITVALUEENDIDXOFKEYELEMENTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueEndIdx' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_INITVALUESTARTIDXOFKEYELEMENTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueStartIdx' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_INITVALUEUSEDOFKEYELEMENTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueUsed' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_LENGTHOFKEYELEMENTINFO                                                      STD_ON
#define CRYPTO_30_LIBCV_MASKEDBITSOFKEYELEMENTINFO                                                  STD_ON
#define CRYPTO_30_LIBCV_ONCEOFKEYELEMENTINFO                                                        STD_ON
#define CRYPTO_30_LIBCV_PARTIALOFKEYELEMENTINFO                                                     STD_ON
#define CRYPTO_30_LIBCV_PERSISTOFKEYELEMENTINFO                                                     STD_ON
#define CRYPTO_30_LIBCV_READOFKEYELEMENTINFO                                                        STD_ON
#define CRYPTO_30_LIBCV_WRITEOFKEYELEMENTINFO                                                       STD_ON
#define CRYPTO_30_LIBCV_KEYELEMENTS                                                                 STD_ON
#define CRYPTO_30_LIBCV_IDOFKEYELEMENTS                                                             STD_ON
#define CRYPTO_30_LIBCV_KEYELEMENTINFOIDXOFKEYELEMENTS                                              STD_ON
#define CRYPTO_30_LIBCV_KEYSTORAGEENDIDXOFKEYELEMENTS                                               STD_ON
#define CRYPTO_30_LIBCV_KEYSTORAGEEXTENSIONIDXOFKEYELEMENTS                                         STD_ON
#define CRYPTO_30_LIBCV_KEYSTORAGESTARTIDXOFKEYELEMENTS                                             STD_ON
#define CRYPTO_30_LIBCV_KEYSTORAGEVALIDIDXOFKEYELEMENTS                                             STD_ON
#define CRYPTO_30_LIBCV_KEYSTORAGEWRITTENLENGTHENDIDXOFKEYELEMENTS                                  STD_ON
#define CRYPTO_30_LIBCV_KEYSTORAGEWRITTENLENGTHSTARTIDXOFKEYELEMENTS                                STD_ON
#define CRYPTO_30_LIBCV_KEYGENED25519                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenEd25519' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYGENED25519                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenEd25519.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYGENP256R1                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP256R1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYGENP256R1                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP256R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYGENP384R1                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP384R1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYGENP384R1                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP384R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYGENP521R1                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP521R1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYGENP521R1                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP521R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYGENSM2P256V1                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSm2P256V1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYGENSM2P256V1                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSm2P256V1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYGENSYMGENERIC                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSymGeneric' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYGENSYMGENERIC                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSymGeneric.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYLOCK                                                                     STD_ON
#define CRYPTO_30_LIBCV_KEYNVSTATUS                                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyNvStatus' Reason: 'No non-volatile memory used.' */
#define CRYPTO_30_LIBCV_KEYP224R1BDPUBVAL                                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDPubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP224R1BDPUBVAL                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP224R1BDSECRET                                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDSecret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP224R1BDSECRET                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP256R1BDPUBVAL                                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDPubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP256R1BDPUBVAL                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP256R1BDSECRET                                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDSecret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP256R1BDSECRET                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP256R1PUBVAL                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP256R1PUBVAL                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP256R1SECRET                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP256R1SECRET                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP384R1PUBVAL                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP384R1PUBVAL                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP384R1SECRET                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP384R1SECRET                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP521R1PUBVAL                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP521R1PUBVAL                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYP521R1SECRET                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYP521R1SECRET                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSEEDDRBGAES                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGAES' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYSEEDDRBGAES                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGAES.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSEEDDRBGHASHSHA512                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGHashSha512' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYSEEDDRBGHASHSHA512                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGHashSha512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSEEDFIPS186                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySeedFips186' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYSEEDFIPS186                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySeedFips186.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSETINVALIDJOB                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySetInvalidJob' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYSETINVALIDJOB                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySetInvalidJob.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSETVALIDJOB                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySetValidJob' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYSETVALIDJOB                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySetValidJob.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSPAKE2PPUBVAL                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PPubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYSPAKE2PPUBVAL                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSPAKE2PSECRET                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PSecret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYSPAKE2PSECRET                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSTORAGE                                                                  STD_ON
#define CRYPTO_30_LIBCV_KEYUNWRAPAES                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyUnwrapAes' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYUNWRAPAES                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyUnwrapAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYWRAPAES                                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyWrapAes' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYWRAPAES                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyWrapAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYX25519PUBVAL                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYX25519PUBVAL                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYX25519SECRET                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYX25519SECRET                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYX448PUBVAL                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyX448PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYX448PUBVAL                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyX448PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYX448SECRET                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyX448Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFKEYX448SECRET                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_KeyX448Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_LASTJOB                                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_LastJob' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define CRYPTO_30_LIBCV_FAMILYOFLASTJOB                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Family' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define CRYPTO_30_LIBCV_KEYIDOFLASTJOB                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_LastJob.KeyId' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define CRYPTO_30_LIBCV_MODEOFLASTJOB                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Mode' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define CRYPTO_30_LIBCV_LOCK                                                                        STD_ON
#define CRYPTO_30_LIBCV_LONGTERMWS                                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_LongTermWs' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_LONGTERMWSLOCK                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_LongTermWsLock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_MD5                                                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_MD5' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFMD5                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_MD5.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_MAINFUNCTIONPERIODOFGENERAL                                                 STD_ON
#define CRYPTO_30_LIBCV_NVBLOCK                                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_CONSISTENCYLEVELOFNVBLOCK                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.ConsistencyLevel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_CRCOFNVBLOCK                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Crc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_DESCRIPTOROFNVBLOCK                                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Descriptor' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_IDOFNVBLOCK                                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Id' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSTORAGEENDIDXOFNVBLOCK                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.KeyStorageEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_KEYSTORAGESTARTIDXOFNVBLOCK                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.KeyStorageStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_LENGTHOFNVBLOCK                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Length' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_PROCESSINGOFNVBLOCK                                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Processing' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_OBJECTINFO                                                                  STD_ON
#define CRYPTO_30_LIBCV_AEADCHACHAPOLY1305DECRYPTIDXOFOBJECTINFO                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305DecryptIdx' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AEADCHACHAPOLY1305DECRYPTUSEDOFOBJECTINFO                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305DecryptUsed' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AEADCHACHAPOLY1305ENCRYPTIDXOFOBJECTINFO                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305EncryptIdx' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AEADCHACHAPOLY1305ENCRYPTUSEDOFOBJECTINFO                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305EncryptUsed' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESCCMDECRYPTIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmDecryptIdx' Reason: 'the optional indirection is deactivated because AesCcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESCCMDECRYPTUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmDecryptUsed' Reason: 'the optional indirection is deactivated because AesCcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESCCMENCRYPTIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmEncryptIdx' Reason: 'the optional indirection is deactivated because AesCcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESCCMENCRYPTUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmEncryptUsed' Reason: 'the optional indirection is deactivated because AesCcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESDECRYPTIDXOFOBJECTINFO                                                   STD_ON
#define CRYPTO_30_LIBCV_AESDECRYPTUSEDOFOBJECTINFO                                                  STD_ON
#define CRYPTO_30_LIBCV_AESENCRYPTIDXOFOBJECTINFO                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesEncryptIdx' Reason: 'the optional indirection is deactivated because AesEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESENCRYPTUSEDOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesEncryptUsed' Reason: 'the optional indirection is deactivated because AesEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESGCMDECRYPTIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmDecryptIdx' Reason: 'the optional indirection is deactivated because AesGcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESGCMDECRYPTUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmDecryptUsed' Reason: 'the optional indirection is deactivated because AesGcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESGCMENCRYPTIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmEncryptIdx' Reason: 'the optional indirection is deactivated because AesGcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_AESGCMENCRYPTUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmEncryptUsed' Reason: 'the optional indirection is deactivated because AesGcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_APPLICATIONIDOFOBJECTINFO                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.ApplicationId' Reason: 'Deactivated for use case Single Partition' */
#define CRYPTO_30_LIBCV_CMACAESGENERATEIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.CmacAesGenerateIdx' Reason: 'the optional indirection is deactivated because CmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_CMACAESGENERATEUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.CmacAesGenerateUsed' Reason: 'the optional indirection is deactivated because CmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_CMACAESVERIFYIDXOFOBJECTINFO                                                STD_ON
#define CRYPTO_30_LIBCV_CMACAESVERIFYUSEDOFOBJECTINFO                                               STD_ON
#define CRYPTO_30_LIBCV_DRBGAESIDXOFOBJECTINFO                                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGAESIdx' Reason: 'the optional indirection is deactivated because DRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_DRBGAESUSEDOFOBJECTINFO                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGAESUsed' Reason: 'the optional indirection is deactivated because DRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_DRBGHASHSHA512IDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGHashSha512Idx' Reason: 'the optional indirection is deactivated because DRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_DRBGHASHSHA512USEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGHashSha512Used' Reason: 'the optional indirection is deactivated because DRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP160GENERATEIDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160GenerateIdx' Reason: 'the optional indirection is deactivated because EcP160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP160GENERATEUSEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160GenerateUsed' Reason: 'the optional indirection is deactivated because EcP160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP160VERIFYIDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160VerifyIdx' Reason: 'the optional indirection is deactivated because EcP160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP160VERIFYUSEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160VerifyUsed' Reason: 'the optional indirection is deactivated because EcP160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP256GENERATEIDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256GenerateIdx' Reason: 'the optional indirection is deactivated because EcP256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP256GENERATEUSEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256GenerateUsed' Reason: 'the optional indirection is deactivated because EcP256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP256VERIFYIDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256VerifyIdx' Reason: 'the optional indirection is deactivated because EcP256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP256VERIFYUSEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256VerifyUsed' Reason: 'the optional indirection is deactivated because EcP256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP384GENERATEIDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384GenerateIdx' Reason: 'the optional indirection is deactivated because EcP384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP384GENERATEUSEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384GenerateUsed' Reason: 'the optional indirection is deactivated because EcP384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP384VERIFYIDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384VerifyIdx' Reason: 'the optional indirection is deactivated because EcP384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP384VERIFYUSEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384VerifyUsed' Reason: 'the optional indirection is deactivated because EcP384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP521GENERATEIDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521GenerateIdx' Reason: 'the optional indirection is deactivated because EcP521GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP521GENERATEUSEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521GenerateUsed' Reason: 'the optional indirection is deactivated because EcP521GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP521VERIFYIDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521VerifyIdx' Reason: 'the optional indirection is deactivated because EcP521VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECP521VERIFYUSEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521VerifyUsed' Reason: 'the optional indirection is deactivated because EcP521VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECPKEYCHECKIDXOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcPKeyCheckIdx' Reason: 'the optional indirection is deactivated because EcPKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ECPKEYCHECKUSEDOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcPKeyCheckUsed' Reason: 'the optional indirection is deactivated because EcPKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ED25519GENERATEIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed25519GenerateIdx' Reason: 'the optional indirection is deactivated because Ed25519GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ED25519GENERATEUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed25519GenerateUsed' Reason: 'the optional indirection is deactivated because Ed25519GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ED25519VERIFYIDXOFOBJECTINFO                                                STD_ON
#define CRYPTO_30_LIBCV_ED25519VERIFYUSEDOFOBJECTINFO                                               STD_ON
#define CRYPTO_30_LIBCV_ED448GENERATEIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448GenerateIdx' Reason: 'the optional indirection is deactivated because Ed448GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ED448GENERATEUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448GenerateUsed' Reason: 'the optional indirection is deactivated because Ed448GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ED448VERIFYIDXOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448VerifyIdx' Reason: 'the optional indirection is deactivated because Ed448VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_ED448VERIFYUSEDOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448VerifyUsed' Reason: 'the optional indirection is deactivated because Ed448VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_EDKEYCHECKIDXOFOBJECTINFO                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EdKeyCheckIdx' Reason: 'the optional indirection is deactivated because EdKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_EDKEYCHECKUSEDOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EdKeyCheckUsed' Reason: 'the optional indirection is deactivated because EdKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_FIPS186IDXOFOBJECTINFO                                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Fips186Idx' Reason: 'the optional indirection is deactivated because Fips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_FIPS186USEDOFOBJECTINFO                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Fips186Used' Reason: 'the optional indirection is deactivated because Fips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_GMACAESGENERATEIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesGenerateIdx' Reason: 'the optional indirection is deactivated because GmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_GMACAESGENERATEUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesGenerateUsed' Reason: 'the optional indirection is deactivated because GmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_GMACAESVERIFYIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesVerifyIdx' Reason: 'the optional indirection is deactivated because GmacAesVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_GMACAESVERIFYUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesVerifyUsed' Reason: 'the optional indirection is deactivated because GmacAesVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HASHIDXOFOBJECTINFO                                                         STD_ON
#define CRYPTO_30_LIBCV_HASHUSEDOFOBJECTINFO                                                        STD_ON
#define CRYPTO_30_LIBCV_HMACRIPEMD160GENERATEIDXOFOBJECTINFO                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160GenerateIdx' Reason: 'the optional indirection is deactivated because HmacRipeMd160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACRIPEMD160GENERATEUSEDOFOBJECTINFO                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160GenerateUsed' Reason: 'the optional indirection is deactivated because HmacRipeMd160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACRIPEMD160VERIFYIDXOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160VerifyIdx' Reason: 'the optional indirection is deactivated because HmacRipeMd160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACRIPEMD160VERIFYUSEDOFOBJECTINFO                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160VerifyUsed' Reason: 'the optional indirection is deactivated because HmacRipeMd160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA1GENERATEIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha1GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA1GENERATEUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha1GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA1VERIFYIDXOFOBJECTINFO                                               STD_ON
#define CRYPTO_30_LIBCV_HMACSHA1VERIFYUSEDOFOBJECTINFO                                              STD_ON
#define CRYPTO_30_LIBCV_HMACSHA256GENERATEIDXOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA256GENERATEUSEDOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA256VERIFYIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA256VERIFYUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA384GENERATEIDXOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA384GENERATEUSEDOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA384VERIFYIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA384VERIFYUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA512GENERATEIDXOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha512GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA512GENERATEUSEDOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha512GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA512VERIFYIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha512VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_HMACSHA512VERIFYUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha512VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFEXPANDHMACSHA256IDXOFOBJECTINFO                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFEXPANDHMACSHA256USEDOFOBJECTINFO                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFEXPANDHMACSHA384IDXOFOBJECTINFO                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA384Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFEXPANDHMACSHA384USEDOFOBJECTINFO                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA384Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHMACSHA256IDXOFOBJECTINFO                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHMACSHA256USEDOFOBJECTINFO                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHMACSHA384IDXOFOBJECTINFO                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA384Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHMACSHA384USEDOFOBJECTINFO                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA384Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHASHOPTION1SHA256IDXOFOBJECTINFO                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHASHOPTION1SHA256USEDOFOBJECTINFO                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHASHOPTION1SHA512IDXOFOBJECTINFO                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA512Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEHKDFHASHOPTION1SHA512USEDOFOBJECTINFO                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA512Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEISO15118IDXOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118Idx' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEISO15118USEDOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118Used' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEISO15118_20IDXOFOBJECTINFO                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118_20Idx' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118_20UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEISO15118_20USEDOFOBJECTINFO                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118_20Used' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118_20UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEKDF2HMACSHA1IDXOFOBJECTINFO                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA1Idx' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEKDF2HMACSHA1USEDOFOBJECTINFO                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA1Used' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEKDF2HMACSHA256IDXOFOBJECTINFO                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEKDF2HMACSHA256USEDOFOBJECTINFO                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST800108CNTSHA256IDXOFOBJECTINFO                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CntSha256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CntSha256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST800108CNTSHA256USEDOFOBJECTINFO                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CntSha256Used' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CntSha256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST800108CTRCMACAESIDXOFOBJECTINFO                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CtrCmacAesIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CtrCmacAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST800108CTRCMACAESUSEDOFOBJECTINFO                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CtrCmacAesUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CtrCmacAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST80056AONEPASSIDXOFOBJECTINFO                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist80056AOnePassIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNist80056AOnePassUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVENIST80056AONEPASSUSEDOFOBJECTINFO                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist80056AOnePassUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNist80056AOnePassUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVENISTFIPS186ERBIDXOFOBJECTINFO                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNistFips186ErbIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNistFips186ErbUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVENISTFIPS186ERBUSEDOFOBJECTINFO                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNistFips186ErbUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNistFips186ErbUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVESPAKE2PIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveSpake2PIdx' Reason: 'the optional indirection is deactivated because KeyDeriveSpake2PUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVESPAKE2PUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveSpake2PUsed' Reason: 'the optional indirection is deactivated because KeyDeriveSpake2PUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEX963SHA256IDXOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEX963SHA256USEDOFOBJECTINFO                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEX963SHA512IDXOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA512Idx' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYDERIVEX963SHA512USEDOFOBJECTINFO                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA512Used' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENED25519IDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenEd25519Idx' Reason: 'the optional indirection is deactivated because KeyGenEd25519UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENED25519USEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenEd25519Used' Reason: 'the optional indirection is deactivated because KeyGenEd25519UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENP256R1IDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP256R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP256R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENP256R1USEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP256R1Used' Reason: 'the optional indirection is deactivated because KeyGenP256R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENP384R1IDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP384R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP384R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENP384R1USEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP384R1Used' Reason: 'the optional indirection is deactivated because KeyGenP384R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENP521R1IDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP521R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP521R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENP521R1USEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP521R1Used' Reason: 'the optional indirection is deactivated because KeyGenP521R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENSM2P256V1IDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSm2P256V1Idx' Reason: 'the optional indirection is deactivated because KeyGenSm2P256V1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENSM2P256V1USEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSm2P256V1Used' Reason: 'the optional indirection is deactivated because KeyGenSm2P256V1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENSYMGENERICIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSymGenericIdx' Reason: 'the optional indirection is deactivated because KeyGenSymGenericUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYGENSYMGENERICUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSymGenericUsed' Reason: 'the optional indirection is deactivated because KeyGenSymGenericUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP224R1BDPUBVALIDXOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDPubValIdx' Reason: 'the optional indirection is deactivated because KeyP224R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP224R1BDPUBVALUSEDOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDPubValUsed' Reason: 'the optional indirection is deactivated because KeyP224R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP224R1BDSECRETIDXOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDSecretIdx' Reason: 'the optional indirection is deactivated because KeyP224R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP224R1BDSECRETUSEDOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDSecretUsed' Reason: 'the optional indirection is deactivated because KeyP224R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP256R1BDPUBVALIDXOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDPubValIdx' Reason: 'the optional indirection is deactivated because KeyP256R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP256R1BDPUBVALUSEDOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDPubValUsed' Reason: 'the optional indirection is deactivated because KeyP256R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP256R1BDSECRETIDXOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDSecretIdx' Reason: 'the optional indirection is deactivated because KeyP256R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP256R1BDSECRETUSEDOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDSecretUsed' Reason: 'the optional indirection is deactivated because KeyP256R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP256R1PUBVALIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP256R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP256R1PUBVALUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP256R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP256R1SECRETIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP256R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP256R1SECRETUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP256R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP384R1PUBVALIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP384R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP384R1PUBVALUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP384R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP384R1SECRETIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP384R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP384R1SECRETUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP384R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP521R1PUBVALIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP521R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP521R1PUBVALUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP521R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP521R1SECRETIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP521R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYP521R1SECRETUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP521R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSEEDDRBGAESIDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGAESIdx' Reason: 'the optional indirection is deactivated because KeySeedDRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSEEDDRBGAESUSEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGAESUsed' Reason: 'the optional indirection is deactivated because KeySeedDRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSEEDDRBGHASHSHA512IDXOFOBJECTINFO                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGHashSha512Idx' Reason: 'the optional indirection is deactivated because KeySeedDRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSEEDDRBGHASHSHA512USEDOFOBJECTINFO                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGHashSha512Used' Reason: 'the optional indirection is deactivated because KeySeedDRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSEEDFIPS186IDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedFips186Idx' Reason: 'the optional indirection is deactivated because KeySeedFips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSEEDFIPS186USEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedFips186Used' Reason: 'the optional indirection is deactivated because KeySeedFips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSETINVALIDJOBIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetInvalidJobIdx' Reason: 'the optional indirection is deactivated because KeySetInvalidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSETINVALIDJOBUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetInvalidJobUsed' Reason: 'the optional indirection is deactivated because KeySetInvalidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSETVALIDJOBIDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetValidJobIdx' Reason: 'the optional indirection is deactivated because KeySetValidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSETVALIDJOBUSEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetValidJobUsed' Reason: 'the optional indirection is deactivated because KeySetValidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSPAKE2PPUBVALIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PPubValIdx' Reason: 'the optional indirection is deactivated because KeySpake2PPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSPAKE2PPUBVALUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PPubValUsed' Reason: 'the optional indirection is deactivated because KeySpake2PPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSPAKE2PSECRETIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PSecretIdx' Reason: 'the optional indirection is deactivated because KeySpake2PSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYSPAKE2PSECRETUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PSecretUsed' Reason: 'the optional indirection is deactivated because KeySpake2PSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYUNWRAPAESIDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyUnwrapAesIdx' Reason: 'the optional indirection is deactivated because KeyUnwrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYUNWRAPAESUSEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyUnwrapAesUsed' Reason: 'the optional indirection is deactivated because KeyUnwrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYWRAPAESIDXOFOBJECTINFO                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyWrapAesIdx' Reason: 'the optional indirection is deactivated because KeyWrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYWRAPAESUSEDOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyWrapAesUsed' Reason: 'the optional indirection is deactivated because KeyWrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYX25519PUBVALIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519PubValIdx' Reason: 'the optional indirection is deactivated because KeyX25519PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYX25519PUBVALUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519PubValUsed' Reason: 'the optional indirection is deactivated because KeyX25519PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYX25519SECRETIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519SecretIdx' Reason: 'the optional indirection is deactivated because KeyX25519SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYX25519SECRETUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519SecretUsed' Reason: 'the optional indirection is deactivated because KeyX25519SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYX448PUBVALIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448PubValIdx' Reason: 'the optional indirection is deactivated because KeyX448PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYX448PUBVALUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448PubValUsed' Reason: 'the optional indirection is deactivated because KeyX448PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYX448SECRETIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448SecretIdx' Reason: 'the optional indirection is deactivated because KeyX448SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_KEYX448SECRETUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448SecretUsed' Reason: 'the optional indirection is deactivated because KeyX448SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_MD5IDXOFOBJECTINFO                                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.MD5Idx' Reason: 'the optional indirection is deactivated because MD5UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_MD5USEDOFOBJECTINFO                                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.MD5Used' Reason: 'the optional indirection is deactivated because MD5UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_PARTITIONIDXOFOBJECTINFO                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.PartitionIdx' Reason: 'Deactivated for use case Single Partition' */
#define CRYPTO_30_LIBCV_QUEUEIDXOFOBJECTINFO                                                        STD_ON
#define CRYPTO_30_LIBCV_RANDOMSEEDBUFFERENDIDXOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferEndIdx' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RANDOMSEEDBUFFERSTARTIDXOFOBJECTINFO                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferStartIdx' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RANDOMSEEDBUFFERUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferUsed' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPCRTSHA1DECRYPTIDXOFOBJECTINFO                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPCRTSHA1DECRYPTUSEDOFOBJECTINFO                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPCRTSHA256DECRYPTIDXOFOBJECTINFO                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha256DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPCRTSHA256DECRYPTUSEDOFOBJECTINFO                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha256DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA1DECRYPTIDXOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA1DECRYPTUSEDOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA1ENCRYPTIDXOFOBJECTINFO                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1EncryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA1ENCRYPTUSEDOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1EncryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA256DECRYPTIDXOFOBJECTINFO                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA256DECRYPTUSEDOFOBJECTINFO                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA256ENCRYPTIDXOFOBJECTINFO                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256EncryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha256EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA256ENCRYPTUSEDOFOBJECTINFO                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256EncryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha256EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1CRTGENERATEIDXOFOBJECTINFO                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1CrtGenerateIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1CrtGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1CRTGENERATEUSEDOFOBJECTINFO                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1CrtGenerateUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1CrtGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1DECRYPTIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1DECRYPTUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1ENCRYPTIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1EncryptIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1ENCRYPTUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1EncryptUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1GENERATEIDXOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1GenerateIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1GENERATEUSEDOFOBJECTINFO                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1GenerateUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPKCS1VERIFYIDXOFOBJECTINFO                                               STD_ON
#define CRYPTO_30_LIBCV_RSAPKCS1VERIFYUSEDOFOBJECTINFO                                              STD_ON
#define CRYPTO_30_LIBCV_RSAPSSGENERATEIDXOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPssGenerateIdx' Reason: 'the optional indirection is deactivated because RsaPssGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPSSGENERATEUSEDOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPssGenerateUsed' Reason: 'the optional indirection is deactivated because RsaPssGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_RSAPSSVERIFYIDXOFOBJECTINFO                                                 STD_ON
#define CRYPTO_30_LIBCV_RSAPSSVERIFYUSEDOFOBJECTINFO                                                STD_ON
#define CRYPTO_30_LIBCV_SHECMDGETIDIDXOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SheCmdGetIdIdx' Reason: 'the optional indirection is deactivated because SheCmdGetIdUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SHECMDGETIDUSEDOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SheCmdGetIdUsed' Reason: 'the optional indirection is deactivated because SheCmdGetIdUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SIPHASHGENERATEIDXOFOBJECTINFO                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashGenerateIdx' Reason: 'the optional indirection is deactivated because SipHashGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SIPHASHGENERATEUSEDOFOBJECTINFO                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashGenerateUsed' Reason: 'the optional indirection is deactivated because SipHashGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SIPHASHVERIFYIDXOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashVerifyIdx' Reason: 'the optional indirection is deactivated because SipHashVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SIPHASHVERIFYUSEDOFOBJECTINFO                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashVerifyUsed' Reason: 'the optional indirection is deactivated because SipHashVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SLHDSAVERIFYIDXOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SlhDsaVerifyIdx' Reason: 'the optional indirection is deactivated because SlhDsaVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SLHDSAVERIFYUSEDOFOBJECTINFO                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SlhDsaVerifyUsed' Reason: 'the optional indirection is deactivated because SlhDsaVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SM2GENERATEIDXOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2GenerateIdx' Reason: 'the optional indirection is deactivated because Sm2GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SM2GENERATEUSEDOFOBJECTINFO                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2GenerateUsed' Reason: 'the optional indirection is deactivated because Sm2GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SM2VERIFYIDXOFOBJECTINFO                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2VerifyIdx' Reason: 'the optional indirection is deactivated because Sm2VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SM2VERIFYUSEDOFOBJECTINFO                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2VerifyUsed' Reason: 'the optional indirection is deactivated because Sm2VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SM4DECRYPTIDXOFOBJECTINFO                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4DecryptIdx' Reason: 'the optional indirection is deactivated because Sm4DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SM4DECRYPTUSEDOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4DecryptUsed' Reason: 'the optional indirection is deactivated because Sm4DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SM4ENCRYPTIDXOFOBJECTINFO                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4EncryptIdx' Reason: 'the optional indirection is deactivated because Sm4EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_SM4ENCRYPTUSEDOFOBJECTINFO                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4EncryptUsed' Reason: 'the optional indirection is deactivated because Sm4EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CRYPTO_30_LIBCV_WORKSPACEADDROFOBJECTINFO                                                   STD_ON
#define CRYPTO_30_LIBCV_WORKSPACELENGTHOFOBJECTINFO                                                 STD_ON
#define CRYPTO_30_LIBCV_OBJECTINFOIND                                                               STD_ON
#define CRYPTO_30_LIBCV_PARTITIONIDENTIFIERS                                                        STD_ON
#define CRYPTO_30_LIBCV_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                                  STD_ON
#define CRYPTO_30_LIBCV_PARTITIONSNVOFPARTITIONIDENTIFIERS                                          STD_ON
#define CRYPTO_30_LIBCV_PARTITIONINFO                                                               STD_ON
#define CRYPTO_30_LIBCV_AESOFPARTITIONINFO                                                          STD_ON
#define CRYPTO_30_LIBCV_DEFAULTRANDOMKEYOFPARTITIONINFO                                             STD_ON
#define CRYPTO_30_LIBCV_HASHOFPARTITIONINFO                                                         STD_ON
#define CRYPTO_30_LIBCV_MASKEDBITSOFPARTITIONINFO                                                   STD_ON
#define CRYPTO_30_LIBCV_PARTITIONINITIALIZED                                                        STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVEFCT                                                                STD_ON
#define CRYPTO_30_LIBCV_DISPATCHOFPRIMITIVEFCT                                                      STD_ON
#define CRYPTO_30_LIBCV_OBJECTINFOINDENDIDXOFPRIMITIVEFCT                                           STD_ON
#define CRYPTO_30_LIBCV_OBJECTINFOINDSTARTIDXOFPRIMITIVEFCT                                         STD_ON
#define CRYPTO_30_LIBCV_OBJECTINFOINDUSEDOFPRIMITIVEFCT                                             STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVEINFO                                                               STD_ON
#define CRYPTO_30_LIBCV_COMBINEDOFPRIMITIVEINFO                                                     STD_ON
#define CRYPTO_30_LIBCV_CONTEXTOFPRIMITIVEINFO                                                      STD_ON
#define CRYPTO_30_LIBCV_DEFAULTRANDOMSOURCEOFPRIMITIVEINFO                                          STD_ON
#define CRYPTO_30_LIBCV_MASKEDBITSOFPRIMITIVEINFO                                                   STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVEFCTIDXOFPRIMITIVEINFO                                              STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVESERVICEINFO                                                        STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO                                   STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO                                 STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVEINFOUSEDOFPRIMITIVESERVICEINFO                                     STD_ON
#define CRYPTO_30_LIBCV_PROCESSJOB_TRIGGER_WRITE                                                    STD_ON
#define CRYPTO_30_LIBCV_QUEUE                                                                       STD_ON
#define CRYPTO_30_LIBCV_RANDOMSEEDBUFFER                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RandomSeedBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_REDIRECT_BUFFER                                                             STD_ON
#define CRYPTO_30_LIBCV_RSAOAEPCRTSHA1DECRYPT                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha1Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAOAEPCRTSHA1DECRYPT                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAOAEPCRTSHA256DECRYPT                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha256Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAOAEPCRTSHA256DECRYPT                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha256Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA1DECRYPT                                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAOAEPSHA1DECRYPT                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA1ENCRYPT                                                          STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAOAEPSHA1ENCRYPT                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA256DECRYPT                                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAOAEPSHA256DECRYPT                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAOAEPSHA256ENCRYPT                                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAOAEPSHA256ENCRYPT                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAPKCS1CRTGENERATE                                                         STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1CrtGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAPKCS1CRTGENERATE                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1CrtGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAPKCS1DECRYPT                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAPKCS1DECRYPT                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAPKCS1ENCRYPT                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAPKCS1ENCRYPT                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAPKCS1GENERATE                                                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAPKCS1GENERATE                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAPKCS1VERIFY                                                              STD_ON
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAPKCS1VERIFY                                                   STD_ON
#define CRYPTO_30_LIBCV_RSAPSSGENERATE                                                              STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPssGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAPSSGENERATE                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_RsaPssGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_RSAPSSVERIFY                                                                STD_ON
#define CRYPTO_30_LIBCV_WORKSPACEOFRSAPSSVERIFY                                                     STD_ON
#define CRYPTO_30_LIBCV_SAVEANDRESTOREWORKSPACE                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace' Reason: 'Disable Feature if no Context primitive is used' */
#define CRYPTO_30_LIBCV_LENGTHOFSAVEANDRESTOREWORKSPACE                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace.Length' Reason: 'Disable Feature if no Context primitive is used' */
#define CRYPTO_30_LIBCV_SHECMDGETID                                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SheCmdGetId' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFSHECMDGETID                                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SheCmdGetId.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_SHEKEYS                                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SheKeys' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_SIPHASHGENERATE                                                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SipHashGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFSIPHASHGENERATE                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SipHashGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_SIPHASHVERIFY                                                               STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SipHashVerify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFSIPHASHVERIFY                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SipHashVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_SIZEOFAESDECRYPT                                                            STD_ON
#define CRYPTO_30_LIBCV_SIZEOFBUFFERLENGTH                                                          STD_ON
#define CRYPTO_30_LIBCV_SIZEOFCMACAESVERIFY                                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFDISPATCH_QUEUEPRIMITIVEINFOIDX                                        STD_ON
#define CRYPTO_30_LIBCV_SIZEOFDRIVEROBJECTSTATE                                                     STD_ON
#define CRYPTO_30_LIBCV_SIZEOFED25519VERIFY                                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFFAMILYTOHASHMAPPING                                                   STD_ON
#define CRYPTO_30_LIBCV_SIZEOFHASH                                                                  STD_ON
#define CRYPTO_30_LIBCV_SIZEOFHMACSHA1VERIFY                                                        STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEY                                                                   STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYELEMENTINFO                                                        STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYELEMENTS                                                           STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYLOCK                                                               STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYSTORAGE                                                            STD_ON
#define CRYPTO_30_LIBCV_SIZEOFLOCK                                                                  STD_ON
#define CRYPTO_30_LIBCV_SIZEOFOBJECTINFO                                                            STD_ON
#define CRYPTO_30_LIBCV_SIZEOFOBJECTINFOIND                                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPARTITIONIDENTIFIERS                                                  STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPARTITIONINFO                                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPRIMITIVEFCT                                                          STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPRIMITIVEINFO                                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPRIMITIVESERVICEINFO                                                  STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPROCESSJOB_TRIGGER_WRITE                                              STD_ON
#define CRYPTO_30_LIBCV_SIZEOFQUEUE                                                                 STD_ON
#define CRYPTO_30_LIBCV_SIZEOFREDIRECT_BUFFER                                                       STD_ON
#define CRYPTO_30_LIBCV_SIZEOFRSAPKCS1VERIFY                                                        STD_ON
#define CRYPTO_30_LIBCV_SIZEOFRSAPSSVERIFY                                                          STD_ON
#define CRYPTO_30_LIBCV_SIZEOFSTRUCTUNIONWS_CRYPTO_30_LIBCV                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFSTRUCTUNIONWS_CRYPTO_30_LIBCV_AES                                     STD_ON
#define CRYPTO_30_LIBCV_SIZEOFWRITTENLENGTH                                                         STD_ON
#define CRYPTO_30_LIBCV_SLHDSAVERIFY                                                                STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SlhDsaVerify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFSLHDSAVERIFY                                                     STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_SlhDsaVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_SM2GENERATE                                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Sm2Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFSM2GENERATE                                                      STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Sm2Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_SM2VERIFY                                                                   STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Sm2Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFSM2VERIFY                                                        STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Sm2Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_SM4DECRYPT                                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Sm4Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFSM4DECRYPT                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Sm4Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_SM4ENCRYPT                                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Sm4Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define CRYPTO_30_LIBCV_WORKSPACEOFSM4ENCRYPT                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_Sm4Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CRYPTO_30_LIBCV_STRICTLENGTHCHECKFORKEYELEMENTGETOFGENERAL                                  STD_ON
#define CRYPTO_30_LIBCV_STRUCTUNIONWS_CRYPTO_30_LIBCV                                               STD_ON
#define CRYPTO_30_LIBCV_DATAOFSTRUCTUNIONWS_CRYPTO_30_LIBCV                                         STD_ON
#define CRYPTO_30_LIBCV_STRUCTUNIONWS_CRYPTO_30_LIBCV_AES                                           STD_ON
#define CRYPTO_30_LIBCV_DATAOFSTRUCTUNIONWS_CRYPTO_30_LIBCV_AES                                     STD_ON
#define CRYPTO_30_LIBCV_USEVSTDLIBOFGENERAL                                                         STD_ON
#define CRYPTO_30_LIBCV_VERSIONINFOAPIOFGENERAL                                                     STD_ON
#define CRYPTO_30_LIBCV_WRITTENLENGTH                                                               STD_ON
#define CRYPTO_30_LIBCV_PCCONFIG                                                                    STD_ON
#define CRYPTO_30_LIBCV_FINALMAGICNUMBEROFPCCONFIG                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CRYPTO_30_LIBCV_INITDATAHASHCODEOFPCCONFIG                                                  STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CRYPTO_30_LIBCV_PCPARTITIONCONFIGOFPCCONFIG                                                 STD_ON
#define CRYPTO_30_LIBCV_PARTITIONIDENTIFIERSOFPCCONFIG                                              STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPARTITIONIDENTIFIERSOFPCCONFIG                                        STD_ON
#define CRYPTO_30_LIBCV_PCPARTITIONCONFIG                                                           STD_ON
#define CRYPTO_30_LIBCV_AESDECRYPTOFPCPARTITIONCONFIG                                               STD_ON
#define CRYPTO_30_LIBCV_BUFFERLENGTHOFPCPARTITIONCONFIG                                             STD_ON
#define CRYPTO_30_LIBCV_CMACAESVERIFYOFPCPARTITIONCONFIG                                            STD_ON
#define CRYPTO_30_LIBCV_DISPATCH_QUEUEPRIMITIVEINFOIDXOFPCPARTITIONCONFIG                           STD_ON
#define CRYPTO_30_LIBCV_DRIVEROBJECTSTATEOFPCPARTITIONCONFIG                                        STD_ON
#define CRYPTO_30_LIBCV_ED25519VERIFYOFPCPARTITIONCONFIG                                            STD_ON
#define CRYPTO_30_LIBCV_EXPECTEDCOMPATIBILITYVERSIONOFPCPARTITIONCONFIG                             STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PCPartitionConfig.ExpectedCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define CRYPTO_30_LIBCV_FAMILYTOHASHMAPPINGOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_GENERATORCOMPATIBILITYVERSIONOFPCPARTITIONCONFIG                            STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PCPartitionConfig.GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define CRYPTO_30_LIBCV_HASHOFPCPARTITIONCONFIG                                                     STD_ON
#define CRYPTO_30_LIBCV_HMACSHA1VERIFYOFPCPARTITIONCONFIG                                           STD_ON
#define CRYPTO_30_LIBCV_KEYELEMENTINFOOFPCPARTITIONCONFIG                                           STD_ON
#define CRYPTO_30_LIBCV_KEYELEMENTSOFPCPARTITIONCONFIG                                              STD_ON
#define CRYPTO_30_LIBCV_KEYLOCKOFPCPARTITIONCONFIG                                                  STD_ON
#define CRYPTO_30_LIBCV_KEYOFPCPARTITIONCONFIG                                                      STD_ON
#define CRYPTO_30_LIBCV_KEYSTORAGEOFPCPARTITIONCONFIG                                               STD_ON
#define CRYPTO_30_LIBCV_LOCKOFPCPARTITIONCONFIG                                                     STD_ON
#define CRYPTO_30_LIBCV_MAINFUNCTIONPERIODOFGENERALOFPCPARTITIONCONFIG                              STD_ON
#define CRYPTO_30_LIBCV_OBJECTINFOINDOFPCPARTITIONCONFIG                                            STD_ON
#define CRYPTO_30_LIBCV_OBJECTINFOOFPCPARTITIONCONFIG                                               STD_ON
#define CRYPTO_30_LIBCV_PARTITIONINFOOFPCPARTITIONCONFIG                                            STD_ON
#define CRYPTO_30_LIBCV_PARTITIONINITIALIZEDOFPCPARTITIONCONFIG                                     STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVEFCTOFPCPARTITIONCONFIG                                             STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVEINFOOFPCPARTITIONCONFIG                                            STD_ON
#define CRYPTO_30_LIBCV_PRIMITIVESERVICEINFOOFPCPARTITIONCONFIG                                     STD_ON
#define CRYPTO_30_LIBCV_PROCESSJOB_TRIGGER_WRITEOFPCPARTITIONCONFIG                                 STD_ON
#define CRYPTO_30_LIBCV_QUEUEOFPCPARTITIONCONFIG                                                    STD_ON
#define CRYPTO_30_LIBCV_REDIRECT_BUFFEROFPCPARTITIONCONFIG                                          STD_ON
#define CRYPTO_30_LIBCV_RSAPKCS1VERIFYOFPCPARTITIONCONFIG                                           STD_ON
#define CRYPTO_30_LIBCV_RSAPSSVERIFYOFPCPARTITIONCONFIG                                             STD_ON
#define CRYPTO_30_LIBCV_SIZEOFAESDECRYPTOFPCPARTITIONCONFIG                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFBUFFERLENGTHOFPCPARTITIONCONFIG                                       STD_ON
#define CRYPTO_30_LIBCV_SIZEOFCMACAESVERIFYOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_SIZEOFDISPATCH_QUEUEPRIMITIVEINFOIDXOFPCPARTITIONCONFIG                     STD_ON
#define CRYPTO_30_LIBCV_SIZEOFDRIVEROBJECTSTATEOFPCPARTITIONCONFIG                                  STD_ON
#define CRYPTO_30_LIBCV_SIZEOFED25519VERIFYOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_SIZEOFFAMILYTOHASHMAPPINGOFPCPARTITIONCONFIG                                STD_ON
#define CRYPTO_30_LIBCV_SIZEOFHASHOFPCPARTITIONCONFIG                                               STD_ON
#define CRYPTO_30_LIBCV_SIZEOFHMACSHA1VERIFYOFPCPARTITIONCONFIG                                     STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYELEMENTINFOOFPCPARTITIONCONFIG                                     STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYELEMENTSOFPCPARTITIONCONFIG                                        STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYLOCKOFPCPARTITIONCONFIG                                            STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYOFPCPARTITIONCONFIG                                                STD_ON
#define CRYPTO_30_LIBCV_SIZEOFKEYSTORAGEOFPCPARTITIONCONFIG                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFLOCKOFPCPARTITIONCONFIG                                               STD_ON
#define CRYPTO_30_LIBCV_SIZEOFOBJECTINFOINDOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_SIZEOFOBJECTINFOOFPCPARTITIONCONFIG                                         STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPARTITIONINFOOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPRIMITIVEFCTOFPCPARTITIONCONFIG                                       STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPRIMITIVEINFOOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPRIMITIVESERVICEINFOOFPCPARTITIONCONFIG                               STD_ON
#define CRYPTO_30_LIBCV_SIZEOFPROCESSJOB_TRIGGER_WRITEOFPCPARTITIONCONFIG                           STD_ON
#define CRYPTO_30_LIBCV_SIZEOFQUEUEOFPCPARTITIONCONFIG                                              STD_ON
#define CRYPTO_30_LIBCV_SIZEOFREDIRECT_BUFFEROFPCPARTITIONCONFIG                                    STD_ON
#define CRYPTO_30_LIBCV_SIZEOFRSAPKCS1VERIFYOFPCPARTITIONCONFIG                                     STD_ON
#define CRYPTO_30_LIBCV_SIZEOFRSAPSSVERIFYOFPCPARTITIONCONFIG                                       STD_ON
#define CRYPTO_30_LIBCV_SIZEOFSTRUCTUNIONWS_CRYPTO_30_LIBCVOFPCPARTITIONCONFIG                      STD_ON
#define CRYPTO_30_LIBCV_SIZEOFSTRUCTUNIONWS_CRYPTO_30_LIBCV_AESOFPCPARTITIONCONFIG                  STD_ON
#define CRYPTO_30_LIBCV_SIZEOFWRITTENLENGTHOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_STRICTLENGTHCHECKFORKEYELEMENTGETOFGENERALOFPCPARTITIONCONFIG               STD_ON
#define CRYPTO_30_LIBCV_STRUCTUNIONWS_CRYPTO_30_LIBCVOFPCPARTITIONCONFIG                            STD_ON
#define CRYPTO_30_LIBCV_STRUCTUNIONWS_CRYPTO_30_LIBCV_AESOFPCPARTITIONCONFIG                        STD_ON
#define CRYPTO_30_LIBCV_USEVSTDLIBOFGENERALOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_VERSIONINFOAPIOFGENERALOFPCPARTITIONCONFIG                                  STD_ON
#define CRYPTO_30_LIBCV_WRITTENLENGTHOFPCPARTITIONCONFIG                                            STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCMinNumericValueDefines  Crypto_30_LibCv Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CRYPTO_30_LIBCV_MIN_BUFFERLENGTH                                                            0u
#define CRYPTO_30_LIBCV_MIN_DRIVEROBJECTSTATE                                                       0u
#define CRYPTO_30_LIBCV_MIN_KEYLOCK                                                                 0u
#define CRYPTO_30_LIBCV_MIN_KEYNVSTATUS                                                             0u
#define CRYPTO_30_LIBCV_MIN_KEYSTORAGE                                                              0u
#define CRYPTO_30_LIBCV_MIN_KEYIDOFLASTJOB                                                          0u
#define CRYPTO_30_LIBCV_MIN_LOCK                                                                    0u
#define CRYPTO_30_LIBCV_MIN_LONGTERMWSLOCK                                                          0u
#define CRYPTO_30_LIBCV_MIN_PARTITIONINITIALIZED                                                    0u
#define CRYPTO_30_LIBCV_MIN_RANDOMSEEDBUFFER                                                        0u
#define CRYPTO_30_LIBCV_MIN_LENGTHOFSAVEANDRESTOREWORKSPACE                                         0u
#define CRYPTO_30_LIBCV_MIN_WRITTENLENGTH                                                           0u
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCMaxNumericValueDefines  Crypto_30_LibCv Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CRYPTO_30_LIBCV_MAX_BUFFERLENGTH                                                            4294967295u
#define CRYPTO_30_LIBCV_MAX_DRIVEROBJECTSTATE                                                       255u
#define CRYPTO_30_LIBCV_MAX_KEYLOCK                                                                 255u
#define CRYPTO_30_LIBCV_MAX_KEYNVSTATUS                                                             255u
#define CRYPTO_30_LIBCV_MAX_KEYSTORAGE                                                              255u
#define CRYPTO_30_LIBCV_MAX_KEYIDOFLASTJOB                                                          4294967295u
#define CRYPTO_30_LIBCV_MAX_LOCK                                                                    4294967295u
#define CRYPTO_30_LIBCV_MAX_LONGTERMWSLOCK                                                          4294967295u
#define CRYPTO_30_LIBCV_MAX_PARTITIONINITIALIZED                                                    255u
#define CRYPTO_30_LIBCV_MAX_RANDOMSEEDBUFFER                                                        255u
#define CRYPTO_30_LIBCV_MAX_LENGTHOFSAVEANDRESTOREWORKSPACE                                         4294967295u
#define CRYPTO_30_LIBCV_MAX_WRITTENLENGTH                                                           4294967295u
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCNoReferenceDefines  Crypto_30_LibCv No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CRYPTO_30_LIBCV_NO_INITVALUE                                                                255u
#define CRYPTO_30_LIBCV_NO_NVBLOCKIDXOFKEY                                                          255u
#define CRYPTO_30_LIBCV_NO_INITVALUEENDIDXOFKEYELEMENTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_INITVALUESTARTIDXOFKEYELEMENTINFO                                        255u
#define CRYPTO_30_LIBCV_NO_AEADCHACHAPOLY1305DECRYPTIDXOFOBJECTINFO                                 255u
#define CRYPTO_30_LIBCV_NO_AEADCHACHAPOLY1305ENCRYPTIDXOFOBJECTINFO                                 255u
#define CRYPTO_30_LIBCV_NO_AESCCMDECRYPTIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_AESCCMENCRYPTIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_AESDECRYPTIDXOFOBJECTINFO                                                255u
#define CRYPTO_30_LIBCV_NO_AESENCRYPTIDXOFOBJECTINFO                                                255u
#define CRYPTO_30_LIBCV_NO_AESGCMDECRYPTIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_AESGCMENCRYPTIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_CMACAESGENERATEIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_CMACAESVERIFYIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_DRBGAESIDXOFOBJECTINFO                                                   255u
#define CRYPTO_30_LIBCV_NO_DRBGHASHSHA512IDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_ECP160GENERATEIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_ECP160VERIFYIDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_ECP256GENERATEIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_ECP256VERIFYIDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_ECP384GENERATEIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_ECP384VERIFYIDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_ECP521GENERATEIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_ECP521VERIFYIDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_ECPKEYCHECKIDXOFOBJECTINFO                                               255u
#define CRYPTO_30_LIBCV_NO_ED25519GENERATEIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_ED25519VERIFYIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_ED448GENERATEIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_ED448VERIFYIDXOFOBJECTINFO                                               255u
#define CRYPTO_30_LIBCV_NO_EDKEYCHECKIDXOFOBJECTINFO                                                255u
#define CRYPTO_30_LIBCV_NO_FIPS186IDXOFOBJECTINFO                                                   255u
#define CRYPTO_30_LIBCV_NO_GMACAESGENERATEIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_GMACAESVERIFYIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_HASHIDXOFOBJECTINFO                                                      255u
#define CRYPTO_30_LIBCV_NO_HMACRIPEMD160GENERATEIDXOFOBJECTINFO                                     255u
#define CRYPTO_30_LIBCV_NO_HMACRIPEMD160VERIFYIDXOFOBJECTINFO                                       255u
#define CRYPTO_30_LIBCV_NO_HMACSHA1GENERATEIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_HMACSHA1VERIFYIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_HMACSHA256GENERATEIDXOFOBJECTINFO                                        255u
#define CRYPTO_30_LIBCV_NO_HMACSHA256VERIFYIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_HMACSHA384GENERATEIDXOFOBJECTINFO                                        255u
#define CRYPTO_30_LIBCV_NO_HMACSHA384VERIFYIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_HMACSHA512GENERATEIDXOFOBJECTINFO                                        255u
#define CRYPTO_30_LIBCV_NO_HMACSHA512VERIFYIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEHKDFEXPANDHMACSHA256IDXOFOBJECTINFO                             255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEHKDFEXPANDHMACSHA384IDXOFOBJECTINFO                             255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEHKDFHMACSHA256IDXOFOBJECTINFO                                   255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEHKDFHMACSHA384IDXOFOBJECTINFO                                   255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEHKDFHASHOPTION1SHA256IDXOFOBJECTINFO                            255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEHKDFHASHOPTION1SHA512IDXOFOBJECTINFO                            255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEISO15118IDXOFOBJECTINFO                                         255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEISO15118_20IDXOFOBJECTINFO                                      255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEKDF2HMACSHA1IDXOFOBJECTINFO                                     255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEKDF2HMACSHA256IDXOFOBJECTINFO                                   255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVENIST800108CNTSHA256IDXOFOBJECTINFO                              255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVENIST800108CTRCMACAESIDXOFOBJECTINFO                             255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVENIST80056AONEPASSIDXOFOBJECTINFO                                255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVENISTFIPS186ERBIDXOFOBJECTINFO                                   255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVESPAKE2PIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEX963SHA256IDXOFOBJECTINFO                                       255u
#define CRYPTO_30_LIBCV_NO_KEYDERIVEX963SHA512IDXOFOBJECTINFO                                       255u
#define CRYPTO_30_LIBCV_NO_KEYGENED25519IDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_KEYGENP256R1IDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_KEYGENP384R1IDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_KEYGENP521R1IDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_KEYGENSM2P256V1IDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYGENSYMGENERICIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_KEYP224R1BDPUBVALIDXOFOBJECTINFO                                         255u
#define CRYPTO_30_LIBCV_NO_KEYP224R1BDSECRETIDXOFOBJECTINFO                                         255u
#define CRYPTO_30_LIBCV_NO_KEYP256R1BDPUBVALIDXOFOBJECTINFO                                         255u
#define CRYPTO_30_LIBCV_NO_KEYP256R1BDSECRETIDXOFOBJECTINFO                                         255u
#define CRYPTO_30_LIBCV_NO_KEYP256R1PUBVALIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYP256R1SECRETIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYP384R1PUBVALIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYP384R1SECRETIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYP521R1PUBVALIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYP521R1SECRETIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYSEEDDRBGAESIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_KEYSEEDDRBGHASHSHA512IDXOFOBJECTINFO                                     255u
#define CRYPTO_30_LIBCV_NO_KEYSEEDFIPS186IDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_KEYSETINVALIDJOBIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_KEYSETVALIDJOBIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_KEYSPAKE2PPUBVALIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_KEYSPAKE2PSECRETIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_KEYUNWRAPAESIDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_KEYWRAPAESIDXOFOBJECTINFO                                                255u
#define CRYPTO_30_LIBCV_NO_KEYX25519PUBVALIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYX25519SECRETIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_KEYX448PUBVALIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_KEYX448SECRETIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_MD5IDXOFOBJECTINFO                                                       255u
#define CRYPTO_30_LIBCV_NO_RANDOMSEEDBUFFERENDIDXOFOBJECTINFO                                       255u
#define CRYPTO_30_LIBCV_NO_RANDOMSEEDBUFFERSTARTIDXOFOBJECTINFO                                     255u
#define CRYPTO_30_LIBCV_NO_RSAOAEPCRTSHA1DECRYPTIDXOFOBJECTINFO                                     255u
#define CRYPTO_30_LIBCV_NO_RSAOAEPCRTSHA256DECRYPTIDXOFOBJECTINFO                                   255u
#define CRYPTO_30_LIBCV_NO_RSAOAEPSHA1DECRYPTIDXOFOBJECTINFO                                        255u
#define CRYPTO_30_LIBCV_NO_RSAOAEPSHA1ENCRYPTIDXOFOBJECTINFO                                        255u
#define CRYPTO_30_LIBCV_NO_RSAOAEPSHA256DECRYPTIDXOFOBJECTINFO                                      255u
#define CRYPTO_30_LIBCV_NO_RSAOAEPSHA256ENCRYPTIDXOFOBJECTINFO                                      255u
#define CRYPTO_30_LIBCV_NO_RSAPKCS1CRTGENERATEIDXOFOBJECTINFO                                       255u
#define CRYPTO_30_LIBCV_NO_RSAPKCS1DECRYPTIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_RSAPKCS1ENCRYPTIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_RSAPKCS1GENERATEIDXOFOBJECTINFO                                          255u
#define CRYPTO_30_LIBCV_NO_RSAPKCS1VERIFYIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_RSAPSSGENERATEIDXOFOBJECTINFO                                            255u
#define CRYPTO_30_LIBCV_NO_RSAPSSVERIFYIDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_SHECMDGETIDIDXOFOBJECTINFO                                               255u
#define CRYPTO_30_LIBCV_NO_SIPHASHGENERATEIDXOFOBJECTINFO                                           255u
#define CRYPTO_30_LIBCV_NO_SIPHASHVERIFYIDXOFOBJECTINFO                                             255u
#define CRYPTO_30_LIBCV_NO_SLHDSAVERIFYIDXOFOBJECTINFO                                              255u
#define CRYPTO_30_LIBCV_NO_SM2GENERATEIDXOFOBJECTINFO                                               255u
#define CRYPTO_30_LIBCV_NO_SM2VERIFYIDXOFOBJECTINFO                                                 255u
#define CRYPTO_30_LIBCV_NO_SM4DECRYPTIDXOFOBJECTINFO                                                255u
#define CRYPTO_30_LIBCV_NO_SM4ENCRYPTIDXOFOBJECTINFO                                                255u
#define CRYPTO_30_LIBCV_NO_OBJECTINFOINDENDIDXOFPRIMITIVEFCT                                        255u
#define CRYPTO_30_LIBCV_NO_OBJECTINFOINDSTARTIDXOFPRIMITIVEFCT                                      255u
#define CRYPTO_30_LIBCV_NO_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO                                255u
#define CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO                              255u
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCMaskedBitDefines  Crypto_30_LibCv Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define CRYPTO_30_LIBCV_ONCEOFKEYELEMENTINFO_MASK                                                   0x04u
#define CRYPTO_30_LIBCV_PARTIALOFKEYELEMENTINFO_MASK                                                0x02u
#define CRYPTO_30_LIBCV_PERSISTOFKEYELEMENTINFO_MASK                                                0x01u
#define CRYPTO_30_LIBCV_AESOFPARTITIONINFO_MASK                                                     0x02u
#define CRYPTO_30_LIBCV_HASHOFPARTITIONINFO_MASK                                                    0x01u
#define CRYPTO_30_LIBCV_CONTEXTOFPRIMITIVEINFO_MASK                                                 0x02u
#define CRYPTO_30_LIBCV_DEFAULTRANDOMSOURCEOFPRIMITIVEINFO_MASK                                     0x01u
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCIsReducedToDefineDefines  Crypto_30_LibCv Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFAEADCHACHAPOLY1305DECRYPT                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFAEADCHACHAPOLY1305ENCRYPT                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFAESCCMDECRYPT                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFAESCCMENCRYPT                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFAESDECRYPT                                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFAESENCRYPT                                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFAESGCMDECRYPT                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFAESGCMENCRYPT                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFCMACAESGENERATE                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFCMACAESVERIFY                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFDRBGAES                                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFDRBGHASHSHA512                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECP160GENERATE                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECP160VERIFY                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECP256GENERATE                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECP256VERIFY                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECP384GENERATE                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECP384VERIFY                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECP521GENERATE                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECP521VERIFY                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFECPKEYCHECK                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFED25519GENERATE                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFED25519VERIFY                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFED448GENERATE                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFED448VERIFY                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFEDKEYCHECK                                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_FAMILYTOHASHMAPPING                                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFFIPS186                                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFGMACAESGENERATE                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFGMACAESVERIFY                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHASH                                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACRIPEMD160GENERATE                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACRIPEMD160VERIFY                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACSHA1GENERATE                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACSHA1VERIFY                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACSHA256GENERATE                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACSHA256VERIFY                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACSHA384GENERATE                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACSHA384VERIFY                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACSHA512GENERATE                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFHMACSHA512VERIFY                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_INITVALUE                                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYELEMENTSENDIDXOFKEY                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYELEMENTSSTARTIDXOFKEY                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_NVBLOCKIDXOFKEY                                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_NVBLOCKUSEDOFKEY                                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEHKDFEXPANDHMACSHA256                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEHKDFEXPANDHMACSHA384                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEHKDFHMACSHA256                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEHKDFHMACSHA384                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEHKDFHASHOPTION1SHA256                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEHKDFHASHOPTION1SHA512                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEISO15118                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEISO15118_20                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEKDF2HMACSHA1                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEKDF2HMACSHA256                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVENIST800108CNTSHA256                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVENIST800108CTRCMACAES                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVENIST80056AONEPASS                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVENISTFIPS186ERB                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVESPAKE2P                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEX963SHA256                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYDERIVEX963SHA512                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_IDOFKEYELEMENTINFO                                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_INITVALUEENDIDXOFKEYELEMENTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_INITVALUESTARTIDXOFKEYELEMENTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_INITVALUEUSEDOFKEYELEMENTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_LENGTHOFKEYELEMENTINFO                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_MASKEDBITSOFKEYELEMENTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ONCEOFKEYELEMENTINFO                                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PARTIALOFKEYELEMENTINFO                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PERSISTOFKEYELEMENTINFO                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_READOFKEYELEMENTINFO                                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WRITEOFKEYELEMENTINFO                                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_IDOFKEYELEMENTS                                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYELEMENTINFOIDXOFKEYELEMENTS                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGEENDIDXOFKEYELEMENTS                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGEEXTENSIONIDXOFKEYELEMENTS                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGESTARTIDXOFKEYELEMENTS                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGEVALIDIDXOFKEYELEMENTS                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGEWRITTENLENGTHENDIDXOFKEYELEMENTS                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGEWRITTENLENGTHSTARTIDXOFKEYELEMENTS                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYGENED25519                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYGENP256R1                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYGENP384R1                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYGENP521R1                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYGENSM2P256V1                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYGENSYMGENERIC                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP224R1BDPUBVAL                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP224R1BDSECRET                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP256R1BDPUBVAL                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP256R1BDSECRET                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP256R1PUBVAL                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP256R1SECRET                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP384R1PUBVAL                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP384R1SECRET                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP521R1PUBVAL                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYP521R1SECRET                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYSEEDDRBGAES                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYSEEDDRBGHASHSHA512                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYSEEDFIPS186                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYSETINVALIDJOB                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYSETVALIDJOB                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYSPAKE2PPUBVAL                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYSPAKE2PSECRET                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYUNWRAPAES                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYWRAPAES                                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYX25519PUBVAL                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYX25519SECRET                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYX448PUBVAL                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFKEYX448SECRET                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFMD5                                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_CONSISTENCYLEVELOFNVBLOCK                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_CRCOFNVBLOCK                                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_DESCRIPTOROFNVBLOCK                                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_IDOFNVBLOCK                                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGEENDIDXOFNVBLOCK                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGESTARTIDXOFNVBLOCK                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_LENGTHOFNVBLOCK                                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PROCESSINGOFNVBLOCK                                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AEADCHACHAPOLY1305DECRYPTIDXOFOBJECTINFO                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AEADCHACHAPOLY1305DECRYPTUSEDOFOBJECTINFO                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AEADCHACHAPOLY1305ENCRYPTIDXOFOBJECTINFO                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AEADCHACHAPOLY1305ENCRYPTUSEDOFOBJECTINFO                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESCCMDECRYPTIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESCCMDECRYPTUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESCCMENCRYPTIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESCCMENCRYPTUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESDECRYPTIDXOFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESDECRYPTUSEDOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESENCRYPTIDXOFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESENCRYPTUSEDOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESGCMDECRYPTIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESGCMDECRYPTUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESGCMENCRYPTIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESGCMENCRYPTUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_APPLICATIONIDOFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_CMACAESGENERATEIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_CMACAESGENERATEUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_CMACAESVERIFYIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_CMACAESVERIFYUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_DRBGAESIDXOFOBJECTINFO                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_DRBGAESUSEDOFOBJECTINFO                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_DRBGHASHSHA512IDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_DRBGHASHSHA512USEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP160GENERATEIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP160GENERATEUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP160VERIFYIDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP160VERIFYUSEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP256GENERATEIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP256GENERATEUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP256VERIFYIDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP256VERIFYUSEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP384GENERATEIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP384GENERATEUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP384VERIFYIDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP384VERIFYUSEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP521GENERATEIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP521GENERATEUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP521VERIFYIDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECP521VERIFYUSEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECPKEYCHECKIDXOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ECPKEYCHECKUSEDOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ED25519GENERATEIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ED25519GENERATEUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ED25519VERIFYIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ED25519VERIFYUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ED448GENERATEIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ED448GENERATEUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ED448VERIFYIDXOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_ED448VERIFYUSEDOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_EDKEYCHECKIDXOFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_EDKEYCHECKUSEDOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_FIPS186IDXOFOBJECTINFO                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_FIPS186USEDOFOBJECTINFO                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_GMACAESGENERATEIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_GMACAESGENERATEUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_GMACAESVERIFYIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_GMACAESVERIFYUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HASHIDXOFOBJECTINFO                                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HASHUSEDOFOBJECTINFO                                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACRIPEMD160GENERATEIDXOFOBJECTINFO                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACRIPEMD160GENERATEUSEDOFOBJECTINFO                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACRIPEMD160VERIFYIDXOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACRIPEMD160VERIFYUSEDOFOBJECTINFO                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA1GENERATEIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA1GENERATEUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA1VERIFYIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA1VERIFYUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA256GENERATEIDXOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA256GENERATEUSEDOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA256VERIFYIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA256VERIFYUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA384GENERATEIDXOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA384GENERATEUSEDOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA384VERIFYIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA384VERIFYUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA512GENERATEIDXOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA512GENERATEUSEDOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA512VERIFYIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA512VERIFYUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFEXPANDHMACSHA256IDXOFOBJECTINFO                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFEXPANDHMACSHA256USEDOFOBJECTINFO                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFEXPANDHMACSHA384IDXOFOBJECTINFO                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFEXPANDHMACSHA384USEDOFOBJECTINFO                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFHMACSHA256IDXOFOBJECTINFO                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFHMACSHA256USEDOFOBJECTINFO                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFHMACSHA384IDXOFOBJECTINFO                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFHMACSHA384USEDOFOBJECTINFO                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFHASHOPTION1SHA256IDXOFOBJECTINFO                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFHASHOPTION1SHA256USEDOFOBJECTINFO                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFHASHOPTION1SHA512IDXOFOBJECTINFO                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEHKDFHASHOPTION1SHA512USEDOFOBJECTINFO                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEISO15118IDXOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEISO15118USEDOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEISO15118_20IDXOFOBJECTINFO                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEISO15118_20USEDOFOBJECTINFO                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEKDF2HMACSHA1IDXOFOBJECTINFO                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEKDF2HMACSHA1USEDOFOBJECTINFO                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEKDF2HMACSHA256IDXOFOBJECTINFO                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEKDF2HMACSHA256USEDOFOBJECTINFO                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVENIST800108CNTSHA256IDXOFOBJECTINFO                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVENIST800108CNTSHA256USEDOFOBJECTINFO                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVENIST800108CTRCMACAESIDXOFOBJECTINFO                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVENIST800108CTRCMACAESUSEDOFOBJECTINFO                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVENIST80056AONEPASSIDXOFOBJECTINFO                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVENIST80056AONEPASSUSEDOFOBJECTINFO                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVENISTFIPS186ERBIDXOFOBJECTINFO                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVENISTFIPS186ERBUSEDOFOBJECTINFO                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVESPAKE2PIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVESPAKE2PUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEX963SHA256IDXOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEX963SHA256USEDOFOBJECTINFO                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEX963SHA512IDXOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYDERIVEX963SHA512USEDOFOBJECTINFO                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENED25519IDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENED25519USEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENP256R1IDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENP256R1USEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENP384R1IDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENP384R1USEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENP521R1IDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENP521R1USEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENSM2P256V1IDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENSM2P256V1USEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENSYMGENERICIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYGENSYMGENERICUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP224R1BDPUBVALIDXOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP224R1BDPUBVALUSEDOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP224R1BDSECRETIDXOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP224R1BDSECRETUSEDOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP256R1BDPUBVALIDXOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP256R1BDPUBVALUSEDOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP256R1BDSECRETIDXOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP256R1BDSECRETUSEDOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP256R1PUBVALIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP256R1PUBVALUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP256R1SECRETIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP256R1SECRETUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP384R1PUBVALIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP384R1PUBVALUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP384R1SECRETIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP384R1SECRETUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP521R1PUBVALIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP521R1PUBVALUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP521R1SECRETIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYP521R1SECRETUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSEEDDRBGAESIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSEEDDRBGAESUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSEEDDRBGHASHSHA512IDXOFOBJECTINFO                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSEEDDRBGHASHSHA512USEDOFOBJECTINFO                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSEEDFIPS186IDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSEEDFIPS186USEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSETINVALIDJOBIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSETINVALIDJOBUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSETVALIDJOBIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSETVALIDJOBUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSPAKE2PPUBVALIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSPAKE2PPUBVALUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSPAKE2PSECRETIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYSPAKE2PSECRETUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYUNWRAPAESIDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYUNWRAPAESUSEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYWRAPAESIDXOFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYWRAPAESUSEDOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYX25519PUBVALIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYX25519PUBVALUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYX25519SECRETIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYX25519SECRETUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYX448PUBVALIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYX448PUBVALUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYX448SECRETIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_KEYX448SECRETUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_MD5IDXOFOBJECTINFO                                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_MD5USEDOFOBJECTINFO                                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PARTITIONIDXOFOBJECTINFO                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_QUEUEIDXOFOBJECTINFO                                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RANDOMSEEDBUFFERENDIDXOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RANDOMSEEDBUFFERSTARTIDXOFOBJECTINFO                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RANDOMSEEDBUFFERUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPCRTSHA1DECRYPTIDXOFOBJECTINFO                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPCRTSHA1DECRYPTUSEDOFOBJECTINFO                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPCRTSHA256DECRYPTIDXOFOBJECTINFO                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPCRTSHA256DECRYPTUSEDOFOBJECTINFO                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPSHA1DECRYPTIDXOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPSHA1DECRYPTUSEDOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPSHA1ENCRYPTIDXOFOBJECTINFO                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPSHA1ENCRYPTUSEDOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPSHA256DECRYPTIDXOFOBJECTINFO                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPSHA256DECRYPTUSEDOFOBJECTINFO                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPSHA256ENCRYPTIDXOFOBJECTINFO                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAOAEPSHA256ENCRYPTUSEDOFOBJECTINFO                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1CRTGENERATEIDXOFOBJECTINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1CRTGENERATEUSEDOFOBJECTINFO                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1DECRYPTIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1DECRYPTUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1ENCRYPTIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1ENCRYPTUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1GENERATEIDXOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1GENERATEUSEDOFOBJECTINFO                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1VERIFYIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1VERIFYUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPSSGENERATEIDXOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPSSGENERATEUSEDOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPSSVERIFYIDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_RSAPSSVERIFYUSEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SHECMDGETIDIDXOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SHECMDGETIDUSEDOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SIPHASHGENERATEIDXOFOBJECTINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SIPHASHGENERATEUSEDOFOBJECTINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SIPHASHVERIFYIDXOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SIPHASHVERIFYUSEDOFOBJECTINFO                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SLHDSAVERIFYIDXOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SLHDSAVERIFYUSEDOFOBJECTINFO                                          STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SM2GENERATEIDXOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SM2GENERATEUSEDOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SM2VERIFYIDXOFOBJECTINFO                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SM2VERIFYUSEDOFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SM4DECRYPTIDXOFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SM4DECRYPTUSEDOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SM4ENCRYPTIDXOFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_SM4ENCRYPTUSEDOFOBJECTINFO                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEADDROFOBJECTINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACELENGTHOFOBJECTINFO                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_OBJECTINFOIND                                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PARTITIONSNVOFPARTITIONIDENTIFIERS                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_AESOFPARTITIONINFO                                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_DEFAULTRANDOMKEYOFPARTITIONINFO                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HASHOFPARTITIONINFO                                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_MASKEDBITSOFPARTITIONINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_DISPATCHOFPRIMITIVEFCT                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_OBJECTINFOINDENDIDXOFPRIMITIVEFCT                                     STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_OBJECTINFOINDSTARTIDXOFPRIMITIVEFCT                                   STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_OBJECTINFOINDUSEDOFPRIMITIVEFCT                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_COMBINEDOFPRIMITIVEINFO                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_CONTEXTOFPRIMITIVEINFO                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_DEFAULTRANDOMSOURCEOFPRIMITIVEINFO                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_MASKEDBITSOFPRIMITIVEINFO                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PRIMITIVEFCTIDXOFPRIMITIVEINFO                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PRIMITIVEINFOUSEDOFPRIMITIVESERVICEINFO                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAOAEPCRTSHA1DECRYPT                                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAOAEPCRTSHA256DECRYPT                                    STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAOAEPSHA1DECRYPT                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAOAEPSHA1ENCRYPT                                         STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAOAEPSHA256DECRYPT                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAOAEPSHA256ENCRYPT                                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAPKCS1CRTGENERATE                                        STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAPKCS1DECRYPT                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAPKCS1ENCRYPT                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAPKCS1GENERATE                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAPKCS1VERIFY                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAPSSGENERATE                                             STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFRSAPSSVERIFY                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFSHECMDGETID                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFSIPHASHGENERATE                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFSIPHASHVERIFY                                              STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFSLHDSAVERIFY                                               STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFSM2GENERATE                                                STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFSM2VERIFY                                                  STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFSM4DECRYPT                                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_WORKSPACEOFSM4ENCRYPT                                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_FINALMAGICNUMBEROFPCCONFIG                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_INITDATAHASHCODEOFPCCONFIG                                            STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PCPARTITIONCONFIGOFPCCONFIG                                           STD_ON
#define CRYPTO_30_LIBCV_ISDEF_PARTITIONIDENTIFIERSOFPCCONFIG                                        STD_ON
#define CRYPTO_30_LIBCV_ISDEF_AESDECRYPTOFPCPARTITIONCONFIG                                         STD_ON
#define CRYPTO_30_LIBCV_ISDEF_BUFFERLENGTHOFPCPARTITIONCONFIG                                       STD_ON
#define CRYPTO_30_LIBCV_ISDEF_CMACAESVERIFYOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_ISDEF_DISPATCH_QUEUEPRIMITIVEINFOIDXOFPCPARTITIONCONFIG                     STD_ON
#define CRYPTO_30_LIBCV_ISDEF_DRIVEROBJECTSTATEOFPCPARTITIONCONFIG                                  STD_ON
#define CRYPTO_30_LIBCV_ISDEF_ED25519VERIFYOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_ISDEF_EXPECTEDCOMPATIBILITYVERSIONOFPCPARTITIONCONFIG                       STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_FAMILYTOHASHMAPPINGOFPCPARTITIONCONFIG                                STD_ON
#define CRYPTO_30_LIBCV_ISDEF_GENERATORCOMPATIBILITYVERSIONOFPCPARTITIONCONFIG                      STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_HASHOFPCPARTITIONCONFIG                                               STD_ON
#define CRYPTO_30_LIBCV_ISDEF_HMACSHA1VERIFYOFPCPARTITIONCONFIG                                     STD_ON
#define CRYPTO_30_LIBCV_ISDEF_KEYELEMENTINFOOFPCPARTITIONCONFIG                                     STD_ON
#define CRYPTO_30_LIBCV_ISDEF_KEYELEMENTSOFPCPARTITIONCONFIG                                        STD_ON
#define CRYPTO_30_LIBCV_ISDEF_KEYLOCKOFPCPARTITIONCONFIG                                            STD_ON
#define CRYPTO_30_LIBCV_ISDEF_KEYOFPCPARTITIONCONFIG                                                STD_ON
#define CRYPTO_30_LIBCV_ISDEF_KEYSTORAGEOFPCPARTITIONCONFIG                                         STD_ON
#define CRYPTO_30_LIBCV_ISDEF_LOCKOFPCPARTITIONCONFIG                                               STD_ON
#define CRYPTO_30_LIBCV_ISDEF_OBJECTINFOINDOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_ISDEF_OBJECTINFOOFPCPARTITIONCONFIG                                         STD_ON
#define CRYPTO_30_LIBCV_ISDEF_PARTITIONINFOOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_ISDEF_PARTITIONINITIALIZEDOFPCPARTITIONCONFIG                               STD_ON
#define CRYPTO_30_LIBCV_ISDEF_PRIMITIVEFCTOFPCPARTITIONCONFIG                                       STD_ON
#define CRYPTO_30_LIBCV_ISDEF_PRIMITIVEINFOOFPCPARTITIONCONFIG                                      STD_ON
#define CRYPTO_30_LIBCV_ISDEF_PRIMITIVESERVICEINFOOFPCPARTITIONCONFIG                               STD_ON
#define CRYPTO_30_LIBCV_ISDEF_PROCESSJOB_TRIGGER_WRITEOFPCPARTITIONCONFIG                           STD_ON
#define CRYPTO_30_LIBCV_ISDEF_QUEUEOFPCPARTITIONCONFIG                                              STD_ON
#define CRYPTO_30_LIBCV_ISDEF_REDIRECT_BUFFEROFPCPARTITIONCONFIG                                    STD_ON
#define CRYPTO_30_LIBCV_ISDEF_RSAPKCS1VERIFYOFPCPARTITIONCONFIG                                     STD_ON
#define CRYPTO_30_LIBCV_ISDEF_RSAPSSVERIFYOFPCPARTITIONCONFIG                                       STD_ON
#define CRYPTO_30_LIBCV_ISDEF_STRUCTUNIONWS_CRYPTO_30_LIBCVOFPCPARTITIONCONFIG                      STD_ON
#define CRYPTO_30_LIBCV_ISDEF_STRUCTUNIONWS_CRYPTO_30_LIBCV_AESOFPCPARTITIONCONFIG                  STD_ON
#define CRYPTO_30_LIBCV_ISDEF_WRITTENLENGTHOFPCPARTITIONCONFIG                                      STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCEqualsAlwaysToDefines  Crypto_30_LibCv Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFAEADCHACHAPOLY1305DECRYPT                                    
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFAEADCHACHAPOLY1305ENCRYPT                                    
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFAESCCMDECRYPT                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFAESCCMENCRYPT                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFAESDECRYPT                                                   
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFAESENCRYPT                                                   
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFAESGCMDECRYPT                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFAESGCMENCRYPT                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFCMACAESGENERATE                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFCMACAESVERIFY                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFDRBGAES                                                      
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFDRBGHASHSHA512                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECP160GENERATE                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECP160VERIFY                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECP256GENERATE                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECP256VERIFY                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECP384GENERATE                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECP384VERIFY                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECP521GENERATE                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECP521VERIFY                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFECPKEYCHECK                                                  
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFED25519GENERATE                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFED25519VERIFY                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFED448GENERATE                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFED448VERIFY                                                  
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFEDKEYCHECK                                                   
#define CRYPTO_30_LIBCV_EQ2_FAMILYTOHASHMAPPING                                                     
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFFIPS186                                                      
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFGMACAESGENERATE                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFGMACAESVERIFY                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHASH                                                         
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACRIPEMD160GENERATE                                        
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACRIPEMD160VERIFY                                          
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACSHA1GENERATE                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACSHA1VERIFY                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACSHA256GENERATE                                           
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACSHA256VERIFY                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACSHA384GENERATE                                           
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACSHA384VERIFY                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACSHA512GENERATE                                           
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFHMACSHA512VERIFY                                             
#define CRYPTO_30_LIBCV_EQ2_INITVALUE                                                               
#define CRYPTO_30_LIBCV_EQ2_KEYELEMENTSENDIDXOFKEY                                                  
#define CRYPTO_30_LIBCV_EQ2_KEYELEMENTSSTARTIDXOFKEY                                                
#define CRYPTO_30_LIBCV_EQ2_NVBLOCKIDXOFKEY                                                         
#define CRYPTO_30_LIBCV_EQ2_NVBLOCKUSEDOFKEY                                                        
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEHKDFEXPANDHMACSHA256                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEHKDFEXPANDHMACSHA384                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEHKDFHMACSHA256                                      
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEHKDFHMACSHA384                                      
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEHKDFHASHOPTION1SHA256                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEHKDFHASHOPTION1SHA512                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEISO15118                                            
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEISO15118_20                                         
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEKDF2HMACSHA1                                        
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEKDF2HMACSHA256                                      
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVENIST800108CNTSHA256                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVENIST800108CTRCMACAES                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVENIST80056AONEPASS                                   
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVENISTFIPS186ERB                                      
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVESPAKE2P                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEX963SHA256                                          
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYDERIVEX963SHA512                                          
#define CRYPTO_30_LIBCV_EQ2_IDOFKEYELEMENTINFO                                                      
#define CRYPTO_30_LIBCV_EQ2_INITVALUEENDIDXOFKEYELEMENTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_INITVALUESTARTIDXOFKEYELEMENTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_INITVALUEUSEDOFKEYELEMENTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_LENGTHOFKEYELEMENTINFO                                                  
#define CRYPTO_30_LIBCV_EQ2_MASKEDBITSOFKEYELEMENTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_ONCEOFKEYELEMENTINFO                                                    
#define CRYPTO_30_LIBCV_EQ2_PARTIALOFKEYELEMENTINFO                                                 
#define CRYPTO_30_LIBCV_EQ2_PERSISTOFKEYELEMENTINFO                                                 
#define CRYPTO_30_LIBCV_EQ2_READOFKEYELEMENTINFO                                                    
#define CRYPTO_30_LIBCV_EQ2_WRITEOFKEYELEMENTINFO                                                   
#define CRYPTO_30_LIBCV_EQ2_IDOFKEYELEMENTS                                                         
#define CRYPTO_30_LIBCV_EQ2_KEYELEMENTINFOIDXOFKEYELEMENTS                                          
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGEENDIDXOFKEYELEMENTS                                           
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGEEXTENSIONIDXOFKEYELEMENTS                                     
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGESTARTIDXOFKEYELEMENTS                                         
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGEVALIDIDXOFKEYELEMENTS                                         
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGEWRITTENLENGTHENDIDXOFKEYELEMENTS                              
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGEWRITTENLENGTHSTARTIDXOFKEYELEMENTS                            
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYGENED25519                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYGENP256R1                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYGENP384R1                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYGENP521R1                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYGENSM2P256V1                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYGENSYMGENERIC                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP224R1BDPUBVAL                                            
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP224R1BDSECRET                                            
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP256R1BDPUBVAL                                            
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP256R1BDSECRET                                            
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP256R1PUBVAL                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP256R1SECRET                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP384R1PUBVAL                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP384R1SECRET                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP521R1PUBVAL                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYP521R1SECRET                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYSEEDDRBGAES                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYSEEDDRBGHASHSHA512                                        
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYSEEDFIPS186                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYSETINVALIDJOB                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYSETVALIDJOB                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYSPAKE2PPUBVAL                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYSPAKE2PSECRET                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYUNWRAPAES                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYWRAPAES                                                   
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYX25519PUBVAL                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYX25519SECRET                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYX448PUBVAL                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFKEYX448SECRET                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFMD5                                                          
#define CRYPTO_30_LIBCV_EQ2_CONSISTENCYLEVELOFNVBLOCK                                               
#define CRYPTO_30_LIBCV_EQ2_CRCOFNVBLOCK                                                            
#define CRYPTO_30_LIBCV_EQ2_DESCRIPTOROFNVBLOCK                                                     
#define CRYPTO_30_LIBCV_EQ2_IDOFNVBLOCK                                                             
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGEENDIDXOFNVBLOCK                                               
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGESTARTIDXOFNVBLOCK                                             
#define CRYPTO_30_LIBCV_EQ2_LENGTHOFNVBLOCK                                                         
#define CRYPTO_30_LIBCV_EQ2_PROCESSINGOFNVBLOCK                                                     
#define CRYPTO_30_LIBCV_EQ2_AEADCHACHAPOLY1305DECRYPTIDXOFOBJECTINFO                                
#define CRYPTO_30_LIBCV_EQ2_AEADCHACHAPOLY1305DECRYPTUSEDOFOBJECTINFO                               
#define CRYPTO_30_LIBCV_EQ2_AEADCHACHAPOLY1305ENCRYPTIDXOFOBJECTINFO                                
#define CRYPTO_30_LIBCV_EQ2_AEADCHACHAPOLY1305ENCRYPTUSEDOFOBJECTINFO                               
#define CRYPTO_30_LIBCV_EQ2_AESCCMDECRYPTIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_AESCCMDECRYPTUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_AESCCMENCRYPTIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_AESCCMENCRYPTUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_AESDECRYPTIDXOFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_AESDECRYPTUSEDOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_AESENCRYPTIDXOFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_AESENCRYPTUSEDOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_AESGCMDECRYPTIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_AESGCMDECRYPTUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_AESGCMENCRYPTIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_AESGCMENCRYPTUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_APPLICATIONIDOFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_CMACAESGENERATEIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_CMACAESGENERATEUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_CMACAESVERIFYIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_CMACAESVERIFYUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_DRBGAESIDXOFOBJECTINFO                                                  
#define CRYPTO_30_LIBCV_EQ2_DRBGAESUSEDOFOBJECTINFO                                                 
#define CRYPTO_30_LIBCV_EQ2_DRBGHASHSHA512IDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_DRBGHASHSHA512USEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_ECP160GENERATEIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_ECP160GENERATEUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_ECP160VERIFYIDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_ECP160VERIFYUSEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_ECP256GENERATEIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_ECP256GENERATEUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_ECP256VERIFYIDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_ECP256VERIFYUSEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_ECP384GENERATEIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_ECP384GENERATEUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_ECP384VERIFYIDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_ECP384VERIFYUSEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_ECP521GENERATEIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_ECP521GENERATEUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_ECP521VERIFYIDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_ECP521VERIFYUSEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_ECPKEYCHECKIDXOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_ECPKEYCHECKUSEDOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_ED25519GENERATEIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_ED25519GENERATEUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_ED25519VERIFYIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_ED25519VERIFYUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_ED448GENERATEIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_ED448GENERATEUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_ED448VERIFYIDXOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_ED448VERIFYUSEDOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_EDKEYCHECKIDXOFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_EDKEYCHECKUSEDOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_FIPS186IDXOFOBJECTINFO                                                  
#define CRYPTO_30_LIBCV_EQ2_FIPS186USEDOFOBJECTINFO                                                 
#define CRYPTO_30_LIBCV_EQ2_GMACAESGENERATEIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_GMACAESGENERATEUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_GMACAESVERIFYIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_GMACAESVERIFYUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_HASHIDXOFOBJECTINFO                                                     
#define CRYPTO_30_LIBCV_EQ2_HASHUSEDOFOBJECTINFO                                                    
#define CRYPTO_30_LIBCV_EQ2_HMACRIPEMD160GENERATEIDXOFOBJECTINFO                                    
#define CRYPTO_30_LIBCV_EQ2_HMACRIPEMD160GENERATEUSEDOFOBJECTINFO                                   
#define CRYPTO_30_LIBCV_EQ2_HMACRIPEMD160VERIFYIDXOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_HMACRIPEMD160VERIFYUSEDOFOBJECTINFO                                     
#define CRYPTO_30_LIBCV_EQ2_HMACSHA1GENERATEIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_HMACSHA1GENERATEUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_HMACSHA1VERIFYIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_HMACSHA1VERIFYUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_HMACSHA256GENERATEIDXOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_HMACSHA256GENERATEUSEDOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_HMACSHA256VERIFYIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_HMACSHA256VERIFYUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_HMACSHA384GENERATEIDXOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_HMACSHA384GENERATEUSEDOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_HMACSHA384VERIFYIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_HMACSHA384VERIFYUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_HMACSHA512GENERATEIDXOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_HMACSHA512GENERATEUSEDOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_HMACSHA512VERIFYIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_HMACSHA512VERIFYUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFEXPANDHMACSHA256IDXOFOBJECTINFO                            
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFEXPANDHMACSHA256USEDOFOBJECTINFO                           
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFEXPANDHMACSHA384IDXOFOBJECTINFO                            
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFEXPANDHMACSHA384USEDOFOBJECTINFO                           
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFHMACSHA256IDXOFOBJECTINFO                                  
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFHMACSHA256USEDOFOBJECTINFO                                 
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFHMACSHA384IDXOFOBJECTINFO                                  
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFHMACSHA384USEDOFOBJECTINFO                                 
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFHASHOPTION1SHA256IDXOFOBJECTINFO                           
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFHASHOPTION1SHA256USEDOFOBJECTINFO                          
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFHASHOPTION1SHA512IDXOFOBJECTINFO                           
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEHKDFHASHOPTION1SHA512USEDOFOBJECTINFO                          
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEISO15118IDXOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEISO15118USEDOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEISO15118_20IDXOFOBJECTINFO                                     
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEISO15118_20USEDOFOBJECTINFO                                    
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEKDF2HMACSHA1IDXOFOBJECTINFO                                    
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEKDF2HMACSHA1USEDOFOBJECTINFO                                   
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEKDF2HMACSHA256IDXOFOBJECTINFO                                  
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEKDF2HMACSHA256USEDOFOBJECTINFO                                 
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVENIST800108CNTSHA256IDXOFOBJECTINFO                             
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVENIST800108CNTSHA256USEDOFOBJECTINFO                            
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVENIST800108CTRCMACAESIDXOFOBJECTINFO                            
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVENIST800108CTRCMACAESUSEDOFOBJECTINFO                           
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVENIST80056AONEPASSIDXOFOBJECTINFO                               
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVENIST80056AONEPASSUSEDOFOBJECTINFO                              
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVENISTFIPS186ERBIDXOFOBJECTINFO                                  
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVENISTFIPS186ERBUSEDOFOBJECTINFO                                 
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVESPAKE2PIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVESPAKE2PUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEX963SHA256IDXOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEX963SHA256USEDOFOBJECTINFO                                     
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEX963SHA512IDXOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_KEYDERIVEX963SHA512USEDOFOBJECTINFO                                     
#define CRYPTO_30_LIBCV_EQ2_KEYGENED25519IDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_KEYGENED25519USEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_KEYGENP256R1IDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_KEYGENP256R1USEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_KEYGENP384R1IDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_KEYGENP384R1USEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_KEYGENP521R1IDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_KEYGENP521R1USEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_KEYGENSM2P256V1IDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYGENSM2P256V1USEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYGENSYMGENERICIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYGENSYMGENERICUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYP224R1BDPUBVALIDXOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYP224R1BDPUBVALUSEDOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_KEYP224R1BDSECRETIDXOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYP224R1BDSECRETUSEDOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_KEYP256R1BDPUBVALIDXOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYP256R1BDPUBVALUSEDOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_KEYP256R1BDSECRETIDXOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYP256R1BDSECRETUSEDOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_KEYP256R1PUBVALIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYP256R1PUBVALUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYP256R1SECRETIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYP256R1SECRETUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYP384R1PUBVALIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYP384R1PUBVALUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYP384R1SECRETIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYP384R1SECRETUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYP521R1PUBVALIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYP521R1PUBVALUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYP521R1SECRETIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYP521R1SECRETUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYSEEDDRBGAESIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_KEYSEEDDRBGAESUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYSEEDDRBGHASHSHA512IDXOFOBJECTINFO                                    
#define CRYPTO_30_LIBCV_EQ2_KEYSEEDDRBGHASHSHA512USEDOFOBJECTINFO                                   
#define CRYPTO_30_LIBCV_EQ2_KEYSEEDFIPS186IDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_KEYSEEDFIPS186USEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYSETINVALIDJOBIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYSETINVALIDJOBUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYSETVALIDJOBIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_KEYSETVALIDJOBUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYSPAKE2PPUBVALIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYSPAKE2PPUBVALUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYSPAKE2PSECRETIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYSPAKE2PSECRETUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_KEYUNWRAPAESIDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_KEYUNWRAPAESUSEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_KEYWRAPAESIDXOFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_KEYWRAPAESUSEDOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_KEYX25519PUBVALIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYX25519PUBVALUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYX25519SECRETIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_KEYX25519SECRETUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_KEYX448PUBVALIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_KEYX448PUBVALUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_KEYX448SECRETIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_KEYX448SECRETUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_MD5IDXOFOBJECTINFO                                                      
#define CRYPTO_30_LIBCV_EQ2_MD5USEDOFOBJECTINFO                                                     
#define CRYPTO_30_LIBCV_EQ2_PARTITIONIDXOFOBJECTINFO                                                
#define CRYPTO_30_LIBCV_EQ2_QUEUEIDXOFOBJECTINFO                                                    
#define CRYPTO_30_LIBCV_EQ2_RANDOMSEEDBUFFERENDIDXOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_RANDOMSEEDBUFFERSTARTIDXOFOBJECTINFO                                    
#define CRYPTO_30_LIBCV_EQ2_RANDOMSEEDBUFFERUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPCRTSHA1DECRYPTIDXOFOBJECTINFO                                    
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPCRTSHA1DECRYPTUSEDOFOBJECTINFO                                   
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPCRTSHA256DECRYPTIDXOFOBJECTINFO                                  
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPCRTSHA256DECRYPTUSEDOFOBJECTINFO                                 
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPSHA1DECRYPTIDXOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPSHA1DECRYPTUSEDOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPSHA1ENCRYPTIDXOFOBJECTINFO                                       
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPSHA1ENCRYPTUSEDOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPSHA256DECRYPTIDXOFOBJECTINFO                                     
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPSHA256DECRYPTUSEDOFOBJECTINFO                                    
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPSHA256ENCRYPTIDXOFOBJECTINFO                                     
#define CRYPTO_30_LIBCV_EQ2_RSAOAEPSHA256ENCRYPTUSEDOFOBJECTINFO                                    
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1CRTGENERATEIDXOFOBJECTINFO                                      
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1CRTGENERATEUSEDOFOBJECTINFO                                     
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1DECRYPTIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1DECRYPTUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1ENCRYPTIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1ENCRYPTUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1GENERATEIDXOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1GENERATEUSEDOFOBJECTINFO                                        
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1VERIFYIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1VERIFYUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_RSAPSSGENERATEIDXOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_RSAPSSGENERATEUSEDOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_RSAPSSVERIFYIDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_RSAPSSVERIFYUSEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_SHECMDGETIDIDXOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_SHECMDGETIDUSEDOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_SIPHASHGENERATEIDXOFOBJECTINFO                                          
#define CRYPTO_30_LIBCV_EQ2_SIPHASHGENERATEUSEDOFOBJECTINFO                                         
#define CRYPTO_30_LIBCV_EQ2_SIPHASHVERIFYIDXOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_SIPHASHVERIFYUSEDOFOBJECTINFO                                           
#define CRYPTO_30_LIBCV_EQ2_SLHDSAVERIFYIDXOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_SLHDSAVERIFYUSEDOFOBJECTINFO                                            
#define CRYPTO_30_LIBCV_EQ2_SM2GENERATEIDXOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_SM2GENERATEUSEDOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_SM2VERIFYIDXOFOBJECTINFO                                                
#define CRYPTO_30_LIBCV_EQ2_SM2VERIFYUSEDOFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_SM4DECRYPTIDXOFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_SM4DECRYPTUSEDOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_SM4ENCRYPTIDXOFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_SM4ENCRYPTUSEDOFOBJECTINFO                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEADDROFOBJECTINFO                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACELENGTHOFOBJECTINFO                                             
#define CRYPTO_30_LIBCV_EQ2_OBJECTINFOIND                                                           
#define CRYPTO_30_LIBCV_EQ2_PCPARTITIONCONFIGIDXOFPARTITIONIDENTIFIERS                              
#define CRYPTO_30_LIBCV_EQ2_PARTITIONSNVOFPARTITIONIDENTIFIERS                                      
#define CRYPTO_30_LIBCV_EQ2_AESOFPARTITIONINFO                                                      
#define CRYPTO_30_LIBCV_EQ2_DEFAULTRANDOMKEYOFPARTITIONINFO                                         
#define CRYPTO_30_LIBCV_EQ2_HASHOFPARTITIONINFO                                                     
#define CRYPTO_30_LIBCV_EQ2_MASKEDBITSOFPARTITIONINFO                                               
#define CRYPTO_30_LIBCV_EQ2_DISPATCHOFPRIMITIVEFCT                                                  
#define CRYPTO_30_LIBCV_EQ2_OBJECTINFOINDENDIDXOFPRIMITIVEFCT                                       
#define CRYPTO_30_LIBCV_EQ2_OBJECTINFOINDSTARTIDXOFPRIMITIVEFCT                                     
#define CRYPTO_30_LIBCV_EQ2_OBJECTINFOINDUSEDOFPRIMITIVEFCT                                         
#define CRYPTO_30_LIBCV_EQ2_COMBINEDOFPRIMITIVEINFO                                                 
#define CRYPTO_30_LIBCV_EQ2_CONTEXTOFPRIMITIVEINFO                                                  
#define CRYPTO_30_LIBCV_EQ2_DEFAULTRANDOMSOURCEOFPRIMITIVEINFO                                      
#define CRYPTO_30_LIBCV_EQ2_MASKEDBITSOFPRIMITIVEINFO                                               
#define CRYPTO_30_LIBCV_EQ2_PRIMITIVEFCTIDXOFPRIMITIVEINFO                                          
#define CRYPTO_30_LIBCV_EQ2_PRIMITIVEINFOENDIDXOFPRIMITIVESERVICEINFO                               
#define CRYPTO_30_LIBCV_EQ2_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO                             
#define CRYPTO_30_LIBCV_EQ2_PRIMITIVEINFOUSEDOFPRIMITIVESERVICEINFO                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAOAEPCRTSHA1DECRYPT                                        
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAOAEPCRTSHA256DECRYPT                                      
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAOAEPSHA1DECRYPT                                           
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAOAEPSHA1ENCRYPT                                           
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAOAEPSHA256DECRYPT                                         
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAOAEPSHA256ENCRYPT                                         
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAPKCS1CRTGENERATE                                          
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAPKCS1DECRYPT                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAPKCS1ENCRYPT                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAPKCS1GENERATE                                             
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAPKCS1VERIFY                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAPSSGENERATE                                               
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFRSAPSSVERIFY                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFSHECMDGETID                                                  
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFSIPHASHGENERATE                                              
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFSIPHASHVERIFY                                                
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFSLHDSAVERIFY                                                 
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFSM2GENERATE                                                  
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFSM2VERIFY                                                    
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFSM4DECRYPT                                                   
#define CRYPTO_30_LIBCV_EQ2_WORKSPACEOFSM4ENCRYPT                                                   
#define CRYPTO_30_LIBCV_EQ2_FINALMAGICNUMBEROFPCCONFIG                                              
#define CRYPTO_30_LIBCV_EQ2_INITDATAHASHCODEOFPCCONFIG                                              
#define CRYPTO_30_LIBCV_EQ2_PCPARTITIONCONFIGOFPCCONFIG                                             Crypto_30_LibCv_PCPartitionConfig
#define CRYPTO_30_LIBCV_EQ2_PARTITIONIDENTIFIERSOFPCCONFIG                                          Crypto_30_LibCv_PartitionIdentifiers
#define CRYPTO_30_LIBCV_EQ2_AESDECRYPTOFPCPARTITIONCONFIG                                           Crypto_30_LibCv_AesDecrypt
#define CRYPTO_30_LIBCV_EQ2_BUFFERLENGTHOFPCPARTITIONCONFIG                                         Crypto_30_LibCv_BufferLength
#define CRYPTO_30_LIBCV_EQ2_CMACAESVERIFYOFPCPARTITIONCONFIG                                        Crypto_30_LibCv_CmacAesVerify
#define CRYPTO_30_LIBCV_EQ2_DISPATCH_QUEUEPRIMITIVEINFOIDXOFPCPARTITIONCONFIG                       Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx
#define CRYPTO_30_LIBCV_EQ2_DRIVEROBJECTSTATEOFPCPARTITIONCONFIG                                    Crypto_30_LibCv_DriverObjectState
#define CRYPTO_30_LIBCV_EQ2_ED25519VERIFYOFPCPARTITIONCONFIG                                        Crypto_30_LibCv_Ed25519Verify
#define CRYPTO_30_LIBCV_EQ2_EXPECTEDCOMPATIBILITYVERSIONOFPCPARTITIONCONFIG                         
#define CRYPTO_30_LIBCV_EQ2_FAMILYTOHASHMAPPINGOFPCPARTITIONCONFIG                                  Crypto_30_LibCv_FamilyToHashMapping
#define CRYPTO_30_LIBCV_EQ2_GENERATORCOMPATIBILITYVERSIONOFPCPARTITIONCONFIG                        
#define CRYPTO_30_LIBCV_EQ2_HASHOFPCPARTITIONCONFIG                                                 Crypto_30_LibCv_Hash
#define CRYPTO_30_LIBCV_EQ2_HMACSHA1VERIFYOFPCPARTITIONCONFIG                                       Crypto_30_LibCv_HmacSha1Verify
#define CRYPTO_30_LIBCV_EQ2_KEYELEMENTINFOOFPCPARTITIONCONFIG                                       Crypto_30_LibCv_KeyElementInfo
#define CRYPTO_30_LIBCV_EQ2_KEYELEMENTSOFPCPARTITIONCONFIG                                          Crypto_30_LibCv_KeyElements
#define CRYPTO_30_LIBCV_EQ2_KEYLOCKOFPCPARTITIONCONFIG                                              Crypto_30_LibCv_KeyLock.raw
#define CRYPTO_30_LIBCV_EQ2_KEYOFPCPARTITIONCONFIG                                                  Crypto_30_LibCv_Key
#define CRYPTO_30_LIBCV_EQ2_KEYSTORAGEOFPCPARTITIONCONFIG                                           Crypto_30_LibCv_KeyStorage
#define CRYPTO_30_LIBCV_EQ2_LOCKOFPCPARTITIONCONFIG                                                 Crypto_30_LibCv_Lock
#define CRYPTO_30_LIBCV_EQ2_OBJECTINFOINDOFPCPARTITIONCONFIG                                        Crypto_30_LibCv_ObjectInfoInd
#define CRYPTO_30_LIBCV_EQ2_OBJECTINFOOFPCPARTITIONCONFIG                                           Crypto_30_LibCv_ObjectInfo
#define CRYPTO_30_LIBCV_EQ2_PARTITIONINFOOFPCPARTITIONCONFIG                                        Crypto_30_LibCv_PartitionInfo
#define CRYPTO_30_LIBCV_EQ2_PARTITIONINITIALIZEDOFPCPARTITIONCONFIG                                 (&(Crypto_30_LibCv_PartitionInitialized))
#define CRYPTO_30_LIBCV_EQ2_PRIMITIVEFCTOFPCPARTITIONCONFIG                                         Crypto_30_LibCv_PrimitiveFct
#define CRYPTO_30_LIBCV_EQ2_PRIMITIVEINFOOFPCPARTITIONCONFIG                                        Crypto_30_LibCv_PrimitiveInfo
#define CRYPTO_30_LIBCV_EQ2_PRIMITIVESERVICEINFOOFPCPARTITIONCONFIG                                 Crypto_30_LibCv_PrimitiveServiceInfo
#define CRYPTO_30_LIBCV_EQ2_PROCESSJOB_TRIGGER_WRITEOFPCPARTITIONCONFIG                             Crypto_30_LibCv_ProcessJob_Trigger_Write
#define CRYPTO_30_LIBCV_EQ2_QUEUEOFPCPARTITIONCONFIG                                                Crypto_30_LibCv_Queue.raw
#define CRYPTO_30_LIBCV_EQ2_REDIRECT_BUFFEROFPCPARTITIONCONFIG                                      Crypto_30_LibCv_Redirect_Buffer
#define CRYPTO_30_LIBCV_EQ2_RSAPKCS1VERIFYOFPCPARTITIONCONFIG                                       Crypto_30_LibCv_RsaPkcs1Verify
#define CRYPTO_30_LIBCV_EQ2_RSAPSSVERIFYOFPCPARTITIONCONFIG                                         Crypto_30_LibCv_RsaPssVerify
#define CRYPTO_30_LIBCV_EQ2_STRUCTUNIONWS_CRYPTO_30_LIBCVOFPCPARTITIONCONFIG                        Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv
#define CRYPTO_30_LIBCV_EQ2_STRUCTUNIONWS_CRYPTO_30_LIBCV_AESOFPCPARTITIONCONFIG                    Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes
#define CRYPTO_30_LIBCV_EQ2_WRITTENLENGTHOFPCPARTITIONCONFIG                                        Crypto_30_LibCv_WrittenLength
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCSymbolicInitializationPointers  Crypto_30_LibCv Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Crypto_30_LibCv_Config_Ptr                                                                  NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Crypto_30_LibCv' */
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCInitializationSymbols  Crypto_30_LibCv Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Crypto_30_LibCv_Config                                                                      NULL_PTR  /**< symbolic identifier which could be used to initialize 'Crypto_30_LibCv */
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCGeneral  Crypto_30_LibCv General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CRYPTO_30_LIBCV_CHECK_INIT_POINTER                                                          STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CRYPTO_30_LIBCV_FINAL_MAGIC_NUMBER                                                          0xFF1Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of Crypto_30_LibCv */
#define CRYPTO_30_LIBCV_INDIVIDUAL_POSTBUILD                                                        STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Crypto_30_LibCv' is not configured to be postbuild capable. */
#define CRYPTO_30_LIBCV_INIT_DATA                                                                   CRYPTO_30_LIBCV_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CRYPTO_30_LIBCV_INIT_DATA_HASH_CODE                                                         2027971617  /**< the precompile constant to validate the initialization structure at initialization time of Crypto_30_LibCv with a hashcode. The seed value is '0xFF1Eu' */
#define CRYPTO_30_LIBCV_USE_ECUM_BSW_ERROR_HOOK                                                     STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CRYPTO_30_LIBCV_USE_INIT_POINTER                                                            STD_OFF  /**< STD_ON if the init pointer Crypto_30_LibCv shall be used. */
#define Crypto_30_LibCv_PartitionIndexOfCSLForCRYPTO_30_LIBCV_SINGLE_PARTITION                      0u  /**< internal partition index of the ComStackLib for the partition CRYPTO_30_LIBCV_SINGLE_PARTITION */
/** 
  \}
*/ 



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Crypto_30_LibCvPBDataSwitches  Crypto_30_LibCv Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CRYPTO_30_LIBCV_PBCONFIG                                                                    STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CRYPTO_30_LIBCV_LTCONFIGIDXOFPBCONFIG                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CRYPTO_30_LIBCV_PBPARTITIONCONFIGOFPBCONFIG                                                 STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CRYPTO_30_LIBCV_PCCONFIGIDXOFPBCONFIG                                                       STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CRYPTO_30_LIBCV_PBPARTITIONCONFIG                                                           STD_OFF  /**< Deactivateable: 'Crypto_30_LibCv_PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPBIsReducedToDefineDefines  Crypto_30_LibCv Is Reduced To Define Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CRYPTO_30_LIBCV_ISDEF_LTCONFIGIDXOFPBCONFIG                                                 STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PBPARTITIONCONFIGOFPBCONFIG                                           STD_OFF
#define CRYPTO_30_LIBCV_ISDEF_PCCONFIGIDXOFPBCONFIG                                                 STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPBEqualsAlwaysToDefines  Crypto_30_LibCv Equals Always To Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CRYPTO_30_LIBCV_EQ2_LTCONFIGIDXOFPBCONFIG                                                   
#define CRYPTO_30_LIBCV_EQ2_PBPARTITIONCONFIGOFPBCONFIG                                             
#define CRYPTO_30_LIBCV_EQ2_PCCONFIGIDXOFPBCONFIG                                                   
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Crypto_30_LibCvPCGetRootDataMacros  Crypto_30_LibCv Get Root Data Macros (PRE_COMPILE)
  \brief  These macros are used to get data pointers of root data.
  \{
*/ 
#define Crypto_30_LibCv_GetFinalMagicNumberOfPCConfig()                                               /**< Deactivateable: 'Crypto_30_LibCv_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define Crypto_30_LibCv_GetInitDataHashCodeOfPCConfig()                                               /**< Deactivateable: 'Crypto_30_LibCv_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define Crypto_30_LibCv_GetExpectedCompatibilityVersionOfPCPartitionConfig(partitionIndex)            /**< Deactivateable: 'Crypto_30_LibCv_PCPartitionConfig.ExpectedCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define Crypto_30_LibCv_GetGeneratorCompatibilityVersionOfPCPartitionConfig(partitionIndex)           /**< Deactivateable: 'Crypto_30_LibCv_PCPartitionConfig.GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCGetConstantDuplicatedRootDataMacros  Crypto_30_LibCv Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Crypto_30_LibCv_GetPCPartitionConfigOfPCConfig()                                              /**< PartitionConfig is empty */
#define Crypto_30_LibCv_GetPartitionIdentifiersOfPCConfig()                                         Crypto_30_LibCv_PartitionIdentifiers  /**< the pointer to Crypto_30_LibCv_PartitionIdentifiers */
#define Crypto_30_LibCv_GetSizeOfPartitionIdentifiersOfPCConfig()                                   1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_PartitionIdentifiers */
#define Crypto_30_LibCv_GetAesDecryptOfPCPartitionConfig()                                          Crypto_30_LibCv_AesDecrypt  /**< the pointer to Crypto_30_LibCv_AesDecrypt */
#define Crypto_30_LibCv_GetBufferLengthOfPCPartitionConfig()                                        Crypto_30_LibCv_BufferLength  /**< the pointer to Crypto_30_LibCv_BufferLength */
#define Crypto_30_LibCv_GetCmacAesVerifyOfPCPartitionConfig()                                       Crypto_30_LibCv_CmacAesVerify  /**< the pointer to Crypto_30_LibCv_CmacAesVerify */
#define Crypto_30_LibCv_GetDispatch_QueuePrimitiveInfoIdxOfPCPartitionConfig()                      Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx  /**< the pointer to Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx */
#define Crypto_30_LibCv_GetDriverObjectStateOfPCPartitionConfig()                                   Crypto_30_LibCv_DriverObjectState  /**< the pointer to Crypto_30_LibCv_DriverObjectState */
#define Crypto_30_LibCv_GetEd25519VerifyOfPCPartitionConfig()                                       Crypto_30_LibCv_Ed25519Verify  /**< the pointer to Crypto_30_LibCv_Ed25519Verify */
#define Crypto_30_LibCv_GetFamilyToHashMappingOfPCPartitionConfig()                                 Crypto_30_LibCv_FamilyToHashMapping  /**< the pointer to Crypto_30_LibCv_FamilyToHashMapping */
#define Crypto_30_LibCv_GetHashOfPCPartitionConfig()                                                Crypto_30_LibCv_Hash  /**< the pointer to Crypto_30_LibCv_Hash */
#define Crypto_30_LibCv_GetHmacSha1VerifyOfPCPartitionConfig()                                      Crypto_30_LibCv_HmacSha1Verify  /**< the pointer to Crypto_30_LibCv_HmacSha1Verify */
#define Crypto_30_LibCv_GetKeyElementInfoOfPCPartitionConfig()                                      Crypto_30_LibCv_KeyElementInfo  /**< the pointer to Crypto_30_LibCv_KeyElementInfo */
#define Crypto_30_LibCv_GetKeyElementsOfPCPartitionConfig()                                         Crypto_30_LibCv_KeyElements  /**< the pointer to Crypto_30_LibCv_KeyElements */
#define Crypto_30_LibCv_GetKeyLockOfPCPartitionConfig()                                             Crypto_30_LibCv_KeyLock.raw  /**< the pointer to Crypto_30_LibCv_KeyLock */
#define Crypto_30_LibCv_GetKeyOfPCPartitionConfig()                                                 Crypto_30_LibCv_Key  /**< the pointer to Crypto_30_LibCv_Key */
#define Crypto_30_LibCv_GetKeyStorageOfPCPartitionConfig()                                          Crypto_30_LibCv_KeyStorage  /**< the pointer to Crypto_30_LibCv_KeyStorage */
#define Crypto_30_LibCv_GetLockOfPCPartitionConfig()                                                Crypto_30_LibCv_Lock  /**< the pointer to Crypto_30_LibCv_Lock */
#define Crypto_30_LibCv_GetMainFunctionPeriodOfGeneralOfPCPartitionConfig(partitionIndex)           1u
#define Crypto_30_LibCv_GetObjectInfoIndOfPCPartitionConfig()                                       Crypto_30_LibCv_ObjectInfoInd  /**< the pointer to Crypto_30_LibCv_ObjectInfoInd */
#define Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()                                          Crypto_30_LibCv_ObjectInfo  /**< the pointer to Crypto_30_LibCv_ObjectInfo */
#define Crypto_30_LibCv_GetPartitionInfoOfPCPartitionConfig()                                       Crypto_30_LibCv_PartitionInfo  /**< the pointer to Crypto_30_LibCv_PartitionInfo */
#define Crypto_30_LibCv_GetPartitionInitializedOfPCPartitionConfig(partitionIndex)                  (&(Crypto_30_LibCv_PartitionInitialized))  /**< the pointer to Crypto_30_LibCv_PartitionInitialized */
#define Crypto_30_LibCv_GetPrimitiveFctOfPCPartitionConfig()                                        Crypto_30_LibCv_PrimitiveFct  /**< the pointer to Crypto_30_LibCv_PrimitiveFct */
#define Crypto_30_LibCv_GetPrimitiveInfoOfPCPartitionConfig()                                       Crypto_30_LibCv_PrimitiveInfo  /**< the pointer to Crypto_30_LibCv_PrimitiveInfo */
#define Crypto_30_LibCv_GetPrimitiveServiceInfoOfPCPartitionConfig()                                Crypto_30_LibCv_PrimitiveServiceInfo  /**< the pointer to Crypto_30_LibCv_PrimitiveServiceInfo */
#define Crypto_30_LibCv_GetProcessJob_Trigger_WriteOfPCPartitionConfig()                            Crypto_30_LibCv_ProcessJob_Trigger_Write  /**< the pointer to Crypto_30_LibCv_ProcessJob_Trigger_Write */
#define Crypto_30_LibCv_GetQueueOfPCPartitionConfig()                                               Crypto_30_LibCv_Queue.raw  /**< the pointer to Crypto_30_LibCv_Queue */
#define Crypto_30_LibCv_GetRedirect_BufferOfPCPartitionConfig()                                     Crypto_30_LibCv_Redirect_Buffer  /**< the pointer to Crypto_30_LibCv_Redirect_Buffer */
#define Crypto_30_LibCv_GetRsaPkcs1VerifyOfPCPartitionConfig()                                      Crypto_30_LibCv_RsaPkcs1Verify  /**< the pointer to Crypto_30_LibCv_RsaPkcs1Verify */
#define Crypto_30_LibCv_GetRsaPssVerifyOfPCPartitionConfig()                                        Crypto_30_LibCv_RsaPssVerify  /**< the pointer to Crypto_30_LibCv_RsaPssVerify */
#define Crypto_30_LibCv_GetSizeOfAesDecryptOfPCPartitionConfig()                                    1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_AesDecrypt */
#define Crypto_30_LibCv_GetSizeOfCmacAesVerifyOfPCPartitionConfig()                                 1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_CmacAesVerify */
#define Crypto_30_LibCv_GetSizeOfEd25519VerifyOfPCPartitionConfig()                                 1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_Ed25519Verify */
#define Crypto_30_LibCv_GetSizeOfFamilyToHashMappingOfPCPartitionConfig()                           8u  /**< the number of accomplishable value elements in Crypto_30_LibCv_FamilyToHashMapping */
#define Crypto_30_LibCv_GetSizeOfHashOfPCPartitionConfig()                                          1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_Hash */
#define Crypto_30_LibCv_GetSizeOfHmacSha1VerifyOfPCPartitionConfig()                                1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_HmacSha1Verify */
#define Crypto_30_LibCv_GetSizeOfKeyElementInfoOfPCPartitionConfig()                                11u  /**< the number of accomplishable value elements in Crypto_30_LibCv_KeyElementInfo */
#define Crypto_30_LibCv_GetSizeOfKeyElementsOfPCPartitionConfig()                                   11u  /**< the number of accomplishable value elements in Crypto_30_LibCv_KeyElements */
#define Crypto_30_LibCv_GetSizeOfKeyOfPCPartitionConfig()                                           7u  /**< the number of accomplishable value elements in Crypto_30_LibCv_Key */
#define Crypto_30_LibCv_GetSizeOfKeyStorageOfPCPartitionConfig()                                    924u  /**< the number of accomplishable value elements in Crypto_30_LibCv_KeyStorage */
#define Crypto_30_LibCv_GetSizeOfObjectInfoIndOfPCPartitionConfig()                                 7u  /**< the number of accomplishable value elements in Crypto_30_LibCv_ObjectInfoInd */
#define Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()                                    2u  /**< the number of accomplishable value elements in Crypto_30_LibCv_ObjectInfo */
#define Crypto_30_LibCv_GetSizeOfPartitionInfoOfPCPartitionConfig()                                 1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_PartitionInfo */
#define Crypto_30_LibCv_GetSizeOfPrimitiveFctOfPCPartitionConfig()                                  7u  /**< the number of accomplishable value elements in Crypto_30_LibCv_PrimitiveFct */
#define Crypto_30_LibCv_GetSizeOfPrimitiveInfoOfPCPartitionConfig()                                 18u  /**< the number of accomplishable value elements in Crypto_30_LibCv_PrimitiveInfo */
#define Crypto_30_LibCv_GetSizeOfPrimitiveServiceInfoOfPCPartitionConfig()                          24u  /**< the number of accomplishable value elements in Crypto_30_LibCv_PrimitiveServiceInfo */
#define Crypto_30_LibCv_GetSizeOfQueueOfPCPartitionConfig()                                         2u  /**< the number of accomplishable value elements in Crypto_30_LibCv_Queue */
#define Crypto_30_LibCv_GetSizeOfRsaPkcs1VerifyOfPCPartitionConfig()                                1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_RsaPkcs1Verify */
#define Crypto_30_LibCv_GetSizeOfRsaPssVerifyOfPCPartitionConfig()                                  1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_RsaPssVerify */
#define Crypto_30_LibCv_GetSizeOfStructUnionWS_Crypto_30_LibCvOfPCPartitionConfig()                 1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv */
#define Crypto_30_LibCv_GetSizeOfStructUnionWS_Crypto_30_LibCv_AesOfPCPartitionConfig()             1u  /**< the number of accomplishable value elements in Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes */
#define Crypto_30_LibCv_IsStrictLengthCheckForKeyElementGetOfGeneralOfPCPartitionConfig(partitionIndex) (((TRUE)) != FALSE)
#define Crypto_30_LibCv_GetStructUnionWS_Crypto_30_LibCvOfPCPartitionConfig()                       Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv  /**< the pointer to Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv */
#define Crypto_30_LibCv_GetStructUnionWS_Crypto_30_LibCv_AesOfPCPartitionConfig()                   Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes  /**< the pointer to Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes */
#define Crypto_30_LibCv_IsUseVStdLibOfGeneralOfPCPartitionConfig(partitionIndex)                    (((TRUE)) != FALSE)
#define Crypto_30_LibCv_IsVersionInfoApiOfGeneralOfPCPartitionConfig(partitionIndex)                (((FALSE)) != FALSE)
#define Crypto_30_LibCv_GetWrittenLengthOfPCPartitionConfig()                                       Crypto_30_LibCv_WrittenLength  /**< the pointer to Crypto_30_LibCv_WrittenLength */
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCGetDuplicatedRootDataMacros  Crypto_30_LibCv Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Crypto_30_LibCv_GetSizeOfBufferLengthOfPCPartitionConfig()                                  Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()  /**< the number of accomplishable value elements in Crypto_30_LibCv_BufferLength */
#define Crypto_30_LibCv_GetSizeOfDispatch_QueuePrimitiveInfoIdxOfPCPartitionConfig()                Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()  /**< the number of accomplishable value elements in Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx */
#define Crypto_30_LibCv_GetSizeOfDriverObjectStateOfPCPartitionConfig()                             Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()  /**< the number of accomplishable value elements in Crypto_30_LibCv_DriverObjectState */
#define Crypto_30_LibCv_GetSizeOfKeyLockOfPCPartitionConfig()                                       Crypto_30_LibCv_GetSizeOfKeyOfPCPartitionConfig()  /**< the number of accomplishable value elements in Crypto_30_LibCv_KeyLock */
#define Crypto_30_LibCv_GetSizeOfLockOfPCPartitionConfig()                                          Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()  /**< the number of accomplishable value elements in Crypto_30_LibCv_Lock */
#define Crypto_30_LibCv_GetSizeOfProcessJob_Trigger_WriteOfPCPartitionConfig()                      Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()  /**< the number of accomplishable value elements in Crypto_30_LibCv_ProcessJob_Trigger_Write */
#define Crypto_30_LibCv_GetSizeOfRedirect_BufferOfPCPartitionConfig()                               Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()  /**< the number of accomplishable value elements in Crypto_30_LibCv_Redirect_Buffer */
#define Crypto_30_LibCv_GetSizeOfWrittenLengthOfPCPartitionConfig()                                 Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()  /**< the number of accomplishable value elements in Crypto_30_LibCv_WrittenLength */
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCGetDataMacros  Crypto_30_LibCv Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Crypto_30_LibCv_GetWorkspaceOfAEADChaChaPoly1305Decrypt(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfAEADChaChaPoly1305Encrypt(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfAesCcmDecrypt(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_AesCcmDecrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfAesCcmEncrypt(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_AesCcmEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfAesDecrypt(Index)                                             (Crypto_30_LibCv_GetAesDecryptOfPCPartitionConfig()[(Index)].WorkspaceOfAesDecrypt)
#define Crypto_30_LibCv_GetWorkspaceOfAesEncrypt(Index)                                               /**< Deactivateable: 'Crypto_30_LibCv_AesEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfAesGcmDecrypt(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_AesGcmDecrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfAesGcmEncrypt(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_AesGcmEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetBufferLength(Index)                                                      (Crypto_30_LibCv_GetBufferLengthOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetWorkspaceOfCmacAesGenerate(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_CmacAesGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfCmacAesVerify(Index)                                          (Crypto_30_LibCv_GetCmacAesVerifyOfPCPartitionConfig()[(Index)].WorkspaceOfCmacAesVerify)
#define Crypto_30_LibCv_GetWorkspaceOfDRBGAES(Index)                                                  /**< Deactivateable: 'Crypto_30_LibCv_DRBGAES.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfDRBGHashSha512(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_DRBGHashSha512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetDispatch_QueuePrimitiveInfoIdx(Index)                                    (Crypto_30_LibCv_GetDispatch_QueuePrimitiveInfoIdxOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetDriverObjectState(Index)                                                 (Crypto_30_LibCv_GetDriverObjectStateOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetWorkspaceOfEcP160Generate(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_EcP160Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEcP160Verify(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_EcP160Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEcP256Generate(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_EcP256Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEcP256Verify(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_EcP256Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEcP384Generate(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_EcP384Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEcP384Verify(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_EcP384Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEcP521Generate(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_EcP521Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEcP521Verify(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_EcP521Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEcPKeyCheck(Index)                                              /**< Deactivateable: 'Crypto_30_LibCv_EcPKeyCheck.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEd25519Generate(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_Ed25519Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEd25519Verify(Index)                                          (Crypto_30_LibCv_GetEd25519VerifyOfPCPartitionConfig()[(Index)].WorkspaceOfEd25519Verify)
#define Crypto_30_LibCv_GetWorkspaceOfEd448Generate(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_Ed448Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEd448Verify(Index)                                              /**< Deactivateable: 'Crypto_30_LibCv_Ed448Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfEdKeyCheck(Index)                                               /**< Deactivateable: 'Crypto_30_LibCv_EdKeyCheck.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetFamilyToHashMapping(Index)                                               (Crypto_30_LibCv_GetFamilyToHashMappingOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetWorkspaceOfFips186(Index)                                                  /**< Deactivateable: 'Crypto_30_LibCv_Fips186.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfGmacAesGenerate(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_GmacAesGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfGmacAesVerify(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_GmacAesVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHash(Index)                                                   (Crypto_30_LibCv_GetHashOfPCPartitionConfig()[(Index)].WorkspaceOfHash)
#define Crypto_30_LibCv_GetWorkspaceOfHmacRipeMd160Generate(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHmacRipeMd160Verify(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHmacSha1Generate(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacSha1Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHmacSha1Verify(Index)                                         (Crypto_30_LibCv_GetHmacSha1VerifyOfPCPartitionConfig()[(Index)].WorkspaceOfHmacSha1Verify)
#define Crypto_30_LibCv_GetWorkspaceOfHmacSha256Generate(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHmacSha256Verify(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHmacSha384Generate(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHmacSha384Verify(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHmacSha512Generate(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfHmacSha512Verify(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetInitValue(Index)                                                           /**< Deactivateable: 'Crypto_30_LibCv_InitValue' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetKeyElementsEndIdxOfKey(Index)                                            (Crypto_30_LibCv_GetKeyOfPCPartitionConfig()[(Index)].KeyElementsEndIdxOfKey)
#define Crypto_30_LibCv_GetKeyElementsStartIdxOfKey(Index)                                          (Crypto_30_LibCv_GetKeyOfPCPartitionConfig()[(Index)].KeyElementsStartIdxOfKey)
#define Crypto_30_LibCv_GetNvBlockIdxOfKey(Index)                                                     /**< Deactivateable: 'Crypto_30_LibCv_Key.NvBlockIdx' Reason: 'the optional indirection is deactivated because NvBlockUsedOfKey is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsNvBlockUsedOfKey(Index)                                                     /**< Deactivateable: 'Crypto_30_LibCv_Key.NvBlockUsed' Reason: 'the optional indirection is deactivated because NvBlockUsedOfKey is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveHKDFExpandHMACSHA256(Index)                            /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveHKDFExpandHMACSHA384(Index)                            /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA384.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveHKDFHMACSHA256(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveHKDFHMACSHA384(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA384.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveHKDFHashOption1SHA256(Index)                           /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveHKDFHashOption1SHA512(Index)                           /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveISO15118(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveISO15118_20(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118_20.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveKDF2HMACSHA1(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveKDF2HMACSHA256(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveNist800108CntSha256(Index)                             /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CntSha256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveNist800108CtrCmacAes(Index)                            /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CtrCmacAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveNist80056AOnePass(Index)                               /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist80056AOnePass.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveNistFips186Erb(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNistFips186Erb.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveSpake2P(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveSpake2P.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveX963SHA256(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyDeriveX963SHA512(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetIdOfKeyElementInfo(Index)                                                (Crypto_30_LibCv_GetKeyElementInfoOfPCPartitionConfig()[(Index)].IdOfKeyElementInfo)
#define Crypto_30_LibCv_GetInitValueEndIdxOfKeyElementInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueEndIdx' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetInitValueStartIdxOfKeyElementInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueStartIdx' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsInitValueUsedOfKeyElementInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueUsed' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetLengthOfKeyElementInfo(Index)                                            (Crypto_30_LibCv_GetKeyElementInfoOfPCPartitionConfig()[(Index)].LengthOfKeyElementInfo)
#define Crypto_30_LibCv_GetMaskedBitsOfKeyElementInfo(Index)                                        (Crypto_30_LibCv_GetKeyElementInfoOfPCPartitionConfig()[(Index)].MaskedBitsOfKeyElementInfo)
#define Crypto_30_LibCv_GetReadOfKeyElementInfo(Index)                                              (Crypto_30_LibCv_GetKeyElementInfoOfPCPartitionConfig()[(Index)].ReadOfKeyElementInfo)
#define Crypto_30_LibCv_GetWriteOfKeyElementInfo(Index)                                             (Crypto_30_LibCv_GetKeyElementInfoOfPCPartitionConfig()[(Index)].WriteOfKeyElementInfo)
#define Crypto_30_LibCv_GetIdOfKeyElements(Index)                                                   (Crypto_30_LibCv_GetKeyElementsOfPCPartitionConfig()[(Index)].IdOfKeyElements)
#define Crypto_30_LibCv_GetKeyStorageEndIdxOfKeyElements(Index)                                     (Crypto_30_LibCv_GetKeyElementsOfPCPartitionConfig()[(Index)].KeyStorageEndIdxOfKeyElements)
#define Crypto_30_LibCv_GetKeyStorageStartIdxOfKeyElements(Index)                                   (Crypto_30_LibCv_GetKeyElementsOfPCPartitionConfig()[(Index)].KeyStorageStartIdxOfKeyElements)
#define Crypto_30_LibCv_GetWorkspaceOfKeyGenEd25519(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyGenEd25519.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyGenP256R1(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP256R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyGenP384R1(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP384R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyGenP521R1(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP521R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyGenSm2P256V1(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSm2P256V1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyGenSymGeneric(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSymGeneric.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetKeyLock(Index)                                                           (Crypto_30_LibCv_GetKeyLockOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetKeyNvStatus(Index)                                                         /**< Deactivateable: 'Crypto_30_LibCv_KeyNvStatus' Reason: 'No non-volatile memory used.' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP224R1BDPubVal(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP224R1BDSecret(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP256R1BDPubVal(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP256R1BDSecret(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP256R1PubVal(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP256R1Secret(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP384R1PubVal(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP384R1Secret(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP521R1PubVal(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyP521R1Secret(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeySeedDRBGAES(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGAES.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeySeedDRBGHashSha512(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGHashSha512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeySeedFips186(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_KeySeedFips186.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeySetInvalidJob(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_KeySetInvalidJob.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeySetValidJob(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_KeySetValidJob.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeySpake2PPubVal(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeySpake2PSecret(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetKeyStorage(Index)                                                        (Crypto_30_LibCv_GetKeyStorageOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetWorkspaceOfKeyUnwrapAes(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyUnwrapAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyWrapAes(Index)                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyWrapAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyX25519PubVal(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyX25519Secret(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyX448PubVal(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyX448PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfKeyX448Secret(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyX448Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetFamilyOfLastJob(Index)                                                     /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Family' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_GetKeyIdOfLastJob(Index)                                                      /**< Deactivateable: 'Crypto_30_LibCv_LastJob.KeyId' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_GetModeOfLastJob(Index)                                                       /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Mode' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_GetLock(Index)                                                              (Crypto_30_LibCv_GetLockOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetLongTermWs(Index)                                                          /**< Deactivateable: 'Crypto_30_LibCv_LongTermWs' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetLongTermWsLock(Index)                                                      /**< Deactivateable: 'Crypto_30_LibCv_LongTermWsLock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfMD5(Index)                                                      /**< Deactivateable: 'Crypto_30_LibCv_MD5.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetConsistencyLevelOfNvBlock(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.ConsistencyLevel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetCrcOfNvBlock(Index)                                                        /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Crc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetDescriptorOfNvBlock(Index)                                                 /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Descriptor' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetIdOfNvBlock(Index)                                                         /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Id' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetKeyStorageEndIdxOfNvBlock(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.KeyStorageEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetKeyStorageStartIdxOfNvBlock(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.KeyStorageStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetLengthOfNvBlock(Index)                                                     /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Length' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetProcessingOfNvBlock(Index)                                                 /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Processing' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetAEADChaChaPoly1305DecryptIdxOfObjectInfo(Index)                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305DecryptIdx' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsAEADChaChaPoly1305DecryptUsedOfObjectInfo(Index)                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305DecryptUsed' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetAEADChaChaPoly1305EncryptIdxOfObjectInfo(Index)                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305EncryptIdx' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsAEADChaChaPoly1305EncryptUsedOfObjectInfo(Index)                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305EncryptUsed' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetAesCcmDecryptIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmDecryptIdx' Reason: 'the optional indirection is deactivated because AesCcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsAesCcmDecryptUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmDecryptUsed' Reason: 'the optional indirection is deactivated because AesCcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetAesCcmEncryptIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmEncryptIdx' Reason: 'the optional indirection is deactivated because AesCcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsAesCcmEncryptUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmEncryptUsed' Reason: 'the optional indirection is deactivated because AesCcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetAesDecryptIdxOfObjectInfo(Index)                                         (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].AesDecryptIdxOfObjectInfo)
#define Crypto_30_LibCv_GetAesEncryptIdxOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesEncryptIdx' Reason: 'the optional indirection is deactivated because AesEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsAesEncryptUsedOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesEncryptUsed' Reason: 'the optional indirection is deactivated because AesEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetAesGcmDecryptIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmDecryptIdx' Reason: 'the optional indirection is deactivated because AesGcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsAesGcmDecryptUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmDecryptUsed' Reason: 'the optional indirection is deactivated because AesGcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetAesGcmEncryptIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmEncryptIdx' Reason: 'the optional indirection is deactivated because AesGcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsAesGcmEncryptUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmEncryptUsed' Reason: 'the optional indirection is deactivated because AesGcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetApplicationIdOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.ApplicationId' Reason: 'Deactivated for use case Single Partition' */
#define Crypto_30_LibCv_GetCmacAesGenerateIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.CmacAesGenerateIdx' Reason: 'the optional indirection is deactivated because CmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsCmacAesGenerateUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.CmacAesGenerateUsed' Reason: 'the optional indirection is deactivated because CmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetCmacAesVerifyIdxOfObjectInfo(Index)                                      (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].CmacAesVerifyIdxOfObjectInfo)
#define Crypto_30_LibCv_GetDRBGAESIdxOfObjectInfo(Index)                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGAESIdx' Reason: 'the optional indirection is deactivated because DRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsDRBGAESUsedOfObjectInfo(Index)                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGAESUsed' Reason: 'the optional indirection is deactivated because DRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetDRBGHashSha512IdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGHashSha512Idx' Reason: 'the optional indirection is deactivated because DRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsDRBGHashSha512UsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGHashSha512Used' Reason: 'the optional indirection is deactivated because DRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcP160GenerateIdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160GenerateIdx' Reason: 'the optional indirection is deactivated because EcP160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcP160GenerateUsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160GenerateUsed' Reason: 'the optional indirection is deactivated because EcP160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcP160VerifyIdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160VerifyIdx' Reason: 'the optional indirection is deactivated because EcP160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcP160VerifyUsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160VerifyUsed' Reason: 'the optional indirection is deactivated because EcP160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcP256GenerateIdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256GenerateIdx' Reason: 'the optional indirection is deactivated because EcP256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcP256GenerateUsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256GenerateUsed' Reason: 'the optional indirection is deactivated because EcP256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcP256VerifyIdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256VerifyIdx' Reason: 'the optional indirection is deactivated because EcP256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcP256VerifyUsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256VerifyUsed' Reason: 'the optional indirection is deactivated because EcP256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcP384GenerateIdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384GenerateIdx' Reason: 'the optional indirection is deactivated because EcP384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcP384GenerateUsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384GenerateUsed' Reason: 'the optional indirection is deactivated because EcP384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcP384VerifyIdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384VerifyIdx' Reason: 'the optional indirection is deactivated because EcP384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcP384VerifyUsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384VerifyUsed' Reason: 'the optional indirection is deactivated because EcP384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcP521GenerateIdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521GenerateIdx' Reason: 'the optional indirection is deactivated because EcP521GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcP521GenerateUsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521GenerateUsed' Reason: 'the optional indirection is deactivated because EcP521GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcP521VerifyIdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521VerifyIdx' Reason: 'the optional indirection is deactivated because EcP521VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcP521VerifyUsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521VerifyUsed' Reason: 'the optional indirection is deactivated because EcP521VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEcPKeyCheckIdxOfObjectInfo(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcPKeyCheckIdx' Reason: 'the optional indirection is deactivated because EcPKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEcPKeyCheckUsedOfObjectInfo(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcPKeyCheckUsed' Reason: 'the optional indirection is deactivated because EcPKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEd25519GenerateIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed25519GenerateIdx' Reason: 'the optional indirection is deactivated because Ed25519GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEd25519GenerateUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed25519GenerateUsed' Reason: 'the optional indirection is deactivated because Ed25519GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEd25519VerifyIdxOfObjectInfo(Index)                                      (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].Ed25519VerifyIdxOfObjectInfo)
#define Crypto_30_LibCv_GetEd448GenerateIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448GenerateIdx' Reason: 'the optional indirection is deactivated because Ed448GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEd448GenerateUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448GenerateUsed' Reason: 'the optional indirection is deactivated because Ed448GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEd448VerifyIdxOfObjectInfo(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448VerifyIdx' Reason: 'the optional indirection is deactivated because Ed448VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEd448VerifyUsedOfObjectInfo(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448VerifyUsed' Reason: 'the optional indirection is deactivated because Ed448VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetEdKeyCheckIdxOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EdKeyCheckIdx' Reason: 'the optional indirection is deactivated because EdKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsEdKeyCheckUsedOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EdKeyCheckUsed' Reason: 'the optional indirection is deactivated because EdKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetFips186IdxOfObjectInfo(Index)                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Fips186Idx' Reason: 'the optional indirection is deactivated because Fips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsFips186UsedOfObjectInfo(Index)                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Fips186Used' Reason: 'the optional indirection is deactivated because Fips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetGmacAesGenerateIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesGenerateIdx' Reason: 'the optional indirection is deactivated because GmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsGmacAesGenerateUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesGenerateUsed' Reason: 'the optional indirection is deactivated because GmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetGmacAesVerifyIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesVerifyIdx' Reason: 'the optional indirection is deactivated because GmacAesVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsGmacAesVerifyUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesVerifyUsed' Reason: 'the optional indirection is deactivated because GmacAesVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHashIdxOfObjectInfo(Index)                                               (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].HashIdxOfObjectInfo)
#define Crypto_30_LibCv_GetHmacRipeMd160GenerateIdxOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160GenerateIdx' Reason: 'the optional indirection is deactivated because HmacRipeMd160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacRipeMd160GenerateUsedOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160GenerateUsed' Reason: 'the optional indirection is deactivated because HmacRipeMd160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHmacRipeMd160VerifyIdxOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160VerifyIdx' Reason: 'the optional indirection is deactivated because HmacRipeMd160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacRipeMd160VerifyUsedOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160VerifyUsed' Reason: 'the optional indirection is deactivated because HmacRipeMd160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHmacSha1GenerateIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha1GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacSha1GenerateUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha1GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHmacSha1VerifyIdxOfObjectInfo(Index)                                     (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].HmacSha1VerifyIdxOfObjectInfo)
#define Crypto_30_LibCv_GetHmacSha256GenerateIdxOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacSha256GenerateUsedOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHmacSha256VerifyIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacSha256VerifyUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHmacSha384GenerateIdxOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacSha384GenerateUsedOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHmacSha384VerifyIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacSha384VerifyUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHmacSha512GenerateIdxOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha512GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacSha512GenerateUsedOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha512GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetHmacSha512VerifyIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha512VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsHmacSha512VerifyUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha512VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveHKDFExpandHMACSHA256IdxOfObjectInfo(Index)                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveHKDFExpandHMACSHA256UsedOfObjectInfo(Index)                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveHKDFExpandHMACSHA384IdxOfObjectInfo(Index)                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA384Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveHKDFExpandHMACSHA384UsedOfObjectInfo(Index)                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA384Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveHKDFHMACSHA256IdxOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveHKDFHMACSHA256UsedOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveHKDFHMACSHA384IdxOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA384Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveHKDFHMACSHA384UsedOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA384Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveHKDFHashOption1SHA256IdxOfObjectInfo(Index)                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveHKDFHashOption1SHA256UsedOfObjectInfo(Index)                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveHKDFHashOption1SHA512IdxOfObjectInfo(Index)                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA512Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveHKDFHashOption1SHA512UsedOfObjectInfo(Index)                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA512Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveISO15118IdxOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118Idx' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveISO15118UsedOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118Used' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveISO15118_20IdxOfObjectInfo(Index)                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118_20Idx' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118_20UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveISO15118_20UsedOfObjectInfo(Index)                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118_20Used' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118_20UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveKDF2HMACSHA1IdxOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA1Idx' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveKDF2HMACSHA1UsedOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA1Used' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveKDF2HMACSHA256IdxOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveKDF2HMACSHA256UsedOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveNist800108CntSha256IdxOfObjectInfo(Index)                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CntSha256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CntSha256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveNist800108CntSha256UsedOfObjectInfo(Index)                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CntSha256Used' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CntSha256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveNist800108CtrCmacAesIdxOfObjectInfo(Index)                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CtrCmacAesIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CtrCmacAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveNist800108CtrCmacAesUsedOfObjectInfo(Index)                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CtrCmacAesUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CtrCmacAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveNist80056AOnePassIdxOfObjectInfo(Index)                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist80056AOnePassIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNist80056AOnePassUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveNist80056AOnePassUsedOfObjectInfo(Index)                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist80056AOnePassUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNist80056AOnePassUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveNistFips186ErbIdxOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNistFips186ErbIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNistFips186ErbUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveNistFips186ErbUsedOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNistFips186ErbUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNistFips186ErbUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveSpake2PIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveSpake2PIdx' Reason: 'the optional indirection is deactivated because KeyDeriveSpake2PUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveSpake2PUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveSpake2PUsed' Reason: 'the optional indirection is deactivated because KeyDeriveSpake2PUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveX963SHA256IdxOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveX963SHA256UsedOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyDeriveX963SHA512IdxOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA512Idx' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyDeriveX963SHA512UsedOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA512Used' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyGenEd25519IdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenEd25519Idx' Reason: 'the optional indirection is deactivated because KeyGenEd25519UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyGenEd25519UsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenEd25519Used' Reason: 'the optional indirection is deactivated because KeyGenEd25519UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyGenP256R1IdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP256R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP256R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyGenP256R1UsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP256R1Used' Reason: 'the optional indirection is deactivated because KeyGenP256R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyGenP384R1IdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP384R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP384R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyGenP384R1UsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP384R1Used' Reason: 'the optional indirection is deactivated because KeyGenP384R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyGenP521R1IdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP521R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP521R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyGenP521R1UsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP521R1Used' Reason: 'the optional indirection is deactivated because KeyGenP521R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyGenSm2P256V1IdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSm2P256V1Idx' Reason: 'the optional indirection is deactivated because KeyGenSm2P256V1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyGenSm2P256V1UsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSm2P256V1Used' Reason: 'the optional indirection is deactivated because KeyGenSm2P256V1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyGenSymGenericIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSymGenericIdx' Reason: 'the optional indirection is deactivated because KeyGenSymGenericUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyGenSymGenericUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSymGenericUsed' Reason: 'the optional indirection is deactivated because KeyGenSymGenericUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP224R1BDPubValIdxOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDPubValIdx' Reason: 'the optional indirection is deactivated because KeyP224R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP224R1BDPubValUsedOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDPubValUsed' Reason: 'the optional indirection is deactivated because KeyP224R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP224R1BDSecretIdxOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDSecretIdx' Reason: 'the optional indirection is deactivated because KeyP224R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP224R1BDSecretUsedOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDSecretUsed' Reason: 'the optional indirection is deactivated because KeyP224R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP256R1BDPubValIdxOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDPubValIdx' Reason: 'the optional indirection is deactivated because KeyP256R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP256R1BDPubValUsedOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDPubValUsed' Reason: 'the optional indirection is deactivated because KeyP256R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP256R1BDSecretIdxOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDSecretIdx' Reason: 'the optional indirection is deactivated because KeyP256R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP256R1BDSecretUsedOfObjectInfo(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDSecretUsed' Reason: 'the optional indirection is deactivated because KeyP256R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP256R1PubValIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP256R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP256R1PubValUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP256R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP256R1SecretIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP256R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP256R1SecretUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP256R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP384R1PubValIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP384R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP384R1PubValUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP384R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP384R1SecretIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP384R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP384R1SecretUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP384R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP521R1PubValIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP521R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP521R1PubValUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP521R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyP521R1SecretIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP521R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyP521R1SecretUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP521R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeySeedDRBGAESIdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGAESIdx' Reason: 'the optional indirection is deactivated because KeySeedDRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeySeedDRBGAESUsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGAESUsed' Reason: 'the optional indirection is deactivated because KeySeedDRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeySeedDRBGHashSha512IdxOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGHashSha512Idx' Reason: 'the optional indirection is deactivated because KeySeedDRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeySeedDRBGHashSha512UsedOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGHashSha512Used' Reason: 'the optional indirection is deactivated because KeySeedDRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeySeedFips186IdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedFips186Idx' Reason: 'the optional indirection is deactivated because KeySeedFips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeySeedFips186UsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedFips186Used' Reason: 'the optional indirection is deactivated because KeySeedFips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeySetInvalidJobIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetInvalidJobIdx' Reason: 'the optional indirection is deactivated because KeySetInvalidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeySetInvalidJobUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetInvalidJobUsed' Reason: 'the optional indirection is deactivated because KeySetInvalidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeySetValidJobIdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetValidJobIdx' Reason: 'the optional indirection is deactivated because KeySetValidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeySetValidJobUsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetValidJobUsed' Reason: 'the optional indirection is deactivated because KeySetValidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeySpake2PPubValIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PPubValIdx' Reason: 'the optional indirection is deactivated because KeySpake2PPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeySpake2PPubValUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PPubValUsed' Reason: 'the optional indirection is deactivated because KeySpake2PPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeySpake2PSecretIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PSecretIdx' Reason: 'the optional indirection is deactivated because KeySpake2PSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeySpake2PSecretUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PSecretUsed' Reason: 'the optional indirection is deactivated because KeySpake2PSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyUnwrapAesIdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyUnwrapAesIdx' Reason: 'the optional indirection is deactivated because KeyUnwrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyUnwrapAesUsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyUnwrapAesUsed' Reason: 'the optional indirection is deactivated because KeyUnwrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyWrapAesIdxOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyWrapAesIdx' Reason: 'the optional indirection is deactivated because KeyWrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyWrapAesUsedOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyWrapAesUsed' Reason: 'the optional indirection is deactivated because KeyWrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyX25519PubValIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519PubValIdx' Reason: 'the optional indirection is deactivated because KeyX25519PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyX25519PubValUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519PubValUsed' Reason: 'the optional indirection is deactivated because KeyX25519PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyX25519SecretIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519SecretIdx' Reason: 'the optional indirection is deactivated because KeyX25519SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyX25519SecretUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519SecretUsed' Reason: 'the optional indirection is deactivated because KeyX25519SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyX448PubValIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448PubValIdx' Reason: 'the optional indirection is deactivated because KeyX448PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyX448PubValUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448PubValUsed' Reason: 'the optional indirection is deactivated because KeyX448PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetKeyX448SecretIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448SecretIdx' Reason: 'the optional indirection is deactivated because KeyX448SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsKeyX448SecretUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448SecretUsed' Reason: 'the optional indirection is deactivated because KeyX448SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetMD5IdxOfObjectInfo(Index)                                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.MD5Idx' Reason: 'the optional indirection is deactivated because MD5UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsMD5UsedOfObjectInfo(Index)                                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.MD5Used' Reason: 'the optional indirection is deactivated because MD5UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetPartitionIdxOfObjectInfo(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.PartitionIdx' Reason: 'Deactivated for use case Single Partition' */
#define Crypto_30_LibCv_GetQueueIdxOfObjectInfo(Index)                                              (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].QueueIdxOfObjectInfo)
#define Crypto_30_LibCv_GetRandomSeedBufferEndIdxOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferEndIdx' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRandomSeedBufferStartIdxOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferStartIdx' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRandomSeedBufferUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferUsed' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaOaepCrtSha1DecryptIdxOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaOaepCrtSha1DecryptUsedOfObjectInfo(Index)                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaOaepCrtSha256DecryptIdxOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha256DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaOaepCrtSha256DecryptUsedOfObjectInfo(Index)                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha256DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaOaepSha1DecryptIdxOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaOaepSha1DecryptUsedOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaOaepSha1EncryptIdxOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1EncryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaOaepSha1EncryptUsedOfObjectInfo(Index)                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1EncryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaOaepSha256DecryptIdxOfObjectInfo(Index)                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaOaepSha256DecryptUsedOfObjectInfo(Index)                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaOaepSha256EncryptIdxOfObjectInfo(Index)                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256EncryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha256EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaOaepSha256EncryptUsedOfObjectInfo(Index)                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256EncryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha256EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaPkcs1CrtGenerateIdxOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1CrtGenerateIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1CrtGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaPkcs1CrtGenerateUsedOfObjectInfo(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1CrtGenerateUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1CrtGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaPkcs1DecryptIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaPkcs1DecryptUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaPkcs1EncryptIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1EncryptIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaPkcs1EncryptUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1EncryptUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaPkcs1GenerateIdxOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1GenerateIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaPkcs1GenerateUsedOfObjectInfo(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1GenerateUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaPkcs1VerifyIdxOfObjectInfo(Index)                                     (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].RsaPkcs1VerifyIdxOfObjectInfo)
#define Crypto_30_LibCv_GetRsaPssGenerateIdxOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPssGenerateIdx' Reason: 'the optional indirection is deactivated because RsaPssGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsRsaPssGenerateUsedOfObjectInfo(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPssGenerateUsed' Reason: 'the optional indirection is deactivated because RsaPssGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetRsaPssVerifyIdxOfObjectInfo(Index)                                       (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].RsaPssVerifyIdxOfObjectInfo)
#define Crypto_30_LibCv_GetSheCmdGetIdIdxOfObjectInfo(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SheCmdGetIdIdx' Reason: 'the optional indirection is deactivated because SheCmdGetIdUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsSheCmdGetIdUsedOfObjectInfo(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SheCmdGetIdUsed' Reason: 'the optional indirection is deactivated because SheCmdGetIdUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetSipHashGenerateIdxOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashGenerateIdx' Reason: 'the optional indirection is deactivated because SipHashGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsSipHashGenerateUsedOfObjectInfo(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashGenerateUsed' Reason: 'the optional indirection is deactivated because SipHashGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetSipHashVerifyIdxOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashVerifyIdx' Reason: 'the optional indirection is deactivated because SipHashVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsSipHashVerifyUsedOfObjectInfo(Index)                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashVerifyUsed' Reason: 'the optional indirection is deactivated because SipHashVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetSlhDsaVerifyIdxOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SlhDsaVerifyIdx' Reason: 'the optional indirection is deactivated because SlhDsaVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsSlhDsaVerifyUsedOfObjectInfo(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SlhDsaVerifyUsed' Reason: 'the optional indirection is deactivated because SlhDsaVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetSm2GenerateIdxOfObjectInfo(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2GenerateIdx' Reason: 'the optional indirection is deactivated because Sm2GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsSm2GenerateUsedOfObjectInfo(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2GenerateUsed' Reason: 'the optional indirection is deactivated because Sm2GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetSm2VerifyIdxOfObjectInfo(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2VerifyIdx' Reason: 'the optional indirection is deactivated because Sm2VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsSm2VerifyUsedOfObjectInfo(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2VerifyUsed' Reason: 'the optional indirection is deactivated because Sm2VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetSm4DecryptIdxOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4DecryptIdx' Reason: 'the optional indirection is deactivated because Sm4DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsSm4DecryptUsedOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4DecryptUsed' Reason: 'the optional indirection is deactivated because Sm4DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetSm4EncryptIdxOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4EncryptIdx' Reason: 'the optional indirection is deactivated because Sm4EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_IsSm4EncryptUsedOfObjectInfo(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4EncryptUsed' Reason: 'the optional indirection is deactivated because Sm4EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_GetWorkspaceAddrOfObjectInfo(Index)                                         (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].WorkspaceAddrOfObjectInfo)
#define Crypto_30_LibCv_GetWorkspaceLengthOfObjectInfo(Index)                                       (Crypto_30_LibCv_GetObjectInfoOfPCPartitionConfig()[(Index)].WorkspaceLengthOfObjectInfo)
#define Crypto_30_LibCv_GetObjectInfoInd(Index)                                                     (Crypto_30_LibCv_GetObjectInfoIndOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetPCPartitionConfigIdxOfPartitionIdentifiers(Index)                        (Crypto_30_LibCv_GetPartitionIdentifiersOfPCConfig()[(Index)].PCPartitionConfigIdxOfPartitionIdentifiers)
#define Crypto_30_LibCv_GetPartitionSNVOfPartitionIdentifiers(Index)                                (Crypto_30_LibCv_GetPartitionIdentifiersOfPCConfig()[(Index)].PartitionSNVOfPartitionIdentifiers)
#define Crypto_30_LibCv_GetDefaultRandomKeyOfPartitionInfo(Index)                                   (Crypto_30_LibCv_GetPartitionInfoOfPCPartitionConfig()[(Index)].DefaultRandomKeyOfPartitionInfo)
#define Crypto_30_LibCv_GetMaskedBitsOfPartitionInfo(Index)                                         (Crypto_30_LibCv_GetPartitionInfoOfPCPartitionConfig()[(Index)].MaskedBitsOfPartitionInfo)
#define Crypto_30_LibCv_GetPartitionInitialized(partitionIndex)                                     ((*(Crypto_30_LibCv_GetPartitionInitializedOfPCPartitionConfig(partitionIndex))))
#define Crypto_30_LibCv_GetDispatchOfPrimitiveFct(Index)                                            (Crypto_30_LibCv_GetPrimitiveFctOfPCPartitionConfig()[(Index)].DispatchOfPrimitiveFct)
#define Crypto_30_LibCv_GetObjectInfoIndEndIdxOfPrimitiveFct(Index)                                 (Crypto_30_LibCv_GetPrimitiveFctOfPCPartitionConfig()[(Index)].ObjectInfoIndEndIdxOfPrimitiveFct)
#define Crypto_30_LibCv_GetObjectInfoIndStartIdxOfPrimitiveFct(Index)                               (Crypto_30_LibCv_GetPrimitiveFctOfPCPartitionConfig()[(Index)].ObjectInfoIndStartIdxOfPrimitiveFct)
#define Crypto_30_LibCv_GetCombinedOfPrimitiveInfo(Index)                                           (Crypto_30_LibCv_GetPrimitiveInfoOfPCPartitionConfig()[(Index)].CombinedOfPrimitiveInfo)
#define Crypto_30_LibCv_GetMaskedBitsOfPrimitiveInfo(Index)                                         (Crypto_30_LibCv_GetPrimitiveInfoOfPCPartitionConfig()[(Index)].MaskedBitsOfPrimitiveInfo)
#define Crypto_30_LibCv_GetPrimitiveFctIdxOfPrimitiveInfo(Index)                                    (Crypto_30_LibCv_GetPrimitiveInfoOfPCPartitionConfig()[(Index)].PrimitiveFctIdxOfPrimitiveInfo)
#define Crypto_30_LibCv_GetPrimitiveInfoEndIdxOfPrimitiveServiceInfo(Index)                         (Crypto_30_LibCv_GetPrimitiveServiceInfoOfPCPartitionConfig()[(Index)].PrimitiveInfoEndIdxOfPrimitiveServiceInfo)
#define Crypto_30_LibCv_GetPrimitiveInfoStartIdxOfPrimitiveServiceInfo(Index)                       (Crypto_30_LibCv_GetPrimitiveServiceInfoOfPCPartitionConfig()[(Index)].PrimitiveInfoStartIdxOfPrimitiveServiceInfo)
#define Crypto_30_LibCv_IsProcessJob_Trigger_Write(Index)                                           ((Crypto_30_LibCv_GetProcessJob_Trigger_WriteOfPCPartitionConfig()[(Index)]) != FALSE)
#define Crypto_30_LibCv_GetQueue(Index)                                                             (Crypto_30_LibCv_GetQueueOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetRandomSeedBuffer(Index)                                                    /**< Deactivateable: 'Crypto_30_LibCv_RandomSeedBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetRedirect_Buffer(Index)                                                   (Crypto_30_LibCv_GetRedirect_BufferOfPCPartitionConfig()[(Index)])
#define Crypto_30_LibCv_GetWorkspaceOfRsaOaepCrtSha1Decrypt(Index)                                    /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaOaepCrtSha256Decrypt(Index)                                  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha256Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaOaepSha1Decrypt(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaOaepSha1Encrypt(Index)                                       /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaOaepSha256Decrypt(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaOaepSha256Encrypt(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaPkcs1CrtGenerate(Index)                                      /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1CrtGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaPkcs1Decrypt(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaPkcs1Encrypt(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaPkcs1Generate(Index)                                         /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaPkcs1Verify(Index)                                         (Crypto_30_LibCv_GetRsaPkcs1VerifyOfPCPartitionConfig()[(Index)].WorkspaceOfRsaPkcs1Verify)
#define Crypto_30_LibCv_GetWorkspaceOfRsaPssGenerate(Index)                                           /**< Deactivateable: 'Crypto_30_LibCv_RsaPssGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfRsaPssVerify(Index)                                           (Crypto_30_LibCv_GetRsaPssVerifyOfPCPartitionConfig()[(Index)].WorkspaceOfRsaPssVerify)
#define Crypto_30_LibCv_GetLengthOfSaveAndRestoreWorkspace(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace.Length' Reason: 'Disable Feature if no Context primitive is used' */
#define Crypto_30_LibCv_GetWorkspaceOfSheCmdGetId(Index)                                              /**< Deactivateable: 'Crypto_30_LibCv_SheCmdGetId.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfSipHashGenerate(Index)                                          /**< Deactivateable: 'Crypto_30_LibCv_SipHashGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfSipHashVerify(Index)                                            /**< Deactivateable: 'Crypto_30_LibCv_SipHashVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfSlhDsaVerify(Index)                                             /**< Deactivateable: 'Crypto_30_LibCv_SlhDsaVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfSm2Generate(Index)                                              /**< Deactivateable: 'Crypto_30_LibCv_Sm2Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfSm2Verify(Index)                                                /**< Deactivateable: 'Crypto_30_LibCv_Sm2Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfSm4Decrypt(Index)                                               /**< Deactivateable: 'Crypto_30_LibCv_Sm4Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetWorkspaceOfSm4Encrypt(Index)                                               /**< Deactivateable: 'Crypto_30_LibCv_Sm4Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv(Index)                               (Crypto_30_LibCv_GetStructUnionWS_Crypto_30_LibCvOfPCPartitionConfig()[(Index)].DataOfStructUnionWS_Crypto_30_LibCv)
#define Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index)                           (Crypto_30_LibCv_GetStructUnionWS_Crypto_30_LibCv_AesOfPCPartitionConfig()[(Index)].DataOfStructUnionWS_Crypto_30_LibCv_Aes)
#define Crypto_30_LibCv_GetWrittenLength(Index)                                                     (Crypto_30_LibCv_GetWrittenLengthOfPCPartitionConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCGetBitDataMacros  Crypto_30_LibCv Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define Crypto_30_LibCv_IsOnceOfKeyElementInfo(Index)                                               (CRYPTO_30_LIBCV_ONCEOFKEYELEMENTINFO_MASK == (Crypto_30_LibCv_GetMaskedBitsOfKeyElementInfo(Index) & CRYPTO_30_LIBCV_ONCEOFKEYELEMENTINFO_MASK))
#define Crypto_30_LibCv_IsPartialOfKeyElementInfo(Index)                                            (CRYPTO_30_LIBCV_PARTIALOFKEYELEMENTINFO_MASK == (Crypto_30_LibCv_GetMaskedBitsOfKeyElementInfo(Index) & CRYPTO_30_LIBCV_PARTIALOFKEYELEMENTINFO_MASK))
#define Crypto_30_LibCv_IsPersistOfKeyElementInfo(Index)                                            (CRYPTO_30_LIBCV_PERSISTOFKEYELEMENTINFO_MASK == (Crypto_30_LibCv_GetMaskedBitsOfKeyElementInfo(Index) & CRYPTO_30_LIBCV_PERSISTOFKEYELEMENTINFO_MASK))
#define Crypto_30_LibCv_IsAesOfPartitionInfo(Index)                                                 (CRYPTO_30_LIBCV_AESOFPARTITIONINFO_MASK == (Crypto_30_LibCv_GetMaskedBitsOfPartitionInfo(Index) & CRYPTO_30_LIBCV_AESOFPARTITIONINFO_MASK))  /**< Holds the information if the primitive is AES */
#define Crypto_30_LibCv_IsHashOfPartitionInfo(Index)                                                (CRYPTO_30_LIBCV_HASHOFPARTITIONINFO_MASK == (Crypto_30_LibCv_GetMaskedBitsOfPartitionInfo(Index) & CRYPTO_30_LIBCV_HASHOFPARTITIONINFO_MASK))  /**< Holds the information if the primitive is Hash */
#define Crypto_30_LibCv_IsContextOfPrimitiveInfo(Index)                                             (CRYPTO_30_LIBCV_CONTEXTOFPRIMITIVEINFO_MASK == (Crypto_30_LibCv_GetMaskedBitsOfPrimitiveInfo(Index) & CRYPTO_30_LIBCV_CONTEXTOFPRIMITIVEINFO_MASK))
#define Crypto_30_LibCv_IsDefaultRandomSourceOfPrimitiveInfo(Index)                                 (CRYPTO_30_LIBCV_DEFAULTRANDOMSOURCEOFPRIMITIVEINFO_MASK == (Crypto_30_LibCv_GetMaskedBitsOfPrimitiveInfo(Index) & CRYPTO_30_LIBCV_DEFAULTRANDOMSOURCEOFPRIMITIVEINFO_MASK))
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCGetDeduplicatedDataMacros  Crypto_30_LibCv Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Crypto_30_LibCv_GetExpectedCompatibilityVersion(partitionIndex)                               /**< Deactivateable: 'Crypto_30_LibCv_ExpectedCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define Crypto_30_LibCv_GetFinalMagicNumber()                                                         /**< Deactivateable: 'Crypto_30_LibCv_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define Crypto_30_LibCv_GetGeneratorCompatibilityVersion(partitionIndex)                              /**< Deactivateable: 'Crypto_30_LibCv_GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define Crypto_30_LibCv_GetInitDataHashCode()                                                         /**< Deactivateable: 'Crypto_30_LibCv_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define Crypto_30_LibCv_GetKeyElementInfoIdxOfKeyElements(Index)                                    ((Crypto_30_LibCv_KeyElementInfoIdxOfKeyElementsType)((Index)))  /**< the index of the 1:1 relation pointing to Crypto_30_LibCv_KeyElementInfo */
#define Crypto_30_LibCv_GetKeyStorageExtensionIdxOfKeyElements(Index)                               ((Crypto_30_LibCv_KeyStorageExtensionIdxOfKeyElementsType)((Crypto_30_LibCv_GetKeyStorageStartIdxOfKeyElements(Index) - 1u)))  /**< the index of the 1:1 relation pointing to Crypto_30_LibCv_KeyStorage */
#define Crypto_30_LibCv_GetKeyStorageValidIdxOfKeyElements(Index)                                   ((Crypto_30_LibCv_KeyStorageValidIdxOfKeyElementsType)((Crypto_30_LibCv_GetKeyStorageStartIdxOfKeyElements(Index) - 2u)))  /**< the index of the 1:1 relation pointing to Crypto_30_LibCv_KeyStorage */
#define Crypto_30_LibCv_GetKeyStorageWrittenLengthEndIdxOfKeyElements(Index)                        ((Crypto_30_LibCv_KeyStorageWrittenLengthEndIdxOfKeyElementsType)((Crypto_30_LibCv_GetKeyStorageStartIdxOfKeyElements(Index) - 2u)))  /**< the end index of the 1:n relation pointing to Crypto_30_LibCv_KeyStorage */
#define Crypto_30_LibCv_GetKeyStorageWrittenLengthStartIdxOfKeyElements(Index)                      ((Crypto_30_LibCv_KeyStorageWrittenLengthStartIdxOfKeyElementsType)((Crypto_30_LibCv_GetKeyStorageStartIdxOfKeyElements(Index) - 4u)))  /**< the start index of the 1:n relation pointing to Crypto_30_LibCv_KeyStorage */
#define Crypto_30_LibCv_GetMainFunctionPeriodOfGeneral(partitionIndex)                              Crypto_30_LibCv_GetMainFunctionPeriodOfGeneralOfPCPartitionConfig(partitionIndex)
#define Crypto_30_LibCv_IsAesDecryptUsedOfObjectInfo(Index)                                         (((boolean)(Crypto_30_LibCv_GetAesDecryptIdxOfObjectInfo(Index) != CRYPTO_30_LIBCV_NO_AESDECRYPTIDXOFOBJECTINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Crypto_30_LibCv_AesDecrypt */
#define Crypto_30_LibCv_IsCmacAesVerifyUsedOfObjectInfo(Index)                                      (((boolean)(Crypto_30_LibCv_GetCmacAesVerifyIdxOfObjectInfo(Index) != CRYPTO_30_LIBCV_NO_CMACAESVERIFYIDXOFOBJECTINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Crypto_30_LibCv_CmacAesVerify */
#define Crypto_30_LibCv_IsEd25519VerifyUsedOfObjectInfo(Index)                                      (((boolean)(Crypto_30_LibCv_GetEd25519VerifyIdxOfObjectInfo(Index) != CRYPTO_30_LIBCV_NO_ED25519VERIFYIDXOFOBJECTINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Crypto_30_LibCv_Ed25519Verify */
#define Crypto_30_LibCv_IsHashUsedOfObjectInfo(Index)                                               (((boolean)(Crypto_30_LibCv_GetHashIdxOfObjectInfo(Index) != CRYPTO_30_LIBCV_NO_HASHIDXOFOBJECTINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Crypto_30_LibCv_Hash */
#define Crypto_30_LibCv_IsHmacSha1VerifyUsedOfObjectInfo(Index)                                     (((boolean)(Crypto_30_LibCv_GetHmacSha1VerifyIdxOfObjectInfo(Index) != CRYPTO_30_LIBCV_NO_HMACSHA1VERIFYIDXOFOBJECTINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Crypto_30_LibCv_HmacSha1Verify */
#define Crypto_30_LibCv_IsRsaPkcs1VerifyUsedOfObjectInfo(Index)                                     (((boolean)(Crypto_30_LibCv_GetRsaPkcs1VerifyIdxOfObjectInfo(Index) != CRYPTO_30_LIBCV_NO_RSAPKCS1VERIFYIDXOFOBJECTINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Crypto_30_LibCv_RsaPkcs1Verify */
#define Crypto_30_LibCv_IsRsaPssVerifyUsedOfObjectInfo(Index)                                       (((boolean)(Crypto_30_LibCv_GetRsaPssVerifyIdxOfObjectInfo(Index) != CRYPTO_30_LIBCV_NO_RSAPSSVERIFYIDXOFOBJECTINFO)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Crypto_30_LibCv_RsaPssVerify */
#define Crypto_30_LibCv_IsObjectInfoIndUsedOfPrimitiveFct(Index)                                    (((boolean)(Crypto_30_LibCv_GetObjectInfoIndStartIdxOfPrimitiveFct(Index) != CRYPTO_30_LIBCV_NO_OBJECTINFOINDSTARTIDXOFPRIMITIVEFCT)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Crypto_30_LibCv_ObjectInfoInd */
#define Crypto_30_LibCv_IsPrimitiveInfoUsedOfPrimitiveServiceInfo(Index)                            (((boolean)(Crypto_30_LibCv_GetPrimitiveInfoStartIdxOfPrimitiveServiceInfo(Index) != CRYPTO_30_LIBCV_NO_PRIMITIVEINFOSTARTIDXOFPRIMITIVESERVICEINFO)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Crypto_30_LibCv_PrimitiveInfo */
#define Crypto_30_LibCv_GetSizeOfAesDecrypt()                                                       Crypto_30_LibCv_GetSizeOfAesDecryptOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfBufferLength()                                                     Crypto_30_LibCv_GetSizeOfBufferLengthOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfCmacAesVerify()                                                    Crypto_30_LibCv_GetSizeOfCmacAesVerifyOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfDispatch_QueuePrimitiveInfoIdx()                                   Crypto_30_LibCv_GetSizeOfDispatch_QueuePrimitiveInfoIdxOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfDriverObjectState()                                                Crypto_30_LibCv_GetSizeOfDriverObjectStateOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfEd25519Verify()                                                    Crypto_30_LibCv_GetSizeOfEd25519VerifyOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfFamilyToHashMapping()                                              Crypto_30_LibCv_GetSizeOfFamilyToHashMappingOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfHash()                                                             Crypto_30_LibCv_GetSizeOfHashOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfHmacSha1Verify()                                                   Crypto_30_LibCv_GetSizeOfHmacSha1VerifyOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfKey()                                                              Crypto_30_LibCv_GetSizeOfKeyOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfKeyElementInfo()                                                   Crypto_30_LibCv_GetSizeOfKeyElementInfoOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfKeyElements()                                                      Crypto_30_LibCv_GetSizeOfKeyElementsOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfKeyLock()                                                          Crypto_30_LibCv_GetSizeOfKeyLockOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfKeyStorage()                                                       Crypto_30_LibCv_GetSizeOfKeyStorageOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfLock()                                                             Crypto_30_LibCv_GetSizeOfLockOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfObjectInfo()                                                       Crypto_30_LibCv_GetSizeOfObjectInfoOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfObjectInfoInd()                                                    Crypto_30_LibCv_GetSizeOfObjectInfoIndOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfPartitionIdentifiers()                                             Crypto_30_LibCv_GetSizeOfPartitionIdentifiersOfPCConfig()
#define Crypto_30_LibCv_GetSizeOfPartitionInfo()                                                    Crypto_30_LibCv_GetSizeOfPartitionInfoOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfPrimitiveFct()                                                     Crypto_30_LibCv_GetSizeOfPrimitiveFctOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfPrimitiveInfo()                                                    Crypto_30_LibCv_GetSizeOfPrimitiveInfoOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfPrimitiveServiceInfo()                                             Crypto_30_LibCv_GetSizeOfPrimitiveServiceInfoOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfProcessJob_Trigger_Write()                                         Crypto_30_LibCv_GetSizeOfProcessJob_Trigger_WriteOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfQueue()                                                            Crypto_30_LibCv_GetSizeOfQueueOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfRedirect_Buffer()                                                  Crypto_30_LibCv_GetSizeOfRedirect_BufferOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfRsaPkcs1Verify()                                                   Crypto_30_LibCv_GetSizeOfRsaPkcs1VerifyOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfRsaPssVerify()                                                     Crypto_30_LibCv_GetSizeOfRsaPssVerifyOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfStructUnionWS_Crypto_30_LibCv()                                    Crypto_30_LibCv_GetSizeOfStructUnionWS_Crypto_30_LibCvOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfStructUnionWS_Crypto_30_LibCv_Aes()                                Crypto_30_LibCv_GetSizeOfStructUnionWS_Crypto_30_LibCv_AesOfPCPartitionConfig()
#define Crypto_30_LibCv_GetSizeOfWrittenLength()                                                    Crypto_30_LibCv_GetSizeOfWrittenLengthOfPCPartitionConfig()
#define Crypto_30_LibCv_IsStrictLengthCheckForKeyElementGetOfGeneral(partitionIndex)                Crypto_30_LibCv_IsStrictLengthCheckForKeyElementGetOfGeneralOfPCPartitionConfig(partitionIndex)
#define Crypto_30_LibCv_IsUseVStdLibOfGeneral(partitionIndex)                                       Crypto_30_LibCv_IsUseVStdLibOfGeneralOfPCPartitionConfig(partitionIndex)
#define Crypto_30_LibCv_IsVersionInfoApiOfGeneral(partitionIndex)                                   Crypto_30_LibCv_IsVersionInfoApiOfGeneralOfPCPartitionConfig(partitionIndex)
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCSetDataMacros  Crypto_30_LibCv Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Crypto_30_LibCv_SetBufferLength(Index, Value)                                               Crypto_30_LibCv_GetBufferLengthOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetDispatch_QueuePrimitiveInfoIdx(Index, Value)                             Crypto_30_LibCv_GetDispatch_QueuePrimitiveInfoIdxOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetDriverObjectState(Index, Value)                                          Crypto_30_LibCv_GetDriverObjectStateOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetKeyLock(Index, Value)                                                    Crypto_30_LibCv_GetKeyLockOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetKeyNvStatus(Index, Value)                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyNvStatus' Reason: 'No non-volatile memory used.' */
#define Crypto_30_LibCv_SetKeyStorage(Index, Value)                                                 Crypto_30_LibCv_GetKeyStorageOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetFamilyOfLastJob(Index, Value)                                              /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Family' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_SetKeyIdOfLastJob(Index, Value)                                               /**< Deactivateable: 'Crypto_30_LibCv_LastJob.KeyId' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_SetModeOfLastJob(Index, Value)                                                /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Mode' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_SetLock(Index, Value)                                                       Crypto_30_LibCv_GetLockOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetLongTermWs(Index, Value)                                                   /**< Deactivateable: 'Crypto_30_LibCv_LongTermWs' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_SetLongTermWsLock(Index, Value)                                               /**< Deactivateable: 'Crypto_30_LibCv_LongTermWsLock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_SetPartitionInitialized(Value, partitionIndex)                              (*(Crypto_30_LibCv_GetPartitionInitializedOfPCPartitionConfig(partitionIndex))) = (Value)
#define Crypto_30_LibCv_SetProcessJob_Trigger_Write(Index, Value)                                   Crypto_30_LibCv_GetProcessJob_Trigger_WriteOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetQueue(Index, Value)                                                      Crypto_30_LibCv_GetQueueOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetRandomSeedBuffer(Index, Value)                                             /**< Deactivateable: 'Crypto_30_LibCv_RandomSeedBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_SetRedirect_Buffer(Index, Value)                                            Crypto_30_LibCv_GetRedirect_BufferOfPCPartitionConfig()[(Index)] = (Value)
#define Crypto_30_LibCv_SetLengthOfSaveAndRestoreWorkspace(Index, Value)                              /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace.Length' Reason: 'Disable Feature if no Context primitive is used' */
#define Crypto_30_LibCv_SetDataOfStructUnionWS_Crypto_30_LibCv(Index, Value)                        Crypto_30_LibCv_GetStructUnionWS_Crypto_30_LibCvOfPCPartitionConfig()[(Index)].DataOfStructUnionWS_Crypto_30_LibCv = (Value)
#define Crypto_30_LibCv_SetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index, Value)                    Crypto_30_LibCv_GetStructUnionWS_Crypto_30_LibCv_AesOfPCPartitionConfig()[(Index)].DataOfStructUnionWS_Crypto_30_LibCv_Aes = (Value)
#define Crypto_30_LibCv_SetWrittenLength(Index, Value)                                              Crypto_30_LibCv_GetWrittenLengthOfPCPartitionConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCGetAddressOfDataMacros  Crypto_30_LibCv Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Crypto_30_LibCv_GetAddrInitValue(Index)                                                       /**< Deactivateable: 'Crypto_30_LibCv_InitValue' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_GetAddrKeyStorage(Index)                                                    (&Crypto_30_LibCv_GetKeyStorage(Index))
#define Crypto_30_LibCv_GetAddrDataOfStructUnionWS_Crypto_30_LibCv(Index)                           (&Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv(Index))
#define Crypto_30_LibCv_GetAddrDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index)                       (&Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index))
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCHasMacros  Crypto_30_LibCv Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Crypto_30_LibCv_HasAEADChaChaPoly1305Decrypt()                                                /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfAEADChaChaPoly1305Decrypt()                                     /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasAEADChaChaPoly1305Encrypt()                                                /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfAEADChaChaPoly1305Encrypt()                                     /**< Deactivateable: 'Crypto_30_LibCv_AEADChaChaPoly1305Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasAesCcmDecrypt()                                                            /**< Deactivateable: 'Crypto_30_LibCv_AesCcmDecrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfAesCcmDecrypt()                                                 /**< Deactivateable: 'Crypto_30_LibCv_AesCcmDecrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasAesCcmEncrypt()                                                            /**< Deactivateable: 'Crypto_30_LibCv_AesCcmEncrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfAesCcmEncrypt()                                                 /**< Deactivateable: 'Crypto_30_LibCv_AesCcmEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasAesDecrypt()                                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasWorkspaceOfAesDecrypt()                                                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasAesEncrypt()                                                               /**< Deactivateable: 'Crypto_30_LibCv_AesEncrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfAesEncrypt()                                                    /**< Deactivateable: 'Crypto_30_LibCv_AesEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasAesGcmDecrypt()                                                            /**< Deactivateable: 'Crypto_30_LibCv_AesGcmDecrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfAesGcmDecrypt()                                                 /**< Deactivateable: 'Crypto_30_LibCv_AesGcmDecrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasAesGcmEncrypt()                                                            /**< Deactivateable: 'Crypto_30_LibCv_AesGcmEncrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfAesGcmEncrypt()                                                 /**< Deactivateable: 'Crypto_30_LibCv_AesGcmEncrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasBufferLength()                                                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasCmacAesGenerate()                                                          /**< Deactivateable: 'Crypto_30_LibCv_CmacAesGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfCmacAesGenerate()                                               /**< Deactivateable: 'Crypto_30_LibCv_CmacAesGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasCmacAesVerify()                                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasWorkspaceOfCmacAesVerify()                                               (TRUE != FALSE)
#define Crypto_30_LibCv_HasDRBGAES()                                                                  /**< Deactivateable: 'Crypto_30_LibCv_DRBGAES' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfDRBGAES()                                                       /**< Deactivateable: 'Crypto_30_LibCv_DRBGAES.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasDRBGHashSha512()                                                           /**< Deactivateable: 'Crypto_30_LibCv_DRBGHashSha512' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfDRBGHashSha512()                                                /**< Deactivateable: 'Crypto_30_LibCv_DRBGHashSha512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasDispatch_QueuePrimitiveInfoIdx()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasDriverObjectState()                                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasEcP160Generate()                                                           /**< Deactivateable: 'Crypto_30_LibCv_EcP160Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcP160Generate()                                                /**< Deactivateable: 'Crypto_30_LibCv_EcP160Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEcP160Verify()                                                             /**< Deactivateable: 'Crypto_30_LibCv_EcP160Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcP160Verify()                                                  /**< Deactivateable: 'Crypto_30_LibCv_EcP160Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEcP256Generate()                                                           /**< Deactivateable: 'Crypto_30_LibCv_EcP256Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcP256Generate()                                                /**< Deactivateable: 'Crypto_30_LibCv_EcP256Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEcP256Verify()                                                             /**< Deactivateable: 'Crypto_30_LibCv_EcP256Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcP256Verify()                                                  /**< Deactivateable: 'Crypto_30_LibCv_EcP256Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEcP384Generate()                                                           /**< Deactivateable: 'Crypto_30_LibCv_EcP384Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcP384Generate()                                                /**< Deactivateable: 'Crypto_30_LibCv_EcP384Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEcP384Verify()                                                             /**< Deactivateable: 'Crypto_30_LibCv_EcP384Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcP384Verify()                                                  /**< Deactivateable: 'Crypto_30_LibCv_EcP384Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEcP521Generate()                                                           /**< Deactivateable: 'Crypto_30_LibCv_EcP521Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcP521Generate()                                                /**< Deactivateable: 'Crypto_30_LibCv_EcP521Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEcP521Verify()                                                             /**< Deactivateable: 'Crypto_30_LibCv_EcP521Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcP521Verify()                                                  /**< Deactivateable: 'Crypto_30_LibCv_EcP521Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEcPKeyCheck()                                                              /**< Deactivateable: 'Crypto_30_LibCv_EcPKeyCheck' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEcPKeyCheck()                                                   /**< Deactivateable: 'Crypto_30_LibCv_EcPKeyCheck.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEd25519Generate()                                                          /**< Deactivateable: 'Crypto_30_LibCv_Ed25519Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEd25519Generate()                                               /**< Deactivateable: 'Crypto_30_LibCv_Ed25519Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEd25519Verify()                                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasWorkspaceOfEd25519Verify()                                               (TRUE != FALSE)
#define Crypto_30_LibCv_HasEd448Generate()                                                            /**< Deactivateable: 'Crypto_30_LibCv_Ed448Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEd448Generate()                                                 /**< Deactivateable: 'Crypto_30_LibCv_Ed448Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEd448Verify()                                                              /**< Deactivateable: 'Crypto_30_LibCv_Ed448Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEd448Verify()                                                   /**< Deactivateable: 'Crypto_30_LibCv_Ed448Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasEdKeyCheck()                                                               /**< Deactivateable: 'Crypto_30_LibCv_EdKeyCheck' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfEdKeyCheck()                                                    /**< Deactivateable: 'Crypto_30_LibCv_EdKeyCheck.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasExpectedCompatibilityVersion(partitionIndex)                               /**< Deactivateable: 'Crypto_30_LibCv_ExpectedCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define Crypto_30_LibCv_HasFamilyToHashMapping()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasFinalMagicNumber()                                                         /**< Deactivateable: 'Crypto_30_LibCv_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define Crypto_30_LibCv_HasFips186()                                                                  /**< Deactivateable: 'Crypto_30_LibCv_Fips186' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfFips186()                                                       /**< Deactivateable: 'Crypto_30_LibCv_Fips186.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasGeneratorCompatibilityVersion(partitionIndex)                              /**< Deactivateable: 'Crypto_30_LibCv_GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define Crypto_30_LibCv_HasGmacAesGenerate()                                                          /**< Deactivateable: 'Crypto_30_LibCv_GmacAesGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfGmacAesGenerate()                                               /**< Deactivateable: 'Crypto_30_LibCv_GmacAesGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasGmacAesVerify()                                                            /**< Deactivateable: 'Crypto_30_LibCv_GmacAesVerify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfGmacAesVerify()                                                 /**< Deactivateable: 'Crypto_30_LibCv_GmacAesVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHash()                                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasWorkspaceOfHash()                                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasHmacRipeMd160Generate()                                                    /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacRipeMd160Generate()                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHmacRipeMd160Verify()                                                      /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacRipeMd160Verify()                                           /**< Deactivateable: 'Crypto_30_LibCv_HmacRipeMd160Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHmacSha1Generate()                                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacSha1Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacSha1Generate()                                              /**< Deactivateable: 'Crypto_30_LibCv_HmacSha1Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHmacSha1Verify()                                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasWorkspaceOfHmacSha1Verify()                                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasHmacSha256Generate()                                                       /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacSha256Generate()                                            /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHmacSha256Verify()                                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacSha256Verify()                                              /**< Deactivateable: 'Crypto_30_LibCv_HmacSha256Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHmacSha384Generate()                                                       /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacSha384Generate()                                            /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHmacSha384Verify()                                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacSha384Verify()                                              /**< Deactivateable: 'Crypto_30_LibCv_HmacSha384Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHmacSha512Generate()                                                       /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacSha512Generate()                                            /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasHmacSha512Verify()                                                         /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfHmacSha512Verify()                                              /**< Deactivateable: 'Crypto_30_LibCv_HmacSha512Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasInitDataHashCode()                                                         /**< Deactivateable: 'Crypto_30_LibCv_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define Crypto_30_LibCv_HasInitValue()                                                                /**< Deactivateable: 'Crypto_30_LibCv_InitValue' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKey()                                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyElementsEndIdxOfKey()                                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyElementsStartIdxOfKey()                                               (TRUE != FALSE)
#define Crypto_30_LibCv_HasNvBlockIdxOfKey()                                                          /**< Deactivateable: 'Crypto_30_LibCv_Key.NvBlockIdx' Reason: 'the optional indirection is deactivated because NvBlockUsedOfKey is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasNvBlockUsedOfKey()                                                         /**< Deactivateable: 'Crypto_30_LibCv_Key.NvBlockUsed' Reason: 'the optional indirection is deactivated because NvBlockUsedOfKey is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFExpandHMACSHA256()                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveHKDFExpandHMACSHA256()                                 /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFExpandHMACSHA384()                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA384' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveHKDFExpandHMACSHA384()                                 /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFExpandHMACSHA384.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHMACSHA256()                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveHKDFHMACSHA256()                                       /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHMACSHA384()                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA384' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveHKDFHMACSHA384()                                       /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHMACSHA384.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHashOption1SHA256()                                           /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveHKDFHashOption1SHA256()                                /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHashOption1SHA512()                                           /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA512' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveHKDFHashOption1SHA512()                                /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveHKDFHashOption1SHA512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveISO15118()                                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveISO15118()                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveISO15118_20()                                                     /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118_20' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveISO15118_20()                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveISO15118_20.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveKDF2HMACSHA1()                                                    /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveKDF2HMACSHA1()                                         /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveKDF2HMACSHA256()                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveKDF2HMACSHA256()                                       /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveKDF2HMACSHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveNist800108CntSha256()                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CntSha256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveNist800108CntSha256()                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CntSha256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveNist800108CtrCmacAes()                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CtrCmacAes' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveNist800108CtrCmacAes()                                 /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist800108CtrCmacAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveNist80056AOnePass()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist80056AOnePass' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveNist80056AOnePass()                                    /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNist80056AOnePass.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveNistFips186Erb()                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNistFips186Erb' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveNistFips186Erb()                                       /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveNistFips186Erb.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveSpake2P()                                                         /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveSpake2P' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveSpake2P()                                              /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveSpake2P.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveX963SHA256()                                                      /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA256' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveX963SHA256()                                           /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA256.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyDeriveX963SHA512()                                                      /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA512' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyDeriveX963SHA512()                                           /**< Deactivateable: 'Crypto_30_LibCv_KeyDeriveX963SHA512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyElementInfo()                                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasIdOfKeyElementInfo()                                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasInitValueEndIdxOfKeyElementInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueEndIdx' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasInitValueStartIdxOfKeyElementInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueStartIdx' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasInitValueUsedOfKeyElementInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyElementInfo.InitValueUsed' Reason: 'the optional indirection is deactivated because InitValueUsedOfKeyElementInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasLengthOfKeyElementInfo()                                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasMaskedBitsOfKeyElementInfo()                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasOnceOfKeyElementInfo()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasPartialOfKeyElementInfo()                                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasPersistOfKeyElementInfo()                                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasReadOfKeyElementInfo()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasWriteOfKeyElementInfo()                                                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyElements()                                                            (TRUE != FALSE)
#define Crypto_30_LibCv_HasIdOfKeyElements()                                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyElementInfoIdxOfKeyElements()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyStorageEndIdxOfKeyElements()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyStorageExtensionIdxOfKeyElements()                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyStorageStartIdxOfKeyElements()                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyStorageValidIdxOfKeyElements()                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyStorageWrittenLengthEndIdxOfKeyElements()                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyStorageWrittenLengthStartIdxOfKeyElements()                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyGenEd25519()                                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyGenEd25519' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyGenEd25519()                                                 /**< Deactivateable: 'Crypto_30_LibCv_KeyGenEd25519.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyGenP256R1()                                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP256R1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyGenP256R1()                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP256R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyGenP384R1()                                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP384R1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyGenP384R1()                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP384R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyGenP521R1()                                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP521R1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyGenP521R1()                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyGenP521R1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyGenSm2P256V1()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSm2P256V1' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyGenSm2P256V1()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSm2P256V1.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyGenSymGeneric()                                                         /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSymGeneric' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyGenSymGeneric()                                              /**< Deactivateable: 'Crypto_30_LibCv_KeyGenSymGeneric.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyLock()                                                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyNvStatus()                                                              /**< Deactivateable: 'Crypto_30_LibCv_KeyNvStatus' Reason: 'No non-volatile memory used.' */
#define Crypto_30_LibCv_HasKeyP224R1BDPubVal()                                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDPubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP224R1BDPubVal()                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP224R1BDSecret()                                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDSecret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP224R1BDSecret()                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyP224R1BDSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP256R1BDPubVal()                                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDPubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP256R1BDPubVal()                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP256R1BDSecret()                                                        /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDSecret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP256R1BDSecret()                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1BDSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP256R1PubVal()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP256R1PubVal()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP256R1Secret()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP256R1Secret()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyP256R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP384R1PubVal()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP384R1PubVal()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP384R1Secret()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP384R1Secret()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyP384R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP521R1PubVal()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP521R1PubVal()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyP521R1Secret()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyP521R1Secret()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyP521R1Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeySeedDRBGAES()                                                           /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGAES' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeySeedDRBGAES()                                                /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGAES.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeySeedDRBGHashSha512()                                                    /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGHashSha512' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeySeedDRBGHashSha512()                                         /**< Deactivateable: 'Crypto_30_LibCv_KeySeedDRBGHashSha512.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeySeedFips186()                                                           /**< Deactivateable: 'Crypto_30_LibCv_KeySeedFips186' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeySeedFips186()                                                /**< Deactivateable: 'Crypto_30_LibCv_KeySeedFips186.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeySetInvalidJob()                                                         /**< Deactivateable: 'Crypto_30_LibCv_KeySetInvalidJob' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeySetInvalidJob()                                              /**< Deactivateable: 'Crypto_30_LibCv_KeySetInvalidJob.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeySetValidJob()                                                           /**< Deactivateable: 'Crypto_30_LibCv_KeySetValidJob' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeySetValidJob()                                                /**< Deactivateable: 'Crypto_30_LibCv_KeySetValidJob.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeySpake2PPubVal()                                                         /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PPubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeySpake2PPubVal()                                              /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PPubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeySpake2PSecret()                                                         /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PSecret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeySpake2PSecret()                                              /**< Deactivateable: 'Crypto_30_LibCv_KeySpake2PSecret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyStorage()                                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyUnwrapAes()                                                             /**< Deactivateable: 'Crypto_30_LibCv_KeyUnwrapAes' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyUnwrapAes()                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyUnwrapAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyWrapAes()                                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyWrapAes' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyWrapAes()                                                    /**< Deactivateable: 'Crypto_30_LibCv_KeyWrapAes.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyX25519PubVal()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyX25519PubVal()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyX25519Secret()                                                          /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyX25519Secret()                                               /**< Deactivateable: 'Crypto_30_LibCv_KeyX25519Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyX448PubVal()                                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyX448PubVal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyX448PubVal()                                                 /**< Deactivateable: 'Crypto_30_LibCv_KeyX448PubVal.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyX448Secret()                                                            /**< Deactivateable: 'Crypto_30_LibCv_KeyX448Secret' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfKeyX448Secret()                                                 /**< Deactivateable: 'Crypto_30_LibCv_KeyX448Secret.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasLastJob()                                                                  /**< Deactivateable: 'Crypto_30_LibCv_LastJob' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_HasFamilyOfLastJob()                                                          /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Family' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_HasKeyIdOfLastJob()                                                           /**< Deactivateable: 'Crypto_30_LibCv_LastJob.KeyId' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_HasModeOfLastJob()                                                            /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Mode' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_HasLock()                                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasLongTermWs()                                                               /**< Deactivateable: 'Crypto_30_LibCv_LongTermWs' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasLongTermWsLock()                                                           /**< Deactivateable: 'Crypto_30_LibCv_LongTermWsLock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasMD5()                                                                      /**< Deactivateable: 'Crypto_30_LibCv_MD5' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfMD5()                                                           /**< Deactivateable: 'Crypto_30_LibCv_MD5.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasMainFunctionPeriodOfGeneral(partitionIndex)                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasNvBlock()                                                                  /**< Deactivateable: 'Crypto_30_LibCv_NvBlock' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasConsistencyLevelOfNvBlock()                                                /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.ConsistencyLevel' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasCrcOfNvBlock()                                                             /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Crc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasDescriptorOfNvBlock()                                                      /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Descriptor' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasIdOfNvBlock()                                                              /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Id' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyStorageEndIdxOfNvBlock()                                                /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.KeyStorageEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasKeyStorageStartIdxOfNvBlock()                                              /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.KeyStorageStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasLengthOfNvBlock()                                                          /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Length' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasProcessingOfNvBlock()                                                      /**< Deactivateable: 'Crypto_30_LibCv_NvBlock.Processing' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasObjectInfo()                                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasAEADChaChaPoly1305DecryptIdxOfObjectInfo()                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305DecryptIdx' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAEADChaChaPoly1305DecryptUsedOfObjectInfo()                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305DecryptUsed' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAEADChaChaPoly1305EncryptIdxOfObjectInfo()                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305EncryptIdx' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAEADChaChaPoly1305EncryptUsedOfObjectInfo()                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AEADChaChaPoly1305EncryptUsed' Reason: 'the optional indirection is deactivated because AEADChaChaPoly1305EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesCcmDecryptIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmDecryptIdx' Reason: 'the optional indirection is deactivated because AesCcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesCcmDecryptUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmDecryptUsed' Reason: 'the optional indirection is deactivated because AesCcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesCcmEncryptIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmEncryptIdx' Reason: 'the optional indirection is deactivated because AesCcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesCcmEncryptUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesCcmEncryptUsed' Reason: 'the optional indirection is deactivated because AesCcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesDecryptIdxOfObjectInfo()                                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasAesDecryptUsedOfObjectInfo()                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasAesEncryptIdxOfObjectInfo()                                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesEncryptIdx' Reason: 'the optional indirection is deactivated because AesEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesEncryptUsedOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesEncryptUsed' Reason: 'the optional indirection is deactivated because AesEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesGcmDecryptIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmDecryptIdx' Reason: 'the optional indirection is deactivated because AesGcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesGcmDecryptUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmDecryptUsed' Reason: 'the optional indirection is deactivated because AesGcmDecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesGcmEncryptIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmEncryptIdx' Reason: 'the optional indirection is deactivated because AesGcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasAesGcmEncryptUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.AesGcmEncryptUsed' Reason: 'the optional indirection is deactivated because AesGcmEncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasApplicationIdOfObjectInfo()                                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.ApplicationId' Reason: 'Deactivated for use case Single Partition' */
#define Crypto_30_LibCv_HasCmacAesGenerateIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.CmacAesGenerateIdx' Reason: 'the optional indirection is deactivated because CmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasCmacAesGenerateUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.CmacAesGenerateUsed' Reason: 'the optional indirection is deactivated because CmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasCmacAesVerifyIdxOfObjectInfo()                                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasCmacAesVerifyUsedOfObjectInfo()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasDRBGAESIdxOfObjectInfo()                                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGAESIdx' Reason: 'the optional indirection is deactivated because DRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasDRBGAESUsedOfObjectInfo()                                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGAESUsed' Reason: 'the optional indirection is deactivated because DRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasDRBGHashSha512IdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGHashSha512Idx' Reason: 'the optional indirection is deactivated because DRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasDRBGHashSha512UsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.DRBGHashSha512Used' Reason: 'the optional indirection is deactivated because DRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP160GenerateIdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160GenerateIdx' Reason: 'the optional indirection is deactivated because EcP160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP160GenerateUsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160GenerateUsed' Reason: 'the optional indirection is deactivated because EcP160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP160VerifyIdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160VerifyIdx' Reason: 'the optional indirection is deactivated because EcP160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP160VerifyUsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP160VerifyUsed' Reason: 'the optional indirection is deactivated because EcP160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP256GenerateIdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256GenerateIdx' Reason: 'the optional indirection is deactivated because EcP256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP256GenerateUsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256GenerateUsed' Reason: 'the optional indirection is deactivated because EcP256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP256VerifyIdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256VerifyIdx' Reason: 'the optional indirection is deactivated because EcP256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP256VerifyUsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP256VerifyUsed' Reason: 'the optional indirection is deactivated because EcP256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP384GenerateIdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384GenerateIdx' Reason: 'the optional indirection is deactivated because EcP384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP384GenerateUsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384GenerateUsed' Reason: 'the optional indirection is deactivated because EcP384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP384VerifyIdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384VerifyIdx' Reason: 'the optional indirection is deactivated because EcP384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP384VerifyUsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP384VerifyUsed' Reason: 'the optional indirection is deactivated because EcP384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP521GenerateIdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521GenerateIdx' Reason: 'the optional indirection is deactivated because EcP521GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP521GenerateUsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521GenerateUsed' Reason: 'the optional indirection is deactivated because EcP521GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP521VerifyIdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521VerifyIdx' Reason: 'the optional indirection is deactivated because EcP521VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcP521VerifyUsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcP521VerifyUsed' Reason: 'the optional indirection is deactivated because EcP521VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcPKeyCheckIdxOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcPKeyCheckIdx' Reason: 'the optional indirection is deactivated because EcPKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEcPKeyCheckUsedOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EcPKeyCheckUsed' Reason: 'the optional indirection is deactivated because EcPKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEd25519GenerateIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed25519GenerateIdx' Reason: 'the optional indirection is deactivated because Ed25519GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEd25519GenerateUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed25519GenerateUsed' Reason: 'the optional indirection is deactivated because Ed25519GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEd25519VerifyIdxOfObjectInfo()                                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasEd25519VerifyUsedOfObjectInfo()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasEd448GenerateIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448GenerateIdx' Reason: 'the optional indirection is deactivated because Ed448GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEd448GenerateUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448GenerateUsed' Reason: 'the optional indirection is deactivated because Ed448GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEd448VerifyIdxOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448VerifyIdx' Reason: 'the optional indirection is deactivated because Ed448VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEd448VerifyUsedOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Ed448VerifyUsed' Reason: 'the optional indirection is deactivated because Ed448VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEdKeyCheckIdxOfObjectInfo()                                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EdKeyCheckIdx' Reason: 'the optional indirection is deactivated because EdKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasEdKeyCheckUsedOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.EdKeyCheckUsed' Reason: 'the optional indirection is deactivated because EdKeyCheckUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasFips186IdxOfObjectInfo()                                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Fips186Idx' Reason: 'the optional indirection is deactivated because Fips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasFips186UsedOfObjectInfo()                                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Fips186Used' Reason: 'the optional indirection is deactivated because Fips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasGmacAesGenerateIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesGenerateIdx' Reason: 'the optional indirection is deactivated because GmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasGmacAesGenerateUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesGenerateUsed' Reason: 'the optional indirection is deactivated because GmacAesGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasGmacAesVerifyIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesVerifyIdx' Reason: 'the optional indirection is deactivated because GmacAesVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasGmacAesVerifyUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.GmacAesVerifyUsed' Reason: 'the optional indirection is deactivated because GmacAesVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHashIdxOfObjectInfo()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasHashUsedOfObjectInfo()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasHmacRipeMd160GenerateIdxOfObjectInfo()                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160GenerateIdx' Reason: 'the optional indirection is deactivated because HmacRipeMd160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacRipeMd160GenerateUsedOfObjectInfo()                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160GenerateUsed' Reason: 'the optional indirection is deactivated because HmacRipeMd160GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacRipeMd160VerifyIdxOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160VerifyIdx' Reason: 'the optional indirection is deactivated because HmacRipeMd160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacRipeMd160VerifyUsedOfObjectInfo()                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacRipeMd160VerifyUsed' Reason: 'the optional indirection is deactivated because HmacRipeMd160VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha1GenerateIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha1GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha1GenerateUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha1GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha1VerifyIdxOfObjectInfo()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasHmacSha1VerifyUsedOfObjectInfo()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasHmacSha256GenerateIdxOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha256GenerateUsedOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha256GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha256VerifyIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha256VerifyUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha256VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha256VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha384GenerateIdxOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha384GenerateUsedOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha384GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha384VerifyIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha384VerifyUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha384VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha384VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha512GenerateIdxOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512GenerateIdx' Reason: 'the optional indirection is deactivated because HmacSha512GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha512GenerateUsedOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512GenerateUsed' Reason: 'the optional indirection is deactivated because HmacSha512GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha512VerifyIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512VerifyIdx' Reason: 'the optional indirection is deactivated because HmacSha512VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasHmacSha512VerifyUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.HmacSha512VerifyUsed' Reason: 'the optional indirection is deactivated because HmacSha512VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFExpandHMACSHA256IdxOfObjectInfo()                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFExpandHMACSHA256UsedOfObjectInfo()                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFExpandHMACSHA384IdxOfObjectInfo()                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA384Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFExpandHMACSHA384UsedOfObjectInfo()                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFExpandHMACSHA384Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFExpandHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHMACSHA256IdxOfObjectInfo()                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHMACSHA256UsedOfObjectInfo()                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHMACSHA384IdxOfObjectInfo()                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA384Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHMACSHA384UsedOfObjectInfo()                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHMACSHA384Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHMACSHA384UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHashOption1SHA256IdxOfObjectInfo()                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHashOption1SHA256UsedOfObjectInfo()                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHashOption1SHA512IdxOfObjectInfo()                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA512Idx' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveHKDFHashOption1SHA512UsedOfObjectInfo()                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveHKDFHashOption1SHA512Used' Reason: 'the optional indirection is deactivated because KeyDeriveHKDFHashOption1SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveISO15118IdxOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118Idx' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveISO15118UsedOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118Used' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveISO15118_20IdxOfObjectInfo()                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118_20Idx' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118_20UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveISO15118_20UsedOfObjectInfo()                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveISO15118_20Used' Reason: 'the optional indirection is deactivated because KeyDeriveISO15118_20UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveKDF2HMACSHA1IdxOfObjectInfo()                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA1Idx' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveKDF2HMACSHA1UsedOfObjectInfo()                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA1Used' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveKDF2HMACSHA256IdxOfObjectInfo()                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveKDF2HMACSHA256UsedOfObjectInfo()                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveKDF2HMACSHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveKDF2HMACSHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveNist800108CntSha256IdxOfObjectInfo()                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CntSha256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CntSha256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveNist800108CntSha256UsedOfObjectInfo()                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CntSha256Used' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CntSha256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveNist800108CtrCmacAesIdxOfObjectInfo()                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CtrCmacAesIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CtrCmacAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveNist800108CtrCmacAesUsedOfObjectInfo()                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist800108CtrCmacAesUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNist800108CtrCmacAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveNist80056AOnePassIdxOfObjectInfo()                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist80056AOnePassIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNist80056AOnePassUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveNist80056AOnePassUsedOfObjectInfo()                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNist80056AOnePassUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNist80056AOnePassUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveNistFips186ErbIdxOfObjectInfo()                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNistFips186ErbIdx' Reason: 'the optional indirection is deactivated because KeyDeriveNistFips186ErbUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveNistFips186ErbUsedOfObjectInfo()                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveNistFips186ErbUsed' Reason: 'the optional indirection is deactivated because KeyDeriveNistFips186ErbUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveSpake2PIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveSpake2PIdx' Reason: 'the optional indirection is deactivated because KeyDeriveSpake2PUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveSpake2PUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveSpake2PUsed' Reason: 'the optional indirection is deactivated because KeyDeriveSpake2PUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveX963SHA256IdxOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA256Idx' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveX963SHA256UsedOfObjectInfo()                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA256Used' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA256UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveX963SHA512IdxOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA512Idx' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyDeriveX963SHA512UsedOfObjectInfo()                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyDeriveX963SHA512Used' Reason: 'the optional indirection is deactivated because KeyDeriveX963SHA512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenEd25519IdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenEd25519Idx' Reason: 'the optional indirection is deactivated because KeyGenEd25519UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenEd25519UsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenEd25519Used' Reason: 'the optional indirection is deactivated because KeyGenEd25519UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenP256R1IdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP256R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP256R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenP256R1UsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP256R1Used' Reason: 'the optional indirection is deactivated because KeyGenP256R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenP384R1IdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP384R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP384R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenP384R1UsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP384R1Used' Reason: 'the optional indirection is deactivated because KeyGenP384R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenP521R1IdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP521R1Idx' Reason: 'the optional indirection is deactivated because KeyGenP521R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenP521R1UsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenP521R1Used' Reason: 'the optional indirection is deactivated because KeyGenP521R1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenSm2P256V1IdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSm2P256V1Idx' Reason: 'the optional indirection is deactivated because KeyGenSm2P256V1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenSm2P256V1UsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSm2P256V1Used' Reason: 'the optional indirection is deactivated because KeyGenSm2P256V1UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenSymGenericIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSymGenericIdx' Reason: 'the optional indirection is deactivated because KeyGenSymGenericUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyGenSymGenericUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyGenSymGenericUsed' Reason: 'the optional indirection is deactivated because KeyGenSymGenericUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP224R1BDPubValIdxOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDPubValIdx' Reason: 'the optional indirection is deactivated because KeyP224R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP224R1BDPubValUsedOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDPubValUsed' Reason: 'the optional indirection is deactivated because KeyP224R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP224R1BDSecretIdxOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDSecretIdx' Reason: 'the optional indirection is deactivated because KeyP224R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP224R1BDSecretUsedOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP224R1BDSecretUsed' Reason: 'the optional indirection is deactivated because KeyP224R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP256R1BDPubValIdxOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDPubValIdx' Reason: 'the optional indirection is deactivated because KeyP256R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP256R1BDPubValUsedOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDPubValUsed' Reason: 'the optional indirection is deactivated because KeyP256R1BDPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP256R1BDSecretIdxOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDSecretIdx' Reason: 'the optional indirection is deactivated because KeyP256R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP256R1BDSecretUsedOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1BDSecretUsed' Reason: 'the optional indirection is deactivated because KeyP256R1BDSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP256R1PubValIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP256R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP256R1PubValUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP256R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP256R1SecretIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP256R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP256R1SecretUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP256R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP256R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP384R1PubValIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP384R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP384R1PubValUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP384R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP384R1SecretIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP384R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP384R1SecretUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP384R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP384R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP521R1PubValIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1PubValIdx' Reason: 'the optional indirection is deactivated because KeyP521R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP521R1PubValUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1PubValUsed' Reason: 'the optional indirection is deactivated because KeyP521R1PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP521R1SecretIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1SecretIdx' Reason: 'the optional indirection is deactivated because KeyP521R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyP521R1SecretUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyP521R1SecretUsed' Reason: 'the optional indirection is deactivated because KeyP521R1SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySeedDRBGAESIdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGAESIdx' Reason: 'the optional indirection is deactivated because KeySeedDRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySeedDRBGAESUsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGAESUsed' Reason: 'the optional indirection is deactivated because KeySeedDRBGAESUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySeedDRBGHashSha512IdxOfObjectInfo()                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGHashSha512Idx' Reason: 'the optional indirection is deactivated because KeySeedDRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySeedDRBGHashSha512UsedOfObjectInfo()                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedDRBGHashSha512Used' Reason: 'the optional indirection is deactivated because KeySeedDRBGHashSha512UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySeedFips186IdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedFips186Idx' Reason: 'the optional indirection is deactivated because KeySeedFips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySeedFips186UsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySeedFips186Used' Reason: 'the optional indirection is deactivated because KeySeedFips186UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySetInvalidJobIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetInvalidJobIdx' Reason: 'the optional indirection is deactivated because KeySetInvalidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySetInvalidJobUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetInvalidJobUsed' Reason: 'the optional indirection is deactivated because KeySetInvalidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySetValidJobIdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetValidJobIdx' Reason: 'the optional indirection is deactivated because KeySetValidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySetValidJobUsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySetValidJobUsed' Reason: 'the optional indirection is deactivated because KeySetValidJobUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySpake2PPubValIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PPubValIdx' Reason: 'the optional indirection is deactivated because KeySpake2PPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySpake2PPubValUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PPubValUsed' Reason: 'the optional indirection is deactivated because KeySpake2PPubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySpake2PSecretIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PSecretIdx' Reason: 'the optional indirection is deactivated because KeySpake2PSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeySpake2PSecretUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeySpake2PSecretUsed' Reason: 'the optional indirection is deactivated because KeySpake2PSecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyUnwrapAesIdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyUnwrapAesIdx' Reason: 'the optional indirection is deactivated because KeyUnwrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyUnwrapAesUsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyUnwrapAesUsed' Reason: 'the optional indirection is deactivated because KeyUnwrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyWrapAesIdxOfObjectInfo()                                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyWrapAesIdx' Reason: 'the optional indirection is deactivated because KeyWrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyWrapAesUsedOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyWrapAesUsed' Reason: 'the optional indirection is deactivated because KeyWrapAesUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyX25519PubValIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519PubValIdx' Reason: 'the optional indirection is deactivated because KeyX25519PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyX25519PubValUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519PubValUsed' Reason: 'the optional indirection is deactivated because KeyX25519PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyX25519SecretIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519SecretIdx' Reason: 'the optional indirection is deactivated because KeyX25519SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyX25519SecretUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX25519SecretUsed' Reason: 'the optional indirection is deactivated because KeyX25519SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyX448PubValIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448PubValIdx' Reason: 'the optional indirection is deactivated because KeyX448PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyX448PubValUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448PubValUsed' Reason: 'the optional indirection is deactivated because KeyX448PubValUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyX448SecretIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448SecretIdx' Reason: 'the optional indirection is deactivated because KeyX448SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasKeyX448SecretUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.KeyX448SecretUsed' Reason: 'the optional indirection is deactivated because KeyX448SecretUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasMD5IdxOfObjectInfo()                                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.MD5Idx' Reason: 'the optional indirection is deactivated because MD5UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasMD5UsedOfObjectInfo()                                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.MD5Used' Reason: 'the optional indirection is deactivated because MD5UsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasPartitionIdxOfObjectInfo()                                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.PartitionIdx' Reason: 'Deactivated for use case Single Partition' */
#define Crypto_30_LibCv_HasQueueIdxOfObjectInfo()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasRandomSeedBufferEndIdxOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferEndIdx' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRandomSeedBufferStartIdxOfObjectInfo()                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferStartIdx' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRandomSeedBufferUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RandomSeedBufferUsed' Reason: 'the optional indirection is deactivated because RandomSeedBufferUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepCrtSha1DecryptIdxOfObjectInfo()                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepCrtSha1DecryptUsedOfObjectInfo()                                    /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepCrtSha256DecryptIdxOfObjectInfo()                                   /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha256DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepCrtSha256DecryptUsedOfObjectInfo()                                  /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepCrtSha256DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepCrtSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepSha1DecryptIdxOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepSha1DecryptUsedOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepSha1EncryptIdxOfObjectInfo()                                        /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1EncryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepSha1EncryptUsedOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha1EncryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepSha256DecryptIdxOfObjectInfo()                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256DecryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepSha256DecryptUsedOfObjectInfo()                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256DecryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha256DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepSha256EncryptIdxOfObjectInfo()                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256EncryptIdx' Reason: 'the optional indirection is deactivated because RsaOaepSha256EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaOaepSha256EncryptUsedOfObjectInfo()                                     /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaOaepSha256EncryptUsed' Reason: 'the optional indirection is deactivated because RsaOaepSha256EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1CrtGenerateIdxOfObjectInfo()                                       /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1CrtGenerateIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1CrtGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1CrtGenerateUsedOfObjectInfo()                                      /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1CrtGenerateUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1CrtGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1DecryptIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1DecryptIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1DecryptUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1DecryptUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1EncryptIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1EncryptIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1EncryptUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1EncryptUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1GenerateIdxOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1GenerateIdx' Reason: 'the optional indirection is deactivated because RsaPkcs1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1GenerateUsedOfObjectInfo()                                         /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPkcs1GenerateUsed' Reason: 'the optional indirection is deactivated because RsaPkcs1GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPkcs1VerifyIdxOfObjectInfo()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasRsaPkcs1VerifyUsedOfObjectInfo()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasRsaPssGenerateIdxOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPssGenerateIdx' Reason: 'the optional indirection is deactivated because RsaPssGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPssGenerateUsedOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.RsaPssGenerateUsed' Reason: 'the optional indirection is deactivated because RsaPssGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasRsaPssVerifyIdxOfObjectInfo()                                            (TRUE != FALSE)
#define Crypto_30_LibCv_HasRsaPssVerifyUsedOfObjectInfo()                                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasSheCmdGetIdIdxOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SheCmdGetIdIdx' Reason: 'the optional indirection is deactivated because SheCmdGetIdUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSheCmdGetIdUsedOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SheCmdGetIdUsed' Reason: 'the optional indirection is deactivated because SheCmdGetIdUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSipHashGenerateIdxOfObjectInfo()                                           /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashGenerateIdx' Reason: 'the optional indirection is deactivated because SipHashGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSipHashGenerateUsedOfObjectInfo()                                          /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashGenerateUsed' Reason: 'the optional indirection is deactivated because SipHashGenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSipHashVerifyIdxOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashVerifyIdx' Reason: 'the optional indirection is deactivated because SipHashVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSipHashVerifyUsedOfObjectInfo()                                            /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SipHashVerifyUsed' Reason: 'the optional indirection is deactivated because SipHashVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSlhDsaVerifyIdxOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SlhDsaVerifyIdx' Reason: 'the optional indirection is deactivated because SlhDsaVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSlhDsaVerifyUsedOfObjectInfo()                                             /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.SlhDsaVerifyUsed' Reason: 'the optional indirection is deactivated because SlhDsaVerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSm2GenerateIdxOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2GenerateIdx' Reason: 'the optional indirection is deactivated because Sm2GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSm2GenerateUsedOfObjectInfo()                                              /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2GenerateUsed' Reason: 'the optional indirection is deactivated because Sm2GenerateUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSm2VerifyIdxOfObjectInfo()                                                 /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2VerifyIdx' Reason: 'the optional indirection is deactivated because Sm2VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSm2VerifyUsedOfObjectInfo()                                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm2VerifyUsed' Reason: 'the optional indirection is deactivated because Sm2VerifyUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSm4DecryptIdxOfObjectInfo()                                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4DecryptIdx' Reason: 'the optional indirection is deactivated because Sm4DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSm4DecryptUsedOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4DecryptUsed' Reason: 'the optional indirection is deactivated because Sm4DecryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSm4EncryptIdxOfObjectInfo()                                                /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4EncryptIdx' Reason: 'the optional indirection is deactivated because Sm4EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasSm4EncryptUsedOfObjectInfo()                                               /**< Deactivateable: 'Crypto_30_LibCv_ObjectInfo.Sm4EncryptUsed' Reason: 'the optional indirection is deactivated because Sm4EncryptUsedOfObjectInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define Crypto_30_LibCv_HasWorkspaceAddrOfObjectInfo()                                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasWorkspaceLengthOfObjectInfo()                                            (TRUE != FALSE)
#define Crypto_30_LibCv_HasObjectInfoInd()                                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasPartitionIdentifiers()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasPCPartitionConfigIdxOfPartitionIdentifiers()                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasPartitionSNVOfPartitionIdentifiers()                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasPartitionInfo()                                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasAesOfPartitionInfo()                                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasDefaultRandomKeyOfPartitionInfo()                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasHashOfPartitionInfo()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasMaskedBitsOfPartitionInfo()                                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasPartitionInitialized(partitionIndex)                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveFct()                                                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasDispatchOfPrimitiveFct()                                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasObjectInfoIndEndIdxOfPrimitiveFct()                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasObjectInfoIndStartIdxOfPrimitiveFct()                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasObjectInfoIndUsedOfPrimitiveFct()                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveInfo()                                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasCombinedOfPrimitiveInfo()                                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasContextOfPrimitiveInfo()                                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasDefaultRandomSourceOfPrimitiveInfo()                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasMaskedBitsOfPrimitiveInfo()                                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveFctIdxOfPrimitiveInfo()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveServiceInfo()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveInfoEndIdxOfPrimitiveServiceInfo()                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveInfoStartIdxOfPrimitiveServiceInfo()                            (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveInfoUsedOfPrimitiveServiceInfo()                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasProcessJob_Trigger_Write()                                               (TRUE != FALSE)
#define Crypto_30_LibCv_HasQueue()                                                                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasRandomSeedBuffer()                                                         /**< Deactivateable: 'Crypto_30_LibCv_RandomSeedBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRedirect_Buffer()                                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasRsaOaepCrtSha1Decrypt()                                                    /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha1Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaOaepCrtSha1Decrypt()                                         /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaOaepCrtSha256Decrypt()                                                  /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha256Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaOaepCrtSha256Decrypt()                                       /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepCrtSha256Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaOaepSha1Decrypt()                                                       /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaOaepSha1Decrypt()                                            /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaOaepSha1Encrypt()                                                       /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaOaepSha1Encrypt()                                            /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha1Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaOaepSha256Decrypt()                                                     /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaOaepSha256Decrypt()                                          /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaOaepSha256Encrypt()                                                     /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaOaepSha256Encrypt()                                          /**< Deactivateable: 'Crypto_30_LibCv_RsaOaepSha256Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaPkcs1CrtGenerate()                                                      /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1CrtGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaPkcs1CrtGenerate()                                           /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1CrtGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaPkcs1Decrypt()                                                          /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaPkcs1Decrypt()                                               /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaPkcs1Encrypt()                                                          /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaPkcs1Encrypt()                                               /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaPkcs1Generate()                                                         /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaPkcs1Generate()                                              /**< Deactivateable: 'Crypto_30_LibCv_RsaPkcs1Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaPkcs1Verify()                                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasWorkspaceOfRsaPkcs1Verify()                                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasRsaPssGenerate()                                                           /**< Deactivateable: 'Crypto_30_LibCv_RsaPssGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfRsaPssGenerate()                                                /**< Deactivateable: 'Crypto_30_LibCv_RsaPssGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasRsaPssVerify()                                                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasWorkspaceOfRsaPssVerify()                                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasSaveAndRestoreWorkspace()                                                  /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace' Reason: 'Disable Feature if no Context primitive is used' */
#define Crypto_30_LibCv_HasLengthOfSaveAndRestoreWorkspace()                                          /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace.Length' Reason: 'Disable Feature if no Context primitive is used' */
#define Crypto_30_LibCv_HasSheCmdGetId()                                                              /**< Deactivateable: 'Crypto_30_LibCv_SheCmdGetId' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfSheCmdGetId()                                                   /**< Deactivateable: 'Crypto_30_LibCv_SheCmdGetId.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasSheKeys()                                                                  /**< Deactivateable: 'Crypto_30_LibCv_SheKeys' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasSipHashGenerate()                                                          /**< Deactivateable: 'Crypto_30_LibCv_SipHashGenerate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfSipHashGenerate()                                               /**< Deactivateable: 'Crypto_30_LibCv_SipHashGenerate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasSipHashVerify()                                                            /**< Deactivateable: 'Crypto_30_LibCv_SipHashVerify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfSipHashVerify()                                                 /**< Deactivateable: 'Crypto_30_LibCv_SipHashVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasSizeOfAesDecrypt()                                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfBufferLength()                                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfCmacAesVerify()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfDispatch_QueuePrimitiveInfoIdx()                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfDriverObjectState()                                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfEd25519Verify()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfFamilyToHashMapping()                                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfHash()                                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfHmacSha1Verify()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKey()                                                              (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyElementInfo()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyElements()                                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyLock()                                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyStorage()                                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfLock()                                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfObjectInfo()                                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfObjectInfoInd()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPartitionIdentifiers()                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPartitionInfo()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPrimitiveFct()                                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPrimitiveInfo()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPrimitiveServiceInfo()                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfProcessJob_Trigger_Write()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfQueue()                                                            (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfRedirect_Buffer()                                                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfRsaPkcs1Verify()                                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfRsaPssVerify()                                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfStructUnionWS_Crypto_30_LibCv()                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfStructUnionWS_Crypto_30_LibCv_Aes()                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfWrittenLength()                                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSlhDsaVerify()                                                             /**< Deactivateable: 'Crypto_30_LibCv_SlhDsaVerify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfSlhDsaVerify()                                                  /**< Deactivateable: 'Crypto_30_LibCv_SlhDsaVerify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasSm2Generate()                                                              /**< Deactivateable: 'Crypto_30_LibCv_Sm2Generate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfSm2Generate()                                                   /**< Deactivateable: 'Crypto_30_LibCv_Sm2Generate.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasSm2Verify()                                                                /**< Deactivateable: 'Crypto_30_LibCv_Sm2Verify' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfSm2Verify()                                                     /**< Deactivateable: 'Crypto_30_LibCv_Sm2Verify.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasSm4Decrypt()                                                               /**< Deactivateable: 'Crypto_30_LibCv_Sm4Decrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfSm4Decrypt()                                                    /**< Deactivateable: 'Crypto_30_LibCv_Sm4Decrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasSm4Encrypt()                                                               /**< Deactivateable: 'Crypto_30_LibCv_Sm4Encrypt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define Crypto_30_LibCv_HasWorkspaceOfSm4Encrypt()                                                    /**< Deactivateable: 'Crypto_30_LibCv_Sm4Encrypt.Workspace' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_HasStrictLengthCheckForKeyElementGetOfGeneral(partitionIndex)               (TRUE != FALSE)
#define Crypto_30_LibCv_HasStructUnionWS_Crypto_30_LibCv()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasDataOfStructUnionWS_Crypto_30_LibCv()                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasStructUnionWS_Crypto_30_LibCv_Aes()                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasDataOfStructUnionWS_Crypto_30_LibCv_Aes()                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasUseVStdLibOfGeneral(partitionIndex)                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasVersionInfoApiOfGeneral(partitionIndex)                                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasWrittenLength()                                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasPCConfig()                                                               (TRUE != FALSE)
#define Crypto_30_LibCv_HasFinalMagicNumberOfPCConfig()                                               /**< Deactivateable: 'Crypto_30_LibCv_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define Crypto_30_LibCv_HasInitDataHashCodeOfPCConfig()                                               /**< Deactivateable: 'Crypto_30_LibCv_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define Crypto_30_LibCv_HasPCPartitionConfigOfPCConfig()                                            (TRUE != FALSE)
#define Crypto_30_LibCv_HasPartitionIdentifiersOfPCConfig()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPartitionIdentifiersOfPCConfig()                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasPCPartitionConfig()                                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasAesDecryptOfPCPartitionConfig()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasBufferLengthOfPCPartitionConfig()                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasCmacAesVerifyOfPCPartitionConfig()                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasDispatch_QueuePrimitiveInfoIdxOfPCPartitionConfig()                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasDriverObjectStateOfPCPartitionConfig()                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasEd25519VerifyOfPCPartitionConfig()                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasExpectedCompatibilityVersionOfPCPartitionConfig(partitionIndex)            /**< Deactivateable: 'Crypto_30_LibCv_PCPartitionConfig.ExpectedCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define Crypto_30_LibCv_HasFamilyToHashMappingOfPCPartitionConfig()                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasGeneratorCompatibilityVersionOfPCPartitionConfig(partitionIndex)           /**< Deactivateable: 'Crypto_30_LibCv_PCPartitionConfig.GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define Crypto_30_LibCv_HasHashOfPCPartitionConfig()                                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasHmacSha1VerifyOfPCPartitionConfig()                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyElementInfoOfPCPartitionConfig()                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyElementsOfPCPartitionConfig()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyLockOfPCPartitionConfig()                                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyOfPCPartitionConfig()                                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasKeyStorageOfPCPartitionConfig()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasLockOfPCPartitionConfig()                                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasMainFunctionPeriodOfGeneralOfPCPartitionConfig(partitionIndex)           (TRUE != FALSE)
#define Crypto_30_LibCv_HasObjectInfoIndOfPCPartitionConfig()                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasObjectInfoOfPCPartitionConfig()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasPartitionInfoOfPCPartitionConfig()                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasPartitionInitializedOfPCPartitionConfig(partitionIndex)                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveFctOfPCPartitionConfig()                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveInfoOfPCPartitionConfig()                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasPrimitiveServiceInfoOfPCPartitionConfig()                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasProcessJob_Trigger_WriteOfPCPartitionConfig()                            (TRUE != FALSE)
#define Crypto_30_LibCv_HasQueueOfPCPartitionConfig()                                               (TRUE != FALSE)
#define Crypto_30_LibCv_HasRedirect_BufferOfPCPartitionConfig()                                     (TRUE != FALSE)
#define Crypto_30_LibCv_HasRsaPkcs1VerifyOfPCPartitionConfig()                                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasRsaPssVerifyOfPCPartitionConfig()                                        (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfAesDecryptOfPCPartitionConfig()                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfBufferLengthOfPCPartitionConfig()                                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfCmacAesVerifyOfPCPartitionConfig()                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfDispatch_QueuePrimitiveInfoIdxOfPCPartitionConfig()                (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfDriverObjectStateOfPCPartitionConfig()                             (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfEd25519VerifyOfPCPartitionConfig()                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfFamilyToHashMappingOfPCPartitionConfig()                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfHashOfPCPartitionConfig()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfHmacSha1VerifyOfPCPartitionConfig()                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyElementInfoOfPCPartitionConfig()                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyElementsOfPCPartitionConfig()                                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyLockOfPCPartitionConfig()                                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyOfPCPartitionConfig()                                           (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfKeyStorageOfPCPartitionConfig()                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfLockOfPCPartitionConfig()                                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfObjectInfoIndOfPCPartitionConfig()                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfObjectInfoOfPCPartitionConfig()                                    (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPartitionInfoOfPCPartitionConfig()                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPrimitiveFctOfPCPartitionConfig()                                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPrimitiveInfoOfPCPartitionConfig()                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfPrimitiveServiceInfoOfPCPartitionConfig()                          (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfProcessJob_Trigger_WriteOfPCPartitionConfig()                      (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfQueueOfPCPartitionConfig()                                         (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfRedirect_BufferOfPCPartitionConfig()                               (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfRsaPkcs1VerifyOfPCPartitionConfig()                                (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfRsaPssVerifyOfPCPartitionConfig()                                  (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfStructUnionWS_Crypto_30_LibCvOfPCPartitionConfig()                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfStructUnionWS_Crypto_30_LibCv_AesOfPCPartitionConfig()             (TRUE != FALSE)
#define Crypto_30_LibCv_HasSizeOfWrittenLengthOfPCPartitionConfig()                                 (TRUE != FALSE)
#define Crypto_30_LibCv_HasStrictLengthCheckForKeyElementGetOfGeneralOfPCPartitionConfig(partitionIndex) (TRUE != FALSE)
#define Crypto_30_LibCv_HasStructUnionWS_Crypto_30_LibCvOfPCPartitionConfig()                       (TRUE != FALSE)
#define Crypto_30_LibCv_HasStructUnionWS_Crypto_30_LibCv_AesOfPCPartitionConfig()                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasUseVStdLibOfGeneralOfPCPartitionConfig(partitionIndex)                   (TRUE != FALSE)
#define Crypto_30_LibCv_HasVersionInfoApiOfGeneralOfPCPartitionConfig(partitionIndex)               (TRUE != FALSE)
#define Crypto_30_LibCv_HasWrittenLengthOfPCPartitionConfig()                                       (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCIncrementDataMacros  Crypto_30_LibCv Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Crypto_30_LibCv_IncBufferLength(Index)                                                      Crypto_30_LibCv_GetBufferLength(Index)++
#define Crypto_30_LibCv_IncDispatch_QueuePrimitiveInfoIdx(Index)                                    Crypto_30_LibCv_GetDispatch_QueuePrimitiveInfoIdx(Index)++
#define Crypto_30_LibCv_IncDriverObjectState(Index)                                                 Crypto_30_LibCv_GetDriverObjectState(Index)++
#define Crypto_30_LibCv_IncKeyLock(Index)                                                           Crypto_30_LibCv_GetKeyLock(Index)++
#define Crypto_30_LibCv_IncKeyNvStatus(Index)                                                         /**< Deactivateable: 'Crypto_30_LibCv_KeyNvStatus' Reason: 'No non-volatile memory used.' */
#define Crypto_30_LibCv_IncKeyStorage(Index)                                                        Crypto_30_LibCv_GetKeyStorage(Index)++
#define Crypto_30_LibCv_IncFamilyOfLastJob(Index)                                                     /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Family' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_IncKeyIdOfLastJob(Index)                                                      /**< Deactivateable: 'Crypto_30_LibCv_LastJob.KeyId' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_IncModeOfLastJob(Index)                                                       /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Mode' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_IncLock(Index)                                                              Crypto_30_LibCv_GetLock(Index)++
#define Crypto_30_LibCv_IncLongTermWs(Index)                                                          /**< Deactivateable: 'Crypto_30_LibCv_LongTermWs' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_IncLongTermWsLock(Index)                                                      /**< Deactivateable: 'Crypto_30_LibCv_LongTermWsLock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_IncPartitionInitialized(partitionIndex)                                     Crypto_30_LibCv_GetPartitionInitialized(partitionIndex)++
#define Crypto_30_LibCv_IncQueue(Index)                                                             Crypto_30_LibCv_GetQueue(Index)++
#define Crypto_30_LibCv_IncRandomSeedBuffer(Index)                                                    /**< Deactivateable: 'Crypto_30_LibCv_RandomSeedBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_IncRedirect_Buffer(Index)                                                   Crypto_30_LibCv_GetRedirect_Buffer(Index)++
#define Crypto_30_LibCv_IncLengthOfSaveAndRestoreWorkspace(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace.Length' Reason: 'Disable Feature if no Context primitive is used' */
#define Crypto_30_LibCv_IncDataOfStructUnionWS_Crypto_30_LibCv(Index)                               Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv(Index)++
#define Crypto_30_LibCv_IncDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index)                           Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index)++
#define Crypto_30_LibCv_IncWrittenLength(Index)                                                     Crypto_30_LibCv_GetWrittenLength(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCDecrementDataMacros  Crypto_30_LibCv Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Crypto_30_LibCv_DecBufferLength(Index)                                                      Crypto_30_LibCv_GetBufferLength(Index)--
#define Crypto_30_LibCv_DecDispatch_QueuePrimitiveInfoIdx(Index)                                    Crypto_30_LibCv_GetDispatch_QueuePrimitiveInfoIdx(Index)--
#define Crypto_30_LibCv_DecDriverObjectState(Index)                                                 Crypto_30_LibCv_GetDriverObjectState(Index)--
#define Crypto_30_LibCv_DecKeyLock(Index)                                                           Crypto_30_LibCv_GetKeyLock(Index)--
#define Crypto_30_LibCv_DecKeyNvStatus(Index)                                                         /**< Deactivateable: 'Crypto_30_LibCv_KeyNvStatus' Reason: 'No non-volatile memory used.' */
#define Crypto_30_LibCv_DecKeyStorage(Index)                                                        Crypto_30_LibCv_GetKeyStorage(Index)--
#define Crypto_30_LibCv_DecFamilyOfLastJob(Index)                                                     /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Family' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_DecKeyIdOfLastJob(Index)                                                      /**< Deactivateable: 'Crypto_30_LibCv_LastJob.KeyId' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_DecModeOfLastJob(Index)                                                       /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Mode' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_DecLock(Index)                                                              Crypto_30_LibCv_GetLock(Index)--
#define Crypto_30_LibCv_DecLongTermWs(Index)                                                          /**< Deactivateable: 'Crypto_30_LibCv_LongTermWs' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_DecLongTermWsLock(Index)                                                      /**< Deactivateable: 'Crypto_30_LibCv_LongTermWsLock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_DecPartitionInitialized(partitionIndex)                                     Crypto_30_LibCv_GetPartitionInitialized(partitionIndex)--
#define Crypto_30_LibCv_DecQueue(Index)                                                             Crypto_30_LibCv_GetQueue(Index)--
#define Crypto_30_LibCv_DecRandomSeedBuffer(Index)                                                    /**< Deactivateable: 'Crypto_30_LibCv_RandomSeedBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_DecRedirect_Buffer(Index)                                                   Crypto_30_LibCv_GetRedirect_Buffer(Index)--
#define Crypto_30_LibCv_DecLengthOfSaveAndRestoreWorkspace(Index)                                     /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace.Length' Reason: 'Disable Feature if no Context primitive is used' */
#define Crypto_30_LibCv_DecDataOfStructUnionWS_Crypto_30_LibCv(Index)                               Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv(Index)--
#define Crypto_30_LibCv_DecDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index)                           Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index)--
#define Crypto_30_LibCv_DecWrittenLength(Index)                                                     Crypto_30_LibCv_GetWrittenLength(Index)--
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCAddDataMacros  Crypto_30_LibCv Add Data Macros (PRE_COMPILE)
  \brief  These macros can be used to add VAR data with numerical nature.
  \{
*/ 
#define Crypto_30_LibCv_AddBufferLength(Index, Value)                                               Crypto_30_LibCv_SetBufferLength(Index, (Crypto_30_LibCv_GetBufferLength(Index) + Value))
#define Crypto_30_LibCv_AddDispatch_QueuePrimitiveInfoIdx(Index, Value)                             Crypto_30_LibCv_SetDispatch_QueuePrimitiveInfoIdx(Index, (Crypto_30_LibCv_GetDispatch_QueuePrimitiveInfoIdx(Index) + Value))
#define Crypto_30_LibCv_AddDriverObjectState(Index, Value)                                          Crypto_30_LibCv_SetDriverObjectState(Index, (Crypto_30_LibCv_GetDriverObjectState(Index) + Value))
#define Crypto_30_LibCv_AddKeyLock(Index, Value)                                                    Crypto_30_LibCv_SetKeyLock(Index, (Crypto_30_LibCv_GetKeyLock(Index) + Value))
#define Crypto_30_LibCv_AddKeyNvStatus(Index, Value)                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyNvStatus' Reason: 'No non-volatile memory used.' */
#define Crypto_30_LibCv_AddKeyStorage(Index, Value)                                                 Crypto_30_LibCv_SetKeyStorage(Index, (Crypto_30_LibCv_GetKeyStorage(Index) + Value))
#define Crypto_30_LibCv_AddFamilyOfLastJob(Index, Value)                                              /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Family' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_AddKeyIdOfLastJob(Index, Value)                                               /**< Deactivateable: 'Crypto_30_LibCv_LastJob.KeyId' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_AddModeOfLastJob(Index, Value)                                                /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Mode' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_AddLock(Index, Value)                                                       Crypto_30_LibCv_SetLock(Index, (Crypto_30_LibCv_GetLock(Index) + Value))
#define Crypto_30_LibCv_AddLongTermWs(Index, Value)                                                   /**< Deactivateable: 'Crypto_30_LibCv_LongTermWs' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_AddLongTermWsLock(Index, Value)                                               /**< Deactivateable: 'Crypto_30_LibCv_LongTermWsLock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_AddPartitionInitialized(Value, partitionIndex)                              Crypto_30_LibCv_SetPartitionInitialized((Crypto_30_LibCv_GetPartitionInitialized(partitionIndex) + Value), partitionIndex)
#define Crypto_30_LibCv_AddQueue(Index, Value)                                                      Crypto_30_LibCv_SetQueue(Index, (Crypto_30_LibCv_GetQueue(Index) + Value))
#define Crypto_30_LibCv_AddRandomSeedBuffer(Index, Value)                                             /**< Deactivateable: 'Crypto_30_LibCv_RandomSeedBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_AddRedirect_Buffer(Index, Value)                                            Crypto_30_LibCv_SetRedirect_Buffer(Index, (Crypto_30_LibCv_GetRedirect_Buffer(Index) + Value))
#define Crypto_30_LibCv_AddLengthOfSaveAndRestoreWorkspace(Index, Value)                              /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace.Length' Reason: 'Disable Feature if no Context primitive is used' */
#define Crypto_30_LibCv_AddDataOfStructUnionWS_Crypto_30_LibCv(Index, Value)                        Crypto_30_LibCv_SetDataOfStructUnionWS_Crypto_30_LibCv(Index, (Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv(Index) + Value))
#define Crypto_30_LibCv_AddDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index, Value)                    Crypto_30_LibCv_SetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index, (Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index) + Value))
#define Crypto_30_LibCv_AddWrittenLength(Index, Value)                                              Crypto_30_LibCv_SetWrittenLength(Index, (Crypto_30_LibCv_GetWrittenLength(Index) + Value))
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCSubstractDataMacros  Crypto_30_LibCv Substract Data Macros (PRE_COMPILE)
  \brief  These macros can be used to substract VAR data with numerical nature.
  \{
*/ 
#define Crypto_30_LibCv_SubBufferLength(Index, Value)                                               Crypto_30_LibCv_SetBufferLength(Index, (Crypto_30_LibCv_GetBufferLength(Index) - Value))
#define Crypto_30_LibCv_SubDispatch_QueuePrimitiveInfoIdx(Index, Value)                             Crypto_30_LibCv_SetDispatch_QueuePrimitiveInfoIdx(Index, (Crypto_30_LibCv_GetDispatch_QueuePrimitiveInfoIdx(Index) - Value))
#define Crypto_30_LibCv_SubDriverObjectState(Index, Value)                                          Crypto_30_LibCv_SetDriverObjectState(Index, (Crypto_30_LibCv_GetDriverObjectState(Index) - Value))
#define Crypto_30_LibCv_SubKeyLock(Index, Value)                                                    Crypto_30_LibCv_SetKeyLock(Index, (Crypto_30_LibCv_GetKeyLock(Index) - Value))
#define Crypto_30_LibCv_SubKeyNvStatus(Index, Value)                                                  /**< Deactivateable: 'Crypto_30_LibCv_KeyNvStatus' Reason: 'No non-volatile memory used.' */
#define Crypto_30_LibCv_SubKeyStorage(Index, Value)                                                 Crypto_30_LibCv_SetKeyStorage(Index, (Crypto_30_LibCv_GetKeyStorage(Index) - Value))
#define Crypto_30_LibCv_SubFamilyOfLastJob(Index, Value)                                              /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Family' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_SubKeyIdOfLastJob(Index, Value)                                               /**< Deactivateable: 'Crypto_30_LibCv_LastJob.KeyId' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_SubModeOfLastJob(Index, Value)                                                /**< Deactivateable: 'Crypto_30_LibCv_LastJob.Mode' Reason: '/ActiveEcuC/Crypto/CryptoGeneral/CryptoMacPrimitives[0:CryptoCmacAesRoundkeyReuse] is configured to 'false'' */
#define Crypto_30_LibCv_SubLock(Index, Value)                                                       Crypto_30_LibCv_SetLock(Index, (Crypto_30_LibCv_GetLock(Index) - Value))
#define Crypto_30_LibCv_SubLongTermWs(Index, Value)                                                   /**< Deactivateable: 'Crypto_30_LibCv_LongTermWs' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_SubLongTermWsLock(Index, Value)                                               /**< Deactivateable: 'Crypto_30_LibCv_LongTermWsLock' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_SubPartitionInitialized(Value, partitionIndex)                              Crypto_30_LibCv_SetPartitionInitialized((Crypto_30_LibCv_GetPartitionInitialized(partitionIndex) - Value), partitionIndex)
#define Crypto_30_LibCv_SubQueue(Index, Value)                                                      Crypto_30_LibCv_SetQueue(Index, (Crypto_30_LibCv_GetQueue(Index) - Value))
#define Crypto_30_LibCv_SubRandomSeedBuffer(Index, Value)                                             /**< Deactivateable: 'Crypto_30_LibCv_RandomSeedBuffer' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define Crypto_30_LibCv_SubRedirect_Buffer(Index, Value)                                            Crypto_30_LibCv_SetRedirect_Buffer(Index, (Crypto_30_LibCv_GetRedirect_Buffer(Index) - Value))
#define Crypto_30_LibCv_SubLengthOfSaveAndRestoreWorkspace(Index, Value)                              /**< Deactivateable: 'Crypto_30_LibCv_SaveAndRestoreWorkspace.Length' Reason: 'Disable Feature if no Context primitive is used' */
#define Crypto_30_LibCv_SubDataOfStructUnionWS_Crypto_30_LibCv(Index, Value)                        Crypto_30_LibCv_SetDataOfStructUnionWS_Crypto_30_LibCv(Index, (Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv(Index) - Value))
#define Crypto_30_LibCv_SubDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index, Value)                    Crypto_30_LibCv_SetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index, (Crypto_30_LibCv_GetDataOfStructUnionWS_Crypto_30_LibCv_Aes(Index) - Value))
#define Crypto_30_LibCv_SubWrittenLength(Index, Value)                                              Crypto_30_LibCv_SetWrittenLength(Index, (Crypto_30_LibCv_GetWrittenLength(Index) - Value))
/** 
  \}
*/ 

  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Crypto_30_LibCvPBGetRootDataMacros  Crypto_30_LibCv Get Root Data Macros (POST_BUILD)
  \brief  These macros are used to get data pointers of root data.
  \{
*/ 
#define Crypto_30_LibCv_GetLTConfigIdxOfPBConfig()                                                    /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define Crypto_30_LibCv_GetPBPartitionConfigOfPBConfig()                                              /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define Crypto_30_LibCv_GetPCConfigIdxOfPBConfig()                                                    /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPBHasMacros  Crypto_30_LibCv Has Macros (POST_BUILD)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Crypto_30_LibCv_HasPBConfig()                                                                 /**< Deactivateable: 'Crypto_30_LibCv_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define Crypto_30_LibCv_HasLTConfigIdxOfPBConfig(partitionIndex)                                      /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define Crypto_30_LibCv_HasPBPartitionConfigOfPBConfig()                                              /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define Crypto_30_LibCv_HasPCConfigIdxOfPBConfig(partitionIndex)                                      /**< Deactivateable: 'Crypto_30_LibCv_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define Crypto_30_LibCv_HasPBPartitionConfig()                                                        /**< Deactivateable: 'Crypto_30_LibCv_PBPartitionConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


#define CRYPTO_30_LIBCV_INITMEMORY STD_ON 


/* PRQA S 3453 LOCKMACROS_3453 */  /* MD_CSL_3453 */
#define Crypto_30_LibCv_FreeLock(lockIdx) Crypto_30_LibCv_SetLock((lockIdx), 0xFFFFFFFFu)
#define Crypto_30_LibCv_IsLockFree(lockIdx) (Crypto_30_LibCv_GetLock((lockIdx))) == 0xFFFFFFFFu
#define Crypto_30_LibCv_IsLockOccupiedByJob(lockIdx, jobId) (Crypto_30_LibCv_GetLock((lockIdx))) == (jobId)
/* PRQA L:LOCKMACROS_3453 */


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/** Elliptic Curve workspace buffer type */
typedef union
{ /* PRQA S 0750 */ /* MD_MSR_18.4 */
  eslt_WorkSpaceEcP wsEcP;
  vSecPrimType_WorkSpaceHash wsPreHash;
} Crypto_30_LibCv_WorkSpaceEcP;

/** AES workspace union type */
typedef union
{ /* PRQA S 0750 */ /* MD_MSR_18.4 */
  eslt_WorkSpaceAES128 wsAES128;
} Crypto_30_LibCv_WorkSpaceAESSubType;

/** AES workspace struct type */
typedef struct
{
  uint8 mode;
  Crypto_30_LibCv_WorkSpaceAESSubType wsAES;
} Crypto_30_LibCv_WorkSpaceAES;

/** CMAC AES workspace struct type */
typedef struct
{
  uint8 mode;
  eslt_WorkSpaceCMACAES wsCMACAES;
} Crypto_30_LibCv_WorkSpaceCMACAES;

/** KDF ISO15118 workspace buffer type */
typedef union
{ /* PRQA S 0750 */ /* MD_MSR_18.4 */
  eslt_WorkSpaceEcP wsEcP;
  eslt_WorkSpaceSHA256 wsSHA256;
  eslt_WorkSpaceAES128 wsAes;
} Crypto_30_LibCv_WorkSpaceISO15118;

/** KDF ISO15118-20 workspace buffer type */
typedef union
{ /* PRQA S 0750 */ /* MD_MSR_18.4 */
  eslt_WorkSpaceEcP wsEcP;
  eslt_WorkSpaceHKDFHASH wsHkdfSHA512;
  eslt_WorkSpaceGCM wsAesGcm;
  eslt_WorkSpaceEdDH wsEdDH;
} Crypto_30_LibCv_WorkSpaceISO15118_20;

/** RSA PSS workspace struct type */
typedef struct
{
  uint32 saltLength;
  eslt_WorkSpaceRSAPSSver wsRsa;
} Crypto_30_LibCv_WorkSpaceRsaPssVer;

/** RSA Decrypt struct type */
typedef struct
{
  uint8 decryptionMode;
  eslt_WorkSpaceRSAdec wsRsa;
} Crypto_30_LibCv_WorkSpaceRsaDecrypt;


typedef uint8 Crypto_30_LibCv_WorkSpaceKeySetValidity; /* No Workspace Required */

typedef uint8 Crypto_30_LibCv_WorkSpaceKeyGenerateSymmetric;  /* No Workspace Required */

typedef P2FUNC(Std_ReturnType, CRYPTO_30_LIBCV_CODE, Crypto_30_LibCv_DispatchFctPtrType)(uint32 objectId, P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_30_LIBCV_APPL_VAR) job,  Crypto_OperationModeType mode);

typedef P2VAR(uint8, AUTOMATIC, CRYPTO_30_LIBCV_APPL_VAR) Crypto_30_LibCv_SaveAndRestoreWorkspaceAddressType;

typedef P2VAR(Crypto_JobType, TYPEDEF, CRYPTO_30_LIBCV_APPL_VAR) Crypto_30_LibCv_JobPtrType;


typedef struct
{
  uint32 firstOutputLength;
  uint32 firstOutputLengthWritten;
  uint32 secondaryOutputLength;
  uint32 secondaryOutputLengthWritten;
  Crypto_JobPrimitiveInputOutputType jobPrimitiveInputOutput_Restore;
} Crypto_30_LibCv_Redirect_Type;

typedef union
{ /* PRQA S 0750 */ /* MD_MSR_18.4 */
  Crypto_30_LibCv_WorkSpaceAES AesDecrypt;
} Crypto_30_LibCv_UnionWS_Crypto_30_LibCv_Aes_Type;

typedef struct sCrypto_30_LibCv_WS_Crypto_30_LibCv_Aes_Type
{
#if (CRYPTO_30_LIBCV_SAVEANDRESTOREWORKSPACE == STD_ON)
  uint8 settings[8];
#endif
  Crypto_30_LibCv_UnionWS_Crypto_30_LibCv_Aes_Type primWS;
} Crypto_30_LibCv_WS_Crypto_30_LibCv_Aes_Type;

typedef union
{ /* PRQA S 0750 */ /* MD_MSR_18.4 */
  vSecPrimType_WorkSpaceHash Hash;
  Crypto_30_LibCv_WorkSpaceCMACAES CmacAesVerify;
  eslt_WorkSpaceHMACSHA1 HmacSha1Verify;
  eslt_WorkSpaceEd25519 Ed25519Verify;
  Crypto_30_LibCv_WorkSpaceRsaPssVer RsaPssVerify;
  eslt_WorkSpaceRSAver RsaPkcs1Verify;
} Crypto_30_LibCv_UnionWS_Crypto_30_LibCv_Type;

typedef struct sCrypto_30_LibCv_WS_Crypto_30_LibCv_Type
{
#if (CRYPTO_30_LIBCV_SAVEANDRESTOREWORKSPACE == STD_ON)
  uint8 settings[8];
#endif
  Crypto_30_LibCv_UnionWS_Crypto_30_LibCv_Type primWS;
} Crypto_30_LibCv_WS_Crypto_30_LibCv_Type;

typedef P2VAR(Crypto_30_LibCv_WorkSpaceAES, CRYPTO_30_LIBCV_CONST, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Crypto_30_LibCv_WorkSpaceAES_PtrType;
typedef P2VAR(vSecPrimType_WorkSpaceHash, CRYPTO_30_LIBCV_CONST, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_vSecPrimType_WorkSpaceHash_PtrType;
typedef P2VAR(Crypto_30_LibCv_WorkSpaceCMACAES, CRYPTO_30_LIBCV_CONST, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Crypto_30_LibCv_WorkSpaceCMACAES_PtrType;
typedef P2VAR(eslt_WorkSpaceHMACSHA1, CRYPTO_30_LIBCV_CONST, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_eslt_WorkSpaceHMACSHA1_PtrType;
typedef P2VAR(eslt_WorkSpaceEd25519, CRYPTO_30_LIBCV_CONST, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_eslt_WorkSpaceEd25519_PtrType;
typedef P2VAR(Crypto_30_LibCv_WorkSpaceRsaPssVer, CRYPTO_30_LIBCV_CONST, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Crypto_30_LibCv_WorkSpaceRsaPssVer_PtrType;
typedef P2VAR(eslt_WorkSpaceRSAver, CRYPTO_30_LIBCV_CONST, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_eslt_WorkSpaceRSAver_PtrType;


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Crypto_30_LibCvPCIterableTypes  Crypto_30_LibCv Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Crypto_30_LibCv_AesDecrypt */
typedef uint8_least Crypto_30_LibCv_AesDecryptIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_CmacAesVerify */
typedef uint8_least Crypto_30_LibCv_CmacAesVerifyIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_Ed25519Verify */
typedef uint8_least Crypto_30_LibCv_Ed25519VerifyIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_FamilyToHashMapping */
typedef uint8_least Crypto_30_LibCv_FamilyToHashMappingIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_Hash */
typedef uint8_least Crypto_30_LibCv_HashIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_HmacSha1Verify */
typedef uint8_least Crypto_30_LibCv_HmacSha1VerifyIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_Key */
typedef uint8_least Crypto_30_LibCv_KeyIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_KeyElementInfo */
typedef uint8_least Crypto_30_LibCv_KeyElementInfoIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_KeyElements */
typedef uint8_least Crypto_30_LibCv_KeyElementsIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_KeyStorage */
typedef uint16_least Crypto_30_LibCv_KeyStorageIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_ObjectInfo */
typedef uint8_least Crypto_30_LibCv_ObjectInfoIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_ObjectInfoInd */
typedef uint8_least Crypto_30_LibCv_ObjectInfoIndIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_PartitionIdentifiers */
typedef uint8_least Crypto_30_LibCv_PartitionIdentifiersIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_PartitionInfo */
typedef uint8_least Crypto_30_LibCv_PartitionInfoIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_PrimitiveFct */
typedef uint8_least Crypto_30_LibCv_PrimitiveFctIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_PrimitiveInfo */
typedef uint8_least Crypto_30_LibCv_PrimitiveInfoIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_PrimitiveServiceInfo */
typedef uint8_least Crypto_30_LibCv_PrimitiveServiceInfoIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_Queue */
typedef uint8_least Crypto_30_LibCv_QueueIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_RsaPkcs1Verify */
typedef uint8_least Crypto_30_LibCv_RsaPkcs1VerifyIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_RsaPssVerify */
typedef uint8_least Crypto_30_LibCv_RsaPssVerifyIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv */
typedef uint8_least Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCvIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes */
typedef uint8_least Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_AesIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_PCPartitionConfig */
typedef uint8_least Crypto_30_LibCv_PCPartitionConfigIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCIterableTypesWithSizeRelations  Crypto_30_LibCv Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Crypto_30_LibCv_BufferLength */
typedef Crypto_30_LibCv_ObjectInfoIterType Crypto_30_LibCv_BufferLengthIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx */
typedef Crypto_30_LibCv_ObjectInfoIterType Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdxIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_DriverObjectState */
typedef Crypto_30_LibCv_ObjectInfoIterType Crypto_30_LibCv_DriverObjectStateIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_KeyLock */
typedef Crypto_30_LibCv_KeyIterType Crypto_30_LibCv_KeyLockIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_Lock */
typedef Crypto_30_LibCv_ObjectInfoIterType Crypto_30_LibCv_LockIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_ProcessJob_Trigger_Write */
typedef Crypto_30_LibCv_ObjectInfoIterType Crypto_30_LibCv_ProcessJob_Trigger_WriteIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_Redirect_Buffer */
typedef Crypto_30_LibCv_ObjectInfoIterType Crypto_30_LibCv_Redirect_BufferIterType;

/**   \brief  type used to iterate Crypto_30_LibCv_WrittenLength */
typedef Crypto_30_LibCv_ObjectInfoIterType Crypto_30_LibCv_WrittenLengthIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCValueTypes  Crypto_30_LibCv Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Crypto_30_LibCv_BufferLength */
typedef uint32 Crypto_30_LibCv_BufferLengthType;

/**   \brief  value based type definition for Crypto_30_LibCv_DriverObjectState */
typedef uint8 Crypto_30_LibCv_DriverObjectStateType;

/**   \brief  value based type definition for Crypto_30_LibCv_FamilyToHashMapping */
typedef uint8 Crypto_30_LibCv_FamilyToHashMappingType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyElementsEndIdxOfKey */
typedef uint8 Crypto_30_LibCv_KeyElementsEndIdxOfKeyType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyElementsStartIdxOfKey */
typedef uint8 Crypto_30_LibCv_KeyElementsStartIdxOfKeyType;

/**   \brief  value based type definition for Crypto_30_LibCv_IdOfKeyElementInfo */
typedef uint8 Crypto_30_LibCv_IdOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_LengthOfKeyElementInfo */
typedef uint16 Crypto_30_LibCv_LengthOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_MaskedBitsOfKeyElementInfo */
typedef uint8 Crypto_30_LibCv_MaskedBitsOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_OnceOfKeyElementInfo */
typedef boolean Crypto_30_LibCv_OnceOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_PartialOfKeyElementInfo */
typedef boolean Crypto_30_LibCv_PartialOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_PersistOfKeyElementInfo */
typedef boolean Crypto_30_LibCv_PersistOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_ReadOfKeyElementInfo */
typedef uint8 Crypto_30_LibCv_ReadOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_WriteOfKeyElementInfo */
typedef uint8 Crypto_30_LibCv_WriteOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_IdOfKeyElements */
typedef uint8 Crypto_30_LibCv_IdOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyElementInfoIdxOfKeyElements */
typedef uint8 Crypto_30_LibCv_KeyElementInfoIdxOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyStorageEndIdxOfKeyElements */
typedef uint16 Crypto_30_LibCv_KeyStorageEndIdxOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyStorageExtensionIdxOfKeyElements */
typedef uint16 Crypto_30_LibCv_KeyStorageExtensionIdxOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyStorageStartIdxOfKeyElements */
typedef uint16 Crypto_30_LibCv_KeyStorageStartIdxOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyStorageValidIdxOfKeyElements */
typedef uint16 Crypto_30_LibCv_KeyStorageValidIdxOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyStorageWrittenLengthEndIdxOfKeyElements */
typedef uint16 Crypto_30_LibCv_KeyStorageWrittenLengthEndIdxOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyStorageWrittenLengthStartIdxOfKeyElements */
typedef uint16 Crypto_30_LibCv_KeyStorageWrittenLengthStartIdxOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyLock */
typedef uint8 Crypto_30_LibCv_KeyLockType;

/**   \brief  value based type definition for Crypto_30_LibCv_KeyStorage */
typedef uint8 Crypto_30_LibCv_KeyStorageType;

/**   \brief  value based type definition for Crypto_30_LibCv_Lock */
typedef uint32 Crypto_30_LibCv_LockType;

/**   \brief  value based type definition for Crypto_30_LibCv_MainFunctionPeriodOfGeneral */
typedef uint8 Crypto_30_LibCv_MainFunctionPeriodOfGeneralType;

/**   \brief  value based type definition for Crypto_30_LibCv_AesDecryptIdxOfObjectInfo */
typedef uint8 Crypto_30_LibCv_AesDecryptIdxOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_AesDecryptUsedOfObjectInfo */
typedef boolean Crypto_30_LibCv_AesDecryptUsedOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_CmacAesVerifyIdxOfObjectInfo */
typedef uint8 Crypto_30_LibCv_CmacAesVerifyIdxOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_CmacAesVerifyUsedOfObjectInfo */
typedef boolean Crypto_30_LibCv_CmacAesVerifyUsedOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_Ed25519VerifyIdxOfObjectInfo */
typedef uint8 Crypto_30_LibCv_Ed25519VerifyIdxOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_Ed25519VerifyUsedOfObjectInfo */
typedef boolean Crypto_30_LibCv_Ed25519VerifyUsedOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_HashIdxOfObjectInfo */
typedef uint8 Crypto_30_LibCv_HashIdxOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_HashUsedOfObjectInfo */
typedef boolean Crypto_30_LibCv_HashUsedOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_HmacSha1VerifyIdxOfObjectInfo */
typedef uint8 Crypto_30_LibCv_HmacSha1VerifyIdxOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_HmacSha1VerifyUsedOfObjectInfo */
typedef boolean Crypto_30_LibCv_HmacSha1VerifyUsedOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_QueueIdxOfObjectInfo */
typedef uint8 Crypto_30_LibCv_QueueIdxOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_RsaPkcs1VerifyIdxOfObjectInfo */
typedef uint8 Crypto_30_LibCv_RsaPkcs1VerifyIdxOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_RsaPkcs1VerifyUsedOfObjectInfo */
typedef boolean Crypto_30_LibCv_RsaPkcs1VerifyUsedOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_RsaPssVerifyIdxOfObjectInfo */
typedef uint8 Crypto_30_LibCv_RsaPssVerifyIdxOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_RsaPssVerifyUsedOfObjectInfo */
typedef boolean Crypto_30_LibCv_RsaPssVerifyUsedOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_WorkspaceLengthOfObjectInfo */
typedef uint32 Crypto_30_LibCv_WorkspaceLengthOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_ObjectInfoInd */
typedef uint8 Crypto_30_LibCv_ObjectInfoIndType;

/**   \brief  value based type definition for Crypto_30_LibCv_PCPartitionConfigIdxOfPartitionIdentifiers */
typedef uint8 Crypto_30_LibCv_PCPartitionConfigIdxOfPartitionIdentifiersType;

/**   \brief  value based type definition for Crypto_30_LibCv_PartitionSNVOfPartitionIdentifiers */
typedef uint32 Crypto_30_LibCv_PartitionSNVOfPartitionIdentifiersType;

/**   \brief  value based type definition for Crypto_30_LibCv_AesOfPartitionInfo */
typedef boolean Crypto_30_LibCv_AesOfPartitionInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_DefaultRandomKeyOfPartitionInfo */
typedef uint32 Crypto_30_LibCv_DefaultRandomKeyOfPartitionInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_HashOfPartitionInfo */
typedef boolean Crypto_30_LibCv_HashOfPartitionInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_MaskedBitsOfPartitionInfo */
typedef uint8 Crypto_30_LibCv_MaskedBitsOfPartitionInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_PartitionInitialized */
typedef uint8 Crypto_30_LibCv_PartitionInitializedType;

/**   \brief  value based type definition for Crypto_30_LibCv_ObjectInfoIndEndIdxOfPrimitiveFct */
typedef uint8 Crypto_30_LibCv_ObjectInfoIndEndIdxOfPrimitiveFctType;

/**   \brief  value based type definition for Crypto_30_LibCv_ObjectInfoIndStartIdxOfPrimitiveFct */
typedef uint8 Crypto_30_LibCv_ObjectInfoIndStartIdxOfPrimitiveFctType;

/**   \brief  value based type definition for Crypto_30_LibCv_ObjectInfoIndUsedOfPrimitiveFct */
typedef boolean Crypto_30_LibCv_ObjectInfoIndUsedOfPrimitiveFctType;

/**   \brief  value based type definition for Crypto_30_LibCv_CombinedOfPrimitiveInfo */
typedef uint32 Crypto_30_LibCv_CombinedOfPrimitiveInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_ContextOfPrimitiveInfo */
typedef boolean Crypto_30_LibCv_ContextOfPrimitiveInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_DefaultRandomSourceOfPrimitiveInfo */
typedef boolean Crypto_30_LibCv_DefaultRandomSourceOfPrimitiveInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_MaskedBitsOfPrimitiveInfo */
typedef uint8 Crypto_30_LibCv_MaskedBitsOfPrimitiveInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_PrimitiveFctIdxOfPrimitiveInfo */
typedef uint8 Crypto_30_LibCv_PrimitiveFctIdxOfPrimitiveInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_PrimitiveInfoEndIdxOfPrimitiveServiceInfo */
typedef uint8 Crypto_30_LibCv_PrimitiveInfoEndIdxOfPrimitiveServiceInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_PrimitiveInfoStartIdxOfPrimitiveServiceInfo */
typedef uint8 Crypto_30_LibCv_PrimitiveInfoStartIdxOfPrimitiveServiceInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_PrimitiveInfoUsedOfPrimitiveServiceInfo */
typedef boolean Crypto_30_LibCv_PrimitiveInfoUsedOfPrimitiveServiceInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_ProcessJob_Trigger_Write */
typedef boolean Crypto_30_LibCv_ProcessJob_Trigger_WriteType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfAesDecrypt */
typedef uint8 Crypto_30_LibCv_SizeOfAesDecryptType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfBufferLength */
typedef uint8 Crypto_30_LibCv_SizeOfBufferLengthType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfCmacAesVerify */
typedef uint8 Crypto_30_LibCv_SizeOfCmacAesVerifyType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfDispatch_QueuePrimitiveInfoIdx */
typedef uint8 Crypto_30_LibCv_SizeOfDispatch_QueuePrimitiveInfoIdxType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfDriverObjectState */
typedef uint8 Crypto_30_LibCv_SizeOfDriverObjectStateType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfEd25519Verify */
typedef uint8 Crypto_30_LibCv_SizeOfEd25519VerifyType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfFamilyToHashMapping */
typedef uint8 Crypto_30_LibCv_SizeOfFamilyToHashMappingType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfHash */
typedef uint8 Crypto_30_LibCv_SizeOfHashType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfHmacSha1Verify */
typedef uint8 Crypto_30_LibCv_SizeOfHmacSha1VerifyType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfKey */
typedef uint8 Crypto_30_LibCv_SizeOfKeyType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfKeyElementInfo */
typedef uint8 Crypto_30_LibCv_SizeOfKeyElementInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfKeyElements */
typedef uint8 Crypto_30_LibCv_SizeOfKeyElementsType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfKeyLock */
typedef uint8 Crypto_30_LibCv_SizeOfKeyLockType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfKeyStorage */
typedef uint16 Crypto_30_LibCv_SizeOfKeyStorageType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfLock */
typedef uint8 Crypto_30_LibCv_SizeOfLockType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfObjectInfo */
typedef uint8 Crypto_30_LibCv_SizeOfObjectInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfObjectInfoInd */
typedef uint8 Crypto_30_LibCv_SizeOfObjectInfoIndType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfPartitionIdentifiers */
typedef uint8 Crypto_30_LibCv_SizeOfPartitionIdentifiersType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfPartitionInfo */
typedef uint8 Crypto_30_LibCv_SizeOfPartitionInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfPrimitiveFct */
typedef uint8 Crypto_30_LibCv_SizeOfPrimitiveFctType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfPrimitiveInfo */
typedef uint8 Crypto_30_LibCv_SizeOfPrimitiveInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfPrimitiveServiceInfo */
typedef uint8 Crypto_30_LibCv_SizeOfPrimitiveServiceInfoType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfProcessJob_Trigger_Write */
typedef uint8 Crypto_30_LibCv_SizeOfProcessJob_Trigger_WriteType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfQueue */
typedef uint8 Crypto_30_LibCv_SizeOfQueueType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfRedirect_Buffer */
typedef uint8 Crypto_30_LibCv_SizeOfRedirect_BufferType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfRsaPkcs1Verify */
typedef uint8 Crypto_30_LibCv_SizeOfRsaPkcs1VerifyType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfRsaPssVerify */
typedef uint8 Crypto_30_LibCv_SizeOfRsaPssVerifyType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfStructUnionWS_Crypto_30_LibCv */
typedef uint8 Crypto_30_LibCv_SizeOfStructUnionWS_Crypto_30_LibCvType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfStructUnionWS_Crypto_30_LibCv_Aes */
typedef uint8 Crypto_30_LibCv_SizeOfStructUnionWS_Crypto_30_LibCv_AesType;

/**   \brief  value based type definition for Crypto_30_LibCv_SizeOfWrittenLength */
typedef uint8 Crypto_30_LibCv_SizeOfWrittenLengthType;

/**   \brief  value based type definition for Crypto_30_LibCv_StrictLengthCheckForKeyElementGetOfGeneral */
typedef boolean Crypto_30_LibCv_StrictLengthCheckForKeyElementGetOfGeneralType;

/**   \brief  value based type definition for Crypto_30_LibCv_UseVStdLibOfGeneral */
typedef boolean Crypto_30_LibCv_UseVStdLibOfGeneralType;

/**   \brief  value based type definition for Crypto_30_LibCv_VersionInfoApiOfGeneral */
typedef boolean Crypto_30_LibCv_VersionInfoApiOfGeneralType;

/**   \brief  value based type definition for Crypto_30_LibCv_WrittenLength */
typedef uint32 Crypto_30_LibCv_WrittenLengthType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Crypto_30_LibCvPCStructTypes  Crypto_30_LibCv Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Crypto_30_LibCv_AesDecrypt */
typedef struct sCrypto_30_LibCv_AesDecryptType
{
  Crypto_30_LibCv_Crypto_30_LibCv_WorkSpaceAES_PtrType WorkspaceOfAesDecrypt;
} Crypto_30_LibCv_AesDecryptType;

/**   \brief  type used in Crypto_30_LibCv_CmacAesVerify */
typedef struct sCrypto_30_LibCv_CmacAesVerifyType
{
  Crypto_30_LibCv_Crypto_30_LibCv_WorkSpaceCMACAES_PtrType WorkspaceOfCmacAesVerify;
} Crypto_30_LibCv_CmacAesVerifyType;

/**   \brief  type used in Crypto_30_LibCv_Ed25519Verify */
typedef struct sCrypto_30_LibCv_Ed25519VerifyType
{
  Crypto_30_LibCv_eslt_WorkSpaceEd25519_PtrType WorkspaceOfEd25519Verify;
} Crypto_30_LibCv_Ed25519VerifyType;

/**   \brief  type used in Crypto_30_LibCv_Hash */
typedef struct sCrypto_30_LibCv_HashType
{
  Crypto_30_LibCv_vSecPrimType_WorkSpaceHash_PtrType WorkspaceOfHash;
} Crypto_30_LibCv_HashType;

/**   \brief  type used in Crypto_30_LibCv_HmacSha1Verify */
typedef struct sCrypto_30_LibCv_HmacSha1VerifyType
{
  Crypto_30_LibCv_eslt_WorkSpaceHMACSHA1_PtrType WorkspaceOfHmacSha1Verify;
} Crypto_30_LibCv_HmacSha1VerifyType;

/**   \brief  type used in Crypto_30_LibCv_Key */
typedef struct sCrypto_30_LibCv_KeyType
{
  Crypto_30_LibCv_KeyElementsEndIdxOfKeyType KeyElementsEndIdxOfKey;  /**< the end index of the 1:n relation pointing to Crypto_30_LibCv_KeyElements */
  Crypto_30_LibCv_KeyElementsStartIdxOfKeyType KeyElementsStartIdxOfKey;  /**< the start index of the 1:n relation pointing to Crypto_30_LibCv_KeyElements */
} Crypto_30_LibCv_KeyType;

/**   \brief  type used in Crypto_30_LibCv_KeyElementInfo */
typedef struct sCrypto_30_LibCv_KeyElementInfoType
{
  Crypto_30_LibCv_LengthOfKeyElementInfoType LengthOfKeyElementInfo;
  Crypto_30_LibCv_IdOfKeyElementInfoType IdOfKeyElementInfo;
  Crypto_30_LibCv_MaskedBitsOfKeyElementInfoType MaskedBitsOfKeyElementInfo;  /**< contains bitcoded the boolean data of Crypto_30_LibCv_OnceOfKeyElementInfo, Crypto_30_LibCv_PartialOfKeyElementInfo, Crypto_30_LibCv_PersistOfKeyElementInfo */
  Crypto_30_LibCv_ReadOfKeyElementInfoType ReadOfKeyElementInfo;
  Crypto_30_LibCv_WriteOfKeyElementInfoType WriteOfKeyElementInfo;
} Crypto_30_LibCv_KeyElementInfoType;

/**   \brief  type used in Crypto_30_LibCv_KeyElements */
typedef struct sCrypto_30_LibCv_KeyElementsType
{
  Crypto_30_LibCv_KeyStorageEndIdxOfKeyElementsType KeyStorageEndIdxOfKeyElements;  /**< the end index of the 1:n relation pointing to Crypto_30_LibCv_KeyStorage */
  Crypto_30_LibCv_KeyStorageStartIdxOfKeyElementsType KeyStorageStartIdxOfKeyElements;  /**< the start index of the 1:n relation pointing to Crypto_30_LibCv_KeyStorage */
  Crypto_30_LibCv_IdOfKeyElementsType IdOfKeyElements;
} Crypto_30_LibCv_KeyElementsType;

/**   \brief  type used in Crypto_30_LibCv_ObjectInfo */
typedef struct sCrypto_30_LibCv_ObjectInfoType
{
  Crypto_30_LibCv_WorkspaceLengthOfObjectInfoType WorkspaceLengthOfObjectInfo;  /**< Holds the length of the workspace. */
  Crypto_30_LibCv_AesDecryptIdxOfObjectInfoType AesDecryptIdxOfObjectInfo;  /**< the index of the 0:1 relation pointing to Crypto_30_LibCv_AesDecrypt */
  Crypto_30_LibCv_CmacAesVerifyIdxOfObjectInfoType CmacAesVerifyIdxOfObjectInfo;  /**< the index of the 0:1 relation pointing to Crypto_30_LibCv_CmacAesVerify */
  Crypto_30_LibCv_Ed25519VerifyIdxOfObjectInfoType Ed25519VerifyIdxOfObjectInfo;  /**< the index of the 0:1 relation pointing to Crypto_30_LibCv_Ed25519Verify */
  Crypto_30_LibCv_HashIdxOfObjectInfoType HashIdxOfObjectInfo;  /**< the index of the 0:1 relation pointing to Crypto_30_LibCv_Hash */
  Crypto_30_LibCv_HmacSha1VerifyIdxOfObjectInfoType HmacSha1VerifyIdxOfObjectInfo;  /**< the index of the 0:1 relation pointing to Crypto_30_LibCv_HmacSha1Verify */
  Crypto_30_LibCv_QueueIdxOfObjectInfoType QueueIdxOfObjectInfo;  /**< the index of the 1:1 relation pointing to Crypto_30_LibCv_Queue */
  Crypto_30_LibCv_RsaPkcs1VerifyIdxOfObjectInfoType RsaPkcs1VerifyIdxOfObjectInfo;  /**< the index of the 0:1 relation pointing to Crypto_30_LibCv_RsaPkcs1Verify */
  Crypto_30_LibCv_RsaPssVerifyIdxOfObjectInfoType RsaPssVerifyIdxOfObjectInfo;  /**< the index of the 0:1 relation pointing to Crypto_30_LibCv_RsaPssVerify */
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_LIBCV_VAR_NOINIT)  WorkspaceAddrOfObjectInfo;  /**< Holds the address of the workspace. */
} Crypto_30_LibCv_ObjectInfoType;

/**   \brief  type used in Crypto_30_LibCv_PartitionIdentifiers */
typedef struct sCrypto_30_LibCv_PartitionIdentifiersType
{
  Crypto_30_LibCv_PartitionSNVOfPartitionIdentifiersType PartitionSNVOfPartitionIdentifiers;
  Crypto_30_LibCv_PCPartitionConfigIdxOfPartitionIdentifiersType PCPartitionConfigIdxOfPartitionIdentifiers;  /**< the index of the 1:1 relation pointing to Crypto_30_LibCv_PCPartitionConfig */
} Crypto_30_LibCv_PartitionIdentifiersType;

/**   \brief  type used in Crypto_30_LibCv_PartitionInfo */
typedef struct sCrypto_30_LibCv_PartitionInfoType
{
  Crypto_30_LibCv_DefaultRandomKeyOfPartitionInfoType DefaultRandomKeyOfPartitionInfo;  /**< Holds default random key ref */
  Crypto_30_LibCv_MaskedBitsOfPartitionInfoType MaskedBitsOfPartitionInfo;  /**< contains bitcoded the boolean data of Crypto_30_LibCv_AesOfPartitionInfo, Crypto_30_LibCv_HashOfPartitionInfo */
} Crypto_30_LibCv_PartitionInfoType;

/**   \brief  type used in Crypto_30_LibCv_PrimitiveFct */
typedef struct sCrypto_30_LibCv_PrimitiveFctType
{
  Crypto_30_LibCv_ObjectInfoIndEndIdxOfPrimitiveFctType ObjectInfoIndEndIdxOfPrimitiveFct;  /**< the end index of the 0:n relation pointing to Crypto_30_LibCv_ObjectInfoInd */
  Crypto_30_LibCv_ObjectInfoIndStartIdxOfPrimitiveFctType ObjectInfoIndStartIdxOfPrimitiveFct;  /**< the start index of the 0:n relation pointing to Crypto_30_LibCv_ObjectInfoInd */
  Crypto_30_LibCv_DispatchFctPtrType DispatchOfPrimitiveFct;
} Crypto_30_LibCv_PrimitiveFctType;

/**   \brief  type used in Crypto_30_LibCv_PrimitiveInfo */
typedef struct sCrypto_30_LibCv_PrimitiveInfoType
{
  Crypto_30_LibCv_CombinedOfPrimitiveInfoType CombinedOfPrimitiveInfo;
  Crypto_30_LibCv_MaskedBitsOfPrimitiveInfoType MaskedBitsOfPrimitiveInfo;  /**< contains bitcoded the boolean data of Crypto_30_LibCv_ContextOfPrimitiveInfo, Crypto_30_LibCv_DefaultRandomSourceOfPrimitiveInfo */
  Crypto_30_LibCv_PrimitiveFctIdxOfPrimitiveInfoType PrimitiveFctIdxOfPrimitiveInfo;  /**< the index of the 1:1 relation pointing to Crypto_30_LibCv_PrimitiveFct */
} Crypto_30_LibCv_PrimitiveInfoType;

/**   \brief  type used in Crypto_30_LibCv_PrimitiveServiceInfo */
typedef struct sCrypto_30_LibCv_PrimitiveServiceInfoType
{
  Crypto_30_LibCv_PrimitiveInfoEndIdxOfPrimitiveServiceInfoType PrimitiveInfoEndIdxOfPrimitiveServiceInfo;  /**< the end index of the 0:n relation pointing to Crypto_30_LibCv_PrimitiveInfo */
  Crypto_30_LibCv_PrimitiveInfoStartIdxOfPrimitiveServiceInfoType PrimitiveInfoStartIdxOfPrimitiveServiceInfo;  /**< the start index of the 0:n relation pointing to Crypto_30_LibCv_PrimitiveInfo */
} Crypto_30_LibCv_PrimitiveServiceInfoType;

/**   \brief  type used in Crypto_30_LibCv_RsaPkcs1Verify */
typedef struct sCrypto_30_LibCv_RsaPkcs1VerifyType
{
  Crypto_30_LibCv_eslt_WorkSpaceRSAver_PtrType WorkspaceOfRsaPkcs1Verify;
} Crypto_30_LibCv_RsaPkcs1VerifyType;

/**   \brief  type used in Crypto_30_LibCv_RsaPssVerify */
typedef struct sCrypto_30_LibCv_RsaPssVerifyType
{
  Crypto_30_LibCv_Crypto_30_LibCv_WorkSpaceRsaPssVer_PtrType WorkspaceOfRsaPssVerify;
} Crypto_30_LibCv_RsaPssVerifyType;

/**   \brief  type used in Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv */
typedef struct sCrypto_30_LibCv_StructUnionWS_Crypto_30_LibCvType
{
  Crypto_30_LibCv_WS_Crypto_30_LibCv_Type DataOfStructUnionWS_Crypto_30_LibCv;  /**< Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv. */
} Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCvType;

/**   \brief  type used in Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes */
typedef struct sCrypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_AesType
{
  Crypto_30_LibCv_WS_Crypto_30_LibCv_Aes_Type DataOfStructUnionWS_Crypto_30_LibCv_Aes;  /**< Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes. */
} Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_AesType;

/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCSymbolicStructTypes  Crypto_30_LibCv Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to Crypto_30_LibCv_KeyLock in the partition context  */
typedef struct Crypto_30_LibCv_KeyLockStructSTag
{
  Crypto_30_LibCv_KeyLockType CryptoKey_Fbl_Decrypt_Aes128;
  Crypto_30_LibCv_KeyLockType CryptoKey_Fbl_Signature_Class_C;
  Crypto_30_LibCv_KeyLockType CryptoKey_Fbl_Signature_Ed25519;
  Crypto_30_LibCv_KeyLockType CryptoKey_Fbl_Signature_Rsa1024;
  Crypto_30_LibCv_KeyLockType CryptoKey_Fbl_Signature_Rsa2048;
  Crypto_30_LibCv_KeyLockType CryptoKey_Fbl_Signature_Rsa3072;
  Crypto_30_LibCv_KeyLockType CryptoKey_Fbl_HashDummy;
} Crypto_30_LibCv_KeyLockStructSType;

/**   \brief  type to be used as symbolic data element access to Crypto_30_LibCv_Queue in the partition context  */
typedef struct Crypto_30_LibCv_QueueStructSTag
{
  Crypto_30_LibCv_JobPtrType Crypto_30_LibCv_Aes;
  Crypto_30_LibCv_JobPtrType Crypto_30_LibCv;
} Crypto_30_LibCv_QueueStructSType;

/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCUnionIndexAndSymbolTypes  Crypto_30_LibCv Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access Crypto_30_LibCv_KeyLock in an index and symbol based style. */
typedef union Crypto_30_LibCv_KeyLockUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Crypto_30_LibCv_KeyLockType raw[7];
  Crypto_30_LibCv_KeyLockStructSType str;
} Crypto_30_LibCv_KeyLockUType;

/**   \brief  type to access Crypto_30_LibCv_Queue in an index and symbol based style. */
typedef union Crypto_30_LibCv_QueueUTag
{  /* PRQA S 0750 */  /* MD_CSL_Union */
  Crypto_30_LibCv_JobPtrType raw[2];
  Crypto_30_LibCv_QueueStructSType str;
} Crypto_30_LibCv_QueueUType;

/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCRootPointerTypes  Crypto_30_LibCv Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to Crypto_30_LibCv_AesDecrypt */
typedef P2CONST(Crypto_30_LibCv_AesDecryptType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_AesDecryptPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_BufferLength */
typedef P2VAR(Crypto_30_LibCv_BufferLengthType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_BufferLengthPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_CmacAesVerify */
typedef P2CONST(Crypto_30_LibCv_CmacAesVerifyType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_CmacAesVerifyPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx */
typedef P2VAR(Crypto_30_LibCv_SizeOfPrimitiveInfoType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdxPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_DriverObjectState */
typedef P2VAR(Crypto_30_LibCv_DriverObjectStateType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_DriverObjectStatePtrType;

/**   \brief  type used to point to Crypto_30_LibCv_Ed25519Verify */
typedef P2CONST(Crypto_30_LibCv_Ed25519VerifyType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_Ed25519VerifyPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_FamilyToHashMapping */
typedef P2CONST(Crypto_30_LibCv_FamilyToHashMappingType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_FamilyToHashMappingPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_Hash */
typedef P2CONST(Crypto_30_LibCv_HashType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_HashPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_HmacSha1Verify */
typedef P2CONST(Crypto_30_LibCv_HmacSha1VerifyType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_HmacSha1VerifyPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_Key */
typedef P2CONST(Crypto_30_LibCv_KeyType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_KeyPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_KeyElementInfo */
typedef P2CONST(Crypto_30_LibCv_KeyElementInfoType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_KeyElementInfoPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_KeyElements */
typedef P2CONST(Crypto_30_LibCv_KeyElementsType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_KeyElementsPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_KeyLock */
typedef P2VAR(Crypto_30_LibCv_KeyLockType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_KeyLockPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_KeyStorage */
typedef P2VAR(Crypto_30_LibCv_KeyStorageType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_KeyStoragePtrType;

/**   \brief  type used to point to Crypto_30_LibCv_Lock */
typedef P2VAR(Crypto_30_LibCv_LockType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_LockPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_ObjectInfo */
typedef P2CONST(Crypto_30_LibCv_ObjectInfoType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_ObjectInfoPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_ObjectInfoInd */
typedef P2CONST(Crypto_30_LibCv_ObjectInfoIndType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_ObjectInfoIndPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_PartitionIdentifiers */
typedef P2CONST(Crypto_30_LibCv_PartitionIdentifiersType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PartitionIdentifiersPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_PartitionInfo */
typedef P2CONST(Crypto_30_LibCv_PartitionInfoType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PartitionInfoPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_PartitionInitialized */
typedef P2VAR(Crypto_30_LibCv_PartitionInitializedType, TYPEDEF, CRYPTO_30_LIBCV_VAR_ZERO_INIT) Crypto_30_LibCv_PartitionInitializedPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_PrimitiveFct */
typedef P2CONST(Crypto_30_LibCv_PrimitiveFctType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveFctPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_PrimitiveInfo */
typedef P2CONST(Crypto_30_LibCv_PrimitiveInfoType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveInfoPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_PrimitiveServiceInfo */
typedef P2CONST(Crypto_30_LibCv_PrimitiveServiceInfoType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveServiceInfoPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_ProcessJob_Trigger_Write */
typedef P2VAR(Crypto_30_LibCv_ProcessJob_Trigger_WriteType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_ProcessJob_Trigger_WritePtrType;

/**   \brief  type used to point to Crypto_30_LibCv_Queue */
typedef P2VAR(Crypto_30_LibCv_JobPtrType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_QueuePtrType;

/**   \brief  type used to point to Crypto_30_LibCv_Redirect_Buffer */
typedef P2VAR(Crypto_30_LibCv_Redirect_Type, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Redirect_BufferPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_RsaPkcs1Verify */
typedef P2CONST(Crypto_30_LibCv_RsaPkcs1VerifyType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_RsaPkcs1VerifyPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_RsaPssVerify */
typedef P2CONST(Crypto_30_LibCv_RsaPssVerifyType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_RsaPssVerifyPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv */
typedef P2VAR(Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCvType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCvPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_DataOfStructUnionWS_Crypto_30_LibCv */
typedef P2VAR(Crypto_30_LibCv_WS_Crypto_30_LibCv_Type, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_DataOfStructUnionWS_Crypto_30_LibCvPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes */
typedef P2VAR(Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_AesType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_AesPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_DataOfStructUnionWS_Crypto_30_LibCv_Aes */
typedef P2VAR(Crypto_30_LibCv_WS_Crypto_30_LibCv_Aes_Type, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_DataOfStructUnionWS_Crypto_30_LibCv_AesPtrType;

/**   \brief  type used to point to Crypto_30_LibCv_WrittenLength */
typedef P2VAR(Crypto_30_LibCv_WrittenLengthType, TYPEDEF, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_WrittenLengthPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCPartitionRootPointer  Crypto_30_LibCv Partition Root Pointer (PRE_COMPILE)
  \brief  This type definitions are used for partition specific instance.
  \{
*/ 
/**   \brief  type used in Crypto_30_LibCv_PCPartitionConfig */
typedef struct sCrypto_30_LibCv_PCPartitionConfigType
{
  uint8 Crypto_30_LibCv_PCPartitionConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Crypto_30_LibCv_PCPartitionConfigType;

/**   \brief  type used to point to Crypto_30_LibCv_PCPartitionConfig */
typedef P2CONST(Crypto_30_LibCv_PCPartitionConfigType, TYPEDEF, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PCPartitionConfigPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPCRootValueTypes  Crypto_30_LibCv Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Crypto_30_LibCv_PCConfig */
typedef struct sCrypto_30_LibCv_PCConfigType
{
  uint8 Crypto_30_LibCv_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Crypto_30_LibCv_PCConfigType;

typedef Crypto_30_LibCv_PCConfigType Crypto_30_LibCv_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Crypto_30_LibCvPBIterableTypes  Crypto_30_LibCv Iterable Types (POST_BUILD)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPBValueTypes  Crypto_30_LibCv Value Types (POST_BUILD)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Crypto_30_LibCvPBPartitionRootPointer  Crypto_30_LibCv Partition Root Pointer (POST_BUILD)
  \brief  This type definitions are used for partition specific instance.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  Crypto_30_LibCvPBRootValueTypes  Crypto_30_LibCv Root Value Types (POST_BUILD)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Crypto_30_LibCv_AesDecrypt
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_AesDecrypt
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_AesDecryptType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_AesDecrypt[1];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_CmacAesVerify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_CmacAesVerify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_CmacAesVerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_CmacAesVerify[1];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Ed25519Verify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Ed25519Verify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_Ed25519VerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_Ed25519Verify[1];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_FamilyToHashMapping
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_FamilyToHashMappingType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_FamilyToHashMapping[8];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Hash
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Hash
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_HashType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_Hash[1];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_HmacSha1Verify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_HmacSha1Verify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_HmacSha1VerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_HmacSha1Verify[1];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Key
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Key
  \details
  Element                Description
  KeyElementsEndIdx      the end index of the 1:n relation pointing to Crypto_30_LibCv_KeyElements
  KeyElementsStartIdx    the start index of the 1:n relation pointing to Crypto_30_LibCv_KeyElements
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_KeyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_Key[7];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_KeyElementInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_KeyElementInfo
  \details
  Element       Description
  Length    
  Id        
  MaskedBits    contains bitcoded the boolean data of Crypto_30_LibCv_OnceOfKeyElementInfo, Crypto_30_LibCv_PartialOfKeyElementInfo, Crypto_30_LibCv_PersistOfKeyElementInfo
  Read      
  Write     
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_KeyElementInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_KeyElementInfo[11];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_KeyElements
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_KeyElements
  \details
  Element               Description
  KeyStorageEndIdx      the end index of the 1:n relation pointing to Crypto_30_LibCv_KeyStorage
  KeyStorageStartIdx    the start index of the 1:n relation pointing to Crypto_30_LibCv_KeyStorage
  Id                
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_KeyElementsType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_KeyElements[11];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_ObjectInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_ObjectInfo
  \details
  Element              Description
  WorkspaceLength      Holds the length of the workspace.
  AesDecryptIdx        the index of the 0:1 relation pointing to Crypto_30_LibCv_AesDecrypt
  CmacAesVerifyIdx     the index of the 0:1 relation pointing to Crypto_30_LibCv_CmacAesVerify
  Ed25519VerifyIdx     the index of the 0:1 relation pointing to Crypto_30_LibCv_Ed25519Verify
  HashIdx              the index of the 0:1 relation pointing to Crypto_30_LibCv_Hash
  HmacSha1VerifyIdx    the index of the 0:1 relation pointing to Crypto_30_LibCv_HmacSha1Verify
  QueueIdx             the index of the 1:1 relation pointing to Crypto_30_LibCv_Queue
  RsaPkcs1VerifyIdx    the index of the 0:1 relation pointing to Crypto_30_LibCv_RsaPkcs1Verify
  RsaPssVerifyIdx      the index of the 0:1 relation pointing to Crypto_30_LibCv_RsaPssVerify
  WorkspaceAddr        Holds the address of the workspace.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_ObjectInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_ObjectInfo[2];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_ObjectInfoInd
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_ObjectInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Crypto_30_LibCv_ObjectInfo
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_ObjectInfoIndType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_ObjectInfoInd[7];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PartitionIdentifiers
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PartitionIdentifiers
  \brief  the partition context in Config
  \details
  Element                 Description
  PartitionSNV        
  PCPartitionConfigIdx    the index of the 1:1 relation pointing to Crypto_30_LibCv_PCPartitionConfig
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_PartitionIdentifiersType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PartitionIdentifiers[1];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PartitionInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PartitionInfo
  \details
  Element             Description
  DefaultRandomKey    Holds default random key ref
  MaskedBits          contains bitcoded the boolean data of Crypto_30_LibCv_AesOfPartitionInfo, Crypto_30_LibCv_HashOfPartitionInfo
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_PartitionInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PartitionInfo[1];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PrimitiveFct
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PrimitiveFct
  \details
  Element                  Description
  ObjectInfoIndEndIdx      the end index of the 0:n relation pointing to Crypto_30_LibCv_ObjectInfoInd
  ObjectInfoIndStartIdx    the start index of the 0:n relation pointing to Crypto_30_LibCv_ObjectInfoInd
  Dispatch             
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_PrimitiveFctType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveFct[7];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PrimitiveInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PrimitiveInfo
  \details
  Element            Description
  Combined       
  MaskedBits         contains bitcoded the boolean data of Crypto_30_LibCv_ContextOfPrimitiveInfo, Crypto_30_LibCv_DefaultRandomSourceOfPrimitiveInfo
  PrimitiveFctIdx    the index of the 1:1 relation pointing to Crypto_30_LibCv_PrimitiveFct
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_PrimitiveInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveInfo[18];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PrimitiveServiceInfo
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PrimitiveServiceInfo
  \details
  Element                  Description
  PrimitiveInfoEndIdx      the end index of the 0:n relation pointing to Crypto_30_LibCv_PrimitiveInfo
  PrimitiveInfoStartIdx    the start index of the 0:n relation pointing to Crypto_30_LibCv_PrimitiveInfo
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_PrimitiveServiceInfoType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_PrimitiveServiceInfo[24];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_RsaPkcs1Verify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_RsaPkcs1Verify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_RsaPkcs1VerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_RsaPkcs1Verify[1];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_RsaPssVerify
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_RsaPssVerify
  \details
  Element      Description
  Workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern CONST(Crypto_30_LibCv_RsaPssVerifyType, CRYPTO_30_LIBCV_CONST) Crypto_30_LibCv_RsaPssVerify[1];
#define CRYPTO_30_LIBCV_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_BufferLength
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_BufferLength
  \brief  Buffer which holds the current seed of the Fips186 algorithm to restore the needed workspace.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_BufferLengthType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_BufferLength[2];
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_SizeOfPrimitiveInfoType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Dispatch_QueuePrimitiveInfoIdx[2];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_DriverObjectState
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_DriverObjectState
  \brief  State of the current workspace usage.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_DriverObjectStateType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_DriverObjectState[2];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_KeyLock
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_KeyLock
  \brief  Stores locking counter of each key
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_KeyLockUType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_KeyLock;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_KeyStorage
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_KeyStorageType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_KeyStorage[924];
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Lock
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Lock
  \brief  Id of job that currently occupies the workspace
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_LockType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Lock[2];
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_PartitionInitialized
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_PartitionInitialized
  \brief  Tracks which partition has already been initialized
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_PartitionInitializedType, CRYPTO_30_LIBCV_VAR_ZERO_INIT) Crypto_30_LibCv_PartitionInitialized;  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_ProcessJob_Trigger_Write
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_ProcessJob_Trigger_WriteType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_ProcessJob_Trigger_Write[2];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Queue
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_Queue
  \brief  Acts as job queue for all driver objects.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_QueueUType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Queue;  /* PRQA S 0759 */  /* MD_CSL_Union */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_Redirect_Buffer
**********************************************************************************************************************/
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_Redirect_Type, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_Redirect_Buffer[2];
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv
  \brief  Struct which holds the Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv.
  \details
  Element    Description
  Data       Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCvType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv[1];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes
  \brief  Struct which holds the Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes.
  \details
  Element    Description
  Data       Union variable which acts as workspace for driver object /ActiveEcuC/Crypto/CryptoDriverObjects/Crypto_30_LibCv_Aes.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_AesType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_StructUnionWS_Crypto_30_LibCv_Aes[1];  /* PRQA S 0777 */  /* MD_MSR_Rule5.1 */
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Crypto_30_LibCv_WrittenLength
**********************************************************************************************************************/
/** 
  \var    Crypto_30_LibCv_WrittenLength
  \brief  Holds the length which needs to be written in a next step for some algorithms.
*/ 
#define CRYPTO_30_LIBCV_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
extern VAR(Crypto_30_LibCv_WrittenLengthType, CRYPTO_30_LIBCV_VAR_NOINIT) Crypto_30_LibCv_WrittenLength[2];
#define CRYPTO_30_LIBCV_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/




/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL INLINE FUNCTION PROTOTYPES
**********************************************************************************************************************/

 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#define CRYPTO_30_LIBCV_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/***********************************************************************************************************************
 *  MainFunctionGroup
 **********************************************************************************************************************/
/*!
 * \fn          Crypto_30_LibCv_MainFunction
 * \brief       Partition specific main function
 * \details     Calls MainFunctionHandler with dedicated partition.
 * \pre         -
 * \context     TASK
 * \reentrant   FALSE
 * \synchronous TRUE
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  InitMemoryFunctionGroup
 **********************************************************************************************************************/
/*!
 * \fn          Crypto_30_LibCv_InitMemory
 * \brief       Partition specific InitMemory function
 * \pre         -
 * \context     TASK
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        Use this function in case these variables are not initialized by the startup code.
 **********************************************************************************************************************/
extern FUNC(void, CRYPTO_30_LIBCV_CODE) Crypto_30_LibCv_InitMemory(void);
#define CRYPTO_30_LIBCV_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "Crypto_30_LibCv_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */



/* Watchdog Function Prototype */
extern FUNC(void, CRYPTO_30_LIBCV_APPL_CODE) FblRealTimeSupportVoid( void );


#if !defined (CRYPTO_30_LIBCV_NOUNIT_CSLUNIT)
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL INLINE FUNCTIONS
**********************************************************************************************************************/

#endif



#endif /* CRYPTO_30_LIBCV_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Crypto_30_LibCv_Cfg.h
 *********************************************************************************************************************/

