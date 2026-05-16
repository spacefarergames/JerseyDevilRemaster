/*
 * Function: FUN_00409240
 * Entry:    00409240
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409240(void)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_220;
  int local_21c;
  undefined4 local_20c [4];
  tagMSG tStack_1fc;
  char local_1e0 [4];
  char local_1dc [2];
  undefined1 local_1da;
  undefined4 local_1d9 [18];
  undefined4 local_190;
  undefined *local_18c;
  undefined1 local_188;
  undefined4 local_187;
  char local_140 [4];
  char local_13c [4];
  char local_138 [2];
  undefined1 local_136;
  undefined4 local_135 [17];
  undefined4 local_f0;
  undefined2 local_ec;
  undefined4 local_ea [18];
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_9a [18];
  undefined1 local_50 [80];
  
  local_1e0 = (char  [4])s_start_0045bddc._0_4_;
  local_1dc = (char  [2])s_start_0045bddc._4_2_;
  local_1da = DAT_0045bde2;
  puVar8 = local_1d9;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = 0;
  local_18c = PTR_DAT_0045bdd4;
  local_190 = DAT_0045bdd0;
  local_188 = DAT_0045bdd8;
  puVar8 = &local_187;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_20c[0] = 0x11;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_13c = (char  [4])s_load_game_0045bdc4._4_4_;
  local_140 = (char  [4])s_load_game_0045bdc4._0_4_;
  local_136 = DAT_0045bdce;
  local_138 = (char  [2])s_load_game_0045bdc4._8_2_;
  puVar8 = local_135;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_20c[1] = 4;
  *(undefined1 *)puVar8 = 0;
  local_f0 = DAT_0045bdbc;
  local_ec = DAT_0045bdc0;
  local_20c[2] = 10;
  puVar8 = local_ea;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_20c[3] = 0x13;
  *(undefined2 *)puVar8 = 0;
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
  local_21c = 0;
  _DAT_004a6064 = 0;
  DAT_004a6060 = 1;
  thunk_FUN_004216c0();
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
  InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
  UpdateWindow(DAT_004a610c);
  DAT_004e1bdc = 1;
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 200),local_1e0,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xc4),(LPSTR)&local_190,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xc0),local_140,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xbc),(LPSTR)&local_f0,0x50);
  local_220 = 0;
  iVar5 = 0;
  pcVar3 = _strstr(local_1e0,(char *)&DAT_0045bdb4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = local_1e0;
    do {
      pcVar3 = pcVar3 + 0x50;
      iVar5 = iVar5 + 1;
      pcVar4 = _strstr(pcVar3,(char *)&DAT_0045bdb4);
    } while (pcVar4 == (char *)0x0);
  }
  while( true ) {
    iVar6 = 0;
    FUN_00440cc0();
    puVar9 = &stack0xfffffdd0;
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    uVar7 = 0x14a;
    if (0 < iVar5) {
      do {
        puVar9 = puVar9 + 0x50;
        if (iVar6 == local_220) {
          uVar13 = 0x3f800000;
          uVar12 = 0x3f800000;
          uVar11 = 0x3f800000;
          uVar10 = 0x3f800000;
        }
        else {
          uVar13 = 0x3f4ccccd;
          uVar12 = 0x3e4ccccd;
          uVar11 = 0x3e4ccccd;
          uVar10 = 0x3e4ccccd;
        }
        (*DAT_004a5eac)(uVar10,uVar11,uVar12,uVar13);
        FUN_0040a3f0(0x140,uVar7,0xfffffe70,puVar9);
        DAT_0045bbd4 = 0x3fa00000;
        uVar7 = __ftol();
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    if (bVar1) {
      if ((~DAT_004d1392 & 0x10) == 0) {
        FUN_00420740(0);
        local_220 = local_220 + -1;
        bVar1 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x10) != 0) {
      bVar1 = true;
    }
    if (bVar2) {
      if ((~DAT_004d1392 & 0x40) == 0) {
        FUN_00420740(0);
        local_220 = local_220 + 1;
        bVar2 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x40) != 0) {
      bVar2 = true;
    }
    if (local_21c == 1) {
      if ((~DAT_004d1392 & 8) == 0) {
        local_21c = 2;
      }
    }
    else if ((~DAT_004d1392 & 8) != 0) {
      local_21c = 1;
    }
    if (local_220 < 0) {
      local_220 = iVar5 + -1;
    }
    if (local_220 == iVar5) {
      local_220 = 0;
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar6 = PeekMessageA(&tStack_1fc,(HWND)0x0,0,0,1);
    while (iVar6 != 0) {
      TranslateMessage(&tStack_1fc);
      DispatchMessageA(&tStack_1fc);
      iVar6 = PeekMessageA(&tStack_1fc,(HWND)0x0,0,0,1);
    }
    if (DAT_004537e8 == 1) {
      DAT_004537e8 = 1;
      while ((~DAT_004d1392 & 8) != 0) {
        FUN_00440cc0();
      }
      s_load_game_0045bdc4[0] = (char)s_load_game_0045bdc4._0_4_;
      s_load_game_0045bdc4[1] = SUB41(s_load_game_0045bdc4._0_4_,1);
      s_load_game_0045bdc4[2] = SUB41(s_load_game_0045bdc4._0_4_,2);
      s_load_game_0045bdc4[3] = SUB41(s_load_game_0045bdc4._0_4_,3);
      s_load_game_0045bdc4[4] = (char)s_load_game_0045bdc4._4_4_;
      s_load_game_0045bdc4[5] = SUB41(s_load_game_0045bdc4._4_4_,1);
      s_load_game_0045bdc4[6] = SUB41(s_load_game_0045bdc4._4_4_,2);
      s_load_game_0045bdc4[7] = SUB41(s_load_game_0045bdc4._4_4_,3);
      s_load_game_0045bdc4[8] = (char)s_load_game_0045bdc4._8_2_;
      s_load_game_0045bdc4[9] = SUB21(s_load_game_0045bdc4._8_2_,1);
      s_start_0045bddc[0] = (char)s_start_0045bddc._0_4_;
      s_start_0045bddc[1] = SUB41(s_start_0045bddc._0_4_,1);
      s_start_0045bddc[2] = SUB41(s_start_0045bddc._0_4_,2);
      s_start_0045bddc[3] = SUB41(s_start_0045bddc._0_4_,3);
      s_start_0045bddc[4] = (char)s_start_0045bddc._4_2_;
      s_start_0045bddc[5] = SUB21(s_start_0045bddc._4_2_,1);
      DAT_004e1bdc = 0;
      return 1;
    }
    if ((DAT_004537e8 == 0) || (DAT_004537e8 == 0x13)) break;
    if (local_21c == 2) {
LAB_004096fa:
      FUN_00420740(1);
      DAT_004e1bdc = 0;
      thunk_FUN_004218c0();
      return local_20c[local_220];
    }
  }
  local_220 = iVar5 + -1;
  goto LAB_004096fa;
}


