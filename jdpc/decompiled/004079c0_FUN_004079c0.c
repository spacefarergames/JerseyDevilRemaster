/*
 * Function: FUN_004079c0
 * Entry:    004079c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004079c0(short *param_1,short *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar1 = *param_1;
  sVar2 = *param_2;
  *param_3 = (int)sVar1 * (int)sVar2;
  iVar3 = (int)sVar1 * (int)sVar2 + (int)param_1[1] * (int)param_2[1];
  *param_3 = iVar3;
  *param_3 = (int)param_1[2] * (int)param_2[2] + iVar3 >> 0xc;
  sVar1 = param_1[3];
  sVar2 = *param_2;
  param_3[1] = (int)sVar1 * (int)sVar2;
  iVar3 = (int)sVar1 * (int)sVar2 + (int)param_1[4] * (int)param_2[1];
  param_3[1] = iVar3;
  param_3[1] = (int)param_1[5] * (int)param_2[2] + iVar3 >> 0xc;
  sVar1 = param_1[6];
  sVar2 = *param_2;
  param_3[2] = (int)sVar1 * (int)sVar2;
  iVar3 = (int)sVar1 * (int)sVar2 + (int)param_1[7] * (int)param_2[1];
  param_3[2] = iVar3;
  param_3[2] = (int)param_1[8] * (int)param_2[2] + iVar3 >> 0xc;
  return;
}


