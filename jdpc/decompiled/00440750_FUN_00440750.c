/*
 * Function: FUN_00440750
 * Entry:    00440750
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00440750(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(param_3 + (int)param_1);
  for (; param_1 < puVar1; param_1 = (undefined4 *)((int)param_1 + param_2)) {
    puVar3 = param_1;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    param_1[1] = 1;
  }
  return;
}


