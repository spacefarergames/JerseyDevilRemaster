/*
 * Function: FUN_0041f580
 * Entry:    0041f580
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041f580(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar7 = *(int *)(*param_1 + 4);
  local_c = *(int *)(*param_2 + 4);
  local_10 = local_c - iVar7;
  if (-1 < local_10) {
    if (local_10 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)(0x10000 / (longlong)local_10);
    }
    iVar2 = __ftol();
    iVar3 = __ftol();
    iVar8 = (iVar3 - iVar2) * (int)param_1;
    iVar2 = iVar2 << 0x10;
    local_4 = iVar8;
    iVar4 = __ftol();
    iVar3 = __ftol();
    iVar3 = (iVar3 - iVar4) * (int)param_1;
    iVar4 = iVar4 << 0x10;
    if (iVar7 <= local_c) {
      pcVar9 = &DAT_00561906 + iVar7 * 0x40;
      local_c = local_10 + 1;
      local_8 = iVar3;
      do {
        if ((*pcVar9 == '\0') && (-1 < *(int *)(pcVar9 + 0xe) - *(int *)(pcVar9 + 10))) {
          uVar5 = (undefined4)
                  (0x10000 / (longlong)((*(int *)(pcVar9 + 0xe) - *(int *)(pcVar9 + 10)) + 1));
          param_2 = (int *)((uint)param_2 & 0xffffff00);
          *pcVar9 = '\x01';
          local_10 = uVar5;
          if (*(int *)(pcVar9 + 2) <= *(int *)(pcVar9 + 6)) {
            uVar6 = FUN_0041f330(&param_1,*(int *)(pcVar9 + 0x12) - iVar2,uVar5);
            *(undefined4 *)(pcVar9 + 0x16) = uVar6;
            *(int *)(pcVar9 + 0x12) = iVar2;
            uVar5 = FUN_0041f330(&local_14,*(int *)(pcVar9 + 0x1a) - iVar4,uVar5);
            *(undefined4 *)(pcVar9 + 0x1e) = uVar5;
            iVar7 = *(int *)(pcVar9 + 2) - *(int *)(pcVar9 + 10);
            *(int *)(pcVar9 + 0x1a) = iVar4;
            if (0 < iVar7) {
              *(int *)(pcVar9 + 0x12) = *(int *)(pcVar9 + 0x12) + (int)param_1 * iVar7;
              *(int *)(pcVar9 + 0x1a) = local_14 * iVar7 + iVar4;
            }
            param_2 = (int *)CONCAT31(param_2._1_3_,1);
            FUN_0041f350(pcVar9 + -6);
          }
          iVar3 = local_8;
          iVar8 = local_4;
          for (puVar1 = *(undefined4 **)(pcVar9 + -6); local_8 = iVar3, local_4 = iVar8,
              puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
            if ((int)puVar1[2] <= (int)puVar1[3]) {
              if ((char)param_2 == '\0') {
                uVar5 = FUN_0041f330(&param_1,puVar1[6] - iVar2,local_10);
                puVar1[7] = uVar5;
                puVar1[6] = iVar2;
                uVar5 = FUN_0041f330(&local_14,puVar1[8] - iVar4,local_10);
                puVar1[9] = uVar5;
                puVar1[8] = iVar4;
                param_2 = (int *)CONCAT31(param_2._1_3_,1);
              }
              else {
                puVar1[6] = iVar2;
                puVar1[7] = param_1;
                puVar1[9] = local_14;
                puVar1[8] = iVar4;
              }
              iVar7 = puVar1[2] - puVar1[4];
              if (0 < iVar7) {
                puVar1[6] = puVar1[6] + (int)param_1 * iVar7;
                puVar1[8] = puVar1[8] + local_14 * iVar7;
              }
              FUN_0041f350(puVar1);
            }
            iVar3 = local_8;
            iVar8 = local_4;
          }
        }
        iVar2 = iVar2 + iVar8;
        iVar4 = iVar4 + iVar3;
        pcVar9 = pcVar9 + 0x40;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  return;
}


