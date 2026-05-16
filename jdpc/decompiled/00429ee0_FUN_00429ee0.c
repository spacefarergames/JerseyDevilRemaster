/*
 * Function: FUN_00429ee0
 * Entry:    00429ee0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00429ee0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(char *)(param_2 + *param_3 * 3) = (char)(*(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 0xc))
    ;
    *(char *)(*param_3 * 3 + 1 + param_2) =
         (char)(*(uint *)(param_1 + 0x14) / *(uint *)(param_1 + 0xc));
    *(char *)(*param_3 * 3 + 2 + param_2) =
         (char)(*(uint *)(param_1 + 0x18) / *(uint *)(param_1 + 0xc));
    *(char *)(param_1 + 8) = (char)*param_3;
    *param_3 = *param_3 + 1;
    return;
  }
  piVar1 = (int *)(param_1 + 0x20);
  iVar2 = 8;
  do {
    if (*piVar1 != 0) {
      FUN_00429ee0(*piVar1,param_2,param_3);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


