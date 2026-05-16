/*
 * Function: FUN_00422d00
 * Entry:    00422d00
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00422d00(uint *param_1,byte *param_2,char *param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  if (DAT_004a60f0 == 0) {
    uVar3 = (uint)(byte)(&DAT_004e3860)[*param_2];
  }
  else {
    uVar3 = (uint)(ushort)(byte)PTR_DAT_0045f764
                                [(param_2[1] & 0xfff8 | (param_2[2] & 0xfff8) << 5) << 2 |
                                 (uint)(*param_2 >> 3)] << 2;
    iVar1 = (uint)(ushort)(byte)PTR_DAT_0045f764
                                [(param_2[1] & 0xfff8 | (param_2[2] & 0xfff8) << 5) << 2 |
                                 (uint)(*param_2 >> 3)] * 4;
    param_2[2] = (&DAT_005f1ce0)[iVar1];
    param_2[1] = (&DAT_005f1ce1)[iVar1];
    *param_2 = (&DAT_005f1ce2)[iVar1];
    if (((param_3[9] & 1U) != 0) && (param_2[3] == 0)) {
      uVar3 = 0;
    }
    if ((param_3[9] != 0) && (param_2[3] < 0x1f)) {
      uVar3 = 0;
    }
  }
  switch(param_3[8]) {
  case '\b':
    *(char *)param_1 = (char)(uVar3 >> 2);
    return;
  case '\x0f':
  case '\x10':
    uVar2 = (ushort)(*param_2 >> (8U - *param_3 & 0x1f)) << (param_3[1] & 0x1fU);
    *(ushort *)param_1 = uVar2;
    uVar2 = (ushort)(param_2[1] >> (8U - param_3[2] & 0x1f)) << (param_3[3] & 0x1fU) | uVar2;
    *(ushort *)param_1 = uVar2;
    uVar2 = (ushort)(param_2[2] >> (8U - param_3[4] & 0x1f)) << (param_3[5] & 0x1fU) | uVar2;
    *(ushort *)param_1 = uVar2;
    *(ushort *)param_1 =
         (ushort)(param_2[3] >> (8U - param_3[6] & 0x1f)) << (param_3[7] & 0x1fU) | uVar2;
    return;
  case '\x18':
    *(byte *)((uint)((byte)param_3[1] >> 3) + (int)param_1) = *param_2;
    *(byte *)((uint)((byte)param_3[3] >> 3) + (int)param_1) = param_2[1];
    *(byte *)((uint)((byte)param_3[5] >> 3) + (int)param_1) = param_2[2];
    return;
  case ' ':
    uVar3 = (uint)*param_2 << (param_3[1] & 0x1fU);
    *param_1 = uVar3;
    uVar3 = (uint)param_2[1] << (param_3[3] & 0x1fU) | uVar3;
    *param_1 = uVar3;
    uVar3 = (uint)param_2[2] << (param_3[5] & 0x1fU) | uVar3;
    *param_1 = uVar3;
    *param_1 = (uint)param_2[3] << (param_3[7] & 0x1fU) | uVar3;
  }
  return;
}


