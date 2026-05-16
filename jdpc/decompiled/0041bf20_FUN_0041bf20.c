/*
 * Function: FUN_0041bf20
 * Entry:    0041bf20
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bf20(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  
  DAT_0055fdb0 = *(int *)(&DAT_0055fd90 + (uint)(byte)PTR_DAT_0045f810[0xc] * 4);
  iVar2 = DAT_0055ffc0;
  do {
    DAT_0055eb58 = (&DAT_0055ed80)[iVar2] * 3 + DAT_0055ed74;
    puVar4 = &DAT_00561900 + iVar2 * 0x10;
    DAT_0055fd88 = iVar2;
    do {
      iVar2 = puVar4[3] - puVar4[2];
      if (iVar2 != 0 && (int)puVar4[2] <= (int)puVar4[3]) {
        DAT_0055eb48 = puVar4[6] << 0x10;
        _DAT_0055ffc8 = puVar4[7] << 0x10;
        _DAT_005f1cc0 = puVar4[9] * 0x10000;
        _DAT_0055e1c4 =
             ((int)puVar4[7] >> 0x10) + (((int)puVar4[9] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f));
        _DAT_0055e1c0 = _DAT_0055e1c4 + DAT_00571908;
        puVar5 = (uint *)(DAT_0055e1b8 +
                         (((int)puVar4[6] >> 0x10) +
                         (((int)puVar4[8] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f))) * 3);
        bVar7 = CARRY4(puVar4[8] * 0x10000,_DAT_005f1cc0);
        DAT_005618e8 = puVar4[8] * 0x10000 + _DAT_005f1cc0;
        puVar6 = (uint *)(DAT_0055eb58 + puVar4[2] * 3);
        DAT_0055ed60 = iVar2;
        do {
          uVar1 = (uint)bVar7;
          uVar3 = *puVar5 & 0xffffff;
          if (uVar3 != 0) {
            *(undefined1 *)puVar6 =
                 *(undefined1 *)
                  (DAT_0055fdb0 + (*(uint *)((int)puVar6 + -1) & 0xff00) + (*puVar5 & 0xff));
            iVar2 = DAT_0055fdb0 + (uVar3 >> 0x10);
            *(undefined1 *)((int)puVar6 + 1) =
                 *(undefined1 *)(DAT_0055fdb0 + (uVar3 >> 8 & 0xff) + (*puVar6 & 0xff00));
            *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)(iVar2 + (*puVar6 >> 8 & 0xff00));
          }
          bVar8 = CARRY4(DAT_0055eb48,_DAT_0055ffc8);
          DAT_0055eb48 = DAT_0055eb48 + _DAT_0055ffc8;
          puVar6 = (uint *)((int)puVar6 + 3);
          bVar7 = CARRY4(DAT_005618e8,_DAT_005f1cc0);
          DAT_005618e8 = DAT_005618e8 + _DAT_005f1cc0;
          puVar5 = (uint *)((int)puVar5 + (*(int *)(&DAT_0055e1c4 + uVar1 * -4) + (uint)bVar8) * 3);
          iVar2 = DAT_0055ed60 + -1;
          bVar8 = 0 < DAT_0055ed60;
          DAT_0055ed60 = iVar2;
        } while (iVar2 != 0 && bVar8);
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (0 < (int)puVar4);
    iVar2 = DAT_0055fd88 + 1;
  } while (iVar2 < DAT_005618ec);
  return;
}


