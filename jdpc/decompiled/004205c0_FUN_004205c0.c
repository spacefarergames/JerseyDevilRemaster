/*
 * Function: FUN_004205c0
 * Entry:    004205c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004205c0(short param_1,undefined4 param_2,ushort param_3,short param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  int iVar7;
  undefined4 uVar6;
  
  if (((((DAT_004d13c4 == 0) || ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000000) == 0)) ||
       (param_1 == 0x14)) || ((param_3 & 1) == 0)) &&
     (iVar7 = (int)param_4, *(short *)(&DAT_004deba8 + iVar7 * 2) != 0x20)) {
    sVar3 = 0;
    if (0 < DAT_004cdfca) {
      do {
        if ((uint)(ushort)(&DAT_004cd9c0)[sVar3 * 6] == (int)param_1) break;
        sVar3 = sVar3 + 1;
      } while (sVar3 < DAT_004cdfca);
    }
    if (sVar3 != DAT_004cdfca) {
      uVar1 = *(ushort *)(&DAT_004deba8 + iVar7 * 2);
      iVar4 = (iVar7 * 0x20 + (uint)uVar1) * 8;
      *(undefined2 **)(&DAT_004d13e0 + iVar4) = &DAT_004cd9c0 + sVar3 * 6;
      if ((param_3 & 1) == 0) {
        uVar5 = (ushort)param_2;
      }
      else {
        uVar6 = 0x7f7f;
        if (((&DAT_004cd9c8)[sVar3 * 6] & 1) == 0) {
          uVar6 = param_2;
        }
        uVar5 = (ushort)uVar6;
        if (((&DAT_004cd9c8)[sVar3 * 6] & 2) != 0) {
          uVar2 = (ushort)((uint)uVar6 >> 8);
          if ((uVar5 & 0xff) < (uVar2 & 0xff)) {
            uVar5 = (uVar2 & 0xff) * 0x101;
          }
          else {
            uVar5 = (uVar5 & 0xff) * 0x101;
          }
        }
      }
      *(ushort *)(&DAT_004d13e6 + iVar4) = uVar5;
      *(ushort *)(&DAT_004d13e4 + iVar4) = param_3;
      *(ushort *)(&DAT_004deba8 + iVar7 * 2) = uVar1 + 1;
    }
  }
  return;
}


