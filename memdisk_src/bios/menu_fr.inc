Title   language dependant boot menu definitions (french)

;컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴

; Menu 1: CD or hard disk

menu1:
                        db 44   ; columns
                        db  2   ; first menu column
                        db 42   ; last menu column

                        db  5   ; rows
                        db  1   ; first menu row
                        db  2   ; last menu row

                        db MenuAttrFrame
                        db MenuAttrSelection

                        dw Offset menu1_image
                        dw Offset menu1_licensenote
                        dw Offset menu1a_time20_msg1 ; \ 20 secondes
                        dw Offset menu1a_time20_msg2 ; /
                        dw Offset menu1a_time1_msg1 ; \  1
                        dw Offset menu1a_time1_msg2 ; /
                        dw Offset menu1a_stop_msg1
                        dw Offset menu1a_stop_msg2

                        db 1    ; default value
                        dw 20   ; time to wait for a user input
                        db true ; stop timer with Esc only

                        ;            11111111112222222222333333333344444
                        ;   12345678901234567890123456789012345678901234
menu1_image             db " > Amor놹ge sur disque dur               <  " ; 1
                        db "   Amor놹ge sur le CD-ROM d'eComStation     " ; 2
                        db "                                            " ; 3
                        db "  Amor놹ge automatique dans xx secondes.    " ; 4
                        db "  Touche '릀hap' pour d굎activer l'horloge. " ; 5

eComStation             equ Offset menu1_image+(2-1)*44+(29-1)*1

menu1a_time20_msg1      db 3,4,"Amor놹ge automatique dans ",string_numlongint
                        dw Offset menu_seconds_left
                        db " secondes.",0
menu1a_time20_msg2      db 3,5,"Touche '릀hap' pour d굎activer l'horloge.",0
menu1a_time1_msg1       db 3,4,"Amor놹ge automatique dans 1 seconde.",0
menu1a_time1_msg2       equ menu1a_time20_msg2
menu1a_stop_msg1        db 3,4,"Horloge d굎activ괻.",0
menu1a_stop_msg2        db 3,5,"",0

menu1b_time20_msg1      equ menu1a_time20_msg1 ; the strings above have no 'harddisk'
menu1b_time20_msg2      equ menu1a_time20_msg2
menu1b_time1_msg1       equ menu1a_time1_msg1
menu1b_time1_msg2       equ menu1a_time1_msg2
menu1b_stop_msg1        equ menu1a_stop_msg1
menu1b_stop_msg2        equ menu1a_stop_msg2

menu1_licensenote       db "En choisissant 'Amor놹ge sur le CD-ROM', vous acceptez            ",13,10
                        db "les conditions de licence mentionn괻s dans licence.txt.           ",0

exe_menu1:
                        dw boot_harddisk    ; 1
                        dw show_menu2       ; 2


;컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴

; Menu 2: default/advanced/readme


menu2:
                        db 44   ; columns
                        db  2   ; first menu column
                        db 43   ; last menu column

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

                        ;            11111111112222222222333333333344444
                        ;   12345678901234567890123456789012345678901234
menu2_image             db "   Amor놹ge avec les valeurs par d괽aut     " ; 1
                        db "   Amor놹ge avec menu � choix multiples     " ; 2
                        db "   Affichage de la documentation en ligne   " ; 3

exe_menu2:
                        dw continue_boot_default        ; 1
                        dw continue_boot_advanced       ; 2
                        dw load_readme_txt              ; 3

;컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴

