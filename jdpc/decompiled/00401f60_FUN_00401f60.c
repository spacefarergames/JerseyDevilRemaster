/*
 * Function: FUN_00401f60
 * Entry:    00401f60
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00401f60(void)

{
  int iVar1;
  
  (*DAT_00a14d00)();
  iVar1 = 0;
  do {
    if ((&DAT_00a14c00)[iVar1] != '\0') {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return 0;
}


