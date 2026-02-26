Generation of Checksum, Signature, Encrypted download data
----------------------------------------------------------

To protect download containers by CRC or Signature it is possible to either provide the CRC/Signature in a separate file
or to embed the CRC/Signature within the download container itself, usually appended to the download data. There are two
examples of checksum generation batch files to achieve this goal:

 1) _generate_checksums_separate_files.bat
    Provide CRC and/or Signature in separate files.
 2) _generate_checksums_embedded.bat
    Append CRC or Signature behind the download data.

Both batch files make use of HexView, i.e. its checksum generation feature /cs and its data processing feature /dp.
Both features are explained in detail in .\Misc\HexView\ReferenceManual_HexView.pdf.

Each batch file generates a lot of files for one given hex file. Please find here a short explanation, which name
describes which type of content:

1) _generate_checksums_separate_files.bat
   <name>.crc:              CRC of download data
   <name>_cmac.sig:         CMAC signature of download data calculated with .\Demo\DemoKeys\c_key.txt
   <name>_hmac.sig:         HMAC signature of download data calculated with .\Demo\DemoKeys\c_key.txt
   <name>_lzma.hex:         LZMA compressed download data
   <name>_lzss.hex:         LZSS compressed download data
   <name>_aes.hex:          Encrypted download data encrypted with some demo AES keys
   <name>_lzma_aes.hex:     LZMA compressed download data encrypted with some demo AES keys
   <name>_lzss_aes.hex:     LZSS compressed download data encrypted with some demo AES keys
   <name>_ccc.rsa:          RSA signature of download data calculated with .\Demo\DemoKeys\ccc_key_private.txt

2) _generate_checksums_embedded.bat
   <name>_crc.hex:          Download data appended with CRC
   <name>_cmac.hex:         Download data appended with CMAC signature calculated with .\Demo\DemoKeys\c_key.txt
   <name>_hmac.hex:         Download data appended with HMAC signature calculated with .\Demo\DemoKeys\c_key.txt
   <name>_ccc.rsa:          Download data appended with RSA signature calculated with .\Demo\DemoKeys\ccc_key_private.txt
   <name>_crc_lzma.hex:     Download data appended with CRC like above and compressed with LZMA
   <name>_cmac_lzma.hex:    Download data appended with CMAC signature like above and compressed with LZMA
   <name>_hmac_lzma.hex:    Download data appended with HMAC signature like above and compressed with LZMA
   <name>_ccc_lzma.hex:     Download data appended with RSA signature like above and compressed with LZMA
   <name>_crc_lzss.hex:     Download data appended with CRC like above and compressed with LZSS
   <name>_cmac_lzss.hex:    Download data appended with CMAC signature like above and compressed with LZSS
   <name>_hmac_lzss.hex:    Download data appended with HMAC signature like above and compressed with LZSS
   <name>_ccc_lzss.hex:     Download data appended with RSA signature like above and compressed with LZSS
   <name>_crc_aes.hex:      Download data appended with CRC like above and encrypted with some demo AES keys
   <name>_cmac_aes.hex:     Download data appended with CMAC signature like above and encrypted with some demo AES keys
   <name>_hmac_aes.hex:     Download data appended with HMAC signature like above and encrypted with some demo AES keys
   <name>_ccc_aes.hex:      Download data appended with RSA signature like above and encrypted with some demo AES keys
   <name>_crc_lzma_aes.hex: Download data appended with CRC like above, compressed with LZMA and encrypted with some demo AES keys
   <name>_cmac_lzma_aes.hex:Download data appended with CMAC signature like above, compressed with LZMA and encrypted with some demo AES keys
   <name>_hmac_lzma_aes.hex:Download data appended with HMAC signature like above, compressed with LZMA and encrypted with some demo AES keys
   <name>_ccc_lzma_aes.hex: Download data appended with RSA signature like above, compressed with LZMA and encrypted with some demo AES keys
   <name>_crc_lzss_aes.hex: Download data appended with CRC like above, compressed with LZSS and encrypted with some demo AES keys
   <name>_cmac_lzss_aes.hex:Download data appended with CMAC signature like above, compressed with LZSS and encrypted with some demo AES keys
   <name>_hmac_lzss_aes.hex:Download data appended with HMAC signature like above, compressed with LZSS and encrypted with some demo AES keys
   <name>_ccc_lzss_aes.hex: Download data appended with RSA signature like above, compressed with LZSS and encrypted with some demo AES keys
