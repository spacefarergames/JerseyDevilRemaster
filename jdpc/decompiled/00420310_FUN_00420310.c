/*
 * Function: FUN_00420310
 * Entry:    00420310
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00420310(int param_1)

{
  if (DAT_004a607c == 0) {
    return;
  }
  if (param_1 == 0) {
    if (DAT_0055df8c == 0) {
      return;
    }
    FUN_004013b0(&DAT_0055df20);
    return;
  }
  if (DAT_0055df8c != 0) {
    if (DAT_004a084c == param_1) {
      FUN_00401400(&DAT_0055df20,0xffffffff,0xffffffff);
      goto LAB_00420361;
    }
    FUN_004013b0(&DAT_0055df20);
    FUN_004456f0(DAT_004a0848);
    DAT_004a0848 = 0xffffffff;
  }
  FUN_00421960(param_1);
LAB_00420361:
  if ((DAT_0055df94 == 0) && (DAT_0053e874 != 0)) {
    FUN_00401760(&DAT_0055df20);
    return;
  }
  return;
}


