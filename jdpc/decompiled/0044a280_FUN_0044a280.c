/*
 * Function: FUN_0044a280
 * Entry:    0044a280
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0044a280(int *param_1)

{
  int iVar1;
  
  DAT_004a6288 = DAT_004a6288 + 1;
  iVar1 = FUN_00443ea0(0x1000);
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
    *param_1 = param_1[2];
    param_1[1] = 0;
    return;
  }
  param_1[6] = 2;
  param_1[3] = param_1[3] | 4;
  param_1[2] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  param_1[1] = 0;
  return;
}


