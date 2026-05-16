/*
 * Function: FUN_00402ec0
 * Entry:    00402ec0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00402ec0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00813b80;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00a14b80 = 0;
  return;
}


