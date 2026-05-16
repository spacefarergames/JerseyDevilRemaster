/*
 * Function: FUN_00432670
 * Entry:    00432670
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432670(int param_1)

{
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  int local_30 [2];
  int local_28;
  undefined1 local_20 [32];
  
  local_34 = 500;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0xcc) = DAT_004e1a30;
  DAT_004d236c = DAT_004e1a30;
  DAT_004d22ec = DAT_004e1a30;
  *(undefined4 *)(param_1 + 0xd0) = DAT_004e1a34;
  DAT_004d2370 = DAT_004e1a34;
  DAT_004d22f0 = DAT_004e1a34;
  *(int *)(param_1 + 0xd4) = DAT_004e1a38;
  DAT_004d2374 = DAT_004e1a38;
  DAT_004d22f4 = DAT_004e1a38;
  DAT_004e1bc2 = (undefined2)DAT_004e1a3c;
  *(undefined2 *)(param_1 + 0xc6) = DAT_004e1bc2;
  local_36 = 0;
  local_38 = 0;
  FUN_004072e0(param_1 + 0xc4,local_20);
  FUN_004079c0(local_20,&local_38,local_30);
  DAT_004d22e0 = DAT_004e1a30 - local_30[0];
  DAT_004d2360 = DAT_004e1a34;
  DAT_004d22e4 = DAT_004e1a34;
  DAT_004d22e8 = DAT_004e1a38 - local_28;
  DAT_004d235c = DAT_004d22e0;
  DAT_004d2364 = DAT_004d22e8;
  if (DAT_004e1ab6 != 0) {
    FUN_0041f3d0();
    DAT_004e1ab6 = 0;
    _DAT_004e1a00 = 0;
    DAT_004cffe0 = 0x69;
    _DAT_004a6670 = 0x1e;
    return;
  }
  FUN_0041f3d0();
  DAT_004e1a02 = 0x3c;
  _DAT_004e1a00 = 0;
  DAT_004cffe0 = 0x69;
  _DAT_004a6670 = 0x1e;
  *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0x50;
  return;
}


