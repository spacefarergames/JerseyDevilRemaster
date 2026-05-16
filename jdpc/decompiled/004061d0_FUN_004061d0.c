/*
 * Function: FUN_004061d0
 * Entry:    004061d0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004061d0(void)

{
  int iVar1;
  
  DAT_004537c8 = 0;
  if (DAT_004a611c == 0) {
    FUN_00406990();
  }
  else {
    FUN_004069e0();
    _DAT_004a5ddc = _DAT_004a5ddc + 1;
  }
  while( true ) {
    if (DAT_004d13b6 < '\x01') {
      (*DAT_004a5eb8)();
      DAT_004a6060 = 1;
      DAT_0045c06c = 0xff;
      DAT_004537c8 = 1;
      return;
    }
    iVar1 = FUN_004068a0();
    if (iVar1 == 0) break;
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
  }
  return;
}


