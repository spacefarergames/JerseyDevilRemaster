/*
 * Function: FUN_00449970
 * Entry:    00449970
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00449970(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  DAT_004a62b8 = 0;
  DAT_004a5018 = 0xffffffff;
  DAT_004a5008 = 0xffffffff;
  pbVar3 = (byte *)FUN_0044ded0(&DAT_00451800);
  if (pbVar3 == (byte *)0x0) {
    DVar4 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_004a62c0);
    if (DVar4 != 0xffffffff) {
      DAT_004a62b8 = 1;
      DAT_004a4f70 = DAT_004a62c0 * 0x3c;
      if (DAT_004a6306 != 0) {
        DAT_004a4f70 = DAT_004a4f70 + DAT_004a6314 * 0x3c;
      }
      if ((DAT_004a635a == 0) || (DAT_004a6368 == 0)) {
        DAT_004a4f74 = 0;
        DAT_004a4f78 = 0;
      }
      else {
        DAT_004a4f74 = 1;
        DAT_004a4f78 = (DAT_004a6368 - DAT_004a6314) * 0x3c;
      }
      FUN_0044dca0(PTR_DAT_004a5000,&DAT_004a62c4,0x40);
      FUN_0044dca0(PTR_DAT_004a5004,&DAT_004a6318,0x40);
      PTR_DAT_004a5004[0x3f] = 0;
      PTR_DAT_004a5000[0x3f] = 0;
      return;
    }
  }
  else if (*pbVar3 != 0) {
    pbVar8 = pbVar3;
    pbVar9 = DAT_004a636c;
    if (DAT_004a636c != (byte *)0x0) {
      do {
        bVar1 = *pbVar8;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00449ab3:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00449ab8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00449ab3;
        pbVar8 = pbVar8 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00449ab8:
      if (iVar5 == 0) {
        return;
      }
    }
    FUN_00443fe0(DAT_004a636c);
    uVar6 = 0xffffffff;
    pbVar8 = pbVar3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
    DAT_004a636c = (byte *)FUN_00443ea0(~uVar6);
    if (DAT_004a636c != (byte *)0x0) {
      uVar6 = 0xffffffff;
      pbVar8 = pbVar3;
      do {
        pbVar9 = pbVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar9 = pbVar8 + 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar9;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      pbVar8 = pbVar9 + -uVar6;
      pbVar9 = DAT_004a636c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar9 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      }
      _strncpy(PTR_DAT_004a5000,(char *)pbVar3,3);
      pbVar8 = pbVar3 + 3;
      PTR_DAT_004a5000[3] = 0;
      bVar1 = *pbVar8;
      if (bVar1 == 0x2d) {
        pbVar8 = pbVar3 + 4;
      }
      iVar5 = FUN_004448a0(pbVar8);
      DAT_004a4f70 = iVar5 * 0xe10;
      for (; (bVar2 = *pbVar8, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
          pbVar8 = pbVar8 + 1) {
      }
      if (*pbVar8 == 0x3a) {
        pbVar8 = pbVar8 + 1;
        iVar5 = FUN_004448a0(pbVar8);
        DAT_004a4f70 = DAT_004a4f70 + iVar5 * 0x3c;
        bVar2 = *pbVar8;
        while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
          pbVar3 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar3;
        }
        if (*pbVar8 == 0x3a) {
          pbVar8 = pbVar8 + 1;
          iVar5 = FUN_004448a0(pbVar8);
          DAT_004a4f70 = DAT_004a4f70 + iVar5;
          bVar2 = *pbVar8;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            pbVar3 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar3;
          }
        }
      }
      if (bVar1 == 0x2d) {
        DAT_004a4f70 = -DAT_004a4f70;
      }
      DAT_004a4f74 = (int)(char)*pbVar8;
      if (DAT_004a4f74 != 0) {
        _strncpy(PTR_DAT_004a5004,(char *)pbVar8,3);
        PTR_DAT_004a5004[3] = 0;
        return;
      }
      *PTR_DAT_004a5004 = 0;
    }
  }
  return;
}


