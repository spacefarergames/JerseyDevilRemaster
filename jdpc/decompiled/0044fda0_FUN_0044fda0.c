/*
 * Function: FUN_0044fda0
 * Entry:    0044fda0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0044fda0(void)

{
  LPCWSTR lpWideCharStr;
  int iVar1;
  LPSTR lpMultiByteStr;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_004a6250;
  piVar2 = DAT_004a6250;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  while (((iVar1 = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0),
          iVar1 != 0 && (lpMultiByteStr = (LPSTR)FUN_00443ea0(iVar1), lpMultiByteStr != (LPSTR)0x0))
         && (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                         (LPBOOL)0x0), iVar1 != 0))) {
    FUN_004504c0(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
  }
  return 0xffffffff;
}


