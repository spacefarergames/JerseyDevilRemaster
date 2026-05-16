/*
 * Function: FUN_004204f0
 * Entry:    004204f0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004204f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_004cd9c0;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004cdfca = 0;
  return;
}


