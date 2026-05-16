/*
 * Function: FUN_00428d60
 * Entry:    00428d60
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00428d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte param_4,
                 undefined4 param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  FUN_00405550(s_Creating_Inverse_Map_004a0bb0);
  local_c = 0;
  do {
    local_10 = 0;
    do {
      uVar3 = 0;
      do {
        bVar1 = (*(code *)PTR_FUN_004a0a20)(local_c * 8,local_10 * 8,uVar3 * 8,param_3,0x100);
        uVar2 = uVar3 & 0xffff;
        uVar3 = uVar3 + 1;
        *(ushort *)
         (param_6 +
         (uVar2 | local_10 << (param_4 & 0x1f) & 0xffff |
         local_c << (param_4 * '\x02' & 0x1f) & 0xffff) * 2) = (ushort)bVar1;
      } while (uVar3 < 0x20);
      local_10 = local_10 + 1;
    } while (local_10 < 0x20);
    local_c = local_c + 1;
  } while (local_c < 0x20);
  return;
}


