/*
 * Function: FUN_00422ae0
 * Entry:    00422ae0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00422ae0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  if (0 < DAT_00557980) {
    pbVar2 = &DAT_005579a2;
    iVar3 = DAT_00557980;
    do {
      pbVar2[-2] = 0;
      pbVar2[-1] = 0;
      bVar1 = *pbVar2;
      *pbVar2 = -bVar1 - 0x10;
      if (0x20 < (byte)(-bVar1 - 0x10)) {
        *pbVar2 = 0x20;
      }
      pbVar2 = pbVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


