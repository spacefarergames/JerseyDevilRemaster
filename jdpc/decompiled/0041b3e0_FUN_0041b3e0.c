/*
 * Function: FUN_0041b3e0
 * Entry:    0041b3e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041b3e0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  
  iVar8 = *(int *)(&DAT_0055fd90 + (uint)(byte)PTR_DAT_0045f810[0xc] * 4);
  DAT_0055ed70 = (DAT_0055e1cc & 0xff) + iVar8;
  DAT_0055ed6c = (DAT_0055e1cc >> 8 & 0xff) + iVar8;
  DAT_0055ed78 = (DAT_0055e1cc >> 0x10 & 0xff) + iVar8;
  iVar8 = DAT_0055ffc0;
  do {
    DAT_0055eb58 = (&DAT_0055ed80)[iVar8] * 3 + DAT_0055ed74;
    puVar6 = &DAT_00561900 + iVar8 * 0x10;
    DAT_0055fd88 = iVar8;
    do {
      iVar8 = puVar6[2];
      iVar5 = puVar6[3] - iVar8;
      if (iVar5 != 0 && iVar8 <= (int)puVar6[3]) {
        puVar7 = (undefined1 *)(DAT_0055eb58 + iVar8 * 3);
        do {
          iVar8 = DAT_0055ed78;
          uVar3 = *(uint *)(puVar7 + -1);
          uVar1 = *(undefined1 *)(DAT_0055ed6c + (uVar3 >> 8 & 0xff00));
          *puVar7 = *(undefined1 *)(DAT_0055ed70 + (uVar3 & 0xff00));
          uVar2 = *(undefined1 *)(iVar8 + (uVar3 >> 0x10 & 0xff00));
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          iVar8 = iVar5 + -1;
          bVar4 = 0 < iVar5;
          puVar7 = puVar7 + 3;
          iVar5 = iVar8;
        } while (iVar8 != 0 && bVar4);
      }
      puVar6 = (undefined4 *)*puVar6;
    } while (0 < (int)puVar6);
    iVar8 = DAT_0055fd88 + 1;
  } while (iVar8 < DAT_005618ec);
  return;
}


