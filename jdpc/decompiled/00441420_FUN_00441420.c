/*
 * Function: FUN_00441420
 * Entry:    00441420
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00441420(int *param_1,int *param_2,int *param_3)

{
  *param_3 = param_2[2] * param_1[1] - param_1[2] * param_2[1];
  param_3[1] = *param_2 * param_1[2] - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - *param_2 * param_1[1];
  return;
}


