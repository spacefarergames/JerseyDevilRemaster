/*
 * Function: FUN_004486d0
 * Entry:    004486d0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_004486d0(uint param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (param_1 < 0x100) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    bVar2 = (byte)(param_1 >> 8);
    param_1 = CONCAT31(CONCAT21(param_1._2_2_,(char)param_1),bVar2);
    if (((*(byte *)((int)&DAT_004a64c0 + bVar2 + 1) & 4) != 0) &&
       (iVar3 = FUN_0044d740(DAT_004a65c8,0x200,&param_1,2,local_8,2,DAT_004a65c4), iVar3 != 0)) {
      return (local_8[0] & 0xff) * 0x100 + (local_8[0] >> 8 & 0xff);
    }
  }
  return uVar1;
}


