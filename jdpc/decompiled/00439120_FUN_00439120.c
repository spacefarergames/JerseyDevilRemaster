/*
 * Function: FUN_00439120
 * Entry:    00439120
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00439120(int param_1)

{
  short sVar1;
  undefined2 uVar3;
  int iVar2;
  undefined2 extraout_var;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0xe4);
  if (((piVar4 != (int *)0x0) && (DAT_004d13c4 != 0)) &&
     (sVar1 = *(short *)(DAT_004d13c4 + 0x20), iVar2 = DAT_004d13c4, piVar4 != (int *)0x0)) {
    while (uVar3 = (undefined2)((uint)iVar2 >> 0x10), (short)piVar4[1] != sVar1) {
      if ((*piVar4 == 0) && (iVar2 = *(int *)(param_1 + 0x54), iVar2 != 0)) {
        iVar2 = FUN_004400c0(iVar2);
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
      }
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) {
        return;
      }
    }
    if (piVar4 != *(int **)(param_1 + 0xe0)) {
      *(int **)(param_1 + 0xe0) = piVar4;
      uVar3 = 0;
      if (*(int *)(param_1 + 0x54) != 0) {
        FUN_004400c0(*(int *)(param_1 + 0x54));
        *(undefined4 *)(param_1 + 0x54) = 0;
        uVar3 = extraout_var;
      }
    }
    if (*(int *)(param_1 + 0x54) == 0) {
      iVar2 = FUN_004409a0(CONCAT22(uVar3,*(undefined2 *)((int)piVar4 + 6)),0,0);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x54) = iVar2;
        *(int **)(iVar2 + 0xe0) = piVar4;
      }
    }
  }
  return;
}


