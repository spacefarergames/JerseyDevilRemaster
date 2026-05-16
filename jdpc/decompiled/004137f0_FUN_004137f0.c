/*
 * Function: FUN_004137f0
 * Entry:    004137f0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004137f0(int param_1,int param_2,short *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  uint local_20;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  undefined2 uVar9;
  
  uVar8 = DAT_0051d80c;
  _DAT_006f6284 = (float)_DAT_00513a94;
  _DAT_006f6288 = (float)_DAT_00513a98;
  _DAT_006f628c = (float)_DAT_00513a9c;
  _DAT_00642550 = DAT_0051d808;
  _DAT_0066b644 = DAT_0051d7f8;
  _DAT_006f6260 = (float)(int)(short)DAT_00513a80 * 0.00024414;
  _DAT_006f6264 = (float)(int)DAT_00513a80._2_2_ * 0.00024414;
  _DAT_006f6268 = (float)(int)(short)DAT_00513a84 * 0.00024414;
  _DAT_006f626c = (float)(int)DAT_00513a84._2_2_ * 0.00024414;
  _DAT_006f6270 = (float)(int)DAT_00513a88 * 0.00024414;
  _DAT_006f6274 = (float)(int)DAT_00513a8a * 0.00024414;
  iVar13 = 0;
  _DAT_006f6278 = (float)(int)DAT_00513a8c * 0.00024414;
  _DAT_006f627c = (float)(int)DAT_00513a8e * 0.00024414;
  _DAT_006f6280 = (float)(int)DAT_00513a90 * 0.00024414;
  _DAT_0066b640 = (float)((int)param_3[6] << 2);
  if (param_3[3] == 0) {
    if (*param_3 == 0) {
      DAT_004d2398 = 1;
      DAT_004d1700 = *(undefined2 *)(DAT_004d2384 + 0x20);
      DAT_0066b650 = __ftol();
    }
    else {
      if ((DAT_004d138e & 0x10) == 0) {
        iVar10 = param_3[2] * 0x14;
        DAT_0066b650 = *(undefined4 *)(&DAT_004d16f0 + param_3[2] * 0x14);
        DAT_0066b654 = *(uint *)(&DAT_004d16f4 + iVar10);
        DAT_0066b658 = *(undefined4 *)(&DAT_004d16f8 + iVar10);
        DAT_0066b65c = *(uint *)(&DAT_004d16fc + iVar10);
        *param_3 = *param_3 + 1;
        goto LAB_00413b42;
      }
      DAT_0066b650 = __ftol();
    }
    uVar11 = DAT_0051d80c >> 0x11;
    DAT_0066b654 = (uVar8 & 0xffff) >> 1;
    DAT_0066b658 = __ftol();
    DAT_0066b65c = uVar11;
    *param_3 = *param_3 + 1;
  }
  else {
    uVar11 = DAT_0051d80c & 0xffff;
    DAT_0066b650 = __ftol();
    uVar8 = DAT_0051d80c >> 0x11;
    DAT_0066b654 = uVar11 >> 1;
    DAT_0066b658 = __ftol();
    DAT_0066b65c = uVar8;
  }
LAB_00413b42:
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar12 = (ushort *)puVar2[4];
    FUN_00412d90(puVar2[2],*puVar2);
    (*DAT_004a5ec8)(puVar2);
    iVar10 = puVar2[5];
    param_1 = iVar10;
    if (iVar10 != 0) {
      do {
        uVar7 = 0;
        uVar9 = 0;
        switch(*(undefined1 *)((int)puVar12 + 3)) {
        case 0:
        case 4:
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ecc)(4,puVar12 + 4,1);
          }
          cVar3 = FUN_00414350(puVar12 + 4);
          if (cVar3 == '\0') {
            iVar10 = iVar10 - (uint)*puVar12;
            puVar12 = puVar12 + *(int *)(puVar12 + 2) * 2;
            param_1 = iVar10;
          }
          else {
            puVar12 = puVar12 + 8;
            iVar10 = iVar10 + -1;
            param_1 = iVar10;
          }
          break;
        default:
          return 0;
        case 8:
        case 0xc:
          iVar10 = 0;
          puVar5 = puVar12;
          if (puVar12[3] != 0) {
            do {
              if (DAT_0064e170 == '\0') {
                (*DAT_004a5ecc)(4,puVar5 + 4,1);
                uVar7 = extraout_ECX;
              }
              uVar9 = (undefined2)((uint)uVar7 >> 0x10);
              iVar10 = iVar10 + 1;
              puVar5 = puVar5 + 4;
            } while (iVar10 < (int)(uint)puVar12[3]);
          }
          cVar3 = FUN_004145b0(puVar12 + 4,CONCAT22(uVar9,puVar12[3]));
          if (cVar3 == '\0') {
            iVar10 = param_1 - (uint)*puVar12;
            puVar12 = puVar12 + (uint)puVar12[2] * 2;
            param_1 = iVar10;
          }
          else {
            puVar12 = puVar12 + 0x1c;
            iVar10 = param_1 + -1;
            param_1 = iVar10;
          }
          break;
        case 0x10:
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ecc)(4,puVar12 + 4,1);
          }
          cVar3 = FUN_00414770(puVar12 + 4,&iStack_10);
          if (cVar3 == '\x01') {
            iVar10 = (int)DAT_004d2398;
            iVar4 = 0;
            if (0 < iVar10) {
              puVar5 = &DAT_004d1700;
              do {
                if (*puVar5 == puVar12[8]) {
                  iVar6 = iVar4 * 0x14;
                  if (iStack_10 < *(int *)(iVar6 + 0x4d1704)) {
                    *(int *)(iVar6 + 0x4d1704) = iStack_10;
                  }
                  if (*(int *)(iVar6 + 0x4d1708) < iStack_c) {
                    *(int *)(iVar6 + 0x4d1708) = iStack_c;
                  }
                  if (iStack_8 < *(int *)(iVar6 + 0x4d170c)) {
                    *(int *)(iVar6 + 0x4d170c) = iStack_8;
                  }
                  if (*(int *)(iVar6 + 0x4d1710) < iStack_4) {
                    *(int *)(iVar6 + 0x4d1710) = iStack_4;
                  }
                  break;
                }
                iVar4 = iVar4 + 1;
                puVar5 = puVar5 + 10;
              } while (iVar4 < iVar10);
            }
            if (param_3[1] < *param_3) {
              *(undefined2 *)(&DAT_004d1702 + iVar10 * 0x14) = 1;
            }
            else {
              local_20 = (uint)DAT_004d239a;
              *(undefined2 *)(&DAT_004d1702 + iVar10 * 0x14) = 0;
              if (local_20 != 0) {
                puVar5 = &DAT_004cd980;
                do {
                  if ((uint)*puVar5 == *(uint *)(puVar12 + 8)) {
                    *(undefined2 *)(&DAT_004d1702 + iVar10 * 0x14) = 1;
                  }
                  puVar5 = puVar5 + 1;
                  local_20 = local_20 - 1;
                } while (local_20 != 0);
              }
            }
            iVar6 = iVar10 * 0x14;
            if (iVar4 == iVar10) {
              DAT_004d2398 = DAT_004d2398 + 1;
              (&DAT_004d1700)[iVar10 * 10] = puVar12[8];
              *(int *)(iVar6 + 0x4d1704) = iStack_10;
              *(int *)(iVar6 + 0x4d1708) = iStack_c;
              *(int *)(iVar6 + 0x4d170c) = iStack_8;
              *(int *)(iVar6 + 0x4d1710) = iStack_4;
            }
          }
          puVar12 = puVar12 + 10;
          iVar10 = param_1 + -1;
          param_1 = iVar10;
          break;
        case 0x14:
          iVar10 = iVar10 - (uint)*puVar12;
          FUN_004130c0(puVar12,0x10);
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ec4)(&DAT_0045dc30);
          }
          FUN_00419470(&DAT_0045dc30);
          FUN_00413720(&DAT_0045dc30);
          if (DAT_00642554 == '\0') {
            FUN_00413140(1,4,0);
          }
          iVar4 = (*DAT_004a5e98)(iVar13 + param_2,&DAT_0045dc30,&DAT_004a5f00,&DAT_0045e010,
                                  &DAT_0045e1e0,&DAT_0045dcf0,0);
          iVar13 = iVar13 + iVar4;
          puVar12 = puVar12 + (uint)*puVar12 * 8;
          param_1 = iVar10;
          break;
        case 0x18:
          uVar1 = *puVar12;
          FUN_004130c0(puVar12,0x14);
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ec4)(&DAT_0045dc60);
          }
          FUN_00419470(&DAT_0045dc60);
          FUN_00413720(&DAT_0045dc60);
          if (DAT_00642554 == '\0') {
            FUN_00413140(3,4,2);
          }
          iVar4 = (*DAT_004a5e98)(iVar13 + param_2,&DAT_0045dc60,&DAT_004a5f28,&DAT_0045e0a0,
                                  &DAT_0045e1f0,&DAT_0045dd20,0);
          goto LAB_00413e63;
        case 0x1c:
          uVar1 = *puVar12;
          FUN_004130c0(puVar12,0x18);
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ec4)(&DAT_0045dc48);
          }
          FUN_00419470(&DAT_0045dc48);
          FUN_00413720(&DAT_0045dc48);
          if (DAT_00642554 == '\0') {
            FUN_00413140(1,8,0);
          }
          iVar4 = (*DAT_004a5e98)(iVar13 + param_2,&DAT_0045dc48,&DAT_0045de50,&DAT_0045e058,
                                  &DAT_0045e1e8,&DAT_0045dd08,1);
          goto LAB_00413f92;
        case 0x20:
          iVar10 = iVar10 - (uint)*puVar12;
          FUN_004130c0(puVar12,0x1c);
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ec4)(&DAT_0045dc78);
          }
          FUN_00419470(&DAT_0045dc78);
          FUN_00413720(&DAT_0045dc78);
          if (DAT_00642554 == '\0') {
            FUN_00413140(3,8,2);
          }
          iVar4 = (*DAT_004a5e98)(iVar13 + param_2,&DAT_0045dc78,&DAT_0045de78,&DAT_0045e0e8,
                                  &DAT_0045e1f8,&DAT_0045dd38,1);
          iVar13 = iVar13 + iVar4;
          puVar12 = puVar12 + (uint)*puVar12 * 0xe;
          param_1 = iVar10;
          break;
        case 0x24:
          uVar1 = *puVar12;
          FUN_004130c0(puVar12,0x14);
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ec4)(&DAT_0045dc90);
          }
          FUN_004191f0(&DAT_0045dc90);
          FUN_00413720(&DAT_0045dc90);
          if (DAT_00642554 == '\0') {
            FUN_00413140(1,4,0);
          }
          iVar4 = (*DAT_004a5e94)(iVar13 + param_2,&DAT_0045dc90,&DAT_004a5f50,&DAT_0045e130,
                                  &DAT_0045e200,&DAT_0045dd50,0);
LAB_00413e63:
          iVar10 = iVar10 - (uint)uVar1;
          iVar13 = iVar13 + iVar4;
          puVar12 = puVar12 + (uint)*puVar12 * 10;
          param_1 = iVar10;
          break;
        case 0x28:
          uVar1 = *puVar12;
          FUN_004130c0(puVar12,0x18);
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ec4)(&DAT_0045dcc0);
          }
          FUN_004191f0(&DAT_0045dcc0);
          FUN_00413720(&DAT_0045dcc0);
          if (DAT_00642554 == '\0') {
            FUN_00413140(4,4,2);
          }
          iVar4 = (*DAT_004a5e94)(iVar13 + param_2,&DAT_0045dcc0,&DAT_004a5f78,&DAT_0045e178,
                                  &DAT_0045e210,&DAT_0045dd80,0);
LAB_00413f92:
          iVar10 = iVar10 - (uint)uVar1;
          iVar13 = iVar13 + iVar4;
          puVar12 = puVar12 + (uint)*puVar12 * 0xc;
          param_1 = iVar10;
          break;
        case 0x2c:
          iVar10 = iVar10 - (uint)*puVar12;
          FUN_004130c0(puVar12,0x20);
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ec4)(&DAT_0045dca8);
          }
          FUN_004191f0(&DAT_0045dca8);
          FUN_00413720(&DAT_0045dca8);
          if (DAT_00642554 == '\0') {
            FUN_00413140(1,10,0);
          }
          iVar4 = (*DAT_004a5e94)(iVar13 + param_2,&DAT_0045dca8,&DAT_0045dea0,&DAT_004a5fa0,
                                  &DAT_0045e208,&DAT_0045dd68,1);
          iVar13 = iVar13 + iVar4;
          puVar12 = puVar12 + (uint)*puVar12 * 0x10;
          param_1 = iVar10;
          break;
        case 0x30:
          iVar10 = iVar10 - (uint)*puVar12;
          FUN_004130c0(puVar12,0x24);
          if (DAT_0064e170 == '\0') {
            (*DAT_004a5ec4)(&DAT_0045dcd8);
          }
          FUN_004191f0(&DAT_0045dcd8);
          FUN_00413720(&DAT_0045dcd8);
          if (DAT_00642554 == '\0') {
            FUN_00413140(4,10,2);
          }
          iVar4 = (*DAT_004a5e94)(iVar13 + param_2,&DAT_0045dcd8,&DAT_0045dec8,&DAT_004a5fe8,
                                  &DAT_0045e218,&DAT_0045dd98,1);
          iVar13 = iVar13 + iVar4;
          puVar12 = puVar12 + (uint)*puVar12 * 0x12;
          param_1 = iVar10;
          break;
        case 100:
          uVar8 = (uint)*puVar12;
          if (uVar8 != 0) {
            puVar12 = puVar12 + uVar8 * 8;
            do {
              iVar10 = iVar10 + -1;
              uVar8 = uVar8 - 1;
              param_1 = iVar10;
            } while (uVar8 != 0);
          }
        }
        if (iVar10 == 0) {
          return iVar13 + param_2;
        }
      } while( true );
    }
  }
  return param_2;
}


