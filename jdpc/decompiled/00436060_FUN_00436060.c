/*
 * Function: FUN_00436060
 * Entry:    00436060
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00436060(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0xee) = param_2;
  *(undefined2 *)(param_1 + 0xf2) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0x400;
  *(undefined2 *)(param_1 + 0xec) = param_3;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffff5 | 1;
  return;
}


