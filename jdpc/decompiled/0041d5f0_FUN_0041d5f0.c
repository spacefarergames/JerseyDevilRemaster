/*
 * Function: FUN_0041d5f0
 * Entry:    0041d5f0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041d5f0(int param_1,int param_2,int param_3)

{
  DAT_0055eb44 = (uint)(byte)PTR_DAT_0045f764
                             [(param_2 >> 3 & 0xffU | (param_3 >> 3 & 0xffU) << 5) << 5 |
                              param_1 >> 3 & 0xffU];
  return;
}


