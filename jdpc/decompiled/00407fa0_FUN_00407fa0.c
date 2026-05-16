/*
 * Function: FUN_00407fa0
 * Entry:    00407fa0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00407fa0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20 [8];
  
  FUN_00407d80(param_1,param_2,local_20);
  puVar2 = local_20;
  puVar3 = param_2;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}


