/*
 * Function: FUN_00403010
 * Entry:    00403010
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00403010(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x1c) + 4) == param_2 + -1)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    *(int *)(iVar1 + 0x1c) = iVar2;
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x14) = iVar1;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00402fd0(iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
  }
  return;
}


