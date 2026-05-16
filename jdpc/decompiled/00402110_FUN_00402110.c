/*
 * Function: FUN_00402110
 * Entry:    00402110
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00402110(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  
  (*DAT_00a14d00)();
  iVar2 = DAT_004a5cb0;
  if (DAT_004a5cb0 != 0) {
    bVar1 = *(byte *)(DAT_004a5cb0 + 3);
    bVar3 = ~*(byte *)(DAT_004a5cb0 + 2);
    *(byte *)(DAT_004a5cb0 + 2) = bVar3;
    *(byte *)(iVar2 + 3) = ~bVar1;
    if ((&DAT_00a14c00)[DAT_0053e892] != '\0') {
      *(byte *)(iVar2 + 2) = bVar3 | 0x10;
    }
    if ((&DAT_00a14c00)[DAT_0053e894 & 0xff] != '\0') {
      *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 0x20;
    }
    if ((&DAT_00a14c00)[DAT_0053e893] != '\0') {
      *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 0x40;
    }
    if ((&DAT_00a14c00)[DAT_0053e894 >> 8 & 0xff] != '\0') {
      *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 0x80;
    }
    if ((&DAT_00a14c00)[DAT_0053e8a0 & 0xff] != '\0') {
      *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 1;
    }
    if ((&DAT_00a14c00)[DAT_0053e8a0 >> 8 & 0xff] != '\0') {
      *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 8;
    }
    if ((&DAT_00a14c00)[DAT_0053e894 >> 0x10 & 0xff] != '\0') {
      *(byte *)(iVar2 + 3) = ~bVar1 | 1;
    }
    if ((&DAT_00a14c00)[DAT_0053e894 >> 0x18] != '\0') {
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 2;
    }
    if ((&DAT_00a14c00)[DAT_0053e898 & 0xff] != '\0') {
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 4;
    }
    if ((&DAT_00a14c00)[DAT_0053e898 >> 8 & 0xff] != '\0') {
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 8;
    }
    if ((&DAT_00a14c00)[DAT_0053e898 >> 0x10 & 0xff] != '\0') {
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 0x10;
    }
    if ((&DAT_00a14c00)[DAT_0053e898 >> 0x18] != '\0') {
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 0x20;
    }
    if ((&DAT_00a14c00)[DAT_0053e89c & 0xff] != '\0') {
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 0x40;
    }
    if ((&DAT_00a14c00)[DAT_0053e89c >> 8 & 0xff] != '\0') {
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 0x80;
    }
    if (bVar3 != *(byte *)(iVar2 + 2)) {
      *(undefined1 *)(iVar2 + 1) = 0x41;
    }
    *(byte *)(iVar2 + 2) = ~*(byte *)(iVar2 + 2);
    *(byte *)(iVar2 + 3) = ~*(byte *)(iVar2 + 3);
  }
  return;
}


