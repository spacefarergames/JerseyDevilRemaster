/*
 * Function: FUN_004346a0
 * Entry:    004346a0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004346a0(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (uint)*(ushort *)(param_2 + 2) * 0x10 + *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_1 + 0x60);
  uVar2 = *(ushort *)(iVar7 + 6);
  iVar6 = 2 - (uVar2 >> 7 & 3);
  uVar3 = *(ushort *)(iVar7 + 0xc);
  uVar4 = *(undefined2 *)(iVar7 + 0xe);
  bVar1 = *(byte *)(iVar7 + 9);
  *(ushort *)(iVar5 + 0xc) =
       (ushort)(*(byte *)(iVar7 + 8) >> ((byte)iVar6 & 0x1f)) + (uVar2 & 0xf) * 0x40;
  *(ushort *)(iVar5 + 0x1c) = uVar3 >> ((byte)iVar6 & 0x1f);
  *(ushort *)(iVar5 + 0xe) = (ushort)bVar1 + (uVar2 & 0x10) * 0x10;
  *(undefined2 *)(iVar5 + 0x1e) = uVar4;
  *(undefined2 *)(iVar5 + 0x14) = *(undefined2 *)(param_2 + 0x38);
  *(undefined2 *)(iVar5 + 0x16) = *(undefined2 *)(param_2 + 0x3a);
  *(ushort *)(iVar5 + 0x10) = (*(byte *)(iVar7 + 10) & 0x3f) << 4;
  *(ushort *)(iVar5 + 0x12) = *(ushort *)(iVar7 + 10) >> 6;
  *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar7 + 10);
  *(undefined2 *)(iVar5 + 0x18) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined2 *)(iVar5 + 0x1a) = *(undefined2 *)(param_2 + 0x3e);
  if (iVar6 == 2) {
    *(undefined2 *)(iVar5 + 0x20) = 0x10;
    *(undefined2 *)(iVar5 + 0x22) = 1;
    return;
  }
  if (iVar6 == 1) {
    *(undefined2 *)(iVar5 + 0x20) = 0x100;
    *(undefined2 *)(iVar5 + 0x22) = 1;
    return;
  }
  *(undefined2 *)(iVar5 + 0x20) = 0;
  *(undefined2 *)(iVar5 + 0x22) = 0;
  return;
}


