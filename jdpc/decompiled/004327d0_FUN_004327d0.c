/*
 * Function: FUN_004327d0
 * Entry:    004327d0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004327d0(undefined2 param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined2 *)(DAT_004d13c4 + 0x12e) = 0;
  DAT_004cffe0 = 0;
  DAT_004e1bb8 = 0;
  DAT_004e1a40 = 0;
  *(undefined2 *)(DAT_004d13c4 + 300) = param_1;
  *(undefined4 *)(DAT_004d13c4 + 0x14) = 0x1000004;
  thunk_FUN_00421a60();
  DAT_004a6742 = 0;
  DAT_004e1a76 = 0;
  if (*(int *)(DAT_004d13c4 + 0x58) != 0) {
    *(undefined4 *)(DAT_004d13c4 + 0xac) = 0;
    *(int *)(DAT_004d13c4 + 0xa8) = DAT_004d13c4 + 0xb4;
    *(undefined4 *)(*(int *)(DAT_004d13c4 + 0x58) + 0x54) = 0;
    *(undefined4 *)(DAT_004d13c4 + 0x58) = 0;
    *(uint *)(DAT_004d13c4 + 0x14) = *(uint *)(DAT_004d13c4 + 0x14) & 0xffffffeb;
  }
  iVar1 = *(int *)(DAT_004d13c4 + 0x54);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xac) = 0;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x80000;
    *(int *)(iVar1 + 0xa8) = iVar1 + 0xb4;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xfffff7ff | 0x1000;
    *(undefined4 *)(DAT_004d13c4 + 0x54) = 0;
    FUN_00432ef0(iVar1 + 100);
  }
  if (param_2 != (undefined4 *)0x0) {
    *(undefined2 *)(DAT_004d13c4 + 0xc6) = 0;
    DAT_004e1bc2 = 0;
    *(undefined4 *)(DAT_004d13c4 + 0xcc) = *param_2;
    *(undefined4 *)(DAT_004d13c4 + 0xd0) = param_2[1];
    *(undefined4 *)(DAT_004d13c4 + 0xd4) = param_2[2];
    DAT_004d22e0 = *param_2;
    DAT_004d22e4 = param_2[1];
    DAT_004d22e8 = param_2[2];
    DAT_004d22ec = *param_2;
    DAT_004d22f0 = param_2[1];
    DAT_004d22f4 = param_2[2];
  }
  if ((DAT_004d2392 & 1) != 0) {
    DAT_004d2392 = DAT_004d2392 & 0xfe;
    FUN_004205c0((int)DAT_004a6666,0,2,(int)DAT_004cd960);
  }
  if ((DAT_004d2392 & 2) != 0) {
    DAT_004d2392 = DAT_004d2392 & 0xfd;
    FUN_004205c0(0x17,0,2,(int)DAT_004cd960);
  }
  if ((DAT_004d2392 & 4) != 0) {
    DAT_004d2392 = DAT_004d2392 & 0xfb;
    FUN_004205c0(0x37,0,2,(int)DAT_004cd960);
  }
  if (0x1d < DAT_004e1a02) {
    if (*(char *)(DAT_0053ea20 + 0x10043) == '\0') {
      DAT_004d2388 = 2;
      return;
    }
    DAT_004e1a02 = 0;
    *(char *)(DAT_0053ea20 + 0x10043) = *(char *)(DAT_0053ea20 + 0x10043) + -1;
  }
  if (*(char *)(DAT_0053ea20 + 0x10043) == '\0') {
    DAT_004d2388 = 2;
    return;
  }
  return;
}


