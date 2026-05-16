/*
 * Function: FUN_00411f80
 * Entry:    00411f80
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00411f80(int *param_1)

{
  FUN_00411650();
  if (*param_1 != 0) {
    FUN_00411c90(*param_1);
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
  }
  return;
}


