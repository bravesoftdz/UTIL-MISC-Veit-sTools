Title           language dependant strings: Traditional Chinese (TW)

; module a20.inc
msg_Failed_to_restore_A20_gate          equ "�L�k�^�_ A20 �q�D�C"
;obsoleted
;msg_Returned_successfully_but_A20_rf    equ "���\��^�A���L�L�k�^�_ A20�C"

; module ausschri.inc
thousand_separator                      equ ","

; module boot.inc
msg_frage_harddisk_or_memdisk           equ <"�~��� [",setkeycolour,"�w",setdefaultcolour,"]��(h), [",setkeycolour,"��",setdefaultcolour,"]���Ϻ�(m)�� [",setkeycolour,"��",setdefaultcolour,"]��(f)�H">
key_boot_harddisk                       equ "h"
key_boot_memdisk                        equ "m"
key_boot_floppy                         equ "f"
key_uninstall                           equ "u"
msg_meldung_Lesefehler                  equ "Ū�����~"
msg_meldung_no_bootable_partition       equ "�䤣��i�Ұʪ����ΰϡC"
msg_meldung_bootsector_invalid          equ "�}���ϰ�ñ���򥢡C"

; module call_csm.inc
msg_os2csm_not_found                    equ "�䤣��{���Ҳ� OS2CSM.BIN�C"
msg_Invalid_OS2CSM_BIN                  equ "�L�Ī� OS2CSM.BIN�C"
msg_file_is_to_big_to_load              equ "�ɮפӤj�H�P�L�kŪ���C"
msg_Can_not_rename_OS_debug_file_missing equ "�L�k��W�GOS �����ɮ׿򥢡C"

; module cdloader.tas
msg_loading_part2                       equ "Ū���ĤG�եN�X������ ... "

; module cd_menu.inc
msg_function_not_implemented            equ <"�|�L�k�ϥΦ��\��C",13,10,"�����N���~��",keypress,13,10,0>
msg_bootsector_read_error               equ <"�}���ϰ�Ū�����~�C",13,10,"�����N���~��",keypress,13,10,0>
msg_bootsector_invalid_format           equ <"�L�Ī��}���ϰϡC",13,10,"�����N���~��",keypress,13,10,0>

; module dep16s.inc
msg_invalid_packed_data_header          equ "���L�Ī����Y���Y�C"
msg_packed_data_CRC_failed              equ "�]�˸�� CRC ���~�C"
msg_unpacking_data_failed               equ "�}�ʸ�ƿ��~�C"
msg_unpacked_data_CRC_failed            equ "�}�ʸ�� CRC ���~�C"

; module driveacc.inc
msg_swap_drive_insert                   equ " ���J"
msg_swap_drive_additional_floppy        equ "�}����s�C���]�Y�����ܡ^"
msg_swap_drive_main_bootdisk            equ "�D�n�}���C��"
msg_swap_drive_harddisk                 equ "�w��"
msg_swap_drive_press_key                equ <", ",13,10," �Ϋ����N�� ">

; module format.inc
msg_Memory_disk_memory_is_corrupted     equ "�����ϺЪ��O����X���D�C"
msg_MemDisk_sector_read_error0          equ "MemDisk �ϰ�Ū�����~"
msg_MemDisk_sector_read_error1          equ "."
msg_MemDisk_sector_write_error0         equ "MemDisk �ϰϼg�J���~"
msg_MemDisk_sector_write_error1         equ "."

; module inithd.inc

; module int_0_6.inc
msg_divide_by_zero                      equ "�Q 0 ���}"
msg_invalid_opcode                      equ "�L�Ī��ާ@�X"

; module int13.inc
msg_int13_problem_protected_mode        equ <seterrorcolour,"�s���ϺаO������~�G�w�������O�@�Ҧ��C",setdefaultcolour>

; module int15a.inc
msg_int15a_e820                         equ "�ϥ� INT 15 EAX=E820 'SMAP'"
msg_int15a_e881                         equ "�ϥ� INT 15 AX=e881 'Phoenix 4.0 32-bit'"
msg_int15a_c7                           equ "�ϥ� INT 15 AH=C7 'PS/2'"
msg_int15a_e801                         equ "�ϥ� INT 15 AX=e801 'Phoenix 4.0 16-bit'"
msg_int15a_8a                           equ "�ϥ� INT 15 AH=8A 'Phoenix 4.0 big'"
msg_int15a_da88                         equ "�ϥ� INT 15 AX=DA88 'AMI PCI'"
msg_int15a_88                           equ "�ϥ� INT 15 AH=88 '286'"
msg_Detecting_extended_memory_size      equ "���b���������O���骺�j�p ... "
msg_MB_starting_at_1_MB                 equ " MB �� 1 MB �}�l"
msg_MB_starting_at_16_MB                equ " MB �� 16 MB "
msg_Using_KB_at_Address_1               equ "�ϥ� "
msg_Using_KB_at_Address_2               equ " bytes �b��}"
msg_Using_KB_at_Address_3               equ "."
msg_failed                              equ "�L�ġC"
msg_Not_enough_memory                   equ "�S���������O����"

; module memalloc.inc
msg_DOS_memory_allocation_failed        equ "DOS �O������t���~"
msg_No_free_harddisk_drive_number       equ "�L�i�Τ��Ϻо��N��"
msg_CD_ROM_emulation_terminated         equ "���\�������о����}�������C"
msg_CD_ROM_emulation_did_not_terminate  equ "���о����}���������ѡC"
msg_title_dos                           equ <cls,"MemDisk [DOS] ">
msg_title_bios                          equ <cls,"MemDisk "> ; [BIOS]
msg_title_dos_cdloader                  equ <cls,"CDLoader [DOS] ">
msg_title_bios_cdloader                 equ <cls,"CDLoader "> ; [BIOS]
msg_bootdrive_floppyharddisk            equ "�ҰʺϺЬO�n�ЩάO�w�С]"
msg_bootdrive_cdnoemu                   equ "�ҰʺϺЬO'�D����'�Ҧ������о��]"
msg_bootdrive2                          equ <").">
msg_Disk_0x_installed_1                 equ "�n�о�"
msg_Disk_0x_installed_3                 equ "�G�w�w�ˡC"
msg_Disk_8x_installed_1                 equ "�Ϻ�"
msg_Disk_8x_installed_3                 equ "�G�w�w�ˡC"
msg_MEMBOOT_BIN_corrupted_fragmented    equ <cd_boot_memboot_bin," ���~�����q�ơC">
msg_already_present_SCAD                equ "MemDisk �w�b�O���餤�@�ΡC�� Shift+Ctrl+Alt+Del ���s�}���C"

; module memload.inc
msg_Disk_has_invalid_format             equ <"�ϺФw�榡�ƥ��ѡC",13,10,"�д��J��L���C��ë����N�䭫�աC">
msg_Insert_floppy_with_label_press_key_1 equ "���J�Хܬ� '"
msg_Insert_floppy_with_label_press_key_2 equ "' ���ϺСA�ë����N��C"
msg_Insert_floppy_with_file_press_key_1 equ "���J�㦳 '"
msg_Insert_floppy_with_file_press_key_2 equ "' �ɮת��ϺСA�ë����N��C"
msg_invalid_partition_table_on_memdisk  equ "�b�����ϺФW�����ΰϪ���L�ġC"
msg_No_active_primary_or_extended_part  equ "�䤣��@�Ϊ��D�n�άO�������ΰϡC"
msg_Partition_on_memory_disk_is_not_FAT equ "�b�����ϺФW�����ΰϤ��O FAT�C"
msg_Asking_for_drive_parameters_failed1 equ "�n�D�ϺаѼƿ��~�]�Ϻ�="
msg_Asking_for_drive_parameters_failed2 equ <"�^�C">

msg_Write_error_disk_full               equ "�g�J���~�G�ϺФw��"
msg_directory_full                      equ "�ؿ��w���C"
msg_invalid_cluster_number_2            equ "�L�Ī��O���ƥء]<2�^"
msg_invalid_cluster_number_max          equ "�L�Ī��O���ƥء]>�̤j�ȡ^"
msg_sector_read_error_0                 equ <"�Ϻ�Ū�����~�]�Ϻ�=">
msg_sector_read_error_1                 equ <", cylinder=">
msg_sector_read_error_2                 equ <", head=">
msg_sector_read_error_3                 equ <", sector=">
msg_sector_read_error_4                 equ <"�^�C">
msg_hd_sector_read_error0               equ "�w�кϺ�Ū�����~�]�Ϻ�="
msg_cd_sector_read_error0               equ "���кϰ�Ū�����~�]�Ϻ�="
msg_cd_sector_read_error1               equ ", sector="
msg_cd_sector_read_error3               equ <"�^�C">
msg_invalid_VTOC                        equ "���Ъ����e�ϺЪ����~�C"
msg_can_not_find_boot_directory         equ <"�L�k�b���ФW���i�}���ɮת��ؿ��]",cd_boot_memboot_bin,"�^�C">
msg_boot_directory_is_not_a_directory   equ "�b���ФW�}�ө�}���ɮת��ؿ��ä��O�ؿ��C"
msg_can_not_find_memboot_bin            equ <"�L�k���}���X���ĤG�����]",cd_boot_memboot_bin,"�^�C">
msg_memboot_bin_is_not_a_file           equ <"�}���X���ĤG�����]",cd_boot_memboot_bin,"�^���O�@���ɮסC">
msg_to_many_files_in_cdrom_directory    equ "�b���ФW���}���ɮ׫ʥ]���Ӧh���ɮסC"
msg_invalid_cd_function                 equ "�����\�઺�I�s�L�k�Ω���СC"
msg_update_permissed_by_updatefile      equ "��s���ɮ׭�\�G����ɮ� 'BOOT_UPD.TXT'."
msg_update_permissed_by_volumelabel     equ "��s���ɮ׭�\�G���b���e����� 'BOOT_UPDATE'."
msg_update_not_permissed                equ "�S����s�ɮסG�䤣����Щ��ɮשάO���쪺���� �C"
msg_query_geom_1                        equ "�ϺЪ��X��d�߿��~"
msg_query_geom_3                        equ "."
mgs_k_errorcode_eq                      equ ", Code="

; module readme.inc
msg_readme_not_found                    equ "�䤣���r�ɮסC"
msg_readme_file_is_to_large             equ "��r�ɮפӤj�C"
msg_readme_statusline1                  equ <" �� #">
msg_readme_statusline2                  equ <"  ",019h,018h,"=�˵��ɮסAF7=�j�M�AEsc=���}">
msg_Search_for                          equ "�j�M > "
msg_edit_statusline                     equ "F7=�j�M�AEsc=���}"

msg_edithelp_tab                        equ 9
msg_edithelp_01                         equ "�Q�Ϋ��� PageUp/PageDown ����"
msg_edithelp_02                         equ "Ctrl+PageUp/PageDown= �ɮת��}��������"
msg_edithelp_03                         equ "Home/End= �檺�Ĥ@�r���̫�r"
msg_edithelp_04                         equ "Ctrl+Left/Right= ��e�@�ӡ��U�@�Ӧr���_�Y"
msg_edithelp_05                         equ "Ctrl+Backspace/T/Y= �R��������k����R���檺�r"
msg_edithelp_06                         equ "F7=�j�M�AShift+F7=�A�@��"
msg_edithelp_07                         equ "Ctrl+Ins=�N��ƻs��ŶKï"
msg_edithelp_08                         equ "Shift+Ins=�q�ŶKï���J��"
msg_edithelp_09                         equ "Ins=���� ���J���мg�Ҧ�"
msg_edithelp_10                         equ "Esc=���}�ø߰��x�s�Ұ����ק�"
msg_edithelp_key                        equ "�����N��"

msg_edit_save_changes                   equ "�x�s�ܧ�]y/n/Esc�^�H"
key_edit_save_changes_yes               equ "y"
key_edit_save_changes_no                equ "n"



; module speicher.inc
msg_memory_block_corrupted              equ "�O���鱱��϶����~�C"
msg_Error_allocating_heap_memory        equ "�O���鷸��C"

; module unpackfi.inc
msg_Zero_length_file                    equ "���׬��s���ɮסC"
msg_Unknown_format_damaged_archive      equ "�M�I�����Y�ɩάO���������ɮסC"
msg_packfile_unkn_command               equ "�������ʸ��ɮ׫��O���L�k�ާ@�C"
msg_incorrect_archive_version           equ "���~�����Y�ɪ����C"
msg_unpack_error_no_data                equ "�ʸ˿��~�G�L��ơC"
msg_useless_data_in_archive             equ "���Y�ɤ����L�Ϊ���ơC"

; module xms.inc
msg_No_XMS_2_driver                     equ "�L XMS 2+ �ϺЦs�b�C"
msg_Error_allocating_XMS_memory         equ "�t�m XMS �O������~�C"
msg_Error_determining_physical_address  equ "���������}���~�C"