/*
 * Function: FUN_004347a0
 * Entry:    004347a0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004347a0(int param_1,short *param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  int *piVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  ushort uVar9;
  undefined4 *puVar10;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((param_4 & 0x80000000) == 0) {
    if ((param_4 & 0x20) != 0) {
      param_2[0xe] = 0x100;
      param_2[0xf] = 0;
      return 0x20;
    }
    if (((param_4 & 4) == 0) || ((*(uint *)(param_2 + 0xe) & 0x10) == 0)) {
      if ((param_4 & 0x10) != 0) {
        *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) | 0x10;
        return 0x200;
      }
      if ((param_4 & 0x40) != 0) {
        param_2[0xe] = 0x100;
        param_2[0xf] = 0;
        return 0x100;
      }
    }
    else {
      *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) & 0xffffffef;
    }
  }
  else {
    uVar6 = *(uint *)(param_2 + 0xe);
    if ((uVar6 & 0x10) != 0) {
      return 0x200;
    }
    if ((uVar6 & 0x100) != 0) goto LAB_004349ff;
  }
  *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) & 0xffffcfff;
  puVar10 = param_5;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar5 = FUN_00440840();
    *(int *)(param_1 + 0x60) = iVar5;
    if (iVar5 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(int *)(param_1 + 0xa8) = param_1 + 0xb4;
    *(undefined4 *)(param_1 + 100) = 0;
    FUN_00432e90(param_1);
    puVar10 = *(undefined4 **)(param_1 + 0x5c);
    while ((puVar10 != (undefined4 *)0x0 && (*(short *)(puVar10[2] + 0x40) != 0x7c))) {
      puVar10 = (undefined4 *)*puVar10;
    }
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(puVar10[2] + 0x48);
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 8) = 1;
    FUN_00432ef0((undefined4 *)(param_1 + 100));
    FUN_00432ce0(param_1,param_5);
  }
  if ((param_4 & 0xb) != 0) {
    if ((param_4 & 8) == 0) {
      puVar10 = *(undefined4 **)(param_1 + 0x5c);
      if (puVar10 == (undefined4 *)0x0) {
LAB_004348da:
        param_2[0xe] = 0x100;
        param_2[0xf] = 0;
        return 0x400;
      }
      do {
        if (*(ushort *)(puVar10[2] + 0x40) == param_3) break;
        puVar10 = (undefined4 *)*puVar10;
      } while (puVar10 != (undefined4 *)0x0);
      if (puVar10 == (undefined4 *)0x0) goto LAB_004348da;
    }
    iVar5 = *(int *)(*(int *)(param_2 + 0x16) + 0x10) + (uint)*(byte *)(puVar10[2] + 0x44) * 0x10;
    uVar9 = *(ushort *)(iVar5 + 0xc);
    *(undefined2 *)(param_1 + 0x32) = 0;
    *(short *)(param_1 + 0x30) =
         (short)((int)-((uint)(uVar9 >> 1) * *(int *)(param_1 + 0xb4)) >> 0xc);
    *(short *)(param_1 + 0x34) =
         (short)((int)-((uint)(*(ushort *)(iVar5 + 0xc) >> 1) * *(int *)(param_1 + 0xbc)) >> 0xc);
    *(short *)(param_1 + 0x38) =
         (short)((int)((uint)(*(ushort *)(iVar5 + 0xc) >> 1) * *(int *)(param_1 + 0xb4)) >> 0xc);
    *(short *)(param_1 + 0x3a) =
         -(short)((int)((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(param_1 + 0xb8)) >> 0xc);
    *(short *)(param_1 + 0x3c) =
         (short)((int)((uint)(*(ushort *)(iVar5 + 0xc) >> 1) * *(int *)(param_1 + 0xbc)) >> 0xc);
    *(uint *)(param_2 + 0xc) = param_3;
    *(int *)(param_2 + 6) = puVar10[2] + 0x14;
    *(undefined1 *)((int)param_2 + 7) = *(undefined1 *)(puVar10[2] + 0x10);
    *(int *)(param_2 + 8) = puVar10[2] + 0x24;
    *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(puVar10[2] + 0x12);
    *(undefined1 *)(param_2 + 2) = 0;
    *(uint *)(param_2 + 0xe) = param_4 | 0x1200;
    *(int *)(param_2 + 0x18) = iVar5;
    *(int *)(param_2 + 0x1a) = iVar5;
    *param_2 = *(short *)(puVar10[2] + 0x42);
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)(puVar10[2] + 0x45);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    param_2[1] = 0;
    *(char *)(param_2 + 4) = *(char *)(puVar10[2] + 0x45) + -1;
  }
  uVar9 = 0;
  if ((param_2[1] == *param_2) && ((char)param_2[4] == '\0')) {
    uVar6 = *(uint *)(param_2 + 0xe);
    if ((uVar6 & 2) != 0) {
      uVar6 = uVar6 & 0xfffffdff | 0x100;
      *(uint *)(param_2 + 0xe) = uVar6;
LAB_004349ff:
      return (-(uint)((uVar6 & 0x800) != 0) & 0x100) + 0x100;
    }
    if ((uVar6 & 1) != 0) {
      *(uint *)(param_2 + 0xe) = uVar6 | 0x80;
      *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
    }
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_2 + 0x18);
    *(char *)(param_2 + 4) = *(char *)((int)param_2 + 5) + -1;
    param_2[1] = 0;
    *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) | 0x1000;
  }
  FUN_00434170(param_1,param_2,param_5);
  if (((char)param_2[4] == '\0') && (*(char *)((int)param_2 + 7) != '\0')) {
    do {
      if (param_2[1] == *(short *)((uint)uVar9 * 4 + 2 + *(int *)(param_2 + 6))) {
        uVar2 = FUN_00431e40(param_1,1,(int)DAT_004cd960);
        FUN_004205c0(*(undefined2 *)((uint)uVar9 * 4 + *(int *)(param_2 + 6)),uVar2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)((int)param_2 + 7));
  }
  sVar3 = 1;
  if (((*(char *)((int)param_2 + 9) != '\0') && ((char)param_2[4] == '\0')) &&
     (uVar9 = 0, *(char *)((int)param_2 + 9) != '\0')) {
    do {
      iVar5 = (uint)uVar9 * 0xe;
      if ((param_2[1] == *(short *)(iVar5 + 4 + *(int *)(param_2 + 8))) &&
         (*(int *)(param_1 + 0x50) != 0)) {
        sVar3 = FUN_00432f40(param_1,iVar5 + *(int *)(param_2 + 8) + 6);
        if (sVar3 != 0) {
          FUN_00433830(param_1,iVar5 + 6 + *(int *)(param_2 + 8));
          if (((*(byte *)(iVar5 + 2 + *(int *)(param_2 + 8)) & 0x40) != 0) &&
             (*(int *)(param_2 + 10) != 0)) {
            FUN_004400c0(*(int *)(param_2 + 10));
            param_2[10] = 0;
            param_2[0xb] = 0;
          }
          puVar7 = (undefined2 *)(*(int *)(param_2 + 8) + iVar5);
          if ((*(byte *)(puVar7 + 1) & 1) != 0) {
            local_8 = 0;
            local_14 = 0x1000;
            local_16 = 0x1000;
            local_18 = 0x1000;
            local_c = 0;
            local_10 = 0;
            iVar8 = FUN_004409a0(CONCAT22((short)((uint)puVar7 >> 0x10),*puVar7),&local_10,&local_18
                                );
            if (iVar8 != 0) {
              if (*(int *)(param_2 + 10) != 0) {
                FUN_004400c0(*(int *)(param_2 + 10));
                param_2[10] = 0;
                param_2[0xb] = 0;
              }
              *(undefined4 *)(iVar8 + 0xac) = *(undefined4 *)(param_1 + 0x50);
              *(int *)(param_2 + 10) = iVar8;
              *(undefined2 *)(iVar8 + 0x20) = *(undefined2 *)(param_1 + 0x20);
            }
          }
          puVar7 = (undefined2 *)(*(int *)(param_2 + 8) + iVar5);
          if (((*(byte *)(puVar7 + 1) & 2) != 0) &&
             (iVar8 = FUN_004409a0(CONCAT22((short)((uint)puVar7 >> 0x10),*puVar7),param_1 + 0x40,
                                   param_1 + 0xc4), iVar8 != 0)) {
            *(undefined2 *)(iVar8 + 0x20) = *(undefined2 *)(param_1 + 0x20);
          }
          if (((*(byte *)(iVar5 + 3 + *(int *)(param_2 + 8)) & 4) != 0) &&
             (iVar8 = *(int *)(*(int *)(param_1 + 0x50) + 0x44) + 0x10,
             iVar8 = FUN_004409a0(CONCAT22((short)((uint)iVar8 >> 0x10),
                                           *(undefined2 *)(iVar5 + *(int *)(param_2 + 8))),
                                  param_1 + 0x40,iVar8), iVar8 != 0)) {
            *(undefined2 *)(iVar8 + 0x20) = *(undefined2 *)(param_1 + 0x20);
            *(short *)(iVar8 + 0xc6) =
                 *(short *)(iVar8 + 0xc6) +
                 *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + 0x48) + 0x44) + 0x12);
            FUN_00432e90(iVar8);
          }
          if ((((*(byte *)(iVar5 + 2 + *(int *)(param_2 + 8)) & 4) != 0) &&
              ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000020) == 0)) &&
             (*(int *)(DAT_004d13c4 + 0x58) == 0)) {
            piVar1 = (int *)(param_1 + 0x40);
            sVar4 = FUN_0042f4b0(DAT_004d13c4,piVar1,param_5);
            if (sVar4 != 0) {
              if ((*(byte *)(iVar5 + 2 + *(int *)(param_2 + 8)) & 0x80) == 0) {
                *(int *)(DAT_004d13c4 + 0x154) = *(int *)(DAT_004d13c4 + 0xcc) - *piVar1;
                *(int *)(DAT_004d13c4 + 0x158) =
                     *(int *)(DAT_004d13c4 + 0xd0) - *(int *)(param_1 + 0x44);
                *(int *)(DAT_004d13c4 + 0x15c) =
                     *(int *)(DAT_004d13c4 + 0xd4) - *(int *)(param_1 + 0x48);
              }
              else {
                *(undefined4 *)(DAT_004d13c4 + 0x15c) = 0;
                *(undefined4 *)(DAT_004d13c4 + 0x158) = 0;
                *(undefined4 *)(DAT_004d13c4 + 0x154) = 0;
              }
              *(int *)(DAT_004d13c4 + 0xcc) = *piVar1;
              *(undefined4 *)(DAT_004d13c4 + 0xd0) = *(undefined4 *)(param_1 + 0x44);
              *(undefined4 *)(DAT_004d13c4 + 0xd4) = *(undefined4 *)(param_1 + 0x48);
              DAT_004e1a80 = *piVar1;
              DAT_004e1a84 = *(undefined4 *)(param_1 + 0x44);
              DAT_004e1a88 = *(undefined4 *)(param_1 + 0x48);
              *(undefined4 *)(DAT_004d13c4 + 0x13c) = *(undefined4 *)(DAT_004d13c4 + 0xb4);
              *(undefined4 *)(DAT_004d13c4 + 0x140) = *(undefined4 *)(DAT_004d13c4 + 0xb8);
              *(undefined4 *)(DAT_004d13c4 + 0x144) = *(undefined4 *)(DAT_004d13c4 + 0xbc);
              *(undefined2 *)(DAT_004d13c4 + 0x150) = 0;
              *(undefined2 *)(DAT_004d13c4 + 0x14e) = 0;
              *(undefined2 *)(DAT_004d13c4 + 0x14c) = 0;
              *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0x13c;
              *(undefined4 *)(DAT_004d13c4 + 0xac) = *(undefined4 *)(param_1 + 0x50);
              *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
              *(undefined2 *)(DAT_004d13c4 + 300) = *(undefined2 *)(iVar5 + *(int *)(param_2 + 8));
              *(undefined4 *)(DAT_004d13c4 + 0x14) = 0x20;
              *(int *)(param_1 + 0x54) = DAT_004d13c4;
              *(int *)(DAT_004d13c4 + 0x58) = param_1;
              FUN_00432ef0(DAT_004d13c4 + 100);
            }
          }
          if ((((*(byte *)(iVar5 + 2 + *(int *)(param_2 + 8)) & 8) != 0) &&
              (*(int *)(DAT_004d13c4 + 0x58) == param_1)) && (*(int *)(param_1 + 0x54) != 0)) {
            *(undefined2 *)(DAT_004d13c4 + 0xc4) = *(undefined2 *)(param_1 + 0xc4);
            *(undefined2 *)(DAT_004d13c4 + 200) = *(undefined2 *)(param_1 + 200);
            *(short *)(DAT_004d13c4 + 0xc6) = *(short *)(param_1 + 0xc6) + 0x800;
            *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0xb4;
            *(undefined4 *)(DAT_004d13c4 + 0xac) = 0;
            *(undefined4 *)(DAT_004d13c4 + 0x58) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
            *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
            *(undefined2 *)(DAT_004d13c4 + 300) = *(undefined2 *)(iVar5 + *(int *)(param_2 + 8));
          }
          if ((((*(byte *)(iVar5 + 3 + *(int *)(param_2 + 8)) & 1) != 0) &&
              ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000020) == 0)) &&
             ((*(int *)(DAT_004d13c4 + 0x58) == 0 &&
              (sVar4 = FUN_0042f4b0(DAT_004d13c4,param_1 + 0x40,param_5), sVar4 != 0)))) {
            *(short *)(DAT_004d13c4 + 0xc6) = *(short *)(param_1 + 0xc6) + 0x800;
            *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
            *(undefined2 *)(DAT_004d13c4 + 300) = *(undefined2 *)(iVar5 + *(int *)(param_2 + 8));
            *(undefined4 *)(DAT_004d13c4 + 0x14) = 0x20;
          }
          goto LAB_00434f4a;
        }
      }
      else {
LAB_00434f4a:
        if (sVar3 == 1) break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)((int)param_2 + 9));
  }
  if ((char)param_2[4] == '\0') {
    param_2[1] = param_2[1] + 1;
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_2 + 5);
  }
  *(char *)(param_2 + 4) = (char)param_2[4] + -1;
  if (param_2[1] == *param_2) {
    *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) | 0x2000;
  }
  return 0x200;
}


