/**********************************************************************************************************************
 *  EXAMPLE CODE ONLY
 *  -------------------------------------------------------------------------------------------------------------------
 *  This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
 *  The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
 *  intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
 *  implementations must be tested with diligent care and must comply with all quality requirements which are necessary
 *  according to the state of the art before their use.
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * CAUTION - DO NOT EDIT
 * -------------------------------------------------------------------------------------------------------------------
 * Never manually edit the following memory definitions in this file. Only change them in the vLinkGen configuration
 * (/MICROSAR/vLinkGen/vLinkGenMemLayout/vLinkGenMemoryRegion/vLinkGenMemoryRegionBlock) and regenerate the files.
 *********************************************************************************************************************/
MEMORY
{
  CoreExceptions_FirstExecInst : ORIGIN = 0x00000000 , LENGTH = 0x00000200 /* 512 Byte */
  BCODE0 : ORIGIN = 0x00000200 , LENGTH = 0x00000020 /* 32 Byte */
  StartupCode_FirstExecInst : ORIGIN = 0x00000220 , LENGTH = 0x00000400 /* 1024 Byte */
  BmApplicationEntry : ORIGIN = 0x00000620 , LENGTH = 0x00000100 /* 256 Byte */
  BmRomArea : ORIGIN = 0x00000720 , LENGTH = 0x0000F8C0 /* 62 KiB */
  BmHeader : ORIGIN = 0x0000FFE0 , LENGTH = 0x00000020 /* 32 Byte */
  FblHeader : ORIGIN = 0x00010000 , LENGTH = 0x00000020 /* 32 Byte */
  FblBmHdrHeader : ORIGIN = 0x00010020 , LENGTH = 0x00000020 /* 32 Byte */
  FblApplicationEntry : ORIGIN = 0x00010040 , LENGTH = 0x00000100 /* 256 Byte */
  FblRomArea : ORIGIN = 0x00010140 , LENGTH = 0x0003EEC0 /* 252 KiB */
  FblBlockValPresencePattern : ORIGIN = 0x0004FC00 , LENGTH = 0x00000200 /* 512 Byte */
  FblReserved : ORIGIN = 0x0004FE00 , LENGTH = 0x00000200 /* 512 Byte */
  ApplVect : ORIGIN = 0x00050000 , LENGTH = 0x00000008 /* 8 Byte */
  ApplApplicationEntry : ORIGIN = 0x00050008 , LENGTH = 0x00000100 /* 256 Byte */
  ApplRomArea : ORIGIN = 0x00050108 , LENGTH = 0x00040000 /* 256 KiB */
  ApplBmHdrHeader : ORIGIN = 0x0009FBE0 , LENGTH = 0x00000020 /* 32 Byte */
  ApplReserved : ORIGIN = 0x0009FC00 , LENGTH = 0x00000400 /* 1024 Byte */
  LOCAL_RAM_CPU0 : ORIGIN = 0xFEBC0000 , LENGTH = 0x0003BAF0 /* 239 KiB */
  Variables_Shared : ORIGIN = 0xFEBFBBF0 , LENGTH = 0x00000010 /* 16 Byte */
  StartupStack_Shared : ORIGIN = 0xFEBFBC00 , LENGTH = 0x00000400 /* 1024 Byte */
  FlashDrvArea : ORIGIN = 0xFEBFC000 , LENGTH = 0x00003000 /* 12 KiB */
  GLOBAL_RAM_A : ORIGIN = 0xFEEE8000 , LENGTH = 0x00018000 /* 96 KiB */
  MagicFlag : ORIGIN = 0xFEF03000 , LENGTH = 0x00000008 /* 8 Byte */
  EepDummy : ORIGIN = 0xFEF03008 , LENGTH = 0x00000100 /* 256 Byte */
}

SECTIONS
{
  .Startup_Code_Core1 ALIGN(4) :
  {
    *(.bcode1)
  } > BmRomArea
  _Startup_Code_Core1_START = ADDR(.Startup_Code_Core1);
  __Startup_Code_Core1_START = ADDR(.Startup_Code_Core1);
  _Startup_Code_Core1_END = ENDADDR(.Startup_Code_Core1) - 1;
  __Startup_Code_Core1_END = ENDADDR(.Startup_Code_Core1) - 1;
  _Startup_Code_Core1_LIMIT = ENDADDR(.Startup_Code_Core1);
  __Startup_Code_Core1_LIMIT = ENDADDR(.Startup_Code_Core1);

  _Startup_Code_Core1_ALL_START = _Startup_Code_Core1_START;
  _Startup_Code_Core1_ALL_END = _Startup_Code_Core1_END;
  _Startup_Code_Core1_ALL_LIMIT = _Startup_Code_Core1_LIMIT;

  _RESET_CORE0 = brsStartupEntry;
  _RESET_CORE1 = brsStartupEntry;

}


