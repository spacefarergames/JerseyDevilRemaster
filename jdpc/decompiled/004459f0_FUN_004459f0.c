/*
 * Function: FUN_004459f0
 * Entry:    004459f0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004459f0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < DAT_00a14e20) &&
     ((*(byte *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    iVar1 = FUN_00444030(param_1,0,1);
    if (iVar1 == -1) {
      return -1;
    }
    iVar2 = FUN_00444030(param_1,0,2);
    if (iVar1 != iVar2) {
      FUN_00444030(param_1,iVar1,0);
    }
    return iVar2;
  }
  _DAT_004a6220 = 9;
  DAT_004a6224 = 0;
  return -1;
}


