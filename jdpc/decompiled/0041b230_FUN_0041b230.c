/*
 * Function: FUN_0041b230
 * Entry:    0041b230
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041b230(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 local_c;
  
  if (DAT_0055ffc0 <= DAT_005618ec) {
    local_c = &DAT_0055ed80 + DAT_0055ffc0;
    puVar8 = &DAT_00561900 + DAT_0055ffc0 * 0x10;
    uVar2 = (undefined1)DAT_0055e1cc;
    uVar3 = DAT_0055e1cc._1_1_;
    uVar4 = DAT_0055e1cc._2_2_;
    puVar9 = puVar8;
    iVar7 = DAT_0055ffc0;
    do {
      for (; DAT_0055e1cc._0_1_ = uVar2, DAT_0055e1cc._1_1_ = uVar3, DAT_0055e1cc._2_2_ = uVar4,
          puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)*puVar8) {
        iVar5 = (puVar8[3] - puVar8[2]) + 1;
        if (0 < iVar5) {
          puVar10 = (undefined1 *)(DAT_0055ed74 + (*local_c + puVar8[2]) * 3);
          puVar6 = puVar10 + 1;
          do {
            *puVar10 = uVar2;
            *puVar6 = uVar3;
            puVar10[2] = (char)uVar4;
            puVar10 = puVar10 + 3;
            puVar6 = puVar6 + 3;
            iVar11 = iVar5 + -1;
            bVar1 = 0 < iVar5;
            iVar5 = iVar11;
          } while (iVar11 != 0 && bVar1);
        }
        uVar2 = (undefined1)DAT_0055e1cc;
        uVar3 = DAT_0055e1cc._1_1_;
        uVar4 = DAT_0055e1cc._2_2_;
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar9 + 0x10;
      local_c = local_c + 1;
      puVar9 = puVar8;
    } while (iVar7 <= DAT_005618ec);
  }
  return;
}


