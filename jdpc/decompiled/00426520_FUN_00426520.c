/*
 * Function: FUN_00426520
 * Entry:    00426520
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00426520(char *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte local_8;
  byte local_7;
  byte local_6;
  uint local_4;
  
  if ((*param_1 != '\x10') || (2 < (*(uint *)(param_1 + 4) & 7))) {
    return 0;
  }
  local_4 = (uint)*(short *)(param_1 + 0x10);
  sVar3 = *(short *)(param_1 + 0x12);
  DAT_00557980 = 0;
  uVar7 = 0xfffffffa;
  if (((byte)*(undefined4 *)(param_1 + 4) & 7) != 2) {
    DAT_0053ea60 = &DAT_005579a0;
    puVar4 = (ushort *)(param_1 + 0x14);
    uVar7 = (uint)*(short *)(param_1 + 0x10);
    DAT_00557980 = uVar7;
    for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - 1) {
      *DAT_0053ea60 = (char)*puVar4 << 3;
      DAT_0053ea60[1] = (char)(*puVar4 >> 5) << 3;
      DAT_0053ea60[2] = (byte)(*puVar4 >> 10) << 3;
      if ((*puVar4 & 0x8000) == 0) {
        if (((*DAT_0053ea60 == '\0') && (DAT_0053ea60[1] == '\0')) && (DAT_0053ea60[2] == '\0')) {
          DAT_0053ea60[3] = '\0';
        }
        else {
LAB_00426628:
          DAT_0053ea60[3] = -1;
        }
      }
      else if (param_2 == 0) {
        DAT_0053ea60[3] = -0x80;
      }
      else if (param_2 == 1) {
        DAT_0053ea60[3] = '`';
      }
      else if (param_2 == 2) {
        DAT_0053ea60[3] = -0x80;
      }
      else if ((param_2 == 3) || (param_2 == 4)) goto LAB_00426628;
      puVar4 = puVar4 + 1;
      DAT_0053ea60 = DAT_0053ea60 + 4;
    }
    iVar2 = (uVar7 >> 1) * 4;
    if ((*(uint *)(param_1 + 4) & 7) == 1) {
      local_4 = (int)*(short *)(param_1 + iVar2 + 0x1c) << 1;
    }
    if ((*(uint *)(param_1 + 4) & 7) == 0) {
      local_4 = (int)*(short *)(param_1 + iVar2 + 0x1c) << 2;
    }
    sVar3 = *(short *)(param_1 + iVar2 + 0x1e);
  }
  iVar2 = (int)sVar3;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    uVar6 = 0;
    if (local_4 != 0) {
      do {
        FUN_00423f70(uVar6,iVar2,local_4,(int)sVar3,param_1 + (uVar7 >> 1) * 4 + 0x20,
                     *(uint *)(param_1 + 4) & 7,&local_8);
        if (param_2 == 1) {
          local_8 = local_8 >> 1;
          local_7 = local_7 >> 1;
          iVar5 = (uint)(local_6 >> 4) + ((local_8 & 0x1f8) * 0x20 + (local_7 & 0x3ff8)) * 4;
          local_6 = local_6 >> 1;
        }
        else {
          iVar5 = (uint)(local_6 >> 3) + ((local_8 & 0x1f8) * 0x20 + (local_7 & 0x3ff8)) * 4;
        }
        psVar1 = (short *)((int)&DAT_00503a60 + iVar5 * 2);
        *psVar1 = *psVar1 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_4);
    }
  }
  return 1;
}


