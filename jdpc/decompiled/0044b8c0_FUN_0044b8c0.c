/*
 * Function: FUN_0044b8c0
 * Entry:    0044b8c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0044b8c0(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    if ((param_2[3] & 0x1000) != 0) {
      FUN_004478b0(param_2);
    }
  }
  else if ((param_2[3] & 0x1000) != 0) {
    FUN_004478b0(param_2);
    param_2[6] = 0;
    param_2[3] = param_2[3] & 0xffffeeff;
    *param_2 = 0;
    param_2[2] = 0;
    return;
  }
  return;
}


