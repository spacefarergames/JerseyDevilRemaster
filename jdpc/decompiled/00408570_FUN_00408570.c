/*
 * Function: FUN_00408570
 * Entry:    00408570
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00408570(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (DAT_0053e84c == 2) {
    puVar8 = &DAT_0045bb70;
  }
  else {
    puVar8 = &DAT_0045bab0;
    if (DAT_0053e858 == 0) {
      puVar8 = &DAT_0045bb10;
    }
  }
  piVar7 = &DAT_00810bd0;
  DAT_008102d4 = puVar8;
  do {
    iVar6 = 0;
    do {
      if (((piVar7[-0x80] == *(int *)((int)puVar8 + iVar6)) &&
          (*piVar7 == *(int *)((int)puVar8 + iVar6 + 4))) && (piVar7[0x80] == 0x10)) {
        *(undefined1 *)((int)puVar8 + iVar6 + 8) = 1;
        puVar8 = DAT_008102d4;
      }
      iVar6 = iVar6 + 0xc;
    } while (iVar6 < 0x55);
    piVar7 = piVar7 + 1;
  } while ((int)piVar7 < 0x810dd0);
  local_14 = 0x214;
  local_8 = &DAT_0081121c;
  do {
    local_c = 0;
    if (0 < *local_8) {
      do {
        local_10 = 0;
        if (0 < *local_8) {
          iVar6 = local_c + local_14;
          piVar7 = local_8 + 0x81;
          piVar1 = &DAT_008109d0 + iVar6;
          piVar2 = &DAT_00810bd0 + iVar6;
          piVar3 = &DAT_00810dd0 + iVar6;
          do {
            if (*piVar2 * *piVar1 + *piVar3 < *piVar7 * piVar7[-0x80] + piVar7[0x80]) {
              iVar6 = *piVar3;
              iVar4 = *piVar1;
              iVar5 = *piVar2;
              *piVar1 = piVar7[-0x80];
              *piVar2 = *piVar7;
              *piVar3 = piVar7[0x80];
              piVar7[-0x80] = iVar4;
              *piVar7 = iVar5;
              piVar7[0x80] = iVar6;
            }
            local_10 = local_10 + 1;
            piVar7 = piVar7 + 1;
          } while (local_10 < *local_8);
        }
        local_c = local_c + 1;
      } while (local_c < *local_8);
    }
    local_8 = local_8 + 0x214;
    local_14 = local_14 + 0x214;
  } while ((int)local_8 < 0x85297d);
  return;
}


