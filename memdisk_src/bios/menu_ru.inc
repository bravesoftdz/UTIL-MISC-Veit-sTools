Title   language dependant boot menu definitions (russian)

;컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴

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
menu1_image             db " > 뇿｀習첓 � �畯洙�． ㄸ稅�            < " ; 1
                        db "   뇿｀習첓 � CD-ROM eComStation          " ; 2
                        db "                                          " ; 3
                        db "  뜝━ⓥ� Esc ㄻ� �燧��� 젪獸쵟殊曄稅��   " ; 4
                        db "  쭬｀習え � �畯洙�． ㄸ稅� 曄誓� xx 醒�. " ; 5
                       ;db "                                          " ;
                       ;db "  귣□젪 쭬｀習ゃ � CD-ROM, 귣 �黍�º젰收 " ;
                       ;db "  信ギ˘� エ璵�㎤����． 貰＋좄��⑨,       " ;
                       ;db "  �㎙�┘��瑜 � license.txt.               " ;

eComStation             equ Offset menu1_image+(2-1)*42+(22-1)*1

menu1a_time20_msg1      db 3,4,"뜝━ⓥ� Esc ㄻ� �燧��� 젪獸쵟殊曄稅��",0
menu1a_time20_msg2      db 3,5,"쭬｀習え � �畯洙�． ㄸ稅� 曄誓� ",string_numlongint
                        dw Offset menu_seconds_left
                        db " 醒�.",0
menu1a_time1_msg1       equ menu1a_time20_msg1
menu1a_time1_msg2       db 3,5,"쭬｀習え � �畯洙�． ㄸ稅� 曄誓� 1 醒�.",0
menu1a_stop_msg1        db 3,4,"롡淞竣 �飡젺�˙��.",0
menu1a_stop_msg2        db 3,5,"",0

; "hard disk"="�畯洙Ł ㄸ稅" ... but the gramatic is not corrected
menu1b_time20_msg1      equ menu1a_time20_msg1
menu1b_time20_msg2      db 3,5,"쭬｀習え � ",string_string
                        dw Offset ecs_cdtitel
                        db " 曄誓� ",string_numlongint
                        dw Offset menu_seconds_left
                        db " 醒�.",0
menu1b_time1_msg1       equ menu1b_time20_msg1
menu1b_time1_msg2       db 3,5,"쭬｀習え � ",string_string
                        dw Offset ecs_cdtitel
                        db " 曄誓� 1 醒�.",0
menu1b_stop_msg1        equ menu1a_stop_msg1
menu1b_stop_msg2        equ menu1a_stop_msg2


menu1_licensenote       db "귣□젪 쭬｀習ゃ � CD-ROM, 귣 �黍�º젰收 信ギ˘�                    ",13,10
                        db "エ璵�㎤����． 貰＋좄��⑨, �㎙�┘��瑜 � license.txt.                ",0


        exe_menu1:
                        dw boot_harddisk    ; 1
                        dw show_menu2       ; 2


;컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴

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
menu2_image             db "   뇿｀習첓 � 캙�젹β�젹� �� 僧�ョ젺⑧    " ; 1
                        db "   뜝飡昔ø� 캙�젹β昔� 쭬｀習え          " ; 2
                        db "   뤲�細�循 ㄾゃД��졿Ŀ                  " ; 3

exe_menu2:
                        dw continue_boot_default        ; 1
                        dw continue_boot_advanced       ; 2
                        dw load_readme_txt              ; 3

;컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴
