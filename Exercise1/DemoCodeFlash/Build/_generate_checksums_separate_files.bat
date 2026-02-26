:: Create checksums for Vector SLP3 deliveries
@echo off
if "%1" == "" goto usage

echo.
echo Generate checksum (CRC32) for Vector SLP3
echo Generate signature (RSA)
echo Generate CMAC (HMAC)
echo Compress file (LZMA and LZSS compression)
echo Encrypt files (AES)
echo.
echo CRC (Security model NONE)            :
echo %~dpn1.crc
echo CMAC (Security model C)              :
echo %~dpn1_cmac.sig
echo HMAC (Security model C)              :
echo %~dpn1_hmac.sig
echo Compressed file (LZ77)               :
echo %~dpn1_lz77%~x1
echo Compressed file (LZMA)               :
echo %~dpn1_lzma%~x1
echo Compressed file (LZSS)               :
echo %~dpn1_lzss%~x1
echo Encrypted file                       :
echo %~dpn1_aes%~x1
echo Encrypted and compressed file (LZ77) :
echo %~dpn1_lz77_aes%~x1
echo Encrypted and compressed file (LZMA) :
echo %~dpn1_lzma_aes%~x1
echo Encrypted and compressed file (LZSS) :
echo %~dpn1_lzss_aes%~x1
echo RSA signature (Security model CCC)   :
echo %~dpn1_ccc.rsa
echo.

set local_dir=%~d0%~p0

call %local_dir%..\..\ScriptHelper.bat

:: Please configure the following variables
:: Root directory
set root_dir=%local_dir%%RootDir%
:: Hexview executable
set hexview_exe=%local_dir%%HexViewExecutable%
:: LZMA compression tool
if exist %root_dir%\Misc\Cmpr_Lzma\COMPRESS_LZMA_Util.exe set lzma_exe=%root_dir%\Misc\Cmpr_Lzma\COMPRESS_LZMA_Util.exe
if exist %root_dir%\Misc\Cmpr_Lzma\Application\COMPRESS_LZMA_Util.exe set lzma_exe=%root_dir%\Misc\Cmpr_Lzma\Application\COMPRESS_LZMA_Util.exe
set opt_level=9
set dict_size=4096
:: LZSS compression
set distance_offset=10
set data_length=4
:: Keys
set mac_key=%root_dir%\Demo\Demokeys\c_key.txt
set rsa_key=%root_dir%\Demo\Demokeys\ccc_key_private.txt

set aesiv=00000000000000000000000000000000
set aeskey=00112233445566778899aabbccddeeff

echo Calculate CRC
%hexview_exe% %1 /S -e:%local_dir%error.txt /cs9:%~pn1.crc

echo Calculate CMAC (Security class C)
%hexview_exe% %1 /S -e:%local_dir%error.txt /dp45:%mac_key%;%~dpn1_cmac.sig

echo Calculate SHA1 HMAC (Security class C)
%hexview_exe% %1 /S -e:%local_dir%error.txt /dp5:%mac_key%;%~dpn1_hmac.sig

:: execute only, if there is an LZMA compression tool available
if defined lzma_exe (
 echo "Create compressed download file (LZMA)"
 echo call %local_dir%\_compress_lzma.bat %1 %hexview_exe% %lzma_exe% %opt_level% %dict_size%
 call %local_dir%\_compress_lzma.bat %1 %hexview_exe% %lzma_exe% %opt_level% %dict_size%
)

echo Create compressed download file (LZ77)
%hexview_exe% %1 /S -e:%local_dir%error.txt /dp19 /XI -o %~dpn1_lz77%~x1

echo Create compressed download file (LZSS)
%hexview_exe% %1 /S -e:%local_dir%error.txt /dp57:#LZSS=%distance_offset%,%data_length% /XI -o %~dpn1_lzss%~x1

echo Calculate RSA signature (Security class CCC, SHA1)
%hexview_exe% %1 /S -e:%local_dir%error.txt /dp10:%rsa_key%;%~n1_ccc.rsa

echo Create encrypted download file
call %local_dir%\_generate_aes.bat %1 %aeskey% %aesiv%

:: execute only, if there is an LZMA compression tool available
if defined lzma_exe (
 echo "Create compressed and encrypted download file (LZMA)"
 call %local_dir%\_generate_aes.bat %~dpn1_lzma%~x1 %aeskey% %aesiv%
)
echo Create compressed and encrypted download file (LZ77)
call %local_dir%\_generate_aes.bat %~dpn1_lz77%~x1 %aeskey% %aesiv%
echo Create compressed and encrypted download file (LZSS)
call %local_dir%\_generate_aes.bat %~dpn1_lzss%~x1 %aeskey% %aesiv%


echo ...finished.
echo.
goto end

:usage
echo "Please call with a hex file as parameter."
pause

:end
if exist %local_dir%\error.txt del %local_dir%\error.txt
