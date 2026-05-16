/*
 * Function: FUN_00432360
 * Entry:    00432360
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00432360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(DAT_004d13c4 + 0x58) != 0) {
    *(undefined4 *)(DAT_004d13c4 + 0xac) = 0;
    *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0xb4;
    iVar1 = *(int *)(DAT_004d13c4 + 0x58);
    if (iVar1 == *(int *)(iVar1 + 0x54)) {
      *(undefined4 *)(iVar1 + 0x54) = 0;
    }
    *(undefined4 *)(DAT_004d13c4 + 0x58) = 0;
    *(uint *)(DAT_004d13c4 + 0x14) = *(uint *)(DAT_004d13c4 + 0x14) & 0xffffffeb;
  }
  DAT_004d235c = param_1;
  DAT_004d236c = param_1;
  DAT_004d22ec = param_1;
  DAT_004d22e0 = param_1;
  *(undefined4 *)(DAT_004d13c4 + 0xcc) = param_1;
  DAT_004d2360 = param_2;
  DAT_004d2370 = param_2;
  DAT_004d22f0 = param_2;
  DAT_004d22e4 = param_2;
  *(undefined4 *)(DAT_004d13c4 + 0xd0) = param_2;
  DAT_004d2364 = param_3;
  DAT_004d2374 = param_3;
  DAT_004d22f4 = param_3;
  DAT_004d22e8 = param_3;
  *(undefined4 *)(DAT_004d13c4 + 0xd4) = param_3;
  return;
}


