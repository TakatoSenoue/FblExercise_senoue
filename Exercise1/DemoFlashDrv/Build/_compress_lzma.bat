:: Compress the segments of a file using LZMA compression
@echo off

set PROGRAMERR=0

echo Compress file using LZMA
echo ========================
echo Input file         : %1
echo Path to HexView    : %2
echo Path to LZMA       : %3
echo Optimization level : %4
echo Dictionary size    : %5

:: Create local variables
set workDrive=%~d0
set workDir=%~d0%~p0
set tempDir=%workDir%\temp\

set filePath=%~d1%~p1
set fileName=%~n1
set fileExt=%~x1

:: Create temporary directory
if not exist %tempDir% (
   mkdir %tempDir%
)

:: Clean temporary directory
del /q %tempDir%\*.*

:: Change working directory
%workDrive%
cd %workDir%

:: Copy input to temporary directory
copy %filePath%%fileName%%fileExt% %tempDir%%fileName%%fileExt%

:: Split files into segments
call :splitFiles %tempDir%%fileName%%fileExt% %2

:: Loop over files and compress them
del %filePath%%fileName%_lzma.hex
call :loopFiles %2 %3 %4 %5 %filePath%%fileName%_lzma.hex

:: Clean up variables
set workDrive=
set workDir=
set tempDir=

set filePath=
set fileName=
set fileExt=

:: End of main function
exit /b %PROGRAMERR%

:: Split files into binary segments
:splitFiles
%2 %1 /s /xsb /e:error.txt /o:%tempDir%\%filename%_split.bin
exit /b

:loopFiles
for %%f in (%tempDir%\%filename%_split_*.bin) do (
   :: file name, lzma tool, optimization level, dictionary size
   call :processFile %%f %2 %3 %4
   :: file name, hexview, output, split filename
   call :mergeFile %%f %1 %5 %filename%_split
)

exit /b

:processFile
echo Compress segment %1...
:: Compress the download file with LZMA
%2 -O%3 -ws=%4 %1 %1.lzma
exit /b

:mergeFile
echo Merge files into output file %3...
set mergePath=%~d1%~p1
set mergeName=%~n1
set mergeExt=%~x1

call set mergeAddr=%%mergeName:%4_=%%
echo Merging segment at 0x%mergeAddr%

if exist %3 (
   %2 %3 /MO:%1.lzma;0x%mergeAddr% /s /xi /E:error.txt /o:%3
) else (
   %2 /MO:%1.lzma;0x%mergeAddr% /s /xi /E:error.txt /o:%3
)


exit /b
