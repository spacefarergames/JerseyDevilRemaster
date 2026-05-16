/*
 * Function: FUN_00410700
 * Entry:    00410700
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00410700(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  if ((DAT_004a09a4 & 2) != 0) {
    FUN_004112e0(param_1,param_2,param_3);
    return;
  }
  if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
    (*DAT_00571900)(param_1,param_2,param_3);
  }
  return;
}


