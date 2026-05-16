/*
 * Function: FUN_004400c0
 * Entry:    004400c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004400c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfffff7eb;
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xac) = 0;
    *(int *)(*(int *)(param_1 + 0x54) + 0xa8) = *(int *)(param_1 + 0x54) + 0xb4;
    *(undefined2 *)(*(int *)(param_1 + 0x54) + 0x20) = *(undefined2 *)(param_1 + 0x20);
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x58) = 0;
    FUN_00432e90(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (param_1 == DAT_004d237c) {
    DAT_004d237c = *(int *)(param_1 + 0x10);
  }
  else {
    iVar2 = DAT_004d237c;
    if (DAT_004d237c != 0) {
      do {
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar1 == param_1) break;
        iVar2 = iVar1;
      } while (iVar1 != 0);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
      }
    }
  }
  FUN_004407e0(param_1 + 0x60);
  DAT_004d18fc = FUN_00440790(DAT_004d18fc,param_1);
  return;
}


