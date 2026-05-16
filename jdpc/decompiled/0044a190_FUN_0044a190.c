/*
 * Function: FUN_0044a190
 * Entry:    0044a190
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0044a190(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_24 [8];
  int local_1c;
  int local_14;
  uint local_10;
  int local_8;
  
  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    return -1;
  }
  param_3 = *(int *)(&DAT_004a5474 + param_2 * 4) + param_3;
  if (((uVar3 & 3) == 0) && (2 < param_2)) {
    param_3 = param_3 + 1;
  }
  FUN_00449950();
  local_1c = param_4;
  local_14 = param_2 + -1;
  iVar1 = param_6 + (param_5 +
                    (param_4 + ((param_1 + -0x76d >> 2) + uVar3 * 0x16d + param_3) * 0x18) * 0x3c) *
                    0x3c + 0x7c558180 + DAT_004a4f70;
  if (param_7 != 1) {
    if (param_7 != -1) {
      return iVar1;
    }
    if (DAT_004a4f74 == 0) {
      return iVar1;
    }
    local_10 = uVar3;
    local_8 = param_3;
    iVar2 = FUN_00449c20(local_24);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  return iVar1 + DAT_004a4f78;
}


