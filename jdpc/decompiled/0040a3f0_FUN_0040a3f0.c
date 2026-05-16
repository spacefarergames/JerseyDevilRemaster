/*
 * Function: FUN_0040a3f0
 * Entry:    0040a3f0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040a3f0(int param_1,int param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int local_4;
  
  iVar4 = 0;
  bVar2 = *param_4;
  bVar3 = bVar2;
  pbVar6 = param_4;
  while (bVar3 != 0) {
    if ((*(char *)(&DAT_008135c0 + bVar3) == '\0') || (iVar4 = __ftol(), bVar3 == 0x20)) {
      iVar4 = __ftol();
    }
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar1;
  }
  local_4 = param_1 - iVar4 / 2;
  do {
    if (bVar2 == 0) {
      return 0;
    }
    uVar5 = (uint)*param_4;
    if (*(char *)(&DAT_008135c0 + uVar5) == '\0') {
LAB_0040a5cd:
      local_4 = __ftol();
    }
    else {
      DAT_0066d600 = (float)param_3;
      _DAT_0066d5f0 = (float)local_4;
      DAT_0066d5ec = uVar5 + 0x6d1;
      _DAT_0066d5fc = (float)(int)*(char *)((int)&DAT_008135c0 + uVar5 * 4 + 2) * DAT_0045bbd4;
      _DAT_0066d5f8 = (float)(int)*(char *)((int)&DAT_008135c0 + uVar5 * 4 + 1) * DAT_0045bbd4;
      _DAT_0066d5f4 = (float)param_2;
      DAT_0066d5e4 = 1;
      if (((DAT_004a09a4 == 1) || (DAT_004a09a4 == 0)) && (0.899 < DAT_0066d630)) {
        DAT_0066d5e4 = 0;
      }
      DAT_0066d604 = DAT_0066d600;
      DAT_0066d608 = DAT_0066d600;
      DAT_0066d60c = DAT_0066d600;
      (*DAT_004a5ea4)();
      local_4 = __ftol();
      if (uVar5 == 0x20) goto LAB_0040a5cd;
    }
    bVar2 = param_4[1];
    param_4 = param_4 + 1;
  } while( true );
}


