/*
 * Function: FUN_004201e0
 * Entry:    004201e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004201e0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = *(undefined1 *)(iVar2 + 1 + param_1);
      *(undefined1 *)(iVar2 + 1 + param_1) = *(undefined1 *)(iVar2 + param_1);
      *(undefined1 *)(iVar2 + param_1) = uVar1;
      iVar2 = iVar2 + 2;
    } while (iVar2 < param_2);
  }
  return;
}


