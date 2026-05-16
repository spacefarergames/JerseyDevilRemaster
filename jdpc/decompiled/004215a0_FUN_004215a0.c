/*
 * Function: FUN_004215a0
 * Entry:    004215a0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004215a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_00420780();
  for (; 0 < DAT_004a6088; DAT_004a6088 = DAT_004a6088 + -1) {
    iVar3 = 0;
    iVar2 = (-(uint)(*(int *)((&DAT_0055dd00)[DAT_004a6088] + 0x20) != 0) & 0xfffffffd) + 5;
    if (0 < iVar2) {
      do {
        piVar1 = *(int **)((&DAT_0055dd00)[DAT_004a6088] + iVar3 * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if ((&DAT_0055dd00)[DAT_004a6088] != 0) {
      FUN_00443fe0((&DAT_0055dd00)[DAT_004a6088]);
      (&DAT_0055dd00)[DAT_004a6088] = 0;
    }
  }
  DAT_0055dfa0 = 0;
  DAT_004a6078 = 0;
  return;
}


