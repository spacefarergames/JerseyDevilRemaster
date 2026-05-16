/*
 * Function: FUN_0041f330
 * Entry:    0041f330
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041f330(uint *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = (longlong)param_2 * (longlong)param_3;
  uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (((int)(uint)lVar1 != lVar1) != (int)uVar2 < 0) {
    uVar2 = uVar2 + 1;
  }
  *param_1 = uVar2;
  return;
}


