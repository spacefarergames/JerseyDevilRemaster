/*
 * Function: FUN_0041b4e0
 * Entry:    0041b4e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041b4e0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  DAT_0055fdb0 = *(int *)(&DAT_0055fd90 + (uint)(byte)PTR_DAT_0045f810[0xc] * 4);
  iVar3 = DAT_0055ffc0;
  do {
    DAT_0055eb58 = (&DAT_0055ed80)[iVar3] * 3 + DAT_0055ed74;
    puVar4 = &DAT_00561900 + iVar3 * 0x10;
    DAT_0055fd88 = iVar3;
    do {
      iVar3 = puVar4[2];
      iVar1 = puVar4[3] - iVar3;
      if (iVar1 != 0 && iVar3 <= (int)puVar4[3]) {
        DAT_0055fda8 = puVar4[10];
        DAT_0055fd8c = puVar4[0xc];
        DAT_0055eb4c = puVar4[0xb];
        DAT_0055eb40 = puVar4[0xd];
        DAT_0055fdac = puVar4[0xf];
        DAT_0055fda4 = puVar4[0xe];
        puVar6 = (undefined1 *)(DAT_0055eb58 + iVar3 * 3);
        DAT_0055ed60 = iVar1;
        do {
          iVar1 = DAT_0055fdb0;
          uVar2 = DAT_0055fda4 >> 0x10;
          DAT_0055fda4 = DAT_0055fda4 + DAT_0055fdac;
          *puVar6 = *(undefined1 *)(DAT_0055fdb0 + (*(uint *)(puVar6 + -1) & 0xff00) + uVar2);
          uVar5 = DAT_0055fda8 >> 0x10;
          uVar2 = CONCAT31((int3)((uint)*(undefined4 *)(puVar6 + 1) >> 8),
                           *(undefined1 *)
                            (iVar1 + (*(uint *)(puVar6 + -1) >> 8 & 0xff00) + (DAT_0055fd8c >> 0x10)
                            )) & 0xffff;
          DAT_0055fd8c = DAT_0055fd8c + DAT_0055eb40;
          puVar6[1] = (char)uVar2;
          iVar3 = DAT_0055ed60;
          DAT_0055fda8 = DAT_0055fda8 + DAT_0055eb4c;
          DAT_0055ed60 = DAT_0055ed60 + -1;
          bVar7 = DAT_0055ed60 != 0;
          puVar6[2] = *(undefined1 *)(iVar1 + uVar2 + uVar5);
          puVar6 = puVar6 + 3;
        } while (bVar7 && 0 < iVar3);
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (0 < (int)puVar4);
    iVar3 = DAT_0055fd88 + 1;
  } while (iVar3 < DAT_005618ec);
  return;
}


