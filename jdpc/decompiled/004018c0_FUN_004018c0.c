/*
 * Function: FUN_004018c0
 * Entry:    004018c0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_004018c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint unaff_EBX;
  uint unaff_ESI;
  uint uVar5;
  undefined4 *local_4;
  
  iVar1 = param_1;
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))(*(int **)(param_1 + 0x6c),&param_1,&local_4);
  uVar2 = unaff_EBX;
  if (unaff_EBX < *(uint *)(iVar1 + 0x40)) {
    uVar2 = *(int *)(iVar1 + 0x5c) + unaff_EBX;
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
  }
  if (*(int *)(iVar1 + 0x78) == 0) {
    uVar5 = 0;
    *local_4 = 0;
    uVar4 = *(uint *)(iVar1 + 0x3c);
    if (uVar4 < *(uint *)(iVar1 + 0x38)) {
      uVar4 = uVar4 + *(int *)(iVar1 + 0x5c);
    }
    if ((uVar2 < *(uint *)(iVar1 + 0x38)) || (uVar4 < uVar2)) {
      uVar2 = uVar2 - *(int *)(iVar1 + 0x40);
      if (uVar2 < *(uint *)(iVar1 + 0x68)) {
        uVar2 = 0;
      }
      uVar5 = uVar2 / *(ushort *)(iVar1 + 0x30);
    }
    else {
      if (*(int *)(iVar1 + 0x74) != 0) {
        FUN_004017a0(iVar1);
        *local_4 = 1;
      }
      iVar3 = FUN_004017c0(iVar1);
      if (iVar3 == 0) {
        uVar5 = *(uint *)(iVar1 + 0x60) / (uint)*(ushort *)(iVar1 + 0x30);
        (**(code **)(**(int **)(iVar1 + 0x6c) + 0x34))
                  (*(int **)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x38));
        unaff_EBX = unaff_ESI;
        if ((unaff_ESI < *(uint *)(iVar1 + 0x40)) && (unaff_ESI < *(uint *)(iVar1 + 0x38))) {
          *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
        }
      }
    }
    if (uVar5 != 0) {
      *(uint *)(iVar1 + 0x40) = unaff_EBX;
    }
    return uVar5;
  }
  return 0;
}


