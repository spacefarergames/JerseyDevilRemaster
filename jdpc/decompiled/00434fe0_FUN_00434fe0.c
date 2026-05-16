/*
 * Function: FUN_00434fe0
 * Entry:    00434fe0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00434fe0(int param_1,short *param_2,uint param_3,uint param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  
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
    uVar4 = *(uint *)(param_2 + 0xe);
    if ((uVar4 & 0x10) != 0) {
      return 0x200;
    }
    if ((uVar4 & 0x100) != 0) goto LAB_00435176;
  }
  *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) & 0xffffcfff;
  psVar3 = param_2;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar2 = FUN_00440840();
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(int *)(param_1 + 0xa8) = param_1 + 0xb4;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    FUN_00432e90(param_1);
    psVar3 = *(short **)(param_1 + 0x5c);
    while ((psVar3 != (short *)0x0 && (*(short *)(*(int *)(psVar3 + 4) + 0x40) != 0x7c))) {
      psVar3 = *(short **)psVar3;
    }
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(*(int *)(psVar3 + 4) + 0x48);
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 8) = 0x20;
  }
  if ((param_4 & 0xb) != 0) {
    if ((param_4 & 8) == 0) {
      psVar3 = *(short **)(param_1 + 0x5c);
      if (psVar3 == (short *)0x0) {
LAB_004350ef:
        param_2[0xe] = 0x100;
        param_2[0xf] = 0;
        return 0x400;
      }
      do {
        if (*(ushort *)(*(int *)(psVar3 + 4) + 0x40) == param_3) break;
        psVar3 = *(short **)psVar3;
      } while (psVar3 != (short *)0x0);
      if (psVar3 == (short *)0x0) goto LAB_004350ef;
    }
    bVar1 = *(byte *)(*(int *)(psVar3 + 4) + 0x44);
    iVar2 = *(int *)(*(int *)(param_2 + 0x16) + 0x10);
    *(uint *)(param_2 + 0xc) = param_3;
    iVar2 = iVar2 + (uint)bVar1 * 0x10;
    *(int *)(param_2 + 0x18) = iVar2;
    *(undefined1 *)(param_2 + 2) = 0;
    *(uint *)(param_2 + 0xe) = param_4 | 0x1200;
    *(int *)(param_2 + 0x1a) = iVar2;
    *param_2 = *(short *)(*(int *)(psVar3 + 4) + 0x42);
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)(*(int *)(psVar3 + 4) + 0x45);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    param_2[1] = 0;
    *(char *)(param_2 + 4) = *(char *)(*(int *)(psVar3 + 4) + 0x45) + -1;
  }
  if ((param_2[1] == *param_2) && ((char)param_2[4] == '\0')) {
    uVar4 = *(uint *)(param_2 + 0xe);
    if ((uVar4 & 2) != 0) {
      uVar4 = uVar4 & 0xfffffdff | 0x100;
      *(uint *)(param_2 + 0xe) = uVar4;
LAB_00435176:
      return (-(uint)((uVar4 & 0x800) != 0) & 0x100) + 0x100;
    }
    if ((uVar4 & 1) != 0) {
      *(uint *)(param_2 + 0xe) = uVar4 | 0x80;
      *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
    }
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_2 + 0x18);
    *(char *)(param_2 + 4) = *(char *)((int)param_2 + 5) + -1;
    param_2[1] = 0;
    *(uint *)(param_2 + 0xe) = *(uint *)(param_2 + 0xe) | 0x1000;
  }
  FUN_004346a0(param_1,param_2,param_5);
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


