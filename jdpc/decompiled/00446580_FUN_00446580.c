/*
 * Function: FUN_00446580
 * Entry:    00446580
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00446580(void)

{
  int iVar1;
  
  DAT_00a14e24 = HeapCreate(1,0x1000,0);
  if (DAT_00a14e24 == (HANDLE)0x0) {
    return 0;
  }
  iVar1 = FUN_004465c0();
  if (iVar1 == 0) {
    HeapDestroy(DAT_00a14e24);
    return 0;
  }
  return 1;
}


