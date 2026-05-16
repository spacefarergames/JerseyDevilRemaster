/*
 * Function: FUN_00401820
 * Entry:    00401820
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00401820(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_10 = 0;
  local_c = 0;
  local_14 = 0x14;
  local_8 = 0;
  local_4 = 0;
  local_c = __ftol();
  local_4 = uVar1;
  local_10 = 0x100e0;
  param_2 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_14,&param_2,0);
  if (iVar2 != 0) {
    return 0;
  }
  return local_8;
}


