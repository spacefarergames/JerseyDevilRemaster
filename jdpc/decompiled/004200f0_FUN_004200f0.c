/*
 * Function: FUN_004200f0
 * Entry:    004200f0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004200f0(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  ulonglong local_8;
  
  uVar3 = (uint)param_1[1] | (*param_1 & 0x7f) << 8;
  iVar1 = CONCAT31(CONCAT21(CONCAT11(param_1[2],param_1[3]),param_1[4]),param_1[5]);
  iVar2 = CONCAT31(CONCAT21(CONCAT11(param_1[6],param_1[7]),param_1[8]),param_1[9]);
  if (((uVar3 == 0) && (iVar1 == 0)) && (iVar2 == 0)) {
    fVar4 = (float10)0.0;
  }
  else if (uVar3 == 0x7fff) {
    fVar4 = (float10)_DAT_004a28d0;
  }
  else {
    local_8 = (ulonglong)(iVar1 + 0x80000000);
    fVar5 = (float10)FUN_00445490((double)local_8 - -2147483648.0,uVar3 - 0x401e);
    local_8 = (ulonglong)(iVar2 + 0x80000000);
    fVar4 = (float10)FUN_00445490((double)local_8 - -2147483648.0,uVar3 - 0x403e);
    fVar4 = fVar4 + (float10)(double)fVar5;
  }
  if ((*param_1 & 0x80) != 0) {
    fVar4 = -fVar4;
  }
  return fVar4;
}


