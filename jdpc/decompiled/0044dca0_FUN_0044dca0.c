/*
 * Function: FUN_0044dca0
 * Entry:    0044dca0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044dca0(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  LPCWSTR lpWideCharStr;
  BOOL local_4;
  
  uVar4 = param_3;
  lpWideCharStr = param_2;
  uVar2 = 0;
  local_4 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    return uVar2;
  }
  if (param_1 == (LPSTR)0x0) {
    if (DAT_004a6638 == 0) {
      uVar4 = FUN_0044ee10(param_2);
      return uVar4;
    }
    iVar3 = WideCharToMultiByte(DAT_004a6648,0x220,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_4);
    if ((iVar3 != 0) && (local_4 == 0)) {
      return iVar3 - 1;
    }
  }
  else if (DAT_004a6638 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    while ((ushort)*param_2 < 0x100) {
      param_1[uVar2] = (CHAR)*param_2;
      if (*param_2 == L'\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
      if (param_3 <= uVar2) {
        return uVar2;
      }
    }
  }
  else if (DAT_004a4f54 == 1) {
    iVar3 = 0;
    if (param_3 != 0) {
      iVar3 = FUN_0044de90(param_2,param_3);
    }
    uVar4 = WideCharToMultiByte(DAT_004a6648,0x220,lpWideCharStr,iVar3,param_1,iVar3,(LPCSTR)0x0,
                                &local_4);
    if ((uVar4 != 0) && (local_4 == 0)) {
      if (param_1[uVar4 - 1] == '\0') {
        return uVar4 - 1;
      }
      return uVar4;
    }
  }
  else {
    iVar3 = WideCharToMultiByte(DAT_004a6648,0x220,param_2,-1,param_1,param_3,(LPCSTR)0x0,&local_4);
    if (iVar3 == 0) {
      if ((local_4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
        uVar2 = 0;
        if (uVar4 != 0) {
          do {
            iVar3 = WideCharToMultiByte(DAT_004a6648,0,lpWideCharStr,1,(LPSTR)&param_2,DAT_004a4f54,
                                        (LPCSTR)0x0,&local_4);
            if (iVar3 == 0) {
              _DAT_004a6220 = 0x2a;
              return 0xffffffff;
            }
            if (local_4 != 0) {
              _DAT_004a6220 = 0x2a;
              return 0xffffffff;
            }
            if (uVar4 < iVar3 + uVar2) {
              return uVar2;
            }
            iVar6 = 0;
            if (0 < iVar3) {
              do {
                cVar1 = *(char *)((int)&param_2 + iVar6);
                param_1[uVar2] = cVar1;
                if (cVar1 == '\0') {
                  return uVar2;
                }
                iVar6 = iVar6 + 1;
                uVar2 = uVar2 + 1;
              } while (iVar6 < iVar3);
            }
            lpWideCharStr = lpWideCharStr + 1;
          } while (uVar2 < uVar4);
        }
        return uVar2;
      }
    }
    else if (local_4 == 0) {
      return iVar3 - 1;
    }
  }
  _DAT_004a6220 = 0x2a;
  return 0xffffffff;
}


