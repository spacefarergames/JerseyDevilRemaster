/*
 * Function: FUN_0040f420
 * Entry:    0040f420
 * Warning:  Decompiled pseudocode, not original source.
 */


int * FUN_0040f420(int *param_1,short param_2)

{
  float fVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      if (param_1[1] == (int)param_2) break;
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
    if (param_1 != (int *)0x0) {
      FUN_00407190(param_1 + 3,&DAT_0066c620);
      DAT_008079a0 = (float)*(byte *)(param_1 + 2) * 0.003921569;
      DAT_008079a4 = (float)*(byte *)((int)param_1 + 9) * 0.003921569;
      DAT_008079a8 = (float)*(byte *)((int)param_1 + 10) * 0.003921569;
      if ((DAT_0045f800 == 8) && (DAT_004e1a70 != 0)) {
        fVar1 = (DAT_008079a4 * 0.587 - DAT_008079a8 * -0.114) - DAT_008079a0 * -0.299;
        if (fVar1 == 0.0) {
          DAT_0045c06c = 0;
          DAT_004a6060 = 1;
          return param_1;
        }
        if (fVar1 < 0.2) {
          DAT_0045c06c = 0x1e;
          DAT_004a6060 = 1;
          return param_1;
        }
        if (fVar1 < 0.3) {
          DAT_0045c06c = 0x80;
          DAT_004a6060 = 1;
          return param_1;
        }
        if ((fVar1 < 0.3) || (DAT_0045c06c = 200, 0.4 <= fVar1)) {
          DAT_0045c06c = 0xff;
        }
        DAT_004a6060 = 1;
      }
    }
  }
  return param_1;
}


