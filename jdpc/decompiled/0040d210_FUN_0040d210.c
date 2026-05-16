/*
 * Function: FUN_0040d210
 * Entry:    0040d210
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0040d210(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_3e0;
  tagMSG tStack_3dc;
  char local_3c0 [4];
  char local_3bc [4];
  char local_3b8 [4];
  char local_3b4 [2];
  char local_3b2;
  undefined4 local_3b1 [16];
  undefined4 local_370;
  undefined2 local_36c;
  undefined1 local_36a;
  undefined4 local_369 [18];
  char local_320 [4];
  char local_31c [4];
  char local_318;
  undefined4 local_317;
  char local_2d0 [4];
  char local_2cc [4];
  char local_2c8;
  undefined4 local_2c7;
  char local_280 [4];
  char local_27c [4];
  char local_278 [4];
  char local_274 [2];
  char local_272;
  undefined4 local_271 [16];
  char local_230 [4];
  char local_22c [4];
  char local_228 [4];
  char local_224 [2];
  undefined4 local_222 [16];
  char local_1e0 [4];
  char local_1dc [4];
  char local_1d8 [2];
  undefined4 local_1d6 [17];
  char local_190 [4];
  char local_18c [4];
  char local_188 [4];
  char local_184 [4];
  char local_180 [2];
  undefined4 local_17e [15];
  char local_140 [4];
  char local_13c [4];
  char local_138 [4];
  char local_134 [4];
  char local_130 [2];
  undefined4 local_12e [15];
  char local_f0 [4];
  char local_ec [4];
  char local_e8 [2];
  undefined4 local_e6 [17];
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_9a [18];
  undefined1 local_50 [80];
  
  local_3c0 = (char  [4])s_glide_action___0045bfa0._0_4_;
  local_3bc = (char  [4])s_glide_action___0045bfa0._4_4_;
  local_3b4 = (char  [2])s_glide_action___0045bfa0._12_2_;
  local_3b2 = s_glide_action___0045bfa0[0xe];
  local_3b8 = (char  [4])s_glide_action___0045bfa0._8_4_;
  puVar6 = local_3b1;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
  local_36a = DAT_0045bf9e;
  local_36c = DAT_0045bf9c;
  local_370 = DAT_0045bf98;
  puVar6 = local_369;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
  local_318 = s_crouch___0045bf8c[8];
  local_31c = (char  [4])s_crouch___0045bf8c._4_4_;
  local_320 = (char  [4])s_crouch___0045bf8c._0_4_;
  puVar6 = &local_317;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_2c8 = s_strike___0045bf80[8];
  local_2cc = (char  [4])s_strike___0045bf80._4_4_;
  local_2d0 = (char  [4])s_strike___0045bf80._0_4_;
  puVar6 = &local_2c7;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_280 = (char  [4])s_camera_right___0045bf70._0_4_;
  local_27c = (char  [4])s_camera_right___0045bf70._4_4_;
  local_278 = (char  [4])s_camera_right___0045bf70._8_4_;
  local_272 = s_camera_right___0045bf70[0xe];
  local_274 = (char  [2])s_camera_right___0045bf70._12_2_;
  puVar6 = local_271;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
  local_230 = (char  [4])s_camera_left___0045bf60._0_4_;
  local_228 = (char  [4])s_camera_left___0045bf60._8_4_;
  local_224 = (char  [2])s_camera_left___0045bf60._12_2_;
  local_22c = (char  [4])s_camera_left___0045bf60._4_4_;
  puVar6 = local_222;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_1d8 = (char  [2])s_help___F1_0045bfe4._8_2_;
  local_1dc = (char  [4])s_help___F1_0045bfe4._4_4_;
  local_1e0 = (char  [4])s_help___F1_0045bfe4._0_4_;
  puVar6 = local_1d6;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_190 = (char  [4])s_sound_on_off___F2_0045bfd0._0_4_;
  local_18c = (char  [4])s_sound_on_off___F2_0045bfd0._4_4_;
  local_188 = (char  [4])s_sound_on_off___F2_0045bfd0._8_4_;
  local_180 = (char  [2])s_sound_on_off___F2_0045bfd0._16_2_;
  local_184 = (char  [4])s_sound_on_off___F2_0045bfd0._12_4_;
  puVar6 = local_17e;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_140 = (char  [4])s_music_on_off___F3_0045bfbc._0_4_;
  local_13c = (char  [4])s_music_on_off___F3_0045bfbc._4_4_;
  local_138 = (char  [4])s_music_on_off___F3_0045bfbc._8_4_;
  local_134 = (char  [4])s_music_on_off___F3_0045bfbc._12_4_;
  local_130 = (char  [2])s_music_on_off___F3_0045bfbc._16_2_;
  puVar6 = local_12e;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_ec = (char  [4])s_quit___F4_0045bfb0._4_4_;
  local_f0 = (char  [4])s_quit___F4_0045bfb0._0_4_;
  local_e8 = (char  [2])s_quit___F4_0045bfb0._8_2_;
  puVar6 = local_e6;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_9c = DAT_0045bdb8;
  local_a0 = DAT_0045bdb4;
  puVar6 = local_9a;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
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
  iVar5 = 0;
  local_3e0 = 0;
  pcVar1 = _strstr(local_3c0,(char *)&DAT_0045bdb4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_3c0;
    do {
      pcVar1 = pcVar1 + 0x50;
      iVar5 = iVar5 + 1;
      pcVar2 = _strstr(pcVar1,(char *)&DAT_0045bdb4);
      local_3e0 = iVar5;
    } while (pcVar2 == (char *)0x0);
  }
  InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
  UpdateWindow(DAT_004a610c);
  DAT_004e1bdc = 1;
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x4c),local_1e0,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x48),local_190,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x44),local_140,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x40),local_f0,0x50);
  while (DAT_004537e8 == 0x12) {
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 100),local_3c0,0x50);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x60),(LPSTR)&local_370,0x50);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x5c),local_320,0x50);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x58),local_2d0,0x50);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x54),local_280,0x50);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x50),local_230,0x50);
    uVar3 = FUN_00401f80(DAT_0053e898._2_1_);
    FUN_00444690(local_3c0,s__s____s_0045bf58,local_3c0,uVar3);
    uVar3 = FUN_00401f80(DAT_0053e898._3_1_);
    FUN_00444690(&local_370,s__s____s_0045bf58,&local_370,uVar3);
    uVar3 = FUN_00401f80(DAT_0053e89c & 0xff);
    FUN_00444690(local_320,s__s____s_0045bf58,local_320,uVar3);
    uVar3 = FUN_00401f80(DAT_0053e89c >> 8 & 0xff);
    FUN_00444690(local_2d0,s__s____s_0045bf58,local_2d0,uVar3);
    uVar3 = FUN_00401f80(DAT_0053e894._2_1_);
    FUN_00444690(local_280,s__s____s_0045bf58,local_280,uVar3);
    uVar3 = FUN_00401f80(DAT_0053e894._3_1_);
    FUN_00444690(local_230,s__s____s_0045bf58,local_230,uVar3);
    uVar3 = 200;
    if (0 < local_3e0) {
      pcVar1 = local_3c0;
      iVar5 = local_3e0;
      do {
        (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
        FUN_0040a3f0(0x140,uVar3,0xfffffe70,pcVar1);
        DAT_0045bbd4 = 0x3f800000;
        uVar3 = __ftol();
        pcVar1 = pcVar1 + 0x50;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar5 = PeekMessageA(&tStack_3dc,(HWND)0x0,0,0,1);
    while (iVar5 != 0) {
      TranslateMessage(&tStack_3dc);
      DispatchMessageA(&tStack_3dc);
      iVar5 = PeekMessageA(&tStack_3dc,(HWND)0x0,0,0,1);
    }
    iVar5 = FUN_00401f60();
    if (((iVar5 != 0) && (iVar4 = FUN_00401f80(iVar5), iVar4 != 0)) &&
       ((iVar5 == 1 || (iVar5 == 0x3b)))) {
      DAT_004537e8 = 0x11;
    }
  }
  while ((~DAT_004d1392 & 8) != 0) {
    FUN_00440cc0();
  }
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
  s_quit___F4_0045bfb0[0] = (char)s_quit___F4_0045bfb0._0_4_;
  s_quit___F4_0045bfb0[1] = SUB41(s_quit___F4_0045bfb0._0_4_,1);
  s_quit___F4_0045bfb0[2] = SUB41(s_quit___F4_0045bfb0._0_4_,2);
  s_quit___F4_0045bfb0[3] = SUB41(s_quit___F4_0045bfb0._0_4_,3);
  s_quit___F4_0045bfb0[4] = (char)s_quit___F4_0045bfb0._4_4_;
  s_quit___F4_0045bfb0[5] = SUB41(s_quit___F4_0045bfb0._4_4_,1);
  s_quit___F4_0045bfb0[6] = SUB41(s_quit___F4_0045bfb0._4_4_,2);
  s_quit___F4_0045bfb0[7] = SUB41(s_quit___F4_0045bfb0._4_4_,3);
  s_quit___F4_0045bfb0[8] = (char)s_quit___F4_0045bfb0._8_2_;
  s_quit___F4_0045bfb0[9] = SUB21(s_quit___F4_0045bfb0._8_2_,1);
  s_music_on_off___F3_0045bfbc[0] = (char)s_music_on_off___F3_0045bfbc._0_4_;
  s_music_on_off___F3_0045bfbc[1] = SUB41(s_music_on_off___F3_0045bfbc._0_4_,1);
  s_music_on_off___F3_0045bfbc[2] = SUB41(s_music_on_off___F3_0045bfbc._0_4_,2);
  s_music_on_off___F3_0045bfbc[3] = SUB41(s_music_on_off___F3_0045bfbc._0_4_,3);
  s_music_on_off___F3_0045bfbc[4] = (char)s_music_on_off___F3_0045bfbc._4_4_;
  s_music_on_off___F3_0045bfbc[5] = SUB41(s_music_on_off___F3_0045bfbc._4_4_,1);
  s_music_on_off___F3_0045bfbc[6] = SUB41(s_music_on_off___F3_0045bfbc._4_4_,2);
  s_music_on_off___F3_0045bfbc[7] = SUB41(s_music_on_off___F3_0045bfbc._4_4_,3);
  s_music_on_off___F3_0045bfbc[8] = (char)s_music_on_off___F3_0045bfbc._8_4_;
  s_music_on_off___F3_0045bfbc[9] = SUB41(s_music_on_off___F3_0045bfbc._8_4_,1);
  s_music_on_off___F3_0045bfbc[10] = SUB41(s_music_on_off___F3_0045bfbc._8_4_,2);
  s_music_on_off___F3_0045bfbc[0xb] = SUB41(s_music_on_off___F3_0045bfbc._8_4_,3);
  s_music_on_off___F3_0045bfbc[0xc] = (char)s_music_on_off___F3_0045bfbc._12_4_;
  s_music_on_off___F3_0045bfbc[0xd] = SUB41(s_music_on_off___F3_0045bfbc._12_4_,1);
  s_music_on_off___F3_0045bfbc[0xe] = SUB41(s_music_on_off___F3_0045bfbc._12_4_,2);
  s_music_on_off___F3_0045bfbc[0xf] = SUB41(s_music_on_off___F3_0045bfbc._12_4_,3);
  s_music_on_off___F3_0045bfbc[0x10] = (char)s_music_on_off___F3_0045bfbc._16_2_;
  s_music_on_off___F3_0045bfbc[0x11] = SUB21(s_music_on_off___F3_0045bfbc._16_2_,1);
  s_sound_on_off___F2_0045bfd0[0] = (char)s_sound_on_off___F2_0045bfd0._0_4_;
  s_sound_on_off___F2_0045bfd0[1] = SUB41(s_sound_on_off___F2_0045bfd0._0_4_,1);
  s_sound_on_off___F2_0045bfd0[2] = SUB41(s_sound_on_off___F2_0045bfd0._0_4_,2);
  s_sound_on_off___F2_0045bfd0[3] = SUB41(s_sound_on_off___F2_0045bfd0._0_4_,3);
  s_sound_on_off___F2_0045bfd0[4] = (char)s_sound_on_off___F2_0045bfd0._4_4_;
  s_sound_on_off___F2_0045bfd0[5] = SUB41(s_sound_on_off___F2_0045bfd0._4_4_,1);
  s_sound_on_off___F2_0045bfd0[6] = SUB41(s_sound_on_off___F2_0045bfd0._4_4_,2);
  s_sound_on_off___F2_0045bfd0[7] = SUB41(s_sound_on_off___F2_0045bfd0._4_4_,3);
  s_sound_on_off___F2_0045bfd0[8] = (char)s_sound_on_off___F2_0045bfd0._8_4_;
  s_sound_on_off___F2_0045bfd0[9] = SUB41(s_sound_on_off___F2_0045bfd0._8_4_,1);
  s_sound_on_off___F2_0045bfd0[10] = SUB41(s_sound_on_off___F2_0045bfd0._8_4_,2);
  s_sound_on_off___F2_0045bfd0[0xb] = SUB41(s_sound_on_off___F2_0045bfd0._8_4_,3);
  s_sound_on_off___F2_0045bfd0[0xc] = (char)s_sound_on_off___F2_0045bfd0._12_4_;
  s_sound_on_off___F2_0045bfd0[0xd] = SUB41(s_sound_on_off___F2_0045bfd0._12_4_,1);
  s_sound_on_off___F2_0045bfd0[0xe] = SUB41(s_sound_on_off___F2_0045bfd0._12_4_,2);
  s_sound_on_off___F2_0045bfd0[0xf] = SUB41(s_sound_on_off___F2_0045bfd0._12_4_,3);
  s_sound_on_off___F2_0045bfd0[0x10] = (char)s_sound_on_off___F2_0045bfd0._16_2_;
  s_sound_on_off___F2_0045bfd0[0x11] = SUB21(s_sound_on_off___F2_0045bfd0._16_2_,1);
  s_help___F1_0045bfe4[0] = (char)s_help___F1_0045bfe4._0_4_;
  s_help___F1_0045bfe4[1] = SUB41(s_help___F1_0045bfe4._0_4_,1);
  s_help___F1_0045bfe4[2] = SUB41(s_help___F1_0045bfe4._0_4_,2);
  s_help___F1_0045bfe4[3] = SUB41(s_help___F1_0045bfe4._0_4_,3);
  s_help___F1_0045bfe4[4] = (char)s_help___F1_0045bfe4._4_4_;
  s_help___F1_0045bfe4[5] = SUB41(s_help___F1_0045bfe4._4_4_,1);
  s_help___F1_0045bfe4[6] = SUB41(s_help___F1_0045bfe4._4_4_,2);
  s_help___F1_0045bfe4[7] = SUB41(s_help___F1_0045bfe4._4_4_,3);
  s_help___F1_0045bfe4[8] = (char)s_help___F1_0045bfe4._8_2_;
  s_help___F1_0045bfe4[9] = SUB21(s_help___F1_0045bfe4._8_2_,1);
  DAT_004e1bdc = 0;
  return DAT_004537e8;
}


