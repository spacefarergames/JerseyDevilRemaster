/*
 * Function: FUN_0044aa00
 * Entry:    0044aa00
 * Warning:  Decompiled pseudocode, not original source.
 */


bool FUN_0044aa00(uint param_1,double *param_2,uint param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  int local_14;
  undefined8 local_10;
  
  uVar4 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || ((param_3 & 1) == 0)) {
    if (((param_1 & 4) == 0) || ((param_3 & 4) == 0)) {
      if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
        if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
          bVar5 = (param_1 & 0x10) != 0;
          local_10 = *param_2;
          if (local_10 == 0.0) {
            bVar5 = true;
          }
          else {
            fVar6 = (float10)FUN_0044a380(*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4),
                                          &local_14);
            local_14 = local_14 + -0x600;
            if (local_14 < -0x432) {
              bVar5 = true;
              *(undefined4 *)param_2 = 0;
              local_10 = 0.0;
              *(undefined4 *)((int)param_2 + 4) = 0;
            }
            else {
              local_10 = (double)(ulonglong)
                                 (SUB87((double)fVar6,0) & 0xfffffffffffff | 0x10000000000000);
              if (local_14 < -0x3fd) {
                local_14 = -0x3fd - local_14;
                do {
                  if ((((ulonglong)local_10 & 1) != 0) && (!bVar5)) {
                    bVar5 = true;
                  }
                  uVar4 = (uint)local_10 >> 1;
                  uVar1 = (ulonglong)local_10 & 0x100000000;
                  local_10._0_4_ = uVar4;
                  if (uVar1 != 0) {
                    local_10._0_4_ = uVar4 | 0x80000000;
                  }
                  local_14 = local_14 + -1;
                  local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
                } while (local_14 != 0);
              }
              if ((double)fVar6 < 0.0) {
                local_10 = -local_10;
              }
              *(uint *)param_2 = (uint)local_10;
              *(uint *)((int)param_2 + 4) = local_10._4_4_;
            }
          }
          if (bVar5) {
            FUN_0044aee0(0x10);
          }
          uVar4 = param_1 & 0x1d;
        }
      }
      else {
        FUN_0044aee0(8);
        uVar3 = DAT_004a503c;
        uVar2 = DAT_004a502c;
        uVar4 = param_3 & 0xc00;
        if (uVar4 < 0x401) {
          if (uVar4 == 0x400) {
            if (*param_2 <= 0.0) {
              local_10 = -(double)CONCAT44(DAT_004a502c,DAT_004a5028);
              *param_2 = local_10;
              uVar4 = param_1 & 0x1e;
            }
            else {
              *(undefined4 *)param_2 = DAT_004a5038;
              *(undefined4 *)((int)param_2 + 4) = uVar3;
              uVar4 = param_1 & 0x1e;
            }
            goto LAB_0044ad0b;
          }
          if (uVar4 == 0) {
            if (*param_2 <= 0.0) {
              local_10 = -(double)CONCAT44(DAT_004a502c,DAT_004a5028);
              *param_2 = local_10;
              uVar4 = param_1 & 0x1e;
            }
            else {
              *(undefined4 *)param_2 = DAT_004a5028;
              *(undefined4 *)((int)param_2 + 4) = uVar2;
              uVar4 = param_1 & 0x1e;
            }
            goto LAB_0044ad0b;
          }
        }
        else if (uVar4 == 0x800) {
          if (0.0 < *param_2) {
            *(undefined4 *)param_2 = DAT_004a5028;
            *(undefined4 *)((int)param_2 + 4) = uVar2;
            uVar4 = param_1 & 0x1e;
            goto LAB_0044ad0b;
          }
          local_10 = -(double)CONCAT44(DAT_004a503c,DAT_004a5038);
          *param_2 = local_10;
        }
        else if (uVar4 == 0xc00) {
          if (*param_2 <= 0.0) {
            local_10 = -(double)CONCAT44(DAT_004a503c,DAT_004a5038);
            *param_2 = local_10;
            uVar4 = param_1 & 0x1e;
          }
          else {
            *(undefined4 *)param_2 = DAT_004a5038;
            *(undefined4 *)((int)param_2 + 4) = uVar3;
            uVar4 = param_1 & 0x1e;
          }
          goto LAB_0044ad0b;
        }
        uVar4 = param_1 & 0x1e;
      }
    }
    else {
      FUN_0044aee0(4);
      uVar4 = param_1 & 0x1b;
    }
  }
  else {
    FUN_0044aee0(1);
    uVar4 = param_1 & 0x17;
  }
LAB_0044ad0b:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_0044aee0(0x20);
    uVar4 = uVar4 & 0xffffffef;
  }
  return uVar4 == 0;
}


