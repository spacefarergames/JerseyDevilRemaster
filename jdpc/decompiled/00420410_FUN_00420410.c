/*
 * Function: FUN_00420410
 * Entry:    00420410
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420410(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = (int)DAT_004d18e8;
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = &DAT_004debc0;
    do {
      if (*piVar2 == (int)*(short *)(DAT_004d13c4 + 0x20)) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < iVar3);
  }
  if (iVar1 == iVar3) {
    DAT_004d2396 = 0;
    FUN_00420310(0);
  }
  else {
    if (DAT_004cdfc8 == 0) {
      _DAT_004e19fe = *(undefined2 *)(DAT_004d13c4 + 0x20);
      DAT_0055dce4 = &DAT_004debc0 + iVar1 * 2;
      if ((short)(ushort)DAT_004d18e1 < *(short *)(&DAT_004debc4 + iVar1 * 2)) {
        *(ushort *)(&DAT_004debc4 + iVar1 * 2) = DAT_004d18e1 - 1;
        *(ushort *)((int)DAT_0055dce4 + 6) = DAT_004d18e1 - 1;
      }
      DAT_004d2396 = *(undefined1 *)(DAT_0055dce4 + 1);
      FUN_00420310(DAT_004d2396);
      return;
    }
    if ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000000) != 0) {
      DAT_004cdfc8 = 0;
      return;
    }
  }
  return;
}


