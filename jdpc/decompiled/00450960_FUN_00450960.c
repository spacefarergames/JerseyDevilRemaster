/*
 * Function: FUN_00450960
 * Entry:    00450960
 * Warning:  Decompiled pseudocode, not original source.
 */


byte * FUN_00450960(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (DAT_004a65c4 == 0) {
    pbVar1 = (byte *)FUN_00448810(param_1,param_2);
    return pbVar1;
  }
  uVar2 = (uint)(ushort)*param_1;
  if (*param_1 == 0) {
LAB_004509f7:
    return (byte *)((param_2 != uVar2) - 1 & (uint)param_1);
  }
  do {
    if ((*(byte *)((int)&DAT_004a64c0 + uVar2 + 1) & 4) == 0) {
      pbVar1 = param_1;
      if (param_2 == uVar2) goto LAB_004509f7;
    }
    else {
      pbVar1 = param_1 + 1;
      if (param_1[1] == 0) {
        return (byte *)0x0;
      }
      if (param_2 == (uVar2 << 8 | (uint)param_1[1])) {
        return param_1;
      }
    }
    uVar2 = (uint)(ushort)pbVar1[1];
    param_1 = pbVar1 + 1;
    if (pbVar1[1] == 0) {
      return (byte *)((param_2 != 0) - 1 & (uint)param_1);
    }
  } while( true );
}


