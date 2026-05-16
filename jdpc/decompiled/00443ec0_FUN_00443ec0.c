/*
 * Function: FUN_00443ec0
 * Entry:    00443ec0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00443ec0(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        iVar1 = FUN_00443f10(param_1);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = FUN_00446560(param_1);
    } while (iVar1 != 0);
  }
  return 0;
}


