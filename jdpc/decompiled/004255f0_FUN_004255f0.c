/*
 * Function: FUN_004255f0
 * Entry:    004255f0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004255f0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  tagMSG tStack_1c;
  
  if (DAT_004a09a4 != 0x10) {
    if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
      _DAT_004a6064 = 0;
    }
    if (param_1 == 0x800) {
      (*DAT_004a5ea8)();
      _DAT_004a6064 = 0;
      DAT_004a6060 = 1;
      DAT_004a60fc = 0;
    }
    else if (DAT_004e1bdc == '\x01') {
      if ((param_1 - DAT_004a60fc < 0x19000) && (param_1 != param_2)) {
        return;
      }
      DAT_004a60fc = param_1;
    }
    (*DAT_004a5eb4)();
    DAT_0066d600 = (float)(-6 - DAT_0051d7fc);
    DAT_0066d610 = DAT_0045c878;
    DAT_0066d614 = DAT_0045d074;
    DAT_0066d618 = DAT_0045cc74;
    DAT_0066d5ec = 0x6cb;
    _DAT_0066d5f0 = 0;
    _DAT_0066d5f4 = 0;
    _DAT_0066d5f8 = 639.0;
    _DAT_0066d5fc = 0x43ef8000;
    DAT_0066d61c = DAT_0045d074;
    DAT_0066d620 = DAT_0045c878;
    DAT_0066d624 = 0x3d800000;
    DAT_0066d628 = DAT_0045cc74;
    DAT_0066d62c = 0x3d800000;
    DAT_0066d604 = DAT_0066d600;
    DAT_0066d608 = DAT_0066d600;
    DAT_0066d60c = DAT_0066d600;
    (*DAT_004a5ea4)();
    DAT_00513a60 = DAT_00513a60 + 1;
    if (DAT_004e1bdc == '\x01') {
      fVar1 = ((float)param_1 * 300.0) / (float)param_2;
      iVar3 = __ftol();
      if (DAT_004a60f8 != iVar3) {
        fVar2 = (fVar1 - -109.0) * 0.001953125;
        DAT_004a60f8 = iVar3;
        (*DAT_004a5eb4)();
        DAT_0066d600 = (float)-DAT_0051d7fc;
        _DAT_0066d5f8 = fVar1 * 1.25;
        _DAT_0066d5f0 = 0x43080000;
        _DAT_0066d5f4 = 0x43cc8000;
        _DAT_0066d5fc = 0x41800000;
        DAT_0066d610 = 0x3e5a0000;
        DAT_0066d614 = 0x3d000000;
        DAT_0066d61c = 0x3d000000;
        DAT_0066d620 = 0x3e5a0000;
        DAT_0066d624 = 0;
        DAT_0066d62c = 0;
        DAT_0066d604 = DAT_0066d600;
        DAT_0066d608 = DAT_0066d600;
        DAT_0066d60c = DAT_0066d600;
        DAT_0066d618 = fVar2;
        DAT_0066d628 = fVar2;
        (*DAT_004a5ea4)();
        DAT_00513a60 = DAT_00513a60 + 1;
      }
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
    while (iVar3 != 0) {
      TranslateMessage(&tStack_1c);
      DispatchMessageA(&tStack_1c);
      if (DAT_004537e8 == 1) {
        iVar3 = FUN_00411b60();
        if (iVar3 == 0) break;
        DAT_004537e8 = DAT_0053e8d8;
      }
      iVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
    }
    if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
      _DAT_004a6064 = 0xff;
    }
  }
  return;
}


