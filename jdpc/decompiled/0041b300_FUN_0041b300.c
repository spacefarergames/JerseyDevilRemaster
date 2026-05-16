/*
 * Function: FUN_0041b300
 * Entry:    0041b300
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041b300(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = DAT_0055ffc0;
  do {
    DAT_0055eb58 = (&DAT_0055ed80)[iVar4] * 3 + DAT_0055ed74;
    puVar6 = &DAT_00561900 + iVar4 * 0x10;
    DAT_0055fd88 = iVar4;
    do {
      iVar4 = puVar6[2];
      iVar3 = (puVar6[3] + 1) - iVar4;
      if (iVar3 != 0 && iVar4 <= puVar6[3] + 1) {
        DAT_0055fda8 = puVar6[10];
        DAT_0055eb4c = puVar6[0xb];
        DAT_0055fdac = puVar6[0xf];
        puVar8 = (undefined1 *)(DAT_0055eb58 + iVar4 * 3);
        iVar4 = puVar6[0xd];
        iVar5 = puVar6[0xc];
        iVar9 = puVar6[0xe];
        DAT_0055ed60 = iVar3;
        do {
          uVar2 = (uint)DAT_0055fda8 >> 0x10;
          DAT_0055fda8 = DAT_0055eb4c + DAT_0055fda8;
          puVar8[2] = (char)uVar2;
          puVar8[1] = (char)((uint)iVar5 >> 0x10);
          iVar10 = iVar9 + DAT_0055fdac;
          *puVar8 = (char)((uint)iVar9 >> 0x10);
          puVar8 = puVar8 + 3;
          iVar7 = iVar3 + -1;
          bVar1 = 0 < iVar3;
          iVar5 = iVar5 + iVar4;
          iVar3 = iVar7;
          iVar9 = iVar10;
        } while (iVar7 != 0 && bVar1);
      }
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
    iVar4 = DAT_0055fd88 + 1;
  } while (iVar4 <= DAT_005618ec);
  return;
}


