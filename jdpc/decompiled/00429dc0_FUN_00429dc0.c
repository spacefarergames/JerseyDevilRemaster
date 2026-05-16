/*
 * Function: FUN_00429dc0
 * Entry:    00429dc0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint * FUN_00429dc0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_004a6184 = (uint *)FUN_00429ff0(0x44);
  *DAT_004a6184 = param_1;
  DAT_004a6184[1] = (uint)(param_1 == (DAT_004a0a30 & 0xff));
  if (DAT_004a6184[1] == 0) {
    FUN_00429e60(param_1,DAT_004a6184);
  }
  else {
    DAT_004a61c8 = DAT_004a61c8 + 1;
  }
  DAT_004a6184[3] = 0;
  *(undefined1 *)(DAT_004a6184 + 2) = 0;
  DAT_004a6184[3] = 0;
  DAT_004a6184[6] = 0;
  DAT_004a6184[5] = 0;
  DAT_004a6184[4] = 0;
  iVar1 = 0x20;
  do {
    iVar2 = iVar1 + 4;
    *(undefined4 *)((int)DAT_004a6184 + iVar1) = 0;
    iVar1 = iVar2;
  } while (iVar2 < 0x40);
  return DAT_004a6184;
}


