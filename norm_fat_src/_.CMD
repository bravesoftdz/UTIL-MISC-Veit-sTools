@ECHO OFF
CALL PASVP NORM_DEF .\ @VPC.CFG
IF NOT EXIST NORM_DEF.EXE GOTO FEHLER
NORM_DEF.EXE
DEL NORM_DEF.EXE
CALL PASVPD NORM_FAT NORM_FAT.VK\
IF NOT EXIST NORM_FAT.VK\NORM_FAT.EXE GOTO FEHLER
CALL ..\GENVK NORM_FAT
GOTO ENDE

:FEHLER
PAUSE

:ENDE
