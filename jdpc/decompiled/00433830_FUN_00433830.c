/*
 * Function: FUN_00433830
 * Entry:    00433830
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00433830(int param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  ushort uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  
  switch(*(undefined1 *)(param_2 + 3)) {
  case 1:
    goto switchD_00433845_caseD_1;
  case 2:
    uVar3 = *(ushort *)(param_2 + 6);
    goto LAB_00433a7f;
  case 3:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = (&DAT_004a6740)[*(ushort *)(param_2 + 6)] + '\x01';
    return;
  case 4:
    pcVar2 = (char *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20);
    *pcVar2 = *pcVar2 + '\x01';
    return;
  case 5:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = (&DAT_004a6740)[*(ushort *)(param_2 + 6)] + -1;
    return;
  case 6:
  case 8:
    *(char *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20) =
         *(char *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20) + -1;
    return;
  case 7:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = 0;
    return;
  case 9:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = -(&DAT_004a6740)[*(ushort *)(param_2 + 6)];
    return;
  case 10:
    *(char *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20) =
         -*(char *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20);
    return;
  case 0xb:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] =
         (&DAT_004a6740)[*(ushort *)(param_2 + 6)] | *(byte *)(param_2 + 4);
    return;
  case 0xc:
    pbVar1 = (byte *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20);
    *pbVar1 = *pbVar1 | *(byte *)(param_2 + 4);
    return;
  case 0xd:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] =
         (&DAT_004a6740)[*(ushort *)(param_2 + 6)] & *(byte *)(param_2 + 4);
    return;
  case 0xe:
    pbVar1 = (byte *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20);
    *pbVar1 = *pbVar1 & *(byte *)(param_2 + 4);
    return;
  case 0x11:
    if (DAT_004d239a < 8) {
      uVar6 = (uint)DAT_004d239a;
      DAT_004d239a = DAT_004d239a + 1;
      (&DAT_004cd980)[uVar6] = *(undefined2 *)(param_2 + 4);
      return;
    }
    break;
  case 0x12:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = *(undefined1 *)(param_2 + 4);
    return;
  case 0x13:
    *(undefined1 *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20) =
         *(undefined1 *)(param_2 + 4);
    return;
  case 0x14:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = (&DAT_004a6740)[*(ushort *)(param_2 + 4)];
    return;
  case 0x15:
    *(undefined1 *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20) =
         *(undefined1 *)(*(ushort *)(param_2 + 4) + 0x10040 + DAT_0053ea20);
    return;
  case 0x16:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = (&DAT_004a6740)[*(ushort *)(param_2 + 6)] + '\x01';
    (&DAT_004a6740)[*(ushort *)(param_2 + 4)] = (&DAT_004a6740)[*(ushort *)(param_2 + 4)] + '\x01';
    return;
  case 0x17:
    pcVar2 = (char *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20);
    *pcVar2 = *pcVar2 + '\x01';
    *(char *)(*(ushort *)(param_2 + 4) + 0x10040 + DAT_0053ea20) =
         *(char *)(*(ushort *)(param_2 + 4) + 0x10040 + DAT_0053ea20) + '\x01';
    return;
  case 0x18:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = (&DAT_004a6740)[*(ushort *)(param_2 + 6)] + '\x01';
    uVar3 = *(ushort *)(param_2 + 4);
LAB_00433a7f:
    (&DAT_004a6740)[uVar3] = (&DAT_004a6740)[uVar3] + '\x01';
switchD_00433845_caseD_1:
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x100;
    return;
  case 0x19:
    *(undefined2 *)(param_1 + 0x1e) = 0;
    return;
  case 0x1a:
    *(short *)(DAT_004d13c4 + 0xc6) = *(short *)(param_1 + 0xc6) + 0x800;
    *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
    *(undefined2 *)(DAT_004d13c4 + 300) = *(undefined2 *)(param_2 + 4);
    *(uint *)(DAT_004d13c4 + 0x14) = *(uint *)(DAT_004d13c4 + 0x14) | 0x20;
    if (*(int *)(DAT_004d13c4 + 0x58) != 0) {
      *(undefined4 *)(DAT_004d13c4 + 0xac) = 0;
      *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0xb4;
      iVar4 = *(int *)(DAT_004d13c4 + 0x58);
      if (iVar4 == *(int *)(iVar4 + 0x54)) {
        *(undefined4 *)(iVar4 + 0x54) = 0;
      }
      *(undefined4 *)(DAT_004d13c4 + 0x58) = 0;
      *(uint *)(DAT_004d13c4 + 0x14) = *(uint *)(DAT_004d13c4 + 0x14) & 0xffffffeb;
      return;
    }
    break;
  case 0x1b:
    *(undefined1 *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20) =
         (&DAT_004a6740)[*(ushort *)(param_2 + 4)];
    return;
  case 0x1c:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] =
         *(undefined1 *)(*(ushort *)(param_2 + 4) + 0x10040 + DAT_0053ea20);
    return;
  case 0x1d:
    if (((&DAT_004a6740)[*(ushort *)(param_2 + 6)] != '\0') &&
       (1 < *(ushort *)(param_1 + 0x1e) / 0x1e)) {
      (&DAT_004a6740)[*(ushort *)(param_2 + 6)] = (&DAT_004a6740)[*(ushort *)(param_2 + 6)] + -1;
      *(undefined2 *)(param_1 + 0x1e) = 0;
      return;
    }
    break;
  case 0x1e:
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffbfffff | 0x200000;
    return;
  case 0x1f:
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffdfffff | 0x400000;
    return;
  case 0x20:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfff7ffff;
    return;
  case 0x21:
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) & 0xfffff7eb;
      *(uint *)(*(int *)(param_1 + 0x54) + 0x14) =
           *(uint *)(*(int *)(param_1 + 0x54) + 0x14) | 0x1000;
      *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xac) = 0;
      *(int *)(*(int *)(param_1 + 0x54) + 0xa8) = *(int *)(param_1 + 0x54) + 0xb4;
      *(undefined2 *)(*(int *)(param_1 + 0x54) + 0x20) = *(undefined2 *)(param_1 + 0x20);
      *(undefined2 *)(*(int *)(param_1 + 0x54) + 0xc4) = *(undefined2 *)(param_1 + 0xc4);
      *(undefined2 *)(*(int *)(param_1 + 0x54) + 0xc6) = *(undefined2 *)(param_1 + 0xc6);
      *(undefined2 *)(*(int *)(param_1 + 0x54) + 200) = *(undefined2 *)(param_1 + 200);
      *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x58) = 0;
      FUN_00432ef0(*(int *)(param_1 + 0x54) + 100);
      *(undefined4 *)(param_1 + 0x54) = 0;
      return;
    }
    break;
  case 0x22:
    uVar5 = FUN_00431e40(param_1,1,(int)DAT_004cd960);
    FUN_004205c0(*(undefined2 *)(param_2 + 4),uVar5);
    return;
  case 0x23:
    if (*(char *)(DAT_0053ea20 + 0x10043) == '\0') {
      DAT_004d2388 = 2;
      *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0;
      return;
    }
    *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0;
    FUN_004327d0(DAT_004e1a20,&DAT_004e1a10);
    return;
  case 0x24:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] =
         (&DAT_004a6740)[*(ushort *)(param_2 + 6)] + *(char *)(param_2 + 4);
    return;
  case 0x25:
    pcVar2 = (char *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20);
    *pcVar2 = *pcVar2 + *(char *)(param_2 + 4);
    return;
  case 0x26:
    *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + *(short *)(param_2 + 4) * 0x10;
    return;
  case 0x27:
    (&DAT_004a6740)[*(ushort *)(param_2 + 6)] =
         (&DAT_004a6740)[*(ushort *)(param_2 + 6)] - *(char *)(param_2 + 4);
    return;
  case 0x28:
    pcVar2 = (char *)(*(ushort *)(param_2 + 6) + 0x10040 + DAT_0053ea20);
    *pcVar2 = *pcVar2 - *(char *)(param_2 + 4);
    return;
  case 0x29:
    DAT_004e1bb8 = *(undefined2 *)(param_2 + 4);
    return;
  case 0x2a:
    *(uint *)(DAT_0053ea20 + 0x10004) = (uint)*(byte *)(DAT_0053ea20 + 0x10088);
    DAT_004d2388 = 1;
    return;
  case 0x2b:
    *(short *)(DAT_004d13c4 + 0xc6) = *(short *)(param_2 + 4) << 4;
    return;
  case 0x2c:
    *(undefined2 *)(DAT_004d13c4 + 0x22) = *(undefined2 *)(param_2 + 4);
    return;
  case 0x2d:
    DAT_004e1aac = (uint)(DAT_004e1aac == 0);
    return;
  case 0x2e:
    DAT_004e1a70 = (uint)(DAT_004e1a70 == 0);
    return;
  case 0x2f:
    DAT_004537e8 = 9;
  }
  return;
}


