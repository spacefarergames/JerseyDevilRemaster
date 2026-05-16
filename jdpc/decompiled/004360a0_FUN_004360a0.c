/*
 * Function: FUN_004360a0
 * Entry:    004360a0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004360a0(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  sVar1 = *(short *)(param_1 + 0xf0);
  if (sVar1 < 0x800) {
    uVar2 = *(uint *)(param_1 + 0x14) & 0xfffffff7;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14) | 8;
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  if (sVar1 < 0xc01) {
    if ((uVar2 & 4) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = uVar2 & 0x10;
    }
    if (uVar2 != 0) {
      iVar3 = FUN_004072c0((int)sVar1);
      *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0xf0) + *(short *)(param_1 + 0xee);
      *(short *)(param_1 + 0xf2) = (short)(-(iVar3 * *(short *)(param_1 + 0xec)) >> 0xc);
      return;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0xf2) = 0;
  uVar4 = uVar2 & 0xfffffff6;
  *(uint *)(param_1 + 0x14) = uVar4;
  if ((uVar2 & 2) == 0) {
    *(uint *)(param_1 + 0x14) = uVar4 | 0x200;
  }
  return;
}


