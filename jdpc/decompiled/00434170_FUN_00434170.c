/*
 * Function: FUN_00434170
 * Entry:    00434170
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00434170(int param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x60);
  iVar5 = (uint)*(ushort *)(param_2 + 2) * 0x10 + *(int *)(param_2 + 0x30);
  uVar2 = *(undefined2 *)(iVar5 + 0xc);
  param_2._0_1_ = (char)*(undefined2 *)(iVar5 + 0xe) + -1;
  *(undefined2 *)(iVar3 + 0x1a) = *(undefined2 *)(iVar5 + 6);
  *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar5 + 10);
  cVar4 = *(char *)(iVar5 + 8);
  *(char *)(iVar3 + 0x10) = cVar4;
  *(char *)(iVar3 + 0x20) = cVar4;
  cVar1 = *(char *)(iVar5 + 9);
  cVar4 = (char)uVar2 + -1 + cVar4;
  *(char *)(iVar3 + 0x11) = cVar1;
  *(char *)(iVar3 + 0x19) = cVar1;
  *(char *)(iVar3 + 0x18) = cVar4;
  *(char *)(iVar3 + 0x28) = cVar4;
  *(char *)(iVar3 + 0x21) = (char)param_2 + cVar1;
  *(char *)(iVar3 + 0x29) = (char)param_2 + cVar1;
  *(uint *)(iVar3 + 0x2c) = *(byte *)(iVar5 + 2) & 8;
  return;
}


