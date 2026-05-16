/*
 * Function: FUN_00426e90
 * Entry:    00426e90
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00426e90(double param_1,double param_2,double param_3,double *param_4,double *param_5,
                 double *param_6)

{
  double dVar1;
  float10 fVar2;
  double local_10;
  
  if ((param_2 < param_1) || (param_3 < param_1)) {
    if ((param_1 < param_2) || (param_3 < param_2)) {
      local_10 = param_3;
    }
    else {
      local_10 = param_2;
    }
  }
  else {
    local_10 = param_1;
  }
  dVar1 = param_3 + param_2 + param_1;
  *param_6 = dVar1 * 0.3333333333333333;
  if ((param_1 == param_2) && (param_2 == param_3)) {
    *(undefined4 *)param_5 = 0;
    *(undefined4 *)((int)param_5 + 4) = 0;
    *(undefined4 *)param_4 = 0;
    *(undefined4 *)((int)param_4 + 4) = 0;
    return;
  }
  *param_5 = 1.0 - (3.0 / dVar1) * local_10;
  fVar2 = (float10)FUN_00445a80();
  *param_4 = (double)(fVar2 * (float10)57.29577951);
  if (param_2 < param_3) {
    *param_4 = (double)((float10)360.0 - fVar2 * (float10)57.29577951);
  }
  if (1.0 < *param_5) {
    *(undefined4 *)param_5 = 0;
    *(undefined4 *)((int)param_5 + 4) = 0x3ff00000;
  }
  if (1.0 < *param_6) {
    *(undefined4 *)param_6 = 0;
    *(undefined4 *)((int)param_6 + 4) = 0x3ff00000;
  }
  return;
}


