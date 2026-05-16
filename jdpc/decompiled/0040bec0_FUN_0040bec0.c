/*
 * Function: FUN_0040bec0
 * Entry:    0040bec0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0040bec0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_274;
  undefined4 local_258 [3];
  tagMSG tStack_24c;
  undefined *local_230;
  undefined4 local_22c [19];
  undefined2 local_1e0;
  undefined1 local_1de;
  undefined4 local_1dd [19];
  char local_190 [4];
  char local_18c [2];
  char local_18a;
  undefined4 local_189 [18];
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_13a [18];
  undefined1 local_f0 [80];
  CHAR local_a0 [80];
  CHAR local_50 [80];
  
  local_230 = PTR_DAT_0045bf3c;
  puVar12 = local_22c;
  for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_1e0 = DAT_0045bf38;
  local_1de = DAT_0045bf3a;
  puVar12 = local_1dd;
  for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  iVar8 = 0;
  *(undefined1 *)puVar12 = 0;
  local_18c = (char  [2])s_return_0045bde4._4_2_;
  local_190 = (char  [4])s_return_0045bde4._0_4_;
  local_18a = s_return_0045bde4[6];
  bVar2 = false;
  puVar12 = local_189;
  for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  bVar3 = false;
  *(undefined1 *)puVar12 = 0;
  local_13c = DAT_0045bdb8;
  local_140 = DAT_0045bdb4;
  puVar12 = local_13a;
  for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = 0;
  bVar1 = false;
  local_258[0] = 4;
  local_258[1] = 4;
  local_258[2] = 4;
  bVar5 = false;
  bVar4 = false;
  FUN_004253a0();
  iVar9 = FUN_00425900(s____data_TITLEBACK_TIM_0045bd9c);
  if (iVar9 == 0) {
    return 0;
  }
  FUN_00424d40(iVar9,0x6ce,4);
  FUN_00443fe0(iVar9);
  FUN_00444690(local_f0,s____data_TITLE_d_TIM_0045bd88,DAT_0053e848);
  iVar9 = FUN_00425900(local_f0);
  if (iVar9 == 0) {
    return 0;
  }
  FUN_00424d40(iVar9,0x6cf,4);
  FUN_00443fe0(iVar9);
  iVar9 = 0;
  local_274 = 0;
  pcVar7 = _strstr((char *)&local_230,(char *)&DAT_0045bdb4);
  if (pcVar7 == (char *)0x0) {
    ppuVar10 = &local_230;
    do {
      ppuVar10 = ppuVar10 + 0x14;
      iVar9 = iVar9 + 1;
      pcVar7 = _strstr((char *)ppuVar10,(char *)&DAT_0045bdb4);
      local_274 = iVar9;
    } while (pcVar7 == (char *)0x0);
  }
  InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
  UpdateWindow(DAT_004a610c);
  DAT_004e1bdc = 1;
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x74),local_50,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x70),local_a0,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xa0),local_190,0x50);
  do {
    if ((bVar1) && (iVar8 == local_274 + -1)) goto LAB_0040c43e;
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    FUN_00444690(&local_230,s__s____i___0045bf2c,local_50,DAT_0053e870);
    FUN_00444690(&local_1e0,s__s____i___0045bf2c,local_a0,DAT_0053e874);
    uVar11 = 0x14a;
    iVar9 = 0;
    if (0 < local_274) {
      ppuVar10 = &local_230;
      do {
        if (iVar9 == iVar8) {
          uVar16 = 0x3f800000;
          uVar15 = 0x3f800000;
          uVar14 = 0x3f800000;
          uVar13 = 0x3f800000;
        }
        else {
          uVar16 = 0x3f4ccccd;
          uVar15 = 0x3e4ccccd;
          uVar14 = 0x3e4ccccd;
          uVar13 = 0x3e4ccccd;
        }
        (*DAT_004a5eac)(uVar13,uVar14,uVar15,uVar16);
        FUN_0040a3f0(0x140,uVar11,0xfffffe70,ppuVar10);
        DAT_0045bbd4 = 0x3fa00000;
        uVar11 = __ftol();
        iVar9 = iVar9 + 1;
        ppuVar10 = ppuVar10 + 0x14;
      } while (iVar9 < local_274);
    }
    FUN_00440cc0();
    if (bVar2) {
      if ((~DAT_004d1392 & 0x10) == 0) {
        FUN_00420740(0);
        iVar8 = iVar8 + -1;
        bVar2 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x10) != 0) {
      bVar2 = true;
    }
    if (bVar3) {
      if ((~DAT_004d1392 & 0x40) == 0) {
        FUN_00420740(0);
        iVar8 = iVar8 + 1;
        bVar3 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x40) != 0) {
      bVar3 = true;
    }
    bVar6 = ~DAT_004d1392;
    if (bVar1) {
      if ((bVar6 & 8) == 0) {
        bVar1 = false;
      }
    }
    else if ((bVar6 & 8) != 0) {
      bVar1 = true;
    }
    if (iVar8 < 0) {
      iVar8 = local_274 + -1;
    }
    if (iVar8 == local_274) {
      iVar8 = 0;
    }
    if ((!bVar4) && ((bVar6 & 0x20) != 0)) {
      bVar4 = true;
      if (iVar8 == 0) {
        DAT_0053e870 = DAT_0053e870 + 5;
        FUN_00420740(0);
        if (100 < DAT_0053e870) {
          DAT_0053e870 = 100;
        }
      }
      else if (iVar8 == 1) {
        DAT_0053e874 = DAT_0053e874 + 5;
        FUN_00420740(0);
        if (100 < DAT_0053e874) {
          DAT_0053e874 = 100;
        }
        FUN_004202d0();
      }
    }
    if ((!bVar5) && ((~DAT_004d1392 & 0x80) != 0)) {
      bVar5 = true;
      if (iVar8 == 0) {
        DAT_0053e870 = DAT_0053e870 + -5;
        FUN_00420740(0);
        if (DAT_0053e870 < 0) {
          DAT_0053e870 = 0;
        }
      }
      else if (iVar8 == 1) {
        DAT_0053e874 = DAT_0053e874 + -5;
        FUN_00420740(0);
        if (DAT_0053e874 < 0) {
          DAT_0053e874 = 0;
        }
        FUN_004202d0();
      }
    }
    if ((bVar5) && ((~DAT_004d1392 & 0x80) == 0)) {
      bVar5 = false;
    }
    if ((bVar4) && ((~DAT_004d1392 & 0x20) == 0)) {
      bVar4 = false;
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar9 = PeekMessageA(&tStack_24c,(HWND)0x0,0,0,1);
    while (iVar9 != 0) {
      TranslateMessage(&tStack_24c);
      DispatchMessageA(&tStack_24c);
      iVar9 = PeekMessageA(&tStack_24c,(HWND)0x0,0,0,1);
    }
    if (DAT_004537e8 == 1) {
      DAT_004537e8 = 1;
      while ((~DAT_004d1392 & 8) != 0) {
        FUN_00440cc0();
      }
      s_return_0045bde4[0] = (char)s_return_0045bde4._0_4_;
      s_return_0045bde4[1] = SUB41(s_return_0045bde4._0_4_,1);
      s_return_0045bde4[2] = SUB41(s_return_0045bde4._0_4_,2);
      s_return_0045bde4[3] = SUB41(s_return_0045bde4._0_4_,3);
      s_return_0045bde4[4] = (char)s_return_0045bde4._4_2_;
      s_return_0045bde4[5] = SUB21(s_return_0045bde4._4_2_,1);
      DAT_004e1bdc = 0;
      return 1;
    }
  } while ((DAT_004537e8 != 0) && (DAT_004537e8 != 0x13));
  iVar8 = local_274 + -1;
LAB_0040c43e:
  FUN_00420740(1);
  DAT_004e1bdc = 0;
  return local_258[iVar8];
}


