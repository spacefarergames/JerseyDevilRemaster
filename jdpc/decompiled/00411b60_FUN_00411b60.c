/*
 * Function: FUN_00411b60
 * Entry:    00411b60
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00411b60(void)

{
  int iVar1;
  undefined2 *puVar2;
  
  DAT_004a5ef4 = 1;
  if (DAT_004a610c != 0) {
    thunk_FUN_00401ee0();
    FUN_00411f80(&DAT_004a610c);
    DAT_004a610c = FUN_00412090(DAT_004a6108,5);
    if (DAT_004a610c != 0) goto LAB_00411c12;
  }
  if (DAT_0053e858 != 0) {
    DAT_0053e858 = 0;
    DAT_004a610c = FUN_00412090(DAT_004a6108,5);
  }
  if (DAT_004a610c == 0) {
    if (DAT_0053e844 == 2) {
      DAT_0053e844 = (uint)(299 < DAT_004a6200);
      DAT_004a610c = FUN_00412090(DAT_004a6108,5);
    }
    if (DAT_004a610c == 0) {
      DAT_004a5ef4 = 0;
      DAT_004537e8 = 0;
      return 0;
    }
  }
LAB_00411c12:
  FUN_004109c0(&DAT_004d22e0);
  FUN_00410830(300);
  iVar1 = FUN_004022b0(1,DAT_004a6108,DAT_004a610c);
  if (iVar1 != 1) {
    FUN_004022b0(0,0,0);
  }
  FUN_00425490();
  puVar2 = &DAT_0053ea92;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0x18;
  } while ((int)puVar2 < 0x556192);
  FUN_00420520();
  FUN_004253e0();
  FUN_00425340();
  FUN_00424640();
  DAT_004a5ef4 = 0;
  return 1;
}


