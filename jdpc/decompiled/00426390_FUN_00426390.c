/*
 * Function: FUN_00426390
 * Entry:    00426390
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00426390(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  uint local_4;
  
  psVar1 = &DAT_0053ea92;
  do {
    if (*(int *)(psVar1 + 9) == 0x20) {
      *(undefined4 *)(psVar1 + 9) = (&DAT_0053eaa4)[*psVar1 * 0xc];
    }
    *psVar1 = 4;
    psVar1 = psVar1 + 0x18;
  } while ((int)psVar1 < 0x556192);
  uVar5 = 0;
  local_8 = local_4;
  piVar4 = DAT_004a60d8;
  if (DAT_004a60f4 != 0) {
    do {
      local_8 = *piVar4;
      iVar2 = FUN_00424600(piVar4 + 2);
      piVar4 = (int *)((int)piVar4 + iVar2 + 4);
      uVar5 = uVar5 + iVar2;
    } while (uVar5 < DAT_004a60f4);
  }
  local_4 = 0;
  piVar4 = DAT_004a60d8;
  if (DAT_004a60f4 != 0) {
    do {
      iVar2 = *piVar4;
      iVar6 = 0;
      uVar5 = (&DAT_0053eaa4)[iVar2 * 0xc];
      while (uVar5 != 0) {
        iVar3 = iVar2;
        if (0 < iVar6) {
          local_8 = local_8 + 1;
          iVar3 = local_8;
        }
        if ((uVar5 & 0x10) == 0) {
          if ((uVar5 & 1) == 0) {
            if ((uVar5 & 2) == 0) {
              if ((uVar5 & 4) == 0) {
                if ((uVar5 & 8) != 0) {
                  uVar5 = uVar5 ^ 8;
                  (&DAT_0053ea92)[iVar3 * 0x18] = 3;
                }
              }
              else {
                uVar5 = uVar5 ^ 4;
                (&DAT_0053ea92)[iVar3 * 0x18] = 2;
              }
            }
            else {
              uVar5 = uVar5 ^ 2;
              (&DAT_0053ea92)[iVar3 * 0x18] = 1;
            }
          }
          else {
            uVar5 = uVar5 ^ 1;
            (&DAT_0053ea92)[iVar3 * 0x18] = 0;
          }
        }
        else {
          uVar5 = uVar5 ^ 0x10;
          (&DAT_0053ea92)[iVar3 * 0x18] = 4;
        }
        FUN_00426520(piVar4 + 1,(int)(short)(&DAT_0053ea92)[iVar3 * 0x18]);
        iVar6 = iVar6 + 1;
      }
      iVar2 = FUN_00424600(piVar4 + 2);
      piVar4 = (int *)((int)piVar4 + iVar2 + 4);
      local_4 = local_4 + iVar2;
    } while (local_4 < DAT_004a60f4);
  }
  DAT_004a60dc = DAT_004a60d8;
  return;
}


