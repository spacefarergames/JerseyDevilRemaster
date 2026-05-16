/*
 * Function: FUN_004506d0
 * Entry:    004506d0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004506d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_004a6248;
  piVar2 = DAT_004a6248;
  if (iVar1 == 0) {
    return 0;
  }
  while ((iVar1 = FUN_0044fd60(param_1,iVar1,param_2), iVar1 != 0 ||
         ((*(char *)(*piVar2 + param_2) != '=' && (*(char *)(*piVar2 + param_2) != '\0'))))) {
    iVar1 = piVar2[1];
    piVar2 = piVar2 + 1;
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_004a6248 >> 2);
    }
  }
  return (int)piVar2 - (int)DAT_004a6248 >> 2;
}


