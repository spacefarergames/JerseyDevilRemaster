/*
 * Function: FUN_00402e00
 * Entry:    00402e00
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00402e00(void)

{
  int iVar1;
  
  iVar1 = FUN_00401e10(&DAT_004a5c30,&DAT_004a5c34,&DAT_004a5c48);
  if (iVar1 == 0) {
    return 0xff;
  }
  iVar1 = 0;
  do {
    if ((DAT_004a5c48 & 1 << ((byte)iVar1 & 0x1f)) != 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0xfe;
}


