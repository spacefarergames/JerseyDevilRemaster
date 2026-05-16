/*
 * Function: FUN_00410870
 * Entry:    00410870
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00410870(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1 + 8;
  iVar3 = (int)*(short *)(param_1 + 4);
  if (0 < iVar3) {
    piVar2 = (int *)(param_1 + 0x18);
    do {
      piVar2[-4] = piVar2[-4] + iVar1;
      piVar2[-2] = piVar2[-2] + iVar1;
      iVar3 = iVar3 + -1;
      *piVar2 = *piVar2 + iVar1;
      piVar2 = piVar2 + 7;
    } while (iVar3 != 0);
  }
  return;
}


