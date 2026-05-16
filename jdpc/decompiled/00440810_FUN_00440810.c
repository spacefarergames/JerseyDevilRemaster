/*
 * Function: FUN_00440810
 * Entry:    00440810
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00440810(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = param_2;
    *param_2 = 0;
    return param_1;
  }
  return param_2;
}


