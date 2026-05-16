/*
 * Function: FUN_00413720
 * Entry:    00413720
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00413720(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1;
  piVar1 = *(int **)(DAT_0066b648 + 4);
  iVar2 = *piVar1;
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 2) & 2) != 2)) {
    while (iVar2 != 0) {
      FUN_004137b0(*(short *)(iVar2 + *piVar3 * 2) * 0x10 + DAT_0066d6c8,
                   *(short *)(iVar2 + piVar3[1] * 2) * 0x10 + DAT_0066d6c8,
                   *(short *)(iVar2 + piVar3[2] * 2) * 0x10 + DAT_0066d6c8,&param_1);
      if ((float)param_1 < 0.0) {
        *(int *)(piVar1[2] + 4) = piVar1[1];
        *(int *)(piVar1[1] + 8) = piVar1[2];
      }
      piVar1 = (int *)piVar1[1];
      iVar2 = *piVar1;
    }
  }
  return;
}


