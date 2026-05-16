/*
 * Function: FUN_0040c460
 * Entry:    0040c460
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0040c460(void)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_1cc;
  int local_1c8;
  undefined4 local_1b8 [3];
  tagMSG tStack_1ac;
  char local_190 [4];
  char local_18c [4];
  char local_188;
  undefined4 local_187;
  char local_140 [4];
  char local_13c [4];
  char local_138;
  undefined4 local_137;
  char local_f0 [4];
  char local_ec [2];
  char local_ea;
  undefined4 local_e9 [18];
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_9a [18];
  undefined1 local_50 [80];
  
  local_190 = (char  [4])s_joystick_0045bf4c._0_4_;
  local_18c = (char  [4])s_joystick_0045bf4c._4_4_;
  local_188 = s_joystick_0045bf4c[8];
  puVar8 = &local_187;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_13c = (char  [4])s_keyboard_0045bf40._4_4_;
  local_140 = (char  [4])s_keyboard_0045bf40._0_4_;
  local_138 = s_keyboard_0045bf40[8];
  puVar8 = &local_137;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_1b8[0] = 0xf;
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_ec = (char  [2])s_return_0045bde4._4_2_;
  local_f0 = (char  [4])s_return_0045bde4._0_4_;
  local_ea = s_return_0045bde4[6];
  local_1b8[1] = 0xe;
  puVar8 = local_e9;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_1b8[2] = 4;
  *(undefined1 *)puVar8 = 0;
  local_9c = DAT_0045bdb8;
  local_a0 = DAT_0045bdb4;
  puVar8 = local_9a;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  bVar1 = false;
  bVar2 = false;
  local_1c8 = 0;
  FUN_004253a0();
  iVar5 = FUN_00425900(s____data_TITLEBACK_TIM_0045bd9c);
  if (iVar5 == 0) {
    return 0;
  }
  FUN_00424d40(iVar5,0x6ce,4);
  FUN_00443fe0(iVar5);
  FUN_00444690(local_50,s____data_TITLE_d_TIM_0045bd88,DAT_0053e848);
  iVar5 = FUN_00425900(local_50);
  if (iVar5 == 0) {
    return 0;
  }
  FUN_00424d40(iVar5,0x6cf,4);
  FUN_00443fe0(iVar5);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x6c),local_190,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x68),local_140,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xa0),local_f0,0x50);
  local_1cc = 0;
  iVar5 = 0;
  pcVar3 = _strstr(local_190,(char *)&DAT_0045bdb4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = local_190;
    do {
      pcVar3 = pcVar3 + 0x50;
      iVar5 = iVar5 + 1;
      pcVar4 = _strstr(pcVar3,(char *)&DAT_0045bdb4);
    } while (pcVar4 == (char *)0x0);
  }
  InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
  UpdateWindow(DAT_004a610c);
  DAT_004e1bdc = 1;
  while( true ) {
    iVar6 = 0;
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    uVar7 = 0x14a;
    if (0 < iVar5) {
      pcVar3 = local_190;
      do {
        if (iVar6 == local_1cc) {
          uVar12 = 0x3f800000;
          uVar11 = 0x3f800000;
          uVar10 = 0x3f800000;
          uVar9 = 0x3f800000;
        }
        else {
          uVar12 = 0x3f4ccccd;
          uVar11 = 0x3e4ccccd;
          uVar10 = 0x3e4ccccd;
          uVar9 = 0x3e4ccccd;
        }
        (*DAT_004a5eac)(uVar9,uVar10,uVar11,uVar12);
        FUN_0040a3f0(0x140,uVar7,0xfffffe70,pcVar3);
        DAT_0045bbd4 = 0x3fa00000;
        uVar7 = __ftol();
        iVar6 = iVar6 + 1;
        pcVar3 = pcVar3 + 0x50;
      } while (iVar6 < iVar5);
    }
    FUN_00440cc0();
    if (bVar1) {
      if ((~DAT_004d1392 & 0x10) == 0) {
        FUN_00420740(0);
        local_1cc = local_1cc + -1;
        bVar1 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x10) != 0) {
      bVar1 = true;
    }
    if (bVar2) {
      if ((~DAT_004d1392 & 0x40) == 0) {
        FUN_00420740(0);
        local_1cc = local_1cc + 1;
        bVar2 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x40) != 0) {
      bVar2 = true;
    }
    if (local_1c8 == 1) {
      if ((~DAT_004d1392 & 8) == 0) {
        local_1c8 = 2;
      }
    }
    else if ((~DAT_004d1392 & 8) != 0) {
      local_1c8 = 1;
    }
    if (local_1cc < 0) {
      local_1cc = iVar5 + -1;
    }
    if (local_1cc == iVar5) {
      local_1cc = 0;
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar6 = PeekMessageA(&tStack_1ac,(HWND)0x0,0,0,1);
    while (iVar6 != 0) {
      TranslateMessage(&tStack_1ac);
      DispatchMessageA(&tStack_1ac);
      iVar6 = PeekMessageA(&tStack_1ac,(HWND)0x0,0,0,1);
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
      s_keyboard_0045bf40[0] = (char)s_keyboard_0045bf40._0_4_;
      s_keyboard_0045bf40[1] = SUB41(s_keyboard_0045bf40._0_4_,1);
      s_keyboard_0045bf40[2] = SUB41(s_keyboard_0045bf40._0_4_,2);
      s_keyboard_0045bf40[3] = SUB41(s_keyboard_0045bf40._0_4_,3);
      s_keyboard_0045bf40[4] = (char)s_keyboard_0045bf40._4_4_;
      s_keyboard_0045bf40[5] = SUB41(s_keyboard_0045bf40._4_4_,1);
      s_keyboard_0045bf40[6] = SUB41(s_keyboard_0045bf40._4_4_,2);
      s_keyboard_0045bf40[7] = SUB41(s_keyboard_0045bf40._4_4_,3);
      s_joystick_0045bf4c[0] = (char)s_joystick_0045bf4c._0_4_;
      s_joystick_0045bf4c[1] = SUB41(s_joystick_0045bf4c._0_4_,1);
      s_joystick_0045bf4c[2] = SUB41(s_joystick_0045bf4c._0_4_,2);
      s_joystick_0045bf4c[3] = SUB41(s_joystick_0045bf4c._0_4_,3);
      s_joystick_0045bf4c[4] = (char)s_joystick_0045bf4c._4_4_;
      s_joystick_0045bf4c[5] = SUB41(s_joystick_0045bf4c._4_4_,1);
      s_joystick_0045bf4c[6] = SUB41(s_joystick_0045bf4c._4_4_,2);
      s_joystick_0045bf4c[7] = SUB41(s_joystick_0045bf4c._4_4_,3);
      DAT_004e1bdc = 0;
      return 1;
    }
    if ((DAT_004537e8 == 0) || (DAT_004537e8 == 0x13)) break;
    if (local_1c8 == 2) {
LAB_0040c89e:
      FUN_00420740(1);
      DAT_004e1bdc = 0;
      return local_1b8[local_1cc];
    }
  }
  local_1cc = iVar5 + -1;
  goto LAB_0040c89e;
}


