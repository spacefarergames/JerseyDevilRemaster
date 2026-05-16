/*
 * Function: FUN_00408c90
 * Entry:    00408c90
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00408c90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004056f0(param_1,&DAT_0045bbec);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_00444440(iVar1,0,2);
    uVar2 = FUN_004444e0(iVar1);
    FUN_00444440(iVar1,0,0);
    FUN_00444c90(DAT_004a60b4 + 0x100000,1,uVar2,iVar1);
    FUN_00444c10(iVar1);
  }
  DAT_004a6128 = uVar2;
  DAT_004a6120 = 2;
  DAT_004a6124 = 0;
  return;
}


