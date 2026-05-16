/*
 * Function: FUN_0040f5f0
 * Entry:    0040f5f0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0040f5f0(int *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  puVar2 = param_4;
  for (piVar3 = param_1; (piVar3 != (int *)0x0 && (*piVar3 != DAT_00810284));
      piVar3 = (int *)piVar3[0x12]) {
    *puVar2 = piVar3;
    puVar2 = puVar2 + 1;
  }
  piVar3 = (int *)puVar2[-1];
  while ((piVar3 != (int *)0x0 && (param_4 <= puVar2 + -1))) {
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
  if ((((param_1[9] == 0) && (param_1[10] == 0)) && (param_1[0xb] == 0)) &&
     ((param_1[0xc] == 0 && ((char)((uint)param_1[0xd] >> 8) == '\0')))) {
    return 0;
  }
  piVar3 = param_1 + 9;
  piVar4 = param_3;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_00407b90(&DAT_0053ea40,param_3,param_2);
  param_3[5] = param_3[5] + DAT_0051d7e0;
  param_3[6] = param_3[6] + DAT_0051d7e4;
  param_3[7] = param_3[7] + DAT_0051d7e8;
  FUN_00407fa0(&DAT_0051d7a0,param_3);
  return 1;
}


