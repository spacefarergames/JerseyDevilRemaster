/*
 * Function: FUN_00414770
 * Entry:    00414770
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00414770(short *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar7;
  int iVar6;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  
  fVar1 = *(float *)(*param_1 * 0x10 + 8 + DAT_0066d6c8);
  pfVar9 = (float *)(*param_1 * 0x10 + DAT_0066d6c8);
  fVar2 = *(float *)(param_1[1] * 0x10 + 8 + DAT_0066d6c8);
  pfVar10 = (float *)(param_1[1] * 0x10 + DAT_0066d6c8);
  pfVar11 = (float *)(param_1[2] * 0x10 + DAT_0066d6c8);
  pfVar8 = (float *)(DAT_0066d6c8 + param_1[3] * 0x10);
  fVar3 = pfVar8[2];
  if ((((1.0 < fVar1) && (1.0 < fVar2)) && (1.0 < pfVar11[2])) &&
     (fVar3 >= 1.0 && (fVar3 == 1.0) == 0)) {
    return CONCAT22((short)((uint)fVar3 >> 0x10),
                    (ushort)(fVar3 < 1.0) << 8 | (ushort)NAN(fVar3) << 10 |
                    (ushort)(fVar3 == 1.0) << 0xe);
  }
  if (((fVar1 < DAT_0051d808) && (fVar2 < DAT_0051d808)) &&
     ((pfVar11[2] < DAT_0051d808 && (fVar3 < DAT_0051d808)))) {
    return CONCAT22((short)((uint)DAT_0051d808 >> 0x10),
                    (ushort)(fVar3 < DAT_0051d808) << 8 |
                    (ushort)(NAN(fVar3) || NAN(DAT_0051d808)) << 10 |
                    (ushort)(fVar3 == DAT_0051d808) << 0xe);
  }
  fVar1 = *pfVar9;
  fVar2 = *pfVar10;
  fVar5 = (float)DAT_0066b654;
  fVar3 = *pfVar11;
  fVar4 = *pfVar8;
  uVar7 = (undefined2)((uint)fVar4 >> 0x10);
  iVar6 = (uint)CONCAT21(uVar7,fVar1 < fVar5) << 8;
  if (((fVar1 >= fVar5) && (iVar6 = (uint)CONCAT21(uVar7,fVar2 < fVar5) << 8, fVar2 >= fVar5)) &&
     ((iVar6 = (uint)CONCAT21(uVar7,fVar3 < fVar5) << 8, fVar3 >= fVar5 &&
      (iVar6 = CONCAT22(uVar7,(ushort)(fVar4 < fVar5) << 8 |
                              (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                              (ushort)(fVar4 == fVar5) << 0xe), fVar4 >= fVar5)))) {
    return iVar6;
  }
  fVar5 = (float)DAT_0066b650;
  if ((((fVar1 <= fVar5) && (fVar2 <= fVar5)) && (fVar3 <= fVar5)) &&
     (fVar4 < fVar5 || (fVar4 == fVar5) != 0)) {
    return CONCAT22((short)((uint)iVar6 >> 0x10),
                    (ushort)(fVar4 < fVar5) << 8 | (ushort)(NAN(fVar4) || NAN(fVar5)) << 10 |
                    (ushort)(fVar4 == fVar5) << 0xe);
  }
  fVar2 = (float)DAT_0066b65c;
  fVar1 = pfVar8[1];
  if (((fVar2 <= pfVar9[1]) && (fVar2 <= pfVar10[1])) && ((fVar2 <= pfVar11[1] && (fVar1 >= fVar2)))
     ) {
    return CONCAT22((short)((uint)fVar1 >> 0x10),
                    (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                    (ushort)(fVar1 == fVar2) << 0xe);
  }
  iVar6 = __ftol();
  *param_2 = iVar6;
  iVar6 = __ftol();
  param_2[1] = iVar6;
  iVar6 = __ftol();
  param_2[2] = iVar6;
  iVar6 = __ftol();
  param_2[3] = iVar6;
  if (*param_2 < DAT_0066b650) {
    *param_2 = DAT_0066b650;
  }
  if (DAT_0066b654 < param_2[1]) {
    param_2[1] = DAT_0066b654;
  }
  if (param_2[2] < DAT_0066b658) {
    param_2[2] = DAT_0066b658;
  }
  iVar6 = DAT_0066b65c;
  if (DAT_0066b65c < param_2[3]) {
    param_2[3] = DAT_0066b65c;
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}


