@echo off

:: ----------------------------------------------------------------------------

:: Check for input
if "%1" == "" goto error
if not exist %1 goto error
if "%2" == "" goto error
if "%3" == "" goto error

:: Handle operation mode
if "%4" == "aes" goto hexviewEnc
if "%4" == "merge" goto hexviewMerge

call %~d0%~p0..\..\ScriptHelper.bat

:: ----------------------------------------------------------------------------

:: Begin of configuration options

:: Working directory
set workDrive=%~d0
set work=%~d0%~p0
:: Path for temporary files
set temp=%work%temp\

:: HexView executable
set hexview=%work%%HexViewExecutable%

:: End of configuration options

:: ----------------------------------------------------------------------------

:: Deconstruct input file path
set filePath=%~d1%~p1
set fileName=%~n1
set fileExt=%~x1

echo Processing %fileName%%fileExt%

:: ----------------------------------------------------------------------------

:: Set file names
set origIn=%fileName%

set encIn=%origIn%
set encOut=%encIn%_aes

set procOut=%encOut%

:: ----------------------------------------------------------------------------

:: Create temporary directory
if not exist %temp% (
   echo Create temporary directory
   mkdir %temp%
)

:: Clean temporary directory
del /q %temp%*.*

:: Change working directory
%workDrive%
cd %work%

:: Clean output file
if exist %work%%procOut%%fileExt% (
   del %work%%procOut%%fileExt%
)

:: Copy input to temporary directory
copy %filePath%%origIn%%fileExt% %temp%%origIn%%fileExt%

:: ----------------------------------------------------------------------------

:hexviewProcess

:: Convert individual segments to binary temp files
echo Split segments...
%hexview% %temp%%encIn%%fileExt% /S /xsb /E:error.txt /O:%temp%%encIn%.bin

:: Loop segments
for %%f in (%temp%%encIn%_*.bin) do (
   call %0 %%f %2 %3 aes
   call %0 %%f %2 %3 merge
)

:: Copy output file
if "%work%%procOut%%fileExt%" neq "%filePath%%origIn%%fileExt%" (
   copy %temp%%procOut%%fileExt% %work%%procOut%%fileExt%
)

goto end

:: ----------------------------------------------------------------------------

:hexviewEnc

echo Encrypt segment...

:: Deconstruct segment file path
set segPath=%~d1%~p1
set segName=%~n1
set segExt=%~x1

:: Encrypt segment
%hexview% %segPath%%segName%%segExt%  /s /xn /e:error.txt -dp11:%2;PKCS7#IV=%3 /o %segPath%%segName%_aesnoniv.bin
:: Prepend IV
%hexview% /MT:%segPath%%segName%_aesnoniv.bin;0x10 /s /xn /e:error.txt /FP:%3 /FR:0,16 /o %segPath%%segName%_aes.bin

goto end

:: ----------------------------------------------------------------------------

:hexviewMerge

set mergePath=%~d1%~p1
set mergeName=%~n1
set mergeExt=%~x1

call set mergeAddr=%%mergeName:%encIn%_=%%
echo Merging segment at 0x%mergeAddr%

IF exist %temp%%encOut%%fileExt% (
   %hexview% %temp%%encOut%%fileExt% /MO:%mergePath%%mergeName%_aes%mergeExt%;0x%mergeAddr% /S /xs /E:error.txt /O:%temp%%encOut%%fileExt%
) ELSE (
   %hexview% /MO:%mergePath%%mergeName%_aes%mergeExt%;0x%mergeAddr% /S /xs /E:error.txt /O:%temp%%encOut%%fileExt%
)

goto end

:: ----------------------------------------------------------------------------

:error
echo Unable to open input file (%1)!

:: ----------------------------------------------------------------------------

:end
