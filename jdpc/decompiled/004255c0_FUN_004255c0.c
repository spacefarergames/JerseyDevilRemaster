/*
 * Function: FUN_004255c0
 * Entry:    004255c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004255c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == 0) break;
    param_1 = param_1 >> 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  if (iVar1 == 0) {
    return;
  }
  FUN_004457d0();
  __ftol();
  return;
}


