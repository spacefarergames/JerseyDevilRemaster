/*
 * Function: FUN_00432f40
 * Entry:    00432f40
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00432f40(int param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  
  switch(*param_2) {
  case 0:
    goto switchD_00432f54_caseD_0;
  case 1:
    cVar4 = (&DAT_004a6740)[(byte)param_2[2]];
    goto LAB_0043304f;
  case 2:
    cVar4 = *(char *)((byte)param_2[2] + 0x10040 + DAT_0053ea20);
LAB_0043304f:
    if (cVar4 == param_2[1]) {
      return 1;
    }
    break;
  case 3:
    if ((byte)param_2[1] < (byte)(&DAT_004a6740)[(byte)param_2[2]]) {
      return 1;
    }
    break;
  case 4:
    if ((byte)param_2[1] < *(byte *)((byte)param_2[2] + 0x10040 + DAT_0053ea20)) {
      return 1;
    }
    break;
  case 5:
    bVar1 = (&DAT_004a6740)[(byte)param_2[2]];
    goto LAB_004330ee;
  case 6:
    bVar1 = *(byte *)((byte)param_2[2] + 0x10040 + DAT_0053ea20);
LAB_004330ee:
    if ((byte)param_2[1] <= bVar1) {
      return 1;
    }
    break;
  case 7:
    if ((byte)(&DAT_004a6740)[(byte)param_2[2]] < (byte)param_2[1]) {
      return 1;
    }
    break;
  case 8:
    if (*(byte *)((byte)param_2[2] + 0x10040 + DAT_0053ea20) < (byte)param_2[1]) {
      return 1;
    }
    break;
  case 9:
    bVar1 = (&DAT_004a6740)[(byte)param_2[2]];
    goto LAB_00433137;
  case 10:
    bVar1 = *(byte *)((byte)param_2[2] + 0x10040 + DAT_0053ea20);
LAB_00433137:
    if (bVar1 <= (byte)param_2[1]) {
      return 1;
    }
    break;
  case 0xb:
    if ((*(byte *)(DAT_004d13c4 + 0x14) & 0x20) == 0) {
      return 1;
    }
    break;
  case 0xc:
    if (*(ushort *)(DAT_004d13c4 + 300) == (ushort)(byte)param_2[1]) {
      return 1;
    }
    break;
  case 0xd:
    if (*(int *)(param_1 + 0x54) == 0) {
      return 1;
    }
    break;
  case 0xe:
    if (*(ushort *)(DAT_004d13c4 + 0x20) == (ushort)(byte)param_2[1]) {
      return 1;
    }
    break;
  case 0xf:
    if ((&DAT_004a6740)[(byte)param_2[2]] == (&DAT_004a6740)[(byte)param_2[1]]) {
      return 1;
    }
    break;
  case 0x10:
    if (*(char *)((byte)param_2[2] + 0x10040 + DAT_0053ea20) ==
        *(char *)((byte)param_2[1] + 0x10040 + DAT_0053ea20)) {
      return 1;
    }
    break;
  case 0x12:
    iVar2 = FUN_00407270(*DAT_004d18f4 - *(int *)(param_1 + 0xcc),
                         DAT_004d18f4[2] - *(int *)(param_1 + 0xd4));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1000;
    }
    uVar5 = (int)*(short *)(DAT_004d13c4 + 0xc6) >> 0x1f;
    iVar3 = (((int)*(short *)(DAT_004d13c4 + 0xc6) ^ uVar5) - uVar5 & 0xfff ^ uVar5) - uVar5;
    if (-1 < iVar3) goto LAB_00433496;
    iVar3 = iVar2 - (iVar3 + 0x1000);
    iVar2 = iVar3;
    if (-1 < iVar3) goto LAB_004334a0;
    iVar2 = iVar3 + 0x1000;
    if (0x800 < iVar2) {
      if (1099 < iVar3) {
        return 1;
      }
      if (-0x44c < iVar3) {
        return 0;
      }
      return 1;
    }
    goto LAB_004334ae;
  case 0x13:
    iVar2 = FUN_00407270(*DAT_004d18f4 - *(int *)(param_1 + 0xcc),
                         DAT_004d18f4[2] - *(int *)(param_1 + 0xd4));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1000;
    }
    uVar5 = (int)*(short *)(DAT_004d13c4 + 0xc6) >> 0x1f;
    iVar3 = (((int)*(short *)(DAT_004d13c4 + 0xc6) ^ uVar5) - uVar5 & 0xfff ^ uVar5) - uVar5;
    if (-1 < iVar3) goto LAB_0043351f;
    iVar3 = iVar2 - (iVar3 + 0x1000);
    iVar2 = iVar3;
    if (-1 < iVar3) goto LAB_00433529;
    iVar2 = iVar3 + 0x1000;
    if (0x800 < iVar2) {
      if (1099 < iVar3) {
        return 0;
      }
      if (iVar3 < -1099) {
        return 0;
      }
      return 1;
    }
    goto LAB_00433537;
  case 0x14:
    iVar2 = FUN_00407270(*DAT_004d18f4 - *(int *)(param_1 + 0xcc),
                         DAT_004d18f4[2] - *(int *)(param_1 + 0xd4));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1000;
    }
    uVar5 = (int)*(short *)(param_1 + 0xc6) >> 0x1f;
    iVar3 = (((int)*(short *)(param_1 + 0xc6) ^ uVar5) - uVar5 & 0xfff ^ uVar5) - uVar5;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1000;
    }
LAB_00433496:
    iVar2 = iVar2 - iVar3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1000;
    }
LAB_004334a0:
    if (0x800 < iVar2) {
      iVar2 = iVar2 + -0x1000;
    }
LAB_004334ae:
    if (1099 < iVar2) {
switchD_00432f54_caseD_0:
      return 1;
    }
    if (iVar2 < -1099) {
      return 1;
    }
    break;
  case 0x15:
    iVar2 = FUN_00407270(*DAT_004d18f4 - *(int *)(param_1 + 0xcc),
                         DAT_004d18f4[2] - *(int *)(param_1 + 0xd4));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1000;
    }
    uVar5 = (int)*(short *)(param_1 + 0xc6) >> 0x1f;
    iVar3 = (((int)*(short *)(param_1 + 0xc6) ^ uVar5) - uVar5 & 0xfff ^ uVar5) - uVar5;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1000;
    }
LAB_0043351f:
    iVar2 = iVar2 - iVar3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1000;
    }
LAB_00433529:
    if (0x800 < iVar2) {
      iVar2 = iVar2 + -0x1000;
    }
LAB_00433537:
    if ((iVar2 < 0x44c) && (-0x44c < iVar2)) {
      return 1;
    }
    break;
  case 0x16:
    if (*(ushort *)(param_1 + 0x1e) < (ushort)(byte)param_2[1]) {
      return 1;
    }
    break;
  case 0x17:
    if ((ushort)(byte)param_2[1] < *(ushort *)(param_1 + 0x1e)) {
      return 1;
    }
    break;
  case 0x18:
    if (*(ushort *)(param_1 + 0x1e) == (ushort)(byte)param_2[1]) {
      return 1;
    }
    break;
  case 0x19:
    if (*(ushort *)(param_1 + 0x1e) / 0x1e < (uint)(byte)param_2[1]) {
      return 1;
    }
    break;
  case 0x1a:
    if ((uint)(byte)param_2[1] < *(ushort *)(param_1 + 0x1e) / 0x1e) {
      return 1;
    }
    break;
  case 0x1b:
    if (((uint)*(ushort *)(param_1 + 0x1e) % 0x1e == 0) &&
       (*(ushort *)(param_1 + 0x1e) / 0x1e == (uint)(byte)param_2[1])) {
      return 1;
    }
    break;
  case 0x1c:
    if (*(ushort *)(param_1 + 0x1e) / 0x708 < (uint)(byte)param_2[1]) {
      return 1;
    }
    break;
  case 0x1d:
    if ((uint)(byte)param_2[1] < *(ushort *)(param_1 + 0x1e) / 0x708) {
      return 1;
    }
    break;
  case 0x1e:
    if (*(ushort *)(param_1 + 0x1e) / 0x708 == (uint)(byte)param_2[1]) {
      return 1;
    }
    break;
  case 0x1f:
    if ((param_2[1] & (&DAT_004a6740)[(byte)param_2[2]]) != 0) {
      return 1;
    }
    break;
  case 0x20:
    if ((param_2[1] & *(byte *)((byte)param_2[2] + 0x10040 + DAT_0053ea20)) != 0) {
      return 1;
    }
    break;
  case 0x21:
    if ((*(byte *)(DAT_004d13c4 + 0x14) & 0x20) != 0) {
      return 1;
    }
    break;
  case 0x22:
    if ((*(byte *)(DAT_004d13c4 + 0x14) & 0x10) != 0) {
      return 1;
    }
    break;
  case 0x23:
  case 0x29:
    bVar1 = (&DAT_004a6740)[(byte)param_2[2]];
    goto LAB_00433180;
  case 0x24:
    if ((param_2[1] & *(byte *)((byte)param_2[2] + 0x10040 + DAT_0053ea20)) == 0) {
      return 1;
    }
    break;
  case 0x25:
    if ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000000) != 0) {
      return 1;
    }
    break;
  case 0x26:
    if ((&DAT_004a6740)[(byte)param_2[2]] != param_2[1]) {
      return 1;
    }
    break;
  case 0x27:
    if (*(char *)((byte)param_2[2] + 0x10040 + DAT_0053ea20) != param_2[1]) {
      return 1;
    }
    break;
  case 0x28:
    if ((*(uint *)(DAT_004d13c4 + 0x14) & 0x8000) == 0) {
      return 1;
    }
    break;
  case 0x2a:
    bVar1 = *(byte *)((byte)param_2[2] + 0x10040 + DAT_0053ea20);
LAB_00433180:
    if ((param_2[1] & bVar1) == 0) {
      return 1;
    }
    break;
  case 0x2b:
    if ((*(byte *)(DAT_004d13c4 + 0x14) & 0x40) != 0) {
      return 1;
    }
    break;
  case 0x2c:
    if ((*(byte *)(DAT_004d13c4 + 0x14) & 0x40) == 0) {
      return 1;
    }
    break;
  case 0x2d:
    if (*(int *)(param_1 + 0x54) != 0) {
      return 1;
    }
    break;
  case 0x2e:
    if (*(ushort *)(DAT_004d13c4 + 0x20) != (ushort)(byte)param_2[1]) {
      return 1;
    }
    break;
  case 0x2f:
    if (DAT_004e1bb8 != 0) {
      return 1;
    }
    break;
  case 0x30:
    if ((&DAT_004a6740)[(byte)param_2[2]] == param_2[1]) {
      return 1;
    }
    break;
  case 0x31:
    if (*(char *)((byte)param_2[2] + 0x10040 + DAT_0053ea20) == param_2[1]) {
      return 1;
    }
    break;
  case 0x32:
    if ((*(uint *)(DAT_004d13c4 + 0x14) & 0x1000000) == 0) {
      return 1;
    }
    break;
  case 0x33:
    if (DAT_00a14c1c == '\0') {
      return 0;
    }
    goto switchD_00432f54_caseD_0;
  }
  return 0;
}


