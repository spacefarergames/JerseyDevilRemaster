/*
 * Function: FUN_00447570
 * Entry:    00447570
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00447570(uint param_1)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00a14e20) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (((*(byte *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + iVar1) & 1) != 0) &&
       (*(int *)((&DAT_00a14d20)[(int)param_1 >> 5] + iVar1) != -1)) {
      if (DAT_004a2b84 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004475da;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004475da:
      *(undefined4 *)((&DAT_00a14d20)[(int)param_1 >> 5] + iVar1) = 0xffffffff;
      return 0;
    }
  }
  _DAT_004a6220 = 9;
  DAT_004a6224 = 0;
  return 0xffffffff;
}


