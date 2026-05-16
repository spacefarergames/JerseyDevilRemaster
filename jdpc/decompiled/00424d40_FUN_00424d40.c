/*
 * Function: FUN_00424d40
 * Entry:    00424d40
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00424d40(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_30;
  undefined4 local_1c [2];
  ushort uStack_14;
  ushort local_12;
  
  FUN_004108b0(param_1 + 4,local_1c);
  uVar9 = param_1;
  switch(local_1c[0]) {
  case 0:
    uVar9 = (uint)uStack_14 << 2;
    break;
  case 1:
    uVar9 = (uint)uStack_14 << 1;
    break;
  case 2:
    uVar9 = (uint)uStack_14;
    break;
  case 3:
    uVar9 = uStack_14 / 6;
  }
  iVar5 = FUN_004255c0(uVar9);
  iVar6 = FUN_004255c0((uint)local_12);
  if (DAT_0053e8a0._3_1_ != '\0') {
    if (iVar5 < (int)uVar9) {
      iVar5 = iVar5 * 2;
    }
    if (iVar6 < (int)(uint)local_12) {
      iVar6 = iVar6 * 2;
    }
  }
  if (DAT_004a0934 < iVar5) {
    iVar5 = DAT_004a0934;
  }
  if (DAT_004a0934 < iVar6) {
    iVar6 = DAT_004a0934;
  }
  iVar7 = iVar6;
  if ((DAT_004a60ec != 0) && (iVar7 = iVar5, iVar5 < iVar6)) {
    iVar7 = iVar6;
    iVar5 = iVar6;
  }
  local_30 = iVar5;
  if (iVar7 <= iVar5) {
    local_30 = iVar7;
  }
  if (DAT_004a60e8 == 0) {
    local_30 = 2;
  }
  bVar8 = 0;
  uVar9 = param_1;
  uVar10 = param_1;
  for (; 1 < local_30; local_30 = local_30 >> 1) {
    iVar11 = iVar5 >> (bVar8 & 0x1f);
    iVar6 = iVar7 >> (bVar8 & 0x1f);
    uVar9 = param_2;
    if (param_3 == 4) {
      if (param_2 == 0x6ce) {
        FUN_004253a0();
      }
    }
    else if (param_3 == 1) {
      uVar9 = 0x6cb;
    }
    if ((int)uVar9 < 0x6cb) {
      if ((int)DAT_004a6098 < (int)uVar9) {
        DAT_004a6098 = uVar9;
      }
      *(uint *)(&DAT_00557da0 + DAT_004a6094 * 4) = uVar9;
    }
    else {
      local_30 = 0;
    }
    if ((DAT_004a09a4 & 2) == 0) {
      if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
        (&DAT_0053ea80)[uVar9 * 0xc] = iVar11;
        (&DAT_0053ea84)[uVar9 * 0xc] = iVar6;
        uVar1 = DAT_004a60a4;
        uVar2 = DAT_004a60a8;
        uVar3 = DAT_004a60ac;
        uVar4 = DAT_004a60b0;
        switch(param_3) {
        case 0:
          uVar10 = *(int *)(&DAT_0053eaac + DAT_004a60a4 * 0x30) +
                   *(int *)(&DAT_0053eaa8 + DAT_004a60a4 * 0x30);
          uVar1 = uVar9;
          if ((uint)(DAT_004a60c8 + DAT_004a60b8) <= iVar6 * iVar11 * DAT_0045f804 + uVar10) {
            uVar10 = 0;
            uVar1 = DAT_004a60a4;
          }
          break;
        case 1:
          uVar10 = *(int *)(&DAT_0053eaac + DAT_004a60a8 * 0x30) +
                   *(int *)(&DAT_0053eaa8 + DAT_004a60a8 * 0x30);
          uVar2 = uVar9;
          if ((uint)(DAT_004a60cc + DAT_004a60c0) < iVar6 * iVar11 * DAT_0045f804 + uVar10) {
            uVar10 = 0;
            uVar2 = DAT_004a60a8;
          }
          break;
        case 2:
          uVar10 = *(int *)(&DAT_0053eaac + DAT_004a60ac * 0x30) +
                   *(int *)(&DAT_0053eaa8 + DAT_004a60ac * 0x30);
          uVar3 = uVar9;
          if ((uint)(DAT_004a60d0 + DAT_004a60bc) < iVar6 * iVar11 * DAT_0045f804 + uVar10) {
            uVar10 = 0;
            uVar3 = DAT_004a60ac;
          }
          break;
        case 4:
          uVar10 = *(int *)(&DAT_0053eaac + DAT_004a60b0 * 0x30) +
                   *(int *)(&DAT_0053eaa8 + DAT_004a60b0 * 0x30);
          uVar4 = uVar9;
          if ((uint)(DAT_004a60d4 + DAT_004a60c4) <= iVar6 * iVar11 * DAT_0045f804 + uVar10) {
            uVar10 = 0;
            uVar4 = DAT_004a60b0;
          }
        }
        DAT_004a60b0 = uVar4;
        DAT_004a60ac = uVar3;
        DAT_004a60a8 = uVar2;
        DAT_004a60a4 = uVar1;
        *(int *)(&DAT_0053eaa8 + uVar9 * 0x30) = iVar6 * iVar11 * DAT_0045f804;
        *(uint *)(&DAT_0053eaac + uVar9 * 0x30) = uVar10;
        if (uVar10 != 0) {
          FUN_004237f0(param_1,uVar10,uVar9,iVar11,iVar6);
        }
      }
    }
    else {
      FUN_00422ef0(param_1,DAT_004a60b4,uVar9,iVar11,iVar6);
      (*DAT_00810360)(0xde1);
      (*DAT_0081039c)(0xde1,uVar9);
      (*DAT_008102f4)(0xde1,0x2802,0x46240400);
      (*DAT_008102f4)(0xde1,0x2803,0x46240400);
      uVar14 = 0x46180400;
      (*DAT_008102f4)(0xde1,0x2801,0x46180400);
      (*DAT_008102f4)(0xde1,0x2800,0x46180400);
      (*DAT_0081074c)();
      if ((DAT_004a60e0 == 0) || (DAT_00557980 == 0)) {
        if ((&DAT_0053ea89)[uVar9 * 0x30] == '\0') {
          uVar13 = 0x1907;
          uVar12 = 3;
        }
        else {
          uVar13 = 0x1908;
          uVar12 = 4;
        }
      }
      else {
        uVar13 = 0x1900;
        uVar12 = 0x80e5;
      }
      (*DAT_0081320c)(0xde1,uVar14,uVar12,iVar11,iVar6,0,uVar13,0x1401,DAT_004a60b4);
      (*DAT_0081074c)();
    }
    bVar8 = bVar8 + 1;
  }
  if ((int)uVar9 < 0x6cb) {
    DAT_004a6094 = DAT_004a6094 + 1;
    if (((&DAT_0053ea89)[uVar9 * 0x30] & 1) != 0) {
      _DAT_004a60a0 = _DAT_004a60a0 + 1;
    }
    if ((&DAT_0053ea89)[uVar9 * 0x30] != 0) {
      _DAT_004a609c = _DAT_004a609c + 1;
    }
  }
  return uVar9;
}


