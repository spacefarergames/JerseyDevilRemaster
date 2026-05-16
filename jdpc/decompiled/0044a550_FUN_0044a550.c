/*
 * Function: FUN_0044a550
 * Entry:    0044a550
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0044a550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  double dVar1;
  float10 fVar2;
  
  dVar1 = (double)CONCAT44(param_5,param_4) + (double)CONCAT44(param_3,param_2);
  if (DAT_004a54ac == 0) {
    fVar2 = (float10)FUN_0044ad30(1,param_1,param_2,param_3,param_4,param_5,dVar1,param_6);
    return fVar2;
  }
  _DAT_004a6220 = 0x21;
  FUN_0044aeb0(param_6,0xffff);
  return (float10)dVar1;
}


