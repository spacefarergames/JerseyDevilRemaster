/*
 * Function: FUN_004488d0
 * Entry:    004488d0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004488d0(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_00443fe0(param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}


