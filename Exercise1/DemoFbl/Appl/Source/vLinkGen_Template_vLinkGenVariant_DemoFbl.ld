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
  .EepDummySectionNoinit ALIGN(4) :
  {
    *(.EepDummySection)
  } > EepDummy
  _EepDummySectionNoinit_START = ADDR(.EepDummySectionNoinit);
  __EepDummySectionNoinit_START = ADDR(.EepDummySectionNoinit);
  _EepDummySectionNoinit_END = ENDADDR(.EepDummySectionNoinit) - 1;
  __EepDummySectionNoinit_END = ENDADDR(.EepDummySectionNoinit) - 1;
  _EepDummySectionNoinit_LIMIT = ENDADDR(.EepDummySectionNoinit);
  __EepDummySectionNoinit_LIMIT = ENDADDR(.EepDummySectionNoinit);

  _Fbl_EepDummy_SharedNoinit_ALL_START = _EepDummySectionNoinit_START;
  _Fbl_EepDummy_SharedNoinit_ALL_END = _EepDummySectionNoinit_END;
  _Fbl_EepDummy_SharedNoinit_ALL_LIMIT = _EepDummySectionNoinit_LIMIT;

  .FblHeaderSectionGroup ALIGN(4) :
  {
    *(.FblHeaderSection)
  } > FblHeader
  _FblHeaderSectionGroup_START = ADDR(.FblHeaderSectionGroup);
  __FblHeaderSectionGroup_START = ADDR(.FblHeaderSectionGroup);
  _FblHeaderSectionGroup_END = ENDADDR(.FblHeaderSectionGroup) - 1;
  __FblHeaderSectionGroup_END = ENDADDR(.FblHeaderSectionGroup) - 1;
  _FblHeaderSectionGroup_LIMIT = ENDADDR(.FblHeaderSectionGroup);
  __FblHeaderSectionGroup_LIMIT = ENDADDR(.FblHeaderSectionGroup);

  _Fbl_FblHeader_ALL_START = _FblHeaderSectionGroup_START;
  _Fbl_FblHeader_ALL_END = _FblHeaderSectionGroup_END;
  _Fbl_FblHeader_ALL_LIMIT = _FblHeaderSectionGroup_LIMIT;

  .MagicFlagSection ALIGN(4) :
  {
    *(.MagicFlagSection)
    . = ALIGN(4);
  } > MagicFlag
  _MagicFlagSection_START = ADDR(.MagicFlagSection);
  __MagicFlagSection_START = ADDR(.MagicFlagSection);
  _MagicFlagSection_END = ENDADDR(.MagicFlagSection) - 1;
  __MagicFlagSection_END = ENDADDR(.MagicFlagSection) - 1;
  _MagicFlagSection_LIMIT = ENDADDR(.MagicFlagSection);
  __MagicFlagSection_LIMIT = ENDADDR(.MagicFlagSection);

  _Fbl_MagicFlag_Shared_ALL_START = _MagicFlagSection_START;
  _Fbl_MagicFlag_Shared_ALL_END = _MagicFlagSection_END;
  _Fbl_MagicFlag_Shared_ALL_LIMIT = _MagicFlagSection_LIMIT;

  .Fbl_PP ALIGN(4) :
  {
    *(.FblPresencePatternSection)
  } > FblBlockValPresencePattern
  _Fbl_PP_START = ADDR(.Fbl_PP);
  __Fbl_PP_START = ADDR(.Fbl_PP);
  _Fbl_PP_END = ENDADDR(.Fbl_PP) - 1;
  __Fbl_PP_END = ENDADDR(.Fbl_PP) - 1;
  _Fbl_PP_LIMIT = ENDADDR(.Fbl_PP);
  __Fbl_PP_LIMIT = ENDADDR(.Fbl_PP);

  _Fbl_PresencePattern_ALL_START = _Fbl_PP_START;
  _Fbl_PresencePattern_ALL_END = _Fbl_PP_END;
  _Fbl_PresencePattern_ALL_LIMIT = _Fbl_PP_LIMIT;

  .FblBmHdrHeaderGroup ALIGN(4) :
  {
    *(.BmHdrHeaderSection)
  } > FblBmHdrHeader
  _FblBmHdrHeaderGroup_START = ADDR(.FblBmHdrHeaderGroup);
  __FblBmHdrHeaderGroup_START = ADDR(.FblBmHdrHeaderGroup);
  _FblBmHdrHeaderGroup_END = ENDADDR(.FblBmHdrHeaderGroup) - 1;
  __FblBmHdrHeaderGroup_END = ENDADDR(.FblBmHdrHeaderGroup) - 1;
  _FblBmHdrHeaderGroup_LIMIT = ENDADDR(.FblBmHdrHeaderGroup);
  __FblBmHdrHeaderGroup_LIMIT = ENDADDR(.FblBmHdrHeaderGroup);

  _FblAppl_BmHdrHeader_ALL_START = _FblBmHdrHeaderGroup_START;
  _FblAppl_BmHdrHeader_ALL_END = _FblBmHdrHeaderGroup_END;
  _FblAppl_BmHdrHeader_ALL_LIMIT = _FblBmHdrHeaderGroup_LIMIT;

  .FblFlashDrvSection ALIGN(4) :
  {
    *(.FblFlashDrvSection)
  } > FlashDrvArea
  _FblFlashDrvSection_START = ADDR(.FblFlashDrvSection);
  __FblFlashDrvSection_START = ADDR(.FblFlashDrvSection);
  _FblFlashDrvSection_END = ENDADDR(.FblFlashDrvSection) - 1;
  __FblFlashDrvSection_END = ENDADDR(.FblFlashDrvSection) - 1;
  _FblFlashDrvSection_LIMIT = ENDADDR(.FblFlashDrvSection);
  __FblFlashDrvSection_LIMIT = ENDADDR(.FblFlashDrvSection);

  _FblUpd_FlashDrv_ALL_START = _FblFlashDrvSection_START;
  _FblUpd_FlashDrv_ALL_END = _FblFlashDrvSection_END;
  _FblUpd_FlashDrv_ALL_LIMIT = _FblFlashDrvSection_LIMIT;

  .RamConstSection_ROM ROM_NOCOPY(.RamConstSection) :> FblRomArea
  _RamConstSection_ROM_START = ADDR(.RamConstSection_ROM);
  __RamConstSection_ROM_START = ADDR(.RamConstSection_ROM);
  _RamConstSection_ROM_LIMIT = ENDADDR(.RamConstSection_ROM);
  __RamConstSection_ROM_LIMIT = ENDADDR(.RamConstSection_ROM);

  .RamConstSection ALIGN(4) :
  {
    *(.RamConstSection)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _RamConstSection_START = ADDR(.RamConstSection);
  __RamConstSection_START = ADDR(.RamConstSection);
  _RamConstSection_END = ENDADDR(.RamConstSection) - 1;
  __RamConstSection_END = ENDADDR(.RamConstSection) - 1;
  _RamConstSection_LIMIT = ENDADDR(.RamConstSection);
  __RamConstSection_LIMIT = ENDADDR(.RamConstSection);

  .vMemFooterSectionGroup ALIGN(4) :
  {
    *(.FlashDrvFooterSection)
  } > GLOBAL_RAM_A
  _vMemFooterSectionGroup_START = ADDR(.vMemFooterSectionGroup);
  __vMemFooterSectionGroup_START = ADDR(.vMemFooterSectionGroup);
  _vMemFooterSectionGroup_END = ENDADDR(.vMemFooterSectionGroup) - 1;
  __vMemFooterSectionGroup_END = ENDADDR(.vMemFooterSectionGroup) - 1;
  _vMemFooterSectionGroup_LIMIT = ENDADDR(.vMemFooterSectionGroup);
  __vMemFooterSectionGroup_LIMIT = ENDADDR(.vMemFooterSectionGroup);

  .vMemHeaderSectionGroup ALIGN(4) :
  {
    *(.FlashDrvHeaderSection)
  } > GLOBAL_RAM_A
  _vMemHeaderSectionGroup_START = ADDR(.vMemHeaderSectionGroup);
  __vMemHeaderSectionGroup_START = ADDR(.vMemHeaderSectionGroup);
  _vMemHeaderSectionGroup_END = ENDADDR(.vMemHeaderSectionGroup) - 1;
  __vMemHeaderSectionGroup_END = ENDADDR(.vMemHeaderSectionGroup) - 1;
  _vMemHeaderSectionGroup_LIMIT = ENDADDR(.vMemHeaderSectionGroup);
  __vMemHeaderSectionGroup_LIMIT = ENDADDR(.vMemHeaderSectionGroup);

  _FblUpd_RamConst_ALL_START = _RamConstSection_START;
  _FblUpd_RamConst_ALL_END = _vMemHeaderSectionGroup_END;
  _FblUpd_RamConst_ALL_LIMIT = _vMemHeaderSectionGroup_LIMIT;

  .MSR_PBCFG_VAR_CLEARED ALIGN(4) :
  {
    *(.MSR_PBCFG_VAR_CLEARED)
    *(.MSR_PBCFG_VAR_FAST_CLEARED)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _MSR_PBCFG_VAR_CLEARED_START = ADDR(.MSR_PBCFG_VAR_CLEARED);
  __MSR_PBCFG_VAR_CLEARED_START = ADDR(.MSR_PBCFG_VAR_CLEARED);
  _MSR_PBCFG_VAR_CLEARED_END = ENDADDR(.MSR_PBCFG_VAR_CLEARED) - 1;
  __MSR_PBCFG_VAR_CLEARED_END = ENDADDR(.MSR_PBCFG_VAR_CLEARED) - 1;
  _MSR_PBCFG_VAR_CLEARED_LIMIT = ENDADDR(.MSR_PBCFG_VAR_CLEARED);
  __MSR_PBCFG_VAR_CLEARED_LIMIT = ENDADDR(.MSR_PBCFG_VAR_CLEARED);

  .MSR_PBCFG_VAR_INIT_ROM ROM_NOCOPY(.MSR_PBCFG_VAR_INIT) :> FblRomArea
  _MSR_PBCFG_VAR_INIT_ROM_START = ADDR(.MSR_PBCFG_VAR_INIT_ROM);
  __MSR_PBCFG_VAR_INIT_ROM_START = ADDR(.MSR_PBCFG_VAR_INIT_ROM);
  _MSR_PBCFG_VAR_INIT_ROM_LIMIT = ENDADDR(.MSR_PBCFG_VAR_INIT_ROM);
  __MSR_PBCFG_VAR_INIT_ROM_LIMIT = ENDADDR(.MSR_PBCFG_VAR_INIT_ROM);

  .MSR_PBCFG_VAR_INIT ALIGN(4) :
  {
    *(.MSR_PBCFG_VAR)
    *(.MSR_PBCFG_VAR_FAST)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _MSR_PBCFG_VAR_INIT_START = ADDR(.MSR_PBCFG_VAR_INIT);
  __MSR_PBCFG_VAR_INIT_START = ADDR(.MSR_PBCFG_VAR_INIT);
  _MSR_PBCFG_VAR_INIT_END = ENDADDR(.MSR_PBCFG_VAR_INIT) - 1;
  __MSR_PBCFG_VAR_INIT_END = ENDADDR(.MSR_PBCFG_VAR_INIT) - 1;
  _MSR_PBCFG_VAR_INIT_LIMIT = ENDADDR(.MSR_PBCFG_VAR_INIT);
  __MSR_PBCFG_VAR_INIT_LIMIT = ENDADDR(.MSR_PBCFG_VAR_INIT);

  .MSR_PBCFG_VAR_NO_INIT ALIGN(4) :
  {
    *(.MSR_PBCFG_VAR_FAST_NO_INIT)
    *(.MSR_PBCFG_VAR_NO_INIT)
  } > GLOBAL_RAM_A
  _MSR_PBCFG_VAR_NO_INIT_START = ADDR(.MSR_PBCFG_VAR_NO_INIT);
  __MSR_PBCFG_VAR_NO_INIT_START = ADDR(.MSR_PBCFG_VAR_NO_INIT);
  _MSR_PBCFG_VAR_NO_INIT_END = ENDADDR(.MSR_PBCFG_VAR_NO_INIT) - 1;
  __MSR_PBCFG_VAR_NO_INIT_END = ENDADDR(.MSR_PBCFG_VAR_NO_INIT) - 1;
  _MSR_PBCFG_VAR_NO_INIT_LIMIT = ENDADDR(.MSR_PBCFG_VAR_NO_INIT);
  __MSR_PBCFG_VAR_NO_INIT_LIMIT = ENDADDR(.MSR_PBCFG_VAR_NO_INIT);

  _MSR_PBCFG_VAR_ALL_START = _MSR_PBCFG_VAR_CLEARED_START;
  _MSR_PBCFG_VAR_ALL_END = _MSR_PBCFG_VAR_NO_INIT_END;
  _MSR_PBCFG_VAR_ALL_LIMIT = _MSR_PBCFG_VAR_NO_INIT_LIMIT;

  .MSR_VAR_CLEARED ALIGN(4) :
  {
    *(.MSR_VAR_CLEARED)
    *(.MSR_VAR_FAST_CLEARED)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _MSR_VAR_CLEARED_START = ADDR(.MSR_VAR_CLEARED);
  __MSR_VAR_CLEARED_START = ADDR(.MSR_VAR_CLEARED);
  _MSR_VAR_CLEARED_END = ENDADDR(.MSR_VAR_CLEARED) - 1;
  __MSR_VAR_CLEARED_END = ENDADDR(.MSR_VAR_CLEARED) - 1;
  _MSR_VAR_CLEARED_LIMIT = ENDADDR(.MSR_VAR_CLEARED);
  __MSR_VAR_CLEARED_LIMIT = ENDADDR(.MSR_VAR_CLEARED);

  .MSR_VAR_INIT_ROM ROM_NOCOPY(.MSR_VAR_INIT) :> FblRomArea
  _MSR_VAR_INIT_ROM_START = ADDR(.MSR_VAR_INIT_ROM);
  __MSR_VAR_INIT_ROM_START = ADDR(.MSR_VAR_INIT_ROM);
  _MSR_VAR_INIT_ROM_LIMIT = ENDADDR(.MSR_VAR_INIT_ROM);
  __MSR_VAR_INIT_ROM_LIMIT = ENDADDR(.MSR_VAR_INIT_ROM);

  .MSR_VAR_INIT ALIGN(4) :
  {
    *(.MSR_VAR_FAST_INIT)
    *(.MSR_VAR_INIT)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _MSR_VAR_INIT_START = ADDR(.MSR_VAR_INIT);
  __MSR_VAR_INIT_START = ADDR(.MSR_VAR_INIT);
  _MSR_VAR_INIT_END = ENDADDR(.MSR_VAR_INIT) - 1;
  __MSR_VAR_INIT_END = ENDADDR(.MSR_VAR_INIT) - 1;
  _MSR_VAR_INIT_LIMIT = ENDADDR(.MSR_VAR_INIT);
  __MSR_VAR_INIT_LIMIT = ENDADDR(.MSR_VAR_INIT);

  .MSR_VAR_NO_INIT ALIGN(4) :
  {
    *(.MSR_VAR_FAST_NO_INIT)
    *(.MSR_VAR_NO_INIT)
  } > GLOBAL_RAM_A
  _MSR_VAR_NO_INIT_START = ADDR(.MSR_VAR_NO_INIT);
  __MSR_VAR_NO_INIT_START = ADDR(.MSR_VAR_NO_INIT);
  _MSR_VAR_NO_INIT_END = ENDADDR(.MSR_VAR_NO_INIT) - 1;
  __MSR_VAR_NO_INIT_END = ENDADDR(.MSR_VAR_NO_INIT) - 1;
  _MSR_VAR_NO_INIT_LIMIT = ENDADDR(.MSR_VAR_NO_INIT);
  __MSR_VAR_NO_INIT_LIMIT = ENDADDR(.MSR_VAR_NO_INIT);

  .MSR_VAR_POWER_ON_CLEARED ALIGN(4) :
  {
    *(.MSR_VAR_FAST_POWER_ON_CLEARED)
    *(.MSR_VAR_POWER_ON_CLEARED)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _MSR_VAR_POWER_ON_CLEARED_START = ADDR(.MSR_VAR_POWER_ON_CLEARED);
  __MSR_VAR_POWER_ON_CLEARED_START = ADDR(.MSR_VAR_POWER_ON_CLEARED);
  _MSR_VAR_POWER_ON_CLEARED_END = ENDADDR(.MSR_VAR_POWER_ON_CLEARED) - 1;
  __MSR_VAR_POWER_ON_CLEARED_END = ENDADDR(.MSR_VAR_POWER_ON_CLEARED) - 1;
  _MSR_VAR_POWER_ON_CLEARED_LIMIT = ENDADDR(.MSR_VAR_POWER_ON_CLEARED);
  __MSR_VAR_POWER_ON_CLEARED_LIMIT = ENDADDR(.MSR_VAR_POWER_ON_CLEARED);

  .MSR_VAR_POWER_ON_INIT_ROM ROM_NOCOPY(.MSR_VAR_POWER_ON_INIT) :> FblRomArea
  _MSR_VAR_POWER_ON_INIT_ROM_START = ADDR(.MSR_VAR_POWER_ON_INIT_ROM);
  __MSR_VAR_POWER_ON_INIT_ROM_START = ADDR(.MSR_VAR_POWER_ON_INIT_ROM);
  _MSR_VAR_POWER_ON_INIT_ROM_LIMIT = ENDADDR(.MSR_VAR_POWER_ON_INIT_ROM);
  __MSR_VAR_POWER_ON_INIT_ROM_LIMIT = ENDADDR(.MSR_VAR_POWER_ON_INIT_ROM);

  .MSR_VAR_POWER_ON_INIT ALIGN(4) :
  {
    *(.MSR_VAR_FAST_POWER_ON_INIT)
    *(.MSR_VAR_POWER_ON_INIT)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _MSR_VAR_POWER_ON_INIT_START = ADDR(.MSR_VAR_POWER_ON_INIT);
  __MSR_VAR_POWER_ON_INIT_START = ADDR(.MSR_VAR_POWER_ON_INIT);
  _MSR_VAR_POWER_ON_INIT_END = ENDADDR(.MSR_VAR_POWER_ON_INIT) - 1;
  __MSR_VAR_POWER_ON_INIT_END = ENDADDR(.MSR_VAR_POWER_ON_INIT) - 1;
  _MSR_VAR_POWER_ON_INIT_LIMIT = ENDADDR(.MSR_VAR_POWER_ON_INIT);
  __MSR_VAR_POWER_ON_INIT_LIMIT = ENDADDR(.MSR_VAR_POWER_ON_INIT);

  _MSR_VAR_ALL_START = _MSR_VAR_CLEARED_START;
  _MSR_VAR_ALL_END = _MSR_VAR_POWER_ON_INIT_END;
  _MSR_VAR_ALL_LIMIT = _MSR_VAR_POWER_ON_INIT_LIMIT;

  .MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED ALIGN(4) :
  {
    *(.MSR_VAR_SAVED_ZONE_FAST_POWER_ON_CLEARED)
    *(.MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_START = ADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED);
  __MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_START = ADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED);
  _MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_END = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED) - 1;
  __MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_END = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED) - 1;
  _MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_LIMIT = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED);
  __MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_LIMIT = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED);

  .MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM ROM_NOCOPY(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT) :> FblRomArea
  _MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_START = ADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM);
  __MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_START = ADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM);
  _MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_LIMIT = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM);
  __MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM_LIMIT = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT_ROM);

  .MSR_VAR_SAVED_ZONE_POWER_ON_INIT ALIGN(4) :
  {
    *(.MSR_VAR_SAVED_ZONE_FAST_POWER_ON_INIT)
    *(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _MSR_VAR_SAVED_ZONE_POWER_ON_INIT_START = ADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT);
  __MSR_VAR_SAVED_ZONE_POWER_ON_INIT_START = ADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT);
  _MSR_VAR_SAVED_ZONE_POWER_ON_INIT_END = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT) - 1;
  __MSR_VAR_SAVED_ZONE_POWER_ON_INIT_END = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT) - 1;
  _MSR_VAR_SAVED_ZONE_POWER_ON_INIT_LIMIT = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT);
  __MSR_VAR_SAVED_ZONE_POWER_ON_INIT_LIMIT = ENDADDR(.MSR_VAR_SAVED_ZONE_POWER_ON_INIT);

  _MSR_VAR_SAVED_ZONE_ALL_START = _MSR_VAR_SAVED_ZONE_POWER_ON_CLEARED_START;
  _MSR_VAR_SAVED_ZONE_ALL_END = _MSR_VAR_SAVED_ZONE_POWER_ON_INIT_END;
  _MSR_VAR_SAVED_ZONE_ALL_LIMIT = _MSR_VAR_SAVED_ZONE_POWER_ON_INIT_LIMIT;

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

  brsStartupEntry = _Brs_ApplicationEntry;

  .Brs_ApplicationEntry ALIGN(4) :
  {
    *(.brsApplicationEntry)
  } > FblApplicationEntry
  _Brs_ApplicationEntry_START = ADDR(.Brs_ApplicationEntry);
  __Brs_ApplicationEntry_START = ADDR(.Brs_ApplicationEntry);
  _Brs_ApplicationEntry_END = ENDADDR(.Brs_ApplicationEntry) - 1;
  __Brs_ApplicationEntry_END = ENDADDR(.Brs_ApplicationEntry) - 1;
  _Brs_ApplicationEntry_LIMIT = ENDADDR(.Brs_ApplicationEntry);
  __Brs_ApplicationEntry_LIMIT = ENDADDR(.Brs_ApplicationEntry);

  _Brs_ApplicationEntry_ALL_START = _Brs_ApplicationEntry_START;
  _Brs_ApplicationEntry_ALL_END = _Brs_ApplicationEntry_END;
  _Brs_ApplicationEntry_ALL_LIMIT = _Brs_ApplicationEntry_LIMIT;

  .Brs_ExcVect ALIGN(4) :
  {
    *(.brsExcVect)
    *(.brsExcVectConst)
  } > CoreExceptions_FirstExecInst
  _Brs_ExcVect_START = ADDR(.Brs_ExcVect);
  __Brs_ExcVect_START = ADDR(.Brs_ExcVect);
  _Brs_ExcVect_END = ENDADDR(.Brs_ExcVect) - 1;
  __Brs_ExcVect_END = ENDADDR(.Brs_ExcVect) - 1;
  _Brs_ExcVect_LIMIT = ENDADDR(.Brs_ExcVect);
  __Brs_ExcVect_LIMIT = ENDADDR(.Brs_ExcVect);

  _Brs_ExcVect_ALL_START = _Brs_ExcVect_START;
  _Brs_ExcVect_ALL_END = _Brs_ExcVect_END;
  _Brs_ExcVect_ALL_LIMIT = _Brs_ExcVect_LIMIT;

  .RamCodeSection_ROM ROM_NOCOPY(.RamCodeSection) :> FblRomArea
  _RamCodeSection_ROM_START = ADDR(.RamCodeSection_ROM);
  __RamCodeSection_ROM_START = ADDR(.RamCodeSection_ROM);
  _RamCodeSection_ROM_LIMIT = ENDADDR(.RamCodeSection_ROM);
  __RamCodeSection_ROM_LIMIT = ENDADDR(.RamCodeSection_ROM);

  .RamCodeSection ALIGN(4) :
  {
    *(.RamCodeSection)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _RamCodeSection_START = ADDR(.RamCodeSection);
  __RamCodeSection_START = ADDR(.RamCodeSection);
  _RamCodeSection_END = ENDADDR(.RamCodeSection) - 1;
  __RamCodeSection_END = ENDADDR(.RamCodeSection) - 1;
  _RamCodeSection_LIMIT = ENDADDR(.RamCodeSection);
  __RamCodeSection_LIMIT = ENDADDR(.RamCodeSection);

  _FblUpd_RamCode_ALL_START = _RamCodeSection_START;
  _FblUpd_RamCode_ALL_END = _RamCodeSection_END;
  _FblUpd_RamCode_ALL_LIMIT = _RamCodeSection_LIMIT;

  .APPLVECT ALIGN(4) :
  {
    *(.ApplVectSection)
  } > ApplVect
  _APPLVECT_START = ADDR(.APPLVECT);
  __APPLVECT_START = ADDR(.APPLVECT);
  _APPLVECT_END = ENDADDR(.APPLVECT) - 1;
  __APPLVECT_END = ENDADDR(.APPLVECT) - 1;
  _APPLVECT_LIMIT = ENDADDR(.APPLVECT);
  __APPLVECT_LIMIT = ENDADDR(.APPLVECT);

  _Appl_ApplVect_ALL_START = _APPLVECT_START;
  _Appl_ApplVect_ALL_END = _APPLVECT_END;
  _Appl_ApplVect_ALL_LIMIT = _APPLVECT_LIMIT;

  RESETVECT = brsStartupEntry;
  _START = brsStartupEntry;
  Startup_Handler = brsStartupEntry;
  __usr_init = brsStartupEntry;

  .Brs_ExcVectRam_ROM ROM_NOCOPY(.Brs_ExcVectRam) :> FblRomArea
  _Brs_ExcVectRam_ROM_START = ADDR(.Brs_ExcVectRam_ROM);
  __Brs_ExcVectRam_ROM_START = ADDR(.Brs_ExcVectRam_ROM);
  _Brs_ExcVectRam_ROM_LIMIT = ENDADDR(.Brs_ExcVectRam_ROM);
  __Brs_ExcVectRam_ROM_LIMIT = ENDADDR(.Brs_ExcVectRam_ROM);

  .Brs_ExcVectRam ALIGN(4) :
  {
    *(.brsExcVectRam)
    *(.brsExcVectRamConst)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _Brs_ExcVectRam_START = ADDR(.Brs_ExcVectRam);
  __Brs_ExcVectRam_START = ADDR(.Brs_ExcVectRam);
  _Brs_ExcVectRam_END = ENDADDR(.Brs_ExcVectRam) - 1;
  __Brs_ExcVectRam_END = ENDADDR(.Brs_ExcVectRam) - 1;
  _Brs_ExcVectRam_LIMIT = ENDADDR(.Brs_ExcVectRam);
  __Brs_ExcVectRam_LIMIT = ENDADDR(.Brs_ExcVectRam);

  _Brs_ExcVectRam_ALL_START = _Brs_ExcVectRam_START;
  _Brs_ExcVectRam_ALL_END = _Brs_ExcVectRam_END;
  _Brs_ExcVectRam_ALL_LIMIT = _Brs_ExcVectRam_LIMIT;

  .Brs_Shared_Var ALIGN(4) :
  {
    *(.brsSharedVar)
  } > Variables_Shared
  _Brs_Shared_Var_START = ADDR(.Brs_Shared_Var);
  __Brs_Shared_Var_START = ADDR(.Brs_Shared_Var);
  _Brs_Shared_Var_END = ENDADDR(.Brs_Shared_Var) - 1;
  __Brs_Shared_Var_END = ENDADDR(.Brs_Shared_Var) - 1;
  _Brs_Shared_Var_LIMIT = ENDADDR(.Brs_Shared_Var);
  __Brs_Shared_Var_LIMIT = ENDADDR(.Brs_Shared_Var);

  _Brs_Shared_Var_ALL_START = _Brs_Shared_Var_START;
  _Brs_Shared_Var_ALL_END = _Brs_Shared_Var_END;
  _Brs_Shared_Var_ALL_LIMIT = _Brs_Shared_Var_LIMIT;

  .MSR_CODE ALIGN(4) :
  {
    *(.MSR_CODE)
  } > FblRomArea
  _MSR_CODE_START = ADDR(.MSR_CODE);
  __MSR_CODE_START = ADDR(.MSR_CODE);
  _MSR_CODE_END = ENDADDR(.MSR_CODE) - 1;
  __MSR_CODE_END = ENDADDR(.MSR_CODE) - 1;
  _MSR_CODE_LIMIT = ENDADDR(.MSR_CODE);
  __MSR_CODE_LIMIT = ENDADDR(.MSR_CODE);

  _MSR_CODE_ALL_START = _MSR_CODE_START;
  _MSR_CODE_ALL_END = _MSR_CODE_END;
  _MSR_CODE_ALL_LIMIT = _MSR_CODE_LIMIT;

  .MSR_CONST ALIGN(4) :
  {
    *(.MSR_CONST)
    *(.MSR_CONST_FAST)
  } > FblRomArea
  _MSR_CONST_START = ADDR(.MSR_CONST);
  __MSR_CONST_START = ADDR(.MSR_CONST);
  _MSR_CONST_END = ENDADDR(.MSR_CONST) - 1;
  __MSR_CONST_END = ENDADDR(.MSR_CONST) - 1;
  _MSR_CONST_LIMIT = ENDADDR(.MSR_CONST);
  __MSR_CONST_LIMIT = ENDADDR(.MSR_CONST);

  _MSR_CONST_ALL_START = _MSR_CONST_START;
  _MSR_CONST_ALL_END = _MSR_CONST_END;
  _MSR_CONST_ALL_LIMIT = _MSR_CONST_LIMIT;

  .MSR_PBCFG_CONST ALIGN(4) :
  {
    *(.MSR_PBCFG_CONST)
    *(.MSR_PBCFG_CONST_FAST)
  } > FblRomArea
  _MSR_PBCFG_CONST_START = ADDR(.MSR_PBCFG_CONST);
  __MSR_PBCFG_CONST_START = ADDR(.MSR_PBCFG_CONST);
  _MSR_PBCFG_CONST_END = ENDADDR(.MSR_PBCFG_CONST) - 1;
  __MSR_PBCFG_CONST_END = ENDADDR(.MSR_PBCFG_CONST) - 1;
  _MSR_PBCFG_CONST_LIMIT = ENDADDR(.MSR_PBCFG_CONST);
  __MSR_PBCFG_CONST_LIMIT = ENDADDR(.MSR_PBCFG_CONST);

  _MSR_PBCFG_CONST_ALL_START = _MSR_PBCFG_CONST_START;
  _MSR_PBCFG_CONST_ALL_END = _MSR_PBCFG_CONST_END;
  _MSR_PBCFG_CONST_ALL_LIMIT = _MSR_PBCFG_CONST_LIMIT;

  .STACK_C0 ALIGN(4) :
  {
    . += 1024;
    . = ALIGN(4);
  } > StartupStack_Shared
  _STACK_C0_START = ADDR(.STACK_C0);
  __STACK_C0_START = ADDR(.STACK_C0);
  _STACK_C0_END = ENDADDR(.STACK_C0) - 1;
  __STACK_C0_END = ENDADDR(.STACK_C0) - 1;
  _STACK_C0_LIMIT = ENDADDR(.STACK_C0);
  __STACK_C0_LIMIT = ENDADDR(.STACK_C0);

  _STACK_C0_ALL_START = _STACK_C0_START;
  _STACK_C0_ALL_END = _STACK_C0_END;
  _STACK_C0_ALL_LIMIT = _STACK_C0_LIMIT;

  _RESET_CORE0 = brsStartupEntry;
  _RESET_CORE1 = brsStartupEntry;

  .rodata ALIGN(4) :
  {
    *(.rodata)
  } > FblRomArea
  _rodata_START = ADDR(.rodata);
  __rodata_START = ADDR(.rodata);
  _rodata_END = ENDADDR(.rodata) - 1;
  __rodata_END = ENDADDR(.rodata) - 1;
  _rodata_LIMIT = ENDADDR(.rodata);
  __rodata_LIMIT = ENDADDR(.rodata);

  .rosdata ALIGN(4) :
  {
    *(.ldata)
    *(.rosdata)
  } > FblRomArea
  _rosdata_START = ADDR(.rosdata);
  __rosdata_START = ADDR(.rosdata);
  _rosdata_END = ENDADDR(.rosdata) - 1;
  __rosdata_END = ENDADDR(.rosdata) - 1;
  _rosdata_LIMIT = ENDADDR(.rosdata);
  __rosdata_LIMIT = ENDADDR(.rosdata);

  .rozdata ALIGN(4) :
  {
    *(.rozdata)
    *(.zrodata)
  } > FblRomArea
  _rozdata_START = ADDR(.rozdata);
  __rozdata_START = ADDR(.rozdata);
  _rozdata_END = ENDADDR(.rozdata) - 1;
  __rozdata_END = ENDADDR(.rozdata) - 1;
  _rozdata_LIMIT = ENDADDR(.rozdata);
  __rozdata_LIMIT = ENDADDR(.rozdata);

  .sdata2 ALIGN(4) :
  {
    *(.sdata2)
  } > FblRomArea
  _sdata2_START = ADDR(.sdata2);
  __sdata2_START = ADDR(.sdata2);
  _sdata2_END = ENDADDR(.sdata2) - 1;
  __sdata2_END = ENDADDR(.sdata2) - 1;
  _sdata2_LIMIT = ENDADDR(.sdata2);
  __sdata2_LIMIT = ENDADDR(.sdata2);

  .secinfo ALIGN(4) :
  {
    *(.secinfo)
  } > FblRomArea
  _secinfo_START = ADDR(.secinfo);
  __secinfo_START = ADDR(.secinfo);
  _secinfo_END = ENDADDR(.secinfo) - 1;
  __secinfo_END = ENDADDR(.secinfo) - 1;
  _secinfo_LIMIT = ENDADDR(.secinfo);
  __secinfo_LIMIT = ENDADDR(.secinfo);

  .tdata ALIGN(4) :
  {
    *(.tdata)
  } > FblRomArea
  _tdata_START = ADDR(.tdata);
  __tdata_START = ADDR(.tdata);
  _tdata_END = ENDADDR(.tdata) - 1;
  __tdata_END = ENDADDR(.tdata) - 1;
  _tdata_LIMIT = ENDADDR(.tdata);
  __tdata_LIMIT = ENDADDR(.tdata);

  .text ALIGN(4) :
  {
    *(.fixaddr)
    *(.fixtype)
    *(.picbase)
    *(.pidbase)
    *(.syscall)
    *(.text)
    *(.vletext)
  } > FblRomArea
  _text_START = ADDR(.text);
  __text_START = ADDR(.text);
  _text_END = ENDADDR(.text) - 1;
  __text_END = ENDADDR(.text) - 1;
  _text_LIMIT = ENDADDR(.text);
  __text_LIMIT = ENDADDR(.text);

  _Const_Default_ALL_START = _rodata_START;
  _Const_Default_ALL_END = _text_END;
  _Const_Default_ALL_LIMIT = _text_LIMIT;

  .bss ALIGN(4) CLEAR :
  {
    *(.bss)
    *(COMMON)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _bss_START = ADDR(.bss);
  __bss_START = ADDR(.bss);
  _bss_END = ENDADDR(.bss) - 1;
  __bss_END = ENDADDR(.bss) - 1;
  _bss_LIMIT = ENDADDR(.bss);
  __bss_LIMIT = ENDADDR(.bss);

  .data_ROM ROM_NOCOPY(.data) :> FblRomArea
  _data_ROM_START = ADDR(.data_ROM);
  __data_ROM_START = ADDR(.data_ROM);
  _data_ROM_LIMIT = ENDADDR(.data_ROM);
  __data_ROM_LIMIT = ENDADDR(.data_ROM);

  .data ALIGN(4) :
  {
    *(.data)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _data_START = ADDR(.data);
  __data_START = ADDR(.data);
  _data_END = ENDADDR(.data) - 1;
  __data_END = ENDADDR(.data) - 1;
  _data_LIMIT = ENDADDR(.data);
  __data_LIMIT = ENDADDR(.data);

  .heap ALIGN(16) NOCLEAR :
  {
    . += 1024;
  } > GLOBAL_RAM_A
  _heap_START = ADDR(.heap);
  __heap_START = ADDR(.heap);
  _heap_END = ENDADDR(.heap) - 1;
  __heap_END = ENDADDR(.heap) - 1;
  _heap_LIMIT = ENDADDR(.heap);
  __heap_LIMIT = ENDADDR(.heap);

  .sbss ALIGN(4) CLEAR :
  {
    *(.sbss)
    *(SMALLCOMMON)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _sbss_START = ADDR(.sbss);
  __sbss_START = ADDR(.sbss);
  _sbss_END = ENDADDR(.sbss) - 1;
  __sbss_END = ENDADDR(.sbss) - 1;
  _sbss_LIMIT = ENDADDR(.sbss);
  __sbss_LIMIT = ENDADDR(.sbss);

  .sdabase ALIGN(4) :
  {
    *(.sdabase)
  } > GLOBAL_RAM_A
  _sdabase_START = ADDR(.sdabase);
  __sdabase_START = ADDR(.sdabase);
  _sdabase_END = ENDADDR(.sdabase) - 1;
  __sdabase_END = ENDADDR(.sdabase) - 1;
  _sdabase_LIMIT = ENDADDR(.sdabase);
  __sdabase_LIMIT = ENDADDR(.sdabase);

  .sdata_ROM ROM_NOCOPY(.sdata) :> FblRomArea
  _sdata_ROM_START = ADDR(.sdata_ROM);
  __sdata_ROM_START = ADDR(.sdata_ROM);
  _sdata_ROM_LIMIT = ENDADDR(.sdata_ROM);
  __sdata_ROM_LIMIT = ENDADDR(.sdata_ROM);

  .sdata ALIGN(4) :
  {
    *(.sdata)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _sdata_START = ADDR(.sdata);
  __sdata_START = ADDR(.sdata);
  _sdata_END = ENDADDR(.sdata) - 1;
  __sdata_END = ENDADDR(.sdata) - 1;
  _sdata_LIMIT = ENDADDR(.sdata);
  __sdata_LIMIT = ENDADDR(.sdata);

  .stack ALIGN(4) :
  {
    *(.stack)
  } > GLOBAL_RAM_A
  _stack_START = ADDR(.stack);
  __stack_START = ADDR(.stack);
  _stack_END = ENDADDR(.stack) - 1;
  __stack_END = ENDADDR(.stack) - 1;
  _stack_LIMIT = ENDADDR(.stack);
  __stack_LIMIT = ENDADDR(.stack);

  .zbss ALIGN(4) CLEAR :
  {
    *(.PPC.EMB.sbss0)
    *(.zbss)
    *(ZEROCOMMON)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _zbss_START = ADDR(.zbss);
  __zbss_START = ADDR(.zbss);
  _zbss_END = ENDADDR(.zbss) - 1;
  __zbss_END = ENDADDR(.zbss) - 1;
  _zbss_LIMIT = ENDADDR(.zbss);
  __zbss_LIMIT = ENDADDR(.zbss);

  .zdata_ROM ROM_NOCOPY(.zdata) :> FblRomArea
  _zdata_ROM_START = ADDR(.zdata_ROM);
  __zdata_ROM_START = ADDR(.zdata_ROM);
  _zdata_ROM_LIMIT = ENDADDR(.zdata_ROM);
  __zdata_ROM_LIMIT = ENDADDR(.zdata_ROM);

  .zdata ALIGN(4) :
  {
    *(.PPC.EMB.sdata0)
    *(.zdata)
    . = ALIGN(4);
  } > GLOBAL_RAM_A
  _zdata_START = ADDR(.zdata);
  __zdata_START = ADDR(.zdata);
  _zdata_END = ENDADDR(.zdata) - 1;
  __zdata_END = ENDADDR(.zdata) - 1;
  _zdata_LIMIT = ENDADDR(.zdata);
  __zdata_LIMIT = ENDADDR(.zdata);

  _Data_Default_ALL_START = _bss_START;
  _Data_Default_ALL_END = _zdata_END;
  _Data_Default_ALL_LIMIT = _zdata_LIMIT;

}


