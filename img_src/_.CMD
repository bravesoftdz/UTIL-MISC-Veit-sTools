@ECHO OFF
CALL PASVP IMG_DEF .\
IF NOT EXIST IMG_DEF.EXE GOTO ENDE
IMG_DEF.EXE
DEL IMG_DEF.EXE
CALL DUAL IMG IMG.VK\
CALL ..\GENVK IMG

:ENDE