/*
 * Function: FUN_0043c9b0
 * Entry:    0043c9b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0043c9b0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar2 = FUN_00440840();
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(int *)(param_1 + 0xa8) = param_1 + 0xb4;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 8) + 0x48) + 0x10);
    *(uint *)(iVar2 + 0xc) = (*(ushort *)(iVar3 + 6) & 0xffffff80) << 0x11;
    *(uint *)(*(int *)(param_1 + 0x60) + 0xc) =
         *(uint *)(*(int *)(param_1 + 0x60) + 0xc) | 0x8000000;
    *(ushort *)(*(int *)(param_1 + 0x60) + 0x1a) = *(byte *)(iVar3 + 6) & 0x1f;
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 0x14) = *(undefined2 *)(iVar3 + 0xc);
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 0x16) = *(undefined2 *)(iVar3 + 0xe);
    *(ushort *)(*(int *)(param_1 + 0x60) + 0x22) = *(byte *)(iVar3 + 10) & 0x3f;
    *(ushort *)(*(int *)(param_1 + 0x60) + 0x2a) = *(ushort *)(iVar3 + 10) >> 6;
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 0x12) = *(undefined2 *)(iVar3 + 10);
    *(undefined1 *)(*(int *)(param_1 + 0x60) + 0x10) = *(undefined1 *)(iVar3 + 8);
    *(undefined1 *)(*(int *)(param_1 + 0x60) + 0x11) = *(undefined1 *)(iVar3 + 9);
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 8) = 0x10;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  if (0x200 < *(short *)(*(int *)(param_1 + 0xe0) + 0xe)) {
    iVar3 = DAT_004d22e0 - DAT_004d22ec;
    *(int *)(param_1 + 0xcc) = iVar3;
    iVar2 = DAT_004d22e8 - DAT_004d22f4;
    *(int *)(param_1 + 0xd4) = iVar2;
    iVar2 = FUN_00407270(iVar3,iVar2);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1000;
    }
    uVar1 = (ushort)((iVar2 << 0xc) >> 0x1f);
    *(ushort *)(param_1 + 0xc6) =
         (((ushort)((iVar2 << 0xc) >> 0xc) ^ uVar1) - uVar1 & 0x1ff ^ uVar1) - uVar1;
    return;
  }
  *(undefined2 *)(param_1 + 0xc6) = 0;
  return;
}


