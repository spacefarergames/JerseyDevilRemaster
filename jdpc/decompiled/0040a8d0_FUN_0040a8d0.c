/*
 * Function: FUN_0040a8d0
 * Entry:    0040a8d0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0040a8d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_0051d700;
  puVar3 = &DAT_0053e840;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


