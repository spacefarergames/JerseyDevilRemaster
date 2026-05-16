/*
 * Function: FUN_0042a190
 * Entry:    0042a190
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042a190(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_1c = (undefined4 *)(DAT_004a61b8 * 0x30 + DAT_004a6194);
  DAT_004a61b8 = DAT_004a61b8 + 1;
  local_98 = param_1[3];
  local_94 = param_1[2];
  local_74 = param_1[8];
  local_a0 = param_1[4];
  local_9c = param_1[5];
  local_84 = param_1[9];
  iVar7 = param_1[1];
  local_60 = param_1[7];
  local_78 = param_1[10];
  iVar5 = param_1[6];
  local_54 = param_1[0xb];
  local_a4 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_50 = 0xffffffff;
  local_5c = iVar5;
  local_44 = local_a0;
  local_40 = local_9c;
  local_30 = local_98;
  local_14 = local_94;
  local_10 = iVar7;
  if (iVar5 < local_84) {
    do {
      FUN_0042ae60(iVar5,local_60,local_74,iVar5,local_78,local_54,&local_58,&local_4c,&local_80,
                   &local_90,&local_64);
      local_a4 = local_a4 + local_58;
      local_b0 = local_b0 + local_4c;
      local_b4 = local_b4 + local_80;
      local_ac = local_ac + local_90;
      iVar7 = iVar7 - local_58;
      local_a8 = local_a8 + local_64;
      local_94 = local_94 - local_4c;
      local_98 = local_98 - local_80;
      local_a0 = local_a0 - local_90;
      local_9c = local_9c - local_64;
      iVar2 = FUN_0042afd0(iVar7,local_94,local_98,local_a0,local_9c);
      iVar3 = FUN_0042afd0(local_a4,local_b0,local_b4,local_ac,local_a8);
      if ((uint)(iVar2 + iVar3) < local_50) {
        local_50 = iVar2 + iVar3;
        local_8 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_84);
  }
  local_a4 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_94 = local_14;
  local_98 = local_30;
  local_20 = 0xffffffff;
  local_a0 = local_44;
  local_9c = local_40;
  iVar7 = local_60;
  iVar5 = local_10;
  if (local_60 < local_78) {
    do {
      FUN_0042ae60(local_5c,iVar7,local_74,local_84,iVar7,local_54,&local_58,&local_4c,&local_80,
                   &local_90,&local_64);
      local_a4 = local_a4 + local_58;
      local_b0 = local_b0 + local_4c;
      local_b4 = local_b4 + local_80;
      local_ac = local_ac + local_90;
      iVar5 = iVar5 - local_58;
      local_a8 = local_a8 + local_64;
      local_94 = local_94 - local_4c;
      local_98 = local_98 - local_80;
      local_a0 = local_a0 - local_90;
      local_9c = local_9c - local_64;
      iVar2 = FUN_0042afd0(iVar5,local_94,local_98,local_a0,local_9c);
      iVar3 = FUN_0042afd0(local_a4,local_b0,local_b4,local_ac,local_a8);
      if ((uint)(iVar2 + iVar3) < local_20) {
        local_20 = iVar2 + iVar3;
        local_c = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_78);
  }
  local_a4 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_38 = local_10;
  local_94 = local_14;
  local_98 = local_30;
  local_a0 = local_44;
  local_9c = local_40;
  local_18 = 0xffffffff;
  iVar7 = local_74;
  if (local_74 < local_54) {
    do {
      FUN_0042ae60(local_5c,local_60,iVar7,local_84,local_78,iVar7,&local_58,&local_4c,&local_80,
                   &local_90,&local_64);
      local_a4 = local_a4 + local_58;
      local_b0 = local_b0 + local_4c;
      local_b4 = local_b4 + local_80;
      local_ac = local_ac + local_90;
      local_a8 = local_a8 + local_64;
      local_38 = local_38 - local_58;
      local_94 = local_94 - local_4c;
      local_98 = local_98 - local_80;
      local_a0 = local_a0 - local_90;
      local_9c = local_9c - local_64;
      iVar5 = FUN_0042afd0(local_38,local_94,local_98,local_a0,local_9c);
      iVar2 = FUN_0042afd0(local_a4,local_b0,local_b4,local_ac,local_a8);
      if ((uint)(iVar5 + iVar2) < local_18) {
        local_18 = iVar5 + iVar2;
        local_4 = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_54);
  }
  puVar1 = local_1c;
  cVar8 = local_20 < local_50;
  local_38 = 0;
  uVar6 = local_50;
  if ((bool)cVar8) {
    uVar6 = local_20;
  }
  if (local_18 < uVar6) {
    cVar8 = '\x02';
  }
  local_34 = local_84;
  local_3c = local_78;
  local_48 = local_54;
  if (cVar8 == '\0') {
    local_88 = local_8;
    local_6c = local_8 + 1;
    local_8c = local_78;
    local_70 = local_60;
  }
  else {
    if (cVar8 != '\x01') {
      if (cVar8 == '\x02') {
        local_88 = local_84;
        local_8c = local_78;
        local_7c = local_4;
        local_68 = local_4 + 1;
        local_70 = local_60;
        local_6c = local_5c;
      }
      goto LAB_0042a7ad;
    }
    local_88 = local_84;
    local_8c = local_c;
    local_70 = local_c + 1;
    local_6c = local_5c;
  }
  local_7c = local_54;
  local_68 = local_74;
LAB_0042a7ad:
  local_2c = local_60;
  local_28 = local_5c;
  local_24 = local_74;
  FUN_0042aaa0(local_5c,local_60,local_74,local_88,local_8c,local_7c,&local_28,&local_2c,&local_24,
               &local_88,&local_8c,&local_7c);
  FUN_0042aaa0(local_6c,local_70,local_68,local_34,local_3c,local_48,&local_6c,&local_70,&local_68,
               &local_34,&local_3c,&local_48);
  FUN_0042ae60(local_28,local_2c,local_24,local_88,local_8c,local_7c,&local_a4,&local_b0,&local_b4,
               &local_ac,&local_a8);
  iVar5 = local_10 - local_a4;
  iVar2 = local_14 - local_b0;
  local_98 = local_30 - local_b4;
  local_a0 = local_44 - local_ac;
  local_9c = local_40 - local_a8;
  uVar4 = FUN_0042afd0(local_a4,local_b0,local_b4,local_ac,local_a8);
  iVar7 = local_98;
  *param_1 = uVar4;
  param_1[1] = local_a4;
  param_1[2] = local_b0;
  param_1[3] = local_b4;
  param_1[4] = local_ac;
  param_1[5] = local_a8;
  param_1[6] = local_28;
  param_1[7] = local_2c;
  param_1[8] = local_24;
  param_1[9] = local_88;
  param_1[10] = local_8c;
  param_1[0xb] = local_7c;
  uVar4 = FUN_0042afd0(iVar5,iVar2,local_98,local_a0,local_9c);
  *puVar1 = uVar4;
  puVar1[1] = iVar5;
  puVar1[2] = iVar2;
  puVar1[3] = iVar7;
  puVar1[4] = local_a0;
  puVar1[5] = local_9c;
  puVar1[6] = local_6c;
  puVar1[7] = local_70;
  puVar1[8] = local_68;
  puVar1[9] = local_34;
  puVar1[10] = local_3c;
  puVar1[0xb] = local_48;
  iVar7 = 0;
  if (((local_7c - local_2c) - local_24) + local_8c + local_88 != local_28) {
    iVar7 = 2;
  }
  if ((((local_48 - local_6c) - local_70) - local_68) + local_3c + local_34 != 0) {
    iVar7 = iVar7 + 1;
  }
  switch(iVar7) {
  case 0:
    *(undefined4 *)(DAT_004a61a4 + 4) = *(undefined4 *)(DAT_004a61a4 + DAT_004a615c * 4);
    DAT_004a615c = DAT_004a615c + -1;
    if (DAT_004a615c != 0) {
      FUN_0042adc0();
      return;
    }
    break;
  case 1:
    *(undefined4 **)(DAT_004a61a4 + 4) = puVar1;
    FUN_0042adc0();
    return;
  case 2:
    FUN_0042adc0();
    return;
  case 3:
    FUN_0042adc0();
    FUN_0042ae20(puVar1);
  }
  return;
}


