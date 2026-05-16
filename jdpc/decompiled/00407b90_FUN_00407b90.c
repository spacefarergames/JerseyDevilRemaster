/*
 * Function: FUN_00407b90
 * Entry:    00407b90
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00407b90(short *param_1,short *param_2,undefined2 *param_3)

{
  *param_3 = (short)((int)param_1[2] * (int)param_2[6] + (int)param_2[3] * (int)param_1[1] +
                     (int)*param_1 * (int)*param_2 >> 0xc);
  param_3[1] = (short)((int)*param_1 * (int)param_2[1] + (int)param_2[7] * (int)param_1[2] +
                       (int)param_1[1] * (int)param_2[4] >> 0xc);
  param_3[2] = (short)((int)*param_1 * (int)param_2[2] + (int)param_2[5] * (int)param_1[1] +
                       (int)param_2[8] * (int)param_1[2] >> 0xc);
  param_3[3] = (short)((int)*param_2 * (int)param_1[3] + (int)param_1[4] * (int)param_2[3] +
                       (int)param_1[5] * (int)param_2[6] >> 0xc);
  param_3[4] = (short)((int)param_1[3] * (int)param_2[1] + (int)param_1[5] * (int)param_2[7] +
                       (int)param_1[4] * (int)param_2[4] >> 0xc);
  param_3[5] = (short)((int)param_1[5] * (int)param_2[8] + (int)param_1[4] * (int)param_2[5] +
                       (int)param_1[3] * (int)param_2[2] >> 0xc);
  param_3[6] = (short)((int)*param_2 * (int)param_1[6] + (int)param_1[8] * (int)param_2[6] +
                       (int)param_1[7] * (int)param_2[3] >> 0xc);
  param_3[7] = (short)((int)param_1[7] * (int)param_2[4] + (int)param_1[6] * (int)param_2[1] +
                       (int)param_1[8] * (int)param_2[7] >> 0xc);
  param_3[8] = (short)((int)param_1[7] * (int)param_2[5] + (int)param_1[8] * (int)param_2[8] +
                       (int)param_1[6] * (int)param_2[2] >> 0xc);
  return;
}


