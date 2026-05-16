/*
 * Function: FUN_0040e600
 * Entry:    0040e600
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040e600(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  char *pcVar23;
  UINT UVar24;
  CHAR *pCVar25;
  int local_390;
  int local_38c;
  int local_360 [7];
  CHAR aCStack_344 [80];
  tagMSG tStack_2f4;
  char local_2d8 [4];
  char local_2d4 [4];
  char local_2d0 [2];
  char local_2ce;
  undefined4 local_2cd [17];
  char local_288 [4];
  char local_284 [4];
  char local_280;
  undefined4 local_27f;
  char local_238 [4];
  char local_234 [2];
  char local_232;
  undefined4 local_231 [18];
  char local_1e8 [4];
  char local_1e4 [4];
  char local_1e0 [4];
  char local_1dc [4];
  char local_1d8 [2];
  char local_1d6;
  undefined4 local_1d5 [15];
  char local_198 [4];
  char local_194 [4];
  char local_190 [4];
  char local_18c [4];
  char local_188 [2];
  undefined4 local_186 [15];
  char local_148 [4];
  char local_144 [2];
  undefined4 local_142 [18];
  char local_f8 [4];
  char local_f4 [2];
  char local_f2;
  undefined4 local_f1 [18];
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_a2 [18];
  undefined1 local_58 [84];
  
  local_2d8 = (char  [4])s_resolution_0045c044._0_4_;
  local_2d4 = (char  [4])s_resolution_0045c044._4_4_;
  local_2ce = s_resolution_0045c044[10];
  local_2d0 = (char  [2])s_resolution_0045c044._8_2_;
  puVar21 = local_2cd;
  for (iVar16 = 0x11; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  *(undefined1 *)puVar21 = 0;
  local_288 = (char  [4])s_lighting_0045c038._0_4_;
  local_280 = s_lighting_0045c038[8];
  local_284 = (char  [4])s_lighting_0045c038._4_4_;
  puVar21 = &local_27f;
  for (iVar16 = 0x11; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  *(undefined2 *)puVar21 = 0;
  *(undefined1 *)((int)puVar21 + 2) = 0;
  local_238 = (char  [4])s_detail_0045c030._0_4_;
  local_232 = s_detail_0045c030[6];
  local_234 = (char  [2])s_detail_0045c030._4_2_;
  puVar21 = local_231;
  for (iVar16 = 0x12; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  *(undefined1 *)puVar21 = 0;
  local_1e8 = (char  [4])s_display___windowed_0045c01c._0_4_;
  local_1e0 = (char  [4])s_display___windowed_0045c01c._8_4_;
  local_1e4 = (char  [4])s_display___windowed_0045c01c._4_4_;
  local_1dc = (char  [4])s_display___windowed_0045c01c._12_4_;
  local_1d6 = s_display___windowed_0045c01c[0x12];
  local_1d8 = (char  [2])s_display___windowed_0045c01c._16_2_;
  puVar21 = local_1d5;
  for (iVar16 = 0xf; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  *(undefined1 *)puVar21 = 0;
  local_198 = (char  [4])s_renderer___opengl_0045c008._0_4_;
  local_194 = (char  [4])s_renderer___opengl_0045c008._4_4_;
  local_190 = (char  [4])s_renderer___opengl_0045c008._8_4_;
  local_18c = (char  [4])s_renderer___opengl_0045c008._12_4_;
  local_188 = (char  [2])s_renderer___opengl_0045c008._16_2_;
  puVar21 = local_186;
  for (iVar16 = 0xf; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  *(undefined2 *)puVar21 = 0;
  local_144 = (char  [2])s_apply_0045c000._4_2_;
  local_148 = (char  [4])s_apply_0045c000._0_4_;
  puVar21 = local_142;
  for (iVar16 = 0x12; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  *(undefined2 *)puVar21 = 0;
  local_f4 = (char  [2])s_return_0045bde4._4_2_;
  local_f2 = s_return_0045bde4[6];
  local_f8 = (char  [4])s_return_0045bde4._0_4_;
  puVar21 = local_f1;
  for (iVar16 = 0x12; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  *(undefined1 *)puVar21 = 0;
  local_a4 = DAT_0045bdb8;
  local_a8 = DAT_0045bdb4;
  puVar21 = local_a2;
  for (iVar16 = 0x12; iVar16 != 0; iVar16 = iVar16 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  *(undefined2 *)puVar21 = 0;
  local_360[0] = 5;
  local_360[1] = 5;
  local_360[2] = 5;
  local_360[3] = 5;
  local_360[4] = 5;
  local_360[5] = 0;
  local_360[6] = 4;
  bVar3 = false;
  bVar4 = false;
  bVar2 = false;
  bVar6 = false;
  bVar5 = false;
  FUN_004253a0();
  iVar16 = FUN_00425900(s____data_TITLEBACK_TIM_0045bd9c);
  if (iVar16 == 0) {
    return 0;
  }
  FUN_00424d40(iVar16,0x6ce,4);
  FUN_00444690(local_58,s____data_TITLE_d_TIM_0045bd88,DAT_0053e848);
  iVar11 = FUN_00425900(local_58);
  if (iVar11 == 0) {
    return 0;
  }
  FUN_00424d40(iVar11,0x6cf,4);
  iVar22 = 0;
  local_390 = 0;
  local_38c = 0;
  pcVar12 = _strstr(local_2d8,(char *)&DAT_0045bdb4);
  if (pcVar12 == (char *)0x0) {
    pcVar12 = local_2d8;
    do {
      pcVar12 = pcVar12 + 0x50;
      iVar22 = iVar22 + 1;
      pcVar13 = _strstr(pcVar12,(char *)&DAT_0045bdb4);
      local_38c = iVar22;
    } while (pcVar13 == (char *)0x0);
  }
  InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
  UpdateWindow(DAT_004a610c);
  iVar9 = DAT_0053e858;
  iVar8 = DAT_0053e854;
  iVar22 = DAT_0053e850;
  uVar7 = DAT_0053e844;
  DAT_004e1bdc = 1;
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x3c),local_148,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xa0),local_f8,0x50);
  do {
    if ((bVar2) && (local_38c + -2 <= local_390)) goto LAB_0040f29f;
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    uVar14 = __ftol();
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x38),aCStack_344,0x50);
    FUN_00444690(local_2d8,s__s____ix_i_0045bff4,aCStack_344,DAT_0053e850,DAT_0053e854);
    if (_DAT_0053e860 == 0.0) {
      UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0x34);
LAB_0040eab3:
      LoadStringA(DAT_004a6108,UVar24,local_288,0x50);
    }
    else {
      if (_DAT_0053e860 == 1.0) {
        UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0x30);
        goto LAB_0040eab3;
      }
      if (_DAT_0053e860 == 2.0) {
        UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0x2c);
        goto LAB_0040eab3;
      }
    }
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x20),local_238,0x50);
    if (DAT_0053e85c == 0) {
      UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0xcc);
LAB_0040eb35:
      LoadStringA(DAT_004a6108,UVar24,aCStack_344,0x50);
    }
    else {
      if (DAT_0053e85c == 1) {
        UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0xd0);
        goto LAB_0040eb35;
      }
      if (DAT_0053e85c == 2) {
        UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0xd4);
        goto LAB_0040eb35;
      }
    }
    FUN_00444690(local_238,s__s____s_0045bf58,local_238,aCStack_344);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x1c),local_1e8,0x50);
    if (DAT_0053e858 == 0) {
      UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0x14);
    }
    else {
      UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0x18);
    }
    LoadStringA(DAT_004a6108,UVar24,aCStack_344,0x50);
    FUN_00444690(local_1e8,s__s____s_0045bf58,local_1e8,aCStack_344);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x10),local_198,0x50);
    uVar17 = 0xffffffff;
    pcVar12 = &DAT_0045bff0;
    do {
      pcVar13 = pcVar12;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    iVar18 = -1;
    pcVar12 = local_198;
    do {
      pcVar23 = pcVar12;
      if (iVar18 == 0) break;
      iVar18 = iVar18 + -1;
      pcVar23 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar23;
    } while (cVar1 != '\0');
    pcVar12 = pcVar13 + -uVar17;
    pcVar13 = pcVar23 + -1;
    for (uVar19 = uVar17 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if ((DAT_0053e844 & 2) == 0) {
      if (DAT_0053e844 == 0) {
        UVar24 = *(UINT *)(PTR_DAT_004537c0 + 4);
      }
      else {
        UVar24 = *(UINT *)(PTR_DAT_004537c0 + 8);
      }
    }
    else {
      UVar24 = *(UINT *)(PTR_DAT_004537c0 + 0xc);
    }
    LoadStringA(DAT_004a6108,UVar24,aCStack_344,0x50);
    iVar18 = 0;
    DAT_0045bbd4 = 0x3f800000;
    if (0 < local_38c) {
      do {
        if (iVar18 == 4) {
          if (local_390 == 4) {
            (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
          }
          else {
            (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f4ccccd);
          }
          FUN_0040a3f0(0x140,uVar14,0xfffffe70,local_198);
          uVar14 = __ftol();
          pCVar25 = aCStack_344;
        }
        else if (iVar18 == local_390) {
          (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
          pCVar25 = local_2d8 + iVar18 * 0x50;
        }
        else {
          (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f4ccccd);
          pCVar25 = local_2d8 + iVar18 * 0x50;
        }
        FUN_0040a3f0(0x140,uVar14,0xfffffe70,pCVar25);
        DAT_0045bbd4 = 0x3f800000;
        uVar14 = __ftol();
        iVar18 = iVar18 + 1;
      } while (iVar18 < local_38c);
    }
    FUN_00440cc0();
    if (bVar3) {
      if ((~DAT_004d1392 & 0x10) == 0) {
        FUN_00420740(0);
        local_390 = local_390 + -1;
        bVar3 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x10) != 0) {
      bVar3 = true;
    }
    if (bVar4) {
      if ((~DAT_004d1392 & 0x40) == 0) {
        FUN_00420740(0);
        local_390 = local_390 + 1;
        bVar4 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x40) != 0) {
      bVar4 = true;
    }
    bVar10 = ~DAT_004d1392;
    if (bVar2) {
      if ((bVar10 & 8) == 0) {
        bVar2 = false;
      }
    }
    else if ((bVar10 & 8) != 0) {
      bVar2 = true;
    }
    if (local_390 < 0) {
      local_390 = local_38c + -1;
    }
    if (local_390 == local_38c) {
      local_390 = 0;
    }
    iVar18 = DAT_004a5e74;
    if ((bVar10 & 0x20) != 0) {
      switch(local_390) {
      case 0:
        if (!bVar5) {
          iVar20 = 0;
          bVar5 = true;
          if (0 < (int)(&DAT_008109cc)[DAT_004a5e74 * 0x214]) {
            do {
              iVar15 = iVar20 + iVar18 * 0x214;
              if (((&DAT_00810dd0)[iVar15] == 0x10) &&
                 (iVar15 = FUN_00408530((&DAT_008109d0)[iVar15],(&DAT_00810bd0)[iVar15]),
                 iVar18 = DAT_004a5e74, iVar15 != 0)) {
                iVar15 = iVar20 + DAT_004a5e74 * 0x214;
                if (((DAT_0053e850 < (int)(&DAT_008109d0)[iVar15]) ||
                    (DAT_0053e854 < (int)(&DAT_00810bd0)[iVar15])) &&
                   (((int)(&DAT_008109d0)[iVar15] < DAT_00813b4c &&
                    ((int)(&DAT_00810bd0)[iVar15] < DAT_00813b48)))) {
                  iVar20 = iVar20 + DAT_004a5e74 * 0x214;
                  DAT_0053e850 = (&DAT_008109d0)[iVar20];
                  DAT_0053e854 = (&DAT_00810bd0)[iVar20];
                  break;
                }
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 < (int)(&DAT_008109cc)[iVar18 * 0x214]);
          }
        }
        break;
      case 1:
        if (!bVar5) {
          _DAT_0053e860 = _DAT_0053e860 - -1.0;
          bVar5 = true;
          if (2.0 < _DAT_0053e860) {
            _DAT_0053e860 = 2.0;
          }
        }
        break;
      case 2:
        if (!bVar5) {
          bVar5 = true;
          DAT_0053e85c = DAT_0053e85c + 1;
          if (2 < DAT_0053e85c) {
            DAT_0053e85c = 2;
          }
          FUN_00410770((uint)DAT_004d22de << 2);
          iVar18 = DAT_004a5e74;
        }
        break;
      case 3:
        DAT_0053e858 = 1;
        break;
      case 4:
        if (!bVar5) {
          bVar5 = true;
          if (DAT_0053e844 == 2) {
            DAT_0053e844 = 0;
          }
          else if (DAT_0053e844 == 0) {
            DAT_0053e844 = 1;
          }
        }
      }
    }
    if ((~DAT_004d1392 & 0x80) != 0) {
      switch(local_390) {
      case 0:
        if (!bVar6) {
          bVar6 = true;
          iVar20 = (&DAT_008109cc)[iVar18 * 0x214];
          do {
            iVar20 = iVar20 + -1;
            if (iVar20 < 0) goto switchD_0040eff1_default;
            iVar15 = iVar20 + iVar18 * 0x214;
          } while ((((&DAT_00810dd0)[iVar15] != 0x10) ||
                   (iVar15 = FUN_00408530((&DAT_008109d0)[iVar15],(&DAT_00810bd0)[iVar15]),
                   iVar18 = DAT_004a5e74, iVar15 == 0)) ||
                  ((iVar15 = iVar20 + DAT_004a5e74 * 0x214,
                   DAT_0053e850 <= (int)(&DAT_008109d0)[iVar15] &&
                   (DAT_0053e854 <= (int)(&DAT_00810bd0)[iVar15]))));
          iVar20 = iVar20 + DAT_004a5e74 * 0x214;
          DAT_0053e850 = (&DAT_008109d0)[iVar20];
          DAT_0053e854 = (&DAT_00810bd0)[iVar20];
        }
        break;
      case 1:
        if (!bVar6) {
          _DAT_0053e860 = _DAT_0053e860 - 1.0;
          bVar6 = true;
          if (_DAT_0053e860 < 0.0) {
            _DAT_0053e860 = 0.0;
          }
        }
        break;
      case 2:
        if (!bVar6) {
          bVar6 = true;
          DAT_0053e85c = DAT_0053e85c + -1;
          if (DAT_0053e85c < 0) {
            DAT_0053e85c = 0;
          }
          FUN_00410770((uint)DAT_004d22de << 2);
        }
        break;
      case 3:
        if (DAT_0053e84c == 2) {
          if (DAT_0053e844 != 2) {
            DAT_0053e858 = 0;
          }
        }
        else {
          DAT_0053e858 = 0;
        }
        break;
      case 4:
        if (!bVar6) {
          bVar6 = true;
          if (DAT_0053e844 == 1) {
            DAT_0053e844 = 0;
          }
          else if (((DAT_0053e844 == 0) && (DAT_0053e84c != 0)) &&
                  (DAT_0053e844 = 2, DAT_0053e84c == 2)) {
            DAT_0053e858 = 1;
          }
        }
      }
    }
switchD_0040eff1_default:
    if ((bVar6) && ((~DAT_004d1392 & 0x80) == 0)) {
      bVar6 = false;
    }
    if ((bVar5) && ((~DAT_004d1392 & 0x20) == 0)) {
      bVar5 = false;
    }
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
    iVar18 = PeekMessageA(&tStack_2f4,(HWND)0x0,0,0,1);
    while (iVar18 != 0) {
      TranslateMessage(&tStack_2f4);
      DispatchMessageA(&tStack_2f4);
      iVar18 = PeekMessageA(&tStack_2f4,(HWND)0x0,0,0,1);
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
      s_apply_0045c000[0] = (char)s_apply_0045c000._0_4_;
      s_apply_0045c000[1] = SUB41(s_apply_0045c000._0_4_,1);
      s_apply_0045c000[2] = SUB41(s_apply_0045c000._0_4_,2);
      s_apply_0045c000[3] = SUB41(s_apply_0045c000._0_4_,3);
      s_apply_0045c000[4] = (char)s_apply_0045c000._4_2_;
      s_apply_0045c000[5] = SUB21(s_apply_0045c000._4_2_,1);
      s_renderer___opengl_0045c008[0] = (char)s_renderer___opengl_0045c008._0_4_;
      s_renderer___opengl_0045c008[1] = SUB41(s_renderer___opengl_0045c008._0_4_,1);
      s_renderer___opengl_0045c008[2] = SUB41(s_renderer___opengl_0045c008._0_4_,2);
      s_renderer___opengl_0045c008[3] = SUB41(s_renderer___opengl_0045c008._0_4_,3);
      s_renderer___opengl_0045c008[4] = (char)s_renderer___opengl_0045c008._4_4_;
      s_renderer___opengl_0045c008[5] = SUB41(s_renderer___opengl_0045c008._4_4_,1);
      s_renderer___opengl_0045c008[6] = SUB41(s_renderer___opengl_0045c008._4_4_,2);
      s_renderer___opengl_0045c008[7] = SUB41(s_renderer___opengl_0045c008._4_4_,3);
      s_renderer___opengl_0045c008[8] = (char)s_renderer___opengl_0045c008._8_4_;
      s_renderer___opengl_0045c008[9] = SUB41(s_renderer___opengl_0045c008._8_4_,1);
      s_renderer___opengl_0045c008[10] = SUB41(s_renderer___opengl_0045c008._8_4_,2);
      s_renderer___opengl_0045c008[0xb] = SUB41(s_renderer___opengl_0045c008._8_4_,3);
      s_renderer___opengl_0045c008[0xc] = (char)s_renderer___opengl_0045c008._12_4_;
      s_renderer___opengl_0045c008[0xd] = SUB41(s_renderer___opengl_0045c008._12_4_,1);
      s_renderer___opengl_0045c008[0xe] = SUB41(s_renderer___opengl_0045c008._12_4_,2);
      s_renderer___opengl_0045c008[0xf] = SUB41(s_renderer___opengl_0045c008._12_4_,3);
      s_renderer___opengl_0045c008[0x10] = (char)s_renderer___opengl_0045c008._16_2_;
      s_renderer___opengl_0045c008[0x11] = SUB21(s_renderer___opengl_0045c008._16_2_,1);
      s_display___windowed_0045c01c[0] = (char)s_display___windowed_0045c01c._0_4_;
      s_display___windowed_0045c01c[1] = SUB41(s_display___windowed_0045c01c._0_4_,1);
      s_display___windowed_0045c01c[2] = SUB41(s_display___windowed_0045c01c._0_4_,2);
      s_display___windowed_0045c01c[3] = SUB41(s_display___windowed_0045c01c._0_4_,3);
      s_display___windowed_0045c01c[4] = (char)s_display___windowed_0045c01c._4_4_;
      s_display___windowed_0045c01c[5] = SUB41(s_display___windowed_0045c01c._4_4_,1);
      s_display___windowed_0045c01c[6] = SUB41(s_display___windowed_0045c01c._4_4_,2);
      s_display___windowed_0045c01c[7] = SUB41(s_display___windowed_0045c01c._4_4_,3);
      s_display___windowed_0045c01c[8] = (char)s_display___windowed_0045c01c._8_4_;
      s_display___windowed_0045c01c[9] = SUB41(s_display___windowed_0045c01c._8_4_,1);
      s_display___windowed_0045c01c[10] = SUB41(s_display___windowed_0045c01c._8_4_,2);
      s_display___windowed_0045c01c[0xb] = SUB41(s_display___windowed_0045c01c._8_4_,3);
      s_display___windowed_0045c01c[0xc] = (char)s_display___windowed_0045c01c._12_4_;
      s_display___windowed_0045c01c[0xd] = SUB41(s_display___windowed_0045c01c._12_4_,1);
      s_display___windowed_0045c01c[0xe] = SUB41(s_display___windowed_0045c01c._12_4_,2);
      s_display___windowed_0045c01c[0xf] = SUB41(s_display___windowed_0045c01c._12_4_,3);
      s_display___windowed_0045c01c[0x10] = (char)s_display___windowed_0045c01c._16_2_;
      s_display___windowed_0045c01c[0x11] = SUB21(s_display___windowed_0045c01c._16_2_,1);
      s_detail_0045c030[0] = (char)s_detail_0045c030._0_4_;
      s_detail_0045c030[1] = SUB41(s_detail_0045c030._0_4_,1);
      s_detail_0045c030[2] = SUB41(s_detail_0045c030._0_4_,2);
      s_detail_0045c030[3] = SUB41(s_detail_0045c030._0_4_,3);
      s_detail_0045c030[4] = (char)s_detail_0045c030._4_2_;
      s_detail_0045c030[5] = SUB21(s_detail_0045c030._4_2_,1);
      s_lighting_0045c038[0] = (char)s_lighting_0045c038._0_4_;
      s_lighting_0045c038[1] = SUB41(s_lighting_0045c038._0_4_,1);
      s_lighting_0045c038[2] = SUB41(s_lighting_0045c038._0_4_,2);
      s_lighting_0045c038[3] = SUB41(s_lighting_0045c038._0_4_,3);
      s_lighting_0045c038[4] = (char)s_lighting_0045c038._4_4_;
      s_lighting_0045c038[5] = SUB41(s_lighting_0045c038._4_4_,1);
      s_lighting_0045c038[6] = SUB41(s_lighting_0045c038._4_4_,2);
      s_lighting_0045c038[7] = SUB41(s_lighting_0045c038._4_4_,3);
      s_resolution_0045c044[0] = (char)s_resolution_0045c044._0_4_;
      s_resolution_0045c044[1] = SUB41(s_resolution_0045c044._0_4_,1);
      s_resolution_0045c044[2] = SUB41(s_resolution_0045c044._0_4_,2);
      s_resolution_0045c044[3] = SUB41(s_resolution_0045c044._0_4_,3);
      s_resolution_0045c044[4] = (char)s_resolution_0045c044._4_4_;
      s_resolution_0045c044[5] = SUB41(s_resolution_0045c044._4_4_,1);
      s_resolution_0045c044[6] = SUB41(s_resolution_0045c044._4_4_,2);
      s_resolution_0045c044[7] = SUB41(s_resolution_0045c044._4_4_,3);
      s_resolution_0045c044[8] = (char)s_resolution_0045c044._8_2_;
      s_resolution_0045c044[9] = SUB21(s_resolution_0045c044._8_2_,1);
      DAT_004e1bdc = 0;
      return 1;
    }
  } while ((DAT_004537e8 != 0) && (DAT_004537e8 != 0x13));
  local_390 = local_38c + -1;
LAB_0040f29f:
  FUN_00420740(1);
  FUN_00443fe0(iVar16);
  FUN_00443fe0(iVar11);
  DAT_004e1bdc = 0;
  if (local_360[local_390] != 0) {
    DAT_0053e854 = iVar8;
    DAT_0053e850 = iVar22;
    DAT_0053e858 = iVar9;
    DAT_0053e844 = uVar7;
    return local_360[local_390];
  }
  if (((DAT_0053e854 == iVar8) && (DAT_0053e858 == iVar9)) &&
     ((DAT_0053e844 == uVar7 || (DAT_0053e844 == DAT_004a09a4)))) {
    return 5;
  }
  DAT_0053e8d8 = DAT_004537e8;
  return 1;
}


