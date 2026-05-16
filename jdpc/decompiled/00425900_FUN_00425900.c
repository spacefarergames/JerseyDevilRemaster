/*
 * Function: FUN_00425900
 * Entry:    00425900
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00425900(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_004056f0(param_1,&DAT_0045bbec);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00444440(iVar1,0,2);
  uVar2 = FUN_004444e0(iVar1);
  FUN_00444440(iVar1,0,0);
  iVar3 = FUN_00443ea0(uVar2);
  if (iVar3 == 0) {
    FUN_00444c10();
    return 0;
  }
  FUN_00444c90(iVar3,1,uVar2,iVar1);
  FUN_00444c10(iVar1);
  return iVar3;
}


