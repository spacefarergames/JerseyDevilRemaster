/*
 * Function: FUN_00407610
 * Entry:    00407610
 * Warning:  Decompiled pseudocode, not original source.
 */


short * FUN_00407610(undefined4 param_1,short *param_2)

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
  short sVar12;
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
  int iVar24;
  
  iVar13 = FUN_004072c0(param_1);
  sVar1 = param_2[6];
  iVar14 = FUN_004072a0(param_1);
  sVar2 = *param_2;
  iVar15 = FUN_004072a0(param_1);
  sVar3 = param_2[1];
  iVar16 = FUN_004072c0(param_1);
  sVar4 = param_2[7];
  iVar17 = FUN_004072a0(param_1);
  sVar5 = param_2[2];
  iVar18 = FUN_004072c0(param_1);
  sVar6 = param_2[8];
  iVar19 = FUN_004072a0(param_1);
  sVar7 = param_2[6];
  iVar20 = FUN_004072c0(param_1);
  sVar8 = *param_2;
  iVar21 = FUN_004072a0(param_1);
  sVar9 = param_2[7];
  iVar22 = FUN_004072c0(param_1);
  sVar10 = param_2[1];
  iVar23 = FUN_004072a0(param_1);
  sVar11 = param_2[8];
  iVar24 = FUN_004072c0(param_1);
  sVar12 = param_2[2];
  param_2[2] = (short)(iVar17 * sVar5 >> 0xc) + (short)(iVar18 * sVar6 >> 0xc);
  param_2[8] = (short)(iVar23 * sVar11 >> 0xc) - (short)(iVar24 * sVar12 >> 0xc);
  *param_2 = (short)(iVar13 * sVar1 >> 0xc) + (short)(iVar14 * sVar2 >> 0xc);
  param_2[1] = (short)(iVar15 * sVar3 >> 0xc) + (short)(iVar16 * sVar4 >> 0xc);
  param_2[6] = (short)(iVar19 * sVar7 >> 0xc) - (short)(iVar20 * sVar8 >> 0xc);
  param_2[7] = (short)(iVar21 * sVar9 >> 0xc) - (short)(iVar22 * sVar10 >> 0xc);
  return param_2;
}


