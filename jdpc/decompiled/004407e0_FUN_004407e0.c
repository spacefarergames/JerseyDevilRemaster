/*
 * Function: FUN_004407e0
 * Entry:    004407e0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_004407e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    param_1[1] = 1;
    *param_1 = 0;
    param_1 = puVar1;
  }
  return 0;
}


