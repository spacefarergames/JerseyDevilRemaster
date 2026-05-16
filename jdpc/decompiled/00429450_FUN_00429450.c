/*
 * Function: FUN_00429450
 * Entry:    00429450
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00429450(undefined4 *param_1,int param_2)

{
  param_2 = param_2 * param_2 * param_2;
  if (0 < param_2) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0xffffffff;
      param_1 = param_1 + 1;
    }
  }
  return;
}


