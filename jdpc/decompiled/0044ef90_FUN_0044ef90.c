/*
 * Function: FUN_0044ef90
 * Entry:    0044ef90
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0044ef90(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


