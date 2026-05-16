/*
 * Function: FUN_00429e80
 * Entry:    00429e80
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00429e80(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  iVar1 = *(int *)((DAT_004a0a30 & 0xff) * 4 + 0x4e1f3c);
  while (iVar1 == 0) {
    bVar3 = (char)DAT_004a0a30 - 1;
    uVar2 = DAT_004a0a30 >> 8;
    DAT_004a0a30 = CONCAT31((int3)uVar2,bVar3);
    iVar1 = *(int *)((uint)bVar3 * 4 + 0x4e1f3c);
  }
  *(undefined4 *)((DAT_004a0a30 & 0xff) * 4 + 0x4e1f3c) =
       *(undefined4 *)(*(int *)((DAT_004a0a30 & 0xff) * 4 + 0x4e1f3c) + 0x40);
  return;
}


