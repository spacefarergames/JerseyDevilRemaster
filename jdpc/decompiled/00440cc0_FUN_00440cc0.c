/*
 * Function: FUN_00440cc0
 * Entry:    00440cc0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440cc0(void)

{
  short sVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint local_4;
  
  FUN_00402c30();
  if (DAT_004537e8 == 0x11) {
    FUN_00402110();
  }
  else {
    FUN_00401fc0();
  }
  uVar5 = _DAT_004d1391;
  if (DAT_004a6120 != 0) {
    if (DAT_004a6120 == 1) {
      *(byte *)(DAT_004a6124 + 0x100000 + DAT_004a60b4) = DAT_004d1392;
      *(byte *)(DAT_004a6124 + 0x100001 + DAT_004a60b4) = DAT_004d1393;
      DAT_004a6128 = DAT_004a6128 + 2;
      if (0xffffa < DAT_004a6128) {
LAB_00440d71:
        DAT_004a6120 = 0;
      }
    }
    else {
      DAT_004a6120 = 2;
      uRam004d1394 = SUB41(uVar5,3);
      _DAT_004d1391 =
           CONCAT12(*(undefined1 *)(DAT_004a6124 + 0x100001 + DAT_004a60b4),
                    CONCAT11(*(undefined1 *)(DAT_004a6124 + 0x100000 + DAT_004a60b4),DAT_004d1391));
      if (DAT_004a6128 < DAT_004a6124) goto LAB_00440d71;
    }
    DAT_004a6124 = DAT_004a6124 + 2;
  }
  if ((DAT_004e1bdc != '\0') || (DAT_004d13c4 == 0)) {
    return;
  }
  if ((DAT_004d13b6 != '\0') || (DAT_004d2388 != 0)) {
    *(undefined2 *)(DAT_0053ea20 + 0x1000a) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x1000e) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x1000c) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10012) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10014) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10016) = 0x7f;
    *(undefined2 *)(DAT_0053ea20 + 0x10018) = 0x7f;
    return;
  }
  DAT_004d13b0 = 0;
  if (DAT_004deba0 == 0) {
    if ((*(byte *)(DAT_0053ea20 + 0x1000c) & 0x40) == 0) {
      DAT_004cd962 = 2;
    }
    else if (DAT_004cd962 == 0) {
      DAT_004d13b0 = 0x40;
    }
    else {
      DAT_004cd962 = DAT_004cd962 + -1;
    }
    if ((*(byte *)(DAT_0053ea20 + 0x1000c) & 0x80) == 0) {
      DAT_004d22dc = 2;
    }
    else if (DAT_004d22dc == 0) {
      DAT_004d13b0 = DAT_004d13b0 | 0x80;
    }
    else {
      DAT_004d22dc = DAT_004d22dc + -1;
    }
  }
  *(undefined2 *)(DAT_0053ea20 + 0x1000e) = *(undefined2 *)(DAT_0053ea20 + 0x1000c);
  *(ushort *)(DAT_0053ea20 + 0x1000e) = *(ushort *)(DAT_0053ea20 + 0x1000e) & DAT_004d13b0;
  *(undefined2 *)(DAT_0053ea20 + 0x1000c) = 0;
  if (*(char *)(DAT_0053ea20 + 0x100b9) != '\0') {
    *(undefined2 *)(DAT_0053ea20 + 0x1000a) = *DAT_004cd994;
    DAT_004cd994 = DAT_004cd994 + 1;
    *(undefined2 *)(DAT_0053ea20 + 0x1000e) = *DAT_004cd994;
    DAT_004cd994 = DAT_004cd994 + 1;
    *(undefined2 *)(DAT_0053ea20 + 0x1000c) = *DAT_004cd994;
    DAT_004cd994 = DAT_004cd994 + 1;
    *(undefined2 *)(DAT_0053ea20 + 0x10010) = *DAT_004cd994;
    DAT_004cd994 = DAT_004cd994 + 1;
    if ((~DAT_004d1392 & 8) != 0) {
      *(ushort *)(DAT_0053ea20 + 0x1000a) = *(ushort *)(DAT_0053ea20 + 0x1000a) | 0x100;
      *(ushort *)(DAT_0053ea20 + 0x1000c) = *(ushort *)(DAT_0053ea20 + 0x1000c) | 0x100;
      *(ushort *)(DAT_0053ea20 + 0x10010) = *(ushort *)(DAT_0053ea20 + 0x10010) | 0x100;
    }
    uVar3 = *(ushort *)(DAT_0053ea20 + 0x1000a);
    *(undefined2 *)(DAT_0053ea20 + 0x10012) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10016) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10014) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10018) = 0;
    if ((uVar3 & 0x8000) == 0) {
      if ((uVar3 & 0x2000) != 0) {
        *(undefined2 *)(DAT_0053ea20 + 0x10012) = 0x7f;
        *(undefined2 *)(DAT_0053ea20 + 0x10016) = 0x7f;
      }
    }
    else {
      *(undefined2 *)(DAT_0053ea20 + 0x10012) = 0xff80;
      *(undefined2 *)(DAT_0053ea20 + 0x10016) = 0xff80;
    }
    if ((uVar3 & 0x1000) == 0) {
      if ((uVar3 & 0x4000) == 0) {
        return;
      }
      *(undefined2 *)(DAT_0053ea20 + 0x10014) = 0xff80;
      *(undefined2 *)(DAT_0053ea20 + 0x10018) = 0xff80;
      return;
    }
    *(undefined2 *)(DAT_0053ea20 + 0x10014) = 0x7f;
    *(undefined2 *)(DAT_0053ea20 + 0x10018) = 0x7f;
    return;
  }
  if (((_DAT_004d1391 & 0x7f) != 0x41) && ((_DAT_004d1391 & 0x7f) != 0x73)) {
    DAT_004d138a = DAT_004d138a + 1;
    if (3 < DAT_004d138a) {
      *(undefined2 *)(DAT_0053ea20 + 0x1000a) = 0x800;
      _DAT_004d1391 = _DAT_004d1391 & 0xffffff00;
      return;
    }
    goto LAB_0044134f;
  }
  DAT_004d138a = 0;
  bVar2 = ~DAT_004d1393;
  *(ushort *)(DAT_0053ea20 + 0x1000c) = (ushort)bVar2;
  *(ushort *)(DAT_0053ea20 + 0x10010) = (ushort)bVar2;
  bVar2 = ~DAT_004d1392;
  uVar3 = (ushort)bVar2 << 8;
  *(ushort *)(DAT_0053ea20 + 0x10010) = *(ushort *)(DAT_0053ea20 + 0x10010) | uVar3;
  if (((*(byte *)(DAT_0053ea20 + 0x10008) & 2) == 0) || ((DAT_004d1391 & 0x7f) == 0x41)) {
    *(ushort *)(DAT_0053ea20 + 0x1000c) = *(ushort *)(DAT_0053ea20 + 0x1000c) | uVar3;
    FUN_00440c50(DAT_0053ea20 + 0x10008);
    *(ushort *)(DAT_0053ea20 + 0x1000a) =
         ~*(ushort *)(DAT_0053ea20 + 0x1000e) & *(ushort *)(DAT_0053ea20 + 0x1000c);
    *(undefined2 *)(DAT_0053ea20 + 0x10012) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10016) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10014) = 0;
    *(undefined2 *)(DAT_0053ea20 + 0x10018) = 0;
    if ((bVar2 & 0x80) == 0) {
      if ((bVar2 & 0x20) != 0) {
        *(undefined2 *)(DAT_0053ea20 + 0x10012) = 0x7f;
        *(undefined2 *)(DAT_0053ea20 + 0x10016) = 0x7f;
      }
    }
    else {
      *(undefined2 *)(DAT_0053ea20 + 0x10012) = 0xff80;
      *(undefined2 *)(DAT_0053ea20 + 0x10016) = 0xff80;
    }
    if ((bVar2 & 0x10) == 0) {
      if ((bVar2 & 0x40) != 0) {
        *(undefined2 *)(DAT_0053ea20 + 0x10014) = 0xff80;
        *(undefined2 *)(DAT_0053ea20 + 0x10018) = 0xff80;
      }
    }
    else {
      *(undefined2 *)(DAT_0053ea20 + 0x10014) = 0x7f;
      *(undefined2 *)(DAT_0053ea20 + 0x10018) = 0x7f;
    }
  }
  else {
    *(ushort *)(DAT_0053ea20 + 0x1000c) = *(ushort *)(DAT_0053ea20 + 0x1000c) | uVar3 & 0xfff;
    FUN_00440c50(DAT_0053ea20 + 0x10008);
    *(ushort *)(DAT_0053ea20 + 0x1000a) =
         ~*(ushort *)(DAT_0053ea20 + 0x1000e) & *(ushort *)(DAT_0053ea20 + 0x1000c);
    iVar4 = (uint)(*(byte *)(DAT_0053ea20 + 0x10008) & 1 | 2) * 2;
    bVar2 = (&DAT_004d1390)[iVar4];
    local_4 = (uint)bVar2;
    *(ushort *)(DAT_0053ea20 + 0x10016) = (ushort)bVar2;
    sVar1 = *(short *)(DAT_0053ea20 + 0x1001e);
    if ((int)local_4 < (int)sVar1 - (int)DAT_004d13b8) {
      *(byte *)(DAT_0053ea20 + 0x1000b) = *(byte *)(DAT_0053ea20 + 0x1000b) | 0x80;
LAB_00441111:
      *(ushort *)(DAT_0053ea20 + 0x10012) = (ushort)bVar2 - sVar1;
    }
    else {
      if ((int)DAT_004d13b8 + (int)sVar1 < (int)local_4) {
        *(byte *)(DAT_0053ea20 + 0x1000b) = *(byte *)(DAT_0053ea20 + 0x1000b) | 0x20;
        goto LAB_00441111;
      }
      *(undefined2 *)(DAT_0053ea20 + 0x10012) = 0;
    }
    bVar2 = (&DAT_004d1391)[iVar4];
    local_4 = (uint)bVar2;
    *(ushort *)(DAT_0053ea20 + 0x10018) = (ushort)bVar2;
    sVar1 = *(short *)(DAT_0053ea20 + 0x10024);
    if ((int)local_4 < (int)sVar1 - (int)DAT_004d13b8) {
      *(byte *)(DAT_0053ea20 + 0x1000b) = *(byte *)(DAT_0053ea20 + 0x1000b) | 0x10;
      *(ushort *)(DAT_0053ea20 + 0x10014) = (sVar1 - (ushort)bVar2) + -1;
    }
    else if ((int)DAT_004d13b8 + (int)sVar1 < (int)local_4) {
      *(byte *)(DAT_0053ea20 + 0x1000b) = *(byte *)(DAT_0053ea20 + 0x1000b) | 0x40;
      *(ushort *)(DAT_0053ea20 + 0x10014) = (sVar1 - (ushort)bVar2) + -1;
    }
    else {
      *(undefined2 *)(DAT_0053ea20 + 0x10014) = 0;
    }
  }
  DAT_004a6850 = 1;
  DAT_004a6851 = 0x40;
  if ((*(char *)(DAT_0053ea20 + 0x100b7) == '(') && (DAT_004d13ca == '\0')) {
    DAT_004d13ca = '\x01';
    DAT_004d18ea = '<';
LAB_0044131a:
    if (DAT_004d18ea != '\0') goto LAB_00441322;
  }
  else {
    uVar5 = *(uint *)(DAT_004d13c4 + 0x14) & 0x20;
    if ((uVar5 != 0) && (DAT_004d13ca == '\0')) {
      DAT_004d13ca = '\x01';
      DAT_004d18ea = '\x0f';
      goto LAB_0044131a;
    }
    if (uVar5 != 0) goto LAB_0044131a;
    if (DAT_004d18ea == '\0') {
      DAT_004d13ca = '\0';
      goto LAB_0044131a;
    }
LAB_00441322:
    if (*(char *)(DAT_0053ea20 + 0x100bc) != '\0') {
      DAT_004a6852 = 1;
      _DAT_004d1391 = _DAT_004d1391 & 0xffffff00;
      DAT_004d18ea = DAT_004d18ea + -1;
      return;
    }
  }
  DAT_004a6852 = 0;
LAB_0044134f:
  _DAT_004d1391 = _DAT_004d1391 & 0xffffff00;
  return;
}


