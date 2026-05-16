/*
 * Function: FUN_0044b510
 * Entry:    0044b510
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0044b510(double param_1,double param_2,double *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1._4_4_;
  iVar4 = param_1._0_4_;
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  if ((param_2._4_4_ == 0x7ff00000) && (param_2._0_4_ == 0)) {
    if (1.0 < param_1) {
      *(undefined4 *)param_3 = DAT_004a5028;
      *(undefined4 *)((int)param_3 + 4) = DAT_004a502c;
      return 0;
    }
    if (param_1 < 1.0) {
      *(undefined4 *)param_3 = 0;
      *(undefined4 *)((int)param_3 + 4) = 0;
      return 0;
    }
  }
  else {
    if ((param_2._4_4_ != -0x100000) || (param_2._0_4_ != 0)) {
      if ((iVar3 == 0x7ff00000) && (iVar4 == 0)) {
        if (0.0 < param_2) {
          *(undefined4 *)param_3 = DAT_004a5028;
          *(undefined4 *)((int)param_3 + 4) = DAT_004a502c;
          return 0;
        }
        *(undefined4 *)param_3 = 0;
        if (param_2 < 0.0) {
          *(undefined4 *)((int)param_3 + 4) = 0;
          return 0;
        }
      }
      else {
        if (iVar3 != -0x100000) {
          return 0;
        }
        if (iVar4 != 0) {
          return 0;
        }
        iVar4 = FUN_0044b740(param_2._0_4_,param_2._4_4_);
        uVar2 = DAT_004a504c;
        uVar1 = DAT_004a502c;
        if (0.0 < param_2) {
          if (iVar4 == 1) {
            *param_3 = -(double)CONCAT44(DAT_004a502c,DAT_004a5028);
            return 0;
          }
          *(undefined4 *)param_3 = DAT_004a5028;
          *(undefined4 *)((int)param_3 + 4) = uVar1;
          return 0;
        }
        if (param_2 < 0.0) {
          if (iVar4 == 1) {
            *(undefined4 *)param_3 = DAT_004a5048;
            *(undefined4 *)((int)param_3 + 4) = uVar2;
            return 0;
          }
          *(undefined4 *)param_3 = 0;
          *(undefined4 *)((int)param_3 + 4) = 0;
          return 0;
        }
        *(undefined4 *)param_3 = 0;
      }
      *(undefined4 *)((int)param_3 + 4) = 0x3ff00000;
      return 0;
    }
    if (1.0 < param_1) {
      *(undefined4 *)param_3 = 0;
      *(undefined4 *)((int)param_3 + 4) = 0;
      return 0;
    }
    if (param_1 < 1.0) {
      *(undefined4 *)param_3 = DAT_004a5028;
      *(undefined4 *)((int)param_3 + 4) = DAT_004a502c;
      return 0;
    }
  }
  *(undefined4 *)param_3 = DAT_004a5030;
  *(undefined4 *)((int)param_3 + 4) = DAT_004a5034;
  return 1;
}


