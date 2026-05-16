/*
 * Function: FUN_00426270
 * Entry:    00426270
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00426270(int param_1,undefined2 param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    puVar1 = *(ushort **)(param_1 + 0x10);
    while ((iVar3 != 0 && (*(char *)((int)puVar1 + 3) == 'd'))) {
      uVar2 = (uint)*puVar1;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        (&DAT_0053ea92)[(uint)puVar1[5] * 0x18] = param_2;
        iVar3 = iVar3 + -1;
        (&DAT_0053eaa4)[(uint)puVar1[5] * 0xc] = 0x20;
        puVar1 = puVar1 + 8;
      }
    }
  }
  return;
}


