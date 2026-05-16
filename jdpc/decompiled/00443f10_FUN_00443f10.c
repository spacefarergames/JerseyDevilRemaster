/*
 * Function: FUN_00443f10
 * Entry:    00443f10
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00443f10(int param_1)

{
  int iVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if ((dwBytes <= DAT_004a4bb4) && (iVar1 = FUN_00446920(param_1 + 0xfU >> 4), iVar1 != 0)) {
    return;
  }
  HeapAlloc(DAT_00a14e24,0,dwBytes);
  return;
}


