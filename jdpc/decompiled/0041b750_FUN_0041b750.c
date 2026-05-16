/*
 * Function: FUN_0041b750
 * Entry:    0041b750
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0041b750(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  bool bVar12;
  undefined4 local_c;
  
  if (DAT_0055ffc0 <= DAT_005618ec) {
    local_c = &DAT_0055ed80 + DAT_0055ffc0;
    puVar5 = &DAT_00561900 + DAT_0055ffc0 * 0x10;
    puVar6 = puVar5;
    iVar4 = DAT_0055ffc0;
    do {
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        DAT_0055ed60 = (puVar5[3] - puVar5[2]) + 1;
        if (0 < DAT_0055ed60) {
          puVar10 = (undefined1 *)(DAT_0055ed74 + (*local_c + puVar5[2]) * 3);
          DAT_0055eb48 = puVar5[6] << 0x10;
          _DAT_0055ffc8 = puVar5[7] << 0x10;
          _DAT_005f1cc0 = puVar5[9] * 0x10000;
          _DAT_0055e1c4 =
               (((int)puVar5[9] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f)) + ((int)puVar5[7] >> 0x10);
          _DAT_0055e1c0 = DAT_00571908 + _DAT_0055e1c4;
          puVar9 = (uint *)(DAT_0055e1b8 +
                           ((((int)puVar5[8] >> 0x10) << ((byte)DAT_005f1cc4 & 0x1f)) +
                           ((int)puVar5[6] >> 0x10)) * 3);
          bVar11 = CARRY4(puVar5[8] * 0x10000,_DAT_005f1cc0);
          DAT_005618e8 = puVar5[8] * 0x10000 + _DAT_005f1cc0;
          iVar7 = DAT_0055ed60;
          do {
            uVar3 = (uint)bVar11;
            uVar1 = *(undefined4 *)((int)puVar9 + 1);
            if ((*puVar9 & 0xffffff) != 0) {
              uVar2 = *(undefined4 *)((int)puVar9 + 2);
              *puVar10 = (char)*puVar9;
              puVar10[1] = (char)uVar1;
              puVar10[2] = (char)uVar2;
            }
            puVar10 = puVar10 + 3;
            bVar12 = CARRY4(DAT_0055eb48,_DAT_0055ffc8);
            DAT_0055eb48 = DAT_0055eb48 + _DAT_0055ffc8;
            bVar11 = CARRY4(DAT_005618e8,_DAT_005f1cc0);
            DAT_005618e8 = DAT_005618e8 + _DAT_005f1cc0;
            puVar9 = (uint *)((int)puVar9 +
                             (*(int *)(&DAT_0055e1c4 + uVar3 * -4) + (uint)bVar12) * 3);
            iVar8 = iVar7 + -1;
            bVar12 = 0 < iVar7;
            iVar7 = iVar8;
          } while (iVar8 != 0 && bVar12);
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar6 + 0x10;
      local_c = local_c + 1;
      puVar6 = puVar5;
    } while (iVar4 <= DAT_005618ec);
  }
  return;
}


