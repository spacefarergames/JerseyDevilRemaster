/*
 * Function: FUN_00409000
 * Entry:    00409000
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00409000(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  DirectDrawEnumerateA(&LAB_00408ef0,0);
  if (0 < DAT_004a5e78) {
    local_18 = 0;
    local_c = &DAT_008109cc;
    local_8 = DAT_004a5e78;
    do {
      local_10 = 0;
      if (0 < *local_c) {
        do {
          local_14 = 0;
          if (0 < *local_c) {
            iVar4 = local_10 + local_18;
            piVar7 = local_c + 0x81;
            piVar1 = &DAT_008109d0 + iVar4;
            piVar2 = &DAT_00810bd0 + iVar4;
            piVar3 = &DAT_00810dd0 + iVar4;
            do {
              if (*piVar2 * *piVar1 + *piVar3 < piVar7[-0x80] * *piVar7 + piVar7[0x80]) {
                iVar4 = *piVar3;
                iVar5 = *piVar1;
                iVar6 = *piVar2;
                *piVar1 = piVar7[-0x80];
                *piVar2 = *piVar7;
                *piVar3 = piVar7[0x80];
                piVar7[-0x80] = iVar5;
                *piVar7 = iVar6;
                piVar7[0x80] = iVar4;
              }
              local_14 = local_14 + 1;
              piVar7 = piVar7 + 1;
            } while (local_14 < *local_c);
          }
          local_10 = local_10 + 1;
        } while (local_10 < *local_c);
      }
      local_c = local_c + 0x214;
      local_18 = local_18 + 0x214;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


