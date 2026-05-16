/*
 * Function: FUN_00406030
 * Entry:    00406030
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00406030(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined1 *)(iVar1 + 0x10040 + DAT_0053ea20) = 0;
    iVar1 = iVar2;
  } while (iVar2 < 0x100);
  *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0x50;
  *(undefined1 *)(DAT_0053ea20 + 0x10043) = 3;
  *(undefined1 *)(DAT_0053ea20 + 0x1006e) = (undefined1)DAT_0053e848;
  *(undefined1 *)(DAT_0053ea20 + 0x1006f) = 0;
  *(undefined2 *)(DAT_0053ea20 + 0x1001a) = 0;
  *(undefined2 *)(DAT_0053ea20 + 0x1001c) = 0xff;
  *(undefined2 *)(DAT_0053ea20 + 0x1001e) = 0x7f;
  *(undefined2 *)(DAT_0053ea20 + 0x10020) = 0;
  *(undefined2 *)(DAT_0053ea20 + 0x10022) = 0xff;
  *(undefined2 *)(DAT_0053ea20 + 0x10024) = 0x7f;
  return;
}


