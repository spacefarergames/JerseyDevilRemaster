/*
 * Function: FUN_00428e30
 * Entry:    00428e30
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00428e30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_4;
  
  iVar2 = DAT_004a6160;
  iVar1 = DAT_004a6160 * 2;
  DAT_004a61b0 = DAT_004a61b4;
  local_4 = 0;
  DAT_004a6144 = DAT_004a6148;
  DAT_004a617c = DAT_004a612c;
  DAT_004a6168 = DAT_004a613c;
  uVar4 = 1;
  iVar5 = DAT_004a6190;
  if (DAT_004a6190 < DAT_004a61ac) {
    do {
      iVar3 = FUN_00428fe0(uVar4);
      if (iVar3 == 0) {
        if (local_4 != 0) break;
      }
      else {
        local_4 = 1;
      }
      iVar5 = iVar5 + 1;
      DAT_004a6168 = DAT_004a6168 + DAT_004a6134 * 4;
      DAT_004a61b0 = DAT_004a61b0 + DAT_004a6134;
      DAT_004a6144 = DAT_004a6144 + DAT_004a617c;
      DAT_004a617c = DAT_004a617c + iVar1;
      uVar4 = 0;
    } while (iVar5 < DAT_004a61ac);
  }
  DAT_004a617c = DAT_004a612c + iVar2 * -2;
  DAT_004a6144 = DAT_004a6148 - DAT_004a617c;
  DAT_004a6168 = DAT_004a613c + DAT_004a6134 * -4;
  DAT_004a61b0 = DAT_004a61b4 - DAT_004a6134;
  uVar4 = 1;
  iVar1 = DAT_004a6190;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return local_4;
    }
    iVar5 = FUN_00428fe0(uVar4);
    if (iVar5 == 0) {
      if (local_4 != 0) {
        return local_4;
      }
    }
    else {
      local_4 = 1;
    }
    DAT_004a6168 = DAT_004a6168 + DAT_004a6134 * -4;
    DAT_004a61b0 = DAT_004a61b0 - DAT_004a6134;
    DAT_004a617c = DAT_004a617c + iVar2 * -2;
    DAT_004a6144 = DAT_004a6144 - DAT_004a617c;
    uVar4 = 0;
  } while( true );
}


