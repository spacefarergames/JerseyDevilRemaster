/*
 * Function: FUN_004070b0
 * Entry:    004070b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004070b0(short *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*param_1;
  if (*param_1 < 0) {
    uVar3 = ~uVar3 + 1;
  }
  uVar2 = (uint)param_1[1];
  if (param_1[1] < 0) {
    uVar2 = ~uVar2 + 1;
  }
  uVar4 = (uint)param_1[2];
  if (param_1[2] < 0) {
    uVar4 = ~uVar4 + 1;
  }
  uVar1 = uVar2;
  if ((int)uVar2 < (int)uVar3) {
    uVar1 = uVar3;
    uVar3 = uVar2;
  }
  if ((int)uVar1 <= (int)uVar4) {
    *param_2 = ((int)(uVar1 + uVar3) >> 2) + uVar4;
    return;
  }
  *param_2 = ((int)(uVar4 + uVar3) >> 2) + uVar1;
  return;
}


