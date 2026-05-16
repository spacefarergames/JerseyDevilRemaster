/*
 * Function: FUN_0044b7f0
 * Entry:    0044b7f0
 * Warning:  Decompiled pseudocode, not original source.
 */


byte FUN_0044b7f0(uint param_1)

{
  if (DAT_00a14e20 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}


