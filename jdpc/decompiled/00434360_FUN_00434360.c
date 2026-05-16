/*
 * Function: FUN_00434360
 * Entry:    00434360
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434360(ushort param_1,ushort param_2,int param_3,int param_4,undefined4 *param_5,
                 int param_6,int param_7,int param_8,int param_9,byte param_10)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  
  iVar12 = param_7;
  iVar11 = 0;
  bVar3 = false;
  param_7 = 0;
  do {
    uVar9 = 0;
    puVar5 = param_5;
    if (param_2 != 0) {
      do {
        if (puVar5 == (undefined4 *)0x0) {
          return;
        }
        puVar5 = (undefined4 *)*puVar5;
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_2);
    }
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    if (bVar3) {
      *(byte *)((int)puVar5 + 9) = *(byte *)((int)puVar5 + 9) | 0x80;
      return;
    }
    *(ushort *)(puVar5 + 2) = *(ushort *)(puVar5 + 2) & 0x7fff;
    uVar9 = (uint)(short)param_8;
    cVar1 = *(char *)(iVar12 + 9);
    cVar6 = *(char *)(iVar12 + 8) + (char)iVar11;
    sVar8 = *(short *)(iVar12 + 0xe) + -1;
    *(undefined2 *)((int)puVar5 + 0x1a) = *(undefined2 *)(iVar12 + 6);
    uVar2 = *(undefined2 *)(iVar12 + 10);
    *(char *)((int)puVar5 + 0x19) = cVar1;
    *(char *)((int)puVar5 + 0x11) = cVar1;
    cVar10 = (char)param_8 + -1 + cVar6;
    *(char *)(puVar5 + 8) = cVar6;
    *(char *)(puVar5 + 4) = cVar6;
    param_2._0_1_ = (char)sVar8;
    *(char *)(puVar5 + 10) = cVar10;
    *(char *)(puVar5 + 6) = cVar10;
    *(undefined2 *)((int)puVar5 + 0x12) = uVar2;
    *(char *)((int)puVar5 + 0x29) = (char)param_2 + cVar1;
    *(char *)((int)puVar5 + 0x21) = (char)param_2 + cVar1;
    if ((param_10 & 1) == 0) {
      iVar4 = param_9;
      if ((param_10 & 2) != 0) goto LAB_0043442d;
    }
    else {
      iVar4 = -param_9;
LAB_0043442d:
      param_4 = param_4 + iVar4;
    }
    if ((param_10 & 4) == 0) {
      if ((param_10 & 8) != 0) {
        param_3 = param_3 - param_9;
      }
    }
    else {
      param_3 = param_3 + param_9;
    }
    param_3 = param_3 + iVar11;
    sVar7 = (short)param_3;
    *(short *)(puVar5 + 7) = sVar7;
    *(short *)(puVar5 + 3) = sVar7;
    sVar7 = sVar7 + (short)param_8;
    sVar13 = (short)param_4;
    *(short *)((int)puVar5 + 0x16) = sVar13;
    *(short *)(puVar5 + 9) = sVar7;
    *(short *)(puVar5 + 5) = sVar7;
    *(short *)((int)puVar5 + 0xe) = sVar13;
    sVar8 = sVar8 + sVar13;
    *(short *)((int)puVar5 + 0x26) = sVar8;
    *(short *)((int)puVar5 + 0x1e) = sVar8;
    if ((_DAT_004e1a00 == 0x81) && (param_1 == 3)) {
      puVar5[0xb] = 0;
    }
    else {
      puVar5[0xb] = puVar5[0xb] | *(byte *)(iVar12 + 2) & 8;
    }
    if (uVar9 == *(ushort *)(iVar12 + 0xc)) {
      bVar3 = true;
    }
    iVar11 = iVar11 + uVar9;
    param_8 = *(ushort *)(iVar12 + 0xc) - uVar9;
    param_7 = param_7 + 1;
    iVar12 = param_6;
    param_2 = param_1;
    if (1 < param_7) {
      return;
    }
  } while( true );
}


