/*
 * Function: FUN_004406f0
 * Entry:    004406f0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_004406f0(undefined4 *param_1,int param_2)

{
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (param_1[6] == param_2) break;
    param_1 = (undefined4 *)*param_1;
  }
  return param_1;
}


