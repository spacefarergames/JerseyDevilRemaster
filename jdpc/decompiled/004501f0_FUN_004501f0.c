/*
 * Function: FUN_004501f0
 * Entry:    004501f0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004501f0(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
                UINT param_7)

{
  int iVar1;
  BOOL BVar2;
  BYTE *pBVar3;
  int cchWideChar;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int local_18;
  _cpinfo local_14;
  
  if (DAT_004a6660 == 0) {
    iVar1 = CompareStringA(0,0,&DAT_004a5e84,1,&DAT_004a5e84,1);
    if (iVar1 == 0) {
      iVar1 = CompareStringW(0,0,L"",1,L"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_004a6660 = 1;
    }
    else {
      DAT_004a6660 = 2;
    }
  }
  iVar1 = (int)param_4;
  if (0 < (int)param_4) {
    iVar1 = FUN_0044d960(param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_0044d960(param_5,param_6);
  }
  if (DAT_004a6660 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,iVar1,(PCNZCH)param_5,param_6);
    return iVar1;
  }
  local_18 = DAT_004a6660;
  if (DAT_004a6660 == 1) {
    local_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_004a6648;
    }
    if ((iVar1 == 0) || (param_6 == 0)) {
      if (iVar1 == param_6) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < iVar1) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < iVar1) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    cchWideChar = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,iVar1,(LPWSTR)0x0,0);
    if (cchWideChar == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_00443ea0(cchWideChar * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar1 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,iVar1,lpWideCharStr,cchWideChar);
    if ((((iVar1 != 0) &&
         (iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar1 != 0))
        && (param_4 = (LPWSTR)FUN_00443ea0(iVar1 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar1), iVar4 != 0)) {
      local_18 = CompareStringW(param_1,param_2,lpWideCharStr,cchWideChar,param_4,iVar1);
    }
    FUN_00443fe0(lpWideCharStr);
    FUN_00443fe0(param_4);
  }
  return local_18;
}


