/*
 * Function: FUN_0043e690
 * Entry:    0043e690
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e690(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  short *psVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar9 = param_1;
  piVar8 = DAT_0051d6e0;
  piVar10 = DAT_0051d6e0 + 2;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar14 = 0;
    do {
      FUN_004408b0(param_1,iVar14);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x1d);
    for (puVar3 = *(undefined4 **)(param_1 + 0x60); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      *(undefined2 *)(puVar3 + 2) = 0x10;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x5c);
    while ((puVar3 != (undefined4 *)0x0 && (*(short *)(puVar3[2] + 0x40) != 0x7c))) {
      puVar3 = (undefined4 *)*puVar3;
    }
    iVar13 = 0;
    psVar15 = &DAT_004a2302;
    iVar14 = *(int *)(puVar3[2] + 0x48);
    *(int *)(param_1 + 0x158) = iVar14;
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(iVar14 + 0x10);
    do {
      FUN_004341f0(iVar13,(int)psVar15[-1],(int)*psVar15,*(undefined4 *)(param_1 + 0x60),
                   psVar15[2] * 0x10 + *(int *)(param_1 + 0x15c),0,0);
      psVar15 = psVar15 + 8;
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x1d);
    DAT_004e1ab0 = 0xff;
    DAT_004e1a02 = 0;
    DAT_004e1a76 = 0;
    DAT_004e1a74 = 0;
    DAT_004e1aa2 = 0;
    DAT_004e1ab8 = 0xff;
    DAT_004e1a90 = -1;
    DAT_004e1ab3 = -1;
    DAT_004e1ab4 = 0xff;
    DAT_004e1aa4 = 0xff;
    DAT_004e1ab2 = '\0';
    DAT_004e1ab1 = 0xff;
    DAT_004e1a91 = 0xff;
    DAT_004e1a52 = 0xff;
    DAT_004e1ab9 = 0xff;
    if (*(char *)(DAT_0053ea20 + 0x10053) != '\0') {
      DAT_004e1ab2 = '\x01';
    }
  }
  uVar2 = *(ushort *)(DAT_0053ea20 + 0x10010);
  *(ushort *)(piVar8 + 1) = uVar2;
  if (((int)(short)DAT_004e1aa0 != (uint)uVar2) && (DAT_004e1aa0 = uVar2, (short)piVar8[1] != 0)) {
    *piVar8 = (int)&DAT_004a24a0;
    param_1 = 7;
    do {
      iVar14 = *piVar8;
      if (*(short *)(iVar14 + 4 + *(short *)(iVar14 + 2) * 2) == (short)piVar8[1]) {
        *(short *)(iVar14 + 2) = *(short *)(iVar14 + 2) + 1;
        puVar4 = (undefined2 *)*piVar8;
        if (puVar4[(short)puVar4[1] + 2] == 0) {
          switch(*puVar4) {
          case 0:
            *(undefined1 *)(DAT_0053ea20 + 0x10043) = 99;
            break;
          case 1:
            DAT_004e1ab9 = 0xff;
            *(undefined1 *)(DAT_0053ea20 + 0x10056) = 10;
            break;
          case 2:
            *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0x50;
            break;
          case 3:
            *(undefined1 *)(DAT_0053ea20 + 0x10053) = 1;
            *(undefined1 *)(DAT_0053ea20 + 0x10045) = 0;
            break;
          case 4:
            DAT_004e1ab6 = 1;
            FUN_004327d0(DAT_004e1a20,&DAT_004e1a10);
            break;
          case 5:
            DAT_004d2388 = 1;
            *(undefined4 *)(DAT_0053ea20 + 0x10004) = 0;
            break;
          case 6:
            DAT_004a6740 = 0x20;
          }
        }
      }
      else {
        *(undefined2 *)(iVar14 + 2) = 0;
      }
      param_1 = param_1 + -1;
      *piVar8 = *piVar8 + 0x18;
    } while (param_1 != 0);
  }
  if (((((*(byte *)(DAT_0053ea20 + 0x1000b) & 8) == 0) ||
       (*(char *)(DAT_0053ea20 + 0x1005a) != '\0')) || (DAT_004deba0 != 0)) ||
     ((*(uint *)(DAT_004d13c4 + 0x14) & 0x81000000) != 0)) {
    if (DAT_004deba0 == 2) {
      FUN_00434670(0x18,*(undefined4 *)(iVar9 + 0x60));
      iVar14 = *(int *)(iVar9 + 0x15c) + DAT_004a24a6 * 0x10;
      FUN_004341f0(0x1a,(int)DAT_004a24a0 - (uint)(*(ushort *)(iVar14 + 0xc) >> 1),
                   (int)DAT_004a24a2 - (uint)(*(ushort *)(iVar14 + 0xe) >> 1),
                   *(undefined4 *)(iVar9 + 0x60),iVar14,0,0);
    }
    else {
      DAT_004deba0 = 0;
      FUN_00434670(0x18,*(undefined4 *)(iVar9 + 0x60));
      FUN_00434670(0x1a,*(undefined4 *)(iVar9 + 0x60));
      FUN_00434670(0x19,*(undefined4 *)(iVar9 + 0x60));
    }
  }
  else {
    DAT_004deba0 = 1;
  }
  FUN_00434670(0x1b,*(undefined4 *)(iVar9 + 0x60));
  FUN_00434670(0x1c,*(undefined4 *)(iVar9 + 0x60));
  if (DAT_004a6742 != '\0') {
    if (DAT_004e1a76 == 0) {
      *(undefined2 *)(DAT_004d13c4 + 0x1e) = 0;
      DAT_004e1a76 = 1;
      FUN_00432240(DAT_004d13c4,0x28,piVar10);
    }
    else {
      if (0x1d < *(ushort *)(DAT_004d13c4 + 0x1e)) {
        DAT_004a6742 = DAT_004a6742 + -1;
        *(undefined2 *)(DAT_004d13c4 + 0x1e) = 0;
      }
      if (DAT_004a6742 == '\0') {
        FUN_00432240(DAT_004d13c4,0x10,piVar10);
        *(undefined2 *)(DAT_004d13c4 + 0x1e) = 0;
        DAT_004e1a76 = 0;
      }
      if (*(short *)(DAT_004d13c4 + 300) != 0x28) {
        DAT_004a6742 = '\0';
        *(undefined2 *)(DAT_004d13c4 + 0x1e) = 0;
        DAT_004e1a76 = 0;
      }
    }
  }
  DAT_004e1aa2 = (ushort)*(byte *)(DAT_0053ea20 + 0x10085);
  if (((*(byte *)(DAT_0053ea20 + 0x1000a) & 8) != 0) &&
     (bVar1 = *(byte *)(DAT_0053ea20 + 0x10084), (bVar1 & 0xc) == 0)) {
    if ((bVar1 & 1) == 0) {
      *(byte *)(DAT_0053ea20 + 0x10084) = bVar1 | 9;
      DAT_004e1aa2 = 0;
    }
    else {
      DAT_004e1aa2 = 0x36;
      *(byte *)(DAT_0053ea20 + 0x10084) = *(byte *)(DAT_0053ea20 + 0x10084) & 0xfe;
      *(byte *)(DAT_0053ea20 + 0x10084) = *(byte *)(DAT_0053ea20 + 0x10084) | 4;
    }
  }
  if ((*(byte *)(DAT_0053ea20 + 0x10084) & 8) == 0) {
    if ((*(byte *)(DAT_0053ea20 + 0x10084) & 4) != 0) {
      iVar14 = 0;
      psVar15 = &DAT_004a2306;
      do {
        FUN_00434510(iVar14,(int)psVar15[-3],(int)psVar15[-2],*(undefined4 *)(iVar9 + 0x60),
                     *psVar15 * 0x10 + *(int *)(iVar9 + 0x15c),(int)(short)DAT_004e1aa2,
                     (int)psVar15[3]);
        psVar15 = psVar15 + 8;
        iVar14 = iVar14 + 1;
      } while (iVar14 < 0x1d);
      DAT_004e1aa2 = DAT_004e1aa2 - 6;
      if ((short)DAT_004e1aa2 < 0) {
        DAT_004e1ab0 = 0xff;
        DAT_004e1ab8 = 0xff;
        DAT_004e1a90 = -1;
        DAT_004e1ab4 = 0xff;
        DAT_004e1aa4 = 0xff;
        DAT_004e1ab2 = '\0';
        DAT_004e1ab1 = 0xff;
        DAT_004e1a91 = 0xff;
        DAT_004e1a52 = 0xff;
        DAT_004e1ab9 = 0xff;
        *(byte *)(DAT_0053ea20 + 0x10084) = *(byte *)(DAT_0053ea20 + 0x10084) & 0xfb;
        DAT_004e1aa2 = 0;
      }
    }
  }
  else {
    iVar14 = 0;
    psVar15 = &DAT_004a2306;
    do {
      FUN_00434510(iVar14,(int)psVar15[-3],(int)psVar15[-2],*(undefined4 *)(iVar9 + 0x60),
                   *psVar15 * 0x10 + *(int *)(iVar9 + 0x15c),(int)(short)DAT_004e1aa2,
                   (int)psVar15[3]);
      psVar15 = psVar15 + 8;
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x1d);
    DAT_004e1aa2 = DAT_004e1aa2 + 6;
    if (0x36 < (short)DAT_004e1aa2) {
      *(byte *)(DAT_0053ea20 + 0x10084) = *(byte *)(DAT_0053ea20 + 0x10084) & 0xf7;
      DAT_004e1aa2 = 0x36;
    }
  }
  *(undefined1 *)(DAT_0053ea20 + 0x10085) = (undefined1)DAT_004e1aa2;
  if (*(byte *)(DAT_0053ea20 + 0x10040) != DAT_004e1ab8) {
    if (99 < *(byte *)(DAT_0053ea20 + 0x10040)) {
      *(char *)(DAT_0053ea20 + 0x10043) = *(char *)(DAT_0053ea20 + 0x10043) + '\x01';
      *(undefined1 *)(DAT_0053ea20 + 0x10040) = 0;
      FUN_004205c0(0x20,0x7f7f,1,(int)DAT_004cd960);
    }
    DAT_004e1ab8 = *(byte *)(DAT_0053ea20 + 0x10040);
    uVar11 = FUN_0043e5c0(*(undefined1 *)(DAT_0053ea20 + 0x10040));
    FUN_004341f0(0,(int)DAT_004a2300,(int)DAT_004a2302,*(undefined4 *)(iVar9 + 0x60),
                 DAT_004a2306 * 0x10 + *(int *)(iVar9 + 0x15c),(int)(short)DAT_004e1aa2,
                 (int)DAT_004a230c);
    FUN_004341f0(1,(int)DAT_004a2310,(int)DAT_004a2312,*(undefined4 *)(iVar9 + 0x60),
                 (((int)uVar11 >> 4 & 0xfU) + (int)DAT_004a2316) * 0x10 + *(int *)(iVar9 + 0x15c),
                 (int)(short)DAT_004e1aa2,(int)DAT_004a231c);
    FUN_004341f0(2,(int)DAT_004a2320,(int)DAT_004a2322,*(undefined4 *)(iVar9 + 0x60),
                 ((uVar11 & 0xf) + (int)DAT_004a2326) * 0x10 + *(int *)(iVar9 + 0x15c),
                 (int)(short)DAT_004e1aa2,(int)DAT_004a232c);
  }
  if ((*(byte *)(DAT_0053ea20 + 0x10043) != DAT_004e1ab4) || (DAT_004e1a02 != 0)) {
    if (99 < *(byte *)(DAT_0053ea20 + 0x10043)) {
      *(undefined1 *)(DAT_0053ea20 + 0x10043) = 99;
    }
    if (DAT_004e1a02 != 0) {
      if (DAT_004e1a02 == 0x1e) {
        *(char *)(DAT_0053ea20 + 0x10043) = *(char *)(DAT_0053ea20 + 0x10043) + -1;
      }
      DAT_004e1a02 = DAT_004e1a02 + -1;
    }
    DAT_004e1ab4 = *(byte *)(DAT_0053ea20 + 0x10043);
    uVar11 = FUN_0043e5c0(*(undefined1 *)(DAT_0053ea20 + 0x10043));
    FUN_004341f0(8,(int)DAT_004a2380,(int)DAT_004a2382,*(undefined4 *)(iVar9 + 0x60),
                 DAT_004a2386 * 0x10 + *(int *)(iVar9 + 0x15c),(int)(short)DAT_004e1aa2,
                 (int)DAT_004a238c);
    FUN_004341f0(9,(int)DAT_004a2390,(int)DAT_004a2392,*(undefined4 *)(iVar9 + 0x60),
                 (((int)uVar11 >> 4 & 0xfU) + (int)DAT_004a2396) * 0x10 + *(int *)(iVar9 + 0x15c),
                 (int)(short)DAT_004e1aa2,(int)DAT_004a239c);
    FUN_004341f0(10,(int)DAT_004a23a0,(int)DAT_004a23a2,*(undefined4 *)(iVar9 + 0x60),
                 ((uVar11 & 0xf) + (int)DAT_004a23a6) * 0x10 + *(int *)(iVar9 + 0x15c),
                 (int)(short)DAT_004e1aa2,(int)DAT_004a23ac);
  }
  if ((*(char *)(DAT_0053ea20 + 0x10045) != DAT_004e1a90) ||
     (*(char *)(DAT_0053ea20 + 0x10057) != DAT_004e1ab3)) {
    if ((DAT_004e1ab2 == '\0') &&
       ((*(char *)(DAT_0053ea20 + 0x10057) != '\0' && (*(char *)(DAT_0053ea20 + 0x10045) == '\0'))))
    {
      if (*(char *)(DAT_0053ea20 + 0x10053) == '\0') {
        *(undefined1 *)(DAT_0053ea20 + 0x10053) = 1;
        FUN_004205c0(0x36,0x7f7f,1,(int)DAT_004cd960);
        DAT_004e1ab2 = '\x01';
        goto LAB_0043ef54;
      }
LAB_0043ef5e:
      if (*(char *)(DAT_0053ea20 + 0x100b7) != '\0') {
        *(char *)(DAT_0053ea20 + 0x100b7) = *(char *)(DAT_0053ea20 + 0x100b7) + -1;
      }
      FUN_00434670(0xb,*(undefined4 *)(iVar9 + 0x60));
      FUN_00434670(0xc,*(undefined4 *)(iVar9 + 0x60));
      FUN_00434670(0xd,*(undefined4 *)(iVar9 + 0x60));
      iVar14 = DAT_004a2446 * 0x10 + *(int *)(iVar9 + 0x15c);
      uVar17 = *(undefined4 *)(iVar9 + 0x60);
      uVar16 = 0x14;
      sVar5 = DAT_004a2440;
      sVar6 = DAT_004a2442;
      sVar7 = DAT_004a244c;
    }
    else {
LAB_0043ef54:
      if (*(char *)(DAT_0053ea20 + 0x10053) != '\0') goto LAB_0043ef5e;
      FUN_00434670(0x14,*(undefined4 *)(iVar9 + 0x60));
      DAT_004e1a90 = *(char *)(DAT_0053ea20 + 0x10045);
      FUN_004341f0(0xb,(int)DAT_004a23b0,(int)DAT_004a23b2,*(undefined4 *)(iVar9 + 0x60),
                   DAT_004a23b6 * 0x10 + *(int *)(iVar9 + 0x15c),(int)(short)DAT_004e1aa2,
                   (int)DAT_004a23bc);
      uVar11 = FUN_0043e5c0(*(undefined1 *)(DAT_0053ea20 + 0x10045));
      FUN_004341f0(0xc,(int)DAT_004a23c0,(int)DAT_004a23c2,*(undefined4 *)(iVar9 + 0x60),
                   (((int)uVar11 >> 4 & 0xfU) + (int)DAT_004a23c6) * 0x10 + *(int *)(iVar9 + 0x15c),
                   (int)(short)DAT_004e1aa2,(int)DAT_004a23cc);
      uVar17 = *(undefined4 *)(iVar9 + 0x60);
      iVar14 = ((uVar11 & 0xf) + (int)DAT_004a23d6) * 0x10 + *(int *)(iVar9 + 0x15c);
      uVar16 = 0xd;
      sVar5 = DAT_004a23d0;
      sVar6 = DAT_004a23d2;
      sVar7 = DAT_004a23dc;
    }
    FUN_004341f0(uVar16,(int)sVar5,(int)sVar6,uVar17,iVar14,(int)(short)DAT_004e1aa2,(int)sVar7);
  }
  if ((*(byte *)(DAT_0053ea20 + 0x10056) == DAT_004e1ab9) &&
     (*(char *)(DAT_0053ea20 + 0x100b5) == '\0')) goto LAB_0043f268;
  if (10 < *(byte *)(DAT_0053ea20 + 0x10056)) {
    *(undefined1 *)(DAT_0053ea20 + 0x10056) = 10;
  }
  cVar12 = *(char *)(DAT_0053ea20 + 0x100b5);
  if ((cVar12 == '\0') || (*(int *)(DAT_0053ea20 + 0x10004) != 3)) {
    if (DAT_004e1ab9 != 0xff) goto LAB_0043f268;
  }
  else {
    if (cVar12 == '<') {
      cVar12 = *(char *)(DAT_0053ea20 + 0x10056) + -1;
LAB_0043f145:
      *(char *)(DAT_0053ea20 + 0x10056) = cVar12;
    }
    else if (cVar12 == '\x1e') {
      cVar12 = *(char *)(DAT_0053ea20 + 0x10056) + '\x01';
      goto LAB_0043f145;
    }
    *(char *)(DAT_0053ea20 + 0x100b5) = *(char *)(DAT_0053ea20 + 0x100b5) + -1;
  }
  DAT_004e1ab9 = *(byte *)(DAT_0053ea20 + 0x10056);
  uVar11 = FUN_0043e5c0(*(undefined1 *)(DAT_0053ea20 + 0x10056));
  FUN_004341f0(0x15,(int)DAT_004a2450,(int)DAT_004a2452,*(undefined4 *)(iVar9 + 0x60),
               DAT_004a2456 * 0x10 + *(int *)(iVar9 + 0x15c),(int)(short)DAT_004e1aa2,
               (int)DAT_004a245c);
  FUN_004341f0(0x16,(int)DAT_004a2460,(int)DAT_004a2462,*(undefined4 *)(iVar9 + 0x60),
               (((int)uVar11 >> 4 & 0xfU) + (int)DAT_004a2466) * 0x10 + *(int *)(iVar9 + 0x15c),
               (int)(short)DAT_004e1aa2,(int)DAT_004a246c);
  FUN_004341f0(0x17,(int)DAT_004a2470,(int)DAT_004a2472,*(undefined4 *)(iVar9 + 0x60),
               ((uVar11 & 0xf) + (int)DAT_004a2476) * 0x10 + *(int *)(iVar9 + 0x15c),
               (int)(short)DAT_004e1aa2,(int)DAT_004a247c);
LAB_0043f268:
  bVar1 = *(byte *)(DAT_0053ea20 + 0x10044);
  if ((bVar1 != DAT_004e1aa4) || ((_DAT_004e1a00 & 0x80) != 0)) {
    if ((~(byte)(*(uint *)(DAT_004d13c4 + 0x14) >> 0x18) & 1 & (char)bVar1 < '\x01') == 0) {
      if (0x50 < bVar1) {
        *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0x50;
      }
      DAT_004e1aa4 = *(byte *)(DAT_0053ea20 + 0x10044);
    }
    else if ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000000) == 0) {
      if ((DAT_004d13b6 == '\0') || (DAT_004d2388 == 0)) {
        _DAT_004e1a00 = 0;
        *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0;
        FUN_004327d0(DAT_004e1a20,&DAT_004e1a10);
      }
    }
    else {
      *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0;
    }
    FUN_00434670(4,*(undefined4 *)(iVar9 + 0x60));
    iVar14 = DAT_004a2336 * 0x10 + *(int *)(iVar9 + 0x15c);
    FUN_00434360(3,4,(int)DAT_004a2330,(int)DAT_004a2332,*(undefined4 *)(iVar9 + 0x60),iVar14,
                 iVar14 + 0x80,
                 ((uint)*(ushort *)(iVar14 + 0xc) * (uint)*(byte *)(DAT_0053ea20 + 0x10044)) / 0x50,
                 (int)(short)DAT_004e1aa2,(int)DAT_004a233c);
  }
  if (DAT_004a6743 != DAT_004e1a91) {
    DAT_004e1a91 = DAT_004a6743;
    if (DAT_004a6743 == 0) {
      FUN_00434670(5,*(undefined4 *)(iVar9 + 0x60));
      FUN_00434670(6,*(undefined4 *)(iVar9 + 0x60));
    }
    else {
      iVar14 = DAT_004a2356 * 0x10 + *(int *)(iVar9 + 0x15c);
      FUN_00434360(5,6,(int)DAT_004a2350,(int)DAT_004a2352,*(undefined4 *)(iVar9 + 0x60),iVar14,
                   (DAT_004a2356 + 8) * 0x10 + *(int *)(iVar9 + 0x15c),
                   ((uint)*(ushort *)(iVar14 + 0xc) * (uint)DAT_004a6743) / 0x96,
                   (int)(short)DAT_004e1aa2,(int)DAT_004a235c);
    }
  }
  if (DAT_004cffe0 != DAT_004e1a52) {
    DAT_004e1a52 = (byte)DAT_004cffe0;
    FUN_00434670(7,*(undefined4 *)(iVar9 + 0x60));
  }
  if ((DAT_004a6740 != DAT_004e1ab0) || (DAT_004e1a74 != 0)) {
    DAT_004e1ab0 = DAT_004a6740;
    if ((DAT_004a6740 & 0x1f) == 0x1f) {
      if (DAT_004e1a74 == 0) {
        DAT_004e1a74 = 1;
      }
      else if (DAT_004e1a74 < 0x20) {
        DAT_004e1a74 = DAT_004e1a74 + 1;
      }
      else {
        DAT_004e1a74 = 0;
        DAT_004a6740 = 0x20;
        FUN_004205c0(0x21,0x7f7f,1,(int)DAT_004cd960);
      }
    }
    if ((DAT_004a6740 & 1) == 0) {
      FUN_00434670(0xe,*(undefined4 *)(iVar9 + 0x60));
    }
    else {
      FUN_004341f0(0xe,(int)DAT_004a23e0 + (uint)DAT_004e1a74 * 2,(int)DAT_004a23e2,
                   *(undefined4 *)(iVar9 + 0x60),DAT_004a23e6 * 0x10 + *(int *)(iVar9 + 0x15c),
                   (int)(short)DAT_004e1aa2,(int)DAT_004a23ec);
    }
    if ((DAT_004a6740 & 2) == 0) {
      FUN_00434670(0xf,*(undefined4 *)(iVar9 + 0x60));
    }
    else {
      FUN_004341f0(0xf,(int)DAT_004a23f0 + (uint)DAT_004e1a74,(int)DAT_004a23f2,
                   *(undefined4 *)(iVar9 + 0x60),DAT_004a23f6 * 0x10 + *(int *)(iVar9 + 0x15c),
                   (int)(short)DAT_004e1aa2,(int)DAT_004a23fc);
    }
    if ((DAT_004a6740 & 4) == 0) {
      FUN_00434670(0x10,*(undefined4 *)(iVar9 + 0x60));
    }
    else {
      FUN_004341f0(0x10,(int)DAT_004a2400,(int)DAT_004a2402,*(undefined4 *)(iVar9 + 0x60),
                   DAT_004a2406 * 0x10 + *(int *)(iVar9 + 0x15c),(int)(short)DAT_004e1aa2,
                   (int)DAT_004a240c);
    }
    if ((DAT_004a6740 & 8) == 0) {
      FUN_00434670(0x11,*(undefined4 *)(iVar9 + 0x60));
    }
    else {
      FUN_004341f0(0x11,(int)DAT_004a2410 - (uint)DAT_004e1a74,(int)DAT_004a2412,
                   *(undefined4 *)(iVar9 + 0x60),DAT_004a2416 * 0x10 + *(int *)(iVar9 + 0x15c),
                   (int)(short)DAT_004e1aa2,(int)DAT_004a241c);
    }
    if ((DAT_004a6740 & 0x10) == 0) {
      FUN_00434670(0x12,*(undefined4 *)(iVar9 + 0x60));
    }
    else {
      FUN_004341f0(0x12,(int)DAT_004a2420 + (uint)DAT_004e1a74 * -2,(int)DAT_004a2422,
                   *(undefined4 *)(iVar9 + 0x60),DAT_004a2426 * 0x10 + *(int *)(iVar9 + 0x15c),
                   (int)(short)DAT_004e1aa2,(int)DAT_004a242c);
    }
    if ((DAT_004a6740 & 0x20) != 0) {
      FUN_004341f0(0x13,(int)DAT_004a2430,(int)DAT_004a2432,*(undefined4 *)(iVar9 + 0x60),
                   DAT_004a2436 * 0x10 + *(int *)(iVar9 + 0x15c),(int)(short)DAT_004e1aa2,
                   (int)DAT_004a243c);
      DAT_004a6740 = 0x20;
      return;
    }
    FUN_00434670(0x13,*(undefined4 *)(iVar9 + 0x60));
  }
  return;
}


