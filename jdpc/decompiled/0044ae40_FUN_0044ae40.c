/*
 * Function: FUN_0044ae40
 * Entry:    0044ae40
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0044ae40(uint param_1)

{
  if ((param_1 & 0x20) != 0) {
    return 5;
  }
  if ((param_1 & 8) != 0) {
    return 1;
  }
  if ((param_1 & 4) != 0) {
    return 2;
  }
  if ((param_1 & 1) != 0) {
    return 3;
  }
  return (param_1 & 2) << 1;
}


