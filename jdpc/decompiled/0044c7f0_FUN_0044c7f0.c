/*
 * Function: FUN_0044c7f0
 * Entry:    0044c7f0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_0044c7f0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0044c850();
  uVar1 = param_2 & param_1 | ~param_2 & uVar1;
  FUN_0044c8f0(uVar1);
  return uVar1;
}


