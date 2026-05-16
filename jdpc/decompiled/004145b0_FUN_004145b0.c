/*
 * Function: FUN_004145b0
 * Entry:    004145b0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_004145b0(int param_1,char param_2)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),param_2 << 2);
  uVar4 = (uint)(char)(param_2 << 2);
  uVar5 = 0;
  if (0 < (int)uVar4) {
    uVar3 = 0;
    do {
      fVar1 = *(float *)((uint)*(ushort *)(param_1 + uVar3 * 2) * 0x10 + 8 + DAT_0066d6c8);
      uVar3 = (uint)(ushort)((ushort)(fVar1 < DAT_0051d7f8) << 8 |
                             (ushort)(NAN(fVar1) || NAN(DAT_0051d7f8)) << 10 |
                            (ushort)(fVar1 == DAT_0051d7f8) << 0xe);
      if (fVar1 < DAT_0051d7f8 || (fVar1 == DAT_0051d7f8) != 0) break;
      uVar5 = uVar5 + 1;
      uVar3 = uVar5 & 0xffff;
    } while ((int)uVar3 < (int)uVar4);
  }
  if ((uVar5 & 0xffff) == uVar4) {
    return uVar3 & 0xffffff00;
  }
  uVar5 = 0;
  if (0 < (int)uVar4) {
    uVar3 = 0;
    do {
      fVar1 = *(float *)((uint)*(ushort *)(param_1 + uVar3 * 2) * 0x10 + 8 + DAT_0066d6c8);
      uVar3 = (uint)(ushort)((ushort)(fVar1 < DAT_0051d808) << 8 |
                             (ushort)(NAN(fVar1) || NAN(DAT_0051d808)) << 10 |
                            (ushort)(fVar1 == DAT_0051d808) << 0xe);
      if (fVar1 >= DAT_0051d808) break;
      uVar5 = uVar5 + 1;
      uVar3 = uVar5 & 0xffff;
    } while ((int)uVar3 < (int)uVar4);
  }
  if ((uVar5 & 0xffff) == uVar4) {
    return uVar3 & 0xffffff00;
  }
  fVar1 = (float)DAT_0066b654;
  uVar5 = 0;
  if (0 < (int)uVar4) {
    uVar3 = 0;
    do {
      fVar2 = *(float *)((uint)*(ushort *)(param_1 + uVar3 * 2) * 0x10 + DAT_0066d6c8);
      uVar3 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                            | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) break;
      uVar5 = uVar5 + 1;
      uVar3 = uVar5 & 0xffff;
    } while ((int)uVar3 < (int)uVar4);
  }
  if ((uVar5 & 0xffff) == uVar4) {
    return uVar3 & 0xffffff00;
  }
  fVar1 = (float)DAT_0066b650;
  uVar5 = 0;
  if (0 < (int)uVar4) {
    uVar3 = 0;
    do {
      fVar2 = *(float *)((uint)*(ushort *)(param_1 + uVar3 * 2) * 0x10 + DAT_0066d6c8);
      uVar3 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                            | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 >= fVar1) break;
      uVar5 = uVar5 + 1;
      uVar3 = uVar5 & 0xffff;
    } while ((int)uVar3 < (int)uVar4);
  }
  if ((uVar5 & 0xffff) == uVar4) {
    return uVar3 & 0xffffff00;
  }
  fVar1 = (float)DAT_0066b65c;
  uVar5 = 0;
  if (0 < (int)uVar4) {
    uVar3 = 0;
    do {
      fVar2 = *(float *)((uint)*(ushort *)(param_1 + uVar3 * 2) * 0x10 + 4 + DAT_0066d6c8);
      uVar3 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                            | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) break;
      uVar5 = uVar5 + 1;
      uVar3 = uVar5 & 0xffff;
    } while ((int)uVar3 < (int)uVar4);
  }
  if ((uVar5 & 0xffff) == uVar4) {
    return uVar3 & 0xffffff00;
  }
  fVar1 = (float)DAT_0066b658;
  uVar5 = 0;
  if (0 < (int)uVar4) {
    uVar3 = 0;
    do {
      fVar2 = *(float *)((uint)*(ushort *)(param_1 + uVar3 * 2) * 0x10 + 4 + DAT_0066d6c8);
      uVar3 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                            | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1 == 0) break;
      uVar5 = uVar5 + 1;
      uVar3 = uVar5 & 0xffff;
    } while ((int)uVar3 < (int)uVar4);
  }
  return CONCAT31((int3)(uVar3 >> 8),(uVar5 & 0xffff) != uVar4);
}


