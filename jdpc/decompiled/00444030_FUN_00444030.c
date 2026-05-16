/*
 * Function: FUN_00444030
 * Entry:    00444030
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD FUN_00444030(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  if (param_1 < DAT_00a14e20) {
    iVar3 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
      hFile = (HANDLE)FUN_00447610(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_004a6220 = 9;
        return 0xffffffff;
      }
      DVar1 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar1 == 0xffffffff) {
        DVar2 = GetLastError();
      }
      else {
        DVar2 = 0;
      }
      if (DVar2 != 0) {
        FUN_00447390(DVar2);
        return 0xffffffff;
      }
      *(byte *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + iVar3) =
           *(byte *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + iVar3) & 0xfd;
      return DVar1;
    }
  }
  _DAT_004a6220 = 9;
  DAT_004a6224 = 0;
  return 0xffffffff;
}


