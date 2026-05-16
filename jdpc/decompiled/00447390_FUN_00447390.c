/*
 * Function: FUN_00447390
 * Entry:    00447390
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447390(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  DAT_004a6224 = param_1;
  iVar2 = 0;
  puVar1 = &DAT_004a4bd0;
  do {
    if (param_1 == *puVar1) {
      _DAT_004a6220 = *(undefined4 *)(iVar2 * 8 + 0x4a4bd4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (puVar1 < &DAT_004a4d38);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_004a6220 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_004a6220 = 8, 0xca < param_1)) {
    _DAT_004a6220 = 0x16;
  }
  return;
}


