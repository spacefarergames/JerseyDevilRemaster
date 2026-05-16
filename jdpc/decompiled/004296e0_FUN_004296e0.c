/*
 * Function: FUN_004296e0
 * Entry:    004296e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004296e0(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0xff;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  for (; uVar3 <= param_1[1]; uVar3 = uVar3 + 1) {
    uVar1 = *(uint *)(PTR_DAT_004a0a24 + uVar3 * 4);
    bVar2 = (char)(uVar1 >> 10) << 3;
    if (*(byte *)((int)param_1 + 0x11) < bVar2) {
      *(byte *)((int)param_1 + 0x11) = bVar2;
    }
    if (bVar2 < (byte)param_1[4]) {
      *(byte *)(param_1 + 4) = bVar2;
    }
    bVar2 = (char)(uVar1 >> 5) << 3;
    if (*(byte *)((int)param_1 + 0x13) < bVar2) {
      *(byte *)((int)param_1 + 0x13) = bVar2;
    }
    if (bVar2 < *(byte *)((int)param_1 + 0x12)) {
      *(byte *)((int)param_1 + 0x12) = bVar2;
    }
    bVar2 = (char)uVar1 << 3;
    if (*(byte *)((int)param_1 + 0x15) < bVar2) {
      *(byte *)((int)param_1 + 0x15) = bVar2;
    }
    if (bVar2 < (byte)param_1[5]) {
      *(byte *)(param_1 + 5) = bVar2;
    }
  }
  return;
}


