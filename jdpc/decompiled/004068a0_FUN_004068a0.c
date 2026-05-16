/*
 * Function: FUN_004068a0
 * Entry:    004068a0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004068a0(void)

{
  int iVar1;
  tagMSG local_1c;
  
  DAT_004cd960 = 0;
  DAT_004d238a = 0;
  if (DAT_004d2380 < 1) {
    (*DAT_004a5eb8)();
    return 1;
  }
  if (DAT_004a611c == 0) {
    if (DAT_00513a60 < 1) {
      (*DAT_004a5eb8)();
    }
    else {
      InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
      UpdateWindow(DAT_004a610c);
      _DAT_004a5dd8 = _DAT_004a5dd8 + 1;
    }
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
    while (iVar1 != 0) {
      if (local_1c.message == 0x12) {
        return 0;
      }
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
      iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
    }
  }
  DAT_004d2380 = 0;
  return 1;
}


