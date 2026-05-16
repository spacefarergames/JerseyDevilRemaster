/*
 * Function: FUN_00408530
 * Entry:    00408530
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00408530(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = (char *)(DAT_008102d4 + 8);
  while (((*(int *)(pcVar1 + -8) != param_1 || (*(int *)(pcVar1 + -4) != param_2)) ||
         (*pcVar1 == '\0'))) {
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0xc;
    if (5 < iVar2) {
      return 0;
    }
  }
  return 1;
}


