/*
 * Function: FUN_00445080
 * Entry:    00445080
 * Warning:  Decompiled pseudocode, not original source.
 */


int * FUN_00445080(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1;
  if (*param_1 < 0) {
    return (int *)0x0;
  }
  FUN_00449950();
  iVar2 = *piVar1;
  if ((iVar2 < 0x3f481) || (0x7ffc0b7e < iVar2)) {
    piVar1 = (int *)FUN_0044a030(piVar1);
    iVar3 = FUN_00449c20(piVar1);
    iVar2 = *piVar1;
    if (iVar3 != 0) {
      iVar2 = iVar2 - DAT_004a4f78;
    }
    param_1 = (int *)(iVar2 - DAT_004a4f70);
    iVar2 = (int)param_1 % 0x3c;
    *piVar1 = iVar2;
    if (iVar2 < 0) {
      *piVar1 = iVar2 + 0x3c;
      param_1 = (int *)((int)param_1 + -0x3c);
    }
    param_1 = (int *)((int)param_1 / 0x3c + piVar1[1]);
    iVar2 = (int)param_1 % 0x3c;
    piVar1[1] = iVar2;
    if (iVar2 < 0) {
      piVar1[1] = iVar2 + 0x3c;
      param_1 = (int *)((int)param_1 + -0x3c);
    }
    param_1 = (int *)((int)param_1 / 0x3c + piVar1[2]);
    iVar2 = (int)param_1 % 0x18;
    piVar1[2] = iVar2;
    if (iVar2 < 0) {
      piVar1[2] = iVar2 + 0x18;
      param_1 = (int *)((int)param_1 + -0x18);
    }
    iVar2 = (int)param_1 / 0x18;
    if (0 < iVar2) {
      piVar1[6] = (iVar2 + piVar1[6]) % 7;
      piVar1[3] = piVar1[3] + iVar2;
      piVar1[7] = piVar1[7] + iVar2;
      return piVar1;
    }
    if (iVar2 < 0) {
      piVar1[6] = (iVar2 + 7 + piVar1[6]) % 7;
      iVar3 = piVar1[3] + iVar2;
      piVar1[3] = iVar3;
      if (iVar3 < 1) {
        piVar1[7] = 0x16c;
        piVar1[3] = iVar3 + 0x1f;
        piVar1[4] = 0xb;
        piVar1[5] = piVar1[5] + -1;
        return piVar1;
      }
      piVar1[7] = piVar1[7] + iVar2;
    }
  }
  else {
    param_1 = (int *)(iVar2 - DAT_004a4f70);
    piVar1 = (int *)FUN_0044a030(&param_1);
    if (DAT_004a4f74 != 0) {
      iVar2 = FUN_00449c20(piVar1);
      if (iVar2 != 0) {
        param_1 = (int *)((int)param_1 - DAT_004a4f78);
        piVar1 = (int *)FUN_0044a030(&param_1);
        piVar1[8] = 1;
        return piVar1;
      }
    }
  }
  return piVar1;
}


