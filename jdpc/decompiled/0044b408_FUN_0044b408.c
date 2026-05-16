/*
 * Function: FUN_0044b408
 * Entry:    0044b408
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_0044b408(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}


