/*
 * Function: FUN_00409730
 * Entry:    00409730
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00409730(int param_1)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  UINT uID;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_2cc;
  int local_2c4;
  undefined4 local_2b4 [6];
  tagMSG tStack_29c;
  undefined4 local_280;
  undefined2 local_27c;
  undefined4 local_27a [18];
  char local_230 [4];
  char local_22c [4];
  char local_228;
  undefined4 local_227;
  char local_1e0 [4];
  char local_1dc [2];
  char local_1da;
  undefined4 local_1d9 [18];
  char local_190 [4];
  char local_18c [4];
  char local_188 [2];
  undefined4 local_186 [17];
  char local_140 [4];
  char local_13c [4];
  char local_138 [2];
  undefined4 local_136 [17];
  char local_f0 [4];
  char local_ec [2];
  char local_ea;
  undefined4 local_e9 [18];
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_9a [18];
  undefined1 local_50 [80];
  
  local_280 = DAT_0045be18;
  local_27c = DAT_0045be1c;
  puVar8 = local_27a;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_2b4[0] = 5;
  *(undefined2 *)puVar8 = 0;
  local_228 = s_controls_0045be0c[8];
  local_22c = (char  [4])s_controls_0045be0c._4_4_;
  local_230 = (char  [4])s_controls_0045be0c._0_4_;
  puVar8 = &local_227;
  for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_2b4[1] = 7;
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_1da = s_sounds_0045be04[6];
  local_1dc = (char  [2])s_sounds_0045be04._4_2_;
  local_1e0 = (char  [4])s_sounds_0045be04._0_4_;
  puVar8 = local_1d9;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_2b4[2] = 6;
  *(undefined1 *)puVar8 = 0;
  local_188 = (char  [2])s_load_game_0045bdf8._8_2_;
  local_18c = (char  [4])s_load_game_0045bdf8._4_4_;
  local_190 = (char  [4])s_load_game_0045bdf8._0_4_;
  puVar8 = local_186;
  for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_138 = (char  [2])s_quit_game_0045bdec._8_2_;
  local_13c = (char  [4])s_quit_game_0045bdec._4_4_;
  local_140 = (char  [4])s_quit_game_0045bdec._0_4_;
  puVar8 = local_136;
  for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_ea = s_return_0045bde4[6];
  local_ec = (char  [2])s_return_0045bde4._4_2_;
  local_f0 = (char  [4])s_return_0045bde4._0_4_;
  puVar8 = local_e9;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = 0;
  local_9c = DAT_0045bdb8;
  local_a0 = DAT_0045bdb4;
  puVar8 = local_9a;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_2b4[3] = 10;
  local_2b4[4] = 0x13;
  local_2b4[5] = 0x11;
  bVar1 = false;
  bVar2 = false;
  local_2c4 = 0;
  FUN_004253a0();
  iVar6 = FUN_00425900(s____data_TITLEBACK_TIM_0045bd9c);
  if (iVar6 == 0) {
    return 0;
  }
  FUN_00424d40(iVar6,0x6ce,4);
  FUN_00443fe0(iVar6);
  FUN_00444690(local_50,s____data_TITLE_d_TIM_0045bd88,DAT_0053e848);
  iVar6 = FUN_00425900(local_50);
  if (iVar6 == 0) {
    return 0;
  }
  FUN_00424d40(iVar6,0x6cf,4);
  FUN_00443fe0(iVar6);
  iVar6 = 0;
  local_2cc = 0;
  pcVar3 = _strstr((char *)&local_280,(char *)&DAT_0045bdb4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)&local_280;
    do {
      pcVar3 = pcVar3 + 0x50;
      iVar6 = iVar6 + 1;
      pcVar4 = _strstr(pcVar3,(char *)&DAT_0045bdb4);
    } while (pcVar4 == (char *)0x0);
  }
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xac),(LPSTR)&local_280,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xa8),local_230,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xa4),local_1e0,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xc0),local_190,0x50);
  if (param_1 == 0) {
    uID = *(UINT *)(PTR_DAT_004537c0 + 0xbc);
  }
  else {
    uID = *(UINT *)(PTR_DAT_004537c0 + 0xb4);
  }
  LoadStringA(DAT_004a6108,uID,local_140,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xa0),local_f0,0x50);
  InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
  UpdateWindow(DAT_004a610c);
  DAT_004e1bdc = 1;
  while( true ) {
    iVar7 = 0;
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    uVar5 = __ftol();
    if (0 < iVar6) {
      puVar8 = &local_280;
      do {
        if (iVar7 == local_2cc) {
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
        FUN_0040a3f0(0x140,uVar5,0xfffffe70,puVar8);
        DAT_0045bbd4 = 0x3fa00000;
        uVar5 = __ftol();
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 0x14;
      } while (iVar7 < iVar6);
    }
    FUN_00440cc0();
    if (bVar1) {
      if ((~DAT_004d1392 & 0x10) == 0) {
        FUN_00420740(0);
        local_2cc = local_2cc + -1;
        bVar1 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x10) != 0) {
      bVar1 = true;
    }
    if (bVar2) {
      if ((~DAT_004d1392 & 0x40) == 0) {
        FUN_00420740(0);
        local_2cc = local_2cc + 1;
        bVar2 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x40) != 0) {
      bVar2 = true;
    }
    if (local_2c4 == 1) {
      if ((~DAT_004d1392 & 8) == 0) {
        local_2c4 = 2;
      }
    }
    else if ((~DAT_004d1392 & 8) != 0) {
      local_2c4 = 1;
    }
    if (local_2cc < 0) {
      local_2cc = iVar6 + -1;
    }
    if (iVar6 <= local_2cc) {
      local_2cc = 0;
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar7 = PeekMessageA(&tStack_29c,(HWND)0x0,0,0,1);
    while (iVar7 != 0) {
      TranslateMessage(&tStack_29c);
      DispatchMessageA(&tStack_29c);
      iVar7 = PeekMessageA(&tStack_29c,(HWND)0x0,0,0,1);
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
      s_quit_game_0045bdec[0] = (char)s_quit_game_0045bdec._0_4_;
      s_quit_game_0045bdec[1] = SUB41(s_quit_game_0045bdec._0_4_,1);
      s_quit_game_0045bdec[2] = SUB41(s_quit_game_0045bdec._0_4_,2);
      s_quit_game_0045bdec[3] = SUB41(s_quit_game_0045bdec._0_4_,3);
      s_quit_game_0045bdec[4] = (char)s_quit_game_0045bdec._4_4_;
      s_quit_game_0045bdec[5] = SUB41(s_quit_game_0045bdec._4_4_,1);
      s_quit_game_0045bdec[6] = SUB41(s_quit_game_0045bdec._4_4_,2);
      s_quit_game_0045bdec[7] = SUB41(s_quit_game_0045bdec._4_4_,3);
      s_quit_game_0045bdec[8] = (char)s_quit_game_0045bdec._8_2_;
      s_quit_game_0045bdec[9] = SUB21(s_quit_game_0045bdec._8_2_,1);
      s_load_game_0045bdf8[0] = (char)s_load_game_0045bdf8._0_4_;
      s_load_game_0045bdf8[1] = SUB41(s_load_game_0045bdf8._0_4_,1);
      s_load_game_0045bdf8[2] = SUB41(s_load_game_0045bdf8._0_4_,2);
      s_load_game_0045bdf8[3] = SUB41(s_load_game_0045bdf8._0_4_,3);
      s_load_game_0045bdf8[4] = (char)s_load_game_0045bdf8._4_4_;
      s_load_game_0045bdf8[5] = SUB41(s_load_game_0045bdf8._4_4_,1);
      s_load_game_0045bdf8[6] = SUB41(s_load_game_0045bdf8._4_4_,2);
      s_load_game_0045bdf8[7] = SUB41(s_load_game_0045bdf8._4_4_,3);
      s_load_game_0045bdf8[8] = (char)s_load_game_0045bdf8._8_2_;
      s_load_game_0045bdf8[9] = SUB21(s_load_game_0045bdf8._8_2_,1);
      s_sounds_0045be04[0] = (char)s_sounds_0045be04._0_4_;
      s_sounds_0045be04[1] = SUB41(s_sounds_0045be04._0_4_,1);
      s_sounds_0045be04[2] = SUB41(s_sounds_0045be04._0_4_,2);
      s_sounds_0045be04[3] = SUB41(s_sounds_0045be04._0_4_,3);
      s_sounds_0045be04[4] = (char)s_sounds_0045be04._4_2_;
      s_sounds_0045be04[5] = SUB21(s_sounds_0045be04._4_2_,1);
      s_controls_0045be0c[0] = (char)s_controls_0045be0c._0_4_;
      s_controls_0045be0c[1] = SUB41(s_controls_0045be0c._0_4_,1);
      s_controls_0045be0c[2] = SUB41(s_controls_0045be0c._0_4_,2);
      s_controls_0045be0c[3] = SUB41(s_controls_0045be0c._0_4_,3);
      s_controls_0045be0c[4] = (char)s_controls_0045be0c._4_4_;
      s_controls_0045be0c[5] = SUB41(s_controls_0045be0c._4_4_,1);
      s_controls_0045be0c[6] = SUB41(s_controls_0045be0c._4_4_,2);
      s_controls_0045be0c[7] = SUB41(s_controls_0045be0c._4_4_,3);
      DAT_004e1bdc = 0;
      return 1;
    }
    if ((DAT_004537e8 == 0) || (DAT_004537e8 == 0x13)) break;
    if (local_2c4 == 2) {
LAB_00409cde:
      FUN_00420740(1);
      DAT_004e1bdc = 0;
      return local_2b4[local_2cc];
    }
  }
  local_2cc = iVar6 + -1;
  goto LAB_00409cde;
}


