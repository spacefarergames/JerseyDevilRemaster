/*
 * Function: FUN_00432e90
 * Entry:    00432e90
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00432e90(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x60) != 0) && ((*(uint *)(param_1 + 8) & 0x200000) == 0)) {
    iVar1 = param_1 + 0x68;
    *(undefined4 *)(param_1 + 100) = 0;
    FUN_004079a0(iVar1,*(int *)(param_1 + 0xa8) + 0x18);
    FUN_004072e0(*(int *)(param_1 + 0xa8) + 0x10,iVar1);
    FUN_00407900(iVar1,*(undefined4 *)(param_1 + 0xa8));
  }
  return;
}


