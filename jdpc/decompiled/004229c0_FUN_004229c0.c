/*
 * Function: FUN_004229c0
 * Entry:    004229c0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_004229c0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004056f0(param_1,&DAT_0045bbec);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00444440(iVar1,0,2);
  uVar2 = FUN_004444e0(iVar1);
  if ((param_3 != 0) && (param_3 < uVar2)) {
    uVar2 = param_3;
  }
  FUN_00444440(iVar1,0,0);
  FUN_00444440(iVar1,0x436,0);
  FUN_00444c90(param_2,1,uVar2,iVar1);
  FUN_00444c10(iVar1);
  return param_2;
}


