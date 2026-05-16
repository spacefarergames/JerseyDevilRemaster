/*
 * Function: FUN_00407b00
 * Entry:    00407b00
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00407b00(short *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_4;
  
  iVar7 = param_2[1];
  iVar8 = param_2[2];
  iVar9 = *param_2;
  sVar1 = param_1[4];
  sVar2 = param_1[3];
  sVar3 = param_1[5];
  sVar4 = param_1[6];
  sVar5 = param_1[7];
  sVar6 = param_1[8];
  *param_3 = *param_1 * iVar9 + param_1[1] * iVar7 + param_1[2] * iVar8 >> 0xc;
  param_3[1] = sVar2 * iVar9 + sVar1 * iVar7 + sVar3 * iVar8 >> 0xc;
  param_3[2] = sVar4 * iVar9 + sVar5 * iVar7 + sVar6 * iVar8 >> 0xc;
  param_3[3] = local_4;
  return;
}


