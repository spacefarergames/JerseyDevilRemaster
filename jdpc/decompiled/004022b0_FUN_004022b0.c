/*
 * Function: FUN_004022b0
 * Entry:    004022b0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_004022b0(int param_1)

{
  if (param_1 != 1) {
    DAT_00a14d04 = 0;
    DAT_00a14d00 = FUN_004024c0;
    return 1;
  }
  DAT_00a14d04 = 1;
  DAT_00a14d00 = (code *)&LAB_00402430;
  FUN_00402310();
  if (DAT_004a5c98 == 0) {
    DAT_00a14d00 = FUN_004024c0;
  }
  return 1;
}


