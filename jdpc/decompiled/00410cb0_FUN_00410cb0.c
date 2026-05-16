/*
 * Function: FUN_00410cb0
 * Entry:    00410cb0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410cb0(ushort param_1,ushort param_2,undefined2 param_3,undefined2 param_4)

{
  short sVar1;
  short sVar2;
  
  DAT_0051d818._0_2_ = param_3;
  DAT_0051d818._2_2_ = param_4;
  DAT_0051d80c._0_2_ = param_1;
  DAT_0051d80c._2_2_ = param_2;
  DAT_0051d810._0_2_ = param_1 >> 1;
  DAT_0051d7fc = 0;
  DAT_0051d800 = 10000;
  DAT_0051d810._2_2_ = param_2 >> 1;
  DAT_0051d81c = __ftol();
  sVar1 = __ftol();
  DAT_0051d814 = sVar1;
  sVar2 = __ftol();
  DAT_0051d816 = (short)((int)sVar2 * (int)sVar1 >> 0xc);
  DAT_008079b0 = -(uint)(param_1 >> 1);
  DAT_0066c604 = (param_1 >> 1) - 1;
  _DAT_008079b4 = (float)DAT_008079b0;
  DAT_0066c600 = 1 - (uint)(param_2 >> 1);
  _DAT_0066c60c = (float)DAT_0066c604;
  _DAT_0081027c = (float)DAT_0066c600;
  _DAT_00810278 = (float)(param_2 >> 1);
  DAT_00810280 = (uint)(param_2 >> 1);
  return;
}


