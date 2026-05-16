/*
 * Function: FUN_0042adc0
 * Entry:    0042adc0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042adc0(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = *(uint **)(DAT_004a61a4 + 4);
  uVar4 = 2;
  uVar2 = *puVar1;
  uVar6 = 1;
  if (1 < DAT_004a615c) {
    do {
      uVar5 = uVar4;
      if ((uVar4 < DAT_004a615c) &&
         (**(uint **)(DAT_004a61a4 + uVar4 * 4) < **(uint **)(DAT_004a61a4 + 4 + uVar4 * 4))) {
        uVar5 = uVar4 + 1;
      }
      puVar3 = *(uint **)(DAT_004a61a4 + uVar5 * 4);
      if (*puVar3 <= uVar2) break;
      *(uint **)(DAT_004a61a4 + uVar6 * 4) = puVar3;
      uVar4 = uVar5 * 2;
      uVar6 = uVar5;
    } while (uVar4 < DAT_004a615c || uVar4 - DAT_004a615c == 0);
  }
  *(uint **)(DAT_004a61a4 + uVar6 * 4) = puVar1;
  return;
}


