/*
 * Function: FUN_004216c0
 * Entry:    004216c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004216c0(void)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  if ((DAT_004a607c != 0) && (DAT_004a6090 == 0)) {
    FUN_00421830(s____data_MENU1_aif_004a08e4,&local_4);
    if (local_4 != 0) {
      DAT_0055e1a8 = FUN_00420a60(local_4);
      if (DAT_0055e1a8 == 0) {
        FUN_00421bd0(0);
        return;
      }
      iVar1 = 0;
      do {
        (**(code **)(**(int **)(DAT_0055e1a8 + iVar1) + 0x40))(*(int **)(DAT_0055e1a8 + iVar1),0);
        (**(code **)(**(int **)(DAT_0055e1a8 + iVar1) + 0x44))
                  (*(int **)(DAT_0055e1a8 + iVar1),0x5622);
        (**(code **)(**(int **)(DAT_0055e1a8 + iVar1) + 0x3c))(*(int **)(DAT_0055e1a8 + iVar1),0);
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x14);
      if (local_4 != 0) {
        FUN_00443fe0(local_4);
        local_4 = 0;
      }
    }
    FUN_00421830(s____data_MENU2_aif_004a08d0,&local_4);
    if (local_4 != 0) {
      DAT_0055e1ac = FUN_00420a60(local_4);
      if (DAT_0055e1ac == 0) {
        FUN_00421bd0(0);
        return;
      }
      iVar1 = 0;
      do {
        (**(code **)(**(int **)(DAT_0055e1ac + iVar1) + 0x40))
                  (*(undefined4 *)(DAT_0055e1a8 + iVar1),0);
        (**(code **)(**(int **)(DAT_0055e1ac + iVar1) + 0x44))
                  (*(undefined4 *)(DAT_0055e1a8 + iVar1),0x5622);
        (**(code **)(**(int **)(DAT_0055e1ac + iVar1) + 0x3c))
                  (*(undefined4 *)(DAT_0055e1a8 + iVar1),0);
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x14);
      if (local_4 != 0) {
        FUN_00443fe0(local_4);
      }
    }
    DAT_004a6090 = 1;
  }
  return;
}


