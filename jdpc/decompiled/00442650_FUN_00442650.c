/*
 * Function: FUN_00442650
 * Entry:    00442650
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00442650(int *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar4 = param_3;
  piVar3 = param_1;
  *param_3 = **(uint **)(param_2 + 0x28);
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 4;
  param_3[0xf] = *param_3 >> 0x10;
  param_3[0x10] = **(uint **)(param_2 + 0x28);
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 4;
  param_1[0x14] = 0;
  *(undefined2 *)(param_3 + 0x1b) = 1;
  if (param_1[0x18] != 0) {
    param_3[0x1a] = (uint)(param_3 + 0x1d);
    puVar7 = param_3 + 0x1e;
    for (puVar9 = (uint *)param_1[0x18]; puVar9 != (uint *)0x0; puVar9 = (uint *)*puVar9) {
      *puVar7 = (uint)puVar9;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)(param_3 + 0x1b) = 0;
  }
  param_3[0xe] = 0;
  if (param_3[0xf] != 0) {
    do {
      puVar7 = *(uint **)(param_2 + 0x28);
      uVar2 = *puVar7;
      puVar9 = puVar7 + 1;
      puVar4[0xc] = uVar2 & 0xf0000;
      uVar5 = uVar2 & 0xffff;
      puVar4[1] = uVar2 & 0xf00000;
      puVar4[2] = uVar2 >> 0x18;
      if ((short)puVar4[0x1b] == 0) {
        piVar8 = (int *)0x0;
        if (uVar5 != 0) {
          piVar8 = *(int **)(puVar4[0x1a] + uVar5 * 4);
        }
LAB_00442722:
        if (piVar8 != (int *)0x0) {
          param_3 = (uint *)(piVar8 + 3);
          puVar4[3] = piVar8[4] + 4;
          param_1 = (int *)((undefined4 *)piVar8[4])[0x11];
          *(undefined4 *)piVar8[4] = 0;
        }
      }
      else {
        piVar8 = (int *)piVar3[0x18];
        if (piVar8 != (int *)0x0) {
          do {
            if (piVar8[6] == uVar5) break;
            piVar8 = (int *)*piVar8;
          } while (piVar8 != (int *)0x0);
          goto LAB_00442722;
        }
      }
      uVar2 = puVar4[0xc];
      if (uVar2 < 0x10001) {
        if (uVar2 == 0x10000) {
          *(ushort *)(piVar8 + 2) = *(ushort *)(piVar8 + 2) & 0x7fff;
          if ((puVar4[1] & 0x600000) != 0) {
            if ((puVar4[1] & 0x200000) != 0) {
              uVar2 = *puVar9;
              puVar9 = puVar7 + 3;
              *(short *)(param_1 + 4) = (short)uVar2;
              *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)puVar7 + 6);
              *(short *)(param_1 + 5) = (short)puVar7[2];
            }
            if ((puVar4[1] & 0x400000) != 0) {
              *param_1 = (int)(short)*puVar9;
              param_1[1] = (int)*(short *)((int)puVar9 + 2);
              param_1[2] = (int)(short)puVar9[1];
              puVar9 = puVar9 + 2;
            }
            FUN_004072e0(param_1 + 4,puVar4[3]);
            FUN_00407900(puVar4[3],param_1);
          }
          if ((puVar4[1] & 0x800000) != 0) {
            param_1[6] = *puVar9;
            param_1[7] = puVar9[1];
            param_1[8] = puVar9[2];
            FUN_004079a0(puVar4[3],param_1 + 6);
          }
        }
        else if (uVar2 == 0) {
          *param_3 = *puVar9 & *param_3 | puVar7[2];
        }
      }
      else if (uVar2 < 0x30001) {
        if (uVar2 == 0x30000) {
          uVar2 = *puVar9;
          if ((uVar2 == 0) || (uVar2 == 0xffff)) {
            *(int **)(param_3[1] + 0x48) = piVar3 + 0x19;
          }
          else {
            uVar5 = piVar3[0x18];
            puVar4[0x1c] = uVar5;
            while ((uVar5 != 0 && (((uint *)puVar4[0x1c])[6] != uVar2))) {
              uVar5 = *(uint *)puVar4[0x1c];
              puVar4[0x1c] = uVar5;
            }
            puVar4[4] = puVar4[0x1c] + 0xc;
            *(undefined4 *)(param_3[1] + 0x48) = *(undefined4 *)(puVar4[0x1c] + 0x10);
          }
        }
        else if (uVar2 == 0x20000) {
          uVar2 = *puVar9;
          puVar4[0xb] = uVar2 & 0xffff;
          if ((uVar2 & 0xffff) == 0) {
            *(undefined2 *)(piVar8 + 2) = 8;
            param_3[2] = 0;
          }
          else {
            *(undefined2 *)(piVar8 + 2) = 4;
            param_3[2] = *(int *)(param_2 + 0x24) + -0x1c + puVar4[0xb] * 0x1c;
          }
        }
      }
      else if (uVar2 < 0x80001) {
        if (uVar2 == 0x80000) {
          uVar2 = puVar4[1];
          uVar10 = uVar2 >> 0x14 & 1;
          if (uVar10 == 0) {
            switch(uVar2 >> 0x15 & 7) {
            case 0:
              FUN_004408b0(piVar3,uVar5);
              break;
            case 1:
              iVar6 = FUN_004408b0(piVar3,uVar5);
              *(undefined2 *)(iVar6 + 8) = 0x40;
              break;
            case 2:
              iVar6 = FUN_004408b0(piVar3,uVar5);
              *(undefined2 *)(iVar6 + 8) = 0x80;
              break;
            case 3:
              iVar6 = FUN_004408b0(piVar3,uVar5);
              *(undefined2 *)(iVar6 + 8) = 0x100;
              break;
            case 4:
              iVar6 = FUN_004408b0(piVar3,uVar5);
              *(undefined2 *)(iVar6 + 8) = 0x200;
              break;
            case 5:
              *(ushort *)(piVar8 + 2) = *(ushort *)(piVar8 + 2) & 0x7fff;
            }
          }
          else if (uVar10 == 1) {
            if ((undefined *)(uVar2 & 0xe00000) == &DAT_00a00000) {
              param_1[2] = 0;
              param_1[1] = 0;
              *param_1 = 0;
              *(undefined2 *)puVar4[3] = 0;
              *(undefined2 *)(puVar4[3] + 2) = 0;
              *(undefined2 *)(puVar4[3] + 8) = 0;
              *(undefined2 *)(puVar4[3] + 10) = 0;
              *(undefined2 *)(puVar4[3] + 0x10) = 0;
              *(byte *)((int)piVar8 + 9) = *(byte *)((int)piVar8 + 9) | 0x80;
            }
            else {
              FUN_004408f0(piVar3,uVar5);
            }
          }
        }
        else if (uVar2 == 0x60000) {
          param_1[9] = *puVar9;
        }
      }
      else if (uVar2 == 0x90000) {
        puVar1 = puVar4 + 0x12;
        *(undefined2 *)(puVar4 + 0x14) = 0x1000;
        *(undefined2 *)puVar1 = 0x1000;
        *(undefined2 *)((int)puVar4 + 0x4a) = 0;
        *(undefined2 *)(puVar4 + 0x13) = 0;
        *(undefined2 *)((int)puVar4 + 0x4e) = 0;
        *(undefined2 *)((int)puVar4 + 0x52) = 0;
        *(undefined2 *)(puVar4 + 0x15) = 0;
        *(undefined2 *)((int)puVar4 + 0x56) = 0;
        *(undefined2 *)(puVar4 + 0x16) = 0x1000;
        puVar4[0x17] = 0;
        puVar4[0x18] = 0;
        puVar4[0x19] = 0;
        *(undefined2 *)puVar1 = *(undefined2 *)piVar3[0x2a];
        *(undefined2 *)(puVar4 + 0x14) = *(undefined2 *)(piVar3[0x2a] + 4);
        *(undefined2 *)(puVar4 + 0x16) = *(undefined2 *)(piVar3[0x2a] + 8);
        FUN_00408180(puVar1);
        FUN_004081f0(puVar9);
        FUN_00408250();
        FUN_00408220(piVar3 + 0xc);
        *(undefined2 *)(puVar4 + 9) = *(undefined2 *)((int)puVar7 + 10);
        *(short *)((int)puVar4 + 0x26) = (short)puVar7[3];
        *(undefined2 *)(puVar4 + 10) = *(undefined2 *)((int)puVar7 + 0xe);
        FUN_004081f0(puVar4 + 9);
        FUN_00408250();
        FUN_00408220(piVar3 + 0xe);
      }
      else if (uVar2 == 0xa0000) {
        puVar7 = puVar4 + 9;
        *(undefined2 *)puVar7 = 0;
        *(undefined2 *)((int)puVar4 + 0x26) = 0;
        *(undefined2 *)(puVar4 + 10) = 0;
        uVar2 = param_3[1];
        puVar4[0x11] = uVar2;
        if (uVar2 != 0) {
          puVar9 = puVar4 + 5;
          do {
            FUN_00408010(puVar4[0x11] + 4,puVar7,puVar9);
            uVar2 = puVar4[0x11];
            *puVar9 = *puVar9 + *(int *)(uVar2 + 0x18);
            puVar4[6] = puVar4[6] + *(int *)(uVar2 + 0x1c);
            iVar6 = *(int *)(uVar2 + 0x20);
            *(short *)((int)puVar4 + 0x26) = (short)puVar4[6];
            puVar4[7] = puVar4[7] + iVar6;
            *(short *)puVar7 = (short)*puVar9;
            *(short *)(puVar4 + 10) = (short)puVar4[7];
            uVar2 = *(uint *)(puVar4[0x11] + 0x48);
            puVar4[0x11] = uVar2;
          } while (uVar2 != 0);
        }
        piVar3[0x10] = puVar4[5];
        piVar3[0x11] = puVar4[6];
        piVar3[0x12] = puVar4[7];
        piVar3[0x14] = param_3[1];
      }
      *(uint *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + puVar4[2] * 4;
      uVar2 = puVar4[0xe];
      puVar4[0xe] = uVar2 + 1;
    } while (uVar2 + 1 < puVar4[0xf]);
  }
  return;
}


