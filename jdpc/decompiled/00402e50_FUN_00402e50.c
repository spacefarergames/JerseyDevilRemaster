/*
 * Function: FUN_00402e50
 * Entry:    00402e50
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00402e50(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((-1 < param_1) && (param_1 < 0x11)) {
    FUN_00444690(&DAT_00a14ba0,s_BUTTON__i_0045326c,param_1);
    bVar1 = 1;
  }
  if (param_1 == 0xff) {
    _DAT_00a14ba0 = DAT_00453268;
    bVar1 = 1;
  }
  if (param_1 == 0xfe) {
    _DAT_00a14ba0 = DAT_00453268;
    bVar1 = 1;
  }
  return -(uint)bVar1 & 0xa14ba0;
}


