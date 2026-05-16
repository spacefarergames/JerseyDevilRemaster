/*
 * Function: FUN_00441f30
 * Entry:    00441f30
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00441f30(int param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 auStack_4c [6];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  ushort *puStack_2c;
  ushort *puStack_28;
  ushort *puStack_24;
  ushort *local_c;
  ushort *local_8;
  short *local_4;
  
  puVar2 = DAT_0051d6e0;
  _DAT_008079b8 = 0;
  _DAT_008079bc = 1;
  DAT_0051d82c = DAT_00513a64;
  _DAT_004a6664 = 0;
  _DAT_004d13b4 = 0;
  DAT_004d1388 = 0;
  *DAT_0051d6e0 = 0;
  puVar2[1] = 0xffff;
  puVar9 = puVar2 + 0x5a;
  *(int *)(puVar2 + 0x16) = DAT_004d16ec;
  *(int *)(puVar2 + 0x18) = DAT_004d18f8;
  *(undefined **)(puVar2 + 0x12) = &DAT_004a6664;
  *(undefined **)(puVar2 + 0x14) = &DAT_004d13b4;
  puVar2[0xd] = DAT_004d22de;
  puVar2[0xe] = DAT_004cd964;
  puVar2[0xf] = DAT_004e1988;
  *(int *)(puVar2 + 8) = 0xe - DAT_004d13b2;
  *(int *)(puVar2 + 0x1a) = param_1;
  do {
    if (param_1 == 0) {
      puStack_24 = (ushort *)0x442633;
      FUN_00441ea0();
      _DAT_008079b8 = 0;
      return *puVar2;
    }
    iVar8 = *(int *)(puVar2 + 0x1a);
    if (*(char *)(iVar8 + 0x26) == '\a') {
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[0xc] = 0;
      puVar2[0xb] = *(short *)(iVar8 + 0x22) << 2;
      iVar7 = iVar8;
    }
    else {
      iVar8 = *(int *)(puVar2 + 0x1a);
      puVar2[7] = 1;
      uVar4 = *(short *)(iVar8 + 0x22) << 2;
      puVar2[0xb] = uVar4;
      puVar2[0xc] = uVar4;
      puVar2[10] = uVar4;
      if ((*(byte *)(iVar8 + 0x14) & 0x10) != 0) {
        uVar4 = *(short *)(iVar8 + 0x22) * 2;
        puVar2[10] = uVar4;
        uVar4 = uVar4 + *(short *)(*(int *)(iVar8 + 0x58) + 0x22) * 4;
        puVar2[10] = uVar4;
        puVar2[0xb] = uVar4;
        puVar2[0xc] = uVar4;
      }
      iVar7 = DAT_004d13c4;
      iVar8 = *(int *)(puVar2 + 0x1a);
      if (*(short *)(iVar8 + 0x20) != *(short *)(DAT_004d13c4 + 0x20)) {
        iVar8 = ((int)*(short *)(iVar8 + 0x22) & 0x3ffffffeU) << 1;
        uVar4 = (ushort)iVar8;
        puVar2[10] = uVar4;
        puVar2[0xb] = uVar4;
        puVar2[0xc] = uVar4;
      }
    }
    *(undefined **)(puVar2 + 0x10) = &DAT_00808080;
    puVar2[1] = 0xffff;
    iVar3 = DAT_0045f800;
    uVar4 = *(ushort *)(*(int *)(puVar2 + 0x1a) + 0x20);
    puStack_24 = (ushort *)CONCAT22((short)((uint)iVar8 >> 0x10),uVar4);
    if (uVar4 != 0xffff) {
      puVar2[1] = uVar4;
      if (iVar3 == 8) {
        puStack_24 = (ushort *)
                     CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)(DAT_004d13c4 + 0x20));
        puStack_28 = *(ushort **)(DAT_004d2384 + 0xdc);
      }
      else {
        puStack_28 = *(ushort **)(DAT_004d2384 + 0xdc);
      }
      puStack_2c = (ushort *)0x4420d8;
      FUN_0040f420();
    }
    if (*(char *)(*(int *)(puVar2 + 0x1a) + 0x27) != '\0') {
      if (0x27 < DAT_004d1388) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar8 = (int)DAT_004d1388;
      DAT_004d1388 = DAT_004d1388 + 1;
      (&DAT_004a6680)[iVar8] = *(int *)(puVar2 + 0x1a);
    }
    if (((DAT_004cffe0 == 0) || (*(char *)(*(int *)(puVar2 + 0x1a) + 0x26) != '\x01')) ||
       ((DAT_004cffe0 & 1) == 0)) {
      for (puVar1 = *(undefined4 **)(*(int *)(puVar2 + 0x1a) + 0x60); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        uVar4 = *(ushort *)(puVar1 + 2);
        if ((uVar4 & 0x8000) == 0) {
          if ((uVar4 & 6) == 0) {
            if ((uVar4 & 0x11) == 0) {
              if ((uVar4 & 0x20) == 0) {
                if ((uVar4 & 0x40) == 0) {
                  if ((uVar4 & 0x80) == 0) {
                    if ((uVar4 & 0x100) == 0) {
                      if ((uVar4 & 0x200) == 0) goto LAB_00442610;
                      puVar5 = puVar2 + 0x54;
                      *puVar5 = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x24);
                      puVar2[0x55] = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x25);
                      puVar2[0x56] = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x26);
                      puStack_2c = (ushort *)0x4425d0;
                      puStack_28 = puVar5;
                      puStack_24 = puVar5;
                      FUN_00408500();
                      puVar2[0x2e] = *puVar5;
                      puStack_24 = puVar2 + 0x2c;
                      puVar2[0x31] = puVar2[0x55];
                      puVar2[0x34] = puVar2[0x56];
                      puStack_28 = (ushort *)0x4425f9;
                      FUN_0040f5d0();
                    }
                    else {
                      puVar5 = puVar2 + 0x54;
                      *puVar5 = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x24);
                      puVar2[0x55] = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x25);
                      puVar2[0x56] = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x26);
                      puStack_2c = (ushort *)0x44256a;
                      puStack_28 = puVar5;
                      puStack_24 = puVar5;
                      FUN_00408500();
                      puVar2[0x2d] = *puVar5;
                      puVar2[0x30] = puVar2[0x55];
                      puVar2[0x33] = puVar2[0x56];
                    }
                  }
                  else {
                    puVar5 = puVar2 + 0x54;
                    *puVar5 = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x24);
                    puVar2[0x55] = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x25);
                    puVar2[0x56] = (ushort)*(byte *)(*(int *)(puVar1[4] + 0x44) + 0x26);
                    puStack_2c = (ushort *)0x442501;
                    puStack_28 = puVar5;
                    puStack_24 = puVar5;
                    FUN_00408500();
                    puVar2[0x2c] = *puVar5;
                    puVar2[0x2f] = puVar2[0x55];
                    puVar2[0x32] = puVar2[0x56];
                  }
                  puVar2[1] = 0xffff;
                }
                else {
                  DAT_004d2352._1_1_ = DAT_004d2352._1_1_ | 1;
                  puVar5 = puVar2 + 0x44;
                  puVar2[0x46] = 0;
                  puVar2[0x47] = 0;
                  puVar2[0x48] = 1000;
                  puVar2[0x49] = 0;
                  puVar5[0] = 0;
                  puVar5[1] = 0;
                  puStack_28 = (ushort *)puVar1[4];
                  puStack_2c = (ushort *)0x442459;
                  puStack_24 = puVar2 + 0x1c;
                  FUN_0040f700();
                  DAT_004d22e0 = *(int *)(puVar2 + 0x26);
                  DAT_004d22e4 = *(int *)(puVar2 + 0x28);
                  DAT_004d22e8 = *(int *)(puVar2 + 0x2a);
                  puStack_30 = (undefined4 *)0x44247e;
                  puStack_2c = puVar2 + 0x1c;
                  puStack_28 = puVar5;
                  puStack_24 = puVar5;
                  FUN_00407b00();
                  DAT_004d22ec = DAT_004d22e0 + *(int *)puVar5;
                  DAT_004d22f0 = DAT_004d22e4 + *(int *)(puVar2 + 0x46);
                  DAT_004d22f4 = DAT_004d22e8 + *(int *)(puVar2 + 0x48);
                }
              }
              else {
                (&DAT_00513aa0)[*(short *)(puVar1 + 5)] = (uint)*(ushort *)((int)puVar1 + 0x12);
              }
            }
            else {
              puStack_28 = (ushort *)0x442370;
              puStack_24 = DAT_0051d82c;
              FUN_0041f3d0();
              DAT_0066d68c = 0;
              puVar5 = *(ushort **)(puVar2 + 0x1a);
              if ((char)puVar5[0x13] == '\x11') {
                *puVar2 = 1;
                puStack_2c = (ushort *)0x442392;
                puStack_28 = puVar5;
                puStack_24 = puVar9;
                (*DAT_004a5ebc)();
              }
              else if ((char)puVar5[0x13] != '!') {
                if ((*(byte *)(puVar1 + 2) & 0x10) == 0) {
                  puStack_2c = (ushort *)0x4423b6;
                  puStack_28 = puVar5;
                  puStack_24 = puVar9;
                  piVar6 = (int *)FUN_00432ce0();
                  puVar5 = *(ushort **)(puVar2 + 0x1a);
                  if (((puVar5[2] & 2) == 0) || (*piVar6 == 0)) goto LAB_00442610;
                  puVar2[2] = puVar5[0x5e] - ((short)puVar2[0xb] >> 2);
                }
                else {
                  puVar2[2] = 0;
                }
                puStack_24 = (ushort *)
                             CONCAT22((short)((uint)puVar5 >> 0x10),*(undefined2 *)(puVar1 + 2));
                puStack_28 = puVar2;
                puVar10 = puVar1 + 3;
                puVar11 = auStack_4c;
                for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                (*DAT_004a5ec0)();
              }
            }
          }
          else if (puVar1[5] != 0) {
            DAT_004e19fc = 0;
            _DAT_004d13ac = &DAT_004cdfe0;
            if (*(char *)(puVar1 + 0x32) != '\0') {
              if ((*(byte *)(*(int *)(puVar2 + 0x1a) + 8) & 0x40) == 0) {
                puVar1[3] = 0;
              }
              else {
                puVar1[3] = 0x40000000;
              }
              puStack_24 = (ushort *)(puVar1 + 0x25);
              puStack_28 = (ushort *)0x442195;
              FUN_00407ff0();
              puStack_24 = (ushort *)(puVar1 + 0x2d);
              puStack_28 = (ushort *)0x4421a4;
              FUN_0040f5b0();
              puStack_28 = puVar2 + 4;
              *puStack_28 = 0;
              puVar2[5] = 1;
              puVar2[6] = 1;
              if (*(char *)(*(int *)(puVar2 + 0x1a) + 0x26) == '\x01') {
                _DAT_008079bc = 2;
                DAT_004a5e88 = 1;
              }
              puStack_2c = DAT_0051d82c;
              uStack_34 = 0x4421e0;
              puStack_30 = puVar1;
              puStack_24 = puVar9;
              puVar5 = (ushort *)FUN_004137f0();
              _DAT_008079bc = 1;
              DAT_004a5e88 = 0;
              DAT_0051d82c = puVar5;
              if (*(char *)(*(int *)(puVar2 + 0x1a) + 0x26) == '\a') {
                puVar2[10] = 0;
                puVar2[0xb] = 0;
                puVar2[0xc] = 0;
                uVar4 = 1;
                puVar5 = (ushort *)(int)DAT_004d2398;
                local_c = (ushort *)0x1;
                if (1 < (int)puVar5) {
                  local_4 = &DAT_004d1714;
                  local_8 = puVar5;
                  do {
                    if (local_c == local_8) {
                      uVar4 = uVar4 + 1;
                      local_8 = puVar5;
                    }
                    if ((*(byte *)(local_4 + 1) & 1) == 0) {
                      puStack_24 = (ushort *)(int)*local_4;
                      puVar10 = *(undefined4 **)(&DAT_004d21a0 + (int)puStack_24 * 4);
                      if (DAT_0045f800 != 8) {
                        puStack_28 = *(ushort **)(DAT_004d2384 + 0xdc);
                        puStack_2c = (ushort *)0x44227a;
                        iVar8 = FUN_0040f420();
                        *(int *)(puVar2 + 0x58) = iVar8;
                        puStack_28 = (ushort *)(iVar8 + 0x20);
                        puStack_24 = (ushort *)&DAT_0053ea40;
                        puStack_2c = (ushort *)0x442291;
                        FUN_00407190();
                      }
                      puStack_2c = puVar2 + 0x2c;
                      puStack_30 = (undefined4 *)puVar10[4];
                      uStack_34 = 0x4422aa;
                      puStack_28 = puVar2 + 0x1c;
                      puStack_24 = puVar9;
                      iVar8 = FUN_0040f5f0();
                      if (iVar8 != 0) {
                        puStack_28 = (ushort *)0x4422b7;
                        puStack_24 = puVar2 + 0x1c;
                        FUN_00407ff0();
                        puStack_24 = puVar2 + 0x2c;
                        puStack_28 = (ushort *)0x4422c3;
                        FUN_0040f5b0();
                        puStack_28 = puVar2 + 4;
                        *puStack_28 = uVar4;
                        puVar2[5] = (short)*(char *)((int)puVar10 + 0xc9);
                        puVar2[6] = (short)local_c + 1;
                        puStack_2c = DAT_0051d82c;
                        uStack_34 = 0x4422f8;
                        puStack_30 = puVar10;
                        puStack_24 = puVar9;
                        DAT_0051d82c = (ushort *)FUN_004137f0();
                      }
                    }
                    puVar5 = (ushort *)(int)DAT_004d2398;
                    local_c = (ushort *)((int)local_c + 1);
                    local_4 = local_4 + 10;
                  } while ((int)local_c < (int)puVar5);
                }
                puVar2[4] = 0;
              }
              if (DAT_004e19fc != 0) {
                puStack_28 = DAT_0051d82c;
                puStack_2c = (ushort *)&DAT_004cdfe0;
                uStack_34 = 0x44234f;
                puStack_30 = (undefined4 *)CONCAT22((short)((uint)puVar5 >> 0x10),DAT_004e19fc);
                puStack_24 = puVar9;
                DAT_0051d82c = (ushort *)FUN_004071c0();
              }
            }
          }
        }
LAB_00442610:
      }
      param_1 = *(int *)(*(int *)(puVar2 + 0x1a) + 0x10);
    }
    else {
      param_1 = *(int *)(*(int *)(puVar2 + 0x1a) + 0x10);
    }
    *(int *)(puVar2 + 0x1a) = param_1;
  } while( true );
}


