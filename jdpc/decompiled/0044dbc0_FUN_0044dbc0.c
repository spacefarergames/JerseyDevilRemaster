/*
 * Function: FUN_0044dbc0
 * Entry:    0044dbc0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_0044dbc0(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_004a4f54) {
    uVar1 = FUN_00448760(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_004a4d48[param_1 * 2] & 8;
}


