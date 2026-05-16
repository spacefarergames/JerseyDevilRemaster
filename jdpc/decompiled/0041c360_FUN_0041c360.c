/*
 * Function: FUN_0041c360
 * Entry:    0041c360
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041c360(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  bool bVar12;
  
  DAT_0055fdb0 = *(int *)(&DAT_0055fd90 + (uint)(byte)PTR_DAT_0045f810[0xc] * 4);
  iVar3 = DAT_0055ffc0;
  do {
    DAT_0055eb58 = (&DAT_0055ed80)[iVar3] * 3 + DAT_0055ed74;
    puVar8 = &DAT_00561900 + iVar3 * 0x10;
    DAT_0055fd88 = iVar3;
    do {
      iVar3 = puVar8[3] - puVar8[2];
      if (iVar3 != 0 && (int)puVar8[2] <= (int)puVar8[3]) {
        DAT_0055eb48 = puVar8[6] << 0x10;
        _DAT_0055ffc8 = puVar8[7] << 0x10;
        _DAT_005f1cc0 = puVar8[9] * 0x10000;
        DAT_0055fda8 = puVar8[10];
        DAT_0055eb4c = puVar8[0xb];
        DAT_0055eb40 = puVar8[0xd];
        _DAT_0055e1c4 =
             ((int)puVar8[7] >> 0x10) + (((int)puVar8[9] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f));
        DAT_0055fd8c = puVar8[0xc];
        _DAT_0055e1c0 = _DAT_0055e1c4 + DAT_00571908;
        DAT_0055fda4 = puVar8[0xe];
        DAT_0055fdac = puVar8[0xf];
        puVar9 = (uint *)(DAT_0055e1b8 +
                         (((int)puVar8[6] >> 0x10) +
                         (((int)puVar8[8] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f))) * 3);
        bVar11 = CARRY4(puVar8[8] * 0x10000,_DAT_005f1cc0);
        DAT_005618e8 = puVar8[8] * 0x10000 + _DAT_005f1cc0;
        puVar10 = (uint *)(DAT_0055eb58 + puVar8[2] * 3);
        DAT_0055ed60 = iVar3;
        do {
          iVar3 = DAT_0055eb40;
          uVar1 = (uint)bVar11;
          uVar7 = *puVar9 & 0xffffff;
          if (uVar7 == 0) {
            DAT_0055fda8 = DAT_0055fda8 + DAT_0055eb4c;
            DAT_0055fd8c = DAT_0055fd8c + DAT_0055eb40;
            DAT_0055fda4 = DAT_0055fda4 + DAT_0055eb4c;
          }
          else {
            uVar4 = DAT_0055fda4 >> 0xc;
            DAT_0055fda4 = DAT_0055fdac + DAT_0055fda4;
            *(undefined1 *)puVar10 =
                 *(undefined1 *)
                  (DAT_0055fdb0 + (*(uint *)((int)puVar10 + -1) & 0xff00) +
                  (*(uint *)(&DAT_0045f818 + (uVar4 & 0xfc0) + (uVar7 >> 2 & 0x3f)) & 0xff));
            iVar2 = DAT_0055fdb0;
            uVar6 = DAT_0055fd8c >> 0xc;
            uVar5 = DAT_0055eb4c + DAT_0055fda8;
            uVar4 = DAT_0055fda8 >> 0xc;
            DAT_0055fd8c = iVar3 + DAT_0055fd8c;
            *(undefined1 *)((int)puVar10 + 1) =
                 *(undefined1 *)
                  ((*(uint *)(&DAT_0045f818 + (uVar7 >> 10 & 0x3f) + (uVar6 & 0xfc0)) & 0xff) +
                  DAT_0055fdb0 + (*puVar10 & 0xff00));
            DAT_0055fda8 = uVar5;
            *(undefined1 *)((int)puVar10 + 2) =
                 *(undefined1 *)
                  (iVar2 + (*(uint *)((int)puVar10 + 2) & 0xff) * 0x100 +
                  (*(uint *)(&DAT_0045f818 + (uVar4 & 0xfc0) + (uVar7 >> 0x12)) & 0xff));
          }
          puVar10 = (uint *)((int)puVar10 + 3);
          bVar12 = CARRY4(DAT_0055eb48,_DAT_0055ffc8);
          DAT_0055eb48 = DAT_0055eb48 + _DAT_0055ffc8;
          bVar11 = CARRY4(DAT_005618e8,_DAT_005f1cc0);
          DAT_005618e8 = DAT_005618e8 + _DAT_005f1cc0;
          puVar9 = (uint *)((int)puVar9 + (*(int *)(&DAT_0055e1c4 + uVar1 * -4) + (uint)bVar12) * 3)
          ;
          iVar3 = DAT_0055ed60 + -1;
          bVar12 = 0 < DAT_0055ed60;
          DAT_0055ed60 = iVar3;
        } while (iVar3 != 0 && bVar12);
      }
      puVar8 = (undefined4 *)*puVar8;
    } while (0 < (int)puVar8);
    iVar3 = DAT_0055fd88 + 1;
  } while (iVar3 < DAT_005618ec);
  return;
}


