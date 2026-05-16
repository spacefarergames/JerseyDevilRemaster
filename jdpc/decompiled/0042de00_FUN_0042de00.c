/*
 * Function: FUN_0042de00
 * Entry:    0042de00
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042de00(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar5 = DAT_0051d6e0;
  puVar7 = (undefined4 *)(DAT_0051d6e0 + 0x13c);
  puVar8 = (undefined2 *)
           FUN_004315d0(DAT_004d18f4,
                        CONCAT22((short)((uint)puVar7 >> 0x10),*(undefined2 *)(param_1 + 0x20)));
  *(undefined2 **)(iVar5 + 200) = puVar8;
  if (puVar8 == (undefined2 *)0x0) {
    DAT_004d13c0 = (ushort *)0x0;
  }
  else {
    *(undefined2 *)(DAT_004d13c4 + 0x20) = *puVar8;
    if ((DAT_004d13c0 != (ushort *)0x0) && (**(short **)(iVar5 + 200) != *DAT_004d13c0)) {
      DAT_004d2352 = DAT_004d2352 & 0xffbe;
    }
    DAT_004d13c0 = *(ushort **)(iVar5 + 200);
  }
  DAT_004d238c = (ushort *)FUN_004315d0(&DAT_004d22e0,0xffffffff);
  *(ushort **)(iVar5 + 200) = DAT_004d238c;
  if (DAT_004d238c == (ushort *)0x0) {
    DAT_004d238c = DAT_004d13c0;
  }
  if (DAT_004d238c != (ushort *)0x0) {
    if (*(int *)(DAT_004d2384 + 0x60) != 0) {
      *(undefined2 *)(DAT_004d2384 + 0x22) = *(undefined2 *)(*(int *)(DAT_004d2384 + 0x60) + 0xca);
    }
    *(ushort *)(DAT_004d2384 + 0x20) = *DAT_004d238c;
    *(undefined4 *)(DAT_004d2384 + 0x60) = *(undefined4 *)(&DAT_004d21a0 + (uint)*DAT_004d238c * 4);
  }
  iVar10 = DAT_004d2358;
  if (DAT_004e1bb8 != 0) {
    DAT_004e1bb8 = DAT_004e1bb8 + -1;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000000;
    DAT_004d2358 = 0;
    return;
  }
  iVar12 = param_1;
  if (((DAT_004d2358 != 0) && (*(int *)(DAT_004d2358 + 0x134) != 0)) &&
     ((*(uint *)(*(int *)(DAT_004d2358 + 0x134) + 0x10) & 0x200) != 0)) {
    *(uint *)(DAT_004d2358 + 0x14) = *(uint *)(DAT_004d2358 + 0x14) | 0x80000000;
    iVar12 = iVar10;
  }
  if ((DAT_004d2352 & 0x100) != 0) {
    *(uint *)(iVar12 + 0x14) = *(uint *)(iVar12 + 0x14) | 0x80000000;
    DAT_004d2352 = DAT_004d2352 & 0xfeff;
    DAT_004d2358 = 0;
    return;
  }
  DAT_004d22ec = DAT_004d236c;
  DAT_004d22f0 = DAT_004d2370;
  DAT_004d22f4 = DAT_004d2374;
  DAT_004d22e0 = DAT_004d235c;
  DAT_004d22e4 = DAT_004d2360;
  DAT_004d22e8 = DAT_004d2364;
  if ((*(uint *)(iVar12 + 0x14) & 0x1000000) != 0) {
    *(undefined2 *)(iVar5 + 0x38) = 0;
    *(undefined2 *)(iVar5 + 0x3a) = 0xfda8;
    *(undefined2 *)(iVar5 + 0x3c) = 0xfda8;
    _DAT_004d2302 = 0x800;
    *(undefined2 *)(iVar12 + 0xc6) = 0;
    FUN_004072e0(&DAT_004d2300,iVar5 + 0x48);
    FUN_004079c0(iVar5 + 0x48,(undefined2 *)(iVar5 + 0x38),iVar5 + 0x18);
    DAT_004d22ec = *(undefined4 *)(iVar12 + 0xcc);
    DAT_004d22f0 = *(undefined4 *)(iVar12 + 0xd0);
    DAT_004d22f4 = *(undefined4 *)(iVar12 + 0xd4);
    DAT_004d22e0 = *(int *)(iVar5 + 0x18) + *(int *)(iVar12 + 0xcc);
    DAT_004d22e4 = *(int *)(iVar5 + 0x1c) + *(int *)(iVar12 + 0xd0);
    DAT_004d22e8 = *(int *)(iVar5 + 0x20) + *(int *)(iVar12 + 0xd4);
    return;
  }
  if ((DAT_004d2352 & 0x41) != 0) {
    DAT_004d22ec = *(int *)(iVar12 + 0xcc);
    piVar3 = (int *)(iVar5 + 0x98);
    *(int *)(iVar5 + 0x88) = DAT_004d22ec;
    *(int *)(iVar5 + 0x8c) = ((*(int *)(iVar12 + 0xd0) - DAT_004d22f0) + -100 >> 3) + DAT_004d22f0;
    *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(iVar12 + 0xd4);
    DAT_004d22f0 = *(undefined4 *)(iVar5 + 0x8c);
    DAT_004d22f4 = *(int *)(iVar5 + 0x90);
    *(undefined4 *)(iVar5 + 0xc0) = 0x3c;
    if ((DAT_004d2352 & 1) == 0) {
      iVar10 = *(int *)(iVar12 + 0xcc) - DAT_004d2328;
      *(undefined4 *)(iVar5 + 0x9c) = 0;
      *piVar3 = iVar10;
      *(int *)(iVar5 + 0xa0) = *(int *)(iVar12 + 0xd4) - DAT_004d2330;
    }
    else {
      *piVar3 = DAT_004d2328 - *(int *)(iVar5 + 0x88);
      *(undefined4 *)(iVar5 + 0x9c) = 0;
      *(int *)(iVar5 + 0xa0) = DAT_004d2330 - *(int *)(iVar5 + 0x90);
    }
    piVar1 = (int *)(iVar5 + 0x68);
    FUN_00408150(piVar3,piVar1);
    uVar9 = FUN_00407230(*piVar1 + *(int *)(iVar5 + 0x6c) + *(int *)(iVar5 + 0x70));
    *(uint *)(iVar5 + 0xa8) = uVar9 | 1;
    uVar9 = (DAT_004d232c >> 4 & 0xffff000) / (uVar9 | 1);
    *(uint *)(iVar5 + 0xa8) = uVar9;
    *piVar3 = (int)(uVar9 * *piVar3) >> 0xc;
    iVar10 = *(int *)(iVar5 + 0xa0) * *(int *)(iVar5 + 0xa8) >> 0xc;
    *(int *)(iVar5 + 0xa0) = iVar10;
    iVar11 = DAT_004d22ec + *piVar3;
    *(int *)(iVar5 + 0x78) = iVar11;
    iVar10 = DAT_004d22f4 + iVar10;
    *(int *)(iVar5 + 0x80) = iVar10;
    *piVar3 = iVar11 - DAT_004d22e0;
    *(int *)(iVar5 + 0xa0) = iVar10 - DAT_004d22e8;
    FUN_00408150(piVar3,piVar1);
    uVar9 = FUN_00407230(*piVar1 + *(int *)(iVar5 + 0x6c) + *(int *)(iVar5 + 0x70));
    uVar9 = uVar9 | 1;
    *(uint *)(iVar5 + 0xa8) = uVar9;
    if (*(int *)(iVar5 + 0xc0) < (int)uVar9) {
      iVar10 = (*(int *)(iVar5 + 0xc0) << 0xc) / (int)uVar9;
      *(int *)(iVar5 + 0xa8) = iVar10;
      *piVar3 = iVar10 * *piVar3 >> 0xc;
      *(int *)(iVar5 + 0xa0) = *(int *)(iVar5 + 0xa0) * *(int *)(iVar5 + 0xa8) >> 0xc;
    }
    DAT_004d22e0 = DAT_004d22e0 + *piVar3;
    DAT_004d22e4 = *(int *)(iVar12 + 0xd0) - (DAT_004d232c & 0xffff);
    DAT_004d22e8 = DAT_004d22e8 + *(int *)(iVar5 + 0xa0);
    DAT_004d236c = DAT_004d22ec;
    DAT_004d2370 = DAT_004d22f0;
    DAT_004d2374 = DAT_004d22f4;
    DAT_004d235c = DAT_004d22e0;
    DAT_004d2360 = DAT_004d22e4;
    DAT_004d2364 = DAT_004d22e8;
    return;
  }
  if ((DAT_004d2352 & 0x10) == 0) {
    *(undefined4 *)(iVar5 + 0x118) = 0x1c2;
    *(undefined4 *)(iVar5 + 0x114) = 0xfffffd76;
  }
  else {
    *(undefined4 *)(iVar5 + 0x118) = 800;
    *(undefined4 *)(iVar5 + 0x114) = 0xfffffc18;
  }
  if (((DAT_004d2358 == 0) && ((*(byte *)(DAT_0053ea20 + 0x1000a) & 1) != 0)) && (DAT_004e1a40 == 0)
     ) {
    DAT_004e1bc2 = DAT_004e1bc2 + 0x1e;
  }
  else if (DAT_004d2358 == 0) {
    if (((*(byte *)(DAT_0053ea20 + 0x1000a) & 2) == 0) || (DAT_004e1a40 != 0)) {
      if (param_2 != 0) {
        piVar3 = (int *)(iVar5 + 0x98);
        *piVar3 = DAT_004d22ec - DAT_004d22e0;
        iVar11 = DAT_004d22f4;
        iVar10 = DAT_004d22e8;
        *(undefined4 *)(iVar5 + 0x9c) = 0;
        *(int *)(iVar5 + 0xa0) = iVar11 - iVar10;
        FUN_00408150(piVar3,(int *)(iVar5 + 0x68));
        iVar10 = FUN_00407230(*(int *)(iVar5 + 0x70) + *(int *)(iVar5 + 0x68));
        if (500 < iVar10) {
          iVar11 = DAT_004d22e0 - *(int *)(iVar12 + 0xcc);
          *piVar3 = iVar11;
          iVar10 = DAT_004d22e8 - *(int *)(iVar12 + 0xd4);
          *(int *)(iVar5 + 0xa0) = iVar10;
          sVar6 = FUN_00407270(iVar11,iVar10);
          DAT_004e1bc2 = sVar6 + 0x800;
        }
      }
    }
    else {
      DAT_004e1bc2 = DAT_004e1bc2 - 0x1e;
    }
  }
  else {
    *(int *)(iVar5 + 0x98) = *(int *)(DAT_004d2358 + 0xcc) - *(int *)(iVar12 + 0xcc);
    iVar10 = *(int *)(DAT_004d2358 + 0xd4) - *(int *)(iVar12 + 0xd4);
    *(int *)(iVar5 + 0xa0) = iVar10;
    iVar10 = FUN_00407270(*(undefined4 *)(iVar5 + 0x98),iVar10);
    uVar9 = (int)(short)DAT_004e1bc2 >> 0x1f;
    iVar10 = iVar10 - ((((int)(short)DAT_004e1bc2 ^ uVar9) - uVar9 & 0xfff ^ uVar9) - uVar9);
    *(int *)(iVar5 + 0xa8) = iVar10;
    if (0x800 < iVar10) {
      *(int *)(iVar5 + 0xa8) = iVar10 + -0x1000;
    }
    if (*(int *)(iVar5 + 0xa8) < -0x800) {
      *(int *)(iVar5 + 0xa8) = *(int *)(iVar5 + 0xa8) + 0x1000;
    }
    DAT_004e1bc2 = DAT_004e1bc2 + (short)(*(int *)(iVar5 + 0xa8) >> 3);
  }
  uVar4 = (short)DAT_004e1bc2 >> 0xf;
  psVar2 = (short *)(iVar5 + 0x40);
  DAT_004e1bc2 = ((DAT_004e1bc2 ^ uVar4) - uVar4 & 0xfff ^ uVar4) - uVar4;
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar12 + 0xcc);
  *(int *)(iVar5 + 0x2c) = *(int *)(iVar12 + 0xd0) + -100;
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar12 + 0xd4);
  *(undefined2 *)(iVar5 + 0x42) = 0;
  *psVar2 = 0;
  *(short *)(iVar5 + 0x44) = (short)(*(int *)(iVar5 + 0x114) >> 2);
  FUN_004072e0(&DAT_004e1bc0,iVar5 + 0x48);
  piVar3 = (int *)(iVar5 + 0x78);
  FUN_004079c0(iVar5 + 0x48,psVar2,piVar3);
  *(undefined2 *)(iVar5 + 0x44) = 0;
  *(undefined2 *)(iVar5 + 0x42) = 0;
  *psVar2 = 0;
  param_1 = 0;
  do {
    *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + *piVar3;
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + *(int *)(iVar5 + 0x80);
    iVar10 = FUN_0042eb80((int *)(iVar5 + 0x28),0x20000,puVar7);
    if (iVar10 != 0) {
      *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) - *piVar3;
      *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) - *(int *)(iVar5 + 0x80);
      break;
    }
    *psVar2 = *psVar2 + *(short *)piVar3;
    *(short *)(iVar5 + 0x44) = *(short *)(iVar5 + 0x44) + *(short *)(iVar5 + 0x80);
    param_1 = param_1 + 1;
  } while (param_1 < 4);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar12 + 0xcc);
  *(int *)(iVar5 + 0x1c) = *(int *)(iVar12 + 0xd0) + -100;
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar12 + 0xd4);
  *piVar3 = (int)*psVar2;
  *(undefined4 *)(iVar5 + 0x7c) = 0;
  *(int *)(iVar5 + 0x80) = (int)*(short *)(iVar5 + 0x44);
  *puVar7 = 0;
  *(undefined2 *)(iVar5 + 0xb6) = *(undefined2 *)(DAT_004d2384 + 0x20);
  FUN_0042f9c0((undefined4 *)(iVar5 + 0x18),piVar3,iVar5 + 0xac,puVar7);
  if ((-0x23 < *piVar3) && (*piVar3 < 0x23)) {
    *piVar3 = 0;
  }
  if ((-0x23 < *(int *)(iVar5 + 0x80)) && (*(int *)(iVar5 + 0x80) < 0x23)) {
    *(undefined4 *)(iVar5 + 0x80) = 0;
  }
  iVar10 = FUN_00407230(*piVar3 * *piVar3 + *(int *)(iVar5 + 0x80) * *(int *)(iVar5 + 0x80));
  iVar10 = FUN_00407230((*(int *)(iVar5 + 0x114) * *(int *)(iVar5 + 0x114) +
                        *(int *)(iVar5 + 0x118) * *(int *)(iVar5 + 0x118)) - iVar10 * iVar10);
  *(int *)(iVar5 + 0x7c) = -iVar10;
  if (-iVar10 < -0x226) {
    *(undefined4 *)(iVar5 + 0x7c) = 0xfffffdda;
  }
  piVar1 = (int *)(iVar5 + 0x98);
  *piVar1 = *piVar3 + *(int *)(iVar12 + 0xcc);
  *(int *)(iVar5 + 0x9c) = *(int *)(iVar5 + 0xb8) + 100;
  *(int *)(iVar5 + 0xa0) = *(int *)(iVar5 + 0x80) + *(int *)(iVar12 + 0xd4);
  *piVar1 = DAT_004d22e0;
  *(int *)(iVar5 + 0x9c) = DAT_004d22e4;
  *(int *)(iVar5 + 0xa0) = DAT_004d22e8;
  FUN_00431690(piVar1,iVar5 + 0xac,puVar7);
  iVar10 = *(int *)(iVar5 + 0xb8);
  *(int *)(iVar5 + 0x110) = (int)*(short *)(iVar5 + 0xb6);
  *piVar1 = DAT_004d22e0;
  *(int *)(iVar5 + 0x9c) = *(int *)(iVar5 + 0x7c) + *(int *)(iVar12 + 0xd0);
  *(int *)(iVar5 + 0xa0) = DAT_004d22e8;
  FUN_00431690(piVar1,iVar5 + 0xac,puVar7);
  if ((((*(byte *)(iVar5 + 0xae) & 8) == 0) &&
      ((int)*(short *)(iVar5 + 0xb6) != *(int *)(iVar5 + 0x110))) &&
     (*(short *)(iVar5 + 0xb6) != -1)) {
    *(int *)(iVar5 + 0x7c) = *(int *)(iVar12 + 0xd0) - DAT_004d22e4;
    DAT_004d22e4 = iVar10 + 1;
    *(undefined4 *)(iVar5 + 0x9c) = 0;
  }
  else {
    *(int *)(iVar5 + 0x9c) = (*(int *)(iVar5 + 0x7c) - DAT_004d22e4) + *(int *)(iVar12 + 0xd0);
  }
  *piVar1 = (*piVar3 - DAT_004d22e0) + *(int *)(iVar12 + 0xcc);
  *(int *)(iVar5 + 0xa0) = (*(int *)(iVar5 + 0x80) - DAT_004d22e8) + *(int *)(iVar12 + 0xd4);
  FUN_00408150(piVar1,iVar5 + 0x68);
  uVar9 = FUN_00407230(*(int *)(iVar5 + 0x6c) + *(int *)(iVar5 + 0x68) + *(int *)(iVar5 + 0x70));
  *(uint *)(iVar5 + 0xa8) = uVar9 | 1;
  if (DAT_004e1a40 == 0) {
    iVar10 = (uVar9 & 0xfffffffc) << 10;
  }
  else {
    iVar10 = (uVar9 & 0xfffffff8) << 9;
  }
  iVar10 = iVar10 / (int)(uVar9 | 1);
  *(int *)(iVar5 + 0xa8) = iVar10;
  iVar10 = *piVar1 * iVar10 >> 0xc;
  *piVar1 = iVar10;
  *(int *)(iVar5 + 0x9c) = *(int *)(iVar5 + 0x9c) * *(int *)(iVar5 + 0xa8) >> 0xc;
  *(int *)(iVar5 + 0xa0) = *(int *)(iVar5 + 0xa0) * *(int *)(iVar5 + 0xa8) >> 0xc;
  DAT_004d22e0 = DAT_004d22e0 + iVar10;
  DAT_004d22e4 = DAT_004d22e4 + *(int *)(iVar5 + 0x9c);
  DAT_004d22e8 = DAT_004d22e8 + *(int *)(iVar5 + 0xa0);
  *piVar1 = (*piVar3 - DAT_004d22e0) + *(int *)(iVar12 + 0xcc);
  iVar10 = *(int *)(iVar12 + 0xd4);
  iVar11 = *(int *)(iVar5 + 0x80) - DAT_004d22e8;
  *(undefined4 *)(iVar5 + 0x9c) = 0;
  *(int *)(iVar5 + 0xa0) = iVar11 + iVar10;
  FUN_00408150(piVar1,iVar5 + 0x68);
  iVar10 = FUN_00407230(*(int *)(iVar5 + 0x68) + *(int *)(iVar5 + 0x70));
  if (iVar10 < 0x15e) {
    *(undefined2 *)(iVar5 + 0x3a) = 0;
    *(undefined2 *)(iVar5 + 0x38) = 0;
    *(short *)(iVar5 + 0x3c) = 0x15e - (short)iVar10;
    FUN_004079c0(iVar5 + 0x48,(undefined2 *)(iVar5 + 0x38),piVar3);
  }
  else {
    *(undefined4 *)(iVar5 + 0x80) = 0;
    *(undefined4 *)(iVar5 + 0x7c) = 0;
    *piVar3 = 0;
  }
  *piVar1 = (DAT_004d22ec - *piVar3) - *(int *)(iVar12 + 0xcc);
  *(int *)(iVar5 + 0xa0) = (DAT_004d22f4 - *(int *)(iVar5 + 0x80)) - *(int *)(iVar12 + 0xd4);
  FUN_00408150(piVar1,(int *)(iVar5 + 0x68));
  uVar9 = FUN_00407230(*(int *)(iVar5 + 0x68) + *(int *)(iVar5 + 0x70));
  iVar10 = (int)((uVar9 & 0xfffffffc) << 10) / (int)(uVar9 | 1);
  *(int *)(iVar5 + 0xa8) = iVar10;
  iVar10 = iVar10 * *piVar1 >> 0xc;
  *piVar1 = iVar10;
  *(int *)(iVar5 + 0xa0) = *(int *)(iVar5 + 0xa0) * *(int *)(iVar5 + 0xa8) >> 0xc;
  DAT_004d22ec = DAT_004d22ec - iVar10;
  DAT_004d22f4 = DAT_004d22f4 - *(int *)(iVar5 + 0xa0);
  DAT_004d236c = DAT_004d22ec;
  DAT_004d22f0 = DAT_004d22f0 + ((*(int *)(iVar12 + 0xd0) - DAT_004d22f0) + -100 >> 2);
  DAT_004d2352 = DAT_004d2352 & 0xffef;
  DAT_004d2370 = DAT_004d22f0;
  DAT_004d2374 = DAT_004d22f4;
  DAT_004d2358 = 0;
  DAT_004d235c = DAT_004d22e0;
  DAT_004d2360 = DAT_004d22e4;
  DAT_004d2364 = DAT_004d22e8;
  return;
}


