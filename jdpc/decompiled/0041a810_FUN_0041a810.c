/*
 * Function: FUN_0041a810
 * Entry:    0041a810
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041a810(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = *(int *)(*param_1 + 4);
  local_14 = *(int *)(*param_2 + 4);
  local_18 = local_14 - iVar6;
  if (0 < local_18) {
    iVar3 = (int)(0x10000 / (longlong)local_18);
    iVar7 = (param_2[3] - param_1[3]) * iVar3;
    iVar8 = (param_2[4] - param_1[4]) * iVar3;
    iVar3 = (param_2[5] - param_1[5]) * iVar3;
    iVar10 = param_1[3] << 0x10;
    iVar9 = param_1[5] << 0x10;
    if (iVar6 <= local_14) {
      pcVar11 = &DAT_00561906 + iVar6 * 0x40;
      local_10 = local_18 + 1;
      param_2 = (int *)(param_1[4] << 0x10);
      local_c = iVar3;
      local_8 = iVar8;
      local_4 = iVar7;
      do {
        if (*pcVar11 != '\x01') {
          *pcVar11 = '\x01';
          iVar6 = (*(int *)(pcVar11 + 0xe) - *(int *)(pcVar11 + 10)) + 1;
          if (0 < iVar6) {
            bVar2 = false;
            uVar4 = (undefined4)(0x10000 / (longlong)iVar6);
            if (*(int *)(pcVar11 + 2) <= *(int *)(pcVar11 + 6)) {
              uVar5 = FUN_0041f330(&local_1c,*(int *)(pcVar11 + 0x22) - iVar10,uVar4);
              *(int *)(pcVar11 + 0x22) = iVar10;
              *(undefined4 *)(pcVar11 + 0x26) = uVar5;
              uVar5 = FUN_0041f330(&local_18,*(int *)(pcVar11 + 0x2a) - (int)param_2,uVar4);
              *(undefined4 *)(pcVar11 + 0x2e) = uVar5;
              *(int **)(pcVar11 + 0x2a) = param_2;
              iVar6 = FUN_0041f330(&local_14,*(int *)(pcVar11 + 0x32) - iVar9,uVar4);
              iVar3 = *(int *)(pcVar11 + 2) - *(int *)(pcVar11 + 10);
              *(int *)(pcVar11 + 0x36) = iVar6;
              *(int *)(pcVar11 + 0x32) = iVar9;
              if (0 < iVar3) {
                *(int *)(pcVar11 + 0x22) =
                     *(int *)(pcVar11 + 0x22) + iVar3 * *(int *)(pcVar11 + 0x26);
                *(int *)(pcVar11 + 0x2a) =
                     *(int *)(pcVar11 + 0x2a) + iVar3 * *(int *)(pcVar11 + 0x2e);
                *(int *)(pcVar11 + 0x32) = iVar3 * iVar6 + iVar9;
              }
              FUN_0041f350(pcVar11 + -6);
              bVar2 = true;
            }
            iVar3 = local_c;
            iVar8 = local_8;
            iVar7 = local_4;
            for (puVar1 = *(undefined4 **)(pcVar11 + -6); local_c = iVar3, local_8 = iVar8,
                local_4 = iVar7, puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
              if ((int)puVar1[2] <= (int)puVar1[3]) {
                if (bVar2) {
                  puVar1[0xb] = local_1c;
                  puVar1[10] = iVar10;
                  puVar1[0xd] = local_18;
                  puVar1[0xc] = param_2;
                  puVar1[0xe] = iVar9;
                  puVar1[0xf] = local_14;
                }
                else {
                  uVar5 = FUN_0041f330(&local_1c,puVar1[10] - iVar10,uVar4);
                  puVar1[10] = iVar10;
                  puVar1[0xb] = uVar5;
                  uVar5 = FUN_0041f330(&local_18,puVar1[0xc] - (int)param_2,uVar4);
                  puVar1[0xd] = uVar5;
                  puVar1[0xc] = param_2;
                  uVar5 = FUN_0041f330(&local_14,puVar1[0xe] - iVar9,uVar4);
                  puVar1[0xf] = uVar5;
                  puVar1[0xe] = iVar9;
                  bVar2 = true;
                }
                iVar6 = puVar1[2] - puVar1[4];
                if (0 < iVar6) {
                  puVar1[10] = puVar1[10] + iVar6 * puVar1[0xb];
                  puVar1[0xc] = puVar1[0xc] + iVar6 * puVar1[0xd];
                  puVar1[0xe] = puVar1[0xe] + iVar6 * puVar1[0xf];
                }
                FUN_0041f350(puVar1);
              }
              iVar3 = local_c;
              iVar8 = local_8;
              iVar7 = local_4;
            }
          }
        }
        iVar10 = iVar10 + iVar7;
        param_2 = (int *)((int)param_2 + iVar8);
        iVar9 = iVar9 + iVar3;
        pcVar11 = pcVar11 + 0x40;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  return;
}


