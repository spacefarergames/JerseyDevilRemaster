/*
 * Function: FUN_0041e8b0
 * Entry:    0041e8b0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0041e8b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int *local_c;
  
  if (DAT_0055ffc0 <= DAT_005618ec) {
    local_c = &DAT_0055ed80 + DAT_0055ffc0;
    puVar6 = &DAT_00561900 + DAT_0055ffc0 * 0x10;
    iVar4 = DAT_0055ffc0;
    do {
      DAT_0055fd80 = DAT_0055fdb4 + *local_c;
      for (puVar1 = puVar6; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        DAT_0055ed60 = (puVar1[3] - puVar1[2]) + 1;
        if (0 < (int)DAT_0055ed60) {
          uVar2 = puVar1[7] * 0x10000;
          DAT_005618e8 = puVar1[9] * 0x10000;
          _DAT_0055e1c4 =
               ((int)puVar1[7] >> 0x10) + (((int)puVar1[9] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f));
          _DAT_0055e1c0 = _DAT_0055e1c4 + DAT_00571908;
          uVar7 = puVar1[8] * 0x10000;
          uVar3 = puVar1[6] << 0x10;
          puVar9 = (undefined1 *)
                   (DAT_0055e1c8 + ((int)puVar1[6] >> 0x10) +
                   (((int)puVar1[8] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f)));
          iVar5 = (DAT_0055ed60 ^ 0xffffffff) + 1;
          bVar11 = CARRY4(uVar7,DAT_005618e8);
          iVar8 = uVar7 + DAT_005618e8;
          iVar10 = (DAT_0055fd80 + puVar1[2]) - iVar5;
          DAT_0055eb48 = uVar2;
          do {
            bVar12 = CARRY4(uVar3,uVar2);
            uVar3 = uVar3 + uVar2;
            uVar7 = CONCAT31((int3)((uint)iVar8 >> 8),*puVar9);
            puVar9 = puVar9 + (uint)bVar12 + *(int *)(&DAT_0055e1c4 + (uint)bVar11 * -4);
            bVar11 = CARRY4(uVar7,DAT_005618e8);
            iVar8 = uVar7 + DAT_005618e8;
            if ((char)iVar8 != '\0') {
              *(char *)(iVar10 + iVar5) = (char)iVar8;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0);
        }
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 0x10;
      local_c = local_c + 1;
    } while (iVar4 <= DAT_005618ec);
  }
  return;
}


