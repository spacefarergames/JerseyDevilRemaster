/*
 * Function: FUN_00413550
 * Entry:    00413550
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00413550(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = *param_2;
  fVar2 = param_1[3];
  fVar3 = param_2[1];
  fVar4 = param_1[4];
  fVar5 = param_2[2];
  fVar6 = param_1[5];
  fVar7 = *param_2;
  fVar8 = param_1[6];
  fVar9 = param_2[1];
  fVar10 = param_1[7];
  fVar11 = param_2[2];
  fVar12 = param_1[8];
  fVar13 = param_1[10];
  fVar14 = param_1[0xb];
  *param_3 = param_2[2] * param_1[2] + param_2[1] * param_1[1] + *param_2 * *param_1 + param_1[9];
  param_3[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar13;
  param_3[2] = fVar9 * fVar10 + fVar7 * fVar8 + fVar11 * fVar12 + fVar14;
  return;
}


