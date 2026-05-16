/*
 * Function: FUN_004112e0
 * Entry:    004112e0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004112e0(uint param_1,byte param_2,byte param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  double local_10;
  double local_8;
  
  local_8 = (double)(byte)(&DAT_004e3760)[(byte)(&DAT_00503960)[param_1 & 0xf8]] *
            0.00392156862745098;
  local_10 = (double)(byte)(&DAT_004e3760)[(byte)(&DAT_00503960)[param_2 & 0xf8]] *
             0.00392156862745098;
  local_18 = (double)(byte)(&DAT_004e3760)[(byte)(&DAT_00503960)[param_3 & 0xf8]] *
             0.00392156862745098;
  FUN_00426e90(local_8,local_10,local_18,&local_28,&local_20,&local_30);
  local_28 = local_28 + _DAT_0053e8a8;
  if (360.0 < local_28) {
    local_28 = local_28 - 360.0;
  }
  local_30 = local_30 * _DAT_0053e8b8;
  if (1.0 < local_30) {
    local_30 = 1.0;
  }
  local_20 = local_20 * _DAT_0053e8b0;
  if (1.0 < local_20) {
    local_20 = 1.0;
  }
  FUN_00426bd0(&local_8,&local_10,&local_18,(undefined4)local_28,local_28._4_4_,(undefined4)local_20
               ,local_20._4_4_,(undefined4)local_30,local_30._4_4_);
  if (DAT_004d13b6 != '\0') {
    local_8 = (double)(_DAT_0045c068 * (float)local_8);
    local_10 = (double)(_DAT_0045c068 * (float)local_10);
    local_18 = (double)(_DAT_0045c068 * (float)local_18);
  }
  (*DAT_008102a8)((float)local_8,(float)local_10,(float)local_18,0x3f800000);
  return;
}


