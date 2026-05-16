/*
 * Function: FUN_00407d30
 * Entry:    00407d30
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00407d30(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00407b90(param_1,param_2,local_20);
  local_4 = param_2[7];
  local_c = param_2[5];
  local_8 = param_2[6];
  puVar2 = local_20;
  puVar3 = param_2;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}


