/*
 * Function: FUN_0042b350
 * Entry:    0042b350
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042b350(void)

{
  BOOL BVar1;
  _MEMORYSTATUS local_d8;
  _union_530 local_b8 [5];
  undefined4 local_a4;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo((LPSYSTEM_INFO)&local_b8[0].s);
  DAT_004a6204 = local_b8[0].dwOemId & 0xffff;
  DAT_004a0c04 = local_a4;
  local_94.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_94);
  if (BVar1 != 0) {
    DAT_004a61cc = local_94.dwMinorVersion;
    DAT_004a61d0 = local_94.dwMajorVersion;
    DAT_004a61d4 = local_94.dwBuildNumber;
    if (local_94.dwPlatformId == 0) {
      DAT_004a0bf8 = 3;
    }
    else if (local_94.dwPlatformId == 1) {
      DAT_004a0bf8 = 1;
    }
    else {
      DAT_004a0bf8 = 2;
    }
  }
  DAT_004a61e8 = 1;
  local_d8.dwLength = 0x20;
  GlobalMemoryStatus(&local_d8);
  DAT_004a61d8 = local_d8.dwTotalPhys;
  DAT_004a61dc = local_d8.dwAvailPhys;
  DAT_004a61e0 = local_d8.dwTotalVirtual;
  DAT_004a61e4 = local_d8.dwAvailVirtual;
  return;
}


