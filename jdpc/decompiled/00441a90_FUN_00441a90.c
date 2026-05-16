/*
 * Function: FUN_00441a90
 * Entry:    00441a90
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441a90(int param_1,short param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  undefined2 extraout_var;
  int iVar6;
  undefined2 uVar7;
  undefined2 extraout_var_00;
  ushort *puVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  
  puVar3 = DAT_0051d6e0;
  DAT_0051d6e0[0xd] = DAT_004d22de;
  puVar3[0xe] = DAT_004cd964;
  puVar3[0xf] = DAT_004e1988;
  *(undefined **)(puVar3 + 0x10) = &DAT_00808080;
  puVar3[7] = 1;
  puVar3[5] = 1;
  puVar3[6] = 1;
  puVar8 = puVar3 + 0xbc;
  iVar5 = 0xe - DAT_004d13b2;
  *(int *)(puVar3 + 8) = iVar5;
  if (DAT_004d1388 != 0) {
    puVar3[0x5c] = 0;
    puVar3[0x5d] = 0x4000;
    *(ushort **)(puVar3 + 0x5e) = puVar3 + 100;
    puVar3[0x88] = 0;
    puVar3[0x89] = 0;
    puVar3[0x8a] = 0;
    puVar3[0x8b] = 0;
    puVar3[2] = 0;
    uVar4 = DAT_004d1388;
    puVar3[1] = DAT_004d1388;
    if (0 < (short)uVar4) {
      do {
        uVar10 = *(undefined4 *)(param_1 + (short)puVar3[2] * 4);
        puVar3[2] = puVar3[2] + 1;
        *(undefined4 *)(puVar3 + 0x16) = uVar10;
        FUN_004419e0(uVar10,puVar3 + 0x42,puVar8);
        iVar5 = *(int *)(puVar3 + 0x16);
        iVar6 = CONCAT22(extraout_var,*(short *)(iVar5 + 0x20));
        if (*(short *)(iVar5 + 0x20) == *(short *)(DAT_004d13c4 + 0x20)) {
          if ((*(byte *)(iVar5 + 0x14) & 0x10) == 0) {
            uVar4 = *(short *)(iVar5 + 0x22) << 2;
            iVar6 = CONCAT22(extraout_var,uVar4);
            puVar3[0xb] = uVar4;
            puVar3[0xc] = uVar4;
            puVar3[10] = uVar4;
          }
          else {
            iVar6 = ((int)*(short *)(iVar5 + 0x22) & 0x3fffffffU) << 1;
            uVar4 = (ushort)iVar6;
            puVar3[0xb] = uVar4;
            puVar3[0xc] = uVar4;
            puVar3[10] = uVar4;
          }
        }
        else {
          puVar3[0xb] = 0;
          puVar3[0xc] = 0;
          puVar3[10] = 0;
        }
        uVar7 = (undefined2)((uint)iVar6 >> 0x10);
        uVar4 = (ushort)*(byte *)(iVar5 + 0x27);
        iVar5 = CONCAT22(uVar7,uVar4);
        *puVar3 = uVar4;
        for (puVar2 = DAT_004cd970; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
          if (*(ushort *)(puVar2 + 6) == uVar4) {
            puVar2 = (undefined4 *)puVar2[0x17];
            goto joined_r0x00441bd9;
          }
        }
LAB_00441d76:
        iVar5 = CONCAT22(uVar7,puVar3[2]);
      } while ((short)puVar3[2] < (short)puVar3[1]);
    }
  }
  if (param_2 == 0) {
    if ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000000) == 0) {
      uVar10 = CONCAT31((int3)((uint)iVar5 >> 8),(char)((ushort)DAT_004e198d >> 8));
      uVar7 = DAT_004e198d;
      uVar9 = DAT_004e198c;
    }
    else {
      uVar10 = 0;
      uVar7 = 0;
      uVar9 = 0;
    }
    FUN_00410700(uVar9,uVar7,uVar10);
  }
  if (DAT_004d18f8 < DAT_0051d82c) {
    DAT_0051d82c = DAT_004d16ec;
  }
  return;
joined_r0x00441bd9:
  uVar7 = (undefined2)((uint)iVar5 >> 0x10);
  if (puVar2 == (undefined4 *)0x0) goto LAB_00441d76;
  iVar5 = puVar2[2];
  if (*(short *)(iVar5 + 0x40) == 6) {
    puVar1 = puVar3 + 0x42;
    *(ushort **)(puVar3 + 0x86) = puVar1;
    *(undefined4 *)(puVar3 + 0x60) = *(undefined4 *)(puVar2[2] + 0x48);
    iVar5 = *(int *)(puVar3 + 0x16);
    if ((*(int *)(iVar5 + 0x58) == 0) || ((*(byte *)(*(int *)(iVar5 + 0x58) + 8) & 8) == 0)) {
      iVar5 = FUN_00441470(iVar5,puVar1,8,puVar8);
      *(int *)(puVar3 + 0x18) = iVar5;
      if (iVar5 != 0) {
        puVar3[10] = puVar3[10] + *(short *)(iVar5 + 0x22) * 4;
        puVar3[0xb] = puVar3[10];
        puVar3[0xc] = puVar3[10];
      }
    }
    else {
      uVar4 = (*(short *)(iVar5 + 0xd0) - puVar3[0x50]) * 4 + 0x1000;
      puVar3[3] = uVar4;
      if ((short)uVar4 < 0x800) {
        puVar3[3] = 0x800;
      }
      *(int *)puVar1 = (int)(short)puVar3[3];
      puVar3[0x44] = 0x1000;
      puVar3[0x45] = 0;
      *(int *)(puVar3 + 0x46) = (int)(short)puVar3[3];
      puVar3[0x4a] = *(ushort *)(*(int *)(iVar5 + 0x58) + 0xc4);
      puVar3[0x4b] = *(ushort *)(*(int *)(iVar5 + 0x58) + 0xc6);
      puVar3[0x4c] = *(ushort *)(*(int *)(iVar5 + 0x58) + 200);
      puVar3[10] = puVar3[10] + *(short *)(*(int *)(iVar5 + 0x58) + 0x22) * 4;
      puVar3[0xb] = puVar3[10];
      puVar3[0xc] = puVar3[10];
    }
    FUN_00432ef0(puVar3 + 100);
    FUN_0040f5f0(*(undefined4 *)(puVar3 + 0x5e),puVar3 + 0x32,puVar3 + 0x22,puVar8);
    puVar3[4] = 0;
    *(int *)(puVar3 + 0x30) = *(int *)(puVar3 + 0x30) + 9;
    *(int *)(puVar3 + 0x2e) = *(int *)(puVar3 + 0x2e) + 5;
    FUN_00407ff0(puVar3 + 0x22);
    *(int *)(puVar3 + 0x30) = *(int *)(puVar3 + 0x30) + -9;
    *(int *)(puVar3 + 0x2e) = *(int *)(puVar3 + 0x2e) + -5;
    _DAT_008079bc = 2;
    DAT_0051d82c = FUN_004137f0(puVar3 + 0x56,DAT_0051d82c,puVar3 + 4,puVar8);
    _DAT_008079bc = 1;
    uVar7 = extraout_var_00;
    goto LAB_00441d76;
  }
  puVar2 = (undefined4 *)*puVar2;
  goto joined_r0x00441bd9;
}


