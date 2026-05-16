/*
 * Function: FUN_0041fbd0
 * Entry:    0041fbd0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041fbd0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  
  iVar8 = param_1;
  iVar11 = **(int **)(param_1 + 0x20);
  iVar6 = (*(int **)(param_1 + 0x20))[1];
  iVar9 = (**(int **)(param_1 + 0x38) - iVar11) + 1;
  local_1c = (*(int *)(*(int *)(param_1 + 0x50) + 4) - iVar6) + 1;
  iVar2 = __ftol();
  local_18 = iVar2 * 0x10000;
  local_14 = __ftol();
  local_14 = local_14 * 0x10000;
  iVar2 = (local_14 + iVar2 * -0x10000 + 0x10000) / iVar9;
  iVar3 = __ftol();
  iVar10 = iVar3 * 0x10000;
  iVar4 = __ftol();
  iVar9 = iVar11 + -1 + iVar9;
  iVar3 = ((iVar4 + 1) * 0x10000 + iVar3 * -0x10000) / local_1c;
  puVar1 = (uint *)(param_1 + 8);
  local_1c = iVar6 + -1 + local_1c;
  param_1 = iVar6;
  if ((*puVar1 & 8) != 0) {
    if ((((iVar9 < 0) || (local_1c < 0)) || (iVar4 = DAT_0045f7f8 + -1, iVar4 < iVar11)) ||
       (iVar5 = DAT_0045f7fc + -1, iVar5 < iVar6)) {
      PTR_DAT_0045f810 = (undefined *)0x0;
      return;
    }
    if (iVar11 < 0) {
      local_18 = local_18 - iVar2 * iVar11;
      iVar11 = 0;
    }
    if (iVar4 < iVar9) {
      local_14 = local_14 + ((DAT_0045f7f8 - iVar9) + -1) * iVar2;
      iVar9 = iVar4;
    }
    if (iVar6 < 0) {
      param_1 = 0;
    }
    if (iVar5 < local_1c) {
      iVar10 = iVar10 + ((local_1c - DAT_0045f7fc) + 1) * iVar3;
      local_1c = iVar5;
    }
    *(uint *)(iVar8 + 8) = *puVar1 & 0xfffffff7;
  }
  iVar6 = (iVar9 - iVar11) + 1;
  if (0 < iVar6) {
    iVar6 = ((local_14 - local_18) + 0x10000) / iVar6;
    if ((*(byte *)(iVar8 + 8) & 1) == 0) {
      if (param_1 <= local_1c) {
        piVar7 = (int *)(&DAT_00561908 + local_1c * 0x40);
        iVar8 = (local_1c - param_1) + 1;
        do {
          piVar7[2] = iVar11;
          *piVar7 = iVar11;
          piVar7[3] = iVar9;
          piVar7[1] = iVar9;
          piVar7[4] = local_18;
          piVar7[5] = iVar6;
          piVar7[6] = iVar10;
          piVar7[7] = 0;
          iVar10 = iVar10 + iVar3;
          piVar7 = piVar7 + -0x10;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else if (param_1 <= local_1c) {
      piVar7 = (int *)(&DAT_00561908 + local_1c * 0x40);
      local_8 = (local_1c - param_1) + 1;
      do {
        piVar7[2] = iVar11;
        *piVar7 = iVar11;
        piVar7[3] = iVar9;
        piVar7[1] = iVar9;
        piVar7[4] = local_18;
        piVar7[5] = iVar6;
        piVar7[6] = iVar10;
        piVar7[7] = 0;
        iVar2 = *(int *)(iVar8 + 0x10) << 0x10;
        piVar7[0xc] = iVar2;
        piVar7[10] = iVar2;
        piVar7[8] = iVar2;
        piVar7[0xd] = 0;
        piVar7[0xb] = 0;
        piVar7[9] = 0;
        piVar7 = piVar7 + -0x10;
        iVar10 = iVar10 + iVar3;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  DAT_0055ffc0 = param_1;
  DAT_005618ec = local_1c;
  return;
}


