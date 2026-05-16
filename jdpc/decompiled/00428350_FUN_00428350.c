/*
 * Function: FUN_00428350
 * Entry:    00428350
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00428350(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint in_stack_00000024;
  int local_2c;
  
  iVar2 = FUN_00443ea0(0x10000);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00405550(s_Building_Adding_Table_004a0b14);
  iVar5 = 0;
  do {
    FUN_00405550(s_Color___3i_004a0ae8,iVar5);
    local_2c = 0xff;
    puVar4 = (undefined1 *)(iVar5 * 0x100 + 0xff + iVar2);
    do {
      if ((in_stack_00000024 & 4) != 0) {
        FUN_004457d0();
        FUN_004457d0();
        FUN_004457d0();
      }
      if ((in_stack_00000024 & 8) != 0) {
        FUN_004457d0();
        FUN_004457d0();
        FUN_004457d0();
      }
      uVar3 = __ftol(param_2,0x100);
      uVar3 = __ftol(uVar3);
      uVar3 = __ftol(uVar3);
      uVar1 = (*(code *)PTR_FUN_004a0a20)(uVar3);
      *puVar4 = uVar1;
      if (iVar5 == 0) {
        *puVar4 = (undefined1)local_2c;
      }
      local_2c = local_2c + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < local_2c);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  if (param_1 != 0) {
    FUN_00405550(s_Writing_Adding_table____s_004a0af8,param_1);
    FUN_00428060(param_1,param_2,iVar2);
  }
  return iVar2;
}


