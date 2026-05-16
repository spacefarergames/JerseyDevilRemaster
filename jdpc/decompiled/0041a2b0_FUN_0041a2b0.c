/*
 * Function: FUN_0041a2b0
 * Entry:    0041a2b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041a2b0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_18 = *(int *)(*param_1 + 4);
  local_1c = *(int *)(*param_2 + 4);
  local_20 = local_1c - local_18;
  if (-1 < local_20) {
    if (local_20 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (int)(0x10000 / (longlong)local_20);
    }
    iVar3 = __ftol();
    iVar4 = __ftol();
    iVar8 = (iVar4 - iVar3) * iVar9;
    iVar3 = iVar3 << 0x10;
    local_10 = iVar8;
    iVar5 = __ftol();
    iVar4 = __ftol();
    iVar4 = (iVar4 - iVar5) * iVar9;
    local_38 = param_1[3] << 0x10;
    local_c = (param_2[3] - param_1[3]) * iVar9;
    local_34 = param_1[4] << 0x10;
    local_8 = (param_2[4] - param_1[4]) * iVar9;
    local_4 = (param_2[5] - param_1[5]) * iVar9;
    iVar9 = param_1[5] << 0x10;
    if (local_18 <= local_1c) {
      pcVar10 = &DAT_00561906 + local_18 * 0x40;
      local_18 = local_20 + 1;
      param_1 = (int *)(iVar5 << 0x10);
      local_14 = iVar4;
      do {
        if ((*pcVar10 == '\0') && (-1 < *(int *)(pcVar10 + 0xe) - *(int *)(pcVar10 + 10))) {
          uVar6 = (undefined4)
                  (0x10000 / (longlong)((*(int *)(pcVar10 + 0xe) - *(int *)(pcVar10 + 10)) + 1));
          bVar2 = false;
          *pcVar10 = '\x01';
          if (*(int *)(pcVar10 + 2) <= *(int *)(pcVar10 + 6)) {
            uVar7 = FUN_0041f330(&local_2c,*(int *)(pcVar10 + 0x12) - iVar3,uVar6);
            *(undefined4 *)(pcVar10 + 0x16) = uVar7;
            *(int *)(pcVar10 + 0x12) = iVar3;
            uVar7 = FUN_0041f330(&local_28,*(int *)(pcVar10 + 0x1a) - (int)param_1,uVar6);
            *(int **)(pcVar10 + 0x1a) = param_1;
            *(undefined4 *)(pcVar10 + 0x1e) = uVar7;
            uVar7 = FUN_0041f330(&local_24,*(int *)(pcVar10 + 0x22) - local_38,uVar6);
            *(int *)(pcVar10 + 0x22) = local_38;
            *(undefined4 *)(pcVar10 + 0x26) = uVar7;
            uVar7 = FUN_0041f330(&local_20,*(int *)(pcVar10 + 0x2a) - local_34,uVar6);
            *(undefined4 *)(pcVar10 + 0x2e) = uVar7;
            *(int *)(pcVar10 + 0x2a) = local_34;
            uVar7 = FUN_0041f330(&local_1c,*(int *)(pcVar10 + 0x32) - iVar9,uVar6);
            *(undefined4 *)(pcVar10 + 0x36) = uVar7;
            iVar4 = *(int *)(pcVar10 + 2) - *(int *)(pcVar10 + 10);
            *(int *)(pcVar10 + 0x32) = iVar9;
            if (0 < iVar4) {
              *(int *)(pcVar10 + 0x1a) = *(int *)(pcVar10 + 0x1a) + local_28 * iVar4;
              *(int *)(pcVar10 + 0x12) = *(int *)(pcVar10 + 0x12) + local_2c * iVar4;
              *(int *)(pcVar10 + 0x22) = *(int *)(pcVar10 + 0x22) + local_24 * iVar4;
              *(int *)(pcVar10 + 0x2a) = *(int *)(pcVar10 + 0x2a) + local_20 * iVar4;
              *(int *)(pcVar10 + 0x32) = local_1c * iVar4 + iVar9;
            }
            bVar2 = true;
            FUN_0041f350(pcVar10 + -6);
          }
          iVar4 = local_14;
          iVar8 = local_10;
          for (puVar1 = *(undefined4 **)(pcVar10 + -6); local_14 = iVar4, local_10 = iVar8,
              puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
            if ((int)puVar1[2] <= (int)puVar1[3]) {
              if (bVar2) {
                puVar1[7] = local_2c;
                puVar1[6] = iVar3;
                puVar1[9] = local_28;
                puVar1[8] = param_1;
                puVar1[0xb] = local_24;
                puVar1[10] = local_38;
                puVar1[0xd] = local_20;
                puVar1[0xc] = local_34;
                puVar1[0xe] = iVar9;
                puVar1[0xf] = local_1c;
              }
              else {
                uVar7 = FUN_0041f330(&local_2c,puVar1[6] - iVar3,uVar6);
                puVar1[6] = iVar3;
                puVar1[7] = uVar7;
                uVar7 = FUN_0041f330(&local_28,puVar1[8] - (int)param_1,uVar6);
                puVar1[8] = param_1;
                puVar1[9] = uVar7;
                uVar7 = FUN_0041f330(&local_24,puVar1[10] - local_38,uVar6);
                puVar1[10] = local_38;
                puVar1[0xb] = uVar7;
                uVar7 = FUN_0041f330(&local_20,puVar1[0xc] - local_34,uVar6);
                puVar1[0xd] = uVar7;
                puVar1[0xc] = local_34;
                uVar7 = FUN_0041f330(&local_1c,puVar1[0xe] - iVar9,uVar6);
                puVar1[0xf] = uVar7;
                puVar1[0xe] = iVar9;
                bVar2 = true;
              }
              iVar4 = puVar1[2] - puVar1[4];
              if (0 < iVar4) {
                puVar1[6] = puVar1[6] + local_2c * iVar4;
                puVar1[8] = puVar1[8] + local_28 * iVar4;
                puVar1[10] = puVar1[10] + local_24 * iVar4;
                puVar1[0xc] = puVar1[0xc] + local_20 * iVar4;
                puVar1[0xe] = puVar1[0xe] + local_1c * iVar4;
              }
              FUN_0041f350(puVar1);
            }
            iVar4 = local_14;
            iVar8 = local_10;
          }
        }
        param_1 = (int *)((int)param_1 + iVar4);
        iVar3 = iVar3 + iVar8;
        local_38 = local_38 + local_c;
        local_34 = local_34 + local_8;
        iVar9 = iVar9 + local_4;
        pcVar10 = pcVar10 + 0x40;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  return;
}


