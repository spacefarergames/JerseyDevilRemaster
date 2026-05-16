/*
 * Function: FUN_00434510
 * Entry:    00434510
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00434510(ushort param_1,short param_2,short param_3,undefined4 *param_4,int param_5,
                 short param_6,byte param_7)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  
  if (((param_1 != 0x18) && (param_1 != 0x19)) && (param_1 != 0x1a)) {
    uVar3 = 0;
    if (param_1 != 0) {
      do {
        if (param_4 == (undefined4 *)0x0) {
          return;
        }
        param_4 = (undefined4 *)*param_4;
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_1);
    }
    if (param_4 != (undefined4 *)0x0) {
      uVar4 = *(ushort *)(param_5 + 0xc);
      uVar3 = (uint)uVar4;
      sVar2 = *(short *)(param_5 + 0xe);
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
      if (param_1 == 3) {
        sVar1 = (short)((*(byte *)(DAT_0053ea20 + 0x10044) * uVar3) / 0x50);
        param_2 = param_2 + sVar1;
        uVar4 = uVar4 - sVar1;
      }
      else if (param_1 == 4) {
        uVar4 = (ushort)((*(byte *)(DAT_0053ea20 + 0x10044) * uVar3) / 0x50);
      }
      else if (param_1 == 5) {
        sVar1 = (short)((DAT_004a6743 * uVar3) / 0x96);
        param_2 = param_2 + sVar1;
        uVar4 = uVar4 - sVar1;
      }
      else if (param_1 == 6) {
        uVar4 = (ushort)((DAT_004a6743 * uVar3) / 0x96);
      }
      *(short *)(param_4 + 7) = param_2;
      *(ushort *)(param_4 + 9) = uVar4 + param_2;
      *(ushort *)(param_4 + 5) = uVar4 + param_2;
      sVar2 = sVar2 + param_3;
      *(short *)(param_4 + 3) = param_2;
      *(short *)((int)param_4 + 0x16) = param_3;
      *(short *)((int)param_4 + 0xe) = param_3;
      *(short *)((int)param_4 + 0x26) = sVar2;
      *(short *)((int)param_4 + 0x1e) = sVar2;
    }
  }
  return;
}


