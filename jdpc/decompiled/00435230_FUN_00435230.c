/*
 * Function: FUN_00435230
 * Entry:    00435230
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00435230(int param_1,short *param_2,uint param_3,uint param_4,int *param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  undefined4 uVar13;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_38 [2];
  byte local_36;
  undefined2 local_2e;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 8) & 0x200000) != 0) {
    iVar6 = FUN_004347a0(param_1,param_2,param_3,param_4,param_5);
    return iVar6;
  }
  if ((param_4 & 0x10000) != 0) {
    return 0x200;
  }
  if ((param_4 & 0x80000000) == 0) {
    if ((param_4 & 0x20) != 0) {
      param_2[0xe] = 0x100;
      param_2[0xf] = 0;
      return 0x20;
    }
    if (((param_4 & 4) == 0) || ((*(uint *)(param_2 + 0xe) & 0x10) == 0)) {
      if ((param_4 & 0x10) != 0) {
        *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) | 0x10;
        return 0x200;
      }
      if ((param_4 & 0x40) != 0) {
        uVar13 = FUN_004407e0(*(undefined4 *)(param_1 + 0x60));
        *(undefined4 *)(param_1 + 0x60) = uVar13;
        param_2[0xe] = 0x100;
        param_2[0xf] = 0;
        return 0x100;
      }
    }
    else {
      *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) & 0xffffffef;
    }
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xe);
    if ((uVar8 & 0x10) != 0) {
      return 0x200;
    }
    if ((uVar8 & 0x100) != 0) goto LAB_0043571b;
  }
  uVar8 = *(uint *)(param_2 + 0xe);
  *(uint *)(param_2 + 0xe) = uVar8 & 0xffffcfff;
  piVar7 = param_5;
  if (*(int *)(param_1 + 0x60) == 0) {
    piVar7 = *(int **)(param_1 + 0x5c);
    if (piVar7 == (int *)0x0) {
LAB_00435313:
      param_2[0x12] = 0;
      param_2[0x13] = 0;
    }
    else {
      do {
        if (*(short *)(piVar7[2] + 0x40) == 0x2d) break;
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)0x0);
      if (piVar7 == (int *)0x0) goto LAB_00435313;
      *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(piVar7[2] + 0x48);
    }
    piVar7 = *(int **)(param_1 + 0x5c);
    if (piVar7 == (int *)0x0) {
LAB_0043533c:
      *(uint *)(param_2 + 0xe) = uVar8 & 0xffffcfff | 0x10000;
      iVar6 = FUN_00440840();
      *(int *)(param_1 + 0x60) = iVar6;
      if (iVar6 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(undefined2 *)(iVar6 + 8) = 2;
      FUN_00410940(0,*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x10));
      *(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x10) + 0x48) = param_1 + 100;
      *(int *)(param_1 + 0xa8) = param_1 + 0xb4;
      *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x14) = *(undefined4 *)(param_2 + 0x12);
      return 0x200;
    }
    do {
      if (*(short *)(piVar7[2] + 0x40) == 4) break;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
    if (piVar7 == (int *)0x0) goto LAB_0043533c;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(int *)(piVar7[2] + 0x48) + 8);
    param_2[1] = 0;
    FUN_00442650(param_1,param_2,param_5);
    iVar6 = param_1 + 100;
    *(int *)(*(int *)(param_1 + 0x60) + 100) = iVar6;
    if (((*(uint *)(param_2 + 0xe) & 0x4000) == 0) &&
       (iVar11 = *(int *)(param_1 + 0x58), iVar11 != 0)) {
      *(undefined4 *)(param_1 + 0x104) = 0x1000;
      *(undefined4 *)(param_1 + 0x10c) = 0x1000;
      *(undefined4 *)(param_1 + 0x108) = 0x1000;
      *(undefined2 *)(param_1 + 0x118) = 0;
      *(undefined2 *)(param_1 + 0x116) = 0;
      *(undefined2 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(int *)(param_1 + 0xa8) = param_1 + 0x104;
      if (*(int *)(iVar11 + 0x50) == 0) {
        *(int *)(param_1 + 0xac) = iVar11 + 100;
        *(undefined4 *)(param_1 + 0x50) = 0;
        FUN_00432ef0(iVar6);
      }
      else {
        *(int *)(param_1 + 0xac) = *(int *)(iVar11 + 0x50);
        *(undefined4 *)(param_1 + 0x50) = 0;
        FUN_00432ef0(iVar6);
      }
    }
    else {
      *(int *)(param_1 + 0xa8) = param_1 + 0xb4;
    }
    *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) & 0xffffbfff;
    FUN_00432e90(param_1);
  }
  if ((param_4 & 0xb) != 0) {
    if ((param_4 & 8) != 0) {
      iVar6 = *(int *)(param_2 + 0x10);
      goto LAB_00435694;
    }
    piVar7 = *(int **)(param_1 + 0x5c);
    if (piVar7 == (int *)0x0) {
LAB_004354b5:
      param_2[0xe] = 0x100;
      param_2[0xf] = 0;
      return 0x400;
    }
    do {
      if (*(ushort *)(piVar7[2] + 0x40) == param_3) break;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
    if (piVar7 == (int *)0x0) goto LAB_004354b5;
    iVar6 = *(int *)(piVar7[2] + 0x48);
    if (param_1 == DAT_004d13c4) {
      if ((DAT_004d16e4 == 0xbd) || (DAT_004d16e4 == 0xbe)) {
        sVar4 = **(short **)(param_2 + 6);
        if (sVar4 == 0x4b) {
          uVar13 = 0x4b;
        }
        else if (sVar4 == 0x41) {
          uVar13 = 0x41;
        }
        else if (sVar4 == 0x44) {
          uVar13 = 0x44;
        }
        else {
          if (sVar4 != 0x45) goto LAB_00435552;
          uVar13 = 0x45;
        }
        FUN_004205c0(uVar13,0,2,(int)DAT_004cd960);
      }
LAB_00435552:
      if ((*(uint *)(param_1 + 0x14) & 0x1000000) == 0) {
        sVar4 = *(short *)(piVar7[2] + 0x40);
        if (sVar4 == 0x2b) {
          if ((DAT_004d2392 & 1) == 0) {
            iVar11 = (int)DAT_004cd960;
            DAT_004d2392 = DAT_004d2392 | 1;
            uVar13 = 1;
            uVar3 = FUN_00431e40(param_1,1,iVar11);
            iVar10 = (int)DAT_004a6666;
LAB_0043568c:
            FUN_004205c0(iVar10,uVar3,uVar13,iVar11);
          }
        }
        else if (sVar4 == 0x1e) {
          if ((DAT_004d2392 & 2) == 0) {
            DAT_004d2392 = DAT_004d2392 | 2;
            iVar11 = (int)DAT_004cd960;
            uVar13 = 1;
            uVar3 = FUN_00431e40(param_1,1,iVar11);
            iVar10 = 0x17;
            goto LAB_0043568c;
          }
        }
        else if (sVar4 == 0xcb) {
          if ((DAT_004d2392 & 4) == 0) {
            iVar11 = (int)DAT_004cd960;
            DAT_004d2392 = DAT_004d2392 | 4;
            uVar13 = 1;
            uVar3 = FUN_00431e40(param_1,1,iVar11);
LAB_0043568a:
            iVar10 = 0x37;
            goto LAB_0043568c;
          }
        }
        else {
          if ((DAT_004d2392 & 1) != 0) {
            DAT_004d2392 = DAT_004d2392 & 0xfe;
            FUN_004205c0((int)DAT_004a6666,0,2,(int)DAT_004cd960);
          }
          if ((DAT_004d2392 & 2) != 0) {
            DAT_004d2392 = DAT_004d2392 & 0xfd;
            FUN_004205c0(0x17,0,2,(int)DAT_004cd960);
          }
          if ((DAT_004d2392 & 4) != 0) {
            DAT_004d2392 = DAT_004d2392 & 0xfb;
            iVar11 = (int)DAT_004cd960;
            uVar13 = 2;
            uVar3 = 0;
            goto LAB_0043568a;
          }
        }
      }
    }
LAB_00435694:
    *(uint *)(param_2 + 0xc) = param_3;
    *(int *)(param_2 + 6) = piVar7[2] + 0x14;
    *(undefined1 *)((int)param_2 + 7) = *(undefined1 *)(piVar7[2] + 0x10);
    *(int *)(param_2 + 8) = piVar7[2] + 0x24;
    uVar1 = *(undefined1 *)(piVar7[2] + 0x12);
    *(int *)(param_2 + 0x10) = iVar6;
    *(undefined1 *)((int)param_2 + 9) = uVar1;
    *(undefined1 *)(param_2 + 2) = 0;
    *(uint *)(param_2 + 0xe) = param_4 | 0x1200;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar6 + 8);
    *param_2 = *(short *)(iVar6 + 0xe) + -1;
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)(iVar6 + 0x12);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[1] = 0;
  }
  if ((char)param_2[4] == '\0') {
    if (param_2[1] == *param_2) {
      uVar8 = *(uint *)(param_2 + 0xe);
      if ((uVar8 & 2) != 0) {
        uVar8 = uVar8 & 0xfffffdff | 0x100;
        *(uint *)(param_2 + 0xe) = uVar8;
LAB_0043571b:
        return (-(uint)((uVar8 & 0x800) != 0) & 0x100) + 0x100;
      }
      if ((uVar8 & 1) != 0) {
        *(uint *)(param_2 + 0xe) = uVar8 | 0x80;
        *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
      }
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(int *)(param_2 + 0x10) + 8);
      *param_2 = *(short *)(*(int *)(param_2 + 0x10) + 0xe) + -1;
      *(undefined1 *)(param_2 + 4) = 0;
      param_2[1] = 0;
      *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) | 0x1000;
    }
    FUN_00442650(param_1,param_2,param_5);
    if ((((char)param_2[4] == '\0') && (*(char *)((int)param_2 + 7) != '\0')) &&
       (uVar12 = 0, *(char *)((int)param_2 + 7) != '\0')) {
      do {
        if (param_2[1] == *(short *)((uint)uVar12 * 4 + 2 + *(int *)(param_2 + 6))) {
          uVar3 = FUN_00431e40(param_1,1,(int)DAT_004cd960);
          FUN_004205c0(*(undefined2 *)((uint)uVar12 * 4 + *(int *)(param_2 + 6)),uVar3);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(byte *)((int)param_2 + 7));
    }
    sVar4 = 0;
    if (((*(char *)((int)param_2 + 9) != '\0') && ((char)param_2[4] == '\0')) &&
       (uVar12 = 0, *(char *)((int)param_2 + 9) != '\0')) {
      do {
        iVar11 = (uint)uVar12 * 0xe;
        iVar6 = *(int *)(param_2 + 8) + iVar11;
        if (((param_2[1] == *(short *)(iVar6 + 4)) || ((*(byte *)(iVar6 + 3) & 8) != 0)) &&
           (*(int *)(param_1 + 0x50) != 0)) {
          sVar4 = FUN_00432f40(param_1,iVar6 + 6);
          if (sVar4 != 0) {
            FUN_00433830(param_1,iVar11 + 6 + *(int *)(param_2 + 8));
            if (((*(byte *)(iVar11 + 2 + *(int *)(param_2 + 8)) & 0x40) != 0) &&
               (*(int *)(param_2 + 10) != 0)) {
              FUN_004400c0(*(int *)(param_2 + 10));
              param_2[10] = 0;
              param_2[0xb] = 0;
            }
            puVar9 = (undefined2 *)(iVar11 + *(int *)(param_2 + 8));
            if ((*(byte *)(iVar11 + 2 + *(int *)(param_2 + 8)) & 1) != 0) {
              local_8 = 0;
              local_14 = 0x1000;
              local_16 = 0x1000;
              local_18 = 0x1000;
              local_c = 0;
              local_10 = 0;
              iVar6 = FUN_004409a0(CONCAT22((short)((uint)puVar9 >> 0x10),*puVar9),&local_10,
                                   &local_18);
              if (iVar6 != 0) {
                if (*(int *)(param_2 + 10) != 0) {
                  FUN_004400c0(*(int *)(param_2 + 10));
                  param_2[10] = 0;
                  param_2[0xb] = 0;
                }
                *(undefined4 *)(iVar6 + 0xac) = *(undefined4 *)(param_1 + 0x50);
                *(int *)(param_2 + 10) = iVar6;
                uVar3 = *(undefined2 *)(param_1 + 0x20);
                *(int *)(iVar6 + 0x58) = param_1;
                *(undefined2 *)(iVar6 + 0x20) = uVar3;
                *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(param_1 + 0x50);
                *(int *)(param_1 + 0x54) = iVar6;
                FUN_00432ef0(iVar6 + 100);
              }
            }
            if (((*(byte *)(iVar11 + 2 + *(int *)(param_2 + 8)) & 2) != 0) &&
               (iVar6 = FUN_004409a0(CONCAT22((short)((uint)(param_1 + 0xc4) >> 0x10),
                                              *(undefined2 *)(iVar11 + *(int *)(param_2 + 8))),
                                     param_1 + 0x40,param_1 + 0xc4), iVar6 != 0)) {
              local_48 = *(undefined4 *)(iVar6 + 0xcc);
              local_44 = *(undefined4 *)(iVar6 + 0xd0);
              local_2e = *(undefined2 *)(param_1 + 0x20);
              local_40 = *(undefined4 *)(iVar6 + 0xd4);
              FUN_00431690(&local_48,local_38,param_5);
              if ((local_36 & 4) != 0) {
                *(undefined4 *)(iVar6 + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
                *(undefined4 *)(iVar6 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
              }
              *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(param_1 + 0x20);
              *(undefined4 *)(iVar6 + 0xb4) = **(undefined4 **)(*(int *)(param_1 + 0x50) + 0x44);
              *(undefined4 *)(iVar6 + 0xb8) =
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 0x44) + 4);
              *(undefined4 *)(iVar6 + 0xbc) =
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + 0x44) + 8);
            }
            if ((*(byte *)(iVar11 + 2 + *(int *)(param_2 + 8)) & 0x20) != 0) {
              param_2[10] = 0;
              param_2[0xb] = 0;
              iVar6 = *(int *)(param_1 + 0x54);
              if (iVar6 != 0) {
                *(undefined4 *)(iVar6 + 0xac) = 0;
                *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0xfffff7ff | 0x1000;
                *(int *)(iVar6 + 0xa8) = iVar6 + 0xb4;
                *(undefined4 *)(iVar6 + 0xcc) = *(undefined4 *)(param_1 + 0x40);
                *(undefined4 *)(iVar6 + 0xd0) = *(undefined4 *)(param_1 + 0x44);
                *(undefined4 *)(iVar6 + 0xd4) = *(undefined4 *)(param_1 + 0x48);
                *(undefined2 *)(iVar6 + 0xc4) = *(undefined2 *)(param_1 + 0xc4);
                *(undefined2 *)(iVar6 + 0xc6) = *(undefined2 *)(param_1 + 0xc6);
                *(undefined2 *)(iVar6 + 200) = *(undefined2 *)(param_1 + 200);
                *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(param_1 + 0x20);
                *(undefined4 *)(param_1 + 0x54) = 0;
                *(undefined4 *)(iVar6 + 0x58) = 0;
                FUN_00432ef0(iVar6 + 100);
                FUN_00432190(param_1,iVar6,param_5);
              }
            }
            puVar9 = (undefined2 *)(iVar11 + *(int *)(param_2 + 8));
            if (((*(byte *)(iVar11 + 3 + *(int *)(param_2 + 8)) & 4) != 0) &&
               (iVar6 = FUN_004409a0(CONCAT22((short)((uint)puVar9 >> 0x10),*puVar9),param_1 + 0x40,
                                     param_1 + 0xc4), iVar6 != 0)) {
              FUN_00432190(param_1,iVar6,param_5);
              *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(param_1 + 0x20);
              *(short *)(iVar6 + 0xc6) =
                   *(short *)(iVar6 + 0xc6) +
                   *(short *)(*(int *)(*(int *)(param_1 + 0x50) + 0x44) + 0x12);
            }
            puVar9 = (undefined2 *)(*(int *)(param_2 + 8) + iVar11);
            if (((*(byte *)((int)puVar9 + 3) & 2) != 0) &&
               (iVar6 = FUN_004409a0(CONCAT22((short)((uint)puVar9 >> 0x10),*puVar9),param_1 + 0x40,
                                     param_1 + 0xc4), iVar6 != 0)) {
              FUN_00432190(param_1,iVar6,param_5);
              *(short *)(iVar6 + 0xc4) =
                   *(short *)(iVar6 + 0xc4) +
                   *(short *)(*(int *)(*(int *)(param_1 + 0x50) + 0x44) + 0x10);
              *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(param_1 + 0x20);
            }
            uVar2 = *(ushort *)(iVar11 + 2 + *(int *)(param_2 + 8));
            if (((((uVar2 & 4) != 0) && ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000020) == 0)) &&
                (((uVar2 & 0x4000) == 0 || (DAT_004cffe0 == 0)))) &&
               (((uVar2 & 0x1000) != 0 ||
                (sVar5 = FUN_0042f4b0(DAT_004d13c4,param_1 + 0x40,param_5), sVar5 != 0)))) {
              if (*(int *)(DAT_004d13c4 + 0x58) != 0) {
                *(undefined4 *)(DAT_004d13c4 + 0xac) = 0;
                *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0xb4;
                *(undefined4 *)(*(int *)(DAT_004d13c4 + 0x58) + 0x54) = 0;
                *(undefined4 *)(DAT_004d13c4 + 0x58) = 0;
                *(uint *)(DAT_004d13c4 + 0x14) = *(uint *)(DAT_004d13c4 + 0x14) & 0xffffffeb;
              }
              iVar6 = *(int *)(DAT_004d13c4 + 0x54);
              if (iVar6 != 0) {
                *(undefined4 *)(iVar6 + 0xac) = 0;
                *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0xfffff7ff | 0x1000;
                *(int *)(iVar6 + 0xa8) = iVar6 + 0xb4;
                *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(param_1 + 0x20);
                *(undefined2 *)(iVar6 + 0xc4) = *(undefined2 *)(DAT_004d13c4 + 0xc4);
                *(undefined2 *)(iVar6 + 0xc6) = *(undefined2 *)(DAT_004d13c4 + 0xc6);
                *(undefined2 *)(iVar6 + 200) = *(undefined2 *)(DAT_004d13c4 + 200);
                *(undefined4 *)(DAT_004d13c4 + 0x54) = 0;
                *(undefined4 *)(iVar6 + 0x58) = 0;
                FUN_00432ef0(iVar6 + 100);
                FUN_00432190(DAT_004d13c4,iVar6,param_5);
              }
              if ((*(byte *)(iVar11 + 2 + *(int *)(param_2 + 8)) & 0x80) == 0) {
                *(int *)(DAT_004d13c4 + 0x154) =
                     *(int *)(DAT_004d13c4 + 0xcc) - *(int *)(param_1 + 0x40);
                *(int *)(DAT_004d13c4 + 0x158) =
                     *(int *)(DAT_004d13c4 + 0xd0) - *(int *)(param_1 + 0x44);
                *(int *)(DAT_004d13c4 + 0x15c) =
                     *(int *)(DAT_004d13c4 + 0xd4) - *(int *)(param_1 + 0x48);
              }
              else {
                *(undefined4 *)(DAT_004d13c4 + 0x15c) = 0;
                *(undefined4 *)(DAT_004d13c4 + 0x158) = 0;
                *(undefined4 *)(DAT_004d13c4 + 0x154) = 0;
              }
              *(undefined4 *)(DAT_004d13c4 + 0xcc) = *(undefined4 *)(param_1 + 0x40);
              *(undefined4 *)(DAT_004d13c4 + 0xd0) = *(undefined4 *)(param_1 + 0x44);
              *(undefined4 *)(DAT_004d13c4 + 0xd4) = *(undefined4 *)(param_1 + 0x48);
              DAT_004e1a80 = *(undefined4 *)(param_1 + 0x40);
              DAT_004e1a84 = *(undefined4 *)(param_1 + 0x44);
              DAT_004e1a88 = *(undefined4 *)(param_1 + 0x48);
              *(undefined4 *)(DAT_004d13c4 + 0x13c) = *(undefined4 *)(DAT_004d13c4 + 0xb4);
              *(undefined4 *)(DAT_004d13c4 + 0x140) = *(undefined4 *)(DAT_004d13c4 + 0xb8);
              *(undefined4 *)(DAT_004d13c4 + 0x144) = *(undefined4 *)(DAT_004d13c4 + 0xbc);
              *(undefined2 *)(DAT_004d13c4 + 0x150) = 0;
              *(undefined2 *)(DAT_004d13c4 + 0x14e) = 0;
              *(undefined2 *)(DAT_004d13c4 + 0x14c) = 0;
              *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0x13c;
              *(undefined4 *)(DAT_004d13c4 + 0xac) = *(undefined4 *)(param_1 + 0x50);
              *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
              *(undefined2 *)(DAT_004d13c4 + 300) = *(undefined2 *)(iVar11 + *(int *)(param_2 + 8));
              *(undefined4 *)(DAT_004d13c4 + 0x14) = 0x24;
              *(int *)(param_1 + 0x54) = DAT_004d13c4;
              *(int *)(DAT_004d13c4 + 0x58) = param_1;
              FUN_00432ef0(DAT_004d13c4 + 100);
            }
            uVar2 = *(ushort *)(iVar11 + 2 + *(int *)(param_2 + 8));
            if ((((uVar2 & 8) != 0) && (*(int *)(DAT_004d13c4 + 0x58) == param_1)) &&
               (*(int *)(param_1 + 0x54) != 0)) {
              if ((uVar2 & 0x80) != 0) {
                *(undefined4 *)(DAT_004d13c4 + 0xcc) = *(undefined4 *)(param_1 + 0x40);
                *(undefined4 *)(DAT_004d13c4 + 0xd0) = *(undefined4 *)(param_1 + 0x44);
                *(undefined4 *)(DAT_004d13c4 + 0xd4) = *(undefined4 *)(param_1 + 0x48);
              }
              *(undefined2 *)(DAT_004d13c4 + 0xc4) = *(undefined2 *)(param_1 + 0xc4);
              *(short *)(DAT_004d13c4 + 0xc6) = *(short *)(param_1 + 0xc6) + 0x800;
              *(undefined2 *)(DAT_004d13c4 + 200) = *(undefined2 *)(param_1 + 200);
              *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0xb4;
              *(undefined4 *)(DAT_004d13c4 + 0xac) = 0;
              *(undefined4 *)(param_1 + 0x54) = 0;
              *(undefined4 *)(DAT_004d13c4 + 0x58) = 0;
              *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
              *(undefined2 *)(DAT_004d13c4 + 300) = *(undefined2 *)(iVar11 + *(int *)(param_2 + 8));
              FUN_00432190(param_1,DAT_004d13c4,param_5);
              if (((*(byte *)(iVar11 + 3 + *(int *)(param_2 + 8)) & 0x20) != 0) &&
                 (*(int *)(param_1 + 0x134) != 0)) {
                *(char *)(DAT_0053ea20 + 0x10044) =
                     *(char *)(DAT_0053ea20 + 0x10044) - *(char *)(*(int *)(param_1 + 0x134) + 0x16)
                ;
                _DAT_004a6670 = 0x1e;
                DAT_004cffe0 = 0x69;
              }
              *(uint *)(DAT_004d13c4 + 0x14) = *(uint *)(DAT_004d13c4 + 0x14) & 0xffffffdb;
            }
            if ((((*(byte *)(iVar11 + 3 + *(int *)(param_2 + 8)) & 1) != 0) &&
                ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000020) == 0)) &&
               ((*(int *)(DAT_004d13c4 + 0x58) == 0 &&
                (sVar5 = FUN_0042f4b0(DAT_004d13c4,param_1 + 0x40,param_5), sVar5 != 0)))) {
              *(short *)(DAT_004d13c4 + 0xc6) = *(short *)(param_1 + 0xc6) + 0x800;
              *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
              *(undefined2 *)(DAT_004d13c4 + 300) = *(undefined2 *)(iVar11 + *(int *)(param_2 + 8));
              *(undefined4 *)(DAT_004d13c4 + 0x14) = 0x20;
            }
            goto LAB_00435fb8;
          }
        }
        else {
LAB_00435fb8:
          if (sVar4 == 1) break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(byte *)((int)param_2 + 9));
    }
    if ((char)param_2[4] == '\0') {
      param_2[1] = param_2[1] + 1;
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_2 + 5);
    }
  }
  *(char *)(param_2 + 4) = (char)param_2[4] + -1;
  if (param_2[1] == *param_2) {
    *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) | 0x2000;
  }
  return 0x200;
}


