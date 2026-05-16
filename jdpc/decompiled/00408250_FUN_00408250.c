/*
 * Function: FUN_00408250
 * Entry:    00408250
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408250(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)DAT_00813a02;
  iVar2 = (int)DAT_00813a00;
  _DAT_00813a48 = DAT_00813a06 * iVar1 + DAT_00813a04 * iVar2 + DAT_00813a0c * DAT_00813a08 >> 0xc;
  _DAT_00813a50 = DAT_00813a14 * iVar1 + DAT_00813a0e * iVar2 + DAT_00813a16 * DAT_00813a08 >> 0xc;
  _DAT_00813a58 = DAT_00813a1e * iVar1 + DAT_00813a1c * iVar2 + DAT_00813a24 * DAT_00813a08 >> 0xc;
  return;
}


