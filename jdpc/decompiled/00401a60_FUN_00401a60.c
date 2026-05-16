/*
 * Function: FUN_00401a60
 * Entry:    00401a60
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00401a60(int param_1,byte *param_2,undefined2 *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined2 *local_10;
  int local_c;
  int local_8;
  
  pbVar2 = param_2;
  local_10 = param_3;
  if (param_1 == 0) {
    param_2 = (byte *)0x0;
    param_3 = (undefined2 *)0x0;
    local_8 = 0;
    local_c = 0;
  }
  else {
    param_3 = (undefined2 *)(int)*(short *)(param_1 + 0x4c);
    local_8 = (int)*(short *)(param_1 + 0x52);
    param_2 = (byte *)(int)*(short *)(param_1 + 0x4e);
    local_c = (int)*(short *)(param_1 + 0x50);
  }
  local_18 = (&DAT_004510c0)[local_c];
  local_1c = (&DAT_004510c0)[local_8];
  if (param_4 != 0) {
    local_20 = param_4;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      uVar4 = (uint)bVar1;
      local_c = local_c + *(int *)(&DAT_00451080 + (uVar4 & 0xf) * 4);
      if (local_c < 0) {
        local_c = 0;
      }
      if (0x58 < local_c) {
        local_c = 0x58;
      }
      iVar3 = (-(uint)((int)(uVar4 << 0x1d) < 0) & local_18) +
              (-(uint)((int)(uVar4 << 0x1e) < 0) & local_18 >> 1) +
              (-(uint)((int)(uVar4 << 0x1f) < 0) & local_18 >> 2) + (local_18 >> 3);
      if ((bVar1 & 8) != 0) {
        iVar3 = -iVar3;
      }
      param_3 = (undefined2 *)((int)param_3 + iVar3);
      if ((int)param_3 < 0x8000) {
        if ((int)param_3 < -0x8000) {
          param_3 = (undefined2 *)0xffff8000;
        }
      }
      else {
        param_3 = (undefined2 *)0x7fff;
      }
      uVar4 = (int)(uint)bVar1 >> 4;
      local_18 = (&DAT_004510c0)[local_c];
      *local_10 = param_3._0_2_;
      local_8 = local_8 + *(int *)(&DAT_00451080 + uVar4 * 4);
      if (local_8 < 0) {
        local_8 = 0;
      }
      if (0x58 < local_8) {
        local_8 = 0x58;
      }
      iVar3 = (-(uint)((int)(uVar4 << 0x1d) < 0) & local_1c) +
              (-(uint)((int)(uVar4 << 0x1e) < 0) & local_1c >> 1) +
              (-(uint)((int)(uVar4 << 0x1f) < 0) & local_1c >> 2) + (local_1c >> 3);
      if ((uVar4 & 8) != 0) {
        iVar3 = -iVar3;
      }
      param_2 = (byte *)((int)param_2 + iVar3);
      if ((int)param_2 < 0x8000) {
        if ((int)param_2 < -0x8000) {
          param_2 = (byte *)0xffff8000;
        }
      }
      else {
        param_2 = (byte *)0x7fff;
      }
      local_1c = (&DAT_004510c0)[local_8];
      local_10[1] = param_2._0_2_;
      local_10 = local_10 + 2;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if (param_1 != 0) {
    *(short *)(param_1 + 0x50) = (short)local_c;
    *(undefined2 *)(param_1 + 0x4c) = param_3._0_2_;
    *(undefined2 *)(param_1 + 0x52) = (undefined2)local_8;
    *(undefined2 *)(param_1 + 0x4e) = param_2._0_2_;
  }
  return;
}


