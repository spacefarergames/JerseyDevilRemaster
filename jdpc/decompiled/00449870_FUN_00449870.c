/*
 * Function: FUN_00449870
 * Entry:    00449870
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_00449870(uint param_1)

{
  uint uVar1;
  
  if (DAT_004a4f54 < 2) {
    uVar1 = (byte)PTR_DAT_004a4d48[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_00448760(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


