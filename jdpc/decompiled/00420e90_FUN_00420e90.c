/*
 * Function: FUN_00420e90
 * Entry:    00420e90
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00420e90(short param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  byte *unaff_EBP;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint local_18;
  byte *pbStack_14;
  uint local_10;
  uint local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_004a607c != 0) {
    if ((DAT_004a6080 != (undefined4 *)0x0) &&
       ((**(code **)(*(int *)*DAT_004a6080 + 0x24))((int *)*DAT_004a6080,&local_18), local_18 != 1))
    {
      FUN_00420270(0,0);
    }
    iVar12 = 0;
    if (0 < DAT_004a6078) {
      piVar9 = &DAT_0055df00;
      do {
        iVar3 = (**(code **)(**(int **)(&DAT_0055dd00)[*piVar9] + 0x10))
                          (*(int **)(&DAT_0055dd00)[*piVar9],&local_c,&local_10);
        if ((iVar3 == 0) && (*(uint *)((&DAT_0055dd00)[*piVar9] + 0x14) <= local_c)) {
          piVar6 = *(int **)((&DAT_0055dd00)[*piVar9] + 4);
          (**(code **)(*piVar6 + 0x30))(piVar6,0,0,1);
          (**(code **)(**(int **)(&DAT_0055dd00)[*piVar9] + 0x48))
                    (*(int **)(&DAT_0055dd00)[*piVar9]);
          DAT_004a6078 = DAT_004a6078 + -1;
          if (iVar12 < DAT_004a6078) {
            iVar3 = DAT_004a6078 - iVar12;
            piVar6 = piVar9;
            do {
              *piVar6 = piVar6[1];
              piVar6 = piVar6 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar12 = iVar12 + -1;
          piVar9 = piVar9 + -1;
        }
        iVar12 = iVar12 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar12 < DAT_004a6078);
    }
    local_c = 0;
    if (*(short *)(&DAT_004deba8 + param_1 * 2) != 0) {
      pbStack_14 = &DAT_004d13e6 + param_1 * 0x100;
      iVar12 = DAT_004a6078;
      do {
        iVar3 = *(int *)(pbStack_14 + -6);
        uVar1 = *(ushort *)
                 (&DAT_00559ce4 +
                 ((uint)*(ushort *)(iVar3 + 4) * 0x10 + (uint)*(ushort *)(iVar3 + 6)) * 8);
        uVar10 = (uint)uVar1;
        if (uVar1 < 0x80) {
          if (((int *)(&DAT_0055dd00)[uVar10] == (int *)0x0) ||
             (*(int *)(&DAT_0055dd00)[uVar10] == 0)) {
            FUN_00405550(s_Null_sound_SoundHeader__i_004a08b4,uVar1);
            iVar12 = DAT_004a6078;
          }
          else if ((*(ushort *)(pbStack_14 + -2) & 1) == 0) {
            if ((*(ushort *)(pbStack_14 + -2) & 2) != 0) {
              if (*(int *)((&DAT_0055dd00)[uVar1] + 0x20) == 0) {
                iVar11 = 0;
                do {
                  (**(code **)(**(int **)((&DAT_0055dd00)
                                          [*(ushort *)
                                            (&DAT_00559ce4 +
                                            ((uint)*(ushort *)(iVar3 + 4) * 0x10 +
                                            (uint)*(ushort *)(iVar3 + 6)) * 8)] + iVar11) + 0x48))
                            (*(int **)((&DAT_0055dd00)
                                       [*(ushort *)
                                         (&DAT_00559ce4 +
                                         ((uint)*(ushort *)(iVar3 + 4) * 0x10 +
                                         (uint)*(ushort *)(iVar3 + 6)) * 8)] + iVar11));
                  iVar11 = iVar11 + 4;
                  iVar12 = DAT_004a6078;
                } while (iVar11 < 0x14);
              }
              else {
                iVar11 = 0;
                if (0 < iVar12) {
                  puVar8 = &DAT_0055df00;
                  do {
                    if (((uint)*(ushort *)
                                (&DAT_00559ce4 +
                                ((uint)*(ushort *)(iVar3 + 4) * 0x10 + (uint)*(ushort *)(iVar3 + 6))
                                * 8) == *puVar8) &&
                       (iVar12 = iVar12 + -1, DAT_004a6078 = iVar12, iVar11 < iVar12)) {
                      iVar7 = iVar12 - iVar11;
                      puVar5 = puVar8;
                      do {
                        *puVar5 = puVar5[1];
                        puVar5 = puVar5 + 1;
                        iVar7 = iVar7 + -1;
                      } while (iVar7 != 0);
                    }
                    iVar11 = iVar11 + 1;
                    puVar8 = puVar8 + 1;
                  } while (iVar11 < iVar12);
                }
                (**(code **)(**(int **)(&DAT_0055dd00)
                                       [*(ushort *)
                                         (&DAT_00559ce4 +
                                         ((uint)*(ushort *)(iVar3 + 4) * 0x10 +
                                         (uint)*(ushort *)(iVar3 + 6)) * 8)] + 0x48))
                          (*(int **)(&DAT_0055dd00)
                                    [*(ushort *)
                                      (&DAT_00559ce4 +
                                      ((uint)*(ushort *)(iVar3 + 4) * 0x10 +
                                      (uint)*(ushort *)(iVar3 + 6)) * 8)]);
                (**(code **)(**(int **)((&DAT_0055dd00)
                                        [*(ushort *)
                                          (&DAT_00559ce4 +
                                          ((uint)*(ushort *)(iVar3 + 4) * 0x10 +
                                          (uint)*(ushort *)(iVar3 + 6)) * 8)] + 4) + 0x48))
                          (*(int **)((&DAT_0055dd00)
                                     [*(ushort *)
                                       (&DAT_00559ce4 +
                                       ((uint)*(ushort *)(iVar3 + 4) * 0x10 +
                                       (uint)*(ushort *)(iVar3 + 6)) * 8)] + 4));
                iVar12 = DAT_004a6078;
              }
            }
          }
          else if (((*(short *)(iVar3 + 10) == 0) ||
                   (sVar2 = FUN_00444870(), iVar12 = DAT_004a6078,
                   (int)(uint)*(ushort *)(iVar3 + 10) <= (int)sVar2)) &&
                  ((**(code **)(**(int **)(&DAT_0055dd00)[uVar10] + 0x24))
                             (*(int **)(&DAT_0055dd00)[uVar10],&local_18), iVar12 = DAT_004a6078,
                  (local_18 & 4) == 0)) {
            iVar11 = 0;
            if (*(int *)((&DAT_0055dd00)[uVar10] + 0x20) == 0) {
              while ((local_18 & 1) != 0) {
                iVar11 = iVar11 + 1;
                iVar12 = DAT_004a6078;
                if (4 < iVar11) goto LAB_00421325;
                piVar9 = *(int **)((&DAT_0055dd00)[uVar10] + iVar11 * 4);
                (**(code **)(*piVar9 + 0x24))(piVar9,&local_18);
              }
            }
            iVar12 = DAT_004a6078;
            if (iVar11 < 5) {
              iVar12 = (&DAT_0055dd00)[uVar10];
              local_10 = (uint)(byte)(&DAT_00559cea)
                                     [((uint)*(ushort *)(iVar3 + 4) * 0x10 +
                                      (uint)*(ushort *)(iVar3 + 6)) * 8];
              piVar9 = *(int **)(iVar12 + iVar11 * 4);
              FUN_004457d0();
              uStack_8 = *(undefined4 *)(iVar12 + 0x1c);
              uStack_4 = 0;
              local_10 = __ftol();
              iVar11 = -((int)(((uint)pbStack_14[1] - (uint)*pbStack_14) * 6000) >> 7);
              (**(code **)(*piVar9 + 0x40))(piVar9,iVar11);
              (**(code **)(*piVar9 + 0x44))(piVar9,local_18);
              uVar4 = (byte)(&DAT_00559ce8)
                            [((uint)*(ushort *)(iVar3 + 4) * 0x10 + (uint)*(ushort *)(iVar3 + 6)) *
                             8] + 0x50;
              if (0x7f < uVar4) {
                uVar4 = 0x7f;
              }
              uVar4 = (int)(uVar4 * ((int)((uint)unaff_EBP[1] + (uint)*unaff_EBP) >> 1)) >> 7;
              if (uVar4 < 0x4b) {
                uVar4 = 0;
              }
              *(char *)((&DAT_0055dd00)[uVar10] + 0x24) = (char)uVar4;
              iVar3 = (((int)(uVar4 * DAT_0053e870) / 100 + -0x7f) * 4000) / 0x7f;
              if (iVar3 < -4000) {
                iVar3 = -10000;
              }
              (**(code **)(*piVar9 + 0x3c))(piVar9,iVar3);
              (**(code **)(*piVar9 + 0x30))(piVar9,0,0,0);
              iVar7 = (&DAT_0055dd00)[uVar10];
              iVar12 = DAT_004a6078;
              if ((*(int *)(iVar7 + 0x20) != 0) && (DAT_004a6078 < 5)) {
                (&DAT_0055df00)[DAT_004a6078] = uVar10;
                DAT_004a6078 = DAT_004a6078 + 1;
                piVar9 = *(int **)(iVar7 + 4);
                (**(code **)(*piVar9 + 0x40))(piVar9,iVar11);
                (**(code **)(**(int **)((&DAT_0055dd00)[uVar10] + 4) + 0x44))
                          (*(int **)((&DAT_0055dd00)[uVar10] + 4),local_18);
                (**(code **)(**(int **)((&DAT_0055dd00)[uVar10] + 4) + 0x3c))
                          (*(int **)((&DAT_0055dd00)[uVar10] + 4),iVar3);
                iVar12 = DAT_004a6078;
              }
            }
          }
        }
LAB_00421325:
        local_c = local_c + 1;
        pbStack_14 = pbStack_14 + 8;
      } while ((int)local_c < (int)(uint)*(ushort *)(&DAT_004deba8 + param_1 * 2));
    }
    *(undefined2 *)(&DAT_004deba8 + param_1 * 2) = 0;
  }
  return;
}


