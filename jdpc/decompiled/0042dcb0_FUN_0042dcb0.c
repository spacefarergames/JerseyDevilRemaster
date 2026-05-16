/*
 * Function: FUN_0042dcb0
 * Entry:    0042dcb0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042dcb0(int param_1)

{
  int iVar1;
  
  FUN_004240f0(0);
  FUN_0043fd00();
  DAT_004e1bdc = 0;
  FUN_0041f3d0();
  if (*(short *)(&DAT_004a16fc + param_1 * 0x20) != 0) {
    DAT_004d2171 = 0;
    iVar1 = FUN_0042bff0((int)*(short *)(&DAT_004a16fc + param_1 * 0x20),DAT_0053ea20 + 0x200000);
    if (iVar1 != 0) {
      DAT_004537e8 = 0;
    }
    (*DAT_004a5ea8)();
    DAT_004d2171 = 0;
    DAT_004e1bdc = 1;
  }
  return;
}


