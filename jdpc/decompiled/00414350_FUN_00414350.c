/*
 * Function: FUN_00414350
 * Entry:    00414350
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00414350(short *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined2 uVar7;
  
  pfVar9 = (float *)(*param_1 * 0x10 + DAT_0066d6c8);
  pfVar10 = (float *)(param_1[1] * 0x10 + DAT_0066d6c8);
  pfVar11 = (float *)(param_1[2] * 0x10 + DAT_0066d6c8);
  pfVar8 = (float *)(DAT_0066d6c8 + param_1[3] * 0x10);
  fVar1 = pfVar8[2];
  if (((DAT_0051d7f8 < pfVar9[2]) && (DAT_0051d7f8 < pfVar10[2])) && (DAT_0051d7f8 < pfVar11[2])) {
    if (fVar1 >= DAT_0051d7f8 && (fVar1 == DAT_0051d7f8) == 0) {
      return CONCAT22((short)((uint)DAT_0051d7f8 >> 0x10),
                      (ushort)(fVar1 < DAT_0051d7f8) << 8 |
                      (ushort)(NAN(fVar1) || NAN(DAT_0051d7f8)) << 10 |
                      (ushort)(fVar1 == DAT_0051d7f8) << 0xe);
    }
  }
  if (((pfVar9[2] < DAT_0051d808) && (pfVar10[2] < DAT_0051d808)) && (pfVar11[2] < DAT_0051d808)) {
    if (fVar1 < DAT_0051d808) {
      return CONCAT22((short)((uint)DAT_0051d808 >> 0x10),
                      (ushort)(fVar1 < DAT_0051d808) << 8 |
                      (ushort)(NAN(fVar1) || NAN(DAT_0051d808)) << 10 |
                      (ushort)(fVar1 == DAT_0051d808) << 0xe);
    }
  }
  fVar1 = *pfVar9;
  fVar5 = (float)DAT_0066b654;
  fVar2 = *pfVar10;
  fVar3 = *pfVar11;
  fVar4 = *pfVar8;
  uVar7 = (undefined2)((uint)fVar4 >> 0x10);
  iVar6 = (uint)CONCAT21(uVar7,fVar1 < fVar5) << 8;
  if (((fVar1 >= fVar5) && (iVar6 = (uint)CONCAT21(uVar7,fVar2 < fVar5) << 8, fVar2 >= fVar5)) &&
     (iVar6 = (uint)CONCAT21(uVar7,fVar3 < fVar5) << 8, fVar3 >= fVar5)) {
    iVar6 = CONCAT22(uVar7,(ushort)(fVar4 < fVar5) << 8 | (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                           (ushort)(fVar4 == fVar5) << 0xe);
    if (fVar4 >= fVar5) {
      return iVar6;
    }
  }
  fVar5 = (float)DAT_0066b650;
  if (((fVar1 <= fVar5) && (fVar2 <= fVar5)) && (fVar3 <= fVar5)) {
    if (fVar4 < fVar5 || (fVar4 == fVar5) != 0) {
      return CONCAT22((short)((uint)iVar6 >> 0x10),
                      (ushort)(fVar4 < fVar5) << 8 | (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                      (ushort)(fVar4 == fVar5) << 0xe);
    }
  }
  fVar1 = pfVar9[1];
  fVar5 = (float)DAT_0066b65c;
  fVar2 = pfVar11[1];
  fVar3 = pfVar10[1];
  fVar4 = pfVar8[1];
  uVar7 = (undefined2)((uint)fVar2 >> 0x10);
  iVar6 = (uint)CONCAT21(uVar7,fVar1 < fVar5) << 8;
  if (((fVar1 >= fVar5) && (iVar6 = (uint)CONCAT21(uVar7,fVar3 < fVar5) << 8, fVar3 >= fVar5)) &&
     (iVar6 = (uint)CONCAT21(uVar7,fVar2 < fVar5) << 8, fVar2 >= fVar5)) {
    iVar6 = CONCAT22(uVar7,(ushort)(fVar4 < fVar5) << 8 | (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                           (ushort)(fVar4 == fVar5) << 0xe);
    if (fVar4 >= fVar5) {
      return iVar6;
    }
  }
  fVar5 = (float)DAT_0066b658;
  uVar7 = (undefined2)((uint)iVar6 >> 0x10);
  iVar6 = CONCAT22(uVar7,(ushort)(fVar1 < fVar5) << 8 | (ushort)(NAN(fVar1) || NAN(fVar5)) << 10 |
                         (ushort)(fVar1 == fVar5) << 0xe);
  if (fVar1 < fVar5 != 0 || (fVar1 == fVar5) != 0) {
    iVar6 = CONCAT22(uVar7,(ushort)(fVar3 < fVar5) << 8 | (ushort)(NAN(fVar3) || NAN(fVar5)) << 10 |
                           (ushort)(fVar3 == fVar5) << 0xe);
    if (fVar3 < fVar5 != 0 || (fVar3 == fVar5) != 0) {
      iVar6 = CONCAT22(uVar7,(ushort)(fVar2 < fVar5) << 8 | (ushort)(NAN(fVar2) || NAN(fVar5)) << 10
                             | (ushort)(fVar2 == fVar5) << 0xe);
      if (fVar2 < fVar5 != 0 || (fVar2 == fVar5) != 0) {
        iVar6 = CONCAT22(uVar7,(ushort)(fVar4 < fVar5) << 8 |
                               (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                               (ushort)(fVar4 == fVar5) << 0xe);
        if (fVar4 < fVar5 || (fVar4 == fVar5) != 0) {
          return iVar6;
        }
      }
    }
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}


