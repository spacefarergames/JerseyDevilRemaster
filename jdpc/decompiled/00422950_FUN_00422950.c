/*
 * Function: FUN_00422950
 * Entry:    00422950
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00422950(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  
  puVar4 = PTR_DAT_0045f764;
  if (DAT_004a60f0 != 0) {
    pbVar5 = &DAT_005579a1;
    iVar6 = 0;
    do {
      pbVar1 = pbVar5 + 1;
      bVar3 = *pbVar5;
      pbVar2 = pbVar5 + -1;
      pbVar5 = pbVar5 + 4;
      (&DAT_004e3860)[iVar6] =
           puVar4[(bVar3 & 0xfff8 | (*pbVar1 & 0xfff8) << 5) << 2 | (uint)(*pbVar2 >> 3)];
      iVar6 = iVar6 + 1;
    } while ((int)pbVar5 < 0x557da1);
    return;
  }
  iVar6 = 0;
  do {
    (&DAT_004e3860)[iVar6] = (char)iVar6;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x100);
  return;
}


