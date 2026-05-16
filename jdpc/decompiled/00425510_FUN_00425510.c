/*
 * Function: FUN_00425510
 * Entry:    00425510
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425510(void)

{
  int *piVar1;
  
  if ((DAT_004a09a4 & 2) == 0) {
    if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
      if (DAT_004a60b8 != 0) {
        FUN_00443fe0(DAT_004a60b8);
        DAT_004a60b8 = 0;
      }
      if (-1 < DAT_004a6094 + -1) {
        piVar1 = (int *)(&DAT_00557da0 + (DAT_004a6094 + -1) * 4);
        do {
          if (*piVar1 == DAT_004a60a4) {
            DAT_004a60a4 = 0;
          }
          piVar1 = piVar1 + -1;
          DAT_004a6094 = DAT_004a6094 + -1;
        } while (DAT_004a6094 != 0);
      }
    }
  }
  else {
    (*DAT_00810360)(0xde1);
    (*DAT_008106ac)(DAT_004a6094,&DAT_00557da0);
    (*DAT_0081074c)();
  }
  DAT_004a6094 = 0;
  DAT_004a6098 = 0;
  DAT_004a60a8 = 0;
  DAT_004a60ac = 0;
  _DAT_004a609c = 0;
  _DAT_004a60a0 = 0;
  return;
}


