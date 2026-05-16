/*
 * Function: FUN_0042b960
 * Entry:    0042b960
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b960(void)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_004a61e8 == 0) {
    FUN_0042b350();
  }
  if (DAT_004a6204 == 0) {
    _DAT_004e1c00 = 0;
    _DAT_004e1c04 = 0;
    _DAT_004e1c08 = 0;
    _DAT_004e1c0c = 0;
    iVar1 = FUN_0042b900();
    if (iVar1 == 0) {
      _DAT_004e1c00 = *(undefined4 *)PTR_s_NoVendorName_004a0bfc;
      _DAT_004e1c04 = *(uint *)(PTR_s_NoVendorName_004a0bfc + 4);
      _DAT_004e1c08 = *(undefined4 *)(PTR_s_NoVendorName_004a0bfc + 8);
      DAT_004a61f0 = FUN_0042b710();
      iVar1 = FUN_0042b6a0();
      if (iVar1 == 0) {
        iVar1 = FUN_0042b6e0();
        DAT_004e1c10 = 3;
        if (iVar1 == 0) {
          DAT_004e1c14 = 1;
        }
        else {
          DAT_004e1c14 = 0;
        }
      }
      else {
        iVar1 = FUN_0042b740();
        if (iVar1 == 0) {
          DAT_004e1c10 = 4;
          DAT_004e1c14 = 0xf;
        }
        else {
          _DAT_004e1c00 = *(undefined4 *)PTR_s_CyrixInstead_004a0c00;
          _DAT_004e1c04 = *(uint *)(PTR_s_CyrixInstead_004a0c00 + 4);
          _DAT_004e1c08 = *(undefined4 *)(PTR_s_CyrixInstead_004a0c00 + 8);
          FUN_0042b7b0();
        }
      }
    }
    else {
      DAT_004a61f8 = 1;
      DAT_004e1bf0 = 0;
      DAT_004e1bec = 0;
      DAT_004e1be8 = 0;
      DAT_004e1be4 = 0;
      FUN_0042b930(0);
      _DAT_004e1c00 = DAT_004e1be8;
      _DAT_004e1c04 = DAT_004e1bf0;
      _DAT_004e1c08 = DAT_004e1bec;
      if (0 < DAT_004e1be4) {
        DAT_004e1bf0 = 0;
        DAT_004e1bec = 0;
        DAT_004e1be8 = 0;
        DAT_004e1be4 = 0;
        FUN_0042b930(1);
        DAT_004e1c14 = DAT_004e1be4 >> 4 & 0xf;
        DAT_004e1c10 = DAT_004e1be4 >> 8 & 0xf;
        DAT_004a61f0 = DAT_004e1bf0 & 1;
        DAT_004a61f4 = DAT_004e1bf0 >> 0x17 & 1;
      }
    }
    if (DAT_004a61f0 != 0) {
      _DAT_004a61fc = FUN_004240f0();
    }
    if (4 < (int)DAT_004e1c10) {
      pcVar2 = _strstr(&DAT_004e1c00,PTR_s_CyrixInstead_004a0c00);
      if ((pcVar2 == (char *)0x0) || (_DAT_004a61ec = 0, 4 < (int)DAT_004e1c10)) {
        _DAT_004a61ec = 1;
      }
    }
    iVar1 = FUN_0042b740();
    if (iVar1 != 0) {
      if (DAT_004a0bf8 == 2) {
        DAT_004a6200 = FUN_0042b290();
        return;
      }
      DAT_004a6200 = FUN_0042b430();
      return;
    }
    DAT_004a6200 = FUN_0042b4e0();
  }
  return;
}


