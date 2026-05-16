/*
 * Function: FUN_00422a80
 * Entry:    00422a80
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00422a80(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    FUN_004457d0();
    uVar1 = __ftol();
    (&DAT_004e3760)[iVar2] = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}


