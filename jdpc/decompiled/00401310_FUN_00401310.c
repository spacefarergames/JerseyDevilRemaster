/*
 * Function: FUN_00401310
 * Entry:    00401310
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00401310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_004013b0(param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x54) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x34))(*(int **)(param_1 + 0x6c),0);
  FUN_00401400(param_1,0xffffffff,0xffffffff);
  return 0;
}


