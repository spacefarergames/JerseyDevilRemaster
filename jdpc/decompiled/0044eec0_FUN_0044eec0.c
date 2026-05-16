/*
 * Function: FUN_0044eec0
 * Entry:    0044eec0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0044eec0(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_2 + param_1;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}


