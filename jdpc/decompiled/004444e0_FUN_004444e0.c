/*
 * Function: FUN_004444e0
 * Entry:    004444e0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004444e0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int local_8;
  int local_4;
  
  uVar1 = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_4 = FUN_00444030(uVar1,0,1);
  if (local_4 < 0) {
    return -1;
  }
  uVar2 = param_1[3];
  if ((uVar2 & 0x108) == 0) {
    return local_4 - param_1[1];
  }
  pcVar8 = (char *)*param_1;
  pcVar3 = (char *)param_1[2];
  local_8 = (int)pcVar8 - (int)pcVar3;
  iVar4 = (int)uVar1 >> 5;
  if ((uVar2 & 3) == 0) {
    if ((uVar2 & 0x80) == 0) {
      _DAT_004a6220 = 0x16;
      return -1;
    }
  }
  else {
    pcVar6 = pcVar3;
    if ((*(byte *)((&DAT_00a14d20)[iVar4] + 4 + (uVar1 & 0x1f) * 8) & 0x80) != 0) {
      for (; pcVar6 < pcVar8; pcVar6 = pcVar6 + 1) {
        if (*pcVar6 == '\n') {
          local_8 = local_8 + 1;
        }
      }
    }
  }
  if (local_4 == 0) {
    return local_8;
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) goto LAB_00444655;
  if (param_1[1] == 0) {
    return local_4;
  }
  pcVar8 = pcVar8 + (param_1[1] - (int)pcVar3);
  iVar7 = (uVar1 & 0x1f) * 8;
  if ((*(byte *)(iVar7 + 4 + (&DAT_00a14d20)[iVar4]) & 0x80) != 0) {
    iVar5 = FUN_00444030(uVar1,0,2);
    if (iVar5 == local_4) {
      pcVar6 = (char *)param_1[2];
      pcVar3 = pcVar6 + (int)pcVar8;
      for (; pcVar6 < pcVar3; pcVar6 = pcVar6 + 1) {
        if (*pcVar6 == '\n') {
          pcVar8 = pcVar8 + 1;
        }
      }
      if ((param_1[3] & 0x2000) != 0) {
LAB_0044464c:
        pcVar8 = pcVar8 + 1;
      }
    }
    else {
      FUN_00444030(uVar1,local_4,0);
      if (((pcVar8 < (char *)0x201) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
        pcVar8 = (char *)0x200;
      }
      else {
        pcVar8 = (char *)param_1[6];
      }
      if ((*(byte *)(iVar7 + 4 + (&DAT_00a14d20)[iVar4]) & 4) != 0) goto LAB_0044464c;
    }
  }
  local_4 = local_4 - (int)pcVar8;
LAB_00444655:
  return local_4 + local_8;
}


