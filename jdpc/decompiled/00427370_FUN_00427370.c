/*
 * Function: FUN_00427370
 * Entry:    00427370
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00427370(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar1 = (undefined1 *)(iVar3 + param_1);
    FUN_004457d0();
    uVar2 = __ftol();
    iVar3 = iVar3 + 1;
    *puVar1 = uVar2;
  } while (iVar3 < 0x300);
  return;
}


