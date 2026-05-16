/*
 * Function: FUN_00447610
 * Entry:    00447610
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00447610(uint param_1)

{
  if ((param_1 < DAT_00a14e20) &&
     ((*(byte *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00a14d20)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  _DAT_004a6220 = 9;
  DAT_004a6224 = 0;
  return 0xffffffff;
}


