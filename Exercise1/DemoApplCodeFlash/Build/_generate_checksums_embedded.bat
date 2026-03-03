:: Create checksums for Vector SLP3 deliveries
@echo off
if "%1" == "" goto usage

echo.
echo Generate checksum (CRC32) for Vector SLP3
echo Generate signature (RSA)
echo Generate CMAC (HMAC)
echo Compress file (LZMA compression)
echo Encrypt files (AES)
echo.
echo CRC (Security model NONE)                  :
echo %~dpn1_crc%~x1
echo CMAC (Security model C)                    :
echo %~dpn1_cmac%~x1
echo HMAC (Security model C)                    :
echo %~dpn1_hmac%~x1
echo RSA signature (Security model CCC)         :
echo %~dpn1_ccc.rsa
echo Compressed file (CRC, LZ77)                :
echo %~dpn1_crc_lz77%~x1
echo Compressed file (CMAC, LZ77)               :
echo %~dpn1_cmac_lz77%~x1
echo Compressed file (HMAC, LZ77)               :
echo %~dpn1_hmac_lz77%~x1
echo Compressed file (CCC, LZ77)                :
echo %~dpn1_ccc_lz77%~x1
echo Compressed file (CRC, LZMA)                :
echo %~dpn1_crc_lzma%~x1
echo Compressed file (CMAC, LZMA)               :
echo %~dpn1_cmac_lzma%~x1
echo Compressed file (HMAC, LZMA)               :
echo %~dpn1_hmac_lzma%~x1
echo Compressed file (CCC, LZMA)                :
echo %~dpn1_ccc_lzma%~x1
echo Compressed file (CRC, LZSS)                :
echo %~dpn1_crc_lzss%~x1
echo Compressed file (CMAC, LZSS)               :
echo %~dpn1_cmac_lzss%~x1
echo Compressed file (HMAC, LZSS)               :
echo %~dpn1_hmac_lzss%~x1
echo Compressed file (CCC, LZSS)                :
echo %~dpn1_ccc_lzss%~x1
echo Encrypted file  (CRC)                      :
echo %~dpn1_crc_aes%~x1
echo Encrypted file  (CMAC)                     :
echo %~dpn1_cmac_aes%~x1
echo Encrypted file  (HMAC)                     :
echo %~dpn1_hmac_aes%~x1
echo Encrypted file  (CCC)                      :
echo %~dpn1_ccc_aes%~x1
echo Encrypted and compressed file (CRC, LZ77)  :
echo %~dpn1_crc_lz77_aes%~x1
echo Encrypted and compressed file (CMAC, LZ77) :
echo %~dpn1_cmac_lz77_aes%~x1
echo Encrypted and compressed file (HMAC, LZ77) :
echo %~dpn1_hmac_lz77_aes%~x1
echo Encrypted and compressed file (CCC, LZ77)  :
echo %~dpn1_ccc_lz77_aes%~x1
echo Encrypted and compressed file (CRC, LZMA)  :
echo %~dpn1_crc_lzma_aes%~x1
echo Encrypted and compressed file (CMAC, LZMA) :
echo %~dpn1_cmac_lzma_aes%~x1
echo Encrypted and compressed file (HMAC, LZMA) :
echo %~dpn1_hmac_lzma_aes%~x1
echo Encrypted and compressed file (CCC, LZMA)  :
echo %~dpn1_ccc_lzma_aes%~x1
echo Encrypted and compressed file (CRC, LZSS)  :
echo %~dpn1_crc_lzss_aes%~x1
echo Encrypted and compressed file (CMAC, LZSS) :
echo %~dpn1_cmac_lzss_aes%~x1
echo Encrypted and compressed file (HMAC, LZSS) :
echo %~dpn1_hmac_lzss_aes%~x1
echo Encrypted and compressed file (CCC, LZSS)  :
echo %~dpn1_ccc_lzss_aes%~x1
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
%hexview_exe% %1 /S -e:%local_dir%error.txt /CS9:@append /XI -o %~dpn1_crc%~x1

echo Calculate CMAC (Security class C)
%hexview_exe% %1 /S -e:%local_dir%error.txt /dp45:@append:%mac_key% /XI -o %~dpn1_cmac%~x1

echo Calculate SHA1 HMAC (Security class C)
%hexview_exe% %1 /S -e:%local_dir%error.txt /dp5:@append:%mac_key% /XI -o %~dpn1_hmac%~x1

echo Calculate RSA signature (Security class CCC, SHA1)
%hexview_exe% %1 /S -e:%local_dir%error.txt /dp10:@append:%rsa_key% /XI -o%~dpn1_ccc%~x1

:: execute only, if there is an LZMA compression tool available
if defined lzma_exe (
 echo "Create compressed download file (CRC, LZMA)"
 call %local_dir%\_compress_lzma.bat %~dpn1_crc%~x1 %hexview_exe% %lzma_exe% %opt_level% %dict_size%

 echo "Create compressed download file (CMAC, LZMA)"
 call %local_dir%\_compress_lzma.bat %~dpn1_cmac%~x1 %hexview_exe% %lzma_exe% %opt_level% %dict_size%

 echo "Create compressed download file (HMAC, LZMA)"
 call %local_dir%\_compress_lzma.bat %~dpn1_hmac%~x1 %hexview_exe% %lzma_exe% %opt_level% %dict_size%

 echo "Create compressed download file (CCC, LZMA)"
 call %local_dir%\_compress_lzma.bat %~dpn1_ccc%~x1 %hexview_exe% %lzma_exe% %opt_level% %dict_size%
)

echo Create compressed download file (CRC, LZ77)
%hexview_exe% %~dpn1_crc%~x1 /S -e:%local_dir%error.txt /dp19 /XI -o %~dpn1_crc_lz77%~x1

echo Create compressed download file (CMAC, LZ77)
%hexview_exe% %~dpn1_cmac%~x1 /S -e:%local_dir%error.txt /dp19 /XI -o %~dpn1_cmac_lz77%~x1

echo Create compressed download file (HMAC, LZ77)
%hexview_exe% %~dpn1_hmac%~x1 /S -e:%local_dir%error.txt /dp19 /XI -o %~dpn1_hmac_lz77%~x1

echo Create compressed download file (CCC, LZ77)
%hexview_exe% %~dpn1_ccc%~x1 /S -e:%local_dir%error.txt /dp19 /XI -o %~dpn1_ccc_lz77%~x1

echo Create compressed download file (CRC, LZSS)
%hexview_exe% %~dpn1_crc%~x1 /S -e:%local_dir%error.txt /dp57:#LZSS=%distance_offset%,%data_length% /XI -o %~dpn1_crc_lzss%~x1

echo Create compressed download file (CMAC, LZSS)
%hexview_exe% %~dpn1_cmac%~x1 /S -e:%local_dir%error.txt /dp57:#LZSS=%distance_offset%,%data_length% /XI -o %~dpn1_cmac_lzss%~x1

echo Create compressed download file (HMAC, LZSS)
%hexview_exe% %~dpn1_hmac%~x1 /S -e:%local_dir%error.txt /dp57:#LZSS=%distance_offset%,%data_length% /XI -o %~dpn1_hmac_lzss%~x1

echo Create compressed download file (CCC, LZSS)
%hexview_exe% %~dpn1_ccc%~x1 /S -e:%local_dir%error.txt /dp57:#LZSS=%distance_offset%,%data_length% /XI -o %~dpn1_ccc_lzss%~x1

echo Create encrypted download file (CRC)
call %local_dir%\_generate_aes.bat %~dpn1_crc%~x1 %aeskey% %aesiv%

echo Create encrypted download file (CMAC)
call %local_dir%\_generate_aes.bat %~dpn1_cmac%~x1 %aeskey% %aesiv%

echo Create encrypted download file (HMAC)
call %local_dir%\_generate_aes.bat %~dpn1_hmac%~x1 %aeskey% %aesiv%

echo Create encrypted download file (CCC)
call %local_dir%\_generate_aes.bat %~dpn1_ccc%~x1 %aeskey% %aesiv%

:: execute only, if there is an LZMA compression tool available
if defined lzma_exe (
 echo "Create compressed and encrypted download file (CRC, LZMA)"
 call %local_dir%\_generate_aes.bat %~dpn1_crc_lzma%~x1 %aeskey% %aesiv%

 echo "Create compressed and encrypted download file (CMAC, LZMA)"
 call %local_dir%\_generate_aes.bat %~dpn1_cmac_lzma%~x1 %aeskey% %aesiv%

 echo "Create compressed and encrypted download file (HMAC, LZMA)"
 call %local_dir%\_generate_aes.bat %~dpn1_hmac_lzma%~x1 %aeskey% %aesiv%

 echo "Create compressed and encrypted download file (CCC, LZMA)"
 call %local_dir%\_generate_aes.bat %~dpn1_ccc_lzma%~x1 %aeskey% %aesiv%
)

echo Create compressed and encrypted download file (CRC, LZ77)
call %local_dir%\_generate_aes.bat %~dpn1_crc_lz77%~x1 %aeskey% %aesiv%

echo Create compressed and encrypted download file (CMAC, LZ77)
call %local_dir%\_generate_aes.bat %~dpn1_cmac_lz77%~x1 %aeskey% %aesiv%

echo Create compressed and encrypted download file (HMAC, LZ77)
call %local_dir%\_generate_aes.bat %~dpn1_hmac_lz77%~x1 %aeskey% %aesiv%

echo Create compressed and encrypted download file (CCC, LZ77)
call %local_dir%\_generate_aes.bat %~dpn1_ccc_lz77%~x1 %aeskey% %aesiv%

echo Create compressed and encrypted download file (CRC, LZSS)
call %local_dir%\_generate_aes.bat %~dpn1_crc_lzss%~x1 %aeskey% %aesiv%

echo Create compressed and encrypted download file (CMAC, LZSS)
call %local_dir%\_generate_aes.bat %~dpn1_cmac_lzss%~x1 %aeskey% %aesiv%

echo Create compressed and encrypted download file (HMAC, LZSS)
call %local_dir%\_generate_aes.bat %~dpn1_hmac_lzss%~x1 %aeskey% %aesiv%

echo Create compressed and encrypted download file (CCC, LZSS)
call %local_dir%\_generate_aes.bat %~dpn1_ccc_lzss%~x1 %aeskey% %aesiv%


echo ...finished.
echo.
goto end

:usage
echo "Please call with a hex file as parameter."
pause

:end
if exist %local_dir%\error.txt del %local_dir%\error.txt
