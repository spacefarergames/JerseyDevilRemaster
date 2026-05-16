/*
 * Function: FUN_00408310
 * Entry:    00408310
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00408310(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)DAT_00813a00;
  iVar4 = (int)DAT_00813a02;
  DAT_00813ad8 = (DAT_00813a1e * iVar4 + DAT_00813a1c * iVar3 + DAT_00813a24 * DAT_00813a08 >> 0xc)
                 + DAT_00813a3c;
  if (DAT_00813ad8 < 0) {
    iVar2 = -DAT_00813ad8;
  }
  else {
    iVar2 = DAT_00813ad8 + 1;
  }
  iVar1 = (((DAT_00813a06 * iVar4 + DAT_00813a04 * iVar3 + DAT_00813a0c * DAT_00813a08 >> 0xc) +
           DAT_00813a2c) * DAT_0051d7f0) / iVar2;
  iVar2 = (((DAT_00813a14 * iVar4 + DAT_00813a0e * iVar3 + DAT_00813a16 * DAT_00813a08 >> 0xc) +
           DAT_00813a34) * DAT_0051d7f0) / iVar2;
  DAT_00813ac8 = iVar1;
  DAT_00813ad0 = iVar2;
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  else if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  DAT_00813a70 = (short)iVar1;
  if (iVar2 < -0x8000) {
    DAT_00813a72 = 0x8000;
    return;
  }
  if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  DAT_00813a72 = (short)iVar2;
  return;
}


