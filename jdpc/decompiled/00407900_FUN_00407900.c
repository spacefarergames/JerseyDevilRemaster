/*
 * Function: FUN_00407900
 * Entry:    00407900
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00407900(short *param_1,int *param_2)

{
  *param_1 = (short)(*param_2 * (int)*param_1 >> 0xc);
  param_1[1] = (short)(param_2[1] * (int)param_1[1] >> 0xc);
  param_1[2] = (short)(param_2[2] * (int)param_1[2] >> 0xc);
  param_1[3] = (short)(*param_2 * (int)param_1[3] >> 0xc);
  param_1[4] = (short)(param_2[1] * (int)param_1[4] >> 0xc);
  param_1[5] = (short)(param_2[2] * (int)param_1[5] >> 0xc);
  param_1[6] = (short)(*param_2 * (int)param_1[6] >> 0xc);
  param_1[7] = (short)(param_2[1] * (int)param_1[7] >> 0xc);
  param_1[8] = (short)(param_2[2] * (int)param_1[8] >> 0xc);
  return;
}


