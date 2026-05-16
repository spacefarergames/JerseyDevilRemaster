/*
 * Function: FUN_00423f70
 * Entry:    00423f70
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4
FUN_00423f70(uint param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            char *param_7)

{
  short *psVar1;
  uint uVar2;
  
  if (param_6 == 0) {
    param_2 = (param_3 >> 1) * param_2;
    if ((param_1 & 1) == 0) {
      uVar2 = *(byte *)(param_2 + ((int)param_1 >> 1) + param_5) & 0xf;
    }
    else {
      uVar2 = (uint)(*(byte *)(param_2 + ((int)param_1 >> 1) + param_5) >> 4);
    }
  }
  else {
    if (param_6 != 1) {
      if (param_6 != 2) {
        return 0;
      }
      param_5 = param_5 + param_3 * 2 * param_2;
      psVar1 = (short *)(param_5 + param_1 * 2);
      *param_7 = (char)*psVar1 << 3;
      param_7[1] = (char)(CONCAT22((short)((uint)param_5 >> 0x10),*psVar1) >> 5) << 3;
      param_7[2] = (char)(*psVar1 >> 10) << 3;
      param_7[3] = -1;
      if (*psVar1 == 0) {
        param_7[3] = '\0';
        return 1;
      }
      param_7[3] = -1;
      return 1;
    }
    uVar2 = (uint)*(byte *)(param_3 * param_2 + param_5 + param_1);
  }
  *param_7 = (&DAT_005579a0)[uVar2 * 4];
  param_7[1] = (&DAT_005579a1)[uVar2 * 4];
  param_7[2] = (&DAT_005579a2)[uVar2 * 4];
  param_7[3] = (&DAT_005579a3)[uVar2 * 4];
  return 1;
}


