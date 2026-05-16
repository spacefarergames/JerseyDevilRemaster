/*
 * Function: FUN_0041e640
 * Entry:    0041e640
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041e640(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  uVar1 = (undefined1)DAT_0055eb44;
  uVar2 = CONCAT11((undefined1)DAT_0055eb44,(undefined1)DAT_0055eb44);
  piVar5 = &DAT_0055ed80 + DAT_0055ffc0;
  puVar8 = &DAT_00561900 + DAT_0055ffc0 * 0x10;
  uVar3 = CONCAT11((undefined1)DAT_0055eb44,(undefined1)DAT_0055eb44);
  for (uVar9 = DAT_0055ffc0; uVar9 <= DAT_005618ec; uVar9 = uVar9 + 1) {
    iVar10 = DAT_0055fdb4 + *piVar5;
    puVar7 = puVar8;
    do {
      uVar6 = puVar7[2];
      if (uVar6 <= (uint)puVar7[3]) {
        uVar4 = (puVar7[3] - uVar6) + 1;
        puVar11 = (undefined4 *)(iVar10 + uVar6);
        uVar6 = uVar4;
        if (7 < uVar4) {
          uVar6 = uVar4 & 3;
          for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar11 = CONCAT22(uVar2,uVar3);
            puVar11 = puVar11 + 1;
          }
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar11 = uVar1;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      }
      puVar7 = (undefined4 *)*puVar7;
    } while (puVar7 != (undefined4 *)0x0);
    piVar5 = piVar5 + 1;
    puVar8 = puVar8 + 0x10;
  }
  return;
}


