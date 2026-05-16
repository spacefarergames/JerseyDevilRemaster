/*
 * Function: FUN_00407490
 * Entry:    00407490
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00407490(undefined4 param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  iVar12 = FUN_004072c0(param_1);
  sVar1 = *(short *)(param_2 + 0xc);
  iVar13 = FUN_004072a0(param_1);
  sVar2 = *(short *)(param_2 + 6);
  iVar14 = FUN_004072c0(param_1);
  sVar3 = *(short *)(param_2 + 0xe);
  iVar15 = FUN_004072a0(param_1);
  sVar4 = *(short *)(param_2 + 8);
  iVar16 = FUN_004072a0(param_1);
  sVar5 = *(short *)(param_2 + 10);
  iVar17 = FUN_004072c0(param_1);
  sVar6 = *(short *)(param_2 + 0x10);
  iVar18 = FUN_004072c0(param_1);
  sVar7 = *(short *)(param_2 + 6);
  iVar19 = FUN_004072a0(param_1);
  sVar8 = *(short *)(param_2 + 0xc);
  iVar20 = FUN_004072c0(param_1);
  sVar9 = *(short *)(param_2 + 8);
  iVar21 = FUN_004072a0(param_1);
  sVar10 = *(short *)(param_2 + 0xe);
  iVar22 = FUN_004072c0(param_1);
  sVar11 = *(short *)(param_2 + 10);
  iVar23 = FUN_004072a0(param_1);
  *(short *)(param_2 + 10) = (short)(iVar16 * sVar5 >> 0xc) - (short)(iVar17 * sVar6 >> 0xc);
  *(short *)(param_2 + 0x10) =
       (short)(iVar22 * sVar11 >> 0xc) + (short)(iVar23 * *(short *)(param_2 + 0x10) >> 0xc);
  *(short *)(param_2 + 6) = (short)(iVar13 * sVar2 >> 0xc) - (short)(iVar12 * sVar1 >> 0xc);
  *(short *)(param_2 + 8) = (short)(iVar15 * sVar4 >> 0xc) - (short)(iVar14 * sVar3 >> 0xc);
  *(short *)(param_2 + 0xc) = (short)(iVar18 * sVar7 >> 0xc) + (short)(iVar19 * sVar8 >> 0xc);
  *(short *)(param_2 + 0xe) = (short)(iVar20 * sVar9 >> 0xc) + (short)(iVar21 * sVar10 >> 0xc);
  return param_2;
}


