/*
 * Function: FUN_00444440
 * Entry:    00444440
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00444440(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0xc) & 0x83) != 0) &&
     (((param_3 == 0 || (param_3 == 1)) || (param_3 == 2)))) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_004444e0(param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_004478b0(param_1);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        *(undefined4 *)(param_1 + 0x18) = 0x200;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffc;
    }
    iVar2 = FUN_00444030(*(undefined4 *)(param_1 + 0x10),param_2,param_3);
    return (iVar2 != -1) - 1;
  }
  _DAT_004a6220 = 0x16;
  return -1;
}


