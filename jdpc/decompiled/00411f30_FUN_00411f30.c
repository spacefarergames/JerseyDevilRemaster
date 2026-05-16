/*
 * Function: FUN_00411f30
 * Entry:    00411f30
 * Warning:  Decompiled pseudocode, not original source.
 */


DWORD FUN_00411f30(LPCSTR param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  FARPROC pFVar3;
  undefined **ppuVar4;
  
  DAT_0066b64c = LoadLibraryA(param_1);
  if (DAT_0066b64c != (HMODULE)0x0) {
    ppuVar4 = &PTR_DAT_0045d080;
    do {
      pFVar3 = GetProcAddress(DAT_0066b64c,ppuVar4[1]);
      puVar1 = (undefined4 *)*ppuVar4;
      ppuVar4 = ppuVar4 + 2;
      *puVar1 = pFVar3;
    } while (ppuVar4 <= (undefined **)((int)&PTR_s_wglUseFontOutlinesW_0045dbbc + 3));
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00411f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}


