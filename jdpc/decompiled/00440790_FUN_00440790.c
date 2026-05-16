/*
 * Function: FUN_00440790
 * Entry:    00440790
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00440790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return param_1;
  }
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while ((puVar2 = puVar1, puVar2 != (undefined4 *)0x0 && (puVar2 != param_2))) {
      puVar3 = puVar2;
      puVar1 = (undefined4 *)*puVar2;
    }
    puVar1 = (undefined4 *)*puVar3;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 1;
      *puVar3 = *puVar1;
      *puVar1 = 0;
    }
    return param_1;
  }
  param_1[1] = 1;
  return (undefined4 *)*param_1;
}


