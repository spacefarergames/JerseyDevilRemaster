/*
 * Function: FUN_00425340
 * Entry:    00425340
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425340(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00513aa0;
  for (iVar1 = 2000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004a6094 = 0;
  DAT_004a60a4 = 0;
  _DAT_0053eaa8 = 0;
  _DAT_0053eaac = 0;
  DAT_004a60ac = 0x6d1;
  _DAT_005531d8 = 0;
  _DAT_005531dc = DAT_004a60bc;
  FUN_004253c0();
  _DAT_004a5e54 = 0;
  return;
}


