/*
 * Function: FUN_00424640
 * Entry:    00424640
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424640(void)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c [2];
  ushort uStack_14;
  ushort local_12;
  
  local_24 = 0;
  if (DAT_004a6100 != 0) {
    FUN_004262e0();
  }
  FUN_004269d0((double)(int)DAT_0053e8c8,DAT_0053e8c0,DAT_0053e8c4);
  if (DAT_004a09a4 == 1) {
    uVar12 = 0x3ff80000;
  }
  else {
    if (DAT_004a09a4 == 2) {
      uVar12 = 0x3ff33333;
      uVar11 = 0x33333333;
      goto LAB_004246ae;
    }
    uVar12 = 0x3ff00000;
  }
  uVar11 = 0;
LAB_004246ae:
  FUN_00422a80(uVar11,uVar12);
  puVar3 = &DAT_0053eaa4;
  do {
    if (*puVar3 == 0x20) {
      *puVar3 = (&DAT_0053eaa4)[*(short *)((int)puVar3 + -0x12) * 0xc] | 0x20;
    }
    *(undefined2 *)((int)puVar3 + -0x12) = 4;
    puVar3 = puVar3 + 0xc;
  } while ((int)puVar3 < 0x5561a4);
  if ((DAT_004a09a4 & 2) == 0) {
    if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
      DAT_004a6094 = 0;
      DAT_004a60a4 = 0;
      _DAT_0053eaa8 = 0;
      _DAT_0053eaac = 0;
      FUN_00425340();
      FUN_004253c0();
      (*DAT_005618e0)();
      FUN_00409130();
      (*DAT_0055e1b0)(&DAT_0053e8e0);
      uVar7 = 0;
      local_24 = 0;
      piVar10 = DAT_004a60d8;
      for (iVar8 = DAT_004a60f4; iVar8 != 0; iVar8 = iVar8 - iVar4) {
        FUN_004108b0(piVar10 + 2,local_1c);
        uVar1 = (uint)local_12;
        switch(local_1c[0]) {
        case 0:
          uVar7 = (uint)uStack_14 << 2;
          break;
        case 1:
          uVar7 = (uint)uStack_14 << 1;
          break;
        case 2:
          uVar7 = (uint)uStack_14;
          break;
        case 3:
          uVar7 = uStack_14 / 6;
        }
        iVar4 = FUN_004255c0(uVar7);
        iVar5 = FUN_004255c0(uVar1);
        if (DAT_0053e8a0._3_1_ != '\0') {
          if (iVar4 < (int)uVar7) {
            iVar4 = iVar4 * 2;
          }
          if (iVar5 < (int)uVar1) {
            iVar5 = iVar5 * 2;
          }
        }
        if ((iVar4 != 0x200) || (iVar5 != 0x200)) {
          local_24 = local_24 + iVar4 * iVar5 * DAT_0045f804;
        }
        iVar4 = FUN_00424600(piVar10 + 2);
        piVar10 = (int *)((int)piVar10 + iVar4 + 4);
      }
      piVar10 = DAT_004a60d8;
      iVar8 = DAT_004a60f4;
      if ((int)local_24 < 1) {
        for (; iVar8 != 0; iVar8 = iVar8 - iVar4) {
          iVar4 = FUN_00424600(piVar10 + 2);
          FUN_004108b0(piVar10 + 2,local_1c);
          uVar2 = local_12;
          switch(local_1c[0]) {
          case 0:
            uVar7 = (uint)uStack_14 << 2;
            break;
          case 1:
            uVar7 = (uint)uStack_14 << 1;
            break;
          case 2:
            uVar7 = (uint)uStack_14;
            break;
          case 3:
            uVar7 = uStack_14 / 6;
          }
          FUN_004255c0(uVar7);
          FUN_004255c0(uVar2);
          iVar5 = FUN_00424d40();
          (&DAT_00513aa0)[iVar5] = iVar5;
          FUN_004251f0(iVar5);
          piVar10 = (int *)((int)piVar10 + iVar4 + 4);
        }
      }
      else {
        if (DAT_004a60b8 != 0) {
          FUN_00443fe0(DAT_004a60b8);
        }
        DAT_004a60c8 = DAT_0045f804 * 0x40000 + local_24;
        DAT_004a60b8 = FUN_00443ea0(DAT_004a60c8);
        if ((DAT_004a60b8 != 0) &&
           (local_2c = DAT_004a60f4, piVar10 = DAT_004a60d8, _DAT_0053eaac = DAT_004a60b8,
           DAT_004a60f4 != 0)) {
          do {
            iVar8 = FUN_00424600(piVar10 + 2);
            FUN_004108b0(piVar10 + 2,local_1c);
            uVar2 = local_12;
            switch(local_1c[0]) {
            case 0:
              uVar7 = (uint)uStack_14 << 2;
              break;
            case 1:
              uVar7 = (uint)uStack_14 << 1;
              break;
            case 2:
              uVar7 = (uint)uStack_14;
              break;
            case 3:
              uVar7 = uStack_14 / 6;
            }
            FUN_004255c0(uVar7);
            FUN_004255c0(uVar2);
            iVar4 = FUN_00424d40();
            (&DAT_00513aa0)[iVar4] = iVar4;
            FUN_004251f0(iVar4);
            piVar10 = (int *)((int)piVar10 + iVar8 + 4);
            local_2c = local_2c - iVar8;
          } while (local_2c != 0);
          DAT_004a60dc = DAT_004a60d8;
          return;
        }
      }
    }
  }
  else {
    FUN_00409130();
    piVar9 = DAT_004a60d8;
    piVar10 = DAT_004a60d8;
    iVar8 = DAT_004a60f4;
    if (DAT_004a60b4 != 0) {
      for (; DAT_004a60d8 = piVar10, iVar8 != 0; iVar8 = iVar8 - iVar4) {
        iVar4 = FUN_00424600(piVar9 + 2);
        piVar9 = (int *)((int)piVar9 + iVar4 + 4);
        piVar10 = DAT_004a60d8;
      }
      local_20 = 0x6cb;
      local_2c = DAT_004a60f4;
      if (DAT_004a60f4 != 0) {
        do {
          iVar8 = *piVar10;
          piVar9 = piVar10 + 2;
          FUN_00424600(piVar9);
          FUN_004108b0(piVar9,local_1c);
          uVar7 = (uint)local_12;
          switch(local_1c[0]) {
          case 0:
            local_24 = (uint)uStack_14 << 2;
            break;
          case 1:
            local_24 = (uint)uStack_14 << 1;
            break;
          case 2:
            local_24 = (uint)uStack_14;
            break;
          case 3:
            local_24 = uStack_14 / 6;
          }
          iVar4 = FUN_004255c0(local_24);
          iVar5 = FUN_004255c0(uVar7);
          if (DAT_0053e8a0._3_1_ != '\0') {
            if (iVar4 < (int)local_24) {
              iVar4 = iVar4 * 2;
            }
            if (iVar5 < (int)uVar7) {
              iVar5 = iVar5 * 2;
            }
          }
          uVar7 = (&DAT_0053eaa4)[iVar8 * 0xc];
          if ((iVar4 == 0x200) && (iVar5 == 0x200)) {
            iVar8 = 0x6cb;
          }
          local_28 = 0;
          while (uVar7 != 0) {
            iVar4 = iVar8;
            if (0 < local_28) {
              local_20 = local_20 + -1;
              iVar4 = local_20;
            }
            if ((uVar7 & 0x10) == 0) {
              if ((uVar7 & 1) == 0) {
                if ((uVar7 & 2) == 0) {
                  if ((uVar7 & 4) == 0) {
                    if ((uVar7 & 8) == 0) {
                      uVar7 = 0;
                      psVar6 = &DAT_0053ea92 + iVar4 * 0x18;
                      *psVar6 = 4;
                    }
                    else {
                      uVar7 = uVar7 & 0xfffffff7;
                      psVar6 = &DAT_0053ea92 + iVar4 * 0x18;
                      *psVar6 = 3;
                    }
                  }
                  else {
                    uVar7 = uVar7 & 0xfffffffb;
                    psVar6 = &DAT_0053ea92 + iVar4 * 0x18;
                    *psVar6 = 2;
                  }
                }
                else {
                  uVar7 = uVar7 & 0xfffffffd;
                  psVar6 = &DAT_0053ea92 + iVar4 * 0x18;
                  *psVar6 = 1;
                }
              }
              else {
                uVar7 = uVar7 & 0xfffffffe;
                psVar6 = &DAT_0053ea92 + iVar4 * 0x18;
                *psVar6 = 0;
              }
            }
            else {
              uVar7 = uVar7 & 0xffffffef;
              psVar6 = &DAT_0053ea92 + iVar4 * 0x18;
              *psVar6 = 4;
            }
            if (*psVar6 < 4) {
              *(int *)(&DAT_0053ea94 + ((int)*psVar6 + iVar8 * 0xc) * 4) = iVar4;
              *(int *)(&DAT_0053ea94 + ((int)*psVar6 + iVar4 * 0xc) * 4) = iVar4;
            }
            iVar4 = FUN_00424d40();
            local_28 = local_28 + 1;
            (&DAT_00513aa0)[iVar4] = iVar4;
          }
          iVar8 = FUN_00424600(piVar9);
          local_2c = local_2c - iVar8;
          piVar10 = (int *)((int)piVar10 + iVar8 + 4);
        } while (local_2c != 0);
        DAT_004a60dc = DAT_004a60d8;
        return;
      }
    }
  }
  DAT_004a60dc = DAT_004a60d8;
  return;
}


