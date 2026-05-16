/*
 * Function: FUN_00445270
 * Entry:    00445270
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445270(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _SYSTEMTIME local_cc;
  _SYSTEMTIME local_bc;
  _TIME_ZONE_INFORMATION local_ac;
  
  GetLocalTime(&local_bc);
  GetSystemTime(&local_cc);
  if (local_cc.wMinute == DAT_004a6282) {
    if (local_cc.wHour == DAT_004a6280) {
      if (local_cc.wDay == DAT_004a627e) {
        if (local_cc.wMonth == DAT_004a627a) {
          if (local_cc.wYear == DAT_004a6278) goto LAB_0044533f;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_ac);
  if (DVar1 == 0xffffffff) {
    DAT_004a6270 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (local_ac.DaylightDate.wMonth != 0)) && (local_ac.DaylightBias != 0)) {
    DAT_004a6270 = 1;
  }
  else {
    DAT_004a6270 = 0;
  }
  DAT_004a6278 = local_cc.wYear;
  DAT_004a627a = local_cc.wMonth;
  _DAT_004a627c = local_cc.wDayOfWeek;
  DAT_004a627e = local_cc.wDay;
  DAT_004a6280 = local_cc.wHour;
  DAT_004a6282 = local_cc.wMinute;
  _DAT_004a6284 = local_cc.wSecond;
  DAT_004a6284_2 = local_cc.wMilliseconds;
LAB_0044533f:
  uVar2 = FUN_0044a190(local_bc.wYear,local_bc.wMonth,local_bc.wDay,local_bc.wHour,local_bc.wMinute,
                       local_bc.wSecond,DAT_004a6270);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}


