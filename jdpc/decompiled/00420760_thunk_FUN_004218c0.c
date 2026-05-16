/*
 * Function: thunk_FUN_004218c0
 * Entry:    00420760
 * Warning:  Decompiled pseudocode, not original source.
 */


void thunk_FUN_004218c0(void)

{
  int iVar1;
  
  if (((DAT_004a607c != 0) && (*DAT_0055e1a8 != 0)) && (*DAT_0055e1ac != 0)) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)((int)DAT_0055e1a8 + iVar1) + 0x48))(DAT_0055e1a8);
      (**(code **)(**(int **)((int)DAT_0055e1ac + iVar1) + 0x48))(DAT_0055e1ac);
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x14);
  }
  return;
}


