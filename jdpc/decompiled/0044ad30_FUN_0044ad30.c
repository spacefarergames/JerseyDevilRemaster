/*
 * Function: FUN_0044ad30
 * Entry:    0044ad30
 * Warning:  Decompiled pseudocode, not original source.
 */


float10 FUN_0044ad30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  int iVar1;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_1c = FUN_0044ae10(param_2);
  if (local_1c != 0) {
    local_18 = param_3;
    local_c = param_6;
    local_14 = param_4;
    local_10 = param_5;
    local_20 = param_1;
    local_8 = param_7;
    uStack_4 = param_8;
    FUN_0044aeb0(param_9,0xffff);
    iVar1 = FUN_004240f0(&local_20);
    if (iVar1 == 0) {
      FUN_0044ade0(param_1);
    }
    return (float10)(double)CONCAT44(uStack_4,local_8);
  }
  FUN_0044aeb0(param_9,0xffff);
  FUN_0044ade0(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}


