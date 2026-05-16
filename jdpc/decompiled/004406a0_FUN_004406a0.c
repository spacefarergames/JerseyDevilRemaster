/*
 * Function: FUN_004406a0
 * Entry:    004406a0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004406a0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_004d18e4 < 1) {
    return 0;
  }
  pbVar1 = (byte *)(DAT_004e19f8 + 4);
  while ((*(int *)(pbVar1 + 8) != param_1 || ((*pbVar1 & 1) != 0))) {
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 0x4c;
    if (DAT_004d18e4 <= iVar2) {
      return 0;
    }
  }
  return DAT_004e19f8 + iVar2 * 0x4c;
}


