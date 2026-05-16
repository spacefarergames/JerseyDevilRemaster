/*
 * Function: FUN_0043e5c0
 * Entry:    0043e5c0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_0043e5c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 & 0xffff) / 100;
  param_1 = param_1 + uVar1 * 0xff9c;
  uVar2 = (param_1 & 0xffff) / 10;
  return param_1 + uVar2 * -10 & 0xffff | uVar2 * 0x10 | uVar1 * 0x100;
}


