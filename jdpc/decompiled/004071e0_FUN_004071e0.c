/*
 * Function: FUN_004071e0
 * Entry:    004071e0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004071e0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    uVar1 = ~uVar1 + 1;
  }
  uVar2 = param_1[1];
  if ((int)uVar2 < 0) {
    uVar2 = ~uVar2 + 1;
  }
  uVar3 = param_1[2];
  if ((int)uVar3 < 0) {
    uVar3 = ~uVar3 + 1;
  }
  uVar4 = uVar2;
  if ((int)uVar2 < (int)uVar1) {
    uVar4 = uVar1;
    uVar1 = uVar2;
  }
  if ((int)uVar4 <= (int)uVar3) {
    return ((int)(uVar4 + uVar1) >> 2) + uVar3;
  }
  return ((int)(uVar3 + uVar1) >> 2) + uVar4;
}


