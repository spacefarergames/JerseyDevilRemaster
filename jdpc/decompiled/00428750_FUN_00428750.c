/*
 * Function: FUN_00428750
 * Entry:    00428750
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00428750(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_1c;
  
  iVar2 = FUN_00443ea0(0x10000);
  if (iVar2 != 0) {
    FUN_00405550(s_Building_Alpha_Table_004a0b54);
    iVar4 = 0;
    do {
      FUN_00405550(s_Color___3i_004a0ae8,iVar4);
      puVar5 = (undefined1 *)(iVar4 * 0x100 + iVar2);
      local_1c = 0;
      do {
        uVar3 = __ftol(param_2,0x100);
        uVar3 = __ftol(uVar3);
        uVar3 = __ftol(uVar3);
        uVar1 = (*(code *)PTR_FUN_004a0a20)(uVar3);
        *puVar5 = uVar1;
        if (iVar4 == 0) {
          *puVar5 = (undefined1)local_1c;
        }
        local_1c = local_1c + 1;
        puVar5 = puVar5 + 1;
      } while (local_1c < 0x100);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
    if (param_1 != 0) {
      FUN_00405550(s_Writing_Alpha_Blending_table_____004a0b30,param_1);
      FUN_00428060(param_1,param_2,iVar2);
    }
    return iVar2;
  }
  return 0;
}


