/*
 * Function: FUN_00440180
 * Entry:    00440180
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00440180(int param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  if (((((*(uint *)(param_1 + 8) & 0x1000) != 0) && ((*(uint *)(param_1 + 0x158) & 0x4000) == 0)) &&
      (*(int *)(param_1 + 0x60) != 0)) &&
     ((*(int *)(param_1 + 0x58) == 0 && (*(int *)(param_1 + 0x54) == 0)))) {
    *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | 0x4000;
    *(undefined4 *)(param_1 + 0x154) = 0;
    FUN_004407e0((undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}


