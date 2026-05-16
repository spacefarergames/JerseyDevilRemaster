/*
 * Function: FUN_00406a00
 * Entry:    00406a00
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00406a00(void)

{
  undefined2 extraout_var;
  char *pcVar1;
  
  DAT_004cd99c = DAT_004cd99c + 2;
  DAT_004cd968 = DAT_004cd99c - DAT_004cdfc4;
  DAT_004cdfc4 = DAT_004cd99c;
  FUN_00440cc0();
  FUN_004401e0(DAT_004d18fc);
  FUN_004206f0((int)DAT_004d238a);
  if (DAT_004537c8 != '\0') {
    if (DAT_004d2388 == 1) {
      DAT_004cd960 = DAT_004cd960 + 1;
      DAT_004d2380 = DAT_004d2380 + 1;
      if ((DAT_004a5e58 == 0) && (*(int *)(DAT_0053ea20 + 0x10004) != 3)) {
        FUN_00441e10();
        FUN_004061d0();
      }
      DAT_004a5e58 = 0;
      DAT_004d2388 = 0;
      *(undefined1 *)(DAT_0053ea20 + 0x100b9) = 0;
      if (*(int *)(DAT_0053ea20 + 0x10004) < 3) {
        FUN_00406270(s__CREDITS_EXE_1_00453a24);
        return 1;
      }
      FUN_0043f740();
      if (((*(char *)(DAT_0053ea20 + 0x1005c) == 'd') && (*(int *)(DAT_0053ea20 + 0x10004) != 0x39))
         && (DAT_004d18e6 != 0x3c)) {
        *(undefined4 *)(DAT_0053ea20 + 0x10004) = 0x3c;
        *(undefined1 *)(DAT_0053ea20 + 0x10088) = 0;
      }
      DAT_004d18e6 = *(undefined2 *)(DAT_0053ea20 + 0x10004);
      FUN_0042dcb0(*(undefined4 *)(DAT_0053ea20 + 0x10004));
      FUN_0042dd20(CONCAT22(extraout_var,*(undefined2 *)(DAT_0053ea20 + 0x10004)));
      DAT_004cd960 = DAT_004cd960 + 1;
      if (DAT_004537e8 != 0) {
        if (DAT_004537e8 == 0xd) {
          return 1;
        }
        FUN_00441de0();
        FUN_00406140();
        return 1;
      }
      return 0;
    }
    if (DAT_004d2388 == 2) {
      DAT_004cd960 = DAT_004cd960 + 1;
      DAT_004d2380 = DAT_004d2380 + 1;
      DAT_004d2388 = 0;
      FUN_00441e10();
      FUN_004061d0();
      FUN_00405ff0();
      DAT_004537e8 = 0xd;
    }
    if (DAT_004d18e2 != 0) {
      DAT_004cd960 = DAT_004cd960 + 1;
      DAT_004d2380 = DAT_004d2380 + 1;
      FUN_00441e10();
      FUN_004061d0();
      DAT_004d2388 = 0;
      if ((DAT_004d18e2 & 1) == 0) {
        if ((DAT_004d18e2 & 4) == 0) {
          pcVar1 = &DAT_00453a5c;
        }
        else {
          pcVar1 = s__OPTIONS_EXE_1_00453a40;
        }
      }
      else {
        pcVar1 = &DAT_00453a34;
      }
      FUN_00406270(pcVar1);
      DAT_004d18e2 = 0;
    }
    if (*(char *)(DAT_0053ea20 + 0x100b9) != '\0') {
      *(byte *)(DAT_0053ea20 + 0x10084) = *(byte *)(DAT_0053ea20 + 0x10084) & 0xfe;
      *(byte *)(DAT_0053ea20 + 0x10084) = *(byte *)(DAT_0053ea20 + 0x10084) | 4;
      if ((*(byte *)(DAT_0053ea20 + 0x10011) & 1) != 0) {
        *(undefined1 *)(DAT_0053ea20 + 0x10045) = (undefined1)DAT_004a6744;
        *(undefined1 *)(DAT_0053ea20 + 0x10057) = DAT_004a6744._1_1_;
        *(undefined1 *)(DAT_0053ea20 + 0x10040) = DAT_004a6744._2_1_;
        *(undefined1 *)(DAT_0053ea20 + 0x10056) = DAT_004a6744._3_1_;
        *(undefined1 *)(DAT_0053ea20 + 0x10043) = DAT_004a6748;
        *(undefined1 *)(DAT_0053ea20 + 0x10044) = DAT_004a6749;
        *(undefined1 *)(DAT_0053ea20 + 0x10053) = DAT_004a674a;
        if (*(char *)(DAT_0053ea20 + 0x100ba) == '\0') {
          DAT_004d2388 = 1;
          *(uint *)(DAT_0053ea20 + 0x10004) = (uint)*(byte *)(DAT_0053ea20 + 0x10088);
        }
        else {
          *(int *)(DAT_0053ea20 + 0x10004) = *(int *)(DAT_0053ea20 + 0x10004) + 1;
          if (*(int *)(DAT_0053ea20 + 0x10004) < 0x46) {
            DAT_004d2388 = 1;
          }
          else {
            DAT_004d18e2 = 4;
            *(undefined1 *)(DAT_0053ea20 + 0x100ba) = 0;
          }
        }
      }
    }
    if (((DAT_004deba0 != 0) || (DAT_004d2394 != 0)) &&
       ((*(uint *)(DAT_004d13c4 + 0x14) & 0x81000000) == 0)) {
      FUN_004060e0();
    }
    FUN_00420410();
  }
  DAT_004cd960 = DAT_004cd960 + 1;
  DAT_004d2380 = DAT_004d2380 + 1;
  return 1;
}


