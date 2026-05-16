/*
 * Function: FUN_004456f0
 * Entry:    004456f0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004456f0(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00a14e20 <= param_1) {
    _DAT_004a6220 = 9;
    DAT_004a6224 = 0;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_004a6220 = 9;
    DAT_004a6224 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_00447610(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_00447610(2);
      iVar2 = FUN_00447610(1);
      if (iVar2 == iVar1) goto LAB_00445777;
    }
    hObject = (HANDLE)FUN_00447610(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00445779;
    }
  }
LAB_00445777:
  DVar4 = 0;
LAB_00445779:
  FUN_00447570(param_1);
  *(undefined1 *)((&DAT_00a14d20)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_00447390(DVar4);
  return 0xffffffff;
}


