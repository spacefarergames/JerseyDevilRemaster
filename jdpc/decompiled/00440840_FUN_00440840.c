/*
 * Function: FUN_00440840
 * Entry:    00440840
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00440840(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = DAT_004a6720;
  if (DAT_004a6724 < 1) {
    return (undefined4 *)0x0;
  }
  do {
    if ((*(byte *)(puVar1 + 1) & 1) != 0) {
      puVar1[1] = 0;
      *(undefined2 *)(puVar1 + 2) = 0;
      *puVar1 = 0;
      iVar2 = 0x33;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *puVar1 = 0;
      puVar1[3] = 0x80000000;
      puVar1[6] = 0xffffffff;
      puVar1[4] = puVar1 + 7;
      puVar1[0x18] = puVar1 + 0x1b;
      *(undefined4 *)(puVar1[4] + 0x48) = 0;
      puVar1[5] = 0;
      return puVar1;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x33;
  } while (iVar2 < DAT_004a6724);
  return (undefined4 *)0x0;
}


