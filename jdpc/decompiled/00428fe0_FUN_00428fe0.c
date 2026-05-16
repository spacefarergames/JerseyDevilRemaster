/*
 * Function: FUN_00428fe0
 * Entry:    00428fe0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00428fe0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_004a6160;
  iVar6 = DAT_004a6160 * 2;
  iVar4 = 0;
  if (param_1 != 0) {
    DAT_004a618c = DAT_004a61ac + -1;
    DAT_004a6138 = DAT_004a61c4;
    DAT_004a61a0 = 0;
    DAT_004a619c = DAT_004a6164;
  }
  DAT_004a61c0 = DAT_004a61b0;
  DAT_004a6174 = DAT_004a61b0;
  DAT_004a6198 = DAT_004a619c;
  DAT_004a6154 = DAT_004a6144;
  DAT_004a616c = DAT_004a6144;
  DAT_004a6150 = DAT_004a6168;
  DAT_004a6158 = DAT_004a6168;
  uVar3 = 1;
  iVar5 = DAT_004a6138;
  if (DAT_004a6138 <= DAT_004a618c) {
    do {
      iVar2 = FUN_004292b0(uVar3);
      if (iVar2 == 0) {
        if (iVar4 != 0) break;
      }
      else if (iVar4 == 0) {
        if (DAT_004a6138 < iVar5) {
          DAT_004a6168 = DAT_004a6158;
          DAT_004a61b0 = DAT_004a6174;
          DAT_004a6144 = DAT_004a616c;
          DAT_004a619c = DAT_004a6198;
          DAT_004a6138 = iVar5;
        }
        iVar4 = 1;
      }
      iVar5 = iVar5 + 1;
      DAT_004a6150 = DAT_004a6150 + DAT_004a6170 * 4;
      DAT_004a6158 = DAT_004a6158 + DAT_004a6170 * 4;
      DAT_004a61c0 = DAT_004a61c0 + DAT_004a6170;
      DAT_004a6174 = DAT_004a6174 + DAT_004a6170;
      DAT_004a6154 = DAT_004a6154 + DAT_004a6198;
      DAT_004a616c = DAT_004a616c + DAT_004a6198;
      DAT_004a6198 = DAT_004a6198 + iVar6;
      uVar3 = 0;
    } while (iVar5 <= DAT_004a618c);
  }
  iVar6 = DAT_004a6138 + -1;
  DAT_004a6198 = DAT_004a619c + iVar1 * -2;
  DAT_004a6154 = DAT_004a6144 - DAT_004a6198;
  DAT_004a6150 = DAT_004a6168 + DAT_004a6170 * -4;
  DAT_004a6174 = DAT_004a61b0 - DAT_004a6170;
  uVar3 = 1;
  DAT_004a6158 = DAT_004a6150;
  DAT_004a616c = DAT_004a6154;
  DAT_004a61c0 = DAT_004a6174;
  if (DAT_004a61a0 <= iVar6) {
    do {
      iVar5 = FUN_004292b0(uVar3);
      if (iVar5 == 0) {
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else if (iVar4 == 0) {
        DAT_004a6168 = DAT_004a6158;
        DAT_004a61b0 = DAT_004a6174;
        DAT_004a6144 = DAT_004a616c;
        DAT_004a619c = DAT_004a6198;
        iVar4 = 1;
        DAT_004a6138 = iVar6;
      }
      DAT_004a6198 = DAT_004a6198 + iVar1 * -2;
      iVar6 = iVar6 + -1;
      DAT_004a6150 = DAT_004a6150 + DAT_004a6170 * -4;
      DAT_004a6158 = DAT_004a6158 + DAT_004a6170 * -4;
      DAT_004a61c0 = DAT_004a61c0 - DAT_004a6170;
      DAT_004a6174 = DAT_004a6174 - DAT_004a6170;
      DAT_004a6154 = DAT_004a6154 - DAT_004a6198;
      DAT_004a616c = DAT_004a616c - DAT_004a6198;
      uVar3 = 0;
    } while (DAT_004a61a0 <= iVar6);
  }
  return iVar4;
}


