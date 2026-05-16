/*
 * Function: FUN_0041b910
 * Entry:    0041b910
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b910(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  bool bVar11;
  
  iVar4 = DAT_0055ffc0;
  do {
    DAT_0055eb58 = (&DAT_0055ed80)[iVar4] * 3 + DAT_0055ed74;
    puVar7 = &DAT_00561900 + iVar4 * 0x10;
    DAT_0055fd88 = iVar4;
    do {
      iVar4 = (puVar7[3] + 1) - puVar7[2];
      if (iVar4 != 0 && (int)puVar7[2] <= puVar7[3] + 1) {
        DAT_0055eb48 = puVar7[6] << 0x10;
        _DAT_0055ffc8 = puVar7[7] << 0x10;
        _DAT_005f1cc0 = puVar7[9] * 0x10000;
        DAT_0055eb4c = puVar7[0xb];
        DAT_0055eb40 = puVar7[0xd];
        _DAT_0055e1c4 =
             ((int)puVar7[7] >> 0x10) + (((int)puVar7[9] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f));
        _DAT_0055e1c0 = _DAT_0055e1c4 + DAT_00571908;
        DAT_0055fda8 = puVar7[10] - DAT_0055eb4c;
        DAT_0055fd8c = puVar7[0xc] - DAT_0055eb40;
        DAT_0055fdac = puVar7[0xf];
        DAT_0055fda4 = puVar7[0xe] - DAT_0055fdac;
        puVar8 = (uint *)(DAT_0055e1b8 +
                         (((int)puVar7[6] >> 0x10) +
                         (((int)puVar7[8] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f))) * 3);
        bVar10 = CARRY4(puVar7[8] * 0x10000,_DAT_005f1cc0);
        DAT_005618e8 = puVar7[8] * 0x10000 + _DAT_005f1cc0;
        puVar9 = (undefined1 *)(DAT_0055eb58 + puVar7[2] * 3);
        DAT_0055ed60 = iVar4;
        do {
          uVar3 = (uint)bVar10;
          DAT_0055fda4 = DAT_0055fda4 + DAT_0055fdac;
          uVar1 = *(uint *)((int)puVar8 + 1);
          DAT_0055fd8c = DAT_0055fd8c + DAT_0055eb40;
          uVar6 = DAT_0055fd8c >> 0xc;
          *puVar9 = (char)*(undefined4 *)
                           (&DAT_0045f818 + ((*puVar8 & 0xff) >> 2) + (DAT_0055fda4 >> 0xc & 0xfc0))
          ;
          DAT_0055fda8 = DAT_0055fda8 + DAT_0055eb4c;
          uVar2 = *(uint *)((int)puVar8 + 2);
          uVar5 = DAT_0055fda8 >> 0xc;
          puVar9[1] = (char)*(undefined4 *)(&DAT_0045f818 + (uVar6 & 0xfc0) + ((uVar1 & 0xff) >> 2))
          ;
          puVar9[2] = (char)*(undefined4 *)(&DAT_0045f818 + (uVar5 & 0xfc0) + ((uVar2 & 0xff) >> 2))
          ;
          iVar4 = DAT_0055ed60;
          bVar11 = CARRY4(DAT_0055eb48,_DAT_0055ffc8);
          DAT_0055eb48 = DAT_0055eb48 + _DAT_0055ffc8;
          puVar9 = puVar9 + 3;
          bVar10 = CARRY4(DAT_005618e8,_DAT_005f1cc0);
          DAT_005618e8 = DAT_005618e8 + _DAT_005f1cc0;
          puVar8 = (uint *)((int)puVar8 + (*(int *)(&DAT_0055e1c4 + uVar3 * -4) + (uint)bVar11) * 3)
          ;
          DAT_0055ed60 = DAT_0055ed60 + -1;
        } while (DAT_0055ed60 != 0 && 0 < iVar4);
      }
      puVar7 = (undefined4 *)*puVar7;
    } while (0 < (int)puVar7);
    iVar4 = DAT_0055fd88 + 1;
  } while (iVar4 <= DAT_005618ec);
  return;
}


