/*
 * Function: FUN_0044d380
 * Entry:    0044d380
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044d380(LPCSTR param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  HANDLE hFile;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  int iVar5;
  bool bVar6;
  byte local_11;
  uint local_10;
  _SECURITY_ATTRIBUTES local_c;
  
  bVar6 = (param_2 & 0x80) == 0;
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar6) {
    local_11 = 0;
  }
  else {
    local_11 = 0x10;
  }
  local_c.bInheritHandle = (BOOL)bVar6;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_004a6658 != 0x8000)))) {
    local_11 = local_11 | 0x80;
  }
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar1 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar1 != 2) {
      _DAT_004a6220 = 0x16;
      DAT_004a6224 = 0;
      return 0xffffffff;
    }
    local_10 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    DVar4 = 0;
    break;
  default:
    goto switchD_0044d418_caseD_11;
  case 0x20:
    DVar4 = 1;
    break;
  case 0x30:
    DVar4 = 2;
    break;
  case 0x40:
    DVar4 = 3;
  }
  uVar1 = param_2 & 0x700;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      dwCreationDisposition = 4;
      goto LAB_0044d4ab;
    }
    if (uVar1 != 0) {
      _DAT_004a6220 = 0x16;
      DAT_004a6224 = 0;
      return 0xffffffff;
    }
LAB_0044d486:
    dwCreationDisposition = 3;
    goto LAB_0044d4ab;
  }
  if (uVar1 < 0x301) {
    if (uVar1 == 0x300) {
      dwCreationDisposition = 2;
      goto LAB_0044d4ab;
    }
    if (uVar1 != 0x200) {
      _DAT_004a6220 = 0x16;
      DAT_004a6224 = 0;
      return 0xffffffff;
    }
LAB_0044d4a6:
    dwCreationDisposition = 5;
  }
  else {
    if (uVar1 < 0x501) {
      if (uVar1 != 0x500) {
        if (uVar1 != 0x400) {
switchD_0044d418_caseD_11:
          DAT_004a6224 = 0;
          _DAT_004a6220 = 0x16;
          return 0xffffffff;
        }
        goto LAB_0044d486;
      }
    }
    else {
      if (uVar1 == 0x600) goto LAB_0044d4a6;
      if (uVar1 != 0x700) {
        _DAT_004a6220 = 0x16;
        DAT_004a6224 = 0;
        return 0xffffffff;
      }
    }
    dwCreationDisposition = 1;
  }
LAB_0044d4ab:
  dwFlagsAndAttributes = 0x80;
  if (((param_2 & 0x100) != 0) && (((byte)param_4 & ~(byte)DAT_004a6228 & 0x80) == 0)) {
    dwFlagsAndAttributes = 1;
  }
  if ((param_2 & 0x40) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x4000000;
    local_10 = local_10 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
    }
  }
  else {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  uVar1 = FUN_00447400();
  if (uVar1 == 0xffffffff) {
    _DAT_004a6220 = 0x18;
    DAT_004a6224 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,DVar4,&local_c,dwCreationDisposition,dwFlagsAndAttributes,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    FUN_00447390(DVar4);
    return 0xffffffff;
  }
  DVar4 = GetFileType(hFile);
  if (DVar4 != 0) {
    if (DVar4 == 2) {
      local_11 = local_11 | 0x40;
    }
    else if (DVar4 == 3) {
      local_11 = local_11 | 8;
    }
    FUN_004474c0(uVar1,hFile);
    iVar5 = (uVar1 & 0x1f) * 8;
    *(byte *)(iVar5 + 4 + (&DAT_00a14d20)[(int)uVar1 >> 5]) = local_11 | 1;
    if ((((local_11 & 0x48) == 0) && ((local_11 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
      iVar2 = FUN_00444030(uVar1,0xffffffff,2);
      if (iVar2 == -1) {
        if (DAT_004a6224 != 0x83) {
          FUN_004456f0(uVar1);
          return 0xffffffff;
        }
      }
      else {
        param_3 = param_3 & 0xffffff00;
        iVar3 = FUN_004440f0(uVar1,&param_3,1);
        if (((iVar3 == 0) && ((char)param_3 == '\x1a')) &&
           (iVar2 = FUN_0044fbe0(uVar1,iVar2), iVar2 == -1)) {
          FUN_004456f0(uVar1);
          return 0xffffffff;
        }
        iVar2 = FUN_00444030(uVar1,0,0);
        if (iVar2 == -1) {
          FUN_004456f0(uVar1);
          return 0xffffffff;
        }
      }
    }
    if (((local_11 & 0x48) == 0) && ((param_2 & 8) != 0)) {
      *(byte *)(iVar5 + 4 + (&DAT_00a14d20)[(int)uVar1 >> 5]) =
           *(byte *)(iVar5 + 4 + (&DAT_00a14d20)[(int)uVar1 >> 5]) | 0x20;
    }
    return uVar1;
  }
  CloseHandle(hFile);
  DVar4 = GetLastError();
  FUN_00447390(DVar4);
  return 0xffffffff;
}


