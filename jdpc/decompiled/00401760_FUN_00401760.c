/*
 * Function: FUN_00401760
 * Entry:    00401760
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00401760(int param_1)

{
  if (((*(int *)(param_1 + 0x74) == 0) && (*(int *)(param_1 + 0x70) == 0)) &&
     (*(int *)(param_1 + 0x14) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x30))(*(int **)(param_1 + 0x6c),0,0,1);
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  return;
}


