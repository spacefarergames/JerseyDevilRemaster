/*
 * Function: FUN_004273d0
 * Entry:    004273d0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004273d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_004269d0(param_2,param_3,param_4,param_5);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined1 *)(iVar1 + param_1) = (&DAT_00503960)[*(byte *)(iVar1 + param_1)];
    iVar1 = iVar2;
  } while (iVar2 < 0x300);
  return;
}


