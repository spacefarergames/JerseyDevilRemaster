/*
 * Function: FUN_00407ff0
 * Entry:    00407ff0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00407ff0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00513a80;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


