/*
 * Function: FUN_0040a6a0
 * Entry:    0040a6a0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0040a6a0(byte param_1,undefined4 *param_2)

{
  LANGID LVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  *param_2 = 0xf;
  if (param_1 != 0) {
    LVar1 = GetSystemDefaultLangID();
    switch(LVar1 & 0x3ff) {
    case 7:
      param_2[2] = 2;
      break;
    default:
      param_2[2] = 0;
      break;
    case 10:
      param_2[2] = 3;
      break;
    case 0xc:
      param_2[2] = 1;
      break;
    case 0x10:
      param_2[2] = 4;
      break;
    case 0x13:
      param_2[2] = 5;
    }
  }
  if ((param_1 & 4) != 0) {
    param_2[4] = 0x200;
    param_2[5] = 0x180;
    iVar2 = FUN_00411e20();
    if (iVar2 == 0) {
      param_2[3] = 0;
      if (DAT_004a6200 < 300) {
        param_2[1] = 0;
      }
      else {
        param_2[1] = 1;
      }
    }
    else {
      param_2[3] = 1;
      param_2[1] = 2;
    }
    param_2[7] = 2;
    param_2[6] = 0;
    param_2[8] = 0;
    param_2[9] = 0x40000000;
    param_2[0x24] = 1;
  }
  if ((param_1 & 2) != 0) {
    param_2[0xe] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0x3ff00000;
    *(undefined1 *)(param_2 + 0x12) = 0;
    *(undefined1 *)((int)param_2 + 0x49) = 1;
    *(undefined1 *)((int)param_2 + 0x4a) = 2;
    *(undefined1 *)((int)param_2 + 0x4b) = 3;
    *(undefined1 *)(param_2 + 0x13) = 4;
    *(undefined1 *)((int)param_2 + 0x4d) = 5;
    *(undefined1 *)((int)param_2 + 0x4e) = 6;
    *(undefined1 *)((int)param_2 + 0x4f) = 7;
    *(undefined1 *)(param_2 + 0x14) = 8;
    *(undefined1 *)((int)param_2 + 0x51) = 9;
  }
  if ((param_1 & 1) != 0) {
    *(undefined1 *)((int)param_2 + 0x52) = 200;
    *(undefined1 *)((int)param_2 + 0x53) = 0xd0;
    *(undefined1 *)(param_2 + 0x15) = 0xcd;
    *(undefined1 *)((int)param_2 + 0x55) = 0xcb;
    DVar3 = OemKeyScan(0x71);
    DVar4 = OemKeyScan(0x61);
    if (DVar3 < DVar4) {
      *(undefined1 *)((int)param_2 + 0x56) = 0x10;
      *(undefined1 *)((int)param_2 + 0x57) = 0x11;
      *(undefined1 *)(param_2 + 0x16) = 0x12;
      *(undefined1 *)((int)param_2 + 0x59) = 0x13;
      *(undefined1 *)((int)param_2 + 0x5a) = 0x1e;
    }
    else {
      *(undefined1 *)((int)param_2 + 0x56) = 0x1e;
      *(undefined1 *)((int)param_2 + 0x57) = 0x2c;
      *(undefined1 *)(param_2 + 0x16) = 0x12;
      *(undefined1 *)((int)param_2 + 0x59) = 0x13;
      *(undefined1 *)((int)param_2 + 0x5a) = 0x10;
    }
    *(undefined1 *)((int)param_2 + 0x5b) = 0x1f;
    *(undefined1 *)(param_2 + 0x17) = 0x20;
    *(undefined1 *)((int)param_2 + 0x5d) = 0x21;
    *(undefined1 *)((int)param_2 + 0x5e) = 0xf;
    *(undefined1 *)((int)param_2 + 0x5f) = 0x1c;
    *(undefined1 *)(param_2 + 0x18) = 0xf;
    *(undefined1 *)((int)param_2 + 0x61) = 0x1c;
  }
  if ((param_1 & 0x10) != 0) {
    param_2[0xc] = 100;
    param_2[0xd] = 100;
  }
  if ((param_1 & 8) != 0) {
    param_2[10] = 0;
    param_2[0x1a] = 0;
    param_2[0x1c] = 0;
    param_2[0x1e] = 0;
    param_2[0x20] = 0;
    param_2[0x23] = 0;
    param_2[0xb] = 0x3ff00000;
    *(undefined1 *)((int)param_2 + 0x62) = 0x10;
    *(undefined1 *)((int)param_2 + 99) = 1;
    param_2[0x1b] = 0;
    param_2[0x1d] = 0x3ff00000;
    param_2[0x1f] = 0x3ff00000;
    param_2[0x21] = 0x3ff00000;
    *(undefined1 *)(param_2 + 0x22) = 0;
  }
  return;
}


