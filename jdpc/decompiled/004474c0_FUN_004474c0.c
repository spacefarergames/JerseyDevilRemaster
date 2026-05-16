/*
 * Function: FUN_004474c0
 * Entry:    004474c0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004474c0(uint param_1,HANDLE param_2)

{
  int iVar1;
  
  if (param_1 < DAT_00a14e20) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_00a14d20)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_004a2b84 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else {
          if (param_1 == 1) {
            SetStdHandle(0xfffffff5,param_2);
            *(HANDLE *)(DAT_00a14d20 + 8) = param_2;
            return 0;
          }
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,param_2);
            *(HANDLE *)(DAT_00a14d20 + 0x10) = param_2;
            return 0;
          }
        }
      }
      *(HANDLE *)((&DAT_00a14d20)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  _DAT_004a6220 = 9;
  DAT_004a6224 = 0;
  return 0xffffffff;
}


