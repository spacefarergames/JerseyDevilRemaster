/*
 * Function: FUN_0044fd60
 * Entry:    0044fd60
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0044fd60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_004501f0(DAT_004a65c8,1,param_1,param_3,param_2,param_3,DAT_004a65c4);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


