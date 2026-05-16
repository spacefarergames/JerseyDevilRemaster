/*
 * Function: FUN_00439090
 * Entry:    00439090
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00439090(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x100;
      return;
    }
    iVar1 = FUN_00440840();
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x5c) + 8) + 10) & 2) != 0) {
      *(ushort *)(iVar1 + 8) = *(ushort *)(iVar1 + 8) | 2;
      FUN_00410940(0,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x10));
      *(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x10) + 0x48) = param_1 + 100;
      *(int *)(param_1 + 0xa8) = param_1 + 0xb4;
      *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x14) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x5c) + 8) + 0x48);
    }
  }
  FUN_00432e90(param_1);
  return;
}


