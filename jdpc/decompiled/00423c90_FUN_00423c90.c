/*
 * Function: FUN_00423c90
 * Entry:    00423c90
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4
FUN_00423c90(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
            undefined1 *param_7)

{
  short *psVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_54;
  int local_50;
  byte local_48 [36];
  int aiStack_24 [9];
  
  iVar9 = param_2 + -1;
  iVar7 = param_3 * iVar9 + param_5;
  local_54 = 0;
  local_50 = 0;
  uVar5 = param_5;
  do {
    param_2 = 0;
    uVar12 = param_1 - 1;
    do {
      aiStack_24[local_54] = 0;
      if ((((-1 < (int)uVar12) && (-1 < iVar9)) && (iVar9 < param_4)) && ((int)uVar12 < param_3)) {
        if (param_6 == 0) {
          uVar11 = (int)uVar12 >> 0x1f;
          uVar10 = (uVar12 ^ uVar11) - uVar11 & 1 ^ uVar11;
          iVar6 = (param_3 / 2) * iVar9;
          if (uVar10 == uVar11) {
            uVar5 = *(byte *)(iVar6 + (int)uVar12 / 2 + param_5) & 0xf;
          }
          else if (uVar10 - uVar11 == 1) {
            uVar5 = (uint)(*(byte *)(iVar6 + (int)uVar12 / 2 + param_5) >> 4);
          }
          iVar6 = local_54 * 4;
          uVar2 = (&DAT_005579a1)[uVar5 * 4];
          local_48[iVar6] = (&DAT_005579a0)[uVar5 * 4];
          uVar3 = (&DAT_005579a2)[uVar5 * 4];
          *(undefined1 *)((int)aiStack_24 + iVar6 + -0x23) = uVar2;
          uVar2 = (&DAT_005579a3)[uVar5 * 4];
          *(undefined1 *)((int)aiStack_24 + iVar6 + -0x22) = uVar3;
          *(undefined1 *)((int)aiStack_24 + iVar6 + -0x21) = uVar2;
        }
        else if (param_6 == 1) {
          uVar5 = (uint)*(byte *)(uVar12 + iVar7);
          iVar6 = local_54 * 4;
          local_48[iVar6] = (&DAT_005579a0)[uVar5 * 4];
          *(undefined1 *)((int)aiStack_24 + iVar6 + -0x23) = (&DAT_005579a1)[uVar5 * 4];
          *(undefined1 *)((int)aiStack_24 + iVar6 + -0x22) = (&DAT_005579a2)[uVar5 * 4];
          *(undefined1 *)((int)aiStack_24 + iVar6 + -0x21) = (&DAT_005579a3)[uVar5 * 4];
        }
        else {
          if (param_6 != 2) {
            return 0;
          }
          iVar8 = param_5 + param_3 * 2 * iVar9;
          iVar6 = local_54 * 4;
          psVar1 = (short *)(iVar8 + uVar12 * 2);
          sVar4 = *psVar1;
          local_48[iVar6] = *(char *)(iVar8 + uVar12 * 2) << 3;
          *(char *)((int)aiStack_24 + iVar6 + -0x23) =
               (char)(CONCAT22((short)((uint)psVar1 >> 0x10),sVar4) >> 5) << 3;
          *(char *)((int)aiStack_24 + iVar6 + -0x22) = (char)(sVar4 >> 10) << 3;
          *(undefined1 *)((int)aiStack_24 + iVar6 + -0x21) = 0xff;
          if (sVar4 == 0) {
            *(undefined1 *)((int)aiStack_24 + iVar6 + -0x21) = 0;
          }
          else {
            *(undefined1 *)((int)aiStack_24 + iVar6 + -0x21) = 0xff;
          }
        }
        aiStack_24[local_54] = 1;
      }
      local_54 = local_54 + 1;
      uVar12 = uVar12 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < 3);
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + param_3;
    local_50 = local_50 + 1;
  } while (local_50 < 3);
  if (((DAT_004a0950._1_1_ != '\0') && (local_48[0x10] == '\0')) &&
     ((local_48[0x11] == '\0' && (local_48[0x12] == '\0')))) {
    *param_7 = 0;
    param_7[1] = 0;
    param_7[2] = 0;
    param_7[3] = local_48[0x13];
    return 1;
  }
  uVar11 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar13 = 0;
  uVar5 = 0;
  iVar7 = 0;
  do {
    if ((*(int *)((int)aiStack_24 + iVar7) != 0) &&
       (((DAT_004a0950._1_1_ == '\0' || (local_48[iVar7] != 0)) ||
        ((local_48[iVar7 + 1] != 0 || (local_48[iVar7 + 2] != 0)))))) {
      uVar5 = uVar5 + local_48[iVar7];
      uVar13 = uVar13 + local_48[iVar7 + 1];
      uVar10 = uVar10 + local_48[iVar7 + 2];
      uVar12 = uVar12 + local_48[iVar7 + 3];
      uVar11 = uVar11 + 1;
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x24);
  if (uVar11 != 0) {
    *param_7 = (char)(uVar5 / uVar11);
    param_7[1] = (char)(uVar13 / uVar11);
    param_7[2] = (char)(uVar10 / uVar11);
    param_7[3] = (char)(uVar12 / uVar11);
    return 1;
  }
  *param_7 = 0xff;
  param_7[1] = 0xff;
  param_7[2] = 0xff;
  param_7[3] = 0xff;
  return 1;
}


