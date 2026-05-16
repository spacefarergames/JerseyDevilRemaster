/*
 * Function: FUN_0044bbe0
 * Entry:    0044bbe0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0044bbe0(uint param_1,uint param_2,byte param_3)

{
  if ((*(byte *)((int)&DAT_004a64c0 + (param_1 & 0xff) + 1) & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_004a4d52 + (param_1 & 0xff) * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}


