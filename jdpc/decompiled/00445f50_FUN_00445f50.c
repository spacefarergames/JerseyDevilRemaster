/*
 * Function: FUN_00445f50
 * Entry:    00445f50
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00445f50(uint param_1,uint param_2,int param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  for (; uVar2 = param_1, uVar1 = param_1, param_1 < param_2; param_2 = param_2 - param_3) {
    while (uVar1 = param_3 + uVar1, uVar1 <= param_2) {
      iVar3 = (*param_4)(uVar1,uVar2);
      if (0 < iVar3) {
        uVar2 = uVar1;
      }
    }
    FUN_00445fb0(uVar2,param_2,param_3);
  }
  return;
}


