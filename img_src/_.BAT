@ECHO OFF
CALL PASBP IMG_DEF .\
IF NOT EXIST IMG_DEF.EXE GOTO ENDE
IMG_DEF.EXE
DEL IMG_DEF.EXE
CALL PASBP IMG IMG.VK\
ECHO CALL ..\GENVK IMG
PAUSE

:ENDE