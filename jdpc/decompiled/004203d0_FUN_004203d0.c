/*
 * Function: FUN_004203d0
 * Entry:    004203d0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004203d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)DAT_004d18e8;
  (&DAT_004debc0)[iVar1 * 2] = *param_1;
  *(undefined2 *)(&DAT_004debc4 + iVar1 * 2) = *(undefined2 *)(param_1 + 1);
  *(undefined2 *)((int)&DAT_004debc4 + iVar1 * 8 + 2) = *(undefined2 *)((int)param_1 + 6);
  DAT_004d18e8 = DAT_004d18e8 + 1;
  return;
}


