/*
 * Function: FUN_00432240
 * Entry:    00432240
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00432240(int param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
  *(undefined2 *)(DAT_004d13c4 + 300) = param_2;
  if (*(int *)(DAT_004d13c4 + 0x58) != 0) {
    *(undefined4 *)(DAT_004d13c4 + 0xac) = 0;
    *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0xb4;
    iVar2 = *(int *)(DAT_004d13c4 + 0x58);
    if (iVar2 == *(int *)(iVar2 + 0x54)) {
      *(undefined4 *)(iVar2 + 0x54) = 0;
    }
    *(undefined4 *)(DAT_004d13c4 + 0x58) = 0;
    *(uint *)(DAT_004d13c4 + 0x14) = *(uint *)(DAT_004d13c4 + 0x14) & 0xffffffeb;
  }
  iVar2 = *(int *)(DAT_004d13c4 + 0x54);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x80000;
    *(int *)(iVar2 + 0xa8) = iVar2 + 0xb4;
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfffff7ff | 0x1000;
    *(undefined2 *)(iVar2 + 0x20) = *(undefined2 *)(param_1 + 0x20);
    *(undefined2 *)(iVar2 + 0xc4) = *(undefined2 *)(DAT_004d13c4 + 0xc4);
    *(undefined2 *)(iVar2 + 0xc6) = *(undefined2 *)(DAT_004d13c4 + 0xc6);
    uVar1 = *(undefined2 *)(DAT_004d13c4 + 200);
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(undefined2 *)(iVar2 + 200) = uVar1;
    *(undefined4 *)(DAT_004d13c4 + 0x54) = 0;
    FUN_00432ef0(iVar2 + 100);
    FUN_00432190(DAT_004d13c4,iVar2,param_3);
  }
  return;
}


