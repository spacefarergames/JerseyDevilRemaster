/*
 * Function: FUN_0041e770
 * Entry:    0041e770
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0041e770(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  DAT_0055fd88 = DAT_0055ffc0;
  iVar5 = DAT_0055ffc0;
  if (DAT_0055ffc0 <= DAT_005618ec) {
    do {
      DAT_0055fd80 = (&DAT_0055ed80)[iVar5] + DAT_0055fdb4;
      DAT_0055fd88 = iVar5;
      for (puVar3 = &DAT_00561900 + iVar5 * 0x10; puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        DAT_0055ed60 = (puVar3[3] - puVar3[2]) + 1;
        if (0 < (int)DAT_0055ed60) {
          uVar1 = puVar3[7] * 0x10000;
          DAT_005618e8 = puVar3[9] * 0x10000;
          _DAT_0055e1c4 =
               ((int)puVar3[7] >> 0x10) + (((int)puVar3[9] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f));
          _DAT_0055e1c0 = _DAT_0055e1c4 + DAT_00571908;
          uVar6 = puVar3[8] * 0x10000;
          uVar2 = puVar3[6] << 0x10;
          puVar8 = (undefined1 *)
                   (DAT_0055e1c8 + ((int)puVar3[6] >> 0x10) +
                   (((int)puVar3[8] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f)));
          iVar4 = (DAT_0055ed60 ^ 0xffffffff) + 1;
          bVar10 = CARRY4(uVar6,DAT_005618e8);
          iVar7 = uVar6 + DAT_005618e8;
          iVar9 = (DAT_0055fd80 + puVar3[2]) - iVar4;
          DAT_0055eb48 = uVar1;
          do {
            bVar11 = CARRY4(uVar2,uVar1);
            uVar2 = uVar2 + uVar1;
            uVar6 = CONCAT31((int3)((uint)iVar7 >> 8),*puVar8);
            puVar8 = puVar8 + (uint)bVar11 + *(int *)(&DAT_0055e1c4 + (uint)bVar10 * -4);
            bVar10 = CARRY4(uVar6,DAT_005618e8);
            iVar7 = uVar6 + DAT_005618e8;
            *(char *)(iVar9 + iVar4) = (char)iVar7;
            iVar4 = iVar4 + 1;
            iVar5 = DAT_0055fd88;
          } while (iVar4 != 0);
        }
      }
      DAT_0055fd88 = iVar5 + 1;
      iVar5 = DAT_0055fd88;
    } while (DAT_0055fd88 <= DAT_005618ec);
  }
  return;
}


