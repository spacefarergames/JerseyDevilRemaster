/*
 * Function: FUN_00406430
 * Entry:    00406430
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406430(void)

{
  char cVar1;
  DWORD DVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  tagMSG tStack_1c;
  
  FUN_0042bb80();
  FUN_004112a0();
  FUN_0043ff60();
  FUN_00440090();
  if ((DAT_004a09a4 == 1) || (DAT_004a09a4 == 0)) {
    (*DAT_005618e0)();
  }
  FUN_004269d0((double)(int)DAT_0053e8c8,DAT_0053e8c0,DAT_0053e8c4);
  FUN_00422a80(DAT_0053e868,DAT_0053e86c);
  if (DAT_004537e4 != 0) {
    FUN_0042dd80(0x5b);
    DVar2 = GetTickCount();
    (*DAT_004a5ea8)();
    DVar3 = GetTickCount();
    if (DVar3 < DVar2 + 3000) {
      do {
        DAT_004e1bdc = 2;
        FUN_0042bd70();
        DAT_004e1bdc = 0;
        if (((DAT_004a5e38 == 0) && (DVar3 = GetTickCount(), DVar2 + 500 < DVar3)) &&
           (FUN_00440cc0(), (~DAT_004d1392 & 8) != 0)) {
          DVar2 = 0;
        }
        BVar4 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
        uVar10 = CONCAT44(DAT_00813b3c,DAT_00813b38);
        if (BVar4 != 0) {
          if (tStack_1c.message == 0x12) goto LAB_0040688a;
          TranslateMessage(&tStack_1c);
          DispatchMessageA(&tStack_1c);
          if (DAT_004537e8 == 1) {
            iVar5 = FUN_00411b60();
            uVar10 = CONCAT44(DAT_00813b3c,DAT_00813b38);
            if (iVar5 == 0) goto LAB_0040688a;
            DAT_004537e8 = DAT_0053e8d8;
          }
        }
        DVar3 = GetTickCount();
      } while (DVar3 < DVar2 + 3000);
    }
    FUN_0042dd80(0x5c);
    DVar2 = GetTickCount();
    (*DAT_004a5ea8)();
    DVar3 = GetTickCount();
    if (DVar3 < DVar2 + 3000) {
      do {
        DAT_004e1bdc = 2;
        FUN_0042bd70();
        DAT_004e1bdc = 0;
        if (((DAT_004a5e38 == 0) && (DVar3 = GetTickCount(), DVar2 + 500 < DVar3)) &&
           (FUN_00440cc0(), (~DAT_004d1392 & 8) != 0)) {
          DVar2 = 0;
        }
        BVar4 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,1);
        uVar10 = CONCAT44(DAT_00813b3c,DAT_00813b38);
        if (BVar4 != 0) {
          if (tStack_1c.message == 0x12) goto LAB_0040688a;
          TranslateMessage(&tStack_1c);
          DispatchMessageA(&tStack_1c);
          if (DAT_004537e8 == 1) {
            iVar5 = FUN_00411b60();
            uVar10 = CONCAT44(DAT_00813b3c,DAT_00813b38);
            if (iVar5 == 0) goto LAB_0040688a;
            DAT_004537e8 = DAT_0053e8d8;
          }
        }
        DVar3 = GetTickCount();
      } while (DVar3 < DVar2 + 3000);
    }
  }
  FUN_0040aa80();
  iVar5 = -1;
  pcVar9 = &DAT_004a5e50;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (iVar5 == -2) {
    *(undefined4 *)(DAT_0053ea20 + 0x10004) = 3;
  }
  else {
    uVar6 = FUN_00444940(&DAT_004a5e50);
    *(undefined4 *)(DAT_0053ea20 + 0x10004) = uVar6;
  }
  FUN_00440b90();
  FUN_00406030();
  if ((*(int *)(DAT_0053ea20 + 0x10004) == 3) && (DAT_004a6120 == 2)) {
    FUN_00408c90(&DAT_008134a0);
  }
  if (DAT_004a6120 == 1) {
    DAT_004a6124 = 0;
    DAT_004a6128 = 0;
  }
  DAT_004e1bdc = 1;
  DAT_004537e8 = 0x11;
  DAT_0053e8d8 = 0x11;
  _DAT_004537ec = 0x11;
  FUN_0043f740();
  if (((*(char *)(DAT_0053ea20 + 0x1005c) == 'd') && (*(int *)(DAT_0053ea20 + 0x10004) != 0x39)) &&
     (DAT_004d18e6 != 0x3c)) {
    *(undefined4 *)(DAT_0053ea20 + 0x10004) = 0x3c;
    *(undefined1 *)(DAT_0053ea20 + 0x10088) = 0;
  }
  DAT_004d18e6 = *(short *)(DAT_0053ea20 + 0x10004);
  FUN_0042dcb0(*(undefined4 *)(DAT_0053ea20 + 0x10004));
  FUN_0043fd00();
  iVar5 = FUN_0042bff0(CONCAT22(extraout_var,*(undefined2 *)(DAT_0053ea20 + 0x10004)),
                       DAT_0053ea20 + 0x200000);
  if (iVar5 != 0) {
    DAT_004537e8 = 0;
    return;
  }
  FUN_0042f920(DAT_004cd990);
  FUN_00444860(1);
  FUN_004401e0(DAT_004d18fc);
  FUN_00420300();
  FUN_004202d0();
  DAT_004cd960 = DAT_004cd960 + 1;
  DAT_004cd968 = 0;
  DAT_004cdfc4 = 0;
  DAT_004cd99c = 1;
  _DAT_004537d8 = 1;
  QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_004a5df0);
  _DAT_00813b18 = (float)_DAT_004a5df0;
  _DAT_00813b28 = 1000.0 / _DAT_00813b18;
  _DAT_00813b08 = _DAT_00813b18 * 0.033333335;
  uVar10 = __ftol();
  iVar7 = (int)((ulonglong)uVar10 >> 0x20);
  iVar5 = (int)uVar10;
  DAT_00813b30 = iVar5;
  DAT_00813b34 = iVar7;
  uVar11 = __ftol();
  DAT_00813b04 = (undefined4)((ulonglong)uVar11 >> 0x20);
  DAT_00813b00 = (undefined4)uVar11;
  iVar8 = -iVar5;
  iVar5 = -(iVar7 + (uint)(iVar5 != 0));
  DAT_00813b58 = iVar8;
  DAT_00813b5c = iVar5;
  uVar10 = __alldiv(uVar10,2,0);
  DAT_00813b24 = (undefined4)((ulonglong)uVar10 >> 0x20);
  DAT_00813b20 = (undefined4)uVar10;
  uVar10 = __allmul(iVar8,iVar5,0x1e,0);
  _DAT_00813b10 = iVar8;
  _DAT_00813b14 = iVar5;
LAB_0040688a:
  DAT_00813b3c = (undefined4)((ulonglong)uVar10 >> 0x20);
  DAT_00813b38 = (undefined4)uVar10;
  return;
}


