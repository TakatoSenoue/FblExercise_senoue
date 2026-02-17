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
  .FlashDrvHeaderSectionGroup ALIGN(4) :
  {
    *(.FlashDrvHeaderSection)
  } > FlashDrvArea
  _FlashDrvHeaderSectionGroup_START = ADDR(.FlashDrvHeaderSectionGroup);
  __FlashDrvHeaderSectionGroup_START = ADDR(.FlashDrvHeaderSectionGroup);
  _FlashDrvHeaderSectionGroup_END = ENDADDR(.FlashDrvHeaderSectionGroup) - 1;
  __FlashDrvHeaderSectionGroup_END = ENDADDR(.FlashDrvHeaderSectionGroup) - 1;
  _FlashDrvHeaderSectionGroup_LIMIT = ENDADDR(.FlashDrvHeaderSectionGroup);
  __FlashDrvHeaderSectionGroup_LIMIT = ENDADDR(.FlashDrvHeaderSectionGroup);

  _FlashDrv_Header_ALL_START = _FlashDrvHeaderSectionGroup_START;
  _FlashDrv_Header_ALL_END = _FlashDrvHeaderSectionGroup_END;
  _FlashDrv_Header_ALL_LIMIT = _FlashDrvHeaderSectionGroup_LIMIT;

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

  brsStartupEntry = 0;

  _RESET_CORE0 = brsStartupEntry;
  _RESET_CORE1 = brsStartupEntry;

  .R_FCL_DATA ALIGN(4) :
  {
    *(.R_FCL_DATA)
  } > FlashDrvArea
  _R_FCL_DATA_START = ADDR(.R_FCL_DATA);
  __R_FCL_DATA_START = ADDR(.R_FCL_DATA);
  _R_FCL_DATA_END = ENDADDR(.R_FCL_DATA) - 1;
  __R_FCL_DATA_END = ENDADDR(.R_FCL_DATA) - 1;
  _R_FCL_DATA_LIMIT = ENDADDR(.R_FCL_DATA);
  __R_FCL_DATA_LIMIT = ENDADDR(.R_FCL_DATA);

  .bss ALIGN(4) :
  {
    *(.bss)
    *(COMMON)
  } > FlashDrvArea
  _bss_START = ADDR(.bss);
  __bss_START = ADDR(.bss);
  _bss_END = ENDADDR(.bss) - 1;
  __bss_END = ENDADDR(.bss) - 1;
  _bss_LIMIT = ENDADDR(.bss);
  __bss_LIMIT = ENDADDR(.bss);

  .data ALIGN(4) :
  {
    *(.data)
  } > FlashDrvArea
  _data_START = ADDR(.data);
  __data_START = ADDR(.data);
  _data_END = ENDADDR(.data) - 1;
  __data_END = ENDADDR(.data) - 1;
  _data_LIMIT = ENDADDR(.data);
  __data_LIMIT = ENDADDR(.data);

  .sbss ALIGN(4) :
  {
    *(.sbss)
    *(SMALLCOMMON)
  } > FlashDrvArea
  _sbss_START = ADDR(.sbss);
  __sbss_START = ADDR(.sbss);
  _sbss_END = ENDADDR(.sbss) - 1;
  __sbss_END = ENDADDR(.sbss) - 1;
  _sbss_LIMIT = ENDADDR(.sbss);
  __sbss_LIMIT = ENDADDR(.sbss);

  .sdabase ALIGN(4) :
  {
    *(.sdabase)
  } > FlashDrvArea
  _sdabase_START = ADDR(.sdabase);
  __sdabase_START = ADDR(.sdabase);
  _sdabase_END = ENDADDR(.sdabase) - 1;
  __sdabase_END = ENDADDR(.sdabase) - 1;
  _sdabase_LIMIT = ENDADDR(.sdabase);
  __sdabase_LIMIT = ENDADDR(.sdabase);

  .sdata ALIGN(4) :
  {
    *(.sdata)
  } > FlashDrvArea
  _sdata_START = ADDR(.sdata);
  __sdata_START = ADDR(.sdata);
  _sdata_END = ENDADDR(.sdata) - 1;
  __sdata_END = ENDADDR(.sdata) - 1;
  _sdata_LIMIT = ENDADDR(.sdata);
  __sdata_LIMIT = ENDADDR(.sdata);

  .stack ALIGN(4) :
  {
    *(.stack)
  } > FlashDrvArea
  _stack_START = ADDR(.stack);
  __stack_START = ADDR(.stack);
  _stack_END = ENDADDR(.stack) - 1;
  __stack_END = ENDADDR(.stack) - 1;
  _stack_LIMIT = ENDADDR(.stack);
  __stack_LIMIT = ENDADDR(.stack);

  .zbss ALIGN(4) :
  {
    *(.PPC.EMB.sbss0)
    *(.zbss)
    *(ZEROCOMMON)
  } > FlashDrvArea
  _zbss_START = ADDR(.zbss);
  __zbss_START = ADDR(.zbss);
  _zbss_END = ENDADDR(.zbss) - 1;
  __zbss_END = ENDADDR(.zbss) - 1;
  _zbss_LIMIT = ENDADDR(.zbss);
  __zbss_LIMIT = ENDADDR(.zbss);

  .zdata ALIGN(4) :
  {
    *(.PPC.EMB.sdata0)
    *(.zdata)
  } > FlashDrvArea
  _zdata_START = ADDR(.zdata);
  __zdata_START = ADDR(.zdata);
  _zdata_END = ENDADDR(.zdata) - 1;
  __zdata_END = ENDADDR(.zdata) - 1;
  _zdata_LIMIT = ENDADDR(.zdata);
  __zdata_LIMIT = ENDADDR(.zdata);

  _FlashDrv_Data_ALL_START = _R_FCL_DATA_START;
  _FlashDrv_Data_ALL_END = _zdata_END;
  _FlashDrv_Data_ALL_LIMIT = _zdata_LIMIT;

  .R_FCL_CODE_RAM ALIGN(4) :
  {
    . = ALIGN(4);
    *(.R_FCL_CODE_RAM)
  } > FlashDrvArea
  _R_FCL_CODE_RAM_START = ADDR(.R_FCL_CODE_RAM);
  __R_FCL_CODE_RAM_START = ADDR(.R_FCL_CODE_RAM);
  _R_FCL_CODE_RAM_END = ENDADDR(.R_FCL_CODE_RAM) - 1;
  __R_FCL_CODE_RAM_END = ENDADDR(.R_FCL_CODE_RAM) - 1;
  _R_FCL_CODE_RAM_LIMIT = ENDADDR(.R_FCL_CODE_RAM);
  __R_FCL_CODE_RAM_LIMIT = ENDADDR(.R_FCL_CODE_RAM);

  .R_FCL_CODE_RAM_EX_PROT ALIGN(4) :
  {
    *(.R_FCL_CODE_RAM_EX_PROT)
  } > FlashDrvArea
  _R_FCL_CODE_RAM_EX_PROT_START = ADDR(.R_FCL_CODE_RAM_EX_PROT);
  __R_FCL_CODE_RAM_EX_PROT_START = ADDR(.R_FCL_CODE_RAM_EX_PROT);
  _R_FCL_CODE_RAM_EX_PROT_END = ENDADDR(.R_FCL_CODE_RAM_EX_PROT) - 1;
  __R_FCL_CODE_RAM_EX_PROT_END = ENDADDR(.R_FCL_CODE_RAM_EX_PROT) - 1;
  _R_FCL_CODE_RAM_EX_PROT_LIMIT = ENDADDR(.R_FCL_CODE_RAM_EX_PROT);
  __R_FCL_CODE_RAM_EX_PROT_LIMIT = ENDADDR(.R_FCL_CODE_RAM_EX_PROT);

  .R_FCL_CODE_ROM ALIGN(4) :
  {
    *(.R_FCL_CODE_ROM)
  } > FlashDrvArea
  _R_FCL_CODE_ROM_START = ADDR(.R_FCL_CODE_ROM);
  __R_FCL_CODE_ROM_START = ADDR(.R_FCL_CODE_ROM);
  _R_FCL_CODE_ROM_END = ENDADDR(.R_FCL_CODE_ROM) - 1;
  __R_FCL_CODE_ROM_END = ENDADDR(.R_FCL_CODE_ROM) - 1;
  _R_FCL_CODE_ROM_LIMIT = ENDADDR(.R_FCL_CODE_ROM);
  __R_FCL_CODE_ROM_LIMIT = ENDADDR(.R_FCL_CODE_ROM);

  .R_FCL_CODE_ROMRAM ALIGN(4) :
  {
    *(.R_FCL_CODE_ROMRAM)
  } > FlashDrvArea
  _R_FCL_CODE_ROMRAM_START = ADDR(.R_FCL_CODE_ROMRAM);
  __R_FCL_CODE_ROMRAM_START = ADDR(.R_FCL_CODE_ROMRAM);
  _R_FCL_CODE_ROMRAM_END = ENDADDR(.R_FCL_CODE_ROMRAM) - 1;
  __R_FCL_CODE_ROMRAM_END = ENDADDR(.R_FCL_CODE_ROMRAM) - 1;
  _R_FCL_CODE_ROMRAM_LIMIT = ENDADDR(.R_FCL_CODE_ROMRAM);
  __R_FCL_CODE_ROMRAM_LIMIT = ENDADDR(.R_FCL_CODE_ROMRAM);

  .R_FCL_CODE_USR ALIGN(4) :
  {
    *(.R_FCL_CODE_USR)
  } > FlashDrvArea
  _R_FCL_CODE_USR_START = ADDR(.R_FCL_CODE_USR);
  __R_FCL_CODE_USR_START = ADDR(.R_FCL_CODE_USR);
  _R_FCL_CODE_USR_END = ENDADDR(.R_FCL_CODE_USR) - 1;
  __R_FCL_CODE_USR_END = ENDADDR(.R_FCL_CODE_USR) - 1;
  _R_FCL_CODE_USR_LIMIT = ENDADDR(.R_FCL_CODE_USR);
  __R_FCL_CODE_USR_LIMIT = ENDADDR(.R_FCL_CODE_USR);

  .R_FCL_CODE_USRINT ALIGN(4) :
  {
    *(.R_FCL_CODE_USRINT)
  } > FlashDrvArea
  _R_FCL_CODE_USRINT_START = ADDR(.R_FCL_CODE_USRINT);
  __R_FCL_CODE_USRINT_START = ADDR(.R_FCL_CODE_USRINT);
  _R_FCL_CODE_USRINT_END = ENDADDR(.R_FCL_CODE_USRINT) - 1;
  __R_FCL_CODE_USRINT_END = ENDADDR(.R_FCL_CODE_USRINT) - 1;
  _R_FCL_CODE_USRINT_LIMIT = ENDADDR(.R_FCL_CODE_USRINT);
  __R_FCL_CODE_USRINT_LIMIT = ENDADDR(.R_FCL_CODE_USRINT);

  .R_FCL_CONST ALIGN(4) :
  {
    *(.R_FCL_CONST)
  } > FlashDrvArea
  _R_FCL_CONST_START = ADDR(.R_FCL_CONST);
  __R_FCL_CONST_START = ADDR(.R_FCL_CONST);
  _R_FCL_CONST_END = ENDADDR(.R_FCL_CONST) - 1;
  __R_FCL_CONST_END = ENDADDR(.R_FCL_CONST) - 1;
  _R_FCL_CONST_LIMIT = ENDADDR(.R_FCL_CONST);
  __R_FCL_CONST_LIMIT = ENDADDR(.R_FCL_CONST);

  .FlashDrv_RamCodeSection ALIGN(4) :
  {
    *(.RamCodeSection)
  } > FlashDrvArea
  _FlashDrv_RamCodeSection_START = ADDR(.FlashDrv_RamCodeSection);
  __FlashDrv_RamCodeSection_START = ADDR(.FlashDrv_RamCodeSection);
  _FlashDrv_RamCodeSection_END = ENDADDR(.FlashDrv_RamCodeSection) - 1;
  __FlashDrv_RamCodeSection_END = ENDADDR(.FlashDrv_RamCodeSection) - 1;
  _FlashDrv_RamCodeSection_LIMIT = ENDADDR(.FlashDrv_RamCodeSection);
  __FlashDrv_RamCodeSection_LIMIT = ENDADDR(.FlashDrv_RamCodeSection);

  .FlashDrv_RamConstSection ALIGN(4) :
  {
    *(.RamConstSection)
  } > FlashDrvArea
  _FlashDrv_RamConstSection_START = ADDR(.FlashDrv_RamConstSection);
  __FlashDrv_RamConstSection_START = ADDR(.FlashDrv_RamConstSection);
  _FlashDrv_RamConstSection_END = ENDADDR(.FlashDrv_RamConstSection) - 1;
  __FlashDrv_RamConstSection_END = ENDADDR(.FlashDrv_RamConstSection) - 1;
  _FlashDrv_RamConstSection_LIMIT = ENDADDR(.FlashDrv_RamConstSection);
  __FlashDrv_RamConstSection_LIMIT = ENDADDR(.FlashDrv_RamConstSection);

  .rodata ALIGN(4) :
  {
    *(.rodata)
  } > FlashDrvArea
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
  } > FlashDrvArea
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
  } > FlashDrvArea
  _rozdata_START = ADDR(.rozdata);
  __rozdata_START = ADDR(.rozdata);
  _rozdata_END = ENDADDR(.rozdata) - 1;
  __rozdata_END = ENDADDR(.rozdata) - 1;
  _rozdata_LIMIT = ENDADDR(.rozdata);
  __rozdata_LIMIT = ENDADDR(.rozdata);

  .sdata2 ALIGN(4) :
  {
    *(.sdata2)
  } > FlashDrvArea
  _sdata2_START = ADDR(.sdata2);
  __sdata2_START = ADDR(.sdata2);
  _sdata2_END = ENDADDR(.sdata2) - 1;
  __sdata2_END = ENDADDR(.sdata2) - 1;
  _sdata2_LIMIT = ENDADDR(.sdata2);
  __sdata2_LIMIT = ENDADDR(.sdata2);

  .secinfo ALIGN(4) :
  {
    *(.secinfo)
  } > FlashDrvArea
  _secinfo_START = ADDR(.secinfo);
  __secinfo_START = ADDR(.secinfo);
  _secinfo_END = ENDADDR(.secinfo) - 1;
  __secinfo_END = ENDADDR(.secinfo) - 1;
  _secinfo_LIMIT = ENDADDR(.secinfo);
  __secinfo_LIMIT = ENDADDR(.secinfo);

  .tdata ALIGN(4) :
  {
    *(.tdata)
  } > FlashDrvArea
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
  } > FlashDrvArea
  _text_START = ADDR(.text);
  __text_START = ADDR(.text);
  _text_END = ENDADDR(.text) - 1;
  __text_END = ENDADDR(.text) - 1;
  _text_LIMIT = ENDADDR(.text);
  __text_LIMIT = ENDADDR(.text);

  _FlashDrv_CodeConst_ALL_START = _R_FCL_CODE_RAM_START;
  _FlashDrv_CodeConst_ALL_END = _text_END;
  _FlashDrv_CodeConst_ALL_LIMIT = _text_LIMIT;

  .FlashDrvFooterSectionGroup ALIGN(4) :
  {
    *(.FlashDrvFooterSection)
  } > FlashDrvArea
  _FlashDrvFooterSectionGroup_START = ADDR(.FlashDrvFooterSectionGroup);
  __FlashDrvFooterSectionGroup_START = ADDR(.FlashDrvFooterSectionGroup);
  _FlashDrvFooterSectionGroup_END = ENDADDR(.FlashDrvFooterSectionGroup) - 1;
  __FlashDrvFooterSectionGroup_END = ENDADDR(.FlashDrvFooterSectionGroup) - 1;
  _FlashDrvFooterSectionGroup_LIMIT = ENDADDR(.FlashDrvFooterSectionGroup);
  __FlashDrvFooterSectionGroup_LIMIT = ENDADDR(.FlashDrvFooterSectionGroup);

  _FlashDrv_Footer_ALL_START = _FlashDrvFooterSectionGroup_START;
  _FlashDrv_Footer_ALL_END = _FlashDrvFooterSectionGroup_END;
  _FlashDrv_Footer_ALL_LIMIT = _FlashDrvFooterSectionGroup_LIMIT;

}


