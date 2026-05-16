/*
 * Function: FUN_0042f9c0
 * Entry:    0042f9c0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042f9c0(int *param_1,int *param_2,short *param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  
  if ((int *)(DAT_0051d6e0 + 0x400) <= param_4 + 0x95) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = param_1[2];
  psVar4 = (short *)FUN_004315d0(param_4,param_3[5]);
  if (psVar4 == (short *)0x0) {
    *param_3 = 1;
    param_3[1] = 1;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = -1;
    return 0;
  }
  *(short *)((int)param_4 + 0x246) = 0;
  *(short *)(param_4 + 0x91) = 0;
  *(short *)(param_4 + 0x92) = 0;
  *(undefined2 *)((int)param_4 + (short)param_4[0x91] * 2 + 500) = 0;
  piVar13 = param_4 + (*(short *)((int)param_4 + 0x246) + 3) * 0x11;
  param_4[(short)param_4[0x91] + 0x55] = (int)piVar13;
  *(short *)piVar13 = *psVar4;
  *(short *)((int)piVar13 + 2) = psVar4[1];
  *(short *)(piVar13 + 1) = psVar4[2];
  *(short *)((int)piVar13 + 6) = psVar4[3];
  *(short *)(piVar13 + 2) = psVar4[4];
  *(short *)((int)piVar13 + 10) = psVar4[5];
  piVar13[3] = *(int *)(psVar4 + 6);
  piVar13[4] = *(int *)(psVar4 + 8);
  piVar13[5] = *(int *)(psVar4 + 10);
  piVar13[6] = *(int *)(psVar4 + 0xc);
  param_4[0x18] = *param_4;
  param_4[0x19] = param_4[1];
  param_4[0x1a] = param_4[2];
  param_4[0x1c] = *param_4;
  param_4[0x1d] = param_4[1];
  param_4[0x1e] = param_4[2];
  if (param_2 == (int *)0x0) {
LAB_00430db0:
    uVar1 = *(ushort *)
             (*(int *)(psVar4 + 0xe) +
             ((param_4[0x18] - piVar13[3]) / 0x118 +
             ((param_4[0x1a] - piVar13[4]) / 0x118) * (uint)*(ushort *)(piVar13 + 1)) * 2);
    *(ushort *)((int)param_4 + 0x24a) = uVar1;
    param_3[4] = uVar1 & 0xf000;
    *(ushort *)((int)param_4 + 0x24a) = *(ushort *)((int)param_4 + 0x24a) & 0xfff;
    param_4[0x14] = param_4[0x18] % 0x118;
    param_4[0x16] = param_4[0x1a] % 0x118;
    *(short *)(param_4 + 0x91) = (short)param_4[0x91] + 1;
    *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500) =
         (short)*(char *)(param_4[0x14] / 0x23 +
                         *(int *)(psVar4 + 0x10) +
                         (param_4[0x16] / 0x23 + (uint)*(ushort *)((int)param_4 + 0x24a) * 8) * 8);
    sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
    if ((0 < sVar3) && (sVar3 < 0x7e)) {
      sVar3 = -sVar3;
    }
    if (sVar3 == 0x7e) {
      param_1[1] = piVar13[5];
      *param_3 = (short)param_4[0x7d];
      param_3[1] = 8;
    }
    else {
      param_1[1] = piVar13[5];
      *param_3 = (short)param_4[0x7d];
      if (sVar3 != 0x7f) {
        param_3[1] = 2;
        sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
        *(short *)(param_4 + 0x93) = sVar3;
        if (0 < sVar3) {
          *(short *)(param_4 + 0x93) = -sVar3;
          *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 0x20;
        }
        sVar3 = *(short *)((int)piVar13 + 2) * (short)param_4[0x93];
        *(short *)(param_4 + 0x93) = sVar3;
        param_3[2] = sVar3;
        param_3[3] = (short)param_4[0x93];
        param_3[5] = (short)*piVar13;
        *(int *)(param_3 + 6) = piVar13[6];
        return 1;
      }
      param_3[1] = 6;
    }
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[5] = (short)*piVar13;
    *(int *)(param_3 + 6) = piVar13[6];
    return 1;
  }
  param_4[4] = *param_2;
  iVar5 = param_2[2];
  param_4[5] = iVar5;
  iVar6 = param_4[4];
  if (iVar6 == 0 && iVar5 == 0) goto LAB_00430db0;
  if (iVar6 == 0) {
LAB_00430606:
    if (iVar5 == 0) {
      return iVar6;
    }
    if (iVar5 < 1) {
      if (iVar5 < 0) {
        *(short *)((int)param_4 + 0xbe) = -0x118;
        *(short *)((int)param_4 + 0xc2) = -0x23;
        iVar5 = (param_4[2] - param_4[2] % 0x118) + -1;
        goto LAB_00430667;
      }
    }
    else {
      *(short *)((int)param_4 + 0xbe) = 0x118;
      *(short *)((int)param_4 + 0xc2) = 0x23;
      iVar5 = (param_4[2] - param_4[2] % 0x118) + 0x118;
LAB_00430667:
      param_4[0x29] = iVar5;
    }
    iVar5 = param_4[0x18] - piVar13[3];
    *(short *)(param_4 + 0x93) =
         (short)((ulonglong)((longlong)iVar5 * 0xea0ea0eb) >> 0x28) -
         ((short)(char)((char)(iVar5 / 0x1180000) + (char)(iVar5 >> 0x1f)) >> 0xf);
    param_4[0x14] = param_4[0x18] % 0x118;
    uVar10 = (param_4[0x18] % 0x118) / 0x23;
    *(short *)(param_4 + 0x94) = (short)uVar10;
    do {
      if ((param_4[0x1a] < piVar13[4]) ||
         (uVar10 = (uint)*(ushort *)((int)piVar13 + 10), (int)(piVar13[4] + uVar10) <= param_4[0x1a]
         )) {
        param_4[0x15] = param_4[0x19];
        param_4[0x19] = param_4[1];
        psVar4 = (short *)FUN_004315d0(param_4 + 0x18,CONCAT22((short)(uVar10 >> 0x10),param_3[5]));
        if (psVar4 == (short *)0x0) {
          sVar3 = (short)param_4[0x91];
          if (0 < sVar3) {
            sVar3 = sVar3 + -1;
          }
          *(short *)(param_4 + 0x92) = sVar3;
          param_1[1] = piVar13[5];
          param_2[2] = param_4[0x1e] - param_4[2];
          *param_3 = (short)param_4[0x7d];
          param_3[1] = 2;
          sVar3 = *(short *)((int)param_4 + (short)param_4[0x92] * 2 + 500);
          *(short *)(param_4 + 0x93) = sVar3;
          if (sVar3 == 0x7e) {
            *(short *)(param_4 + 0x93) = 0;
            param_3[1] = 2;
          }
          else if (0 < sVar3) {
            *(short *)(param_4 + 0x93) = -sVar3;
          }
          param_3[2] = *(short *)((int)piVar13 + 2) * (short)param_4[0x93];
          sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
          *(short *)(param_4 + 0x93) = sVar3;
          if (sVar3 == 0x7e) {
            *(short *)(param_4 + 0x93) = 0;
            param_3[1] = 2;
          }
          else if (0 < sVar3) {
            *(short *)(param_4 + 0x93) = -sVar3;
            *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 0x20;
          }
          param_3[3] = *(short *)((int)piVar13 + 2) * (short)param_4[0x93];
          param_3[5] = -1;
          *(int *)(param_3 + 6) = piVar13[6];
          return 0;
        }
        *(short *)((int)param_4 + 0x246) = 1;
        param_4[0x19] = param_4[0x15];
        piVar13 = param_4 + (*(short *)((int)param_4 + 0x246) + 3) * 0x11;
        *(short *)piVar13 = *psVar4;
        *(short *)((int)piVar13 + 2) = psVar4[1];
        *(short *)(piVar13 + 1) = psVar4[2];
        *(short *)((int)piVar13 + 6) = psVar4[3];
        *(short *)(piVar13 + 2) = psVar4[4];
        *(short *)((int)piVar13 + 10) = psVar4[5];
        piVar13[3] = *(int *)(psVar4 + 6);
        piVar13[4] = *(int *)(psVar4 + 8);
        piVar13[5] = *(int *)(psVar4 + 10);
        piVar13[6] = *(int *)(psVar4 + 0xc);
        iVar5 = param_4[0x18] - piVar13[3];
        *(short *)(param_4 + 0x93) =
             (short)((ulonglong)((longlong)iVar5 * 0xea0ea0eb) >> 0x28) -
             ((short)(char)((char)(iVar5 / 0x1180000) + (char)(iVar5 >> 0x1f)) >> 0xf);
      }
      uVar1 = *(ushort *)
               (*(int *)(psVar4 + 0xe) +
               (((param_4[0x1a] - piVar13[4]) / 0x118) * (uint)*(ushort *)(piVar13 + 1) +
               (int)(short)param_4[0x93]) * 2);
      *(ushort *)((int)param_4 + 0x24a) = uVar1;
      param_3[4] = uVar1 & 0xf000;
      *(ushort *)((int)param_4 + 0x24a) = *(ushort *)((int)param_4 + 0x24a) & 0xfff;
      param_4[0x16] = param_4[0x1a] % 0x118;
      param_4[0x1a] = param_4[0x1a] - param_4[0x1a] % 0x118;
      iVar5 = param_4[0x16];
      if (*(short *)((int)param_4 + 0xc2) < 1) {
        iVar5 = (iVar5 - iVar5 % 0x23) + -1;
      }
      else {
        iVar5 = (iVar5 - iVar5 % 0x23) + 0x23;
      }
      param_4[7] = iVar5;
      do {
        piVar9 = param_4 + 0x91;
        *(short *)piVar9 = (short)*piVar9 + 1;
        iVar5 = (int)((ulonglong)((longlong)param_4[0x16] * -0x15f15f15) >> 0x20) + param_4[0x16];
        *(short *)((int)param_4 + (short)*piVar9 * 2 + 500) =
             (short)*(char *)(*(int *)(psVar4 + 0x10) +
                              (((iVar5 >> 5) - (iVar5 >> 0x1f)) +
                              (uint)*(ushort *)((int)param_4 + 0x24a) * 8) * 8 +
                             (int)(short)param_4[0x94]);
        param_4[(short)*piVar9 + 0x55] = (int)piVar13;
        sVar3 = *(short *)((int)param_4 + (short)*piVar9 * 2 + 500);
        if (sVar3 == 0x7e) {
          sVar3 = 0;
        }
        else if ((0 < sVar3) && (sVar3 < 0x7e)) {
          sVar3 = -sVar3;
        }
        if ((short)*piVar9 == 0x27) {
          *(short *)(param_4 + 0x7d) = (short)param_4[0x8f];
          iVar5 = (int)(short)param_4[0x91];
          *(short *)((int)param_4 + 0x1f6) = *(short *)((int)param_4 + iVar5 * 2 + 0x1f0);
          *(short *)(param_4 + 0x7e) = *(short *)((int)param_4 + iVar5 * 2 + 0x1f2);
          *(short *)((int)param_4 + 0x1fa) = *(short *)((int)param_4 + iVar5 * 2 + 500);
          param_4[0x55] = param_4[iVar5 + 0x52];
          param_4[0x56] = param_4[iVar5 + 0x53];
          param_4[0x57] = param_4[iVar5 + 0x54];
          param_4[0x58] = param_4[iVar5 + 0x55];
          *(short *)(param_4 + 0x91) = 3;
        }
        if (((sVar3 == 0x7f) && (1 < (short)param_4[0x91])) ||
           ((int)(((int)sVar3 * (uint)*(ushort *)((int)piVar13 + 2) + piVar13[5]) - param_4[1]) <
            -100)) {
          if (0 < (short)param_4[0x91]) {
            *(short *)(param_4 + 0x91) = (short)param_4[0x91] + -1;
          }
          psVar4 = (short *)param_4[(short)param_4[0x91] + 0x55];
          param_1[1] = *(int *)(psVar4 + 10);
          param_2[2] = param_4[0x1e] - param_4[2];
LAB_00430b22:
          *param_3 = (short)param_4[0x7d];
          if ((short)param_4[0x91] == 0x26) {
            param_3[1] = 2;
          }
          else {
            param_3[1] = 6;
          }
          sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
          *(short *)(param_4 + 0x93) = sVar3;
          if (sVar3 == 0x7e) {
            *(short *)(param_4 + 0x93) = 0;
            param_3[1] = 0xc;
          }
          else {
joined_r0x004304a4:
            if (0 < sVar3) {
              *(short *)(param_4 + 0x93) = -sVar3;
              *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 0x20;
            }
          }
LAB_00430b87:
          sVar3 = psVar4[1] * (short)param_4[0x93];
          *(short *)(param_4 + 0x93) = sVar3;
          param_3[2] = sVar3;
          param_3[3] = (short)param_4[0x93];
          param_3[5] = *psVar4;
          *(undefined4 *)(param_3 + 6) = *(undefined4 *)(psVar4 + 0xc);
          return 1;
        }
        iVar5 = param_4[0x16];
        iVar6 = param_4[7];
        param_4[0x1e] = iVar5 + param_4[0x1a];
        param_4[0x16] = iVar6;
        param_4[0x2b] = (iVar5 + param_4[0x1a]) - param_4[2];
        param_4[7] = iVar6 + *(short *)((int)param_4 + 0xc2);
        if ((iVar6 < 0) || (0x117 < iVar6)) break;
        iVar5 = param_4[5];
        if (iVar5 < 1) {
          bVar2 = iVar5 < param_4[0x2b];
        }
        else {
          bVar2 = param_4[0x2b] < iVar5;
        }
      } while (bVar2);
      param_4[0x1a] = param_4[0x29];
      param_4[0x29] = param_4[0x29] + (int)*(short *)((int)param_4 + 0xbe);
      iVar5 = param_4[5];
      if (iVar5 < 1) {
        uVar7 = (uint)(iVar5 < param_4[0x2b]);
        uVar10 = uVar7;
      }
      else {
        uVar7 = (uint)(param_4[0x2b] < iVar5);
        uVar10 = param_4[0x2b];
      }
    } while (uVar7 != 0);
    sVar3 = (short)param_4[0x91];
    if (0 < sVar3) {
      sVar3 = sVar3 + -1;
    }
    *(short *)(param_4 + 0x92) = sVar3;
    sVar3 = (short)param_4[0x91];
    psVar4 = (short *)param_4[sVar3 + 0x55];
    if (*(short *)((int)param_4 + sVar3 * 2 + 500) == 0x7e) {
      if (sVar3 < 0) {
        *(short *)(param_4 + 0x91) = 0;
      }
      if (*(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500) == 0x7e) {
        param_1[1] = *(int *)(psVar4 + 10);
        *param_3 = (short)param_4[0x7d];
        param_3[1] = 8;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[5] = *psVar4;
        *(undefined4 *)(param_3 + 6) = *(undefined4 *)(psVar4 + 0xc);
        return 1;
      }
      param_1[1] = *(int *)(psVar4 + 10);
      *param_3 = (short)param_4[0x7d];
      sVar3 = *(short *)((int)param_4 + (short)param_4[0x92] * 2 + 500);
      *(short *)(param_4 + 0x93) = sVar3;
      if (sVar3 == 0x7e) {
        *(short *)(param_4 + 0x93) = 0;
        param_3[1] = 8;
      }
      else {
        param_3[1] = 2;
        sVar3 = (short)param_4[0x93];
LAB_00430ca9:
        if (0 < sVar3) {
          *(short *)(param_4 + 0x93) = -sVar3;
          *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 0x20;
        }
      }
LAB_00430cb8:
      sVar3 = psVar4[1] * (short)param_4[0x93];
      *(short *)(param_4 + 0x93) = sVar3;
      param_3[2] = sVar3;
      sVar3 = (short)param_4[0x93];
      goto LAB_00430d95;
    }
    param_1[1] = *(int *)(psVar4 + 10);
    *param_3 = (short)param_4[0x7d];
    sVar3 = *(short *)((int)param_4 + (short)param_4[0x92] * 2 + 500);
    *(short *)(param_4 + 0x93) = sVar3;
    if (sVar3 == 0x7e) {
      *(short *)(param_4 + 0x93) = 0;
      param_3[1] = 8;
    }
    else {
      param_3[1] = 2;
      if (0 < (short)param_4[0x93]) {
        *(short *)(param_4 + 0x93) = -(short)param_4[0x93];
      }
    }
    param_3[2] = psVar4[1] * (short)param_4[0x93];
    sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
    *(short *)(param_4 + 0x93) = sVar3;
    if (sVar3 == 0x7e) {
      *(short *)(param_4 + 0x93) = 0;
      param_3[1] = 8;
    }
    else {
LAB_00430d7a:
      if (0 < sVar3) goto LAB_00430d7c;
    }
  }
  else if (iVar5 == 0) {
    if (iVar6 == 0) goto LAB_00430606;
    if (iVar6 < 1) {
      if (iVar6 < 0) {
        *(short *)(param_4 + 0x2f) = -0x118;
        *(short *)(param_4 + 0x30) = -0x23;
        iVar5 = (*param_4 - *param_4 % 0x118) + -1;
        goto LAB_0043106f;
      }
    }
    else {
      *(short *)(param_4 + 0x2f) = 0x118;
      *(short *)(param_4 + 0x30) = 0x23;
      iVar5 = (*param_4 - *param_4 % 0x118) + 0x118;
LAB_0043106f:
      param_4[0x28] = iVar5;
    }
    iVar5 = param_4[0x1a] - piVar13[4];
    *(short *)((int)param_4 + 0x24e) =
         ((short)((ulonglong)((longlong)iVar5 * 0xea0ea0eb) >> 0x28) -
         ((short)(char)((char)(iVar5 / 0x1180000) + (char)(iVar5 >> 0x1f)) >> 0xf)) *
         (short)piVar13[1];
    param_4[0x16] = param_4[0x1a] % 0x118;
    uVar10 = ((param_4[0x1a] % 0x118) / 0x23) * 8;
    *(short *)((int)param_4 + 0x252) = (short)uVar10;
    do {
      if ((param_4[0x18] < piVar13[3]) ||
         (uVar10 = (uint)*(ushort *)(piVar13 + 2), (int)(piVar13[3] + uVar10) <= param_4[0x18])) {
        param_4[0x15] = param_4[0x19];
        param_4[0x19] = param_4[1];
        psVar4 = (short *)FUN_004315d0(param_4 + 0x18,CONCAT22((short)(uVar10 >> 0x10),param_3[5]));
        if (psVar4 == (short *)0x0) {
          sVar3 = (short)param_4[0x91];
          if (0 < sVar3) {
            sVar3 = sVar3 + -1;
          }
          *(short *)(param_4 + 0x92) = sVar3;
          param_1[1] = piVar13[5];
          *param_2 = param_4[0x1c] - *param_4;
          *param_3 = (short)param_4[0x7d];
          param_3[1] = 2;
          sVar3 = *(short *)((int)param_4 + (short)param_4[0x92] * 2 + 500);
          *(short *)(param_4 + 0x93) = sVar3;
          if (sVar3 == 0x7e) {
            *(short *)(param_4 + 0x93) = 0;
            param_3[1] = 8;
          }
          else if (0 < sVar3) {
            *(short *)(param_4 + 0x93) = -sVar3;
          }
          param_3[2] = *(short *)((int)piVar13 + 2) * (short)param_4[0x93];
          sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
          *(short *)(param_4 + 0x93) = sVar3;
          if (sVar3 == 0x7e) {
            *(short *)(param_4 + 0x93) = 0;
            param_3[1] = 8;
          }
          else {
LAB_004314c2:
            if (0 < sVar3) {
              *(short *)(param_4 + 0x93) = -sVar3;
              *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 0x20;
            }
          }
LAB_004314d4:
          param_3[3] = *(short *)((int)piVar13 + 2) * (short)param_4[0x93];
          param_3[5] = -1;
          *(int *)(param_3 + 6) = piVar13[6];
          return 0;
        }
        *(short *)((int)param_4 + 0x246) = 1;
        param_4[0x19] = param_4[0x15];
        piVar13 = param_4 + (*(short *)((int)param_4 + 0x246) + 3) * 0x11;
        *(short *)piVar13 = *psVar4;
        *(short *)((int)piVar13 + 2) = psVar4[1];
        *(short *)(piVar13 + 1) = psVar4[2];
        *(short *)((int)piVar13 + 6) = psVar4[3];
        *(short *)(piVar13 + 2) = psVar4[4];
        *(short *)((int)piVar13 + 10) = psVar4[5];
        piVar13[3] = *(int *)(psVar4 + 6);
        iVar5 = *(int *)(psVar4 + 8);
        piVar13[4] = iVar5;
        piVar13[5] = *(int *)(psVar4 + 10);
        piVar13[6] = *(int *)(psVar4 + 0xc);
        iVar5 = param_4[0x1a] - iVar5;
        *(short *)((int)param_4 + 0x24e) =
             ((short)((ulonglong)((longlong)iVar5 * 0xea0ea0eb) >> 0x28) -
             ((short)(char)((char)(iVar5 / 0x1180000) + (char)(iVar5 >> 0x1f)) >> 0xf)) *
             (short)piVar13[1];
      }
      uVar1 = *(ushort *)
               (*(int *)(psVar4 + 0xe) +
               ((param_4[0x18] - piVar13[3]) / 0x118 + (int)*(short *)((int)param_4 + 0x24e)) * 2);
      *(ushort *)((int)param_4 + 0x24a) = uVar1;
      param_3[4] = uVar1 & 0xf000;
      *(ushort *)((int)param_4 + 0x24a) = *(ushort *)((int)param_4 + 0x24a) & 0xfff;
      param_4[0x14] = param_4[0x18] % 0x118;
      param_4[0x18] = param_4[0x18] - param_4[0x18] % 0x118;
      iVar5 = param_4[0x14];
      if ((short)param_4[0x30] < 1) {
        iVar5 = (iVar5 - iVar5 % 0x23) + -1;
      }
      else {
        iVar5 = (iVar5 - iVar5 % 0x23) + 0x23;
      }
      param_4[6] = iVar5;
      do {
        piVar9 = param_4 + 0x91;
        *(short *)piVar9 = (short)*piVar9 + 1;
        iVar5 = (int)((ulonglong)((longlong)param_4[0x14] * -0x15f15f15) >> 0x20) + param_4[0x14];
        *(short *)((int)param_4 + (short)*piVar9 * 2 + 500) =
             (short)*(char *)((((iVar5 >> 5) + (uint)*(ushort *)((int)param_4 + 0x24a) * 0x40) -
                              (iVar5 >> 0x1f)) + *(int *)(psVar4 + 0x10) +
                             (int)*(short *)((int)param_4 + 0x252));
        param_4[(short)*piVar9 + 0x55] = (int)piVar13;
        sVar3 = *(short *)((int)param_4 + (short)*piVar9 * 2 + 500);
        if (sVar3 == 0x7e) {
          sVar3 = 0;
        }
        else if ((0 < sVar3) && (sVar3 < 0x7e)) {
          sVar3 = -sVar3;
        }
        if ((short)*piVar9 == 0x27) {
          *(short *)(param_4 + 0x7d) = (short)param_4[0x8f];
          iVar5 = (int)(short)param_4[0x91];
          *(short *)((int)param_4 + 0x1f6) = *(short *)((int)param_4 + iVar5 * 2 + 0x1f0);
          *(short *)(param_4 + 0x7e) = *(short *)((int)param_4 + iVar5 * 2 + 0x1f2);
          *(short *)((int)param_4 + 0x1fa) = *(short *)((int)param_4 + iVar5 * 2 + 500);
          param_4[0x55] = param_4[iVar5 + 0x52];
          param_4[0x56] = param_4[iVar5 + 0x53];
          param_4[0x57] = param_4[iVar5 + 0x54];
          param_4[0x58] = param_4[iVar5 + 0x55];
          *(short *)(param_4 + 0x91) = 3;
        }
        if (((sVar3 == 0x7f) && (1 < (short)param_4[0x91])) ||
           ((int)(((int)sVar3 * (uint)*(ushort *)((int)piVar13 + 2) + piVar13[5]) - param_4[1]) <
            -100)) {
          if (0 < (short)param_4[0x91]) {
            *(short *)(param_4 + 0x91) = (short)param_4[0x91] + -1;
          }
          psVar4 = (short *)param_4[(short)param_4[0x91] + 0x55];
          param_1[1] = *(int *)(psVar4 + 10);
          *param_2 = param_4[0x1c] - *param_4;
          goto LAB_00430b22;
        }
        param_4[0x1c] = param_4[0x18] + param_4[0x14];
        param_4[0x2a] = (param_4[0x18] + param_4[0x14]) - *param_4;
        param_4[0x14] = param_4[6];
        param_4[6] = param_4[6] + (int)(short)param_4[0x30];
        if ((param_4[0x14] < 0) || (0x117 < param_4[0x14])) break;
        iVar5 = param_4[4];
        if (iVar5 < 1) {
          bVar2 = iVar5 < param_4[0x2a];
        }
        else {
          bVar2 = param_4[0x2a] < iVar5;
        }
      } while (bVar2);
      param_4[0x18] = param_4[0x28];
      param_4[0x28] = param_4[0x28] + (int)(short)param_4[0x2f];
      iVar5 = param_4[4];
      if (iVar5 < 1) {
        uVar10 = param_4[0x2a];
        uVar7 = (uint)(iVar5 < (int)uVar10);
      }
      else {
        uVar7 = (uint)(param_4[0x2a] < iVar5);
        uVar10 = uVar7;
      }
    } while (uVar7 != 0);
    sVar3 = (short)param_4[0x91];
    if (0 < sVar3) {
      sVar3 = sVar3 + -1;
    }
    *(short *)(param_4 + 0x92) = sVar3;
    sVar3 = (short)param_4[0x91];
    psVar4 = (short *)param_4[sVar3 + 0x55];
    if (*(short *)((int)param_4 + sVar3 * 2 + 500) == 0x7e) {
      if (sVar3 < 0) {
        *(short *)(param_4 + 0x91) = 0;
      }
      sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
joined_r0x0043158a:
      if (sVar3 == 0x7e) {
        param_1[1] = *(int *)(psVar4 + 10);
        *param_3 = (short)param_4[0x7d];
        param_3[1] = 8;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[5] = *psVar4;
        *(undefined4 *)(param_3 + 6) = *(undefined4 *)(psVar4 + 0xc);
        return 1;
      }
      param_1[1] = *(int *)(psVar4 + 10);
      *param_3 = (short)param_4[0x7d];
      sVar3 = *(short *)((int)param_4 + (short)param_4[0x92] * 2 + 500);
      *(short *)(param_4 + 0x93) = sVar3;
      if (sVar3 != 0x7e) {
        param_3[1] = 2;
        sVar3 = (short)param_4[0x93];
        goto LAB_00430ca9;
      }
      *(short *)(param_4 + 0x93) = 0;
      param_3[1] = 8;
      goto LAB_00430cb8;
    }
    param_1[1] = *(int *)(psVar4 + 10);
    *param_3 = (short)param_4[0x7d];
    sVar3 = *(short *)((int)param_4 + (short)param_4[0x92] * 2 + 500);
    *(short *)(param_4 + 0x93) = sVar3;
    if (sVar3 == 0x7e) {
      *(short *)(param_4 + 0x93) = 0;
      param_3[1] = 8;
    }
    else {
      param_3[1] = 2;
      if (0 < (short)param_4[0x93]) {
        *(short *)(param_4 + 0x93) = -(short)param_4[0x93];
      }
    }
    param_3[2] = psVar4[1] * (short)param_4[0x93];
    sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
    *(short *)(param_4 + 0x93) = sVar3;
    if (sVar3 != 0x7e) goto LAB_00430d7a;
    *(short *)(param_4 + 0x93) = 0;
    param_3[1] = 8;
  }
  else {
    if (iVar6 < 1) {
      if (iVar6 < 0) {
        *(short *)(param_4 + 0x2f) = -0x118;
        *(short *)(param_4 + 0x30) = -0x23;
        iVar5 = (*param_4 - *param_4 % 0x118) + -1;
        goto LAB_0042fb6a;
      }
    }
    else {
      *(short *)(param_4 + 0x2f) = 0x118;
      *(short *)(param_4 + 0x30) = 0x23;
      iVar5 = (*param_4 - *param_4 % 0x118) + 0x118;
LAB_0042fb6a:
      param_4[0x28] = iVar5;
    }
    if (param_4[5] < 1) {
      if (param_4[5] < 0) {
        *(short *)((int)param_4 + 0xbe) = -0x118;
        *(short *)((int)param_4 + 0xc2) = -0x23;
        iVar5 = (param_4[2] - param_4[2] % 0x118) + -1;
        goto LAB_0042fbcc;
      }
    }
    else {
      *(short *)((int)param_4 + 0xbe) = 0x118;
      *(short *)((int)param_4 + 0xc2) = 0x23;
      iVar5 = (param_4[2] - param_4[2] % 0x118) + 0x118;
LAB_0042fbcc:
      param_4[0x29] = iVar5;
    }
    param_4[0x31] = (param_4[5] << 0xc) / param_4[4];
    iVar5 = (param_4[4] << 0xc) / param_4[5];
    param_4[0x32] = iVar5;
    param_4[0x24] = ((param_4[0x29] - param_4[2]) * iVar5 >> 0xc) + *param_4;
    param_4[0x25] = param_4[0x29];
    param_4[0x26] = param_4[0x28];
    uVar10 = ((param_4[0x28] - *param_4) * param_4[0x31] >> 0xc) + param_4[2];
    param_4[0x27] = uVar10;
    do {
      do {
        if ((param_4[0x18] < piVar13[3]) ||
           (uVar10 = (uint)*(ushort *)(piVar13 + 2), (int)(piVar13[3] + uVar10) <= param_4[0x18])) {
LAB_0042fc7a:
          param_4[0x15] = param_4[0x19];
          param_4[0x19] = param_4[1];
          psVar4 = (short *)FUN_004315d0(param_4 + 0x18,CONCAT22((short)(uVar10 >> 0x10),param_3[5])
                                        );
          if (psVar4 == (short *)0x0) {
            sVar3 = (short)param_4[0x91];
            if (0 < sVar3) {
              sVar3 = sVar3 + -1;
            }
            *(short *)(param_4 + 0x92) = sVar3;
            param_1[1] = piVar13[5];
            *param_2 = param_4[0x1c] - *param_4;
            param_2[2] = param_4[0x1e] - param_4[2];
            *param_3 = (short)param_4[0x7d];
            param_3[1] = 2;
            sVar3 = *(short *)((int)param_4 + (short)param_4[0x92] * 2 + 500);
            *(short *)(param_4 + 0x93) = sVar3;
            if (sVar3 == 0x7e) {
              *(short *)(param_4 + 0x93) = 0;
            }
            else if (0 < sVar3) {
              *(short *)(param_4 + 0x93) = -sVar3;
            }
            param_3[2] = *(short *)((int)piVar13 + 2) * (short)param_4[0x93];
            sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
            *(short *)(param_4 + 0x93) = sVar3;
            if (sVar3 != 0x7e) goto LAB_004314c2;
            *(short *)(param_4 + 0x93) = 0;
            goto LAB_004314d4;
          }
          *(short *)((int)param_4 + 0x246) = 1;
          param_4[0x19] = param_4[0x15];
          piVar13 = param_4 + (*(short *)((int)param_4 + 0x246) + 3) * 0x11;
          *(short *)piVar13 = *psVar4;
          *(short *)((int)piVar13 + 2) = psVar4[1];
          *(short *)(piVar13 + 1) = psVar4[2];
          *(short *)((int)piVar13 + 6) = psVar4[3];
          *(short *)(piVar13 + 2) = psVar4[4];
          *(short *)((int)piVar13 + 10) = psVar4[5];
          piVar13[3] = *(int *)(psVar4 + 6);
          piVar13[4] = *(int *)(psVar4 + 8);
          piVar13[5] = *(int *)(psVar4 + 10);
          piVar13[6] = *(int *)(psVar4 + 0xc);
        }
        else if ((param_4[0x1a] < piVar13[4]) ||
                (uVar10 = (uint)*(ushort *)((int)piVar13 + 10),
                (int)(piVar13[4] + uVar10) <= param_4[0x1a])) goto LAB_0042fc7a;
        uVar1 = *(ushort *)
                 (*(int *)(psVar4 + 0xe) +
                 ((param_4[0x18] - piVar13[3]) / 0x118 +
                 ((param_4[0x1a] - piVar13[4]) / 0x118) * (uint)*(ushort *)(piVar13 + 1)) * 2);
        *(ushort *)((int)param_4 + 0x24a) = uVar1;
        param_3[4] = uVar1 & 0xf000;
        *(ushort *)((int)param_4 + 0x24a) = *(ushort *)((int)param_4 + 0x24a) & 0xfff;
        param_4[0x14] = param_4[0x18] % 0x118;
        param_4[0x16] = param_4[0x1a] % 0x118;
        param_4[0x18] = param_4[0x18] - param_4[0x14];
        param_4[0x1a] = param_4[0x1a] - param_4[0x16];
        iVar5 = param_4[0x14];
        if ((short)param_4[0x30] < 1) {
          iVar5 = (iVar5 - iVar5 % 0x23) + -1;
        }
        else {
          iVar5 = (iVar5 - iVar5 % 0x23) + 0x23;
        }
        param_4[6] = iVar5;
        iVar5 = param_4[0x16];
        if (*(short *)((int)param_4 + 0xc2) < 1) {
          iVar6 = (iVar5 - iVar5 % 0x23) + -1;
        }
        else {
          iVar6 = (iVar5 - iVar5 % 0x23) + 0x23;
        }
        param_4[7] = iVar6;
        param_4[10] = iVar6;
        param_4[0xc] = param_4[6];
        param_4[8] = ((iVar6 - iVar5) * param_4[0x32] >> 0xc) + param_4[0x14];
        param_4[0xe] = ((param_4[6] - param_4[0x14]) * param_4[0x31] >> 0xc) + iVar5;
        do {
          do {
            *(short *)(param_4 + 0x91) = (short)param_4[0x91] + 1;
            *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500) =
                 (short)*(char *)(param_4[0x14] / 0x23 +
                                 *(int *)(psVar4 + 0x10) +
                                 (param_4[0x16] / 0x23 + (uint)*(ushort *)((int)param_4 + 0x24a) * 8
                                 ) * 8);
            param_4[(short)param_4[0x91] + 0x55] = (int)piVar13;
            sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
            if (sVar3 == 0x7e) {
              sVar3 = 0;
            }
            else if ((0 < sVar3) && (sVar3 < 0x7e)) {
              sVar3 = -sVar3;
            }
            if ((short)param_4[0x91] == 0x27) {
              *(short *)(param_4 + 0x7d) = (short)param_4[0x8f];
              iVar5 = (int)(short)param_4[0x91];
              *(short *)((int)param_4 + 0x1f6) = *(short *)((int)param_4 + iVar5 * 2 + 0x1f0);
              *(short *)(param_4 + 0x7e) = *(short *)((int)param_4 + iVar5 * 2 + 0x1f2);
              *(short *)((int)param_4 + 0x1fa) = *(short *)((int)param_4 + iVar5 * 2 + 500);
              param_4[0x55] = param_4[iVar5 + 0x52];
              param_4[0x56] = param_4[iVar5 + 0x53];
              param_4[0x57] = param_4[iVar5 + 0x54];
              param_4[0x58] = param_4[iVar5 + 0x55];
              *(short *)(param_4 + 0x91) = 3;
            }
            if (((sVar3 == 0x7f) && (1 < (short)param_4[0x91])) ||
               ((int)(((int)sVar3 * (uint)*(ushort *)((int)piVar13 + 2) + piVar13[5]) - param_4[1])
                < -100)) {
              if (0 < (short)param_4[0x91]) {
                *(short *)(param_4 + 0x91) = (short)param_4[0x91] + -1;
              }
              psVar4 = (short *)param_4[(short)param_4[0x91] + 0x55];
              param_1[1] = *(int *)(psVar4 + 10);
              param_4[0x18] = param_4[0x1c] - *param_4;
              param_4[0x1a] = param_4[0x1e] - param_4[2];
              iVar5 = param_4[4];
              iVar6 = param_4[0x18];
              if (iVar5 < 1) {
                if (iVar5 < iVar6) goto LAB_00430422;
              }
              else if (iVar6 < iVar5) {
LAB_00430422:
                param_4[4] = iVar6;
              }
              iVar5 = param_4[5];
              iVar6 = param_4[0x1a];
              if (iVar5 < 1) {
                if (iVar5 < iVar6) goto LAB_00430439;
              }
              else if (iVar6 < iVar5) {
LAB_00430439:
                param_4[5] = iVar6;
              }
              *param_2 = param_4[4];
              param_2[2] = param_4[5];
              *param_3 = (short)param_4[0x7d];
              if ((short)param_4[0x91] == 0x26) {
                param_3[1] = 2;
              }
              else {
                param_3[1] = 0x16;
              }
              sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
              *(short *)(param_4 + 0x93) = sVar3;
              if (sVar3 != 0x7e) goto joined_r0x004304a4;
              *(short *)(param_4 + 0x93) = 0;
              param_3[1] = 0x1c;
              goto LAB_00430b87;
            }
            param_4[0x1c] = param_4[0x14] + param_4[0x18];
            param_4[0x1e] = param_4[0x16] + param_4[0x1a];
            iVar5 = param_4[0x14];
            iVar6 = param_4[0x16];
            param_4[0x2a] = (param_4[0x18] - *param_4) + iVar5;
            param_4[0x2b] = (param_4[0x1a] + iVar6) - param_4[2];
            iVar11 = iVar5 - param_4[8];
            param_4[0x10] = iVar11;
            iVar12 = iVar6 - param_4[10];
            param_4[0x12] = iVar5 - param_4[0xc];
            param_4[0x13] = iVar6 - param_4[0xe];
            param_4[0x11] = iVar12;
            sVar3 = FUN_00407230(iVar11 * iVar11 + iVar12 * iVar12);
            *(short *)(param_4 + 0x2c) = sVar3;
            sVar3 = FUN_00407230(param_4[0x12] * param_4[0x12] + param_4[0x13] * param_4[0x13]);
            *(short *)((int)param_4 + 0xb2) = sVar3;
            if ((short)param_4[0x2c] < sVar3) {
              param_4[0x14] = param_4[8];
              param_4[0x15] = param_4[9];
              param_4[0x16] = param_4[10];
              iVar5 = param_4[7] + (int)*(short *)((int)param_4 + 0xc2);
              param_4[7] = iVar5;
              param_4[10] = iVar5;
              param_4[8] = ((int)*(short *)((int)param_4 + 0xc2) * param_4[0x32] >> 0xc) +
                           param_4[8];
            }
            else {
              param_4[0x14] = param_4[0xc];
              param_4[0x15] = param_4[0xd];
              param_4[0x16] = param_4[0xe];
              iVar5 = param_4[6] + (int)(short)param_4[0x30];
              param_4[6] = iVar5;
              param_4[0xc] = iVar5;
              param_4[0xe] = (param_4[0x31] * (int)(short)param_4[0x30] >> 0xc) + param_4[0xe];
            }
            sVar3 = (short)*param_4 + (short)param_4[4];
            *(short *)(param_4 + 0x93) = sVar3;
            sVar8 = (short)param_4[0x14] + (short)param_4[0x18];
            *(short *)((int)param_4 + 0x24e) = (short)param_4[5] + (short)param_4[2];
            *(short *)(param_4 + 0x94) = sVar8;
            *(short *)((int)param_4 + 0x252) = (short)param_4[0x16] + (short)param_4[0x1a];
            if (param_4[4] < 0) {
              if (sVar8 < sVar3) {
LAB_004300cc:
                param_4[0x14] = param_4[0x14] + ((int)sVar3 - (int)sVar8);
              }
            }
            else if (sVar3 < sVar8) goto LAB_004300cc;
            sVar3 = *(short *)((int)param_4 + 0x24e);
            sVar8 = *(short *)((int)param_4 + 0x252);
            if (param_4[5] < 0) {
              if (sVar8 < sVar3) {
LAB_004300fd:
                param_4[0x16] = param_4[0x16] + ((int)sVar3 - (int)sVar8);
              }
            }
            else if (sVar3 < sVar8) goto LAB_004300fd;
            if (((param_4[0x14] < 0) || (0x117 < param_4[0x14])) ||
               ((param_4[0x16] < 0 || (0x117 < param_4[0x16])))) goto LAB_00430187;
            iVar5 = param_4[4];
            if (iVar5 < 1) {
              bVar2 = iVar5 < param_4[0x2a];
            }
            else {
              bVar2 = param_4[0x2a] < iVar5;
            }
          } while (bVar2);
          iVar5 = param_4[5];
          if (iVar5 < 1) {
            bVar2 = iVar5 < param_4[0x2b];
          }
          else {
            bVar2 = param_4[0x2b] < iVar5;
          }
        } while (bVar2);
LAB_00430187:
        iVar5 = *param_4 - param_4[0x24];
        param_4[0x22] = *param_4 - param_4[0x26];
        iVar6 = param_4[2] - param_4[0x25];
        param_4[0x20] = iVar5;
        param_4[0x21] = iVar6;
        param_4[0x23] = param_4[2] - param_4[0x27];
        iVar5 = FUN_00407230(iVar5 * iVar5 + iVar6 * iVar6);
        param_4[0x2d] = iVar5;
        iVar5 = FUN_00407230(param_4[0x22] * param_4[0x22] + param_4[0x23] * param_4[0x23]);
        param_4[0x2e] = iVar5;
        if (param_4[0x2d] < iVar5) {
          param_4[0x18] = param_4[0x24];
          param_4[0x1a] = param_4[0x25];
          iVar5 = param_4[0x29] + (int)*(short *)((int)param_4 + 0xbe);
          param_4[0x29] = iVar5;
          param_4[0x25] = iVar5;
          param_4[0x24] =
               param_4[0x24] + (param_4[0x32] * (int)*(short *)((int)param_4 + 0xbe) >> 0xc);
        }
        else {
          param_4[0x18] = param_4[0x26];
          param_4[0x1a] = param_4[0x27];
          iVar5 = param_4[0x28] + (int)(short)param_4[0x2f];
          param_4[0x28] = iVar5;
          param_4[0x26] = iVar5;
          param_4[0x27] = param_4[0x27] + (param_4[0x31] * (int)(short)param_4[0x2f] >> 0xc);
        }
        iVar5 = param_4[4];
        if (iVar5 < 1) {
          uVar10 = param_4[0x2a];
          uVar7 = (uint)(iVar5 < (int)uVar10);
        }
        else {
          uVar7 = (uint)(param_4[0x2a] < iVar5);
          uVar10 = uVar7;
        }
      } while (uVar7 != 0);
      iVar5 = param_4[5];
      if (iVar5 < 1) {
        uVar10 = param_4[0x2b];
        uVar7 = (uint)(iVar5 < (int)uVar10);
      }
      else {
        uVar7 = (uint)(param_4[0x2b] < iVar5);
        uVar10 = uVar7;
      }
    } while (uVar7 != 0);
    sVar3 = (short)param_4[0x91];
    if (0 < sVar3) {
      sVar3 = sVar3 + -1;
    }
    *(short *)(param_4 + 0x92) = sVar3;
    sVar3 = (short)param_4[0x91];
    psVar4 = (short *)param_4[sVar3 + 0x55];
    if (*(short *)((int)param_4 + sVar3 * 2 + 500) == 0x7e) {
      if (sVar3 < 0) {
        *(short *)(param_4 + 0x91) = 0;
      }
      sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
      goto joined_r0x0043158a;
    }
    param_1[1] = *(int *)(psVar4 + 10);
    *param_3 = (short)param_4[0x7d];
    sVar3 = *(short *)((int)param_4 + (short)param_4[0x92] * 2 + 500);
    *(short *)(param_4 + 0x93) = sVar3;
    if (sVar3 == 0x7e) {
      *(short *)(param_4 + 0x93) = 0;
      param_3[1] = 8;
    }
    else {
      param_3[1] = 2;
      if (0 < (short)param_4[0x93]) {
        *(short *)(param_4 + 0x93) = -(short)param_4[0x93];
      }
    }
    param_3[2] = psVar4[1] * (short)param_4[0x93];
    sVar3 = *(short *)((int)param_4 + (short)param_4[0x91] * 2 + 500);
    *(short *)(param_4 + 0x93) = sVar3;
    if (sVar3 < 1) goto LAB_00430d89;
LAB_00430d7c:
    *(short *)(param_4 + 0x93) = -sVar3;
    *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 0x20;
  }
LAB_00430d89:
  sVar3 = psVar4[1] * (short)param_4[0x93];
LAB_00430d95:
  param_3[3] = sVar3;
  param_3[5] = *psVar4;
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(psVar4 + 0xc);
  return 1;
}


