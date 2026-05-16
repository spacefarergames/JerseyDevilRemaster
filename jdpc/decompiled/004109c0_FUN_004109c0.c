/*
 * Function: FUN_004109c0
 * Entry:    004109c0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004109c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar6 = param_1[4];
  iVar5 = param_1[5];
  iVar1 = param_1[2];
  iVar7 = *param_1 - param_1[3];
  iVar2 = param_1[1];
  DAT_0051d7e0 = -*param_1;
  DAT_0051d7e4 = -param_1[1];
  local_5c = (int)DAT_0051d81c;
  DAT_0051d7e8 = -param_1[2];
  DAT_0051d7c0._0_2_ = 0x1000;
  DAT_0051d7c0._2_2_ = 0;
  DAT_0051d7c4._0_2_ = 0;
  DAT_0051d7c4._2_2_ = 0;
  _DAT_0051d7c8 = 0x1000;
  _DAT_0051d7ca = 0;
  _DAT_0051d7cc = 0;
  _DAT_0051d7ce = 0;
  _DAT_0051d7d0 = 0x1000;
  _DAT_0051d7d4 = 0;
  _DAT_0051d7d8 = 0;
  _DAT_0051d7dc = 0;
  local_40 = 0x1000;
  local_3e = 0;
  local_3c = 0;
  local_3a = 0;
  local_38 = 0x1000;
  local_36 = 0;
  local_34 = 0;
  local_32 = 0;
  local_30 = 0x1000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_60 = 0x1000;
  local_58 = 0x1000;
  FUN_00407900(&local_40,&local_60);
  iVar3 = FUN_00407270(iVar7,iVar1 - iVar5);
  FUN_00407610(0x1800 - iVar3,&DAT_0051d7c0);
  uVar4 = __ftol();
  iVar3 = FUN_00407270(iVar2 - iVar6,uVar4);
  FUN_00407490(-iVar3,&DAT_0051d7c0);
  FUN_00407d30(&local_40,&DAT_0051d7c0);
  puVar8 = &DAT_0051d7c0;
  puVar9 = &DAT_0053ea00;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00407b00(&DAT_0053ea00,&DAT_0051d7e0,&local_50);
  _DAT_0053ea14 = local_50;
  local_60 = (int)DAT_0051d814;
  _DAT_0053ea18 = local_4c;
  local_5c = (int)DAT_0051d816;
  _DAT_0053ea1c = local_48;
  _DAT_0051d7a0 = 0x1000;
  _DAT_0051d7a2 = 0;
  _DAT_0051d7a4 = 0;
  _DAT_0051d7a6 = 0;
  _DAT_0051d7a8 = 0x1000;
  _DAT_0051d7aa = 0;
  _DAT_0051d7ac = 0;
  _DAT_0051d7ae = 0;
  _DAT_0051d7b0 = 0x1000;
  _DAT_0051d7b4 = 0;
  _DAT_0051d7b8 = 0;
  _DAT_0051d7bc = 0;
  local_20 = 0x1000;
  local_1e = 0;
  local_1c = 0;
  local_1a = 0;
  local_18 = 0x1000;
  local_16 = 0;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0x1000;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_58 = 0x1000;
  FUN_00407900(&local_20,&local_60);
  iVar5 = FUN_00407270(iVar7,iVar1 - iVar5);
  FUN_00407610(0x800 - iVar5,&DAT_0051d7a0);
  iVar6 = FUN_00407270(iVar2 - iVar6,uVar4);
  FUN_00407490(0x800 - iVar6,&DAT_0051d7a0);
  FUN_00407d30(&local_20,&DAT_0051d7a0);
  return 1;
}


