/*
 * Function: FUN_00422ef0
 * Entry:    00422ef0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00422ef0(char *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  ushort *puVar7;
  byte *pbVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_18;
  int local_14;
  undefined1 local_10 [4];
  float local_c;
  int local_8;
  uint local_4;
  
  param_3 = param_3 * 0x30;
  (&DAT_0053ea89)[param_3] = 0;
  if ((*param_1 != '\x10') || (2 < (*(uint *)(param_1 + 4) & 7))) {
    return 0;
  }
  local_18 = (int)*(short *)(param_1 + 0x10);
  sVar3 = *(short *)(param_1 + 0x12);
  DAT_00557980 = 0;
  local_14 = -6;
  local_8 = param_3;
  if (((byte)*(undefined4 *)(param_1 + 4) & 7) == 2) goto LAB_004234aa;
  local_14 = (int)*(short *)(param_1 + 0x10);
  puVar7 = (ushort *)(param_1 + 0x14);
  DAT_0053ea60 = &DAT_005579a0;
  DAT_00557980 = local_14;
  fVar4 = (float)local_14;
  if (0 < local_14) {
    do {
      local_c = fVar4;
      *DAT_0053ea60 = (char)*puVar7 << 3;
      DAT_0053ea60[1] = (char)(*puVar7 >> 5) << 3;
      DAT_0053ea60[2] = (byte)(*puVar7 >> 10) << 3;
      pbVar8 = DAT_0053ea60;
      if (*puVar7 == 0) {
        DAT_0053ea60[3] = 0;
        (&DAT_0053ea89)[param_3] = (&DAT_0053ea89)[param_3] | 1;
      }
      else {
        switch(*(undefined2 *)((int)&DAT_0053ea92 + param_3)) {
        case 0:
          bVar10 = *DAT_0053ea60;
          bVar1 = DAT_0053ea60[1];
          if ((bVar10 == bVar1) && (bVar10 == DAT_0053ea60[2])) {
            bVar10 = bVar10 >> 1;
LAB_00423189:
            DAT_0053ea60[3] = bVar10;
            *DAT_0053ea60 = 0xff;
            DAT_0053ea60[1] = 0xff;
            DAT_0053ea60[2] = 0xff;
          }
          else {
            bVar2 = DAT_0053ea60[2];
            bVar5 = bVar1;
            if (bVar1 <= bVar2) {
              bVar5 = bVar2;
            }
            uVar12 = (uint)bVar10;
            if (bVar5 < uVar12) {
              DAT_0053ea60[3] = bVar10 / 2;
            }
            else if (bVar2 < bVar1) {
              uVar12 = (uint)bVar1;
              DAT_0053ea60[3] = bVar1 / 2;
            }
            else {
              uVar12 = (uint)bVar2;
              DAT_0053ea60[3] = bVar2 / 2;
            }
LAB_004230f2:
            cVar6 = -1 - (char)uVar12;
            *DAT_0053ea60 = *DAT_0053ea60 + cVar6;
            DAT_0053ea60[1] = DAT_0053ea60[1] + cVar6;
            DAT_0053ea60[2] = DAT_0053ea60[2] + cVar6;
          }
          break;
        case 1:
          bVar10 = *DAT_0053ea60;
          bVar1 = DAT_0053ea60[1];
          if ((bVar10 != bVar1) || (bVar10 != DAT_0053ea60[2])) {
            bVar2 = DAT_0053ea60[2];
            bVar5 = bVar1;
            if (bVar1 <= bVar2) {
              bVar5 = bVar2;
            }
            uVar12 = (uint)bVar10;
            if (uVar12 <= bVar5) {
              if (bVar2 < bVar1) {
                uVar12 = (uint)bVar1;
              }
              else {
                uVar12 = (uint)bVar2;
              }
            }
            DAT_0053ea60[3] = (char)uVar12 - (char)((int)uVar12 >> 2);
            goto LAB_004230f2;
          }
          DAT_0053ea60[3] = bVar10 - (bVar10 >> 2);
          *DAT_0053ea60 = 0xff;
          DAT_0053ea60[1] = 0xff;
          DAT_0053ea60[2] = 0xff;
          break;
        case 2:
          local_4 = (uint)DAT_0053ea60[2];
          bVar10 = __ftol();
          pbVar8[3] = bVar10;
          break;
        case 3:
          bVar10 = *DAT_0053ea60;
          bVar1 = DAT_0053ea60[1];
          if ((bVar10 == bVar1) && (bVar10 == DAT_0053ea60[2])) {
            bVar10 = bVar10 >> 2;
            goto LAB_00423189;
          }
          bVar2 = DAT_0053ea60[2];
          bVar5 = bVar1;
          if (bVar1 <= bVar2) {
            bVar5 = bVar2;
          }
          uVar12 = (uint)bVar10;
          if (uVar12 <= bVar5) {
            if (bVar2 < bVar1) {
              uVar12 = (uint)bVar1;
            }
            else {
              uVar12 = (uint)bVar2;
            }
          }
          DAT_0053ea60[3] = (byte)((int)uVar12 >> 2);
          cVar6 = -1 - (char)uVar12;
          *DAT_0053ea60 = *DAT_0053ea60 + cVar6;
          DAT_0053ea60[1] = DAT_0053ea60[1] + cVar6;
          DAT_0053ea60[2] = DAT_0053ea60[2] + cVar6;
          param_3 = local_8;
          break;
        case 4:
          DAT_0053ea60[3] = 0xff;
        }
      }
      if (DAT_004a0944 != 0) {
        *DAT_0053ea60 = (&DAT_004e3760)[*DAT_0053ea60];
        DAT_0053ea60[1] = (&DAT_004e3760)[DAT_0053ea60[1]];
        DAT_0053ea60[2] = (&DAT_004e3760)[DAT_0053ea60[2]];
        *DAT_0053ea60 = (&DAT_00503960)[*DAT_0053ea60];
        DAT_0053ea60[1] = (&DAT_00503960)[DAT_0053ea60[1]];
        DAT_0053ea60[2] = (&DAT_00503960)[DAT_0053ea60[2]];
      }
      DAT_0053ea60 = DAT_0053ea60 + 4;
      puVar7 = puVar7 + 1;
      fVar4 = (float)((int)local_c + -1);
    } while ((int)local_c + -1 != 0);
    local_c = 0.0;
  }
  if ((DAT_0053e8cc == 0) &&
     ((((DAT_004a09a4 == 0 || (DAT_004a09a4 == 1)) &&
       (*(short *)((int)&DAT_0053ea92 + param_3) != 4)) &&
      (*(short *)((int)&DAT_0053ea92 + param_3) == 1)))) {
    if (DAT_004a09a4 == 1) {
      uVar14 = 0x3ff80000;
      uVar13 = 0;
    }
    else {
      uVar14 = 0x3ff33333;
      uVar13 = 0x33333333;
    }
    FUN_00422a80(uVar13,uVar14);
    FUN_004269d0(0,0,0x9999999a,0x3ff19999);
    if (0 < local_14) {
      pbVar8 = &DAT_005579a1;
      iVar9 = local_14;
      do {
        pbVar8[-1] = (&DAT_004e3760)[pbVar8[-1]];
        *pbVar8 = (&DAT_004e3760)[*pbVar8];
        pbVar8[1] = (&DAT_004e3760)[pbVar8[1]];
        pbVar8[-1] = (&DAT_00503960)[pbVar8[-1]];
        *pbVar8 = (&DAT_00503960)[*pbVar8];
        iVar9 = iVar9 + -1;
        pbVar8[1] = (&DAT_00503960)[pbVar8[1]];
        pbVar8 = pbVar8 + 4;
      } while (iVar9 != 0);
    }
    if (DAT_004a09a4 == 1) {
      uVar13 = 0x3ff80000;
LAB_004233ca:
      uVar14 = 0;
    }
    else {
      if (DAT_004a09a4 != 2) {
        uVar13 = 0x3ff00000;
        goto LAB_004233ca;
      }
      uVar13 = 0x3ff33333;
      uVar14 = 0x33333333;
    }
    FUN_00422a80(uVar14,uVar13);
    FUN_004269d0((double)(int)DAT_0053e8c8,DAT_0053e8c0,DAT_0053e8c4);
  }
  if (*(short *)((int)&DAT_0053ea92 + param_3) != 4) {
    (&DAT_0053ea89)[param_3] = (&DAT_0053ea89)[param_3] | 2;
  }
  if (DAT_004a0944 != 0) {
    FUN_00422b40();
  }
  FUN_00422950();
  if (*(short *)((int)&DAT_0053ea92 + param_3) == 2) {
    if (DAT_004a09a4 != 0) {
      if (DAT_004a09a4 != 1) {
        FUN_00422b20();
      }
      goto LAB_0042344a;
    }
LAB_00423453:
    if ((DAT_0053e8cc != 0) && (*(short *)((int)&DAT_0053ea92 + param_3) == 2)) {
      FUN_00422ae0();
    }
  }
  else {
LAB_0042344a:
    if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) goto LAB_00423453;
  }
  iVar9 = (local_14 >> 1) * 4;
  if ((*(uint *)(param_1 + 4) & 7) == 1) {
    local_18 = (int)*(short *)(param_1 + iVar9 + 0x1c) << 1;
  }
  if ((*(uint *)(param_1 + 4) & 7) == 0) {
    local_18 = (int)*(short *)(param_1 + iVar9 + 0x1c) << 2;
  }
  sVar3 = *(short *)(param_1 + iVar9 + 0x1e);
LAB_004234aa:
  iVar9 = (int)sVar3;
  DAT_004a0950._0_2_ = CONCAT11((&DAT_0053ea89)[local_8],(undefined1)DAT_004a0950);
  if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
    if (DAT_004a09a4 == 0) {
      DAT_004a0950 = CONCAT31(DAT_004a0950._1_3_,8);
    }
    else if (DAT_004a09a4 == 1) {
      DAT_004a0950 = CONCAT31(DAT_004a0950._1_3_,0x18);
    }
    switch(DAT_004a0950 & 0xff) {
    case 0x10:
      DAT_004a0949 = 10;
      DAT_004a0948 = 5;
      DAT_004a094a = 5;
      DAT_004a094b = 5;
      DAT_004a094c = 5;
      DAT_004a094d = 0;
      DAT_004a094e = 0;
      DAT_004a094f = 0;
      break;
    case 0x18:
      DAT_004a0948 = 8;
      DAT_004a0949 = 0x10;
      DAT_004a094a = 8;
      DAT_004a094b = 8;
      DAT_004a094c = 8;
      DAT_004a094d = 0;
      break;
    case 0x20:
      DAT_004a0948 = 8;
      DAT_004a0949 = 0;
      DAT_004a094a = 8;
      DAT_004a094b = 8;
      DAT_004a094c = 8;
      DAT_004a094d = 0x10;
      DAT_004a094e = 8;
      DAT_004a094f = 0x18;
    }
  }
  else {
    DAT_004a0949 = 0;
    DAT_004a0948 = 8;
    DAT_004a094a = 8;
    DAT_004a094b = 8;
    DAT_004a094c = 8;
    DAT_004a094d = 0x10;
    if ((&DAT_0053ea89)[local_8] == '\0') {
      DAT_004a0950 = CONCAT31(DAT_004a0950._1_3_,0x18);
    }
    else {
      DAT_004a0950 = CONCAT31(DAT_004a0950._1_3_,0x20);
      DAT_004a094e = 8;
      DAT_004a094f = 0x18;
    }
  }
  local_c = (float)iVar9 / (float)param_5;
  if ((param_4 < local_18) || (param_5 < iVar9)) {
    if (-1 < param_5 + -1) {
      local_8 = param_5;
      do {
        uVar13 = __ftol();
        iVar11 = param_4;
        if (0 < param_4) {
          do {
            uVar14 = __ftol();
            FUN_00423c90(uVar14,uVar13,local_18,iVar9,param_1 + (local_14 >> 1) * 4 + 0x20,
                         *(uint *)(param_1 + 4) & 7,local_10);
            FUN_00422d00();
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  else if (-1 < param_5 + -1) {
    local_8 = param_5;
    do {
      uVar13 = __ftol();
      iVar11 = param_4;
      if (0 < param_4) {
        do {
          uVar14 = __ftol();
          FUN_00423f70(uVar14,uVar13,local_18,iVar9,param_1 + (local_14 >> 1) * 4 + 0x20,
                       *(uint *)(param_1 + 4) & 7,local_10);
          FUN_00422d00();
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    return 1;
  }
  return 1;
}


