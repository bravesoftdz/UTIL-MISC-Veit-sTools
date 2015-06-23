Title   language dependant boot menu definitions (russian)

;��������������������������������������������������������������������

; Menu 1: CD or hard disk

menu1:
                        db 42   ; columns
                        db  2   ; first menu column
                        db 41   ; last menu column

                        db  5   ; rows
                        db  1   ; first menu row
                        db  2   ; last menu row

                        db MenuAttrFrame
                        db MenuAttrSelection

                        dw Offset menu1_image
                        dw Offset menu1_licensenote
                        dw Offset menu1a_time20_msg1 ; \
                        dw Offset menu1a_time20_msg2 ; / 20 seconds
                        dw Offset menu1a_time1_msg1 ; \
                        dw Offset menu1a_time1_msg2 ; / 1 second
                        dw Offset menu1a_stop_msg1
                        dw Offset menu1a_stop_msg2

                        db 1    ; default value
                        dw 20   ; time to wait for a user input
                        db true ; stop timer with Esc only

                        ;            111111111122222222223333333333444
                        ;   123456789012345678901234567890123456789012
menu1_image             db " > ����㧪� � ���⪮�� ��᪠            < " ; 1
                        db "   ����㧪� � CD-ROM eComStation          " ; 2
                        db "                                          " ; 3
                        db "  ������ Esc ��� �⬥�� ��⮬���᪮�   " ; 4
                        db "  ����㧪� � ���⪮�� ��᪠ �१ xx ᥪ. " ; 5
                       ;db "                                          " ;
                       ;db "  ��ࠢ ����㧪� � CD-ROM, �� �ਭ����� " ;
                       ;db "  �᫮��� ��業�������� ᮣ��襭��,       " ;
                       ;db "  ��������� � license.txt.               " ;

eComStation             equ Offset menu1_image+(2-1)*42+(22-1)*1

menu1a_time20_msg1      db 3,4,"������ Esc ��� �⬥�� ��⮬���᪮�",0
menu1a_time20_msg2      db 3,5,"����㧪� � ���⪮�� ��᪠ �१ ",string_numlongint
                        dw Offset menu_seconds_left
                        db " ᥪ.",0
menu1a_time1_msg1       equ menu1a_time20_msg1
menu1a_time1_msg2       db 3,5,"����㧪� � ���⪮�� ��᪠ �१ 1 ᥪ.",0
menu1a_stop_msg1        db 3,4,"������ ��⠭�����.",0
menu1a_stop_msg2        db 3,5,"",0

; "hard disk"="���⪨� ���" ... but the gramatic is not corrected
menu1b_time20_msg1      equ menu1a_time20_msg1
menu1b_time20_msg2      db 3,5,"����㧪� � ",string_string
                        dw Offset ecs_cdtitel
                        db " �१ ",string_numlongint
                        dw Offset menu_seconds_left
                        db " ᥪ.",0
menu1b_time1_msg1       equ menu1b_time20_msg1
menu1b_time1_msg2       db 3,5,"����㧪� � ",string_string
                        dw Offset ecs_cdtitel
                        db " �१ 1 ᥪ.",0
menu1b_stop_msg1        equ menu1a_stop_msg1
menu1b_stop_msg2        equ menu1a_stop_msg2


menu1_licensenote       db "��ࠢ ����㧪� � CD-ROM, �� �ਭ����� �᫮���                    ",13,10
                        db "��業�������� ᮣ��襭��, ��������� � license.txt.                ",0


        exe_menu1:
                        dw boot_harddisk    ; 1
                        dw show_menu2       ; 2


;��������������������������������������������������������������������

; Menu 2: default/advanced/readme


menu2:
                        db 42   ; columns
                        db  2   ; first menu column
                        db 41   ; last menu column

                        db  3   ; rows
                        db  1   ; first menu row
                        db  3   ; last menu row

                        db MenuAttrFrame
                        db MenuAttrSelection

                        dw Offset menu2_image
                        dw -1   ; no license note
                        dw -1   ; 20 seconds
                        dw -1   ; 20 seconds
                        dw -1   ; 1 second
                        dw -1   ; 1 second
                        dw -1   ; timer off
                        dw -1   ; timer off

                        db 1    ; default value
                        dw 0    ; time to wait for a user input
                        db true ; stop timer with Esc only

                        ;            111111111122222222223333333333444
                        ;   123456789012345678901234567890123456789012
menu2_image             db "   ����㧪� � ��ࠬ��ࠬ� �� 㬮�砭��    " ; 1
                        db "   ����ன�� ��ࠬ��஢ ����㧪�          " ; 2
                        db "   ��ᬮ�� ���㬥��樨                  " ; 3

exe_menu2:
                        dw continue_boot_default        ; 1
                        dw continue_boot_advanced       ; 2
                        dw load_readme_txt              ; 3

;��������������������������������������������������������������������