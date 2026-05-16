/*
 * Function: FUN_00411fb0
 * Entry:    00411fb0
 * Warning:  Decompiled pseudocode, not original source.
 */


DWORD FUN_00411fb0(void)

{
  DWORD DVar1;
  int iVar2;
  
  DAT_004a5eec = (*DAT_0081348c)(DAT_004a5ee8);
  if (DAT_004a5eec == 0) {
                    /* WARNING: Could not recover jumptable at 0x00411fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  iVar2 = (*DAT_008103ec)(DAT_004a5ee8,DAT_004a5eec);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00411fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar1 = GetLastError();
    return DVar1;
  }
  return 0;
}


