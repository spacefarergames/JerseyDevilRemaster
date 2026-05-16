/*
 * Function: FUN_00431c10
 * Entry:    00431c10
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00431c10(int param_1,int *param_2,int param_3,int *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)*(short *)(param_1 + 0xf4) + *(int *)(param_1 + 0xe8);
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        param_2[1] = 200;
        return;
      }
      param_2[1] = iVar4 - *(int *)(param_1 + 0xd0);
    }
    else if (iVar4 < *(int *)(param_1 + 0xd0) + param_2[1]) {
      param_2[1] = iVar4 - *(int *)(param_1 + 0xd0);
      return;
    }
    return;
  }
  iVar3 = (int)*(short *)(param_1 + 0xf2) + *(int *)(param_1 + 0xd0);
  if (*(short *)(param_1 + 0xf0) < 0x801) {
    if (iVar3 + *(short *)(param_1 + 0x3a) < *(int *)(param_3 + 0xc)) {
      if (iVar3 <= iVar4) {
        *param_4 = *(int *)(param_1 + 0xcc) + *param_2;
        param_4[1] = *(int *)(param_3 + 0xc) + -1;
        param_4[2] = *(int *)(param_1 + 0xd4) + param_2[2];
        *(undefined2 *)((int)param_4 + 0x1a) = 0xffff;
        FUN_00431690(param_4,param_4 + 4,param_4 + 8);
        if ((*(byte *)((int)param_4 + 0x12) & 8) == 0) {
          param_2[1] = (*(int *)(param_3 + 0xc) - (int)*(short *)(param_1 + 0x3a)) -
                       *(int *)(param_1 + 0xd0);
          return;
        }
        if (iVar3 < iVar4) {
          param_2[1] = iVar3 - *(int *)(param_1 + 0xd0);
          return;
        }
        uVar2 = *(uint *)(param_1 + 0x14);
      }
    }
    else if (iVar3 < iVar4) {
      param_2[1] = iVar3 - *(int *)(param_1 + 0xd0);
      return;
    }
  }
  else {
    sVar1 = *(short *)(param_3 + 2);
    if (sVar1 == 8 || iVar3 <= iVar4) {
      if ((sVar1 == 8) || (sVar1 == 1)) {
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      }
      if (iVar3 < iVar4) {
        param_2[1] = iVar3 - *(int *)(param_1 + 0xd0);
        return;
      }
    }
  }
  *(uint *)(param_1 + 0x14) = uVar2 & 0xfffffff6;
  param_2[1] = iVar4 - *(int *)(param_1 + 0xd0);
  return;
}


