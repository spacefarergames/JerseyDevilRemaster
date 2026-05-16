/*
 * Function: FUN_00410770
 * Entry:    00410770
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00410770(uint param_1,int param_2)

{
  if ((-1 < DAT_0053e85c) && (DAT_0053e85c < 3)) {
    param_1 = (uint)DAT_004d22de;
    param_2 = __ftol(param_1);
    if (0x8000 < param_2) {
      param_2 = 0x8000;
    }
  }
  _DAT_0051d804 = (float)param_2;
  DAT_0051d808 = (float)-param_2;
  DAT_0051d800 = param_2;
  if (((byte)DAT_004a09a4 & 2) != 0) {
    FUN_00415e90(param_1);
  }
  _DAT_0051d828 = (float)DAT_0051d800;
  _DAT_0051d820 = (float)DAT_0051d800 * -0.75;
  _DAT_0051d824 = (float)(int)(4 / (longlong)DAT_0051d800);
  return;
}


