/*
 * Function: FUN_0041f350
 * Entry:    0041f350
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041f350(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
  if ((PTR_DAT_0045f810[8] & 2) != 0) {
    iVar1 = *(int *)(param_1 + 0x1c) * iVar2 + *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x24) * iVar2 + *(int *)(param_1 + 0x20);
    if ((((iVar1 < 0) || (iVar2 < 0)) ||
        ((&DAT_0053ea80)[*(int *)PTR_DAT_0045f810 * 0xc] * 0x10000 < iVar1)) ||
       ((&DAT_0053ea84)[*(int *)PTR_DAT_0045f810 * 0xc] * 0x10000 < iVar2)) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 8) = 2;
    }
  }
  return;
}


