/*
 * Function: FUN_00431690
 * Entry:    00431690
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00431690(int *param_1,undefined2 *param_2,int *param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  undefined2 *puVar5;
  
  iVar3 = *param_1;
  piVar1 = param_3 + 4;
  *piVar1 = iVar3;
  param_3[5] = param_1[1];
  param_3[6] = param_1[2];
  puVar5 = (undefined2 *)FUN_004315d0(piVar1,CONCAT22((short)((uint)iVar3 >> 0x10),param_2[5]));
  if (puVar5 == (undefined2 *)0x0) {
    *param_2 = 1;
    param_2[1] = 1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0xffff;
    return;
  }
  uVar2 = *(ushort *)
           (*(int *)(puVar5 + 0xe) +
           ((*piVar1 - *(int *)(puVar5 + 6)) / 0x118 +
           ((param_3[6] - *(int *)(puVar5 + 8)) / 0x118) * (uint)(ushort)puVar5[2]) * 2);
  *(ushort *)((int)param_3 + 0x22) = uVar2;
  param_2[4] = uVar2 & 0xf000;
  *(ushort *)((int)param_3 + 0x22) = *(ushort *)((int)param_3 + 0x22) & 0xfff;
  *param_3 = param_3[4] % 0x118;
  param_3[2] = param_3[6] % 0x118;
  sVar4 = (short)*(char *)((param_3[4] % 0x118) / 0x23 +
                          *(int *)(puVar5 + 0x10) +
                          ((param_3[6] % 0x118) / 0x23 + (uint)*(ushort *)((int)param_3 + 0x22) * 8)
                          * 8);
  *(short *)(param_3 + 8) = sVar4;
  if (sVar4 == 0x7e) {
    param_1[1] = *(int *)(puVar5 + 10);
    *param_2 = 0;
    param_2[1] = 8;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[5] = *puVar5;
    return;
  }
  param_1[1] = *(int *)(puVar5 + 10);
  if (sVar4 == 0x7f) {
    param_2[1] = 6;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[5] = *puVar5;
    return;
  }
  iVar3 = param_3[8];
  param_2[1] = 2;
  *param_2 = (short)iVar3;
  if (0 < (short)param_3[8]) {
    *(short *)(param_3 + 8) = -(short)param_3[8];
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x20;
  }
  sVar4 = puVar5[1] * (short)param_3[8];
  *(short *)(param_3 + 8) = sVar4;
  param_2[2] = sVar4;
  param_2[3] = (short)param_3[8];
  param_2[5] = *puVar5;
  return;
}


