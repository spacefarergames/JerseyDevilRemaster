/*
 * Function: FUN_0042bb80
 * Entry:    0042bb80
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined8 FUN_0042bb80(void)

{
  undefined **ppuVar1;
  char *pcVar2;
  
  FUN_0042b960();
  FUN_00445fe0(&DAT_004a0e38);
  FUN_00445fe0(s_TotalPhys_physical_mem_in_byte____004a0e14,DAT_004a61d8);
  FUN_00445fe0(s_AvailPhys_free_physical_mem_in_b_004a0de8,DAT_004a61dc);
  FUN_00445fe0(s_TotalVirtual_user_bytes_of_addre_004a0db8,DAT_004a61e0);
  FUN_00445fe0(s_AvailVirtual_free_user_byte___d_004a0d94,DAT_004a61e4);
  switch(DAT_004a0bf8) {
  case 0:
    pcVar2 = s_Platform_is_DOS_004a0d58;
    break;
  case 1:
    pcVar2 = s_Platform_is_WIN95_004a0d80;
    break;
  case 2:
    pcVar2 = s_Platform_is_NT_004a0d6c;
    break;
  case 3:
    pcVar2 = s_Platform_is_WIN_004a0d44;
    break;
  default:
    goto switchD_0042bbea_default;
  }
  FUN_00445fe0(pcVar2);
switchD_0042bbea_default:
  FUN_00445fe0(s_Version__d__d_004a0d34,DAT_004a61d0,DAT_004a61cc);
  FUN_00445fe0(s_Build_number__d_004a0d20,DAT_004a61d4);
  FUN_00445fe0(&DAT_004a0e38);
  ppuVar1 = &PTR_DAT_004a0d1c;
  if (DAT_004a61f8 == 0) {
    ppuVar1 = (undefined **)&DAT_004a0d18;
  }
  FUN_00445fe0(s_CPU_has_cpuid_instruction___s_004a0cf8,ppuVar1);
  FUN_00445fe0(s_CPU_vender_is__s_004a0ce4,&DAT_004e1c00);
  FUN_00445fe0(s_CPU_family_is__d_004a0cd0,DAT_004e1c10);
  FUN_00445fe0(s_CPU_model_is__d_004a0cbc,DAT_004e1c14);
  if (DAT_004a61f0 != 0) {
    FUN_00445fe0(s_CPU_has_fpu_004a0cac);
  }
  ppuVar1 = &PTR_DAT_004a0d1c;
  if (DAT_004a61f4 == 0) {
    ppuVar1 = (undefined **)&DAT_004a0d18;
  }
  FUN_00445fe0(s_CPU_has_mmx___s_004a0c98,ppuVar1);
  FUN_00445fe0(s_CPU_speed__i_004a0c88,DAT_004a6200);
  FUN_00445fe0(s_Number_of_Processor__d_004a0c70,DAT_004a0c04);
  return CONCAT44(DAT_004a61f4,DAT_004a0c04);
}


