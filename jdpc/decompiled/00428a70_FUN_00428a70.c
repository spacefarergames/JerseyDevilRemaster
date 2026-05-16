/*
 * Function: FUN_00428a70
 * Entry:    00428a70
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00428a70(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  DAT_004a6170 = 1 << ((byte)param_3 & 0x1f);
  bVar2 = (byte)(8 - param_3);
  DAT_004a6140 = 1 << (bVar2 & 0x1f);
  DAT_004a6160 = 1 << (bVar2 * '\x02' & 0x1f);
  DAT_004a6134 = DAT_004a6170 * DAT_004a6170;
  DAT_004a61ac = DAT_004a6170;
  FUN_00429450(param_4,DAT_004a6170);
  DAT_004a614c = 0;
  if (0 < param_1) {
    do {
      if (8 - param_3 == 3) {
        DAT_004a6140 = 2;
        DAT_004a6160 = 4;
        iVar1 = param_2 + DAT_004a614c * 2;
        uVar5 = (uint)*(byte *)(DAT_004a614c + iVar1);
        iVar1 = DAT_004a614c + iVar1;
        uVar8 = (uint)*(byte *)(iVar1 + 1);
        uVar3 = (uint)*(byte *)(iVar1 + 2);
        DAT_004a6190 = (int)uVar5 >> 3;
        iVar1 = (int)uVar5 >> 2;
        DAT_004a61c4 = (int)uVar8 >> 3;
        iVar4 = (int)uVar8 >> 2;
        DAT_004a6178 = (int)uVar3 >> 3;
        iVar6 = (int)uVar3 >> 2;
        DAT_004a6144 = iVar1 + DAT_004a6190 * -2 + -1;
        DAT_004a6154 = iVar4 + DAT_004a61c4 * -2 + -1;
        iVar7 = iVar6 + DAT_004a6178 * -2 + -1;
        DAT_004a6148 = DAT_004a6144 * DAT_004a6144 + DAT_004a6154 * DAT_004a6154 + iVar7 * iVar7;
        DAT_004a612c = (DAT_004a6190 * 2 - iVar1) * 4 + 4;
        DAT_004a6164 = (DAT_004a61c4 * 2 - iVar4) * 4 + 4;
        DAT_004a61bc = (DAT_004a6178 * 2 - iVar6) * 4 + 4;
      }
      else {
        iVar1 = param_2 + DAT_004a614c * 2;
        pbVar9 = (byte *)(DAT_004a614c + iVar1);
        DAT_004a6190 = (uint)(*(byte *)(DAT_004a614c + iVar1) >> (bVar2 & 0x1f));
        DAT_004a61c4 = (uint)(pbVar9[1] >> (bVar2 & 0x1f));
        DAT_004a6178 = (uint)(pbVar9[2] >> (bVar2 & 0x1f));
        iVar1 = DAT_004a6140 / 2;
        DAT_004a6144 = ((uint)*pbVar9 - DAT_004a6140 * DAT_004a6190) - iVar1;
        DAT_004a6154 = ((uint)pbVar9[1] - DAT_004a6140 * DAT_004a61c4) - iVar1;
        iVar1 = ((uint)pbVar9[2] - DAT_004a6140 * DAT_004a6178) - iVar1;
        DAT_004a6148 = DAT_004a6144 * DAT_004a6144 + DAT_004a6154 * DAT_004a6154 + iVar1 * iVar1;
        DAT_004a612c = ((DAT_004a6190 + 1) * DAT_004a6160 - DAT_004a6140 * (uint)*pbVar9) * 2;
        DAT_004a6164 = ((DAT_004a61c4 + 1) * DAT_004a6160 - DAT_004a6140 * (uint)pbVar9[1]) * 2;
        DAT_004a61bc = ((DAT_004a6178 + 1) * DAT_004a6160 - DAT_004a6140 * (uint)pbVar9[2]) * 2;
      }
      iVar1 = DAT_004a6178 + DAT_004a6170 * DAT_004a61c4 + DAT_004a6134 * DAT_004a6190;
      DAT_004a613c = param_4 + iVar1 * 4;
      DAT_004a61b4 = param_5 + iVar1 * 2;
      FUN_00428e30();
      DAT_004a614c = DAT_004a614c + 1;
    } while (DAT_004a614c < param_1);
  }
  return;
}


