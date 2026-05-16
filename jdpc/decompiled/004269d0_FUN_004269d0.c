/*
 * Function: FUN_004269d0
 * Entry:    004269d0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004269d0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = __ftol();
    if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    (&DAT_00503960)[iVar2] = (char)iVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}


