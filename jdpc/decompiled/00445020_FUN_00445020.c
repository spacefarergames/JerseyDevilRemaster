/*
 * Function: FUN_00445020
 * Entry:    00445020
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00445020(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  FUN_004478b0(param_1);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffcf;
  if (uVar1 == 0xffffffff) {
    puVar2 = &DAT_004a4d38;
  }
  else {
    puVar2 = (undefined *)((&DAT_00a14d20)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 8);
  }
  puVar2[4] = puVar2[4] & 0xfd;
  if ((*(uint *)(param_1 + 0xc) & 0x80) != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffc;
  }
  FUN_00444030(uVar1,0,0);
  return;
}


