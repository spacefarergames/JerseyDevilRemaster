/*
 * Function: FUN_00421a60
 * Entry:    00421a60
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00421a60(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  byte local_4 [4];
  
  local_8 = 0;
  if ((DAT_004a607c != 0) && (DAT_0055dfa0 == 0)) {
    iVar3 = 1;
    if (0 < DAT_004a6088) {
      puVar2 = &DAT_0055dfa0;
      piVar5 = &DAT_0055dd04;
      do {
        if (*piVar5 != 0) {
          iVar4 = 0;
          do {
            piVar1 = *(int **)(*piVar5 + iVar4 * 4);
            if ((piVar1 != (int *)0x0) &&
               ((**(code **)(*piVar1 + 0x24))(piVar1,local_4), (local_4[0] & 1) != 0)) {
              piVar1 = *(int **)(*piVar5 + iVar4 * 4);
              (**(code **)(*piVar1 + 0x48))(piVar1);
              puVar2[1] = iVar3;
              local_8 = local_8 + 1;
              puVar2 = puVar2 + 1;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 2);
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 <= DAT_004a6088);
    }
    DAT_0055dfa0 = local_8;
  }
  return;
}


