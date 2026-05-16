/*
 * Function: FUN_0044dac0
 * Entry:    0044dac0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044dac0(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_004a6638 == 0) {
        if (param_1 == (LPWSTR)0x0) {
          return 1;
        }
        *param_1 = (ushort)bVar1;
        return 1;
      }
      if ((PTR_DAT_004a4d48[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_004a6648,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
        _DAT_004a6220 = 0x2a;
        return 0xffffffff;
      }
      if (((1 < (int)DAT_004a4f54) && ((int)DAT_004a4f54 <= (int)param_3)) &&
         (iVar2 = MultiByteToWideChar(DAT_004a6648,9,(LPCSTR)param_2,DAT_004a4f54,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
        return DAT_004a4f54;
      }
      if (param_3 < DAT_004a4f54) {
        _DAT_004a6220 = 0x2a;
        return 0xffffffff;
      }
      if (param_2[1] != 0) {
        return DAT_004a4f54;
      }
      _DAT_004a6220 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
      return 0;
    }
  }
  return 0;
}


