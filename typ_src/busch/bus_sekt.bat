@ECHO OFF
CALL BPC /B /CP /U.. /I.. BUS_SEKT.PAS
IF NOT EXIST BUS_SEKT.EXE GOTO FEHLER
CALL TBS BUS_SEKT.EXE
DEL *.TPP
IF EXIST ..\TYP_TYPE.TPP DEL ..\TYP_TYPE.TPP
BUS_SEKT.EXE
DEL BUS_SEKT.EXE
DEL ANTI-VIR.DAT
BINOBJ32         SEKT.DAT SEKT__32.OBJ SEKT_BUSCH
C:\BP\BIN\BINOBJ SEKT.DAT SEKT__16.OBJ SEKT_BUSCH
DEL SEKT.DAT
GOTO ENDE

:FEHLER
PAUSE
:ENDE