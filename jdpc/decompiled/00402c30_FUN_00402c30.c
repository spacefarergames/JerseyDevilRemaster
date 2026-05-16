/*
 * Function: FUN_00402c30
 * Entry:    00402c30
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00402c30(void)

{
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  
  puVar2 = DAT_004a5cb0;
  if (DAT_004a5cb0 != (undefined1 *)0x0) {
    *DAT_004a5cb0 = 0;
    puVar2[1] = 0x41;
    puVar2[2] = 0xff;
    puVar2[3] = 0xff;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    iVar4 = FUN_00401e10(&DAT_004a5c30,&DAT_004a5c34,&DAT_004a5c48);
    if (iVar4 != 0) {
      DAT_004a5c30 = DAT_004a5c30 + 0x80;
      if (0xff < DAT_004a5c30) {
        DAT_004a5c30 = 0xff;
      }
      DAT_004a5c34 = DAT_004a5c34 + 0x80;
      if (0xff < DAT_004a5c34) {
        DAT_004a5c34 = 0xff;
      }
      puVar2[1] = 0x73;
      uVar1 = DAT_004a5c48;
      DAT_004a5c48 = 0;
      puVar2[3] = 0;
      if ((uVar1 & 1 << (DAT_0053e888 & 0x1f)) != 0) {
        puVar2[3] = 0x10;
      }
      if ((uVar1 & 1 << (DAT_0053e889 & 0x1f)) != 0) {
        puVar2[3] = puVar2[3] | 0x20;
      }
      if ((uVar1 & 1 << (DAT_0053e88a & 0x1f)) != 0) {
        puVar2[3] = puVar2[3] | 0x40;
      }
      if ((uVar1 & 1 << (DAT_0053e88b & 0x1f)) != 0) {
        puVar2[3] = puVar2[3] | 0x80;
      }
      if ((uVar1 & 1 << ((byte)DAT_0053e88c & 0x1f)) != 0) {
        puVar2[3] = puVar2[3] | 1;
      }
      if ((uVar1 & 1 << (DAT_0053e88c._1_1_ & 0x1f)) != 0) {
        puVar2[3] = puVar2[3] | 2;
      }
      if ((uVar1 & 1 << (DAT_0053e890 & 0x1f)) != 0) {
        DAT_004a5c48 = DAT_004a5c48 | 0x100;
      }
      if ((uVar1 & 1 << (DAT_0053e891 & 0x1f)) != 0) {
        DAT_004a5c48 = DAT_004a5c48 | 0x200;
      }
      bVar3 = ((byte)(DAT_004a5c48 >> 8) & 0xf) << 2;
      puVar2[2] = bVar3;
      if (DAT_004a5c34 < 0x10) {
        puVar2[2] = bVar3 | 0x10;
      }
      if (0xe0 < DAT_004a5c30) {
        puVar2[2] = puVar2[2] | 0x20;
      }
      if (0xe0 < DAT_004a5c34) {
        puVar2[2] = puVar2[2] | 0x40;
      }
      if (DAT_004a5c30 < 0x10) {
        puVar2[2] = puVar2[2] | 0x80;
      }
      puVar2[2] = ~puVar2[2];
      puVar2[3] = ~puVar2[3];
      puVar2[4] = (undefined1)DAT_004a5c30;
      puVar2[5] = (undefined1)DAT_004a5c34;
      puVar2[6] = (undefined1)DAT_004a5c30;
      puVar2[7] = (undefined1)DAT_004a5c34;
    }
  }
  return;
}


