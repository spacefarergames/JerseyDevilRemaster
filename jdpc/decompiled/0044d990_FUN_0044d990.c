/*
 * Function: FUN_0044d990
 * Entry:    0044d990
 * Warning:  Decompiled pseudocode, not original source.
 */


BOOL FUN_0044d990(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_004a6628 == 0) {
    BVar1 = GetStringTypeA(0,1,&DAT_004a5e84,1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeW(1,L"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_004a6628 = 1;
    }
    else {
      DAT_004a6628 = 2;
    }
  }
  if (DAT_004a6628 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_004a6638;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_004a6628;
  if (DAT_004a6628 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_004a6648;
    }
    iVar2 = MultiByteToWideChar(param_5,9,param_2,param_3,(LPWSTR)0x0,0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_0044b920(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_00443fe0(lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_00443fe0(lpWideCharStr);
  }
  return param_6;
}


