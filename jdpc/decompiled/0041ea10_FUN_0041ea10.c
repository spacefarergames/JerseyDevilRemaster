/*
 * Function: FUN_0041ea10
 * Entry:    0041ea10
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0041ea10(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int *local_c;
  
  if (DAT_0055ffc0 < DAT_005618ec) {
    local_c = &DAT_0055ed80 + DAT_0055ffc0;
    puVar6 = &DAT_00561900 + DAT_0055ffc0 * 0x10;
    iVar4 = DAT_0055ffc0;
    do {
      DAT_0055fd80 = DAT_0055fdb4 + *local_c;
      for (puVar2 = puVar6; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
        DAT_0055ed60 = puVar2[3] - puVar2[2];
        if (0 < (int)DAT_0055ed60) {
          DAT_0055eb48 = puVar2[7] << 0x10;
          DAT_005618e8 = puVar2[9] * 0x10000;
          _DAT_0055e1c4 =
               ((int)puVar2[7] >> 0x10) + (((int)puVar2[9] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f));
          _DAT_0055e1c0 = _DAT_0055e1c4 + DAT_00571908;
          uVar7 = puVar2[8] * 0x10000;
          uVar3 = puVar2[6] << 0x10;
          puVar8 = (undefined1 *)
                   (DAT_0055e1c8 + ((int)puVar2[6] >> 0x10) +
                   (((int)puVar2[8] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f)));
          iVar5 = (DAT_0055ed60 ^ 0xffffffff) + 1;
          bVar10 = CARRY4(uVar7,DAT_005618e8);
          uVar7 = uVar7 + DAT_005618e8;
          iVar9 = (DAT_0055fd80 + puVar2[2]) - iVar5;
          do {
            bVar11 = CARRY4(uVar3,DAT_0055eb48);
            uVar3 = uVar3 + DAT_0055eb48;
            uVar1 = *puVar8;
            puVar8 = puVar8 + (uint)bVar11 + *(int *)(&DAT_0055e1c4 + (uint)bVar10 * -4);
            bVar10 = CARRY4(uVar7,DAT_005618e8);
            uVar7 = uVar7 + DAT_005618e8;
            *(undefined1 *)(iVar9 + iVar5) =
                 *(undefined1 *)
                  (DAT_00642504 + (uint)CONCAT11(uVar1,*(undefined1 *)(iVar9 + iVar5)));
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0);
        }
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 0x10;
      local_c = local_c + 1;
    } while (iVar4 < DAT_005618ec);
  }
  return;
}


