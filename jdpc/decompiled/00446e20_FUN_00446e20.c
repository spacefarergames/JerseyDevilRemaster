/*
 * Function: FUN_00446e20
 * Entry:    00446e20
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00446e20(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_00446dd0();
  return;
}


