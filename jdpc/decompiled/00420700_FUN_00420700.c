/*
 * Function: FUN_00420700
 * Entry:    00420700
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00420700(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  uVar1 = *param_1;
  puVar3 = &DAT_00559ce0;
  for (iVar2 = 0x1000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar4 = &DAT_00559ce0;
  for (iVar2 = (uVar1 & 0x1ffffff) << 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(char *)puVar4 = (char)*param_1;
    param_1 = (uint *)((int)param_1 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  return;
}


