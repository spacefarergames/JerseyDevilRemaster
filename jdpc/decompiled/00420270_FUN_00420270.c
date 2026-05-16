/*
 * Function: FUN_00420270
 * Entry:    00420270
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00420270(void)

{
  if (DAT_004d18e1 != 0) {
    if ((short)(ushort)DAT_004d18e1 < *(short *)(DAT_0055dce4 + 6)) {
      *(ushort *)(DAT_0055dce4 + 6) = DAT_004d18e1 - 1;
    }
    DAT_004d2396 = *(undefined1 *)(DAT_0055dce4 + 6);
    FUN_00420310(CONCAT31((int3)((uint)DAT_0055dce4 >> 8),DAT_004d2396));
  }
  return;
}


