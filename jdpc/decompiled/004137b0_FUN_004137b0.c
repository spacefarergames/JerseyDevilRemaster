/*
 * Function: FUN_004137b0
 * Entry:    004137b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004137b0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  *param_4 = (param_3[1] - param_2[1]) * (*param_1 - *param_2) -
             (*param_3 - *param_2) * (param_1[1] - param_2[1]);
  return;
}


