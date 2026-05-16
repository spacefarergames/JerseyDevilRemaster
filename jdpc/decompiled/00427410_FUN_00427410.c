/*
 * Function: FUN_00427410
 * Entry:    00427410
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427410(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    _DAT_004a0a00 = 0xe5604189;
    _DAT_004a0a04 = 0x3fd322d0;
    _DAT_004a0a08 = 0x39581062;
    _DAT_004a0a0c = 0x3fe2c8b4;
    _DAT_004a0a10 = 0x9fbe76c9;
    _DAT_004a0a14 = 0x3fbd2f1a;
    _DAT_004a0a18 = 0x85f06f69;
    _DAT_004a0a1c = 0x3fd554c9;
  }
  else if (param_2 == 2) {
    _DAT_004a0a00 = 0x33333333;
    _DAT_004a0a04 = 0x3fd33333;
    _DAT_004a0a08 = 0;
    _DAT_004a0a0c = 0x3fe00000;
    _DAT_004a0a10 = 0x9999999a;
    _DAT_004a0a14 = 0x3fc99999;
    _DAT_004a0a18 = 0x85f06f69;
    _DAT_004a0a1c = 0x3fd554c9;
  }
  else if (param_2 == 3) {
    _DAT_004a0a00 = 0x85f06f69;
    _DAT_004a0a04 = 0x3fd554c9;
    _DAT_004a0a08 = 0x85f06f69;
    _DAT_004a0a0c = 0x3fd554c9;
    _DAT_004a0a10 = 0x85f06f69;
    _DAT_004a0a14 = 0x3fd554c9;
    _DAT_004a0a18 = 0x85f06f69;
    _DAT_004a0a1c = 0x3fd554c9;
  }
  else {
    _DAT_004a0a00 = 0;
    _DAT_004a0a04 = 0x3ff00000;
    _DAT_004a0a08 = 0;
    _DAT_004a0a0c = 0x3ff00000;
    _DAT_004a0a10 = 0;
    _DAT_004a0a14 = 0x3ff00000;
    _DAT_004a0a18 = 0;
    _DAT_004a0a1c = 0x3ff00000;
  }
  switch(param_1) {
  default:
    PTR_FUN_004a0a20 = FUN_004277d0;
    return;
  case 1:
    PTR_FUN_004a0a20 = FUN_00427620;
    return;
  case 2:
    PTR_FUN_004a0a20 = FUN_004278d0;
    return;
  case 3:
    PTR_FUN_004a0a20 = FUN_004279e0;
    return;
  case 4:
    PTR_FUN_004a0a20 = FUN_00427c30;
    return;
  case 5:
    PTR_FUN_004a0a20 = FUN_00427e60;
    return;
  case 8:
    PTR_FUN_004a0a20 = &LAB_004275f0;
    return;
  }
}


