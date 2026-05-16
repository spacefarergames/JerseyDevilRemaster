/*
 * Function: FUN_0040b290
 * Entry:    0040b290
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0040b290(char param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  UINT uID;
  undefined4 uVar20;
  char local_3ea;
  int local_3d4;
  undefined1 local_3d0 [4];
  int local_3cc;
  CHAR aCStack_3c8 [80];
  tagMSG local_378;
  CHAR local_35c [80];
  CHAR local_30c [80];
  CHAR local_2bc [80];
  CHAR local_26c [80];
  undefined1 local_21c [80];
  char local_1cc [200];
  char local_104 [260];
  
  uVar7 = 0xffffffff;
  iVar11 = 0;
  pcVar12 = &DAT_00810480;
  do {
    pcVar10 = pcVar12;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar12 = pcVar10 + -uVar7;
  pcVar10 = local_104;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar10 = pcVar10 + 4;
  }
  bVar3 = false;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar12 = s____bin_SAVEGAME_DAT_0045bf18;
  do {
    pcVar10 = pcVar12;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  local_3ea = '\0';
  iVar9 = -1;
  pcVar12 = local_104;
  do {
    pcVar13 = pcVar12;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar10 + -uVar7;
  pcVar10 = pcVar13 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar10 = pcVar10 + 4;
  }
  bVar5 = false;
  bVar4 = false;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar10 = pcVar10 + 1;
  }
  bVar2 = false;
  local_3d4 = 0;
  FUN_004253a0();
  iVar9 = FUN_00425900(s____data_TITLEBACK_TIM_0045bd9c);
  if (iVar9 != 0) {
    FUN_00424d40(iVar9,0x6ce,4);
    FUN_00443fe0(iVar9);
    FUN_00444690(local_21c,s____data_TITLE_d_TIM_0045bd88,DAT_0053e848);
    iVar9 = FUN_00425900(local_21c);
    if (iVar9 != 0) {
      FUN_00424d40(iVar9,0x6cf,4);
      FUN_00443fe0(iVar9);
      InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
      UpdateWindow(DAT_004a610c);
      DAT_004e1bdc = 1;
      LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x98),local_35c,0x50);
      LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x94),local_26c,0x50);
      LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x90),local_30c,0x50);
      LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x8c),local_2bc,0x50);
      puVar6 = (undefined4 *)FUN_00443ea0(0xac8);
      if (puVar6 != (undefined4 *)0x0) {
        pcVar12 = (char *)(puVar6 + 2);
        local_3cc = FUN_004056f0(local_104,&DAT_0045bbec);
        if (local_3cc == 0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          iVar9 = 8;
          pcVar10 = pcVar12;
          do {
            uVar7 = 0xffffffff;
            pcVar13 = local_35c;
            do {
              pcVar16 = pcVar13;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar13 = pcVar16 + -uVar7;
            pcVar16 = pcVar10;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar16 = pcVar16 + 4;
            }
            iVar9 = iVar9 + -1;
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar16 = pcVar16 + 1;
            }
            pcVar10 = pcVar10 + 0x50;
          } while (iVar9 != 0);
        }
        else {
          if ((DAT_004a5e38 == 0) || (DAT_0045bbd8 == 0)) {
            iVar9 = FUN_00444c90(puVar6,1,0xac8,local_3cc);
            if (iVar9 < 0xac8) {
              *puVar6 = 0;
              puVar6[1] = 0;
              iVar9 = 8;
              pcVar10 = pcVar12;
              do {
                uVar7 = 0xffffffff;
                pcVar13 = local_35c;
                do {
                  pcVar16 = pcVar13;
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  pcVar16 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar16;
                } while (cVar1 != '\0');
                uVar7 = ~uVar7;
                pcVar13 = pcVar16 + -uVar7;
                pcVar16 = pcVar10;
                for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                  pcVar16 = pcVar16 + 4;
                }
                iVar9 = iVar9 + -1;
                for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar16 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                  pcVar16 = pcVar16 + 1;
                }
                pcVar10 = pcVar10 + 0x50;
              } while (iVar9 != 0);
            }
          }
          else {
            DAT_0045bbd8 = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            iVar9 = 8;
            pcVar10 = pcVar12;
            do {
              uVar7 = 0xffffffff;
              pcVar13 = local_35c;
              do {
                pcVar16 = pcVar13;
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                pcVar16 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar16;
              } while (cVar1 != '\0');
              uVar7 = ~uVar7;
              pcVar13 = pcVar16 + -uVar7;
              pcVar16 = pcVar10;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar16 = pcVar16 + 4;
              }
              iVar9 = iVar9 + -1;
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar16 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar16 = pcVar16 + 1;
              }
              pcVar10 = pcVar10 + 0x50;
            } while (iVar9 != 0);
          }
          FUN_00444c10(local_3cc);
        }
        DAT_0045bbd4 = 0x3f400000;
        while( true ) {
          FUN_00440cc0();
          if ((local_3d4 == 1) && (uVar18 = DAT_004537e8, !bVar2)) goto LAB_0040bcde;
          iVar9 = PeekMessageA(&local_378,(HWND)0x0,0,0,1);
          while (iVar9 != 0) {
            if (local_378.message == 0x12) {
              DAT_004537e8 = 0;
            }
            TranslateMessage(&local_378);
            DispatchMessageA(&local_378);
            iVar9 = PeekMessageA(&local_378,(HWND)0x0,0,0,1);
          }
          if (!bVar3) break;
          if (bVar3) {
            if ((bVar2) && ((~DAT_004d1392 & 8) == 0)) {
              bVar2 = false;
            }
            if ((((~DAT_004d1392 & 8) != 0) && (!bVar2)) && (local_3d4 == 0)) {
              bVar2 = true;
              FUN_00420740(1);
              if (local_3ea == '\0') {
                FUN_00445270(local_3d0);
                iVar9 = FUN_00445080(local_3d0);
                *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) % 100;
                pcVar10 = pcVar12 + iVar11 * 0x50;
                for (iVar17 = 0x14; iVar17 != 0; iVar17 = iVar17 + -1) {
                  pcVar10[0] = '\0';
                  pcVar10[1] = '\0';
                  pcVar10[2] = '\0';
                  pcVar10[3] = '\0';
                  pcVar10 = pcVar10 + 4;
                }
                FUN_00444690(local_1cc,s__s__d____s__02d__02d__02d__s__2d_0045bef0,local_26c,
                             *(undefined1 *)(DAT_0053ea20 + 0x1005c),local_30c,
                             *(undefined4 *)(iVar9 + 0x14),*(int *)(iVar9 + 0x10) + 1,
                             *(undefined4 *)(iVar9 + 0xc),local_2bc,*(undefined4 *)(iVar9 + 8),
                             *(undefined4 *)(iVar9 + 4));
                uVar7 = 0xffffffff;
                pcVar10 = local_1cc;
                do {
                  pcVar13 = pcVar10;
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  pcVar13 = pcVar10 + 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar13;
                } while (cVar1 != '\0');
                uVar7 = ~uVar7;
                pcVar10 = pcVar13 + -uVar7;
                pcVar13 = pcVar12 + iVar11 * 0x50;
                for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
                  pcVar10 = pcVar10 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar13 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                *(undefined1 *)((int)puVar6 + iVar11) = 1;
                puVar14 = puVar6 + iVar11 * 0x42 + 0xa2;
                *puVar14 = *(undefined4 *)(DAT_0053ea20 + 0x10000);
                puVar14[1] = *(undefined4 *)(DAT_0053ea20 + 0x10004);
                bVar3 = false;
                puVar15 = (undefined4 *)(DAT_0053ea20 + 0x10040);
                puVar14 = puVar14 + 2;
                for (iVar9 = 0x42; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar14 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar14 = puVar14 + 1;
                }
              }
              else {
                bVar3 = false;
              }
            }
            if (bVar4) {
              if ((~DAT_004d1392 & 0x40) == 0) {
                FUN_00420740(0);
                local_3ea = local_3ea + '\x01';
                if ('\x01' < local_3ea) {
                  local_3ea = '\0';
                }
                bVar4 = false;
              }
            }
            else if ((~DAT_004d1392 & 0x40) != 0) {
              bVar4 = true;
            }
            if (bVar5) {
              if ((~DAT_004d1392 & 0x10) != 0) goto LAB_0040b97f;
              FUN_00420740(0);
              local_3ea = local_3ea + -1;
              if (local_3ea < '\0') {
                local_3ea = '\x01';
              }
LAB_0040b96d:
              bVar5 = false;
            }
            else {
              if ((~DAT_004d1392 & 0x10) == 0) goto LAB_0040b97f;
LAB_0040b97b:
              bVar5 = true;
            }
          }
LAB_0040b97f:
          (*DAT_004a5ea8)();
          FUN_0040e1c0();
          iVar17 = 300;
          iVar9 = 0;
          pcVar10 = pcVar12;
          do {
            if (bVar3) {
              uVar20 = 0x3db851ec;
              uVar19 = 0x3db851ec;
              uVar18 = 0x3db851ec;
            }
            else if ((iVar9 != iVar11) || (bVar3)) {
              uVar20 = 0x3e99999a;
              uVar19 = 0x3e99999a;
              uVar18 = 0x3e99999a;
            }
            else {
              uVar20 = 0x3f800000;
              uVar19 = 0x3f800000;
              uVar18 = 0x3f800000;
            }
            (*DAT_004a5eac)(uVar18,uVar19,uVar20,0x3f800000);
            FUN_0040a3f0(0x140,iVar17,0xfffffed4,pcVar10);
            iVar17 = iVar17 + 0x12;
            iVar9 = iVar9 + 1;
            pcVar10 = pcVar10 + 0x50;
          } while (iVar9 < 8);
          if (bVar3) {
            uVar20 = 0x3db851ec;
            uVar19 = 0x3db851ec;
            uVar18 = 0x3db851ec;
          }
          else if (iVar11 == 8) {
            uVar20 = 0x3f800000;
            uVar19 = 0x3f800000;
            uVar18 = 0x3f800000;
          }
          else {
            uVar20 = 0x3e99999a;
            uVar19 = 0x3e99999a;
            uVar18 = 0x3e99999a;
          }
          (*DAT_004a5eac)(uVar18,uVar19,uVar20,0x3f800000);
          LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xa0),aCStack_3c8,0x50);
          FUN_0040a3f0(0x140,iVar17,0xfffffed4,aCStack_3c8);
          (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
          if (param_1 == '\0') {
            uID = *(UINT *)(PTR_DAT_004537c0 + 0x84);
          }
          else {
            uID = *(UINT *)(PTR_DAT_004537c0 + 0x88);
          }
          LoadStringA(DAT_004a6108,uID,aCStack_3c8,0x50);
          FUN_0040a3f0(0x140,0x106,0xfffffed4,aCStack_3c8);
          if (bVar3) {
            (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f800000);
            LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x80),aCStack_3c8,0x50);
            FUN_0040a3f0(0x140,200,0xfffffed4,aCStack_3c8);
            if (local_3ea == '\0') {
              (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000);
              LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x7c),aCStack_3c8,0x50);
              FUN_0040a3f0(0x140,0xda,0xfffffed4,aCStack_3c8);
              (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f800000);
              LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x78),aCStack_3c8,0x50);
            }
            else {
              (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f800000);
              LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x7c),aCStack_3c8,0x50);
              FUN_0040a3f0(0x140,0xda,0xfffffed4,aCStack_3c8);
              (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
              LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x78),aCStack_3c8,0x50);
            }
            FUN_0040a3f0(0x140,0xec,0xfffffed4,aCStack_3c8);
          }
          InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
          UpdateWindow(DAT_004a610c);
          uVar18 = DAT_004537e8;
          if (local_3d4 == 2) goto LAB_0040bcde;
        }
        if ((bVar2) && ((~DAT_004d1392 & 8) == 0)) {
          bVar2 = false;
        }
        if ((((~DAT_004d1392 & 8) != 0) && (!bVar2)) && (uVar18 = DAT_0053e8d8, iVar11 == 8))
        goto LAB_0040bcde;
        if (((~DAT_004d1392 & 8) == 0) || (bVar2)) {
LAB_0040b6fa:
          if (bVar4) {
            if ((~DAT_004d1392 & 0x40) == 0) {
              FUN_00420740(0);
              iVar11 = iVar11 + 1;
              if (8 < iVar11) {
                iVar11 = 0;
              }
              bVar4 = false;
            }
          }
          else if ((~DAT_004d1392 & 0x40) != 0) {
            bVar4 = true;
          }
          if (bVar5) {
            if ((~DAT_004d1392 & 0x10) == 0) {
              FUN_00420740(0);
              iVar11 = iVar11 + -1;
              if (-1 < iVar11) goto LAB_0040b96d;
              iVar11 = 8;
              bVar5 = false;
            }
          }
          else if ((~DAT_004d1392 & 0x10) != 0) goto LAB_0040b97b;
          goto LAB_0040b97f;
        }
        bVar2 = true;
        FUN_00420740(1);
        if (param_1 == '\0') {
          if ((*(char *)((int)puVar6 + iVar11) == '\x01') && (iVar9 = FUN_0040ab80(), iVar9 != 0)) {
            local_3d4 = 1;
            puVar14 = puVar6 + iVar11 * 0x42 + 0xa2;
            *(undefined4 *)(DAT_0053ea20 + 0x10000) = *puVar14;
            *(undefined4 *)(DAT_0053ea20 + 0x10004) = puVar14[1];
            puVar14 = puVar14 + 2;
            puVar15 = (undefined4 *)(DAT_0053ea20 + 0x10040);
            for (iVar9 = 0x42; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            DAT_004d2388 = 1;
            DAT_004537e8 = 0x11;
            DAT_004a5e58 = 1;
          }
          goto LAB_0040b6fa;
        }
        if (*(char *)((int)puVar6 + iVar11) != '\0') {
          bVar3 = true;
          local_3ea = '\0';
          goto LAB_0040b6fa;
        }
        FUN_00445270(local_3d0);
        iVar9 = FUN_00445080(local_3d0);
        pcVar10 = pcVar12 + iVar11 * 0x50;
        for (iVar17 = 0x14; iVar17 != 0; iVar17 = iVar17 + -1) {
          pcVar10[0] = '\0';
          pcVar10[1] = '\0';
          pcVar10[2] = '\0';
          pcVar10[3] = '\0';
          pcVar10 = pcVar10 + 4;
        }
        iVar17 = *(int *)(iVar9 + 0x14) % 100;
        *(int *)(iVar9 + 0x14) = iVar17;
        FUN_00444690(local_1cc,s__s__d____s__02d__02d__02d__s__02_0045bec8,local_26c,
                     *(undefined1 *)(DAT_0053ea20 + 0x1005c),local_30c,iVar17,
                     *(int *)(iVar9 + 0x10) + 1,*(undefined4 *)(iVar9 + 0xc),local_2bc,
                     *(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 4));
        uVar7 = 0xffffffff;
        pcVar10 = local_1cc;
        do {
          pcVar13 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar10 = pcVar13 + -uVar7;
        pcVar12 = pcVar12 + iVar11 * 0x50;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        *(undefined1 *)((int)puVar6 + iVar11) = 1;
        puVar14 = puVar6 + iVar11 * 0x42 + 0xa2;
        *puVar14 = *(undefined4 *)(DAT_0053ea20 + 0x10000);
        puVar14[1] = *(undefined4 *)(DAT_0053ea20 + 0x10004);
        puVar15 = (undefined4 *)(DAT_0053ea20 + 0x10040);
        puVar14 = puVar14 + 2;
        for (iVar11 = 0x42; uVar18 = DAT_004537e8, iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar14 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar14 = puVar14 + 1;
        }
LAB_0040bcde:
        DAT_004537e8 = uVar18;
        if (puVar6 != (undefined4 *)0x0) {
          iVar11 = FUN_004056f0(local_104,&DAT_0045bd6c);
          if (iVar11 != 0) {
            FUN_00444dd0(puVar6,1,0xac8,iVar11);
            FUN_00444c10(iVar11);
          }
          FUN_00443fe0(puVar6);
        }
      }
      DAT_004e1bdc = 0;
    }
  }
  return;
}


