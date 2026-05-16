/*
 * Function: FUN_004012d0
 * Entry:    004012d0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004012d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[0x1b] != 0)) {
    if (param_1[0x16] != 0) {
      FUN_00443fe0(param_1[8]);
    }
    puVar2 = &DAT_00451000;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}


