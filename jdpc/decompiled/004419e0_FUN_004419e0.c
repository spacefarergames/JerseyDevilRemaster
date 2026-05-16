/*
 * Function: FUN_004419e0
 * Entry:    004419e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004419e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 4) & 2) != 0) && ((*(uint *)(param_1 + 0x14) & 0x1000000) == 0)) {
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0xd4);
    if ((*(int *)(param_1 + 0x58) == 0) || ((*(byte *)(*(int *)(param_1 + 0x58) + 8) & 8) == 0)) {
      *(undefined2 *)(param_3 + 10) = *(undefined2 *)(param_1 + 0x20);
      FUN_00431690((undefined4 *)(param_2 + 0x18),param_3,param_3 + 0x10);
      *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_3 + 10);
      if ((*(byte *)(param_3 + 2) & 8) != 0) {
        iVar1 = 0;
        do {
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          FUN_00431690(param_2 + 0x18,param_3,param_3 + 0x10);
          if ((*(byte *)(param_3 + 2) & 8) == 0) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 3);
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + (int)*(short *)(param_3 + 6);
    }
  }
  return;
}


