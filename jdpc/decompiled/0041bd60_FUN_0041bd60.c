/*
 * Function: FUN_0041bd60
 * Entry:    0041bd60
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bd60(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  bool bVar8;
  
  DAT_0055fdb0 = *(int *)(&DAT_0055fd90 + (uint)(byte)PTR_DAT_0045f810[0xc] * 4);
  iVar3 = DAT_0055ffc0;
  do {
    DAT_0055eb58 = (&DAT_0055ed80)[iVar3] * 3 + DAT_0055ed74;
    puVar4 = &DAT_00561900 + iVar3 * 0x10;
    DAT_0055fd88 = iVar3;
    do {
      iVar3 = puVar4[3] - puVar4[2];
      if (iVar3 != 0 && (int)puVar4[2] <= (int)puVar4[3]) {
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
        DAT_0055ed60 = iVar3;
        do {
          uVar2 = (uint)bVar7;
          uVar1 = *puVar5;
          *(undefined1 *)puVar6 =
               *(undefined1 *)
                (DAT_0055fdb0 + (*(uint *)((int)puVar6 + -1) & 0xff00) + (uVar1 & 0xff));
          iVar3 = DAT_0055fdb0 + (uVar1 >> 0x10 & 0xff);
          *(undefined1 *)((int)puVar6 + 1) =
               *(undefined1 *)(DAT_0055fdb0 + (uVar1 >> 8 & 0xff) + (*puVar6 & 0xff00));
          bVar8 = CARRY4(DAT_0055eb48,_DAT_0055ffc8);
          DAT_0055eb48 = DAT_0055eb48 + _DAT_0055ffc8;
          *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)(iVar3 + (*puVar6 >> 8 & 0xff00));
          puVar6 = (uint *)((int)puVar6 + 3);
          bVar7 = CARRY4(DAT_005618e8,_DAT_005f1cc0);
          DAT_005618e8 = DAT_005618e8 + _DAT_005f1cc0;
          puVar5 = (uint *)((int)puVar5 + (*(int *)(&DAT_0055e1c4 + uVar2 * -4) + (uint)bVar8) * 3);
          iVar3 = DAT_0055ed60 + -1;
          bVar8 = 0 < DAT_0055ed60;
          DAT_0055ed60 = iVar3;
        } while (iVar3 != 0 && bVar8);
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (0 < (int)puVar4);
    iVar3 = DAT_0055fd88 + 1;
  } while (iVar3 < DAT_005618ec);
  return;
}


