/*
 * Function: FUN_00432ce0
 * Entry:    00432ce0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00432ce0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  short *psVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  
  iVar6 = (int)param_1;
  iVar4 = *(int *)((int)param_1 + 0x60);
  *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)((int)param_1 + 0xcc);
  *(undefined2 *)(param_2 + 0x3a) = *(undefined2 *)((int)param_1 + 0xd0);
  *(undefined2 *)(param_2 + 0x3c) = *(undefined2 *)((int)param_1 + 0xd4);
  FUN_00408180(&DAT_0053ea00);
  FUN_004082f0(&DAT_0053ea14);
  FUN_004081f0((undefined2 *)(param_2 + 0x38));
  FUN_00408310();
  puVar1 = (uint *)(param_2 + 0x54);
  FUN_00408430(puVar1);
  if ((int)*puVar1 < 0x96) {
    *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) & 0xfffffffd;
    return (undefined4 *)(param_2 + 0x58);
  }
  iVar7 = (int)(0x190000 / (longlong)(int)(*puVar1 | 1));
  psVar2 = (short *)(param_2 + 0x4c);
  FUN_00408440(psVar2);
  if ((*(byte *)((int)param_1 + 0xc) & 8) == 0) {
    uVar8 = FUN_00407180();
  }
  else {
    uVar8 = FUN_00407180();
  }
  param_1 = (undefined4 *)(param_2 + 0x58);
  *param_1 = uVar8;
  if (DAT_004d138c < 2) {
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  else {
    uVar8 = FUN_004240f0();
    *(undefined4 *)(param_2 + 0x5c) = uVar8;
  }
  *(short *)(param_2 + 0x50) =
       (short)((*(short *)(iVar6 + 0x38) * 2 * iVar7 >> 0xc) * *(int *)(iVar6 + 0xb4) >> 0xc) +
       *psVar2;
  sVar9 = (short)((*(short *)(iVar6 + 0x30) * 2 * iVar7 >> 0xc) * *(int *)(iVar6 + 0xb4) >> 0xc) +
          *psVar2;
  *psVar2 = sVar9;
  *(short *)(param_2 + 0x52) =
       (short)((*(short *)(iVar6 + 0x3a) * 2 * iVar7 >> 0xc) * *(int *)(iVar6 + 0xb8) >> 0xc) +
       *(short *)(param_2 + 0x4e);
  *(short *)(iVar4 + 0xc) = sVar9;
  *(short *)(iVar4 + 0x1c) = sVar9;
  uVar3 = *(undefined2 *)(param_2 + 0x52);
  *(undefined2 *)(iVar4 + 0xe) = uVar3;
  *(undefined2 *)(iVar4 + 0x16) = uVar3;
  uVar3 = *(undefined2 *)(param_2 + 0x50);
  *(undefined2 *)(iVar4 + 0x14) = uVar3;
  *(undefined2 *)(iVar4 + 0x24) = uVar3;
  uVar3 = *(undefined2 *)(param_2 + 0x4e);
  *(undefined2 *)(iVar4 + 0x1e) = uVar3;
  *(undefined2 *)(iVar4 + 0x26) = uVar3;
  uVar5 = *puVar1;
  *(uint *)(iVar6 + 0xbc) = uVar5 - 0x32;
  if ((int)(uVar5 - 0x32) < 0) {
    *(undefined4 *)(iVar6 + 0xbc) = 0;
  }
  *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 2;
  return param_1;
}


