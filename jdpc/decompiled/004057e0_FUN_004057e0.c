/*
 * Function: FUN_004057e0
 * Entry:    004057e0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_004057e0(void)

{
  HWND hWnd;
  BOOL BVar1;
  
  hWnd = FindWindowA(&DAT_004539b8,s_Jersey_Devil_004539bc);
  if (hWnd == (HWND)0x0) {
    return 1;
  }
  BringWindowToTop(hWnd);
  BVar1 = IsIconic(hWnd);
  if (BVar1 != 0) {
    ShowWindow(hWnd,9);
  }
  return 0;
}


