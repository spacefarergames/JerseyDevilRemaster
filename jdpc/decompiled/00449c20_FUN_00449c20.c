/*
 * Function: FUN_00449c20
 * Entry:    00449c20
 * Warning:  Decompiled pseudocode, not original source.
 */


bool FUN_00449c20(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  
  if (DAT_004a4f74 == 0) {
    return false;
  }
  iVar6 = param_1[5];
  if ((iVar6 == DAT_004a5008) && (iVar6 == DAT_004a5018)) goto LAB_00449df4;
  if (DAT_004a62b8 == 0) {
    FUN_00449e90(1,1,iVar6,4,1,0,0,2,0,0,0);
    iVar6 = param_1[5];
    uVar8 = 0;
    uVar3 = 0;
    uVar10 = 0;
    uVar4 = 2;
    uVar1 = 0;
    uVar9 = 5;
    uVar7 = 10;
LAB_00449de8:
    uVar5 = 1;
    uVar11 = 0;
  }
  else {
    if (DAT_004a6358 != 0) {
      uVar3 = 0;
      uVar8 = 0;
      uVar10 = DAT_004a635c._2_2_;
    }
    else {
      uVar3 = DAT_004a635c & 0xffff;
      uVar8 = DAT_004a635c._2_2_;
      uVar10 = 0;
    }
    FUN_00449e90(1,DAT_004a6358 == 0,iVar6,DAT_004a635a,uVar8,uVar3,uVar10,DAT_004a6360 & 0xffff,
                 DAT_004a6360 >> 0x10,DAT_004a6364 & 0xffff,DAT_004a6364 >> 0x10);
    uVar8 = DAT_004a6310._2_2_;
    uVar10 = DAT_004a630c._2_2_;
    uVar7 = DAT_004a6306;
    if (DAT_004a6304 == 0) {
      uVar3 = DAT_004a6310 & 0xffff;
      uVar4 = DAT_004a630c & 0xffff;
      uVar1 = DAT_004a6308 & 0xffff;
      iVar6 = param_1[5];
      uVar9 = DAT_004a6308._2_2_;
      goto LAB_00449de8;
    }
    uVar3 = DAT_004a6310 & 0xffff;
    uVar4 = DAT_004a630c & 0xffff;
    iVar6 = param_1[5];
    uVar1 = 0;
    uVar9 = 0;
    uVar5 = 0;
    uVar11 = DAT_004a6308._2_2_;
  }
  FUN_00449e90(0,uVar5,iVar6,uVar7,uVar9,uVar1,uVar11,uVar4,uVar10,uVar3,uVar8);
LAB_00449df4:
  iVar6 = param_1[7];
  if (DAT_004a500c < DAT_004a501c) {
    if ((iVar6 < DAT_004a500c) || (DAT_004a501c < iVar6)) {
      return false;
    }
    if ((DAT_004a500c < iVar6) && (iVar6 < DAT_004a501c)) {
      return true;
    }
  }
  else {
    if ((iVar6 < DAT_004a501c) || (DAT_004a500c < iVar6)) {
      return true;
    }
    if ((DAT_004a501c < iVar6) && (iVar6 < DAT_004a500c)) {
      return false;
    }
  }
  iVar2 = (*param_1 + (param_1[1] + param_1[2] * 0x3c) * 0x3c) * 1000;
  if (iVar6 != DAT_004a500c) {
    return iVar2 < DAT_004a5020;
  }
  return DAT_004a5010 <= iVar2;
}


