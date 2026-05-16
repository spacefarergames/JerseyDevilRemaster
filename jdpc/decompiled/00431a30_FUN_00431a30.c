/*
 * Function: FUN_00431a30
 * Entry:    00431a30
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00431a30(int param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)(param_1 + 0xcc);
  piVar3 = param_4 + 7;
  *param_4 = *(int *)(param_1 + 0xcc);
  param_4[1] = *(int *)(param_1 + 0xd0);
  param_4[2] = *(int *)(param_1 + 0xd4);
  if (*(short *)(param_1 + 0xf2) < 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)*(short *)(param_1 + 0xf2);
  }
  param_4[4] = *(int *)(param_1 + 0xd0);
  *(short *)(param_4 + 6) = (short)*param_2;
  *(short *)((int)param_4 + 0x1a) = (short)param_2[2];
  FUN_0042f9c0(piVar1,param_2,param_3,piVar3);
  param_4[3] = *param_2;
  param_4[5] = param_2[2];
  *piVar1 = *piVar1 + *param_2;
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + param_2[2];
  if ((*(ushort *)(param_3 + 2) & 0x10) == 0) {
    if ((*(ushort *)(param_3 + 2) & 4) != 0) {
      *(undefined2 *)(param_1 + 0xf8) = 0;
      *(undefined2 *)(param_1 + 0xfa) = 0;
    }
  }
  else {
    iVar2 = param_4[6];
    *(short *)((int)param_4 + 0x1a) = *(short *)((int)param_4 + 0x1a) - (short)param_2[2];
    param_2[2] = 0;
    *param_2 = (int)(short)iVar2 - *param_2;
    *(int *)(param_1 + 0xd0) = param_4[4];
    FUN_0042f9c0(piVar1,param_2,param_3,piVar3);
    if (*param_2 == 0) {
      *(undefined2 *)(param_1 + 0xf8) = 0;
    }
    else {
      param_4[3] = param_4[3] + *param_2;
      *piVar1 = *piVar1 + *param_2;
    }
    *param_2 = 0;
    param_2[2] = (int)*(short *)((int)param_4 + 0x1a);
    *(int *)(param_1 + 0xd0) = param_4[4];
    FUN_0042f9c0(piVar1,param_2,param_3,piVar3);
    if (param_2[2] == 0) {
      *(undefined2 *)(param_1 + 0xfa) = 0;
    }
    else {
      param_4[5] = param_4[5] + param_2[2];
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + param_2[2];
    }
  }
  if (((*(byte *)(param_3 + 2) & 8) != 0) &&
     ((param_1 == DAT_004d13c4 || ((*(byte *)(param_1 + 0x14) & 1) == 0)))) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    FUN_00431690(piVar1,param_3,piVar3);
  }
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined2 *)(param_1 + 0xf4) = *(undefined2 *)(param_3 + 6);
  *piVar1 = *param_4;
  *(int *)(param_1 + 0xd0) = param_4[1];
  *(int *)(param_1 + 0xd4) = param_4[2];
  *param_2 = param_4[3];
  param_2[2] = param_4[5];
  return;
}


