/*
 * Function: FUN_00421830
 * Entry:    00421830
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00421830(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_004056f0(param_1,&DAT_0045bbec);
  if (iVar1 != 0) {
    if (*param_2 != 0) {
      FUN_00443fe0(*param_2);
      *param_2 = 0;
    }
    FUN_00444440(iVar1,0,2);
    uVar2 = FUN_004444e0(iVar1);
    FUN_00444440(iVar1,0,0);
    iVar3 = FUN_00443ea0(uVar2);
    *param_2 = iVar3;
    FUN_00444c90(iVar3,1,uVar2,iVar1);
    FUN_00444c10(iVar1);
    return uVar2;
  }
  return 0;
}


