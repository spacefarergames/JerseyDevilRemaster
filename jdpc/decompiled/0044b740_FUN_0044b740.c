/*
 * Function: FUN_0044b740
 * Entry:    0044b740
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0044b740(double param_1)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = FUN_0044a4b0(param_1._0_4_,param_1._4_4_);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)FUN_0044b7d0(param_1._0_4_,param_1._4_4_);
    if ((double)fVar2 == param_1) {
      fVar2 = (float10)FUN_0044b7d0(param_1 / 2.0);
      if (fVar2 == (float10)(param_1 / 2.0)) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}


