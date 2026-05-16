/*
 * Function: FUN_004253e0
 * Entry:    004253e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004253e0(void)

{
  FUN_00425490();
  if ((DAT_004a09a4 != 0) && (DAT_004a09a4 != 1)) {
    if (DAT_004a09a4 == 2) {
      DAT_004a60b4 = FUN_00443ea0(0x100000);
    }
    DAT_004a60bc = 0;
    DAT_004a60c0 = 0;
    DAT_004a60c4 = 0;
    return;
  }
  DAT_004a60cc = DAT_0045f804 * 0xc0000;
  DAT_004a60d0 = DAT_0045f804 * 0xff00;
  DAT_004a60d4 = DAT_004a60cc;
  DAT_004a60c0 = FUN_00443ea0(DAT_004a60cc);
  DAT_004a60bc = FUN_00443ea0(DAT_004a60d0);
  DAT_004a60c4 = FUN_00443ea0(DAT_004a60d4);
  DAT_004a60b4 = 0;
  return;
}


