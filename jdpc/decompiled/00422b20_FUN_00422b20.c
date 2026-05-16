/*
 * Function: FUN_00422b20
 * Entry:    00422b20
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00422b20(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (0 < DAT_00557980) {
    puVar1 = &DAT_005579a1;
    iVar2 = DAT_00557980;
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


