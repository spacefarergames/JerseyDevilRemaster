/*
 * Function: FUN_00431de0
 * Entry:    00431de0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00431de0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined2 *)(param_3 + 10) = *(undefined2 *)(param_1 + 0x20);
  FUN_00431a30(param_1,param_2,param_3,param_4);
  if ((*(byte *)(param_3 + 2) & 4) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x100000;
  }
  if (*(short *)(param_3 + 10) != -1) {
    *(short *)(param_1 + 0x20) = *(short *)(param_3 + 10);
  }
  FUN_00431c10(param_1,param_2,param_3,param_4);
  FUN_00431860(param_1,param_2,param_3);
  return;
}


