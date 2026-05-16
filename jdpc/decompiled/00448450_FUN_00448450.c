/*
 * Function: FUN_00448450
 * Entry:    00448450
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00448450(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)*param_1;
  puVar2 = puVar1 + 2;
  *param_1 = puVar2;
  return CONCAT22((short)((uint)puVar2 >> 0x10),*puVar1);
}


