/*
 * Function: FUN_0042bff0
 * Entry:    0042bff0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042bff0(short param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined4 *puVar21;
  char *pcVar22;
  int iStack00000008;
  int aiStackY_401a0 [65512];
  ushort local_1e4;
  ushort local_1e2;
  ushort local_1e0;
  undefined4 *local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  undefined4 *local_1c8;
  undefined4 local_1c4;
  undefined2 local_1c0 [2];
  undefined2 local_1bc;
  undefined2 local_1b8;
  undefined **local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4 [15];
  undefined1 local_168 [32];
  uint local_148 [10];
  undefined1 local_120 [28];
  char local_104 [260];
  
  local_1a4[0] = 4;
  local_1a4[1] = 8;
  local_1a4[2] = 0x10;
  local_1a4[3] = 0x20;
  local_1a4[4] = 0x40;
  local_1a4[5] = 0x80;
  local_1a4[6] = 0x100;
  local_1a4[7] = 0x200;
  local_1a4[8] = 0x400;
  local_1a4[9] = 0x800;
  local_1a4[10] = 0x1000;
  local_1a4[0xb] = 0x2000;
  local_1a4[0xc] = 0x4000;
  local_1a4[0xd] = 0x8000;
  local_1a4[0xe] = 0x10000;
  local_1c4 = FUN_00443ea0(3000000);
  puVar17 = &DAT_004d23a0;
  iStack00000008 = DAT_0053ea20 + 0x180000;
  DAT_004d138c = 1;
  local_1dc = &DAT_004d23a0;
  local_1d4 = iStack00000008;
  FUN_00440750(&DAT_004d1900,0x34,0x854);
  FUN_00440750(&DAT_004ded00,0xc,0x2c88);
  FUN_00440750(&DAT_004d0000,0x14,5000);
  puVar21 = &DAT_004d23a0;
  for (iVar10 = 0x3200; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  DAT_004d18fc = 0;
  puVar21 = (undefined4 *)&DAT_004a6740;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  DAT_004cd970 = 0;
  DAT_004d18ec = 0;
  DAT_004d13bc = 0;
  local_1ac = 0;
  local_1cc = 0;
  FUN_00440ab0();
  thunk_FUN_00421370();
  FUN_004204f0();
  if (*(char *)(DAT_0053ea20 + 0x10044) == '\0') {
    *(undefined1 *)(DAT_0053ea20 + 0x10044) = 10;
  }
  _DAT_004e1bd4 = 0;
  _DAT_004e1bd0 = 0;
  FUN_0041f3d0();
  DAT_004e1bc8 = 0;
  if (((((param_1 == 0x41) || (param_1 == 0x42)) || (param_1 == 0x43)) ||
      ((param_1 == 0x44 || (param_1 == 0x45)))) || (param_1 == 0x3b)) {
    uVar14 = 0xffffffff;
    local_1b0 = &PTR_s____BZE_TITLE_BZE_1_004a16f8 + param_1 * 8;
    pcVar6 = (&PTR_s____BZE_TITLE_BZE_1_004a16f8)[param_1 * 8];
    do {
      pcVar22 = pcVar6;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar22 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar22;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    pcVar6 = pcVar22 + -uVar14;
    pcVar22 = local_104;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar22 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar22 = pcVar22 + 1;
    }
    uVar14 = 0xffffffff;
    pcVar6 = local_104;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = _strrchr(local_104,0x2e);
    FUN_00446020(pcVar6 + 4,pcVar6,local_104 + (~uVar14 - (int)pcVar6));
    switch(DAT_0053e848) {
    case 0:
      builtin_strncpy(pcVar6,"_ang",4);
      break;
    case 1:
      builtin_strncpy(pcVar6,"_fra",4);
      break;
    case 2:
      builtin_strncpy(pcVar6,"_ger",4);
      break;
    case 3:
      builtin_strncpy(pcVar6,"_esp",4);
      break;
    case 4:
      builtin_strncpy(pcVar6,"_ita",4);
      break;
    case 5:
      builtin_strncpy(pcVar6,"_hol",4);
    }
    DAT_004e1be0 = FUN_0042bd90(local_104);
  }
  else {
    local_1b0 = &PTR_s____BZE_TITLE_BZE_1_004a16f8 + param_1 * 8;
    DAT_004e1be0 = FUN_0042bd90((&PTR_s____BZE_TITLE_BZE_1_004a16f8)[param_1 * 8]);
  }
  if (DAT_004e1be0 != -1) {
    DAT_004e1bcc = FUN_0042be60(DAT_004e1be0);
    DAT_004e1bd8 = 0x800;
    FUN_0042be90(DAT_004e1be0,&DAT_004a6860);
    iVar10 = DAT_004a6864;
    _DAT_004e1bd4 = DAT_004a6860;
    puVar7 = &DAT_004a6868;
    if (DAT_004a6864 != 0) {
      puVar11 = local_148 + 1;
      iVar16 = DAT_004a6864;
      do {
        puVar8 = puVar7 + 1;
        puVar11[-1] = *puVar7;
        puVar7 = puVar7 + 2;
        *puVar11 = *puVar8;
        iVar16 = iVar16 + -1;
        puVar11 = puVar11 + 2;
      } while (iVar16 != 0);
    }
    DAT_004e1bd8 = local_148[1];
    local_1d8 = 1;
    FUN_0042be90(DAT_004e1be0,&DAT_004a6860);
    puVar7 = (uint *)&DAT_004a6860;
    if (iVar10 != 3) {
      if (DAT_004a6860 != 0x31) {
        puVar11 = local_148;
        do {
          iVar10 = DAT_004a60d8;
          puVar11 = puVar11 + 2;
          if (*puVar7 != 0x4b) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          DAT_004e1bd8 = *puVar11;
          local_1d8 = local_1d8 + 1;
          FUN_0042be90(DAT_004e1be0,local_1c4);
          puVar7 = puVar7 + 2;
          *(undefined **)(iVar10 + 4) = &DAT_004e19a0;
          puVar17 = local_1dc;
        } while (*puVar7 != 0x31);
      }
      puVar7 = puVar7 + 1;
    }
    DAT_004e1bd8 = local_148[local_1d8 * 2 + 1];
    local_1d8 = local_1d8 + 1;
    FUN_0042be90(DAT_004e1be0,iStack00000008);
    uVar14 = *puVar7;
    iVar10 = local_1d4;
    while (uVar14 != 0x32) {
      puVar7 = puVar7 + 1;
      if (uVar14 == 0x2f) {
        if ((short)local_1cc < 2) {
          DAT_004a6720 = iVar10 + DAT_004cdfc0 * 0x1a8;
          DAT_004e19f8 = DAT_004a6720 + DAT_004a6724 * 0xcc;
          iVar16 = DAT_004e19f8 + (short)DAT_004d18e4 * 0x4c;
          DAT_004cd998 = iVar10;
          FUN_00440750(iVar10,0x1a8,DAT_004cdfc0 * 0x1a8);
          FUN_00440750(DAT_004a6720,0xcc,DAT_004a6724 * 0xcc);
          FUN_00440750(DAT_004e19f8,0x4c,(short)DAT_004d18e4 * 0x4c);
          iVar12 = (int)(short)DAT_004d2154;
          iVar9 = (int)(short)DAT_004d13b2;
          piVar13 = &DAT_004d22a4;
          iVar10 = local_1a4[iVar9 - iVar12];
          do {
            piVar13[-1] = iVar9 - iVar12;
            *piVar13 = iVar16;
            piVar13 = piVar13 + 5;
            iVar16 = iVar16 + iVar10;
          } while ((int)piVar13 < 0x4d22e0);
          local_1d4 = iVar16;
          FUN_00440920();
          iVar10 = iVar16;
        }
        DAT_004e1bd8 = local_148[local_1d8 * 2 + 1];
        local_1d8 = local_1d8 + 1;
        FUN_0042be90(DAT_004e1be0,iVar10);
        iStack00000008 = iVar10;
      }
      else if (uVar14 == 0x30) {
        uVar14 = *puVar7;
        iVar16 = local_1d4;
        iVar9 = local_1cc;
        while (local_1d4 = iVar16, local_1cc = iVar9, uVar14 != 0x31) {
          puVar11 = puVar7 + 1;
          switch(uVar14) {
          case 0:
            uVar14 = *puVar11;
            puVar7 = puVar11;
            if (uVar14 != 0x31) {
              do {
                puVar11 = puVar7 + 1;
                switch(uVar14) {
                case 1:
                  DAT_004e1bd8 = puVar7[2];
                  FUN_00420700(*puVar11 + iStack00000008,DAT_004e1bd8);
                  iVar16 = iVar16 + DAT_004e1bd8;
                  puVar11 = puVar7 + 3;
                  break;
                case 2:
                  DAT_004e1bd8 = puVar7[2];
                  FUN_00420790(*puVar11 + iStack00000008,DAT_004e1bd8);
                  puVar11 = puVar7 + 3;
                  break;
                case 3:
                  DAT_004e1bd8 = puVar7[2];
                  iVar16 = iVar16 + DAT_004e1bd8;
                  FUN_0041f3d0(puVar7[3],*puVar11 + iStack00000008);
                  goto LAB_0042cd5f;
                case 4:
                  FUN_00420540(puVar11);
                  goto LAB_0042cd5f;
                case 0x4a:
                  FUN_0041f3d0(puVar11);
LAB_0042cd5f:
                  puVar11 = puVar7 + 4;
                }
                uVar14 = *puVar11;
                puVar7 = puVar11;
              } while (uVar14 != 0x31);
              local_1d4 = iVar16;
            }
            break;
          case 5:
            FUN_004203b0();
            uVar14 = *puVar11;
            while (uVar14 != 0x31) {
              puVar7 = puVar11 + 1;
              if (uVar14 == 6) {
                FUN_004203d0(puVar7);
                puVar7 = puVar11 + 3;
              }
              puVar11 = puVar7;
              uVar14 = *puVar7;
            }
            break;
          case 7:
          case 10:
            uVar18 = local_1ac;
            goto LAB_0042d0cd;
          case 8:
            uVar18 = 1;
LAB_0042d0cd:
            iVar10 = FUN_00440710(DAT_004cd998,0x1a8,DAT_004cdfc0 * 0x1a8);
            if (iVar10 == 0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            if ((short)uVar18 == 0) {
              DAT_004d18fc = FUN_00440810(DAT_004d18fc,iVar10);
            }
            else {
              DAT_004cd970 = FUN_00440810(DAT_004cd970,iVar10);
            }
            *(undefined2 *)(iVar10 + 0xf0) = 0xa00;
            *(int *)(iVar10 + 0xa8) = iVar10 + 0xb4;
            *(undefined2 *)(iVar10 + 0x20) = 0xffff;
            uVar14 = *puVar11;
            local_1ac = 0;
            if (uVar14 != 0x31) {
              puVar19 = (ushort *)((int)puVar7 + 6);
              puVar7 = puVar11;
              do {
                puVar11 = puVar7 + 1;
                puVar20 = puVar19 + 2;
                switch(uVar14) {
                case 0xb:
                  FUN_00426270(*(undefined4 *)(local_1a8 + 0x48),(ushort)*puVar11);
                  *(ushort *)(iVar10 + 0x174) = (ushort)*puVar11;
                  *(ushort *)(iVar10 + 0x176) = *puVar20;
                  goto switchD_0042d17a_caseD_19;
                case 0xc:
                  *(ushort *)(iVar10 + 0x178) = (ushort)*puVar11;
                  *(ushort *)(iVar10 + 0x17a) = *puVar20;
                  goto switchD_0042d17a_caseD_19;
                case 0xe:
                  *(undefined2 *)(iVar10 + 0x24) = 4;
                  *(char *)(iVar10 + 0xe8 + (int)*(char *)(iVar10 + 0xfc)) = (char)*puVar11;
                  *(char *)(iVar10 + 0xfc) = *(char *)(iVar10 + 0xfc) + '\x01';
                  goto switchD_0042d17a_caseD_19;
                case 0xf:
                  iVar16 = FUN_004406a0(*puVar11);
                  if (iVar16 == 0) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  iVar9 = FUN_00440710(&DAT_004ded00,0xc,0x2c88);
                  if (iVar9 == 0) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  *(int *)(iVar9 + 8) = iVar16;
                  if (*(short *)(iVar16 + 10) == 0x100) {
                    local_1a8 = iVar16;
                  }
                  uVar18 = FUN_00440810(*(undefined4 *)(iVar10 + 0x5c),iVar9);
                  puVar11 = puVar7 + 2;
                  *(undefined4 *)(iVar10 + 0x5c) = uVar18;
                  puVar20 = puVar19 + 4;
                  puVar17 = local_1dc;
                  break;
                case 0x10:
                  uVar14 = *puVar11;
                  puVar11 = puVar7 + 4;
                  *(uint *)(iVar10 + 0xcc) = uVar14;
                  *(uint *)(iVar10 + 0xd0) = puVar7[2];
                  *(uint *)(iVar10 + 0xd4) = puVar7[3];
                  *(uint *)(iVar10 + 0xe8) = puVar7[2];
                  puVar20 = puVar19 + 8;
                  break;
                case 0x11:
                  uVar14 = *puVar11;
                  puVar11 = puVar7 + 4;
                  *(ushort *)(iVar10 + 0xc4) = (ushort)uVar14;
                  *(ushort *)(iVar10 + 0xc6) = (ushort)puVar7[2];
                  *(ushort *)(iVar10 + 200) = (ushort)puVar7[3];
                  puVar20 = puVar19 + 8;
                  break;
                case 0x12:
                  uVar14 = *puVar11;
                  puVar11 = puVar7 + 4;
                  *(uint *)(iVar10 + 0xb4) = uVar14;
                  *(uint *)(iVar10 + 0xb8) = puVar7[2];
                  *(uint *)(iVar10 + 0xbc) = puVar7[3];
                  puVar20 = puVar19 + 8;
                  break;
                case 0x13:
                  uVar14 = *puVar11;
                  *(char *)(iVar10 + 0x26) = (char)uVar14;
                  if ((char)uVar14 == '\x01') {
                    DAT_004d18f4 = iVar10 + 0xcc;
                    DAT_004d13c4 = iVar10;
                  }
                  goto switchD_0042d17a_caseD_19;
                case 0x15:
                  *(ushort *)(iVar10 + 0x24) = (ushort)*puVar11;
                  goto switchD_0042d17a_caseD_19;
                case 0x16:
                  uVar14 = *puVar11;
                  *(uint *)(iVar10 + 8) = uVar14;
                  *(uint *)(iVar10 + 0xc) = puVar7[2];
                  if ((*(int *)(iVar10 + 0x5c) != 0) &&
                     ((*(ushort *)(*(int *)(*(int *)(iVar10 + 0x5c) + 8) + 10) & 0x180) != 0)) {
                    *(uint *)(iVar10 + 8) = uVar14 | 0x200000;
                  }
                  puVar11 = puVar7 + 3;
                  puVar20 = puVar19 + 6;
                  break;
                case 0x17:
                  puVar17 = (undefined4 *)(iVar10 + 0xec);
                  iVar16 = (int)puVar11 - (int)puVar17;
                  iVar9 = 9;
                  do {
                    *puVar17 = *(undefined4 *)(iVar16 + (int)puVar17);
                    puVar17 = puVar17 + 1;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                  puVar11 = puVar7 + 10;
                  puVar20 = puVar19 + 0x14;
                  puVar17 = local_1dc;
                  break;
                case 0x18:
                  *(char **)(iVar10 + 0x100) = (char *)(iVar10 + 0x110);
                  *(char *)(iVar10 + 0x110) = (char)*puVar11;
                  *(char *)(iVar10 + 0x111) = *(char *)((int)puVar7 + 5);
                  *(ushort *)(iVar10 + 0x112) = (ushort)puVar7[2];
                  *(ushort *)(iVar10 + 0x114) = *(ushort *)((int)puVar7 + 10);
                  iVar16 = FUN_004406a0(puVar7[3]);
                  if (iVar16 == 0) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  *(undefined4 *)(iVar10 + 0x118) = *(undefined4 *)(iVar16 + 0x48);
                  iVar16 = FUN_004406a0(puVar7[4]);
                  if (iVar16 == 0) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  puVar11 = puVar7 + 5;
                  *(undefined4 *)(iVar10 + 0x11c) = *(undefined4 *)(iVar16 + 0x48);
                  *(undefined4 *)(iVar10 + 4) = 2;
                  puVar20 = puVar19 + 10;
                  break;
                case 0x19:
                  goto switchD_0042d17a_caseD_19;
                case 0x1a:
                  *(ushort *)(iVar10 + 0xe8) = (ushort)*puVar11;
                  goto switchD_0042d17a_caseD_19;
                case 0x1b:
                  uVar14 = *puVar11;
                  puVar11 = puVar7 + 4;
                  *(ushort *)(iVar10 + 0x30) = (ushort)uVar14;
                  *(ushort *)(iVar10 + 0x32) = (ushort)puVar7[2];
                  *(ushort *)(iVar10 + 0x34) = (ushort)puVar7[3];
                  puVar20 = puVar19 + 8;
                  break;
                case 0x1c:
                  uVar14 = *puVar11;
                  puVar11 = puVar7 + 4;
                  *(ushort *)(iVar10 + 0x38) = (ushort)uVar14;
                  *(ushort *)(iVar10 + 0x3a) = (ushort)puVar7[2];
                  *(ushort *)(iVar10 + 0x3c) = (ushort)puVar7[3];
                  puVar20 = puVar19 + 8;
                  break;
                case 0x1d:
                  *(ushort *)(iVar10 + 0x170) = (ushort)*puVar11;
                  goto switchD_0042d17a_caseD_19;
                case 0x1e:
                  *(ushort *)(iVar10 + 0x1a) = (ushort)*puVar11;
                  goto switchD_0042d17a_caseD_19;
                case 0x1f:
                  *(ushort *)(iVar10 + 0x20) = (ushort)*puVar11;
                  goto switchD_0042d17a_caseD_19;
                case 0x2a:
                  *(ushort *)(iVar10 + 0x18) = (ushort)*puVar11;
                  goto switchD_0042d17a_caseD_19;
                case 0x33:
                  puVar21 = *(undefined4 **)(iVar10 + 0xe0);
                  if (puVar21 == (undefined4 *)0x0) {
                    *puVar17 = 0;
                    *(undefined4 **)(iVar10 + 0xe0) = puVar17;
                  }
                  else {
                    for (puVar4 = (undefined4 *)*puVar21; puVar4 != (undefined4 *)0x0;
                        puVar4 = (undefined4 *)*puVar4) {
                      puVar21 = puVar4;
                    }
                    *puVar21 = puVar17;
                  }
                  local_1dc = puVar17 + 7;
                  if (0xc7ff < (int)(puVar17 + -0x1348e1)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  uVar14 = *puVar11;
                  puVar11 = puVar7 + 8;
                  *(ushort *)(puVar17 + 1) = (ushort)uVar14;
                  *(ushort *)((int)puVar17 + 6) = *puVar20;
                  *(ushort *)(puVar17 + 2) = (ushort)puVar7[2];
                  *(ushort *)((int)puVar17 + 10) = (ushort)puVar7[3];
                  puVar17[3] = puVar7[4];
                  puVar17[4] = puVar7[5];
                  *(ushort *)(puVar17 + 5) = (ushort)puVar7[6];
                  *(ushort *)((int)puVar17 + 0x16) = *(ushort *)((int)puVar7 + 0x1a);
                  *(ushort *)(puVar17 + 6) = (ushort)puVar7[7];
                  *(ushort *)((int)puVar17 + 0x1a) = *(ushort *)((int)puVar7 + 0x1e);
                  puVar20 = puVar19 + 0x10;
                  puVar17 = puVar17 + 7;
                  break;
                case 0x34:
                  puVar21 = *(undefined4 **)(iVar10 + 0xe4);
                  if (puVar21 == (undefined4 *)0x0) {
                    *puVar17 = 0;
                    *(undefined4 **)(iVar10 + 0xe4) = puVar17;
                  }
                  else {
                    for (puVar4 = (undefined4 *)*puVar21; puVar4 != (undefined4 *)0x0;
                        puVar4 = (undefined4 *)*puVar4) {
                      puVar21 = puVar4;
                    }
                    *puVar21 = puVar17;
                  }
                  local_1dc = puVar17 + 8;
                  if (0xc7ff < (int)(puVar17 + -0x1348e0)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  uVar3 = *puVar20;
                  *(ushort *)(puVar17 + 1) = (ushort)*puVar11;
                  uVar14 = puVar7[2];
                  *(ushort *)((int)puVar17 + 6) = uVar3;
                  uVar15 = puVar7[3];
                  puVar17[2] = uVar14;
                  cVar1 = *(char *)((int)puVar7 + 0xf);
                  *(char *)(puVar17 + 3) = (char)uVar15;
                  cVar2 = *(char *)((int)puVar7 + 0xd);
                  *(char *)((int)puVar17 + 0xf) = cVar1;
                  cVar1 = *(char *)((int)puVar7 + 0xe);
                  *(char *)((int)puVar17 + 0xd) = cVar2;
                  uVar14 = puVar7[4];
                  *(char *)((int)puVar17 + 0xe) = cVar1;
                  uVar3 = *(ushort *)((int)puVar7 + 0x12);
                  *(ushort *)(puVar17 + 4) = (ushort)uVar14;
                  uVar14 = puVar7[5];
                  *(ushort *)((int)puVar17 + 0x12) = uVar3;
                  uVar15 = puVar7[6];
                  puVar17[5] = uVar14;
                  uVar14 = puVar7[7];
                  puVar11 = puVar7 + 8;
                  puVar17[6] = uVar15;
                  puVar17[7] = uVar14;
                  puVar20 = puVar19 + 0x10;
                  puVar17 = puVar17 + 8;
                  break;
                case 0x35:
                  puVar21 = *(undefined4 **)(iVar10 + 0xdc);
                  if (puVar21 == (undefined4 *)0x0) {
                    *puVar17 = 0;
                    *(undefined4 **)(iVar10 + 0xdc) = puVar17;
                  }
                  else {
                    for (puVar4 = (undefined4 *)*puVar21; puVar4 != (undefined4 *)0x0;
                        puVar4 = (undefined4 *)*puVar4) {
                      puVar21 = puVar4;
                    }
                    *puVar21 = puVar17;
                  }
                  local_1dc = puVar17 + 4;
                  if (0xc7ff < (int)(puVar17 + -0x1348e4)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  *(ushort *)(puVar17 + 1) = (ushort)*puVar11;
                  puVar11 = puVar7 + 4;
                  *(undefined4 *)((int)puVar17 + 6) = *(undefined4 *)puVar20;
                  puVar20 = puVar19 + 8;
                  *(undefined4 *)((int)puVar17 + 10) = *(undefined4 *)(puVar19 + 4);
                  *(ushort *)((int)puVar17 + 0xe) = puVar19[6];
                  puVar17 = puVar17 + 4;
                  break;
                case 0x37:
                  puVar21 = *(undefined4 **)(iVar10 + 0xe0);
                  if (puVar21 == (undefined4 *)0x0) {
                    *puVar17 = 0;
                    *(undefined4 **)(iVar10 + 0xe0) = puVar17;
                  }
                  else {
                    for (puVar4 = (undefined4 *)*puVar21; puVar4 != (undefined4 *)0x0;
                        puVar4 = (undefined4 *)*puVar4) {
                      puVar21 = puVar4;
                    }
                    *puVar21 = puVar17;
                  }
                  local_1dc = puVar17 + 6;
                  if (0xc7ff < (int)(puVar17 + -0x1348e2)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  uVar14 = *puVar11;
                  puVar11 = puVar7 + 6;
                  *(ushort *)(puVar17 + 1) = (ushort)uVar14;
                  *(ushort *)((int)puVar17 + 6) = *puVar20;
                  *(ushort *)(puVar17 + 2) = (ushort)puVar7[2];
                  puVar17[3] = puVar7[3];
                  *(ushort *)((int)puVar17 + 10) = (ushort)puVar7[4];
                  *(ushort *)(puVar17 + 4) = *(ushort *)((int)puVar7 + 0x12);
                  *(ushort *)((int)puVar17 + 0x12) = (ushort)puVar7[5];
                  *(ushort *)(puVar17 + 5) = *(ushort *)((int)puVar7 + 0x16);
                  puVar20 = puVar19 + 0xc;
                  puVar17 = puVar17 + 6;
                  break;
                case 0x38:
                  puVar21 = *(undefined4 **)(iVar10 + 0xe4);
                  if (puVar21 == (undefined4 *)0x0) {
                    *puVar17 = 0;
                    *(undefined4 **)(iVar10 + 0xe4) = puVar17;
                  }
                  else {
                    for (puVar4 = (undefined4 *)*puVar21; puVar4 != (undefined4 *)0x0;
                        puVar4 = (undefined4 *)*puVar4) {
                      puVar21 = puVar4;
                    }
                    *puVar21 = puVar17;
                  }
                  local_1dc = puVar17 + 7;
                  if (0xc7ff < (int)(puVar17 + -0x1348e1)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  uVar3 = *puVar20;
                  *(ushort *)(puVar17 + 1) = (ushort)*puVar11;
                  uVar14 = puVar7[2];
                  *(ushort *)((int)puVar17 + 6) = uVar3;
                  uVar3 = *(ushort *)((int)puVar7 + 10);
                  *(ushort *)(puVar17 + 2) = (ushort)uVar14;
                  uVar15 = puVar7[3];
                  *(ushort *)((int)puVar17 + 10) = uVar3;
                  uVar14 = puVar7[4];
                  *(ushort *)(puVar17 + 3) = (ushort)uVar15;
                  uVar15 = puVar7[5];
                  puVar17[4] = uVar14;
                  uVar14 = puVar7[6];
                  puVar11 = puVar7 + 7;
                  puVar17[5] = uVar15;
                  puVar17[6] = uVar14;
                  puVar20 = puVar19 + 0xe;
                  puVar17 = puVar17 + 7;
                  break;
                case 0x3d:
                  *(ushort *)(iVar10 + 0x1c) = (ushort)*puVar11;
                  goto switchD_0042d17a_caseD_19;
                case 0x3e:
                  *(ushort *)(iVar10 + 0x22) = (ushort)*puVar11;
                  goto switchD_0042d17a_caseD_19;
                case 0x47:
                  *(undefined4 **)(iVar10 + 0x16c) = puVar17;
                  iVar16 = 0;
                  uVar3 = (ushort)*puVar11;
                  while (uVar3 != 0) {
                    iVar16 = iVar16 + 1;
                    *(ushort *)(*(int *)(iVar10 + 0x16c) + -2 + iVar16 * 2) = uVar3;
                    uVar3 = *(ushort *)((int)puVar11 + iVar16 * 2);
                  }
                  *(char *)(iVar10 + 0x132) = (char)iVar16;
                  local_1dc = (undefined4 *)((int)puVar17 + (iVar16 + 1U & 0xfffe) * 2);
                  if (0xc7ff < (int)(local_1dc + -0x1348e8)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  puVar11 = puVar7 + 6;
                  puVar20 = puVar19 + 0xc;
                  puVar17 = local_1dc;
                  break;
                case 0x48:
                  uVar14 = *puVar11;
                  puVar11 = puVar7 + 3;
                  *(ushort *)(iVar10 + 0x38) = (ushort)uVar14;
                  *(ushort *)(iVar10 + 0x3a) = *puVar20;
                  *(ushort *)(iVar10 + 0x3c) = (ushort)puVar7[2];
                  puVar20 = puVar19 + 6;
                  break;
                case 0x4d:
                  *(char *)(iVar10 + 0x27) = (char)*puVar11;
switchD_0042d17a_caseD_19:
                  puVar11 = puVar7 + 2;
                  puVar20 = puVar19 + 4;
                }
                uVar14 = *puVar11;
                puVar19 = puVar20;
                puVar7 = puVar11;
              } while (uVar14 != 0x31);
            }
            break;
          case 9:
            iVar10 = FUN_00440710(&DAT_004d1900,0x34,0x854);
            if (iVar10 == 0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            DAT_004d13bc = FUN_00440810(DAT_004d13bc,iVar10);
            uVar14 = *puVar11;
            while (uVar14 != 0x31) {
              puVar7 = puVar11 + 1;
              switch(uVar14) {
              case 0x10:
                uVar14 = *puVar7;
                puVar7 = puVar11 + 4;
                *(uint *)(iVar10 + 0xc) = uVar14;
                *(uint *)(iVar10 + 0x10) = puVar11[2];
                *(uint *)(iVar10 + 0x14) = puVar11[3];
                break;
              case 0x11:
                uVar14 = *puVar7;
                puVar7 = puVar11 + 4;
                *(ushort *)(iVar10 + 0x1c) = (ushort)uVar14;
                *(ushort *)(iVar10 + 0x1e) = (ushort)puVar11[2];
                *(ushort *)(iVar10 + 0x20) = (ushort)puVar11[3];
                break;
              case 0x1c:
                uVar14 = *puVar7;
                puVar7 = puVar11 + 4;
                *(ushort *)(iVar10 + 0x24) = (ushort)uVar14;
                *(ushort *)(iVar10 + 0x26) = (ushort)puVar11[2];
                *(ushort *)(iVar10 + 0x28) = (ushort)puVar11[3];
                break;
              case 0x1f:
                uVar14 = *puVar7;
                puVar7 = puVar11 + 2;
                *(ushort *)(iVar10 + 0x2c) = (ushort)uVar14;
                break;
              case 0x36:
                puVar21 = *(undefined4 **)(iVar10 + 0x30);
                if (puVar21 == (undefined4 *)0x0) {
                  *puVar17 = 0;
                  *(undefined4 **)(iVar10 + 0x30) = puVar17;
                }
                else {
                  for (puVar4 = (undefined4 *)*puVar21; puVar4 != (undefined4 *)0x0;
                      puVar4 = (undefined4 *)*puVar4) {
                    puVar21 = puVar4;
                  }
                  *puVar21 = puVar17;
                }
                local_1dc = puVar17 + 9;
                if (0xc7ff < (int)(puVar17 + -0x1348df)) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                uVar14 = puVar11[2];
                puVar17[1] = *puVar7;
                uVar15 = puVar11[3];
                puVar17[2] = uVar14;
                cVar1 = *(char *)((int)puVar11 + 0xf);
                *(char *)(puVar17 + 3) = (char)uVar15;
                cVar2 = *(char *)((int)puVar11 + 0xd);
                *(char *)((int)puVar17 + 0xf) = cVar1;
                cVar1 = *(char *)((int)puVar11 + 0xe);
                *(char *)((int)puVar17 + 0xd) = cVar2;
                uVar14 = puVar11[4];
                *(char *)((int)puVar17 + 0xe) = cVar1;
                uVar3 = *(ushort *)((int)puVar11 + 0x12);
                *(ushort *)(puVar17 + 4) = (ushort)uVar14;
                uVar14 = puVar11[5];
                *(ushort *)((int)puVar17 + 0x12) = uVar3;
                uVar15 = puVar11[6];
                puVar17[5] = uVar14;
                uVar14 = puVar11[7];
                puVar17[6] = uVar15;
                uVar15 = puVar11[8];
                puVar17[7] = uVar14;
                puVar17[8] = uVar15;
                puVar7 = puVar11 + 9;
                puVar17 = puVar17 + 9;
              }
              puVar11 = puVar7;
              uVar14 = *puVar7;
            }
            break;
          case 0x20:
            iVar10 = FUN_00440710(DAT_004e19f8,0x4c,(short)DAT_004d18e4 * 0x4c);
            if (iVar10 == 0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            DAT_004d18ec = FUN_00440810(DAT_004d18ec,iVar10);
            *(undefined2 *)(iVar10 + 0x10) = 0;
            uVar14 = *puVar11;
            iVar16 = DAT_004d2384;
            puVar21 = local_1c8;
            while (DAT_004d2384 = iVar16, uVar14 != 0x31) {
              puVar7 = puVar11 + 1;
              switch(uVar14) {
              case 0x10:
                *(uint *)(*(int *)(puVar21[1] + 0x44) + 0x18) = *puVar7;
                *(uint *)(*(int *)(puVar21[1] + 0x44) + 0x1c) = puVar11[2];
                *(uint *)(*(int *)(puVar21[1] + 0x44) + 0x20) = puVar11[3];
                FUN_004079a0(puVar21[1] + 4,*(int *)(puVar21[1] + 0x44) + 0x18);
                uVar18 = DAT_004d18ec;
                *(int *)(&DAT_004d21a0 + *(int *)(iVar10 + 0xc) * 4) = local_1d0;
                DAT_004d18ec = FUN_00440790(uVar18,iVar10);
                goto LAB_0042cc56;
              case 0x11:
                local_1d0 = FUN_00440840();
                if (local_1d0 == 0) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                *(byte *)(local_1d0 + 8) = *(byte *)(local_1d0 + 8) | 2;
                puVar21 = (undefined4 *)(local_1d0 + 0xc);
                *(undefined4 *)(local_1d0 + 0x18) = 0xffffffff;
                *puVar21 = 0;
                *(undefined4 *)(local_1d0 + 0x14) = *(undefined4 *)(iVar10 + 0x48);
                *(undefined4 *)(*(int *)(local_1d0 + 0x10) + 0x4c) = 0;
                *(undefined4 *)(*(int *)(local_1d0 + 0x10) + 0x48) = 0;
                *(ushort *)(*(int *)(*(int *)(local_1d0 + 0x10) + 0x44) + 0x10) = (ushort)*puVar7;
                *(ushort *)(*(int *)(*(int *)(local_1d0 + 0x10) + 0x44) + 0x12) = (ushort)puVar11[2]
                ;
                *(ushort *)(*(int *)(*(int *)(local_1d0 + 0x10) + 0x44) + 0x14) = (ushort)puVar11[3]
                ;
                **(undefined4 **)(local_1d0 + 0x10) = 0;
                local_1c8 = puVar21;
                FUN_004072e0(*(int *)(*(int *)(local_1d0 + 0x10) + 0x44) + 0x10,
                             *(int *)(local_1d0 + 0x10) + 4);
                goto LAB_0042cc56;
              case 0x12:
                **(uint **)(puVar21[1] + 0x44) = *puVar7;
                *(uint *)(*(int *)(puVar21[1] + 0x44) + 4) = *puVar7;
                *(uint *)(*(int *)(puVar21[1] + 0x44) + 8) = *puVar7;
                FUN_00407900(puVar21[1] + 4,*(undefined4 *)(puVar21[1] + 0x44));
                goto LAB_0042cc56;
              case 0x21:
                uVar14 = *puVar7;
                *(undefined2 *)(iVar10 + 0x40) = 0;
                *(uint *)(iVar10 + 0xc) = (uint)(ushort)uVar14;
                puVar7 = puVar11 + 2;
                break;
              case 0x24:
                uVar14 = *puVar7;
                DAT_004e1bd8 = puVar11[2];
                *(undefined2 *)(iVar10 + 10) = 2;
                iVar16 = uVar14 + iStack00000008 + 4;
                *(int *)(iVar10 + 0x48) = iVar16;
                FUN_00410870(iVar16);
                *(int *)(iVar10 + 0x48) = *(int *)(iVar10 + 0x48) + 8;
                FUN_00425980(uVar14 + iStack00000008);
                puVar7 = puVar11 + 3;
                puVar21 = local_1c8;
                break;
              case 0x39:
                puVar4 = *(undefined4 **)(iVar16 + 0xe4);
                if (puVar4 == (undefined4 *)0x0) {
                  *puVar17 = 0;
                  *(undefined4 **)(iVar16 + 0xe4) = puVar17;
                }
                else {
                  for (puVar5 = (undefined4 *)*puVar4; puVar5 != (undefined4 *)0x0;
                      puVar5 = (undefined4 *)*puVar5) {
                    puVar4 = puVar5;
                  }
                  *puVar4 = puVar17;
                }
                local_1dc = puVar17 + 4;
                if (0xc7ff < (int)(puVar17 + -0x1348e4)) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                uVar3 = *(ushort *)((int)puVar11 + 6);
                *(ushort *)(puVar17 + 1) = (ushort)*puVar7;
                uVar14 = puVar11[2];
                *(ushort *)((int)puVar17 + 6) = uVar3;
                uVar3 = *(ushort *)((int)puVar11 + 10);
                *(ushort *)(puVar17 + 2) = (ushort)uVar14;
                uVar14 = puVar11[3];
                *(ushort *)((int)puVar17 + 10) = uVar3;
                uVar3 = *(ushort *)((int)puVar11 + 0xe);
                *(ushort *)(puVar17 + 3) = (ushort)uVar14;
                *(ushort *)((int)puVar17 + 0xe) = uVar3;
                puVar17 = puVar17 + 4;
LAB_0042cc56:
                puVar7 = puVar11 + 4;
                break;
              case 0x3a:
                puVar21 = *(undefined4 **)(iVar16 + 0xdc);
                if (puVar21 == (undefined4 *)0x0) {
                  *puVar17 = 0;
                  *(undefined4 **)(iVar16 + 0xdc) = puVar17;
                }
                else {
                  for (puVar4 = (undefined4 *)*puVar21; puVar4 != (undefined4 *)0x0;
                      puVar4 = (undefined4 *)*puVar4) {
                    puVar21 = puVar4;
                  }
                  *puVar21 = puVar17;
                }
                if (0xc7ff < (int)(puVar17 + -0x1348db)) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                cVar1 = *(char *)((int)puVar11 + 6);
                uVar14 = puVar11[2];
                puVar17[1] = (int)(short)(ushort)*puVar7;
                cVar2 = *(char *)((int)puVar11 + 10);
                *(char *)(puVar17 + 2) = cVar1;
                local_1e4 = (ushort)puVar11[3];
                *(char *)((int)puVar17 + 10) = cVar2;
                *(char *)((int)puVar17 + 9) = (char)uVar14;
                local_1e2 = *(ushort *)((int)puVar11 + 0xe);
                local_1e0 = 0;
                local_1dc = puVar17 + 0xd;
                FUN_004072e0(&local_1e4,local_168);
                local_1e4 = 0;
                local_1e2 = 0;
                local_1e0 = 0xf000;
                FUN_00408010(local_168,&local_1e4,local_1c0);
                *(undefined2 *)(puVar17 + 8) = local_1c0[0];
                local_1e4 = (ushort)(char)puVar11[4];
                *(undefined2 *)((int)puVar17 + 0x22) = local_1bc;
                local_1e2 = (ushort)*(char *)((int)puVar11 + 0x11);
                *(undefined2 *)(puVar17 + 9) = local_1b8;
                local_1e0 = *(ushort *)((int)puVar11 + 0x12);
                FUN_00408500(&local_1e4,&local_1e4);
                *(ushort *)(puVar17 + 3) = local_1e4;
                local_1e4 = (ushort)puVar11[5];
                *(ushort *)(puVar17 + 6) = local_1e0;
                *(ushort *)((int)puVar17 + 0x12) = local_1e2;
                local_1e2 = *(ushort *)((int)puVar11 + 0x16);
                local_1e0 = 0;
                FUN_004072e0(&local_1e4,local_168);
                local_1e4 = 0;
                local_1e2 = 0;
                local_1e0 = 0xf000;
                FUN_00408010(local_168,&local_1e4,local_1c0);
                *(undefined2 *)((int)puVar17 + 0x26) = local_1c0[0];
                local_1e4 = (ushort)(char)puVar11[6];
                *(undefined2 *)(puVar17 + 10) = local_1bc;
                local_1e2 = (ushort)*(char *)((int)puVar11 + 0x19);
                *(undefined2 *)((int)puVar17 + 0x2a) = local_1b8;
                local_1e0 = *(ushort *)((int)puVar11 + 0x1a);
                FUN_00408500(&local_1e4,&local_1e4);
                *(ushort *)((int)puVar17 + 0xe) = local_1e4;
                local_1e4 = (ushort)puVar11[7];
                *(ushort *)((int)puVar17 + 0x1a) = local_1e0;
                *(ushort *)(puVar17 + 5) = local_1e2;
                local_1e2 = *(ushort *)((int)puVar11 + 0x1e);
                local_1e0 = 0;
                FUN_004072e0(&local_1e4,local_168);
                local_1e4 = 0;
                local_1e2 = 0;
                local_1e0 = 0xf000;
                FUN_00408010(local_168,&local_1e4,local_1c0);
                *(undefined2 *)(puVar17 + 0xb) = local_1c0[0];
                local_1e4 = (ushort)(char)puVar11[8];
                *(undefined2 *)((int)puVar17 + 0x2e) = local_1bc;
                local_1e2 = (ushort)*(char *)((int)puVar11 + 0x21);
                *(undefined2 *)(puVar17 + 0xc) = local_1b8;
                local_1e0 = *(ushort *)((int)puVar11 + 0x22);
                FUN_00408500(&local_1e4,&local_1e4);
                *(ushort *)(puVar17 + 4) = local_1e4;
                *(ushort *)((int)puVar17 + 0x16) = local_1e2;
                *(ushort *)(puVar17 + 7) = local_1e0;
                puVar7 = puVar11 + 9;
                puVar17 = puVar17 + 0xd;
                puVar21 = local_1c8;
                break;
              case 0x3e:
                uVar14 = *puVar7;
                puVar7 = puVar11 + 2;
                *(ushort *)(local_1d0 + 0xca) = (ushort)uVar14;
                break;
              case 0x49:
                uVar14 = *puVar7;
                puVar7 = puVar11 + 2;
                *(char *)(local_1d0 + 0xc9) = (char)uVar14;
              }
              puVar11 = puVar7;
              iVar16 = DAT_004d2384;
              uVar14 = *puVar7;
            }
            break;
          case 0x22:
            iVar10 = FUN_00440710(DAT_004e19f8,0x4c,(short)DAT_004d18e4 * 0x4c);
            if (iVar10 == 0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            DAT_004d18ec = FUN_00440810(DAT_004d18ec,iVar10);
            *(undefined2 *)(iVar10 + 0x10) = 0;
            *(undefined2 *)(iVar10 + 0x12) = 0;
            uVar14 = *puVar11;
            while (uVar14 != 0x31) {
              puVar7 = puVar11 + 1;
              switch(uVar14) {
              case 0xd:
                *(ushort *)(iVar10 + 0x24 + (uint)*(ushort *)(iVar10 + 0x12) * 0xe) =
                     (ushort)*puVar7;
                *(ushort *)(iVar10 + 0x26 + (uint)*(ushort *)(iVar10 + 0x12) * 0xe) =
                     *(ushort *)((int)puVar11 + 6);
                *(ushort *)(iVar10 + 0x28 + (uint)*(ushort *)(iVar10 + 0x12) * 0xe) =
                     (ushort)puVar11[2];
                *(char *)(iVar10 + 0x2d + (uint)*(ushort *)(iVar10 + 0x12) * 0xe) =
                     *(char *)((int)puVar11 + 0xf);
                *(char *)(iVar10 + (*(ushort *)(iVar10 + 0x12) + 3) * 0xe) = (char)puVar11[3];
                *(ushort *)(iVar10 + 0x2e + (uint)*(ushort *)(iVar10 + 0x12) * 0xe) =
                     (ushort)puVar11[4];
                *(ushort *)(iVar10 + 0x30 + (uint)*(ushort *)(iVar10 + 0x12) * 0xe) =
                     *(ushort *)((int)puVar11 + 0x12);
                *(char *)(iVar10 + 0x2b + (uint)*(ushort *)(iVar10 + 0x12) * 0xe) =
                     *(char *)((int)puVar11 + 0xd);
                *(char *)(iVar10 + 0x2c + (uint)*(ushort *)(iVar10 + 0x12) * 0xe) =
                     *(char *)((int)puVar11 + 0xe);
                *(short *)(iVar10 + 0x12) = *(short *)(iVar10 + 0x12) + 1;
                puVar7 = puVar11 + 5;
                break;
              case 0x24:
                uVar14 = *puVar7;
                DAT_004e1bd8 = puVar11[2];
                iVar16 = uVar14 + iStack00000008 + 4;
                *(int *)(iVar10 + 0x48) = iVar16;
                FUN_00410870(iVar16);
                *(int *)(iVar10 + 0x48) = *(int *)(iVar10 + 0x48) + 8;
                FUN_00425980(uVar14 + iStack00000008);
                *(undefined2 *)(iVar10 + 10) = 2;
                puVar7 = puVar11 + 3;
                break;
              case 0x25:
                iVar16 = FUN_00440710(&DAT_004d0000,0x14,5000);
                if (iVar16 == 0) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                *(int *)(iVar10 + 0x48) = iVar16;
                DAT_004e1bd8 = puVar11[2];
                *(uint *)(iVar16 + 8) = *puVar7 + iStack00000008;
                *(undefined2 *)(iVar10 + 10) = 4;
                iVar9 = *(int *)(iVar16 + 8);
                *(ushort *)(iVar16 + 0x12) = *(ushort *)(iVar9 + 2) >> 1;
                *(undefined2 **)(iVar16 + 8) = (undefined2 *)(iVar9 + 4);
                *(undefined2 *)(iVar16 + 0xe) = *(undefined2 *)(iVar9 + 4);
                *(int *)(iVar16 + 8) = iVar9 + 8;
                puVar7 = puVar11 + 3;
                *(undefined2 *)(iVar16 + 0x10) = *(undefined2 *)(iVar9 + 0xc);
                break;
              case 0x26:
                *(undefined2 *)(iVar10 + 10) = 0x10;
                goto LAB_0042c6ff;
              case 0x27:
                *(undefined2 *)(iVar10 + 10) = 0x20;
                goto LAB_0042c6ff;
              case 0x28:
                *(undefined2 *)(iVar10 + 10) = 0x40;
LAB_0042c6ff:
                *(int *)(iVar10 + 0x48) = iStack00000008;
LAB_0042c702:
                puVar7 = puVar11 + 2;
                break;
              case 0x29:
                *(ushort *)(iVar10 + 8) = (ushort)*puVar7;
                goto LAB_0042c702;
              case 0x2a:
                *(uint *)(iVar10 + 0xc) = (uint)*(ushort *)((int)puVar11 + 6);
                *(ushort *)(iVar10 + 0x40) = (ushort)*puVar7;
                goto LAB_0042c702;
              case 0x2b:
                *(ushort *)(iVar10 + 0x14 + (uint)*(ushort *)(iVar10 + 0x10) * 4) = (ushort)*puVar7;
                *(ushort *)(iVar10 + 0x16 + (uint)*(ushort *)(iVar10 + 0x10) * 4) =
                     (ushort)puVar11[2];
                *(short *)(iVar10 + 0x10) = *(short *)(iVar10 + 0x10) + 1;
                puVar7 = puVar11 + 3;
                break;
              case 0x45:
                *(ushort *)(iVar10 + 0x42) = *(ushort *)((int)puVar11 + 6) - (ushort)*puVar7;
                uVar14 = *puVar7;
                puVar7 = puVar11 + 3;
                *(char *)(iVar10 + 0x44) = (char)uVar14 + -1;
                *(char *)(iVar10 + 0x45) = (char)puVar11[2];
                *(undefined2 *)(iVar10 + 10) = 0x80;
                break;
              case 0x46:
                uVar14 = *puVar7;
                DAT_004e1bd8 = puVar11[2];
                iVar16 = uVar14 + iStack00000008 + 4;
                *(int *)(iVar10 + 0x48) = iVar16;
                FUN_00410870(iVar16);
                *(int *)(iVar10 + 0x48) = *(int *)(iVar10 + 0x48) + 8;
                FUN_00425980(uVar14 + iStack00000008);
                *(undefined2 *)(iVar10 + 10) = 0x100;
                puVar7 = puVar11 + 3;
              }
              puVar11 = puVar7;
              uVar14 = *puVar7;
            }
            break;
          case 0x2c:
            uVar14 = *puVar11;
            while (uVar14 != 0x31) {
              puVar7 = puVar11 + 1;
              if (uVar14 == 0x2d) {
                uVar14 = *puVar7;
                DAT_004e1bd8 = puVar11[2];
                FUN_00424580(uVar14 + iStack00000008,DAT_004e1bd8);
                FUN_004108b0(uVar14 + iStack00000008 + 4,local_120);
                puVar7 = puVar11 + 3;
              }
              puVar11 = puVar7;
              uVar14 = *puVar7;
            }
            break;
          case 0x3b:
            uVar14 = *puVar11;
            while (uVar14 != 0x31) {
              puVar7 = puVar11 + 1;
              if (uVar14 == 0x3c) {
                DAT_004e1bd8 = puVar11[2];
                DAT_004cd990 = *puVar7 + iStack00000008;
                puVar7 = puVar11 + 3;
              }
              puVar11 = puVar7;
              uVar14 = *puVar7;
            }
            break;
          case 0x3f:
            uVar14 = *puVar11;
            puVar7 = puVar11;
            if (uVar14 != 0x31) {
              do {
                puVar11 = puVar7 + 1;
                switch(uVar14) {
                case 0x2e:
                  DAT_004d22e0 = *puVar11;
                  DAT_004d22e4 = puVar7[2];
                  DAT_004d22e8 = puVar7[3];
                  break;
                default:
                  goto switchD_0042ce42_caseD_2f;
                case 0x40:
                  _DAT_004d138e = (ushort)*puVar11;
                  _DAT_004cd974 = (ushort)puVar7[2];
                  DAT_004d138c = (ushort)puVar7[3];
                  break;
                case 0x41:
                  DAT_004d16e0 = (char)*puVar11;
                  DAT_004d16e1 = (char)puVar7[2];
                  DAT_004d16e2 = (char)puVar7[3];
                  break;
                case 0x42:
                  DAT_004e198c = (char)*puVar11;
                  DAT_004e198d._0_1_ = (char)puVar7[2];
                  DAT_004e198d._1_1_ = (char)puVar7[3];
                  break;
                case 0x43:
                  FUN_00407fe0(*puVar11,puVar7[2],puVar7[3]);
                  break;
                case 0x44:
                  DAT_004cd964 = (ushort)puVar7[2];
                  DAT_004d22de = (ushort)*puVar11;
                  DAT_004e1988 = (ushort)puVar7[3];
                  FUN_00410770((uint)DAT_004d22de << 2);
                  break;
                case 0x4c:
                  DAT_004d18e4 = (ushort)puVar7[3];
                  DAT_004cdfc0 = (ushort)*puVar11 + 500;
                  DAT_004a6724 = (ushort)puVar7[2] + 500;
                  iVar9 = iVar9 + 1;
                  break;
                case 0x4e:
                  DAT_004d13b2 = (ushort)*puVar11;
                  DAT_004d2154 = *(ushort *)((int)puVar7 + 6);
                  puVar11 = puVar7 + 2;
                  goto switchD_0042ce42_caseD_2f;
                }
                puVar11 = puVar7 + 4;
switchD_0042ce42_caseD_2f:
                uVar14 = *puVar11;
                puVar7 = puVar11;
              } while (uVar14 != 0x31);
              local_1cc = iVar9;
            }
            break;
          case 0x4f:
            uVar14 = *puVar11;
            while (uVar14 != 0x31) {
              puVar7 = puVar11 + 1;
              if (uVar14 == 0x50) {
                DAT_004e1bd8 = puVar11[2];
                DAT_004cd994 = *puVar7 + iStack00000008;
                puVar7 = puVar11 + 3;
              }
              puVar11 = puVar7;
              uVar14 = *puVar7;
            }
          }
          puVar7 = puVar11;
          iVar10 = local_1d4;
          iVar16 = local_1d4;
          iVar9 = local_1cc;
          uVar14 = *puVar11;
        }
        puVar7 = puVar7 + 1;
      }
      uVar14 = *puVar7;
    }
    if (*puVar7 == 0x32) {
      FUN_00405550(s_com_ENDLIST_trouve__004a22c0);
    }
    uVar14 = 0xffffffff;
    pcVar6 = *local_1b0;
    do {
      pcVar22 = pcVar6;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar22 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar22;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    pcVar6 = pcVar22 + -uVar14;
    pcVar22 = (char *)&DAT_0053e8e0;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar22 = pcVar22 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar22 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar22 = pcVar22 + 1;
    }
    FUN_00424640();
    FUN_0042bfe0(DAT_004e1be0);
    DAT_004e1bdc = 0;
    FUN_00443fe0(local_1c4);
  }
  return 0;
}


