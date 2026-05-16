/*
 * Function: FUN_00439500
 * Entry:    00439500
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00439500(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = DAT_0051d6e0;
  piVar7 = DAT_0051d6e0 + 7;
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_00435230(param_1,param_1 + 300,5,2,piVar7);
    if ((param_2 & 0x20) == 0) {
      if ((param_2 & 0x10) == 0) {
        if ((param_2 & 0x400) == 0) {
          if ((param_2 & 0xc4) == 0) {
            if ((param_2 & 8) == 0) {
              if ((param_2 & 1) != 0) {
                *(undefined2 *)(param_1 + 200) = 0;
              }
            }
            else {
              if (*(short *)(param_1 + 0x170) < 0) {
                *(undefined2 *)(param_1 + 0x172) = 0x400;
                *(short *)(param_1 + 0x170) = -*(short *)(param_1 + 0x170);
              }
              else {
                *(undefined2 *)(param_1 + 0x172) = 0xc00;
              }
              if (*(short *)(param_1 + 0x1a) == 0) {
                *(undefined2 *)(param_1 + 0x1a) = 0x22;
              }
            }
          }
          else {
            if (*(short *)(param_1 + 0x1a) == 0) {
              *(undefined2 *)(param_1 + 0x1a) = 5;
            }
            sVar6 = *(short *)(param_1 + 0x170);
            iVar8 = *(int *)(param_1 + 0xd0);
            if (sVar6 < 0) {
              *(int *)(param_1 + 0x188) = iVar8;
              *(int *)(param_1 + 0x178) = sVar6 + iVar8;
            }
            else {
              *(int *)(param_1 + 0x178) = iVar8;
              *(int *)(param_1 + 0x188) = sVar6 + iVar8;
            }
            if ((param_2 & 0x40) != 0) {
              *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000;
            }
          }
        }
        else {
          FUN_00432e90(param_1);
          *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0xcc);
          *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0xd0);
          *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0xd4);
          *(undefined2 *)(param_1 + 0x172) = 0;
          if (*(short *)(param_1 + 0x1a) == 0) {
            *(undefined2 *)(param_1 + 0x1a) = 0x10;
          }
        }
      }
      else {
        FUN_00432e90(param_1);
        *(short *)(param_1 + 0x170) = *(short *)(param_1 + 0x170) >> 1;
        local_8 = (int)*(short *)(param_1 + 0x170);
        local_10 = 0;
        local_c = 0;
        FUN_00407b00(param_1 + 0x68,&local_10,&local_10);
        *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0xd0) + local_c;
        *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0xcc) + local_10;
        *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0xd4) + local_8;
        *(undefined2 *)(param_1 + 0x172) = 0;
        if (*(short *)(param_1 + 0x1a) == 0) {
          *(undefined2 *)(param_1 + 0x1a) = 0x10;
        }
      }
    }
    else {
      *(short *)(param_1 + 0x170) = *(short *)(param_1 + 0x170) >> 1;
      *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0xcc);
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0xd0) + (int)*(short *)(param_1 + 0x170);
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0xd4);
      *(undefined2 *)(param_1 + 0x172) = 0;
      if (*(short *)(param_1 + 0x1a) == 0) {
        *(undefined2 *)(param_1 + 0x1a) = 0x10;
      }
    }
  }
  if ((param_2 & 2) != 0) {
    if ((param_2 & 0x20) == 0) {
      *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + *(short *)(param_1 + 0x170);
    }
    else {
      *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + 0x44;
    }
    goto LAB_00439dd1;
  }
  if ((param_2 & 1) != 0) {
    if ((*(int *)(param_1 + 0x54) != DAT_004d13c4) || (*(int *)(DAT_004d13c4 + 0x58) != param_1)) {
      *(short *)(param_1 + 200) = *(short *)(param_1 + 200) - (*(short *)(param_1 + 200) >> 4);
      goto LAB_00439dd1;
    }
    iVar8 = *(int *)(DAT_004d13c4 + 0x154);
    sVar6 = *(short *)(param_1 + 200);
    if (iVar8 < 0) {
      if (-0x200 < sVar6) {
        *(short *)(param_1 + 200) =
             sVar6 - (short)((iVar8 << 5) /
                            ((int)*(short *)(param_1 + 0x30) - (int)*(short *)(param_1 + 0x1c)));
      }
      iVar8 = *(int *)(DAT_004d13c4 + 0xa8);
      iVar9 = *(int *)(iVar8 + 0x18) -
              ((int)*(short *)(param_1 + 200) << 5) /
              ((int)*(short *)(param_1 + 0x30) - (int)*(short *)(param_1 + 0x1c));
    }
    else {
      if (sVar6 < 0x200) {
        *(short *)(param_1 + 200) =
             (short)((iVar8 << 5) /
                    ((int)*(short *)(param_1 + 0x1c) + (int)*(short *)(param_1 + 0x38))) + sVar6;
      }
      iVar8 = *(int *)(DAT_004d13c4 + 0xa8);
      iVar9 = *(int *)(iVar8 + 0x18) +
              ((int)*(short *)(param_1 + 200) << 5) /
              ((int)*(short *)(param_1 + 0x1c) + (int)*(short *)(param_1 + 0x38));
    }
    *(int *)(iVar8 + 0x18) = iVar9;
    piVar1 = piVar2 + 4;
    *(undefined2 *)piVar1 = 0;
    *(undefined2 *)((int)piVar2 + 0x12) = 0;
    *(undefined2 *)(piVar2 + 5) = 0;
    FUN_00432ef0(param_1 + 100);
    FUN_00432ef0(DAT_004d13c4 + 100);
    iVar8 = DAT_004d13c4 + 100;
    piVar2[6] = iVar8;
    while (iVar8 != 0) {
      FUN_00408010(piVar2[6] + 4,piVar1,piVar2);
      iVar8 = piVar2[6];
      *piVar2 = *piVar2 + *(int *)(iVar8 + 0x18);
      piVar2[1] = piVar2[1] + *(int *)(iVar8 + 0x1c);
      iVar8 = *(int *)(iVar8 + 0x20);
      *(short *)((int)piVar2 + 0x12) = (short)piVar2[1];
      piVar2[2] = piVar2[2] + iVar8;
      *(short *)piVar1 = (short)*piVar2;
      *(short *)(piVar2 + 5) = (short)piVar2[2];
      iVar8 = *(int *)(piVar2[6] + 0x48);
      piVar2[6] = iVar8;
    }
LAB_00439b87:
    *(int *)(DAT_004d13c4 + 0xcc) = *piVar2;
    *(int *)(DAT_004d13c4 + 0xd0) = piVar2[1];
    *(int *)(DAT_004d13c4 + 0xd4) = piVar2[2];
    DAT_004e1a80 = *piVar2;
    DAT_004e1a84 = piVar2[1];
    DAT_004e1a88 = piVar2[2];
    goto LAB_00439dd1;
  }
  if ((param_2 & 4) == 0) {
    if ((param_2 & 0x80) == 0) {
      if ((param_2 & 0x40) != 0) {
        uVar10 = *(uint *)(param_1 + 0x14);
        if ((uVar10 & 0x400000) == 0) {
          if ((uVar10 & 0x200000) == 0) goto LAB_00439dd1;
          iVar8 = *(int *)(param_1 + 0x178);
          *(uint *)(param_1 + 0x14) = uVar10 & 0xffffdfff;
          if (iVar8 < *(int *)(param_1 + 0xd0)) {
            iVar9 = *(int *)(param_1 + 0xd0) - (int)*(short *)(param_1 + 0x1a);
            *(int *)(param_1 + 0xd0) = iVar9;
            if (iVar9 <= iVar8) {
              *(int *)(param_1 + 0xd0) = iVar8;
              *(uint *)(param_1 + 0x14) = uVar10 & 0xffffdfff | 0x2000;
            }
            goto LAB_00439dd1;
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0x188);
          *(uint *)(param_1 + 0x14) = uVar10 & 0xffffdfff;
          if (*(int *)(param_1 + 0xd0) < iVar8) {
            iVar9 = (int)*(short *)(param_1 + 0x1a) + *(int *)(param_1 + 0xd0);
            *(int *)(param_1 + 0xd0) = iVar9;
            if (iVar8 <= iVar9) {
              *(int *)(param_1 + 0xd0) = iVar8;
            }
            goto LAB_00439dd1;
          }
        }
        *(uint *)(param_1 + 0x14) = uVar10 & 0xff9fdfff | 0x2000;
        goto LAB_00439dd1;
      }
      if ((param_2 & 8) != 0) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xff9fffff;
        iVar8 = FUN_004072c0((int)*(short *)(param_1 + 0x172));
        *(short *)(param_1 + 200) = (short)(iVar8 * *(short *)(param_1 + 0x170) >> 0xc);
        *(short *)(param_1 + 0x172) = *(short *)(param_1 + 0x172) + *(short *)(param_1 + 0x1a);
        if (0xfff < *(short *)(param_1 + 0x172)) {
          *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x200000;
          *(short *)(param_1 + 0x172) = *(short *)(param_1 + 0x172) + -0x1000;
        }
        if ((*(int *)(param_1 + 0x54) != DAT_004d13c4) || (*(int *)(DAT_004d13c4 + 0x58) != param_1)
           ) goto LAB_00439dd1;
        piVar1 = piVar2 + 4;
        *(undefined2 *)piVar1 = 0;
        *(undefined2 *)((int)piVar2 + 0x12) = 0;
        *(undefined2 *)(piVar2 + 5) = 0;
        FUN_00432ef0(param_1 + 100);
        FUN_00432ef0(DAT_004d13c4 + 100);
        iVar8 = DAT_004d13c4 + 100;
        piVar2[6] = iVar8;
        while (iVar8 != 0) {
          FUN_00408010(piVar2[6] + 4,piVar1,piVar2);
          iVar8 = piVar2[6];
          *piVar2 = *piVar2 + *(int *)(iVar8 + 0x18);
          piVar2[1] = piVar2[1] + *(int *)(iVar8 + 0x1c);
          iVar8 = *(int *)(iVar8 + 0x20);
          *(short *)((int)piVar2 + 0x12) = (short)piVar2[1];
          piVar2[2] = piVar2[2] + iVar8;
          *(short *)piVar1 = (short)*piVar2;
          *(short *)(piVar2 + 5) = (short)piVar2[2];
          iVar8 = *(int *)(piVar2[6] + 0x48);
          piVar2[6] = iVar8;
        }
        goto LAB_00439b87;
      }
      if ((param_2 & 0x10) != 0) {
        local_10 = 0;
        iVar8 = FUN_004072c0((int)*(short *)(param_1 + 0x172));
        sVar6 = *(short *)(param_1 + 0x172);
        local_8 = iVar8 * *(short *)(param_1 + 0x170) >> 0xc;
        local_c = 0;
        uVar4 = *(short *)(param_1 + 0x1a) + sVar6 & 0xfff;
        *(ushort *)(param_1 + 0x172) = uVar4;
        if ((sVar6 < 0x400) && (0x3ff < uVar4)) {
          uVar10 = *(uint *)(param_1 + 0x14) | 0x2000;
        }
        else if ((sVar6 < 0xc00) && (0xbff < uVar4)) {
          uVar10 = *(uint *)(param_1 + 0x14) | 0x2000;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0x14) & 0xffffdfff;
        }
        *(uint *)(param_1 + 0x14) = uVar10;
        FUN_00407b00(param_1 + 0x68,&local_10,&local_10);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0x188) + local_c;
        *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0x184) + local_10;
        *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0x18c) + local_8;
        goto LAB_00439dd1;
      }
      if ((param_2 & 0x400) == 0) {
        if ((param_2 & 0x100) == 0) {
          if (((((param_2 & 0x200) != 0) && (*(int *)(param_1 + 0x54) == DAT_004d13c4)) &&
              (*(int *)(DAT_004d13c4 + 0x58) == param_1)) &&
             ((*(uint *)(param_1 + 0x14) & 0x200000) != 0)) {
            piVar2 = (int *)(*(int *)(DAT_004d13c4 + 0xa8) + 0x20);
            *piVar2 = *piVar2 + (int)*(short *)(param_1 + 0x170);
          }
        }
        else if ((*(int *)(param_1 + 0x54) == DAT_004d13c4) &&
                (*(int *)(DAT_004d13c4 + 0x58) == param_1)) {
          piVar2 = (int *)(*(int *)(DAT_004d13c4 + 0xa8) + 0x20);
          *piVar2 = *piVar2 + (int)*(short *)(param_1 + 0x170);
        }
        goto LAB_00439dd1;
      }
      uVar10 = *(uint *)(param_1 + 0x14);
      if ((uVar10 & 0x400000) == 0) {
        if ((uVar10 & 0x200000) != 0) {
          if (*(short *)(param_1 + 0x170) <= *(short *)(param_1 + 0x172)) {
            *(short *)(param_1 + 0x172) = *(short *)(param_1 + 0x170);
            goto LAB_00439d0f;
          }
          *(short *)(param_1 + 0x172) = *(short *)(param_1 + 0x1a) + *(short *)(param_1 + 0x172);
        }
      }
      else if (*(short *)(param_1 + 0x172) < 1) {
        *(undefined2 *)(param_1 + 0x172) = 0;
LAB_00439d0f:
        *(uint *)(param_1 + 0x14) = uVar10 & 0xff9fffff;
      }
      else {
        *(short *)(param_1 + 0x172) = *(short *)(param_1 + 0x172) - *(short *)(param_1 + 0x1a);
      }
      local_8 = (int)*(short *)(param_1 + 0x172);
      local_10 = 0;
      local_c = 0;
      FUN_00407b00(param_1 + 0x68,&local_10,&local_10);
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0x188) + local_c;
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0x184) + local_10;
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0x18c) + local_8;
      goto LAB_00439dd1;
    }
    uVar10 = *(uint *)(param_1 + 0x14) & 0xff9fffff;
    *(uint *)(param_1 + 0x14) = uVar10;
    if ((*(int *)(param_1 + 0x54) != DAT_004d13c4) || (*(int *)(DAT_004d13c4 + 0x58) != param_1)) {
      iVar8 = *(int *)(param_1 + 0x188);
      if ((*(int *)(param_1 + 0xd0) < iVar8) &&
         (iVar9 = *(int *)(param_1 + 0xd0) + 5, *(int *)(param_1 + 0xd0) = iVar9, iVar8 <= iVar9)) {
        *(int *)(param_1 + 0xd0) = iVar8;
        *(uint *)(param_1 + 0x14) = uVar10 | 0x400000;
      }
      goto LAB_00439dd1;
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x14) & 0xff9fffff;
    *(uint *)(param_1 + 0x14) = uVar10;
    if ((*(int *)(param_1 + 0x54) == DAT_004d13c4) && (*(int *)(DAT_004d13c4 + 0x58) == param_1)) {
      iVar8 = *(int *)(param_1 + 0x188);
      if ((*(int *)(param_1 + 0xd0) < iVar8) &&
         (iVar9 = *(int *)(param_1 + 0xd0) + 5, *(int *)(param_1 + 0xd0) = iVar9, iVar8 <= iVar9)) {
        *(int *)(param_1 + 0xd0) = iVar8;
        *(uint *)(param_1 + 0x14) = uVar10 | 0x400000;
      }
      goto LAB_00439dd1;
    }
  }
  iVar8 = *(int *)(param_1 + 0x178);
  if ((iVar8 < *(int *)(param_1 + 0xd0)) &&
     (iVar9 = *(int *)(param_1 + 0xd0) + -5, *(int *)(param_1 + 0xd0) = iVar9, iVar9 <= iVar8)) {
    *(int *)(param_1 + 0xd0) = iVar8;
    *(uint *)(param_1 + 0x14) = uVar10 | 0x200000;
  }
LAB_00439dd1:
  if ((param_2 & 0x20) != 0) {
    local_10 = 0;
    local_8 = 0;
    iVar8 = FUN_004072c0((int)*(short *)(param_1 + 0x172));
    sVar6 = *(short *)(param_1 + 0x172);
    local_c = iVar8 * *(short *)(param_1 + 0x170) >> 0xc;
    uVar4 = *(short *)(param_1 + 0x1a) + sVar6;
    *(ushort *)(param_1 + 0x172) = uVar4;
    if ((sVar6 < 0x400) && (0x3ff < (short)uVar4)) {
      uVar10 = *(uint *)(param_1 + 0x14) | 0x2000;
    }
    else if ((sVar6 < 0xc00) && (0xbff < (short)uVar4)) {
      uVar10 = *(uint *)(param_1 + 0x14) | 0x2000;
    }
    else {
      uVar10 = *(uint *)(param_1 + 0x14) & 0xffffdfff;
    }
    *(ushort *)(param_1 + 0x172) = uVar4 & 0xfff;
    *(uint *)(param_1 + 0x14) = uVar10;
    FUN_00407b00(param_1 + 0x68,&local_10,&local_10);
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0x188) + local_c;
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0x184) + local_10;
    *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0x18c) + local_8;
  }
  for (puVar3 = *(undefined4 **)(param_1 + 0xe4); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    if ((puVar3[2] == 0) || ((*(uint *)(param_1 + 0x14) & puVar3[2]) != 0)) {
      iVar8 = FUN_00432f40(param_1,puVar3 + 3);
      if (iVar8 != 0) {
        FUN_00433830(param_1,puVar3 + 3);
        if ((puVar3[5] & 0x200) != 0) {
          uVar5 = FUN_00431e40(param_1,1,(int)DAT_004cd960);
          FUN_004205c0(puVar3[6],uVar5);
        }
        if ((puVar3[5] & 0x400) != 0) {
          FUN_004205c0(puVar3[6],0,2,(int)DAT_004cd960);
        }
        if ((puVar3[5] & 0x10000) != 0) {
          *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x100;
          return;
        }
        if ((puVar3[5] & 0x8000) == 0) break;
      }
    }
  }
  if (((*(uint *)(param_1 + 8) & 0x20000000) == 0) || ((*(byte *)(DAT_004d13c4 + 0x14) & 0x10) != 0)
     ) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = uVar10 | 0x40;
    if ((((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000020) == 0) ||
        ((*(uint *)(param_1 + 8) & 0x40000000) != 0)) &&
       (((uVar10 & 0x8000) != 0 ||
        ((sVar6 = FUN_0042f5f0(DAT_004d13c4,param_1,piVar7), sVar6 != 0 ||
         (sVar6 = FUN_0042f5f0(param_1,DAT_004d13c4,piVar7), sVar6 != 0)))))) {
      FUN_00432420(param_1,0,piVar7);
    }
  }
  FUN_00432e90(param_1);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xf16f6f7f;
  return;
}


