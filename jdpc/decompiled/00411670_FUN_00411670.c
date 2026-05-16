/*
 * Function: FUN_00411670
 * Entry:    00411670
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411670(int param_1)

{
  if (((DAT_004a5ef4 == 0) && (DAT_004a09a4 != 0x10)) && (DAT_004537e8 != 0)) {
    if (param_1 == 0) {
      if (DAT_0053e858 != 0) {
        FUN_0040a8b0();
        DAT_0053e844 = 0;
        DAT_0053e858 = 0;
        DAT_0053e850 = 0x200;
        DAT_0053e854 = 0x180;
        DAT_004537e8 = 1;
      }
    }
    else if (DAT_0051d718 != 0) {
      FUN_0040a8d0();
      DAT_0051d704 = 0;
      DAT_0051d718 = 0;
      _DAT_0051d710 = 0x200;
      _DAT_0051d714 = 0x180;
      DAT_004537e8 = 1;
      return;
    }
  }
  return;
}


