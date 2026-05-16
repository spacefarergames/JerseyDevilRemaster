/*
 * Function: FUN_0042b5e0
 * Entry:    0042b5e0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_0042b5e0(void)

{
  byte bVar1;
  DWORD DVar2;
  
  if ((DAT_004a0bf8 != 2) && (DAT_004a0bf8 != 1)) {
    out(0x70,0);
    bVar1 = in(0x71);
    return (uint)bVar1;
  }
  DVar2 = GetTickCount();
  return DVar2 / 1000;
}


