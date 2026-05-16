/*
 * Function: FUN_00432420
 * Entry:    00432420
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432420(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (((DAT_004cffe0 < 1) && (DAT_004a6742 == '\0')) && ((DAT_004d2352 & 0x100) == 0)) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if ((((uVar2 & 0x80000000) == 0) && (DAT_004d2388 == 0)) && (DAT_004d13b6 == '\0')) {
      *(uint *)(param_1 + 0x14) = uVar2 | 0x8000;
      if ((param_2 != 0) && ((*(uint *)(DAT_004d13c4 + 0x14) & 0x248) != 0)) {
        if (*(uint *)(param_2 + 0xc) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_2 + 0xc) & 0x4000;
        }
        if (uVar4 != 0) {
          *(uint *)(param_1 + 0x14) = uVar2 | 0x4008000;
          return;
        }
      }
      *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
      *(undefined2 *)(DAT_004d13c4 + 300) = 0x21;
      *(undefined4 *)(DAT_004d13c4 + 0x14) = 0x20;
      _DAT_004a6670 = 0x1e;
      DAT_004cffe0 = 0x69;
      if (param_2 == 0) {
        *(short *)(DAT_004d13c4 + 0xc6) = *(short *)(param_1 + 0xc6) + 0x800;
      }
      else {
        if (((*(uint *)(param_2 + 0xc) & 0x200000) != 0) || (*(short *)(param_2 + 0x16) < 10)) {
          *(undefined2 *)(DAT_004d13c4 + 300) = 0x84;
        }
        if ((*(uint *)(param_2 + 0xc) & 0x200000) == 0) {
          *(char *)(DAT_0053ea20 + 0x10044) =
               *(char *)(DAT_0053ea20 + 0x10044) - *(char *)(param_2 + 0x16);
          *(short *)(DAT_004d13c4 + 0xc6) = *(short *)(param_1 + 0xc6) + 0x800;
        }
        else {
          *(char *)(DAT_0053ea20 + 0x10044) = *(char *)(DAT_0053ea20 + 0x10044) + -5;
        }
      }
      if (*(int *)(DAT_004d13c4 + 0x58) != 0) {
        *(undefined4 *)(DAT_004d13c4 + 0xac) = 0;
        *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0xb4;
        if (DAT_004d13c4 == *(int *)(*(int *)(DAT_004d13c4 + 0x58) + 0x54)) {
          *(undefined4 *)(*(int *)(DAT_004d13c4 + 0x58) + 0x54) = 0;
        }
        *(undefined4 *)(DAT_004d13c4 + 0x58) = 0;
        *(uint *)(DAT_004d13c4 + 0x14) = *(uint *)(DAT_004d13c4 + 0x14) & 0xffffffeb;
      }
      iVar3 = *(int *)(DAT_004d13c4 + 0x54);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x80000;
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) & 0xfffff7ff | 0x1000;
        *(undefined4 *)(iVar3 + 0xac) = 0;
        *(int *)(iVar3 + 0xa8) = iVar3 + 0xb4;
        *(undefined2 *)(iVar3 + 0x20) = *(undefined2 *)(DAT_004d13c4 + 0x20);
        *(undefined2 *)(iVar3 + 0xc4) = *(undefined2 *)(DAT_004d13c4 + 0xc4);
        *(undefined2 *)(iVar3 + 0xc6) = *(undefined2 *)(DAT_004d13c4 + 0xc6);
        uVar1 = *(undefined2 *)(DAT_004d13c4 + 200);
        *(undefined4 *)(iVar3 + 0x58) = 0;
        *(undefined2 *)(iVar3 + 200) = uVar1;
        *(undefined4 *)(DAT_004d13c4 + 0x54) = 0;
        FUN_00432ef0(iVar3 + 100);
        FUN_00432190(DAT_004d13c4,iVar3,param_3);
      }
    }
  }
  return;
}


