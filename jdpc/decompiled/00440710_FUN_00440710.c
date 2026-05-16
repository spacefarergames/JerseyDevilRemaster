/*
 * Function: FUN_00440710
 * Entry:    00440710
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00440710(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_3 + (int)param_1);
  if (puVar1 <= param_1) {
    return (undefined4 *)0x0;
  }
  do {
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      param_1[1] = 0;
      *param_1 = 0;
      return param_1;
    }
    param_1 = (undefined4 *)((int)param_1 + param_2);
  } while (param_1 < puVar1);
  return (undefined4 *)0x0;
}


