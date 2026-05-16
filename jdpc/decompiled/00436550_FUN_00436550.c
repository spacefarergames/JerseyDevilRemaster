/*
 * Function: FUN_00436550
 * Entry:    00436550
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_00436550(int param_1,int param_2,int *param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  
  iVar3 = *(int *)(param_1 + 0x58);
  *param_3 = iVar3;
  iVar3 = *(int *)(iVar3 + 300);
  iVar4 = *(int *)(iVar3 + 0x48);
  for (sVar8 = 0; (iVar4 != 0 && (sVar8 < 0x14)); sVar8 = sVar8 + 1) {
    piVar6 = param_3 + (sVar8 + 2) * 4;
    *(undefined2 *)piVar6 = *(undefined2 *)(*(int *)(iVar3 + 0x44) + 0x18);
    *(undefined2 *)((int)piVar6 + 2) = *(undefined2 *)(*(int *)(iVar3 + 0x44) + 0x1c);
    uVar1 = *(undefined2 *)(*(int *)(iVar3 + 0x44) + 0x20);
    piVar6[3] = iVar3;
    *(undefined2 *)(piVar6 + 1) = uVar1;
    FUN_004072e0(*(int *)(iVar3 + 0x44) + 0x10,iVar3 + 4);
    if (1 < sVar8) {
      sVar9 = sVar8 + -2;
      piVar6 = param_3 + (sVar8 + 1) * 4;
      sVar2 = *(short *)((int)piVar6 + 2);
      iVar4 = *piVar6;
      iVar5 = piVar6[1];
      piVar6 = param_3 + (sVar9 + 2) * 4;
      if (-1 < sVar9) {
        iVar7 = sVar9 + 1;
        do {
          *(short *)piVar6 = (short)*piVar6 + (short)iVar4;
          *(short *)((int)piVar6 + 2) = *(short *)((int)piVar6 + 2) + sVar2;
          *(short *)(piVar6 + 1) = (short)piVar6[1] + (short)iVar5;
          piVar6 = piVar6 + -4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    iVar3 = *(int *)(iVar3 + 0x48);
    iVar4 = *(int *)(iVar3 + 0x48);
  }
  piVar6 = param_3 + 8;
  sVar9 = 0;
  if (0 < sVar8) {
    do {
      if ((int)*(short *)((int)piVar6 + 2) <
          *(int *)(param_2 + 4) + (int)*(short *)(param_1 + 0x3a) + *(int *)(param_1 + 0x158)) {
        *(int *)(*param_3 + 0x130) = piVar6[3];
        *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_1 + 0x154);
        *(undefined2 *)((int)param_3 + 10) = *(undefined2 *)(param_1 + 0x158);
        *(undefined2 *)(param_3 + 3) = *(undefined2 *)(param_1 + 0x15c);
        FUN_00408010(*param_3 + 0x68,param_3 + 2,param_3 + 4);
        *(int *)(param_1 + 0xcc) = param_3[4];
        *(int *)(param_1 + 0xd0) = param_3[5];
        *(int *)(param_1 + 0xd4) = param_3[6];
        *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + *(int *)(*param_3 + 0xcc);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + *(int *)(*param_3 + 0xd0);
        *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + *(int *)(*param_3 + 0xd4);
        return (uint)(sVar9 == 0);
      }
      sVar9 = sVar9 + 1;
      piVar6 = piVar6 + 4;
    } while (sVar9 < sVar8);
    return CONCAT22((short)((uint)piVar6 >> 0x10),2);
  }
  return CONCAT22((short)((uint)piVar6 >> 0x10),2);
}


