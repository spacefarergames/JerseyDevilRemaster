/*
 * Function: FUN_0044ee30
 * Entry:    0044ee30
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0044ee30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004a664c != (FARPROC)0x0) {
LAB_0044ee80:
    if (DAT_004a6650 != (FARPROC)0x0) {
      iVar1 = (*DAT_004a6650)();
    }
    if ((iVar1 != 0) && (DAT_004a6654 != (FARPROC)0x0)) {
      iVar1 = (*DAT_004a6654)(iVar1);
    }
    iVar1 = (*DAT_004a664c)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004a664c = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_004a664c != (FARPROC)0x0) {
      DAT_004a6650 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_004a6654 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_0044ee80;
    }
  }
  return 0;
}


