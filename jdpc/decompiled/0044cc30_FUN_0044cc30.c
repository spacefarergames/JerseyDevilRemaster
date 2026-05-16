/*
 * Function: FUN_0044cc30
 * Entry:    0044cc30
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0044cc30(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}


