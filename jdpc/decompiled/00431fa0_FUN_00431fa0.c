/*
 * Function: FUN_00431fa0
 * Entry:    00431fa0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00431fa0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined4 *puVar8;
  
  iVar4 = param_1;
  uVar6 = FUN_00431e40(param_1,1,(int)DAT_004cd960);
  FUN_004205c0(0x2b,uVar6);
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  param_1 = 0;
  puVar3 = puVar1;
joined_r0x00431fdc:
  do {
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar4 + 0x60) = 0;
      return;
    }
    puVar2 = (undefined4 *)*puVar3;
    if (((*(byte *)(puVar3 + 2) & 4) != 0) && (param_1 < 10)) {
      param_1 = param_1 + 1;
      puVar8 = (undefined4 *)FUN_00440710(DAT_004cd998,0x1a8,DAT_004cdfc0 * 0x1a8);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
        *puVar8 = DAT_004d18fc;
        DAT_004d18fc = puVar8;
        puVar8[0x2a] = puVar8 + 0x2d;
        puVar8[0x2b] = 0;
        puVar8[0x18] = puVar3;
        *puVar3 = 0;
        *(undefined1 *)((int)puVar8 + 0x26) = 3;
        puVar8[2] = 0x80000;
        puVar8[5] = 0;
        *(undefined2 *)(puVar8 + 8) = *(undefined2 *)(iVar4 + 0x20);
        puVar8[0x2d] = (puVar1[0x1b] + 0x3ff) * *(int *)(iVar4 + 0xb4) >> 0xc;
        puVar8[0x2e] = (puVar1[0x1c] + 0x3ff) * *(int *)(iVar4 + 0xb8) >> 0xc;
        puVar8[0x2f] = (puVar1[0x1d] + 0x3ff) * *(int *)(iVar4 + 0xbc) >> 0xc;
        *(undefined2 *)(puVar8 + 0x31) = 0;
        uVar7 = FUN_00444870();
        *(undefined2 *)(puVar8 + 0x32) = 0;
        *(ushort *)((int)puVar8 + 0xc6) = uVar7 & 0xfff;
        puVar8[0x33] = *(undefined4 *)(iVar4 + 0xcc);
        puVar8[0x34] = (int)*(short *)(iVar4 + 0x3a) + *(int *)(iVar4 + 0xd0);
        puVar8[0x35] = *(undefined4 *)(iVar4 + 0xd4);
        bVar5 = FUN_00444870();
        *(ushort *)(puVar8 + 0xc) = (ushort)(bVar5 & 0x30 | 0xf);
        bVar5 = FUN_00444870();
        *(ushort *)((int)puVar8 + 0x32) = (ushort)(bVar5 & 0x7f | 0x80);
        bVar5 = FUN_00444870();
        *(undefined2 *)((int)puVar8 + 0x186) = 0;
        *(ushort *)(puVar8 + 0x61) = (ushort)(bVar5 & 0x30 | 0xf);
        puVar3[0x21] = 0;
        puVar3[0x22] = 0;
        puVar3[0x23] = 0;
        FUN_00432ef0(puVar3 + 7);
        puVar3[0x19] = puVar8 + 0x19;
        puVar3 = puVar2;
        goto joined_r0x00431fdc;
      }
    }
    puVar3[1] = 1;
    *puVar3 = 0;
    puVar3 = puVar2;
  } while( true );
}


