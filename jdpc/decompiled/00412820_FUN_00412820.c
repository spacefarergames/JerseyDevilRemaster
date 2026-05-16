/*
 * Function: FUN_00412820
 * Entry:    00412820
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00412820(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
  param_3[1] = param_1[5] * param_2[2] + param_1[3] * *param_2 + param_1[4] * param_2[1];
  param_3[2] = param_1[8] * param_2[2] + param_1[6] * *param_2 + param_1[7] * param_2[1];
  return;
}


