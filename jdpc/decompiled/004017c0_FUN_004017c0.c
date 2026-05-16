/*
 * Function: FUN_004017c0
 * Entry:    004017c0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_004017c0(int param_1)

{
  int iVar1;
  int unaff_ESI;
  uint uVar2;
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))(*(int **)(param_1 + 0x6c),&param_1,local_4);
  if (*(int *)(iVar1 + 0x54) == 0) {
    uVar2 = (uint)(*(uint *)(iVar1 + 0x48) <=
                  (uint)(*(int *)(iVar1 + 0x5c) * *(int *)(iVar1 + 0x44) + unaff_ESI));
  }
  else {
    uVar2 = 0;
  }
  if ((uVar2 != 0) && (*(int *)(iVar1 + 0x70) == 0)) {
    FUN_004017a0(iVar1);
  }
  *(uint *)(iVar1 + 0x70) = uVar2;
  return uVar2;
}


