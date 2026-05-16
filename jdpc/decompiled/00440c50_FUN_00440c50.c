/*
 * Function: FUN_00440c50
 * Entry:    00440c50
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00440c50(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if ((DAT_004deba0 == 0) && (DAT_004d18e0 == '\0')) {
    uVar2 = 0;
    uVar1 = *(ushort *)(param_1 + 4);
    if ((uVar1 & 0x10) != 0) {
      uVar2 = *(ushort *)(param_1 + 0x2a);
    }
    if ((uVar1 & 0x40) != 0) {
      uVar2 = uVar2 | *(ushort *)(param_1 + 0x26);
    }
    if ((uVar1 & 0x80) != 0) {
      uVar2 = uVar2 | *(ushort *)(param_1 + 0x2c);
    }
    if ((uVar1 & 0x20) != 0) {
      uVar2 = uVar2 | *(ushort *)(param_1 + 0x28);
    }
    *(ushort *)(param_1 + 4) = uVar1 & 0xff0f | uVar2;
  }
  return;
}


