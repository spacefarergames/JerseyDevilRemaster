/*
 * Function: FUN_0040d960
 * Entry:    0040d960
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040d960(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_320;
  int local_31c;
  tagMSG tStack_308;
  undefined4 local_2ec [7];
  char local_2d0 [4];
  char local_2cc [4];
  char local_2c8 [4];
  char local_2c4 [2];
  char local_2c2;
  undefined4 local_2c1 [12];
  undefined1 auStack_290 [16];
  undefined4 local_280;
  undefined2 local_27c;
  undefined1 local_27a;
  undefined4 local_279 [10];
  undefined1 auStack_250 [32];
  char local_230 [4];
  char local_22c [4];
  char local_228;
  undefined4 local_227;
  undefined1 auStack_210 [48];
  char local_1e0 [4];
  char local_1dc [4];
  char local_1d8;
  undefined4 local_1d7;
  undefined1 auStack_1d0 [64];
  char local_190 [4];
  char local_18c [4];
  char local_188 [4];
  char local_184 [2];
  char local_182;
  undefined4 local_181 [16];
  char local_140 [4];
  char local_13c [4];
  char local_138 [4];
  char local_134 [2];
  undefined4 local_132 [16];
  char local_f0 [4];
  char local_ec [2];
  char local_ea;
  undefined4 local_e9 [18];
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_9a [18];
  undefined1 local_50 [80];
  
  local_2d0 = (char  [4])s_glide_action___0045bfa0._0_4_;
  local_2cc = (char  [4])s_glide_action___0045bfa0._4_4_;
  local_2c4 = (char  [2])s_glide_action___0045bfa0._12_2_;
  local_2c2 = s_glide_action___0045bfa0[0xe];
  local_2c8 = (char  [4])s_glide_action___0045bfa0._8_4_;
  puVar10 = local_2c1;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)puVar10 = 0;
  local_27a = DAT_0045bf9e;
  local_27c = DAT_0045bf9c;
  local_280 = DAT_0045bf98;
  puVar10 = local_279;
  for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  bVar1 = false;
  *(undefined1 *)puVar10 = 0;
  local_228 = s_crouch___0045bf8c[8];
  local_22c = (char  [4])s_crouch___0045bf8c._4_4_;
  local_230 = (char  [4])s_crouch___0045bf8c._0_4_;
  puVar10 = &local_227;
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  *(undefined1 *)((int)puVar10 + 2) = 0;
  local_1d8 = s_strike___0045bf80[8];
  local_1dc = (char  [4])s_strike___0045bf80._4_4_;
  local_1e0 = (char  [4])s_strike___0045bf80._0_4_;
  puVar10 = &local_1d7;
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  *(undefined1 *)((int)puVar10 + 2) = 0;
  local_190 = (char  [4])s_camera_right___0045bf70._0_4_;
  local_18c = (char  [4])s_camera_right___0045bf70._4_4_;
  local_188 = (char  [4])s_camera_right___0045bf70._8_4_;
  local_182 = s_camera_right___0045bf70[0xe];
  local_184 = (char  [2])s_camera_right___0045bf70._12_2_;
  puVar10 = local_181;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)puVar10 = 0;
  local_140 = (char  [4])s_camera_left___0045bf60._0_4_;
  local_138 = (char  [4])s_camera_left___0045bf60._8_4_;
  local_134 = (char  [2])s_camera_left___0045bf60._12_2_;
  local_13c = (char  [4])s_camera_left___0045bf60._4_4_;
  puVar10 = local_132;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  bVar2 = false;
  *(undefined2 *)puVar10 = 0;
  local_ea = s_return_0045bde4[6];
  local_ec = (char  [2])s_return_0045bde4._4_2_;
  local_f0 = (char  [4])s_return_0045bde4._0_4_;
  puVar10 = local_e9;
  for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)puVar10 = 0;
  local_9c = DAT_0045bdb8;
  local_a0 = DAT_0045bdb4;
  puVar10 = local_9a;
  for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  bVar3 = false;
  *(undefined2 *)puVar10 = 0;
  local_2ec[0] = 0xf;
  local_2ec[1] = 0xf;
  local_2ec[2] = 0xf;
  local_2ec[3] = 0xf;
  local_2ec[4] = 0xf;
  local_2ec[5] = 0xf;
  local_2ec[6] = 7;
  if (DAT_004a5c94 == 0) {
    return 7;
  }
  FUN_004253a0();
  iVar8 = FUN_00425900(s____data_TITLEBACK_TIM_0045bd9c);
  if (iVar8 == 0) {
    return 0;
  }
  FUN_00424d40(iVar8,0x6ce,4);
  FUN_00443fe0(iVar8);
  FUN_00444690(local_50,s____data_TITLE_d_TIM_0045bd88,DAT_0053e848);
  iVar8 = FUN_00425900(local_50);
  if (iVar8 == 0) {
    return 0;
  }
  FUN_00424d40(iVar8,0x6cf,4);
  FUN_00443fe0(iVar8);
  pcVar9 = LoadStringA_exref;
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xa0),local_f0,0x50);
  iVar8 = 0;
  local_320 = 0;
  local_31c = 0;
  pcVar4 = _strstr(local_2d0,(char *)&DAT_0045bdb4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = local_2d0;
    do {
      pcVar4 = pcVar4 + 0x50;
      iVar8 = iVar8 + 1;
      pcVar5 = _strstr(pcVar4,(char *)&DAT_0045bdb4);
      local_31c = iVar8;
    } while (pcVar5 == (char *)0x0);
  }
  InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
  UpdateWindow(DAT_004a610c);
  DAT_004e1bdc = 1;
LAB_0040dcbe:
  do {
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    (*pcVar9)(DAT_004a6108,*(undefined4 *)(PTR_DAT_004537c0 + 100),local_2d0,0x50);
    (*pcVar9)(DAT_004a6108,*(undefined4 *)(PTR_DAT_004537c0 + 0x60),auStack_290,0x50);
    (*pcVar9)(DAT_004a6108,*(undefined4 *)(PTR_DAT_004537c0 + 0x5c),auStack_250,0x50);
    (*pcVar9)(DAT_004a6108,*(undefined4 *)(PTR_DAT_004537c0 + 0x58),auStack_210,0x50);
    (*pcVar9)(DAT_004a6108,*(undefined4 *)(PTR_DAT_004537c0 + 0x54),auStack_1d0,0x50);
    (*pcVar9)(DAT_004a6108,*(undefined4 *)(PTR_DAT_004537c0 + 0x50),local_190,0x50);
    uVar6 = FUN_00402e50(_DAT_0053e888 & 0xff);
    FUN_00444690(local_2d0,s__s____s_0045bf58,local_2d0,uVar6);
    uVar6 = FUN_00402e50(_DAT_0053e888 >> 8 & 0xff);
    FUN_00444690(&local_280,s__s____s_0045bf58,&local_280,uVar6);
    uVar6 = FUN_00402e50(_DAT_0053e888 >> 0x10 & 0xff);
    FUN_00444690(local_230,s__s____s_0045bf58,local_230,uVar6);
    uVar6 = FUN_00402e50(_DAT_0053e888 >> 0x18);
    FUN_00444690(local_1e0,s__s____s_0045bf58,local_1e0,uVar6);
    uVar6 = FUN_00402e50(DAT_0053e88c & 0xff);
    FUN_00444690(local_190,s__s____s_0045bf58,local_190,uVar6);
    uVar6 = FUN_00402e50(DAT_0053e88c >> 8 & 0xff);
    FUN_00444690(local_140,s__s____s_0045bf58,local_140,uVar6);
    uVar6 = 0xfa;
    iVar8 = 0;
    if (0 < local_31c) {
      pcVar4 = local_2d0;
      do {
        if (iVar8 == local_320) {
          uVar14 = 0x3f800000;
          uVar13 = 0x3f800000;
          uVar12 = 0x3f800000;
          uVar11 = 0x3f800000;
        }
        else {
          uVar14 = 0x3f4ccccd;
          uVar13 = 0x3e4ccccd;
          uVar12 = 0x3e4ccccd;
          uVar11 = 0x3e4ccccd;
        }
        (*DAT_004a5eac)(uVar11,uVar12,uVar13,uVar14);
        FUN_0040a3f0(0x140,uVar6,0xfffffe70,pcVar4);
        DAT_0045bbd4 = 0x3fa00000;
        uVar6 = __ftol();
        iVar8 = iVar8 + 1;
        pcVar4 = pcVar4 + 0x50;
      } while (iVar8 < local_31c);
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar8 = PeekMessageA(&tStack_308,(HWND)0x0,0,0,1);
    while (iVar8 != 0) {
      TranslateMessage(&tStack_308);
      DispatchMessageA(&tStack_308);
      iVar8 = PeekMessageA(&tStack_308,(HWND)0x0,0,0,1);
    }
    if (bVar1) {
      do {
        iVar8 = PeekMessageA(&tStack_308,(HWND)0x0,0,0,1);
        while (iVar8 != 0) {
          TranslateMessage(&tStack_308);
          DispatchMessageA(&tStack_308);
          iVar8 = PeekMessageA(&tStack_308,(HWND)0x0,0,0,1);
        }
        iVar8 = FUN_00402e00();
      } while (iVar8 == 0xfe);
      iVar7 = FUN_00402e50(iVar8);
      pcVar9 = LoadStringA_exref;
      if (((iVar7 == 0) || (iVar8 == 10)) || (iVar8 == 9)) goto LAB_0040dcbe;
      iVar7 = 0;
      bVar1 = false;
      do {
        if ((char)(&DAT_0053e888)[iVar7] == iVar8) {
          (&DAT_0053e888)[iVar7] = 0xff;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
      (&DAT_0053e888)[local_320] = (char)iVar8;
      pcVar9 = LoadStringA_exref;
    }
    FUN_00440cc0();
    if (bVar2) {
      if (((~DAT_004d1392 & 0x10) == 0) && (!bVar1)) {
        FUN_00420740(0);
        local_320 = local_320 + -1;
        bVar2 = false;
      }
    }
    else if (((~DAT_004d1392 & 0x10) != 0) && (!bVar1)) {
      bVar2 = true;
    }
    if (bVar3) {
      if (((~DAT_004d1392 & 0x40) == 0) && (!bVar1)) {
        FUN_00420740(0);
        local_320 = local_320 + 1;
        bVar3 = false;
      }
    }
    else if (((~DAT_004d1392 & 0x40) != 0) && (!bVar1)) {
      bVar3 = true;
    }
    if (local_320 < 0) {
      local_320 = local_31c + -1;
    }
    if (local_320 == local_31c) {
      local_320 = 0;
    }
    if (((~DAT_004d1392 & 8) != 0) && (local_320 == local_31c + -1)) goto joined_r0x0040e186;
    if (((~DAT_004d1392 & 8) != 0) && (!bVar1)) {
      iVar8 = FUN_00402e00();
      if (iVar8 == 0xff) goto LAB_0040dcbe;
      bVar1 = true;
      (&DAT_0053e888)[local_320] = 0xfe;
      FUN_00420740(1);
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
      s_camera_left___0045bf60[0] = (char)s_camera_left___0045bf60._0_4_;
      s_camera_left___0045bf60[1] = SUB41(s_camera_left___0045bf60._0_4_,1);
      s_camera_left___0045bf60[2] = SUB41(s_camera_left___0045bf60._0_4_,2);
      s_camera_left___0045bf60[3] = SUB41(s_camera_left___0045bf60._0_4_,3);
      s_camera_left___0045bf60[4] = (char)s_camera_left___0045bf60._4_4_;
      s_camera_left___0045bf60[5] = SUB41(s_camera_left___0045bf60._4_4_,1);
      s_camera_left___0045bf60[6] = SUB41(s_camera_left___0045bf60._4_4_,2);
      s_camera_left___0045bf60[7] = SUB41(s_camera_left___0045bf60._4_4_,3);
      s_camera_left___0045bf60[8] = (char)s_camera_left___0045bf60._8_4_;
      s_camera_left___0045bf60[9] = SUB41(s_camera_left___0045bf60._8_4_,1);
      s_camera_left___0045bf60[10] = SUB41(s_camera_left___0045bf60._8_4_,2);
      s_camera_left___0045bf60[0xb] = SUB41(s_camera_left___0045bf60._8_4_,3);
      s_camera_left___0045bf60[0xc] = (char)s_camera_left___0045bf60._12_2_;
      s_camera_left___0045bf60[0xd] = SUB21(s_camera_left___0045bf60._12_2_,1);
      s_camera_right___0045bf70[0] = (char)s_camera_right___0045bf70._0_4_;
      s_camera_right___0045bf70[1] = SUB41(s_camera_right___0045bf70._0_4_,1);
      s_camera_right___0045bf70[2] = SUB41(s_camera_right___0045bf70._0_4_,2);
      s_camera_right___0045bf70[3] = SUB41(s_camera_right___0045bf70._0_4_,3);
      s_camera_right___0045bf70[4] = (char)s_camera_right___0045bf70._4_4_;
      s_camera_right___0045bf70[5] = SUB41(s_camera_right___0045bf70._4_4_,1);
      s_camera_right___0045bf70[6] = SUB41(s_camera_right___0045bf70._4_4_,2);
      s_camera_right___0045bf70[7] = SUB41(s_camera_right___0045bf70._4_4_,3);
      s_camera_right___0045bf70[8] = (char)s_camera_right___0045bf70._8_4_;
      s_camera_right___0045bf70[9] = SUB41(s_camera_right___0045bf70._8_4_,1);
      s_camera_right___0045bf70[10] = SUB41(s_camera_right___0045bf70._8_4_,2);
      s_camera_right___0045bf70[0xb] = SUB41(s_camera_right___0045bf70._8_4_,3);
      s_camera_right___0045bf70[0xc] = (char)s_camera_right___0045bf70._12_2_;
      s_camera_right___0045bf70[0xd] = SUB21(s_camera_right___0045bf70._12_2_,1);
      s_strike___0045bf80[0] = (char)s_strike___0045bf80._0_4_;
      s_strike___0045bf80[1] = SUB41(s_strike___0045bf80._0_4_,1);
      s_strike___0045bf80[2] = SUB41(s_strike___0045bf80._0_4_,2);
      s_strike___0045bf80[3] = SUB41(s_strike___0045bf80._0_4_,3);
      s_strike___0045bf80[4] = (char)s_strike___0045bf80._4_4_;
      s_strike___0045bf80[5] = SUB41(s_strike___0045bf80._4_4_,1);
      s_strike___0045bf80[6] = SUB41(s_strike___0045bf80._4_4_,2);
      s_strike___0045bf80[7] = SUB41(s_strike___0045bf80._4_4_,3);
      s_crouch___0045bf8c[0] = (char)s_crouch___0045bf8c._0_4_;
      s_crouch___0045bf8c[1] = SUB41(s_crouch___0045bf8c._0_4_,1);
      s_crouch___0045bf8c[2] = SUB41(s_crouch___0045bf8c._0_4_,2);
      s_crouch___0045bf8c[3] = SUB41(s_crouch___0045bf8c._0_4_,3);
      s_crouch___0045bf8c[4] = (char)s_crouch___0045bf8c._4_4_;
      s_crouch___0045bf8c[5] = SUB41(s_crouch___0045bf8c._4_4_,1);
      s_crouch___0045bf8c[6] = SUB41(s_crouch___0045bf8c._4_4_,2);
      s_crouch___0045bf8c[7] = SUB41(s_crouch___0045bf8c._4_4_,3);
      s_glide_action___0045bfa0[0] = (char)s_glide_action___0045bfa0._0_4_;
      s_glide_action___0045bfa0[1] = SUB41(s_glide_action___0045bfa0._0_4_,1);
      s_glide_action___0045bfa0[2] = SUB41(s_glide_action___0045bfa0._0_4_,2);
      s_glide_action___0045bfa0[3] = SUB41(s_glide_action___0045bfa0._0_4_,3);
      s_glide_action___0045bfa0[4] = (char)s_glide_action___0045bfa0._4_4_;
      s_glide_action___0045bfa0[5] = SUB41(s_glide_action___0045bfa0._4_4_,1);
      s_glide_action___0045bfa0[6] = SUB41(s_glide_action___0045bfa0._4_4_,2);
      s_glide_action___0045bfa0[7] = SUB41(s_glide_action___0045bfa0._4_4_,3);
      s_glide_action___0045bfa0[8] = (char)s_glide_action___0045bfa0._8_4_;
      s_glide_action___0045bfa0[9] = SUB41(s_glide_action___0045bfa0._8_4_,1);
      s_glide_action___0045bfa0[10] = SUB41(s_glide_action___0045bfa0._8_4_,2);
      s_glide_action___0045bfa0[0xb] = SUB41(s_glide_action___0045bfa0._8_4_,3);
      s_glide_action___0045bfa0[0xc] = (char)s_glide_action___0045bfa0._12_2_;
      s_glide_action___0045bfa0[0xd] = SUB21(s_glide_action___0045bfa0._12_2_,1);
      DAT_004e1bdc = 0;
      return 1;
    }
    if ((DAT_004537e8 == 0) || (DAT_004537e8 == 0x13)) {
      local_320 = local_31c + -1;
joined_r0x0040e186:
      while ((~DAT_004d1392 & 8) != 0) {
        FUN_00440cc0();
      }
      s_return_0045bde4[0] = (char)s_return_0045bde4._0_4_;
      s_return_0045bde4[1] = SUB41(s_return_0045bde4._0_4_,1);
      s_return_0045bde4[2] = SUB41(s_return_0045bde4._0_4_,2);
      s_return_0045bde4[3] = SUB41(s_return_0045bde4._0_4_,3);
      s_return_0045bde4[4] = (char)s_return_0045bde4._4_2_;
      s_return_0045bde4[5] = SUB21(s_return_0045bde4._4_2_,1);
      s_camera_left___0045bf60[0] = (char)s_camera_left___0045bf60._0_4_;
      s_camera_left___0045bf60[1] = SUB41(s_camera_left___0045bf60._0_4_,1);
      s_camera_left___0045bf60[2] = SUB41(s_camera_left___0045bf60._0_4_,2);
      s_camera_left___0045bf60[3] = SUB41(s_camera_left___0045bf60._0_4_,3);
      s_camera_left___0045bf60[4] = (char)s_camera_left___0045bf60._4_4_;
      s_camera_left___0045bf60[5] = SUB41(s_camera_left___0045bf60._4_4_,1);
      s_camera_left___0045bf60[6] = SUB41(s_camera_left___0045bf60._4_4_,2);
      s_camera_left___0045bf60[7] = SUB41(s_camera_left___0045bf60._4_4_,3);
      s_camera_left___0045bf60[8] = (char)s_camera_left___0045bf60._8_4_;
      s_camera_left___0045bf60[9] = SUB41(s_camera_left___0045bf60._8_4_,1);
      s_camera_left___0045bf60[10] = SUB41(s_camera_left___0045bf60._8_4_,2);
      s_camera_left___0045bf60[0xb] = SUB41(s_camera_left___0045bf60._8_4_,3);
      s_camera_left___0045bf60[0xc] = (char)s_camera_left___0045bf60._12_2_;
      s_camera_left___0045bf60[0xd] = SUB21(s_camera_left___0045bf60._12_2_,1);
      s_camera_right___0045bf70[0] = (char)s_camera_right___0045bf70._0_4_;
      s_camera_right___0045bf70[1] = SUB41(s_camera_right___0045bf70._0_4_,1);
      s_camera_right___0045bf70[2] = SUB41(s_camera_right___0045bf70._0_4_,2);
      s_camera_right___0045bf70[3] = SUB41(s_camera_right___0045bf70._0_4_,3);
      s_camera_right___0045bf70[4] = (char)s_camera_right___0045bf70._4_4_;
      s_camera_right___0045bf70[5] = SUB41(s_camera_right___0045bf70._4_4_,1);
      s_camera_right___0045bf70[6] = SUB41(s_camera_right___0045bf70._4_4_,2);
      s_camera_right___0045bf70[7] = SUB41(s_camera_right___0045bf70._4_4_,3);
      s_camera_right___0045bf70[8] = (char)s_camera_right___0045bf70._8_4_;
      s_camera_right___0045bf70[9] = SUB41(s_camera_right___0045bf70._8_4_,1);
      s_camera_right___0045bf70[10] = SUB41(s_camera_right___0045bf70._8_4_,2);
      s_camera_right___0045bf70[0xb] = SUB41(s_camera_right___0045bf70._8_4_,3);
      s_camera_right___0045bf70[0xc] = (char)s_camera_right___0045bf70._12_2_;
      s_camera_right___0045bf70[0xd] = SUB21(s_camera_right___0045bf70._12_2_,1);
      s_strike___0045bf80[0] = (char)s_strike___0045bf80._0_4_;
      s_strike___0045bf80[1] = SUB41(s_strike___0045bf80._0_4_,1);
      s_strike___0045bf80[2] = SUB41(s_strike___0045bf80._0_4_,2);
      s_strike___0045bf80[3] = SUB41(s_strike___0045bf80._0_4_,3);
      s_strike___0045bf80[4] = (char)s_strike___0045bf80._4_4_;
      s_strike___0045bf80[5] = SUB41(s_strike___0045bf80._4_4_,1);
      s_strike___0045bf80[6] = SUB41(s_strike___0045bf80._4_4_,2);
      s_strike___0045bf80[7] = SUB41(s_strike___0045bf80._4_4_,3);
      s_crouch___0045bf8c[0] = (char)s_crouch___0045bf8c._0_4_;
      s_crouch___0045bf8c[1] = SUB41(s_crouch___0045bf8c._0_4_,1);
      s_crouch___0045bf8c[2] = SUB41(s_crouch___0045bf8c._0_4_,2);
      s_crouch___0045bf8c[3] = SUB41(s_crouch___0045bf8c._0_4_,3);
      s_crouch___0045bf8c[4] = (char)s_crouch___0045bf8c._4_4_;
      s_crouch___0045bf8c[5] = SUB41(s_crouch___0045bf8c._4_4_,1);
      s_crouch___0045bf8c[6] = SUB41(s_crouch___0045bf8c._4_4_,2);
      s_crouch___0045bf8c[7] = SUB41(s_crouch___0045bf8c._4_4_,3);
      s_glide_action___0045bfa0[0] = (char)s_glide_action___0045bfa0._0_4_;
      s_glide_action___0045bfa0[1] = SUB41(s_glide_action___0045bfa0._0_4_,1);
      s_glide_action___0045bfa0[2] = SUB41(s_glide_action___0045bfa0._0_4_,2);
      s_glide_action___0045bfa0[3] = SUB41(s_glide_action___0045bfa0._0_4_,3);
      s_glide_action___0045bfa0[4] = (char)s_glide_action___0045bfa0._4_4_;
      s_glide_action___0045bfa0[5] = SUB41(s_glide_action___0045bfa0._4_4_,1);
      s_glide_action___0045bfa0[6] = SUB41(s_glide_action___0045bfa0._4_4_,2);
      s_glide_action___0045bfa0[7] = SUB41(s_glide_action___0045bfa0._4_4_,3);
      s_glide_action___0045bfa0[8] = (char)s_glide_action___0045bfa0._8_4_;
      s_glide_action___0045bfa0[9] = SUB41(s_glide_action___0045bfa0._8_4_,1);
      s_glide_action___0045bfa0[10] = SUB41(s_glide_action___0045bfa0._8_4_,2);
      s_glide_action___0045bfa0[0xb] = SUB41(s_glide_action___0045bfa0._8_4_,3);
      s_glide_action___0045bfa0[0xc] = (char)s_glide_action___0045bfa0._12_2_;
      s_glide_action___0045bfa0[0xd] = SUB21(s_glide_action___0045bfa0._12_2_,1);
      DAT_004e1bdc = 0;
      return local_2ec[local_320];
    }
  } while( true );
}


