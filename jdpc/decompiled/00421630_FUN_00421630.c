/*
 * Function: FUN_00421630
 * Entry:    00421630
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00421630(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  
  if (DAT_004a607c != 0) {
    if (DAT_004a6090 == 0) {
      FUN_004216c0();
    }
    iVar2 = param_1;
    if ((param_1 < 2) && (-1 < param_1)) {
      iVar3 = 0;
      (**(code **)(**(int **)(&DAT_0055e1a8)[param_1] + 0x24))
                (*(int **)(&DAT_0055e1a8)[param_1],&param_1);
      while (unaff_EBX == 1) {
        iVar3 = iVar3 + 1;
        if (4 < iVar3) {
          return;
        }
        piVar1 = *(int **)((&DAT_0055e1a8)[iVar2] + iVar3 * 4);
        (**(code **)(*piVar1 + 0x24))(piVar1,&stack0xfffffffc);
      }
      if (iVar3 < 5) {
        piVar1 = *(int **)((&DAT_0055e1a8)[iVar2] + iVar3 * 4);
        (**(code **)(*piVar1 + 0x30))(piVar1,0,0,0);
      }
    }
  }
  return;
}


