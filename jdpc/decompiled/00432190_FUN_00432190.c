/*
 * Function: FUN_00432190
 * Entry:    00432190
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00432190(int param_1,int param_2,int *param_3)

{
  *param_3 = *(int *)(param_2 + 0xcc) - *(int *)(param_1 + 0xcc);
  param_3[1] = *(int *)(param_2 + 0xd0) - *(int *)(param_1 + 0xd0);
  param_3[2] = *(int *)(param_2 + 0xd4) - *(int *)(param_1 + 0xd4);
  param_3[4] = *(int *)(param_1 + 0xcc);
  param_3[5] = *(int *)(param_1 + 0xd0);
  param_3[6] = *(int *)(param_1 + 0xd4);
  param_3[0xc] = 0;
  *(undefined2 *)((int)param_3 + 0x2a) = *(undefined2 *)(param_1 + 0x20);
  FUN_0042f9c0(param_3 + 4,param_3,param_3 + 8,param_3 + 0xc);
  *(int *)(param_2 + 0xcc) = *param_3 + *(int *)(param_1 + 0xcc);
  *(int *)(param_2 + 0xd4) = param_3[2] + *(int *)(param_1 + 0xd4);
  return;
}


