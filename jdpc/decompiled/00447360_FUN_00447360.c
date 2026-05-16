/*
 * Function: FUN_00447360
 * Entry:    00447360
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00447360(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00446020(param_1 + param_2,param_1,~uVar2);
  }
  return;
}


