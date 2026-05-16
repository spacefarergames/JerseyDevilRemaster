/*
 * Function: FUN_00402fd0
 * Entry:    00402fd0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00402fd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (**(int **)(iVar1 + 0x18) == param_2 + 1)) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(int *)(iVar1 + 0x18) = iVar2;
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x14) = iVar1;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00403010(iVar1,**(undefined4 **)(iVar1 + 0x18));
  }
  return;
}


