/*
 * Function: FUN_00409d10
 * Entry:    00409d10
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00409d10(void)

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
  int local_17c;
  int local_178;
  int local_168 [3];
  tagMSG tStack_15c;
  undefined4 local_140;
  undefined *local_13c;
  undefined4 local_138 [18];
  char local_f0 [4];
  char local_ec [4];
  char local_e8 [2];
  undefined4 local_e6 [17];
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_9b;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_4a [18];
  
  local_140 = DAT_0045be40;
  local_13c = PTR_DAT_0045be44;
  puVar8 = local_138;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_ec = (char  [4])s_load_game_0045bdf8._4_4_;
  local_e8 = (char  [2])s_load_game_0045bdf8._8_2_;
  local_f0 = (char  [4])s_load_game_0045bdf8._0_4_;
  puVar8 = local_e6;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_9c = DAT_0045be3c;
  local_a0 = DAT_0045be38;
  puVar8 = &local_9b;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_50 = DAT_0045bdb4;
  local_4c = DAT_0045bdb8;
  local_168[0] = 0xc;
  puVar8 = local_4a;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_168[1] = 10;
  local_168[2] = 0x13;
  bVar1 = false;
  bVar2 = false;
  local_178 = 0;
  FUN_004253a0();
  iVar5 = FUN_00425900(s____data_GAMEOVER_TIM_0045be20);
  if (iVar5 == 0) {
    return 0;
  }
  FUN_00424d40(iVar5,0x6ce,4);
  FUN_00443fe0(iVar5);
  InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
  UpdateWindow(DAT_004a610c);
  DAT_004e1bdc = 1;
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x9c),(LPSTR)&local_140,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xc0),local_f0,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xbc),(LPSTR)&local_a0,0x50);
  local_17c = 0;
  iVar5 = 0;
  pcVar3 = _strstr((char *)&local_140,(char *)&DAT_0045bdb4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)&local_140;
    do {
      pcVar3 = pcVar3 + 0x50;
      iVar5 = iVar5 + 1;
      pcVar4 = _strstr(pcVar3,(char *)&DAT_0045bdb4);
    } while (pcVar4 == (char *)0x0);
  }
  while( true ) {
    iVar6 = 0;
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    uVar7 = 0x14a;
    if (0 < iVar5) {
      puVar8 = &local_140;
      do {
        if (iVar6 == local_17c) {
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
        FUN_0040a3f0(0x140,uVar7,0xfffffe70,puVar8);
        DAT_0045bbd4 = 0x3fa00000;
        uVar7 = __ftol();
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 0x14;
      } while (iVar6 < iVar5);
    }
    FUN_00440cc0();
    if (bVar1) {
      if ((~DAT_004d1392 & 0x10) == 0) {
        FUN_00420740(0);
        local_17c = local_17c + -1;
        bVar1 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x10) != 0) {
      bVar1 = true;
    }
    if (bVar2) {
      if ((~DAT_004d1392 & 0x40) == 0) {
        FUN_00420740(0);
        local_17c = local_17c + 1;
        bVar2 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x40) != 0) {
      bVar2 = true;
    }
    if (local_178 == 1) {
      if ((~DAT_004d1392 & 8) == 0) {
        local_178 = 2;
      }
    }
    else if ((~DAT_004d1392 & 8) != 0) {
      local_178 = 1;
    }
    if (local_17c < 0) {
      local_17c = 0;
    }
    if (local_17c == iVar5) {
      local_17c = iVar5 + -1;
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar6 = PeekMessageA(&tStack_15c,(HWND)0x0,0,0,1);
    while (iVar6 != 0) {
      TranslateMessage(&tStack_15c);
      DispatchMessageA(&tStack_15c);
      iVar6 = PeekMessageA(&tStack_15c,(HWND)0x0,0,0,1);
    }
    if (DAT_004537e8 == 1) {
      DAT_004537e8 = 1;
      while ((~DAT_004d1392 & 8) != 0) {
        FUN_00440cc0();
      }
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
      DAT_004e1bdc = 0;
      return 1;
    }
    if ((DAT_004537e8 == 0) || (DAT_004537e8 == 0x13)) break;
    if (local_178 == 2) {
LAB_0040a0e2:
      FUN_00420740(0);
      while ((~DAT_004d1392 & 8) != 0) {
        FUN_00440cc0();
      }
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
      if (local_168[local_17c] == 10) {
        DAT_0053e8d8 = 0xd;
      }
      DAT_004e1bdc = 0;
      return local_168[local_17c];
    }
  }
  local_17c = iVar5 + -1;
  goto LAB_0040a0e2;
}


