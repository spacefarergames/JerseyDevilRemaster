/*
 * Function: FUN_00434670
 * Entry:    00434670
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00434670(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0xffff) != 0) {
    do {
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      param_2 = (undefined4 *)*param_2;
      uVar1 = uVar1 + 1;
    } while (uVar1 != (param_1 & 0xffff));
  }
  if (param_2 != (undefined4 *)0x0) {
    *(byte *)((int)param_2 + 9) = *(byte *)((int)param_2 + 9) | 0x80;
  }
  return;
}


