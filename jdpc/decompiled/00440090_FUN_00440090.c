/*
 * Function: FUN_00440090
 * Entry:    00440090
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440090(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004d22e0;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_004d22fc = 0;
  FUN_004109c0(&DAT_004d22e0);
  FUN_00410830(300);
  return;
}


