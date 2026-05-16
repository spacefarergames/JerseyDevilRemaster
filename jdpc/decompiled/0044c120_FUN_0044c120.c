/*
 * Function: FUN_0044c120
 * Entry:    0044c120
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044c120(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  _cpinfo local_14;
  
  CodePage = FUN_0044c310(param_1);
  if (CodePage == DAT_004a65c4) {
    return 0;
  }
  if (CodePage == 0) {
    FUN_0044c3c0();
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_004a5280;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_004a64c0;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x4a5290);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_004a5278)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_004a64c0 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      DAT_004a65c4 = CodePage;
      DAT_004a65c8 = FUN_0044c360(CodePage);
      _DAT_004a65d0 = *(undefined4 *)(iVar10 + 0x4a5284);
      _DAT_004a65d4 = *(undefined4 *)(iVar10 + 0x4a5288);
      _DAT_004a65d8 = *(undefined4 *)(iVar10 + 0x4a528c);
      return 0;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_004a5370);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 != 1) {
    if (DAT_004a65dc == 0) {
      return 0xffffffff;
    }
    FUN_0044c3c0();
    return 0;
  }
  puVar14 = &DAT_004a64c0;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)puVar14 = 0;
  if (local_14.MaxCharSize < 2) {
    DAT_004a65c4 = 0;
    DAT_004a65c8 = 0;
  }
  else {
    if (local_14.LeadByte[0] != '\0') {
      pBVar11 = local_14.LeadByte + 1;
      do {
        bVar3 = *pBVar11;
        if (bVar3 == 0) break;
        for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
          *(byte *)((int)&DAT_004a64c0 + uVar7 + 1) = *(byte *)((int)&DAT_004a64c0 + uVar7 + 1) | 4;
        }
        pBVar1 = pBVar11 + 1;
        pBVar11 = pBVar11 + 2;
      } while (*pBVar1 != 0);
    }
    uVar7 = 1;
    do {
      *(byte *)((int)&DAT_004a64c0 + uVar7 + 1) = *(byte *)((int)&DAT_004a64c0 + uVar7 + 1) | 8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xff);
    DAT_004a65c4 = CodePage;
    DAT_004a65c8 = FUN_0044c360(CodePage);
  }
  _DAT_004a65d0 = 0;
  _DAT_004a65d4 = 0;
  _DAT_004a65d8 = 0;
  return 0;
}


