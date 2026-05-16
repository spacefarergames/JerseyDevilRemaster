/*
 * Function: FUN_00424600
 * Entry:    00424600
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00424600(byte *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 0;
  if ((*param_1 & 8) != 0) {
    sVar1 = *(short *)(param_1 + 4);
  }
  iVar2 = (int)sVar1;
  return (uint)*(ushort *)(param_1 + iVar2 + 0xc) * 2 * (uint)*(ushort *)(param_1 + iVar2 + 0xe) +
         0x18 + iVar2;
}


