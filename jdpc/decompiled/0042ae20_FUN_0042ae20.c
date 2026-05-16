/*
 * Function: FUN_0042ae20
 * Entry:    0042ae20
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042ae20(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  DAT_004a615c = DAT_004a615c + 1;
  uVar3 = DAT_004a615c;
  while ((uVar4 = uVar3 >> 1, uVar4 != 0 &&
         (puVar2 = *(uint **)(DAT_004a61a4 + uVar4 * 4), *puVar2 < uVar1))) {
    *(uint **)(DAT_004a61a4 + uVar3 * 4) = puVar2;
    uVar3 = uVar4;
  }
  *(uint **)(DAT_004a61a4 + uVar3 * 4) = param_1;
  return;
}


