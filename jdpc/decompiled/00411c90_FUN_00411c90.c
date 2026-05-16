/*
 * Function: FUN_00411c90
 * Entry:    00411c90
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00411c90(HWND param_1)

{
  FUN_00425490();
  if ((DAT_004a09a4 & 2) == 0) {
    if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
      (*DAT_005618e4)();
    }
  }
  else {
    FUN_00411b30();
    FUN_00411650();
  }
  DAT_004a09a4 = 0x10;
  if ((DAT_004a5ee8 != (HDC)0x0) && (param_1 != (HWND)0x0)) {
    ReleaseDC(param_1,DAT_004a5ee8);
  }
  DAT_004a5ee8 = (HDC)0x0;
  return;
}


