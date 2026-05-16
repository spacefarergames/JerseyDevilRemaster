/*
 * Function: FUN_0044eef0
 * Entry:    0044eef0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0044eef0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0044eec0(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0044eec0(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_0044eec0(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_0044eec0(param_1[2],param_2[2],param_1 + 2);
  return;
}


