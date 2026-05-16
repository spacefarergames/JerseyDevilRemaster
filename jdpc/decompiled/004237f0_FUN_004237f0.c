/*
 * Function: FUN_004237f0
 * Entry:    004237f0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_004237f0(char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  float local_8;
  float local_4;
  
  pcVar3 = param_1;
  iVar7 = param_3 * 0x30;
  (&DAT_0053ea89)[iVar7] = 0;
  (&DAT_0053ea92)[param_3 * 0x18] = 4;
  if ((*param_1 == '\x10') && ((*(uint *)(param_1 + 4) & 7) < 3)) {
    sVar1 = *(short *)(param_1 + 0x10);
    iVar9 = (int)*(short *)(param_1 + 0x12);
    DAT_00557980 = 0;
    iVar8 = -6;
    iVar10 = (int)sVar1;
    if (((byte)*(undefined4 *)(param_1 + 4) & 7) != 2) {
      iVar8 = (int)*(short *)(param_1 + 0x10);
      DAT_0053ea60 = &DAT_005579a0;
      puVar6 = (ushort *)(param_1 + 0x14);
      iVar10 = iVar8;
      DAT_00557980 = iVar8;
      if (0 < iVar8) {
        do {
          *DAT_0053ea60 = (char)*puVar6 << 3;
          DAT_0053ea60[1] = (char)(*puVar6 >> 5) << 3;
          DAT_0053ea60[2] = (byte)(*puVar6 >> 10) << 3;
          pbVar2 = DAT_0053ea60;
          if (*puVar6 == 0) {
            (&DAT_0053ea89)[iVar7] = 1;
            pbVar2[3] = 0;
          }
          else {
            DAT_0053ea60[3] = 0xff;
          }
          if (DAT_004a0944 != 0) {
            *DAT_0053ea60 = (&DAT_004e3760)[*DAT_0053ea60];
            DAT_0053ea60[1] = (&DAT_004e3760)[DAT_0053ea60[1]];
            DAT_0053ea60[2] = (&DAT_004e3760)[DAT_0053ea60[2]];
            *DAT_0053ea60 = (&DAT_00503960)[*DAT_0053ea60];
            DAT_0053ea60[1] = (&DAT_00503960)[DAT_0053ea60[1]];
            DAT_0053ea60[2] = (&DAT_00503960)[DAT_0053ea60[2]];
          }
          puVar6 = puVar6 + 1;
          DAT_0053ea60 = DAT_0053ea60 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_10 = iVar9;
      if (DAT_004a0944 != 0) {
        FUN_00422b40();
      }
      FUN_00422950();
      iVar10 = (iVar8 >> 1) * 4;
      if ((*(uint *)(param_1 + 4) & 7) == 1) {
        iVar9 = (int)*(short *)(param_1 + iVar10 + 0x1c) << 1;
      }
      else {
        iVar9 = (int)sVar1;
        if ((*(uint *)(param_1 + 4) & 7) == 0) {
          iVar9 = (int)*(short *)(param_1 + iVar10 + 0x1c) << 2;
        }
      }
      param_1 = (char *)iVar9;
      iVar9 = (int)*(short *)(pcVar3 + iVar10 + 0x1e);
      iVar10 = (int)param_1;
    }
    param_1 = (char *)iVar10;
    DAT_004a0950._0_2_ = CONCAT11((&DAT_0053ea89)[iVar7],(undefined1)DAT_004a0950);
    if (DAT_0053e844 == 0) {
      DAT_004a0950 = CONCAT31(DAT_004a0950._1_3_,8);
    }
    else if (DAT_0053e844 == 1) {
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
    local_4 = (float)(int)param_1 / (float)param_4;
    local_8 = (float)iVar9 / (float)param_5;
    if ((param_4 < (int)param_1) || (param_5 < iVar9)) {
      if (-1 < param_5 + -1) {
        local_10 = param_5;
        do {
          uVar4 = __ftol();
          if (0 < param_4) {
            local_c = param_4;
            do {
              uVar5 = __ftol();
              FUN_00423c90(uVar5,uVar4,param_1,iVar9,pcVar3 + (iVar8 >> 1) * 4 + 0x20,
                           *(uint *)(pcVar3 + 4) & 7,local_14);
              FUN_00422d00(param_2,local_14,&DAT_004a0948);
              param_2 = param_2 + ((DAT_004a0950 & 0xff) >> 3);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
    else if (-1 < param_5 + -1) {
      local_c = param_5;
      local_10 = iVar9;
      do {
        uVar4 = __ftol();
        if (0 < param_4) {
          local_10 = param_4;
          do {
            uVar5 = __ftol();
            FUN_00423f70(uVar5,uVar4,param_1,iVar9,pcVar3 + (iVar8 >> 1) * 4 + 0x20,
                         *(uint *)(pcVar3 + 4) & 7,local_14);
            FUN_00422d00(param_2,local_14,&DAT_004a0948);
            param_2 = param_2 + ((DAT_004a0950 & 0xff) >> 3);
            local_10 = local_10 + -1;
          } while (local_10 != 0);
        }
        local_c = local_c + -1;
      } while (local_c != 0);
      return 1;
    }
    return 1;
  }
  return 0;
}


