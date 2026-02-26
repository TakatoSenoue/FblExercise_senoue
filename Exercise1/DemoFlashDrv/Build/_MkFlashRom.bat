:: Create flash driver C image
@echo off
if "%1" == "" goto usage

@echo [C_EXPORT]                                                                          >  %~dp0\%~n1.ini
@echo Decryption=1         ;  0=Off,  1=On                                                >> %~dp0\%~n1.ini
@echo Decryptvalue=0xCC    ; Value for encryption using XOR with each uchar/ushort/ulong  >> %~dp0\%~n1.ini
@echo Prefix=flashDrv                                                                     >> %~dp0\%~n1.ini
@echo WordSize=0           ; 0=uchar, 1=ushort, 2=ulong                                   >> %~dp0\%~n1.ini
@echo WordType=0           ; 0=Intel, 1=Motorola (only used if wordsize > 0).             >> %~dp0\%~n1.ini
@echo CreateStruct=0       ; 0=HIS driver, 1=Create structure list for vMem driver        >> %~dp0\%~n1.ini

call %~dp0..\..\ScriptHelper.bat

%~dp0%HexViewExecutable% %1 /s /FA /FP00 -e:%~n1_err.log /XC -o %~dp0..\FlashRom.c
goto end

:usage
echo "Please call with a hex file as parameter."
pause

:end
if exist %local_dir%\error.txt del %local_dir%\error.txt
