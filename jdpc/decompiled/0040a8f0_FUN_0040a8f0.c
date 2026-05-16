/*
 * Function: FUN_0040a8f0
 * Entry:    0040a8f0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0040a8f0(void)

{
  int iVar1;
  int iVar2;
  char local_104 [4];
  char local_100 [4];
  char local_fc [4];
  char local_f8 [4];
  char local_f4;
  
  local_fc = (char  [4])s____bin_config_pc_0045be60._8_4_;
  local_104 = (char  [4])s____bin_config_pc_0045be60._0_4_;
  local_100 = (char  [4])s____bin_config_pc_0045be60._4_4_;
  local_f8 = (char  [4])s____bin_config_pc_0045be60._12_4_;
  local_f4 = s____bin_config_pc_0045be60[0x10];
  iVar1 = FUN_004056f0(local_104,&DAT_0045bbec);
  if (iVar1 != 0) {
    FUN_00444440(iVar1,0,2);
    iVar2 = FUN_004444e0(iVar1);
    FUN_00444440(iVar1,0,0);
    if (iVar2 == 0x98) {
      FUN_00444c90(&DAT_0053e840,0x98,1);
      FUN_00444c10(iVar1);
      if (DAT_0053e840 == 0xf) {
        return;
      }
    }
    else {
      FUN_00444c10(iVar1);
    }
  }
  FUN_0040a6a0(0xff,&DAT_0053e840);
  FUN_0040a600();
  return;
}


