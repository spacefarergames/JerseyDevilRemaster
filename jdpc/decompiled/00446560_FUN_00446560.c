/*
 * Function: FUN_00446560
 * Entry:    00446560
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00446560(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_004a629c != (code *)0x0) {
    iVar1 = (*DAT_004a629c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


