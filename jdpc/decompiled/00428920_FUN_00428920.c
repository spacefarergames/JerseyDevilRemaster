/*
 * Function: FUN_00428920
 * Entry:    00428920
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00428920(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_c;
  uint local_8;
  
  iVar3 = FUN_00443ea0(0x10000);
  if (iVar3 != 0) {
    FUN_00405550(s_Building_ReverseMap_Table_004a0b90);
    local_c = 0;
    do {
      local_8 = 0;
      do {
        uVar7 = 0;
        do {
          uVar2 = (*(code *)PTR_FUN_004a0a20)(local_c * 8,local_8 * 8,uVar7 * 8,param_2,0x100);
          uVar1 = uVar7 & 0x3f;
          uVar7 = uVar7 + 1;
          *(undefined1 *)((uVar1 << 10 | (local_8 << 5 | local_c) & 0xffff) + iVar3) = uVar2;
        } while (uVar7 < 0x20);
        local_8 = local_8 + 1;
      } while (local_8 < 0x20);
      local_c = local_c + 1;
    } while (local_c < 0x20);
    cVar6 = -1;
    local_8 = 0xf8;
    do {
      iVar9 = 0;
      do {
        cVar6 = cVar6 + '\x01';
        iVar8 = 0;
        do {
          puVar5 = (undefined4 *)(iVar3 + ((local_8 + iVar8) * 0x100 + iVar9 & 0xffff));
          uVar4 = CONCAT22(CONCAT11(cVar6,cVar6),CONCAT11(cVar6,cVar6));
          iVar8 = iVar8 + 1;
          *puVar5 = uVar4;
          puVar5[1] = uVar4;
          puVar5[2] = uVar4;
          puVar5[3] = uVar4;
        } while (iVar8 < 8);
        iVar9 = iVar9 + 0x10;
      } while (iVar9 < 0x100);
      local_8 = local_8 + -8;
    } while (0x7f < (int)local_8);
    if (param_1 != 0) {
      FUN_00405550(s_Writing_Reverse_Map_table____s_004a0b6c,param_1);
      FUN_00428060(param_1,param_2,iVar3);
    }
    return iVar3;
  }
  return 0;
}


