/*
 * Function: FUN_0042b290
 * Entry:    0042b290
 * Warning:  Decompiled pseudocode, not original source.
 */


LSTATUS FUN_0042b290(void)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_c;
  LSTATUS local_8 [2];
  
  local_8[0] = RegOpenKeyExA((HKEY)0x80000002,s_HARDWARE_DESCRIPTION_System_Cent_004a0c40,0,0x20019,
                             &local_c);
  if (local_8[0] == 0) {
    local_8[1] = 4;
    LVar1 = RegQueryValueExA(local_c,&DAT_004a0c38,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_8,
                             (LPDWORD)(local_8 + 1));
    iVar2 = 0;
    if (LVar1 != 0) {
      LVar1 = RegQueryValueExA(local_c,&DAT_004a0c30,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_8,
                               (LPDWORD)(local_8 + 1));
      iVar2 = 0;
      if (LVar1 != 0) {
        iVar2 = RegQueryValueExA(local_c,&DAT_004a0c28,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_8,
                                 (LPDWORD)(local_8 + 1));
      }
    }
    RegCloseKey(local_c);
    if (iVar2 == 0) {
      return local_8[0];
    }
  }
  return 0;
}


