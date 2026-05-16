/*
 * Function: FUN_0041f450
 * Entry:    0041f450
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041f450(undefined4 param_1)

{
  undefined4 *puVar1;
  
  DAT_004a5e90 = &LAB_0041fe30;
  if (DAT_004a09a4 == 0) {
    FUN_0041d520(param_1);
    FUN_0041e570();
  }
  else {
    FUN_00419ff0(param_1);
    FUN_0041b130();
  }
  puVar1 = &DAT_00561900;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x10;
  } while ((int)puVar1 < 0x571900);
  return;
}


