/*
 * Function: FUN_00444c10
 * Entry:    00444c10
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00444c10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(uint *)(param_1 + 0xc) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0xffffffff;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x83) != 0) {
    uVar2 = FUN_004478b0(param_1);
    FUN_004488d0(param_1);
    iVar1 = FUN_004456f0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00443fe0(*(int *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar2;
}


