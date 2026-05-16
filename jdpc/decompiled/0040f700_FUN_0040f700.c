/*
 * Function: FUN_0040f700
 * Entry:    0040f700
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0040f700(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_c8 [50];
  
  puVar2 = local_c8;
  for (piVar3 = param_1; (piVar3 != (int *)0x0 && (*piVar3 != DAT_00810284));
      piVar3 = (int *)piVar3[0x12]) {
    *puVar2 = piVar3;
    puVar2 = puVar2 + 1;
  }
  piVar3 = (int *)puVar2[-1];
  while ((piVar3 != (int *)0x0 && (local_c8 <= puVar2 + -1))) {
    *piVar3 = DAT_00810284;
    if (piVar3[0x12] == 0) {
      piVar4 = piVar3 + 9;
      for (iVar1 = 8; piVar3 = piVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar3;
        piVar4 = piVar4 + 1;
      }
    }
    else {
      FUN_00407d80(piVar3[0x12] + 0x24,piVar3 + 1,piVar3 + 9);
    }
    piVar3 = (int *)puVar2[-2];
    puVar2 = puVar2 + -1;
  }
  piVar3 = param_1 + 9;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *piVar3;
    piVar3 = piVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


