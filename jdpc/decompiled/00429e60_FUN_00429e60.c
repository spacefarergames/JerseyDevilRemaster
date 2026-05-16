/*
 * Function: FUN_00429e60
 * Entry:    00429e60
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00429e60(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(&DAT_004e1f40 + param_1 * 4);
  *(int *)(&DAT_004e1f40 + param_1 * 4) = param_2;
  return;
}


