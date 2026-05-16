/*
 * Function: FUN_0040a9c0
 * Entry:    0040a9c0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0040a9c0(void)

{
  int iVar1;
  undefined1 local_150 [80];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  
  local_fc = DAT_0045beac;
  local_100 = DAT_0045bea8;
  local_f8 = DAT_0045beb0;
  local_f4 = DAT_0045beb4;
  iVar1 = FUN_004056f0(&local_100,&DAT_0045be5c);
  if (iVar1 != 0) {
    FUN_0040be60(iVar1,s_Language_0045be9c,local_150,0x50);
    FUN_00444fd0(local_150,s_Language__i_0045be90,&DAT_004a5e30);
    FUN_0040be60(iVar1,s_FirstTime_0045be84,local_150,0x50);
    FUN_00444fd0(local_150,s_FirstTime__i_0045be74,&DAT_004a5e38);
    FUN_00444c10(iVar1);
    return 1;
  }
  return 0;
}


