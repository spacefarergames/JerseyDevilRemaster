/*
 * Function: FUN_00426bd0
 * Entry:    00426bd0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00426bd0(double *param_1,double *param_2,double *param_3,double param_4,double param_5,
                 double param_6)

{
  float10 fVar1;
  float10 fVar2;
  
  if (param_6 == 0.0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    return;
  }
  if (param_5 == 0.0) {
    *param_1 = param_6;
    *param_2 = param_6;
    *param_3 = param_6;
    return;
  }
  if (param_4 < 0.0) {
    param_4 = param_4 - -360.0;
  }
  param_6 = param_6 * 3.0;
  if (120.0 < param_4) {
    if ((float10)240.0 < (float10)param_4) {
      fVar1 = (float10)param_4 - (float10)240.0;
      fVar2 = (float10)fcos(fVar1 * (float10)0.017453293);
      fVar1 = (float10)fcos(((float10)60.0 - fVar1) * (float10)0.017453293);
      *param_2 = (1.0 - param_5) * 0.3333333333333333;
      fVar1 = ((fVar2 * (float10)param_5) / fVar1 - (float10)-1.0) * (float10)0.3333333333333333;
      *param_3 = (double)fVar1;
      *param_1 = ((1.0 - *param_2) - (double)fVar1) * param_6;
    }
    else {
      fVar1 = (float10)param_4 - (float10)120.0;
      fVar2 = (float10)fcos(fVar1 * (float10)0.017453293);
      fVar1 = (float10)fcos(((float10)60.0 - fVar1) * (float10)0.017453293);
      *param_1 = (1.0 - param_5) * 0.3333333333333333;
      fVar1 = ((fVar2 * (float10)param_5) / fVar1 - (float10)-1.0) * (float10)0.3333333333333333;
      *param_2 = (double)fVar1;
      *param_3 = (1.0 - *param_1) - (double)fVar1;
      *param_1 = *param_1 * param_6;
    }
    *param_2 = *param_2 * param_6;
    *param_3 = *param_3 * param_6;
  }
  else {
    fVar1 = (float10)fcos((float10)param_4 * (float10)0.01745329238474369);
    fVar2 = (float10)fcos(((float10)60.0 - (float10)param_4) * (float10)0.01745329238474369);
    fVar1 = ((fVar1 * (float10)param_5) / fVar2 - (float10)-1.0) * (float10)0.3333333333333333;
    *param_3 = (1.0 - param_5) * 0.3333333333333333;
    *param_1 = (double)fVar1;
    *param_2 = (double)(((float10)1.0 - fVar1) - (float10)*param_3);
    *param_3 = *param_3 * param_6;
    *param_1 = *param_1 * param_6;
    *param_2 = *param_2 * param_6;
  }
  if (1.0 < *param_1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0x3ff00000;
  }
  if (1.0 < *param_2) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0x3ff00000;
  }
  if (1.0 < *param_3) {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0x3ff00000;
  }
  return;
}


