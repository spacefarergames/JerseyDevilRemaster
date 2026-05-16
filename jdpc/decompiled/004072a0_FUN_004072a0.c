/*
 * Function: FUN_004072a0
 * Entry:    004072a0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_004072a0(uint param_1)

{
  if ((int)param_1 < 0) {
    param_1 = -param_1;
  }
  return *(undefined4 *)(&DAT_00457a68 + (param_1 & 0xfff) * 4);
}


