Title           language dependant strings: russian

; thanks to Yuri Proniakin

; module a20.inc
msg_Failed_to_restore_A20_gate          equ "�� 㤠���� ����⠭����� �� A20."
;obsoleted
;msg_Returned_successfully_but_A20_rf    equ "������ �ᯥ��, �� A20 ����⠭����� �� 㤠����."

; module ausschri.inc
thousand_separator                      equ " "

; module boot.inc
msg_frage_harddisk_or_memdisk           equ <"�த������ � [",setkeycolour,"�",setdefaultcolour,"]��⪮�� ��᪠, [",setkeycolour,"�",setdefaultcolour,"]���㠫쭮�� ��᪠ ��� [",setkeycolour,"�",setdefaultcolour,"]�᪥��? ">
key_boot_harddisk                       equ "�"
key_boot_memdisk                        equ "�"
key_boot_floppy                         equ "�"
key_uninstall                           equ "�"
msg_meldung_Lesefehler                  equ "�訡�� �⥭��"
msg_meldung_no_bootable_partition       equ "����㥬� ࠧ��� �� ������."
msg_meldung_bootsector_invalid          equ "��������� �ਧ��� ����㧮筮�� ᥪ��."

; module call_csm.inc
msg_os2csm_not_found                    equ "����� OS2CSM.BIN �� ������."
msg_Invalid_OS2CSM_BIN                  equ "������ OS2CSM.BIN."
msg_file_is_to_big_to_load              equ "���� ᫨誮� ����� ��� ����㧪�."
msg_Can_not_rename_OS_debug_file_missing equ "���������� ��२��������: �⫠���� 䠩� �� ���������."

; module cdloader.tas
msg_loading_part2                       equ "����㦠���� ���� ���� ����... "

; module cd_menu.inc
msg_function_not_implemented            equ <"�㭪�� ��� �� ॠ��������.",13,10,"������ ������� ��� �த�������",keypress,13,10,0>
msg_bootsector_read_error               equ <"�訡�� �⥭�� ����㧮筮�� ᥪ��.",13,10,"������ ������� ��� �த�������",keypress,13,10,0>
msg_bootsector_invalid_format           equ <"������ ����㧮�� ᥪ��.",13,10,"������ ������� ��� �த�������",keypress,13,10,0>

; module dep16s.inc
msg_invalid_packed_data_header          equ "�����㦥� ������ ��������� ᦠ⮣� 䠩��."
msg_packed_data_CRC_failed              equ "������ CRC ᦠ��� ������."
msg_unpacking_data_failed               equ "���� �� �ᯠ����� ������."
msg_unpacked_data_CRC_failed            equ "������ CRC �ᯠ�������� ������."

; module driveacc.inc
msg_swap_drive_insert                   equ " ��⠢�� "
msg_swap_drive_additional_floppy        equ "��� ���������� ����㧪� (�᫨ ����)"
msg_swap_drive_main_bootdisk            equ "�᭮���� ����㧮�� ���"
msg_swap_drive_harddisk                 equ "���⪨� ���"
msg_swap_drive_press_key                equ " � ������ ���� �������"

; module format.inc
msg_Memory_disk_memory_is_corrupted     equ "����㠫�� ��� ���०��."
msg_MemDisk_sector_read_error0          equ "�訡�� �⥭�� ᥪ�� ����㠫쭮�� ��᪠"
msg_MemDisk_sector_read_error1          equ "."
msg_MemDisk_sector_write_error0         equ "�訡�� ����� ᥪ�� ����㠫쭮�� ��᪠"
msg_MemDisk_sector_write_error1         equ "."

; module inithd.inc
;warning_9e00box1 equ "��������: �ᯮ������ ������ ���� 9e00:0.                "
;warning_9e00box2 equ "�� ����� �맢��� �஡���� �� ᮧ����� *S506.ADD miniVDM."
;warning_9e00box3 equ "��室: �ᯮ���� ��ࠬ��� DaniS506 /!Bios               "
;warning_9e00box4 equ "�/��� ���樠������� �� ���⪨� ��᪨                   "
;
;                                        ; following messages are printed as:
;                                        ;   "Initialize unpartitioned harddisk 80 and"
;                                        ;   "a placeholder extended partition [��(1)/���(2)]? "
;msg_question_init_hd1                   equ <"���樠����஢��� ���� ���⪨� ��� ">
;msg_question_init_hd2                   equ <" �",13,10,"ᮧ���� ����⮢�� ���७���� ࠧ����? 1(��)/2(���) ">
;key_question_init_hd_yes                equ "1"
;key_question_init_hd_no                 equ "2"

; module int_0_6.inc
msg_divide_by_zero                      equ "������� �� 0"
msg_invalid_opcode                      equ "������ ��� �������"

; module int13.inc
msg_int13_problem_protected_mode        equ <seterrorcolour,"�஡���� ����㯠 � ����� ��᪠: ������ 㦥 � ����񭭮� ०���.",setdefaultcolour>

; module int15a.inc
msg_int15a_e820                         equ "�ᯮ������ INT 15 EAX=E820 'SMAP'"
msg_int15a_e881                         equ "�ᯮ������ INT 15 AX=e881 'Phoenix 4.0 32-���'"
msg_int15a_c7                           equ "�ᯮ������ INT 15 AH=C7 'PS/2'"
msg_int15a_e801                         equ "�ᯮ������ INT 15 AX=e801 'Phoenix 4.0 16-���'"
msg_int15a_8a                           equ "�ᯮ������ INT 15 AH=8A 'Phoenix 4.0 big'"
msg_int15a_da88                         equ "�ᯮ������ INT 15 AX=DA88 'AMI PCI'"
msg_int15a_88                           equ "�ᯮ������ INT 15 AH=88 '286'"
msg_Detecting_extended_memory_size      equ "��।������ ࠧ��� ���७��� �����..."
msg_MB_starting_at_1_MB                 equ " ��, ��稭�� � 1 ��"
msg_MB_starting_at_16_MB                equ " ��, ��稭�� � 16 ��"
msg_Using_KB_at_Address_1               equ "�ᯮ������ "
msg_Using_KB_at_Address_2               equ " ���⮢ �� ����� "
msg_Using_KB_at_Address_3               equ "."
msg_failed                              equ "�� ��諮."
msg_Not_enough_memory                   equ "�������筮 �����."

; module memalloc.inc
msg_DOS_memory_allocation_failed        equ "���� �뤥����� ����� DOS."
msg_No_free_harddisk_drive_number       equ "��� ᢮������� ����� ���⪮�� ��᪠."
msg_CD_ROM_emulation_terminated         equ "������ ����㧪� �����襭�."
msg_CD_ROM_emulation_did_not_terminate  equ "�� 㤠���� �������� ������ ����㧪�."
msg_title_dos                           equ <cls,"����. ��� [DOS] ">
msg_title_bios                          equ <cls,"����. ��� "> ; [BIOS]
msg_title_dos_cdloader                  equ <cls,"�����稪 CD [DOS] ">
msg_title_bios_cdloader                 equ <cls,"�����稪 CD "> ; [BIOS]
msg_bootdrive_floppyharddisk            equ "���⮢� ��� - ��᪥� ��� ���⪨� ��� ("
msg_bootdrive_cdnoemu                   equ "���⮢� ��� -  CD-ROM � ०��� '��� ����樨' ("
msg_bootdrive2                          equ <").">
msg_Disk_0x_installed_1                 equ "��᪮��� "
msg_Disk_0x_installed_3                 equ ": ��⠭�����."
msg_Disk_8x_installed_1                 equ "��� "
msg_Disk_8x_installed_3                 equ ": ��⠭�����."
msg_MEMBOOT_BIN_corrupted_fragmented    equ <cd_boot_memboot_bin," ���०��/�ࠣ����஢��.">
msg_already_present_SCAD                equ "����. ��� 㦥 ���� � �����. ������ Shift+Ctrl+Alt+Del ��� ��१���㧪�."

; module memload.inc
msg_Disk_has_invalid_format             equ <"������ �ଠ� ��᪠.",13,10,"��⠢�� ��㣮� ��� � ������ ���� �������.">
msg_Insert_floppy_with_label_press_key_1 equ "��⠢�� ��� � ��⪮� '"
msg_Insert_floppy_with_label_press_key_2 equ "' and press a key."
msg_Insert_floppy_with_file_press_key_1 equ "Insert floppy with file '"
msg_Insert_floppy_with_file_press_key_2 equ "' � ������ ���� �������."
msg_invalid_partition_table_on_memdisk  equ "����ୠ� ⠡��� ࠧ����� �� ����㠫쭮� ��᪥."
msg_No_active_primary_or_extended_part  equ "�� ������ ����㧮�� ࠧ���."
msg_Partition_on_memory_disk_is_not_FAT equ "������ �� ����㠫쭮� ��᪥ �� FAT."
msg_Asking_for_drive_parameters_failed1 equ "���� ����� ��ࠬ��஢ ��᪠ (���="
msg_Asking_for_drive_parameters_failed2 equ <").">

msg_Write_error_disk_full               equ "�訡�� �����: ��� ��९�����."
msg_directory_full                      equ "��⠫�� ��९�����."
msg_invalid_cluster_number_2            equ "������ ����� ������ (<2)"
msg_invalid_cluster_number_max          equ "������ ����� ������ (>max)"
msg_sector_read_error_0                 equ <"�訡�� �⥭�� ᥪ�� (���=">
msg_sector_read_error_1                 equ <", 樫����=">
msg_sector_read_error_2                 equ <", �������=">
msg_sector_read_error_3                 equ <", ᥪ��=">
msg_sector_read_error_4                 equ <").">
msg_hd_sector_read_error0               equ "�訡�� �⥭�� ᥪ�� ���⪮�� ��᪠ (���="
msg_cd_sector_read_error0               equ "�訡�� �⥭�� ᥪ�� CD-ROM (���="
msg_cd_sector_read_error1               equ ", ᥪ��="
msg_cd_sector_read_error3               equ <").">
msg_invalid_VTOC                        equ "������ ᥪ�� ���������� CD-ROM."
msg_can_not_find_boot_directory         equ <"���������� ���� ��⠫�� � ����㧮�묨 䠩���� �� CD-ROM (",cd_boot_memboot_bin,").">
msg_boot_directory_is_not_a_directory   equ "��⠫�� � ����㧮�묨 䠩���� �� CD-ROM �� ���� ��⠫����."
msg_can_not_find_memboot_bin            equ <"���������� ���� ����� ���� �����稪� (",cd_boot_memboot_bin,").">
msg_memboot_bin_is_not_a_file           equ <"���� ���� �����稪� (",cd_boot_memboot_bin,") �� ���� 䠩���.">
msg_to_many_files_in_cdrom_directory    equ "���誮� ����� 䠩��� � ��⠫��� CD-ROM � 㯠������묨 ����㧮�묨 䠩����."
msg_invalid_cd_function                 equ "�맢��� ����७��� �㭪��, �� ࠧ��񭭠� ��� CD-ROM."
msg_update_permissed_by_updatefile      equ "����襭� ���������� 䠩���: ������ 䠩� 'BOOT_UPD.TXT'."
msg_update_permissed_by_volumelabel     equ "����襭� ���������� 䠩���: ������� ��⪠ ��᪠ 'BOOT_UPDATE'."
msg_update_not_permissed                equ "��� ���������� 䠩���: �� ������� �� 䠩�-��������, �� ��⪠ ��᪠."
msg_query_geom_1                        equ "�訡�� ����� ������ਨ ��᪠ "
msg_query_geom_3                        equ "."
mgs_k_errorcode_eq                      equ ", ���="

; module readme.inc
msg_readme_not_found                    equ "����⮢� 䠩� �� ������."
msg_readme_file_is_to_large             equ "����⮢� 䠩� ᫨誮� ����让."
msg_readme_statusline1                  equ <" ��ப� �">
msg_readme_statusline2                  equ <"  ",019h,018h,"=��ᬮ�� 䠩��, F7=����, Esc=��室 ">
msg_Search_for                          equ "�᪠�� > "
msg_edit_statusline                     equ "F7=����, Esc=��室"

msg_edithelp_tab                        equ 9
msg_edithelp_01                         equ "��६�饭�� � ������� ��५��, PageUp/PageDown"
msg_edithelp_02                         equ "Ctrl+PageUp/PageDown=��砫�/����� 䠩��"
msg_edithelp_03                         equ "Home/End=��砫�/����� ��ப�"
msg_edithelp_04                         equ "Ctrl+Left/Right=��砫� �।��饣�/᫥���饣� ᫮��"
msg_edithelp_05                         equ "Ctrl+Backspace/T/Y=������� ᫮�� ᫥��/�ࠢ�/��ப�"
msg_edithelp_06                         equ "F7=����, Shift+F7=�᪠�� �����"
msg_edithelp_07                         equ "Ctrl+Ins=����஢��� ��ப� � ����"
msg_edithelp_08                         equ "Shift+Ins=��⠢��� ��ப� �� ����"
msg_edithelp_09                         equ "Ins=��४��祭�� ०��� ��⠢��/������"
msg_edithelp_10                         equ "Esc=��室 � ����ᮬ �� ��࠭���� ���������"
msg_edithelp_key                        equ "������ ���� ������"

msg_edit_save_changes                   equ "���࠭��� ��������� (1/2/Esc)? "
key_edit_save_changes_yes               equ "1"
key_edit_save_changes_no                equ "2"



; module speicher.inc
msg_memory_block_corrupted              equ "���� �ࠢ����� ������� ���०��."
msg_Error_allocating_heap_memory        equ "��墠⪠ �����."

; module unpackfi.inc
msg_Zero_length_file                    equ "���� �㫥��� �����."
msg_Unknown_format_damaged_archive      equ "���०��� ��娢 ��� ����஭��� 䠩�."
msg_packfile_unkn_command               equ "�������⭠� ��� �� ॠ���������� ������� Packfile."
msg_incorrect_archive_version           equ "����ୠ� ����� ��娢�."
msg_unpack_error_no_data                equ "�訡�� �ᯠ�����: ��� ������."
msg_useless_data_in_archive             equ "��ᯮ����� ����� � ��娢�."

; module xms.inc
msg_No_XMS_2_driver                     equ "��������� �ࠩ��� XMS 2+."
msg_Error_allocating_XMS_memory         equ "�訡�� �뤥����� ����� XMS."
msg_Error_determining_physical_address  equ "�訡�� ��।������ 䨧��᪮�� ����."
