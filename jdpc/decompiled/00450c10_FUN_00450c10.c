/*
 * Function: FUN_00450c10
 * Entry:    00450c10
 * Warning:  Decompiled pseudocode, not original source.
 */


char * FUN_00450c10(int param_1)

{
  uint uVar1;
  char *pcVar2;
  short *psVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 3) == 0) {
      if ((uVar1 & 0xc) == 0) {
        if ((uVar1 & 0x10) == 0) {
          pcVar2 = &DAT_004a5948 + (uint)*(ushort *)(param_1 + 8) * 8;
        }
        else {
          pcVar2 = &DAT_004a594a + (uint)*(ushort *)(param_1 + 8) * 8;
        }
      }
      else {
        pcVar2 = &DAT_004a594c + (uint)*(ushort *)(param_1 + 8) * 8;
      }
    }
    else {
      pcVar2 = &DAT_004a594e + (uint)*(ushort *)(param_1 + 8) * 8;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 != -0x20)) || (pcVar2[1] == '\0')) {
      pcVar2 = (char *)0x0;
    }
    return pcVar2;
  }
  iVar4 = 0;
  psVar3 = &DAT_004a58d0;
  while (*psVar3 != *(short *)(param_1 + 8)) {
    psVar3 = psVar3 + 5;
    iVar4 = iVar4 + 1;
    if ((short *)0x4a5947 < psVar3) {
      return (char *)0x0;
    }
  }
  if ((uVar1 & 3) != 0) {
    return (char *)(iVar4 * 10 + 0x4a58d8);
  }
  if ((uVar1 & 0xc) != 0) {
    return (char *)(iVar4 * 10 + 0x4a58d6);
  }
  if ((uVar1 & 0x10) != 0) {
    return (char *)(iVar4 * 10 + 0x4a58d4);
  }
  return (char *)(iVar4 * 10 + 0x4a58d2);
}


