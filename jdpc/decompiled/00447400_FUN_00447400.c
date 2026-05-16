/*
 * Function: FUN_00447400
 * Entry:    00447400
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00447400(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = -1;
  iVar5 = 0;
  iVar6 = 0;
  piVar3 = &DAT_00a14d20;
  do {
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_00443ea0(0x100);
      if (puVar2 != (undefined4 *)0x0) {
        DAT_00a14e20 = DAT_00a14e20 + 0x20;
        (&DAT_00a14d20)[iVar5] = puVar2;
        if (puVar2 < puVar2 + 0x40) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2 = puVar2 + 2;
          } while (puVar2 < (undefined4 *)((&DAT_00a14d20)[iVar5] + 0x100));
        }
        iVar4 = iVar5 << 5;
      }
      return iVar4;
    }
    puVar1 = puVar2 + 0x40;
    for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        *puVar2 = 0xffffffff;
        iVar4 = ((int)puVar2 - *piVar3 >> 3) + iVar6;
        break;
      }
    }
    if (iVar4 != -1) {
      return iVar4;
    }
    piVar3 = piVar3 + 1;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x20;
    if (0xa14e1f < (int)piVar3) {
      return -1;
    }
  } while( true );
}


