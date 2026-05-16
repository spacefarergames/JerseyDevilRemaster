/*
 * Function: FUN_00406ff0
 * Entry:    00406ff0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00406ff0(void)

{
  int iVar1;
  
  iVar1 = FUN_00406a00();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_004a611c == 0) {
    FUN_00406990();
  }
  else {
    FUN_004069e0();
    _DAT_004a5ddc = _DAT_004a5ddc + 1;
  }
  iVar1 = FUN_004068a0();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00406d60();
  DAT_004a5dd4 = DAT_004a5dd4 + 1;
  return 1;
}


