/*
 * Function: FUN_004448a0
 * Entry:    004448a0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004448a0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    if (DAT_004a4f54 < 2) {
      uVar2 = (byte)PTR_DAT_004a4d48[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_00448760(*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar6 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar4 = uVar2, uVar2 == 0x2b)) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = param_1 + 2;
  }
  iVar5 = 0;
  while( true ) {
    if (DAT_004a4f54 < 2) {
      uVar3 = (byte)PTR_DAT_004a4d48[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_00448760(uVar4,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = (uVar4 - 0x30) + iVar5 * 10;
    uVar4 = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar5 = -iVar5;
  }
  return iVar5;
}


