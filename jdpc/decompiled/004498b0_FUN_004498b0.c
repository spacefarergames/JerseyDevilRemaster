/*
 * Function: FUN_004498b0
 * Entry:    004498b0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_004498b0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[1];
  param_1[1] = iVar2 + -1;
  if (-1 < iVar2 + -1) {
    bVar1 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    return (uint)bVar1;
  }
  uVar3 = FUN_004453a0(param_1);
  return uVar3;
}


