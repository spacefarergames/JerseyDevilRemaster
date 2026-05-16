/*
 * Function: FUN_00449900
 * Entry:    00449900
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00449900(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = *param_1 + 1;
  uVar1 = FUN_004498b0(param_2);
  iVar2 = FUN_0044dbc0(uVar1);
  while (iVar2 != 0) {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_004498b0(param_2);
    iVar2 = FUN_0044dbc0(uVar1);
  }
  return uVar1;
}


