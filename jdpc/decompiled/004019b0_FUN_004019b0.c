/*
 * Function: FUN_004019b0
 * Entry:    004019b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004019b0(short *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  
  if ((((param_1[7] == param_1[0x19]) && (*(int *)(param_1 + 2) == *(int *)(param_1 + 0x14))) &&
      (param_1[1] == param_1[0x13])) && (*param_1 == param_1[0x12])) {
    uVar1 = param_1[6];
    for (uVar2 = (uint)uVar1 * param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar2 = (uint)uVar1 * param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    return;
  }
  if (((((*param_1 == 2) && (param_1[0x12] == 1)) &&
       ((param_1[1] == 2 &&
        ((param_1[0x13] == 2 && (*(int *)(param_1 + 2) == *(int *)(param_1 + 0x14))))))) &&
      (param_1[7] == 4)) && (param_1[0x19] == 0x10)) {
    FUN_00401a60(param_1,param_2,param_3,param_4);
  }
  return;
}


