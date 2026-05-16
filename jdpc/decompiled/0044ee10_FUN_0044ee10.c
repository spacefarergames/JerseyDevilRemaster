/*
 * Function: FUN_0044ee10
 * Entry:    0044ee10
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0044ee10(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}


