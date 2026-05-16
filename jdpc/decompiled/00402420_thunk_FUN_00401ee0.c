/*
 * Function: thunk_FUN_00401ee0
 * Entry:    00402420
 * Warning:  Decompiled pseudocode, not original source.
 */


void thunk_FUN_00401ee0(void)

{
  if (DAT_004a5c94 != (int *)0x0) {
    (**(code **)(*DAT_004a5c94 + 0x20))(DAT_004a5c94);
    (**(code **)(*DAT_004a5c94 + 8))(DAT_004a5c94);
    DAT_004a5c94 = (int *)0x0;
  }
  if (DAT_00a14d04 == 1) {
    if (DAT_00a14bf0 != 0) {
      (**(code **)(*DAT_004a5c98 + 0x20))(DAT_004a5c98);
      DAT_00a14bf0 = 0;
    }
    if (DAT_004a5c98 != (int *)0x0) {
      (**(code **)(*DAT_004a5c98 + 8))(DAT_004a5c98);
      DAT_004a5c98 = (int *)0x0;
    }
  }
  if (DAT_004a5c90 != (int *)0x0) {
    (**(code **)(*DAT_004a5c90 + 8))(DAT_004a5c90);
  }
  DAT_004a5c90 = (int *)0x0;
  CoUninitialize();
  return;
}


