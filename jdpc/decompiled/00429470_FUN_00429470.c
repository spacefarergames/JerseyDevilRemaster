/*
 * Function: FUN_00429470
 * Entry:    00429470
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_00429470(ushort *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_58;
  uint *local_54;
  uint local_48 [4];
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  uint local_30 [6];
  uint local_18 [6];
  
  uVar1 = 0;
  local_48[2] = 0;
  iVar6 = 0;
  puVar3 = param_1;
  do {
    if (*puVar3 != 0) {
      iVar6 = iVar6 + 1;
      *(uint *)(PTR_DAT_004a0a24 + iVar6 * 4 + -4) = uVar1;
      local_48[2] = local_48[2] + *puVar3;
    }
    uVar1 = uVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar1 < 0x8000);
  local_48[1] = iVar6 + -1;
  local_48[0] = 0;
  local_48[3] = 0;
  FUN_004296e0(local_48);
  local_58 = 1;
  puVar7 = local_48;
  puVar8 = &DAT_004e1f60;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar1 = 1;
  if (1 < param_3) {
    local_54 = &DAT_004e1f78;
    do {
      uVar4 = 0xffffffff;
      uVar1 = 0xff;
      uVar2 = 0;
      puVar7 = &DAT_004e1f6c;
      do {
        if ((puVar7[-3] != puVar7[-2]) && (*puVar7 < uVar1)) {
          uVar4 = uVar2;
          uVar1 = *puVar7;
        }
        uVar2 = uVar2 + 1;
        puVar7 = puVar7 + 6;
      } while (uVar2 <= local_58 - 1);
      uVar1 = local_58;
      if (uVar4 == 0xffffffff) break;
      puVar7 = &DAT_004e1f60 + uVar4 * 6;
      puVar8 = local_48;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      if (((byte)(local_37 - local_38) < (byte)(local_35 - local_36)) ||
         (DAT_004e1f20 = 0, (byte)(local_37 - local_38) <= (byte)(local_35 - local_36))) {
        DAT_004e1f20 = 1;
      }
      if ((local_37 == local_38) && (local_35 == local_36)) {
        DAT_004e1f20 = 2;
      }
      FUN_00445da0(PTR_DAT_004a0a24 + local_48[0] * 4,(local_48[1] - local_48[0]) + 1,4,
                   &LAB_00429a30);
      uVar2 = 0;
      uVar1 = local_48[0];
      if (local_48[0] <= local_48[1] - 1) {
        piVar5 = (int *)(PTR_DAT_004a0a24 + local_48[0] * 4);
        do {
          if (local_48[2] >> 1 <= uVar2) break;
          iVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          uVar2 = uVar2 + param_1[iVar6];
          uVar1 = uVar1 + 1;
        } while (uVar1 <= local_48[1] - 1);
      }
      puVar7 = local_48;
      puVar8 = local_30;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_30[1] = uVar1 - 1;
      local_30[3] = local_48[3] + 1;
      local_30[2] = uVar2;
      FUN_004296e0(local_30);
      puVar7 = local_30;
      puVar8 = &DAT_004e1f60 + uVar4 * 6;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = local_48;
      puVar8 = local_18;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_18[2] = local_48[2] - uVar2;
      local_18[3] = local_48[3] + 1;
      local_18[0] = uVar1;
      FUN_004296e0(local_18);
      puVar7 = local_18;
      puVar8 = local_54;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_54 = local_54 + 6;
      uVar1 = local_58 + 1;
      if (uVar1 % 10 == 0) {
        FUN_00445c80(&DAT_004a2938,&DAT_004a0bc8);
      }
      local_58 = uVar1;
    } while (uVar1 < param_3);
  }
  FUN_00429770(param_1,param_2,uVar1);
  return uVar1;
}


