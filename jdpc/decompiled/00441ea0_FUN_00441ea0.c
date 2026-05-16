/*
 * Function: FUN_00441ea0
 * Entry:    00441ea0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441ea0(void)

{
  int iVar1;
  
  iVar1 = (int)DAT_004cd96c;
  if ((DAT_004d13b6 & 0x30) == 0) {
    if ((DAT_004d13b6 & 4) == 0) {
      if ((DAT_004d13b6 & 8) == 0) {
        if ((DAT_004d13b6 & 1) == 0) {
          if ((DAT_004d13b6 & 2) != 0) {
            FUN_00441e80();
          }
        }
        else {
          FUN_00441e50();
        }
      }
      else {
        FUN_00441e10();
      }
    }
    else {
      FUN_00441de0();
    }
  }
  else {
    DAT_004d13b6 = 0;
  }
  if (iVar1 != DAT_004cd96c) {
    _DAT_0045c068 = (float)(int)DAT_004cd96c * 0.00390625;
    DAT_0045c06c = __ftol();
    DAT_004a6060 = 1;
  }
  return;
}


