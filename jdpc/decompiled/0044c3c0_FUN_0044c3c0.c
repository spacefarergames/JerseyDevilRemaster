/*
 * Function: FUN_0044c3c0
 * Entry:    0044c3c0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c3c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004a64c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_004a65c4 = 0;
  DAT_004a65c8 = 0;
  _DAT_004a65d0 = 0;
  _DAT_004a65d4 = 0;
  _DAT_004a65d8 = 0;
  return;
}


