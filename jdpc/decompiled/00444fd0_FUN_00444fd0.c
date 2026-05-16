/*
 * Function: FUN_00444fd0
 * Entry:    00444fd0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00444fd0(char *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  char *local_20;
  int local_1c;
  char *local_18;
  undefined4 local_14;
  
  uVar2 = 0xffffffff;
  local_18 = param_1;
  local_20 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_1c = ~uVar2 - 1;
  local_14 = 0x49;
  FUN_00448b30(&local_20,param_2,&stack0x0000000c);
  return;
}


