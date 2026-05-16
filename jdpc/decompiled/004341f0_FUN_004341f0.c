/*
 * Function: FUN_004341f0
 * Entry:    004341f0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004341f0(ushort param_1,short param_2,short param_3,undefined4 *param_4,int param_5,
                 short param_6,byte param_7)

{
  short sVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  
  uVar4 = 0;
  if (param_1 != 0) {
    do {
      if (param_4 == (undefined4 *)0x0) {
        return;
      }
      param_4 = (undefined4 *)*param_4;
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *(ushort *)(param_4 + 2) = *(ushort *)(param_4 + 2) & 0x7fff;
    sVar1 = *(short *)(param_5 + 0xc);
    sVar3 = *(short *)(param_5 + 0xe);
    *(undefined2 *)((int)param_4 + 0x1a) = *(undefined2 *)(param_5 + 6);
    *(undefined2 *)((int)param_4 + 0x12) = *(undefined2 *)(param_5 + 10);
    cVar5 = *(char *)(param_5 + 8);
    *(char *)(param_4 + 4) = cVar5;
    *(char *)(param_4 + 8) = cVar5;
    cVar2 = *(char *)(param_5 + 9);
    cVar5 = (char)sVar1 + -1 + cVar5;
    *(char *)((int)param_4 + 0x11) = cVar2;
    *(char *)(param_4 + 6) = cVar5;
    *(char *)(param_4 + 10) = cVar5;
    *(char *)((int)param_4 + 0x19) = cVar2;
    cVar2 = (char)sVar3 + -1 + cVar2;
    *(char *)((int)param_4 + 0x21) = cVar2;
    *(char *)((int)param_4 + 0x29) = cVar2;
    if ((param_7 & 1) == 0) {
      if ((param_7 & 2) != 0) {
        param_3 = param_3 + param_6;
      }
    }
    else {
      param_3 = param_3 - param_6;
    }
    if ((param_7 & 4) == 0) {
      if ((param_7 & 8) != 0) {
        param_2 = param_2 - param_6;
      }
    }
    else {
      param_2 = param_2 + param_6;
    }
    *(short *)(param_4 + 7) = param_2;
    *(short *)(param_4 + 3) = param_2;
    param_2 = param_2 + sVar1;
    *(short *)(param_4 + 9) = param_2;
    *(short *)(param_4 + 5) = param_2;
    sVar3 = sVar3 + param_3;
    *(short *)((int)param_4 + 0x16) = param_3;
    *(short *)((int)param_4 + 0xe) = param_3;
    *(short *)((int)param_4 + 0x26) = sVar3;
    *(short *)((int)param_4 + 0x1e) = sVar3;
    if ((((param_1 == 8) || (param_1 == 9)) || (param_1 == 10)) && (((byte)DAT_004e1a02 & 1) != 0))
    {
      param_4[0xb] = 0;
      return;
    }
    if ((((param_1 == 0x15) || (param_1 == 0x16)) || (param_1 == 0x17)) &&
       ((*(byte *)(DAT_0053ea20 + 0x100b5) & 1) != 0)) {
      param_4[0xb] = 0;
      return;
    }
    if ((param_1 == 0x14) && ((*(byte *)(DAT_0053ea20 + 0x100b7) & 1) != 0)) {
      param_4[0xb] = 0;
      return;
    }
    param_4[0xb] = param_4[0xb] | *(byte *)(param_5 + 2) & 8;
  }
  return;
}


