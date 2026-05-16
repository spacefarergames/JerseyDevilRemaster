/*
 * Function: FUN_00406140
 * Entry:    00406140
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406140(void)

{
  int iVar1;
  
  (*DAT_004a5eb8)();
  DAT_004537c8 = 0;
  DAT_004a611c = 0;
  FUN_00441ea0();
  FUN_00406a00();
  FUN_00406990();
  iVar1 = FUN_004068a0();
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (DAT_004d13b6 < '\x01') break;
    FUN_00406d60();
    DAT_004a5dd4 = DAT_004a5dd4 + 1;
    iVar1 = FUN_00406a00();
    if (iVar1 == 0) {
      return;
    }
    if (DAT_004a611c == 0) {
      FUN_00406990();
    }
    else {
      FUN_004069e0();
      FUN_00441ea0();
      _DAT_004a5ddc = _DAT_004a5ddc + 1;
    }
    iVar1 = FUN_004068a0();
  }
  DAT_004537c8 = 1;
  FUN_00406a00();
  return;
}


