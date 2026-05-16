/*
 * Function: FUN_00448b30
 * Entry:    00448b30
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00448b30(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  int iVar13;
  char *pcVar14;
  uint *puVar15;
  char *pcVar16;
  uint *puVar17;
  bool bVar18;
  longlong lVar19;
  char local_1cd;
  uint local_1cc;
  char local_1c7;
  char local_1c6;
  char local_1c5;
  int local_1c4;
  char local_1c0;
  char local_1bf;
  char local_1be;
  byte local_1bd;
  uint local_1bc;
  uint *local_1b8;
  uint local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  uint local_1a4;
  byte local_19e;
  undefined1 local_19d;
  undefined8 local_19c;
  undefined4 local_194;
  undefined2 local_18e;
  undefined4 *local_18c;
  int local_188;
  undefined4 local_184;
  byte local_180 [11];
  undefined1 local_175;
  char local_160;
  char local_15f [351];
  
  local_1bf = '\0';
  local_1cc = 0;
  local_1ac = 0;
  bVar11 = *param_2;
  puVar9 = local_18c;
  do {
    if (bVar11 == 0) {
LAB_00449786:
      if ((puVar9 == (undefined4 *)0xffffffff) && ((local_1ac == 0 && (local_1bf == '\0')))) {
        local_1ac = -1;
      }
      return local_1ac;
    }
    iVar13 = 0;
    if (DAT_004a4f54 < 2) {
      uVar5 = (byte)PTR_DAT_004a4d48[(uint)bVar11 * 2] & 8;
    }
    else {
      uVar5 = FUN_00448760(bVar11,8);
    }
    if (uVar5 != 0) {
      local_1cc = local_1cc - 1;
      uVar6 = FUN_00449900(&local_1cc,param_1,param_1);
      FUN_004498e0(uVar6);
      param_2 = param_2 + 1;
      iVar7 = FUN_0044dbc0(*param_2);
      while (iVar7 != 0) {
        param_2 = param_2 + 1;
        iVar7 = FUN_0044dbc0(*param_2);
      }
    }
    if (*param_2 != 0x25) {
      local_1cc = local_1cc + 1;
      puVar9 = (undefined4 *)FUN_004498b0(param_1);
      if ((undefined4 *)(uint)*param_2 != puVar9) goto LAB_0044976d;
      pbVar12 = param_2 + 1;
      if ((PTR_DAT_004a4d48[((uint)puVar9 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_1cc = local_1cc + 1;
        uVar5 = FUN_004498b0(param_1);
        if (param_2[1] != uVar5) {
          local_1cc = local_1cc - 1;
          FUN_004498e0(uVar5,param_1);
          goto LAB_0044976d;
        }
        local_1cc = local_1cc - 1;
        pbVar12 = param_2 + 2;
      }
      goto LAB_00449733;
    }
    local_1a4 = 0;
    local_1b4 = local_1b4 & 0xffffff00;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1c4 = 0;
    local_1bd = 0;
    local_1be = '\0';
    local_1c5 = '\0';
    local_1cd = '\0';
    local_1c0 = '\0';
    local_1c7 = '\0';
    local_1c6 = '\x01';
    local_188 = 0;
    do {
      pbVar12 = param_2 + 1;
      uVar5 = (uint)*pbVar12;
      if (DAT_004a4f54 < 2) {
        uVar8 = (byte)PTR_DAT_004a4d48[uVar5 * 2] & 4;
      }
      else {
        uVar8 = FUN_00448760(uVar5,4);
      }
      if (uVar8 == 0) {
        switch(uVar5) {
        case 0x2a:
          local_1c5 = local_1c5 + '\x01';
          break;
        default:
switchD_00448cb0_caseD_2b:
          local_1cd = local_1cd + '\x01';
          break;
        case 0x46:
        case 0x4e:
          break;
        case 0x49:
          if ((param_2[2] != 0x36) || (param_2[3] != 0x34)) goto switchD_00448cb0_caseD_2b;
          iVar13 = iVar13 + 1;
          local_19c = 0;
          pbVar12 = param_2 + 3;
          break;
        case 0x4c:
          local_1c6 = local_1c6 + '\x01';
          break;
        case 0x68:
          local_1c6 = local_1c6 + -1;
          local_1c7 = local_1c7 + -1;
          break;
        case 0x6c:
          local_1c6 = local_1c6 + '\x01';
        case 0x77:
          local_1c7 = local_1c7 + '\x01';
        }
      }
      else {
        local_1b0 = local_1b0 + 1;
        local_1c4 = (uVar5 - 0x30) + local_1c4 * 10;
      }
      param_2 = pbVar12;
    } while (local_1cd == '\0');
    puVar3 = param_3;
    if (local_1c5 == '\0') {
      local_1b8 = (uint *)*param_3;
      puVar3 = param_3 + 1;
      local_18c = param_3;
    }
    param_3 = puVar3;
    bVar18 = false;
    if ((local_1c7 == '\0') && ((*param_2 == 0x53 || (local_1c7 = -1, *param_2 == 0x43)))) {
      local_1c7 = '\x01';
    }
    local_1bc = *param_2 | 0x20;
    local_188 = iVar13;
    lVar19 = local_19c;
    if (local_1bc != 0x6e) {
      if ((local_1bc == 99) || (local_1bc == 0x7b)) {
        local_1cc = local_1cc + 1;
        puVar9 = (undefined4 *)FUN_004498b0(param_1);
        lVar19 = local_19c;
      }
      else {
        puVar9 = (undefined4 *)FUN_00449900(&local_1cc,param_1);
        lVar19 = local_19c;
      }
    }
    puVar15 = local_1b8;
    uVar5 = local_1bc;
    local_19c = lVar19;
    if ((local_1b0 != 0) && (local_1c4 == 0)) {
LAB_0044976d:
      local_1cc = local_1cc - 1;
      FUN_004498e0(puVar9,param_1);
      goto LAB_00449786;
    }
    switch(local_1bc) {
    case 99:
      if (local_1b0 == 0) {
        local_1b0 = 1;
        local_1c4 = local_1c4 + 1;
      }
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pcVar14 = &DAT_004a4f68;
      goto LAB_00448e2e;
    case 100:
    case 0x6f:
    case 0x75:
      goto switchD_00448dc8_caseD_64;
    case 0x65:
    case 0x66:
    case 0x67:
      pcVar14 = &local_160;
      if (puVar9 == (undefined4 *)0x2d) {
        local_160 = '-';
        pcVar14 = local_15f;
LAB_00449473:
        local_1c4 = local_1c4 + -1;
        local_1cc = local_1cc + 1;
        puVar9 = (undefined4 *)FUN_004498b0(param_1);
        lVar19 = local_19c;
      }
      else if (puVar9 == (undefined4 *)0x2b) goto LAB_00449473;
      iVar13 = local_1a8;
      if ((local_1b0 == 0) || (0x15d < local_1c4)) {
        local_1c4 = 0x15d;
      }
      while( true ) {
        if (DAT_004a4f54 < 2) {
          uVar5 = (byte)PTR_DAT_004a4d48[(int)puVar9 * 2] & 4;
        }
        else {
          local_19c = lVar19;
          uVar5 = FUN_00448760(puVar9,4);
          lVar19 = local_19c;
        }
        local_19c = lVar19;
        if ((uVar5 == 0) ||
           (iVar7 = local_1c4 + -1, bVar18 = local_1c4 == 0, local_1c4 = iVar7, bVar18)) break;
        *pcVar14 = (char)puVar9;
        pcVar14 = pcVar14 + 1;
        local_1cc = local_1cc + 1;
        puVar9 = (undefined4 *)FUN_004498b0(param_1);
        iVar13 = iVar13 + 1;
        lVar19 = local_19c;
      }
      if ((DAT_004a4f58 == (char)puVar9) &&
         (iVar7 = local_1c4 + -1, bVar18 = local_1c4 != 0, local_1c4 = iVar7, bVar18)) {
        local_1cc = local_1cc + 1;
        puVar9 = (undefined4 *)FUN_004498b0(param_1);
        *pcVar14 = DAT_004a4f58;
        while( true ) {
          pcVar14 = pcVar14 + 1;
          if (DAT_004a4f54 < 2) {
            uVar5 = (byte)PTR_DAT_004a4d48[(int)puVar9 * 2] & 4;
            lVar19 = local_19c;
          }
          else {
            uVar5 = FUN_00448760(puVar9,4);
            lVar19 = local_19c;
          }
          if ((uVar5 == 0) ||
             (iVar7 = local_1c4 + -1, bVar18 = local_1c4 == 0, local_1c4 = iVar7, bVar18)) break;
          *pcVar14 = (char)puVar9;
          iVar13 = iVar13 + 1;
          local_1cc = local_1cc + 1;
          local_19c = lVar19;
          puVar9 = (undefined4 *)FUN_004498b0(param_1);
        }
      }
      pcVar16 = pcVar14;
      if ((iVar13 != 0) &&
         (((puVar9 == (undefined4 *)0x65 || (puVar9 == (undefined4 *)0x45)) &&
          (iVar7 = local_1c4 + -1, bVar18 = local_1c4 != 0, local_1c4 = iVar7, bVar18)))) {
        *pcVar14 = 'e';
        pcVar16 = pcVar14 + 1;
        local_1cc = local_1cc + 1;
        local_19c = lVar19;
        puVar9 = (undefined4 *)FUN_004498b0(param_1);
        if (puVar9 == (undefined4 *)0x2d) {
          *pcVar16 = '-';
          pcVar16 = pcVar14 + 2;
LAB_004495ce:
          iVar7 = local_1c4 + -1;
          lVar19 = local_19c;
          if (local_1c4 != 0) goto LAB_004495e3;
        }
        else if (puVar9 == (undefined4 *)0x2b) goto LAB_004495ce;
        while( true ) {
          if (DAT_004a4f54 < 2) {
            uVar5 = (byte)PTR_DAT_004a4d48[(int)puVar9 * 2] & 4;
            lVar19 = local_19c;
          }
          else {
            uVar5 = FUN_00448760(puVar9,4);
            lVar19 = local_19c;
          }
          if ((uVar5 == 0) ||
             (iVar7 = local_1c4 + -1, bVar18 = local_1c4 == 0, local_1c4 = iVar7, bVar18)) break;
          iVar13 = iVar13 + 1;
          *pcVar16 = (char)puVar9;
          pcVar16 = pcVar16 + 1;
LAB_004495e3:
          local_1c4 = iVar7;
          local_1cc = local_1cc + 1;
          local_19c = lVar19;
          puVar9 = (undefined4 *)FUN_004498b0(param_1);
        }
      }
      local_1cc = local_1cc - 1;
      local_19c = lVar19;
      FUN_004498e0(puVar9,param_1);
      if (iVar13 == 0) goto LAB_00449786;
      lVar19 = local_19c;
      if (local_1c5 == '\0') {
        local_1ac = local_1ac + 1;
        *pcVar16 = '\0';
        (*(code *)PTR_FUN_004a4bc0)(local_1c6 + -1,local_1b8,&local_160);
        lVar19 = local_19c;
      }
      break;
    default:
      if ((undefined4 *)(uint)*param_2 != puVar9) goto LAB_0044976d;
      local_1bf = local_1bf + -1;
      if (local_1c5 == '\0') {
        param_3 = local_18c;
      }
      break;
    case 0x69:
      local_1bc = 100;
    case 0x78:
      uVar5 = local_1bc;
      if (puVar9 == (undefined4 *)0x2d) {
        local_1be = '\x01';
LAB_00449082:
        local_1c4 = local_1c4 + -1;
        if ((local_1c4 == 0) && (local_1b0 != 0)) {
          bVar18 = true;
        }
        else {
          local_1cc = local_1cc + 1;
          puVar9 = (undefined4 *)FUN_004498b0(param_1);
          lVar19 = local_19c;
        }
      }
      else if (puVar9 == (undefined4 *)0x2b) goto LAB_00449082;
      if (puVar9 == (undefined4 *)0x30) {
        local_1cc = local_1cc + 1;
        local_19c = lVar19;
        puVar9 = (undefined4 *)FUN_004498b0(param_1);
        if (((char)puVar9 == 'x') || ((char)puVar9 == 'X')) {
          local_1cc = local_1cc + 1;
          puVar9 = (undefined4 *)FUN_004498b0(param_1);
          uVar5 = 0x78;
          local_1bc = 0x78;
          lVar19 = local_19c;
        }
        else {
          local_1a8 = 1;
          if (uVar5 == 0x78) {
            local_1cc = local_1cc - 1;
            FUN_004498e0(puVar9,param_1);
            puVar9 = (undefined4 *)0x30;
            lVar19 = local_19c;
          }
          else {
            uVar5 = 0x6f;
            local_1bc = 0x6f;
            lVar19 = local_19c;
          }
        }
      }
      goto LAB_00449164;
    case 0x6e:
      uVar5 = local_1cc;
      if (local_1c5 != '\0') break;
      goto LAB_00449425;
    case 0x70:
      local_1c6 = '\x01';
switchD_00448dc8_caseD_64:
      if (puVar9 == (undefined4 *)0x2d) {
        local_1be = '\x01';
LAB_0044913a:
        local_1c4 = local_1c4 + -1;
        if ((local_1c4 == 0) && (local_1b0 != 0)) {
          bVar18 = true;
        }
        else {
          local_1cc = local_1cc + 1;
          puVar9 = (undefined4 *)FUN_004498b0(param_1);
          lVar19 = local_19c;
        }
      }
      else if (puVar9 == (undefined4 *)0x2b) goto LAB_0044913a;
LAB_00449164:
      uVar8 = local_1a4;
      local_19c = lVar19;
      if (iVar13 == 0) {
        while (!bVar18) {
          local_19c = lVar19;
          if ((uVar5 == 0x78) || (uVar5 == 0x70)) {
            if (DAT_004a4f54 < 2) {
              uVar10 = (byte)PTR_DAT_004a4d48[(int)puVar9 * 2] & 0x80;
            }
            else {
              uVar10 = FUN_00448760(puVar9,0x80);
              lVar19 = local_19c;
            }
            if (uVar10 != 0) {
              uVar8 = uVar8 << 4;
              local_19c = lVar19;
              puVar9 = (undefined4 *)FUN_00449870(puVar9);
              goto LAB_0044935a;
            }
LAB_00449356:
            bVar18 = true;
            local_19c = lVar19;
          }
          else {
            if (DAT_004a4f54 < 2) {
              uVar10 = (byte)PTR_DAT_004a4d48[(int)puVar9 * 2] & 4;
            }
            else {
              uVar10 = FUN_00448760(puVar9,4);
              lVar19 = local_19c;
            }
            if (uVar10 == 0) goto LAB_00449356;
            local_19c = lVar19;
            if (uVar5 == 0x6f) {
              if (0x37 < (int)puVar9) goto LAB_00449356;
              uVar8 = uVar8 << 3;
            }
            else {
              uVar8 = uVar8 * 10;
            }
          }
LAB_0044935a:
          if (bVar18) {
            local_1cc = local_1cc - 1;
            FUN_004498e0(puVar9,param_1);
            lVar19 = local_19c;
          }
          else {
            local_1a8 = local_1a8 + 1;
            uVar8 = (uVar8 - 0x30) + (int)puVar9;
            if ((local_1b0 == 0) || (local_1c4 = local_1c4 + -1, local_1c4 != 0)) {
              local_1cc = local_1cc + 1;
              puVar9 = (undefined4 *)FUN_004498b0(param_1);
              lVar19 = local_19c;
            }
            else {
              bVar18 = true;
              lVar19 = local_19c;
            }
          }
        }
        local_1a4 = uVar8;
        if (local_1be != '\0') {
          local_1a4 = -uVar8;
        }
      }
      else {
        while (!bVar18) {
          if (local_1bc == 0x78) {
            if (DAT_004a4f54 < 2) {
              uVar5 = (byte)PTR_DAT_004a4d48[(int)puVar9 * 2] & 0x80;
            }
            else {
              uVar5 = FUN_00448760(puVar9,0x80);
            }
            if (uVar5 != 0) {
              lVar19 = __allshl();
              puVar9 = (undefined4 *)FUN_00449870(puVar9);
              goto LAB_00449231;
            }
LAB_0044922d:
            bVar18 = true;
          }
          else {
            if (DAT_004a4f54 < 2) {
              uVar5 = (byte)PTR_DAT_004a4d48[(int)puVar9 * 2] & 4;
            }
            else {
              uVar5 = FUN_00448760(puVar9,4);
            }
            if (uVar5 == 0) goto LAB_0044922d;
            if (local_1bc == 0x6f) {
              if (0x37 < (int)puVar9) goto LAB_0044922d;
              lVar19 = __allshl();
            }
            else {
              lVar19 = __allmul(lVar19,10,0);
            }
          }
LAB_00449231:
          if (bVar18) {
            local_1cc = local_1cc - 1;
            FUN_004498e0(puVar9,param_1);
          }
          else {
            puVar3 = puVar9 + -0xc;
            local_1a8 = local_1a8 + 1;
            if ((local_1b0 == 0) || (local_1c4 = local_1c4 + -1, local_1c4 != 0)) {
              local_1cc = local_1cc + 1;
              puVar9 = (undefined4 *)FUN_004498b0(param_1);
              lVar19 = lVar19 + (int)puVar3;
            }
            else {
              bVar18 = true;
              lVar19 = lVar19 + (int)puVar3;
            }
          }
        }
        local_19c._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
        local_19c._0_4_ = (int)lVar19;
        if (local_1be != '\0') {
          lVar19 = CONCAT44(-(local_19c._4_4_ + (uint)((int)local_19c != 0)),-(int)local_19c);
        }
      }
      iVar13 = local_1a8;
      if (local_1bc == 0x46) {
        iVar13 = 0;
      }
      if (iVar13 == 0) goto LAB_00449786;
      if (local_1c5 == '\0') {
        local_1ac = local_1ac + 1;
        uVar5 = local_1a4;
        iVar13 = local_188;
LAB_00449425:
        if (iVar13 == 0) {
          if (local_1c6 == '\0') {
            *(short *)local_1b8 = (short)uVar5;
          }
          else {
            *local_1b8 = uVar5;
          }
        }
        else {
          *(longlong *)local_1b8 = lVar19;
        }
      }
      break;
    case 0x73:
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pcVar14 = s_____004a4f60;
LAB_00448e2e:
      local_1bd = 0xff;
      pbVar12 = param_2;
LAB_00448e33:
      param_2 = pbVar12;
      pbVar12 = local_180;
      for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
        pbVar12[0] = 0;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        pbVar12 = pbVar12 + 4;
      }
      if ((local_1bc == 0x7b) && (*pcVar14 == 0x5d)) {
        local_1b4 = CONCAT31(local_1b4._1_3_,0x5d);
        pcVar14 = pcVar14 + 1;
        local_175 = 0x20;
      }
      bVar11 = *pcVar14;
      uVar5 = local_1b4;
      while (bVar11 != 0x5d) {
        pbVar12 = (byte *)(pcVar14 + 1);
        uVar8 = (uint)local_184 >> 8;
        local_184 = CONCAT31((int3)uVar8,bVar11);
        local_1b4._1_3_ = (undefined3)(uVar5 >> 8);
        if (((bVar11 == 0x2d) &&
            (local_1b4._0_1_ = (byte)uVar5, bVar2 = (byte)local_1b4, (byte)local_1b4 != 0)) &&
           (bVar1 = *pbVar12, bVar1 != 0x5d)) {
          pbVar12 = (byte *)(pcVar14 + 2);
          uVar8 = (uint)local_194 >> 8;
          bVar11 = (byte)local_1b4;
          if (bVar1 <= (byte)local_1b4) {
            local_1b4 = CONCAT31(local_1b4._1_3_,bVar1);
            bVar11 = bVar1;
            uVar5 = local_1b4;
            bVar1 = bVar2;
          }
          local_1b4 = uVar5;
          local_194 = CONCAT31((int3)uVar8,bVar1);
          if (bVar11 <= bVar1) {
            uVar5 = local_1b4 & 0xff;
            iVar13 = (bVar1 - uVar5) + 1;
            do {
              uVar8 = uVar5 >> 3;
              bVar11 = (byte)uVar5;
              uVar5 = uVar5 + 1;
              iVar13 = iVar13 + -1;
              local_180[uVar8] = local_180[uVar8] | '\x01' << (bVar11 & 7);
            } while (iVar13 != 0);
          }
          local_1b4 = local_1b4 & 0xffffff00;
        }
        else {
          local_1b4 = CONCAT31(local_1b4._1_3_,bVar11);
          local_180[bVar11 >> 3] = local_180[bVar11 >> 3] | '\x01' << (bVar11 & 7);
        }
        pcVar14 = (char *)pbVar12;
        uVar5 = local_1b4;
        bVar11 = *pbVar12;
      }
      if (*pcVar14 == 0) goto LAB_00449786;
      if (local_1bc == 0x7b) {
        param_2 = (byte *)pcVar14;
      }
      local_1cc = local_1cc - 1;
      local_1b4 = uVar5;
      FUN_004498e0(puVar9,param_1);
      puVar17 = puVar15;
      while( true ) {
        if ((local_1b0 != 0) &&
           (iVar13 = local_1c4 + -1, bVar18 = local_1c4 == 0, local_1c4 = iVar13, puVar4 = puVar17,
           bVar18)) goto LAB_0044901c;
        local_1cc = local_1cc + 1;
        puVar9 = (undefined4 *)FUN_004498b0(param_1);
        if ((puVar9 == (undefined4 *)0xffffffff) ||
           (bVar11 = (byte)puVar9,
           ((int)(char)(local_180[(int)puVar9 >> 3] ^ local_1bd) & 1 << (bVar11 & 7)) == 0)) break;
        if (local_1c5 == '\0') {
          if (local_1c0 == '\0') {
            *(byte *)puVar17 = bVar11;
            puVar17 = (uint *)((int)puVar17 + 1);
          }
          else {
            local_19e = bVar11;
            if ((PTR_DAT_004a4d48[((uint)puVar9 & 0xff) * 2 + 1] & 0x80) != 0) {
              local_1cc = local_1cc + 1;
              local_19d = FUN_004498b0(param_1);
            }
            FUN_0044dac0(&local_18e,&local_19e,DAT_004a4f54);
            *(undefined2 *)puVar17 = local_18e;
            puVar17 = (uint *)((int)puVar17 + 2);
          }
        }
        else {
          puVar15 = (uint *)((int)puVar15 + 1);
        }
      }
      local_1cc = local_1cc - 1;
      local_1b8 = puVar17;
      FUN_004498e0(puVar9,param_1);
      puVar4 = local_1b8;
LAB_0044901c:
      local_1b8 = puVar4;
      if (puVar15 == puVar17) goto LAB_00449786;
      lVar19 = local_19c;
      if ((local_1c5 == '\0') && (local_1ac = local_1ac + 1, local_1bc != 99)) {
        if (local_1c0 == '\0') {
          *(byte *)local_1b8 = 0;
        }
        else {
          *(undefined2 *)local_1b8 = 0;
        }
      }
      break;
    case 0x7b:
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pbVar12 = param_2 + 1;
      pcVar14 = (char *)pbVar12;
      if (*pbVar12 == 0x5e) {
        pcVar14 = (char *)(param_2 + 2);
        param_2 = pbVar12;
        goto LAB_00448e2e;
      }
      goto LAB_00448e33;
    }
    local_1bf = local_1bf + '\x01';
    pbVar12 = param_2 + 1;
    local_19c = lVar19;
LAB_00449733:
    param_2 = pbVar12;
    if ((puVar9 == (undefined4 *)0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e))))
    goto LAB_00449786;
    bVar11 = *param_2;
  } while( true );
}


