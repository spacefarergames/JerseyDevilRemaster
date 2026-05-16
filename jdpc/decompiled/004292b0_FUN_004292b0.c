/*
 * Function: FUN_004292b0
 * Entry:    004292b0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004292b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 local_4;
  
  iVar2 = DAT_004a6160;
  iVar5 = DAT_004a6160 * 2;
  if (param_1 != 0) {
    DAT_004a6130 = DAT_004a6178;
    DAT_004a6180 = DAT_004a61ac + -1;
    DAT_004a61a8 = 0;
    DAT_004a6188 = DAT_004a61bc;
  }
  iVar3 = DAT_004a6180;
  param_1 = 0;
  iVar6 = DAT_004a6188;
  uVar9 = DAT_004a6154;
  puVar8 = DAT_004a6150;
  puVar7 = DAT_004a61c0;
  for (iVar4 = DAT_004a6130; iVar4 <= DAT_004a6180; iVar4 = iVar4 + 1) {
    if (uVar9 < *puVar8) {
      if (DAT_004a6130 < iVar4) {
        DAT_004a6130 = iVar4;
        DAT_004a6150 = puVar8;
        DAT_004a6154 = uVar9;
        DAT_004a6188 = iVar6;
        DAT_004a61c0 = puVar7;
      }
      param_1 = 1;
      break;
    }
    puVar8 = puVar8 + 1;
    uVar9 = uVar9 + iVar6;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + iVar5;
  }
  local_4 = (undefined1)DAT_004a614c;
  iVar1 = DAT_004a61a8;
  while ((DAT_004a61a8 = iVar1, iVar4 <= iVar3 && (uVar9 < *puVar8))) {
    *puVar8 = uVar9;
    *puVar7 = local_4;
    iVar4 = iVar4 + 1;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    uVar9 = uVar9 + iVar6;
    iVar6 = iVar6 + iVar5;
    iVar1 = DAT_004a61a8;
  }
  puVar8 = DAT_004a6150 + -1;
  iVar5 = DAT_004a6188 + iVar2 * -2;
  puVar7 = DAT_004a61c0 + -1;
  iVar4 = DAT_004a6130 + -1;
  uVar9 = DAT_004a6154 - iVar5;
  if (param_1 == 0) {
    if (iVar4 < iVar1) {
      return 0;
    }
    do {
      if (uVar9 < *puVar8) {
        param_1 = 1;
        DAT_004a6130 = iVar4;
        DAT_004a6150 = puVar8;
        DAT_004a6154 = uVar9;
        DAT_004a6188 = iVar5;
        DAT_004a61c0 = puVar7;
        break;
      }
      iVar5 = iVar5 + iVar2 * -2;
      iVar4 = iVar4 + -1;
      puVar8 = puVar8 + -1;
      puVar7 = puVar7 + -1;
      uVar9 = uVar9 - iVar5;
    } while (iVar1 <= iVar4);
  }
  for (; (iVar1 <= iVar4 && (uVar9 < *puVar8)); uVar9 = uVar9 - iVar5) {
    *puVar8 = uVar9;
    *puVar7 = local_4;
    iVar5 = iVar5 + iVar2 * -2;
    iVar4 = iVar4 + -1;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -1;
  }
  return param_1;
}


