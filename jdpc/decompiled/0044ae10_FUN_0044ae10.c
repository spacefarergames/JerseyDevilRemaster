/*
 * Function: FUN_0044ae10
 * Entry:    0044ae10
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0044ae10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_004a5050;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x4a5054);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x4a5128);
  return 0;
}


