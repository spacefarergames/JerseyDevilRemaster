/*
 * Function: FUN_00450750
 * Entry:    00450750
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00450750(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = (undefined4 *)FUN_00443ea0(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    iVar5 = *param_1;
    puVar6 = puVar3;
    while (iVar5 != 0) {
      param_1 = param_1 + 1;
      uVar4 = FUN_00450a10(iVar5);
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
      iVar5 = *param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}


