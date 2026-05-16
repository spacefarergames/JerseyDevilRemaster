/*
 * Function: FUN_00424580
 * Entry:    00424580
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00424580(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (DAT_004a60dc == DAT_004a60d8) {
    DAT_004a60f4 = 0;
  }
  uVar1 = FUN_00424600(param_1 + 1);
  *DAT_004a60dc = param_2;
  DAT_004a60dc = DAT_004a60dc + 1;
  puVar3 = DAT_004a60dc;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  DAT_004a60dc = (undefined4 *)((int)DAT_004a60dc + uVar1);
  DAT_004a60f4 = DAT_004a60f4 + uVar1;
  return 1;
}


