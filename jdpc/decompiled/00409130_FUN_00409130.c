/*
 * Function: FUN_00409130
 * Entry:    00409130
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409130(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined1 local_50 [80];
  
  iVar3 = 2;
  puVar5 = &DAT_008135c0;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pcVar6 = &DAT_008135c9;
  puVar4 = &DAT_00553219;
  do {
    FUN_00444690(local_50,s____data_font_03i_tim_0045bd70,iVar3);
    iVar1 = FUN_00425900(local_50);
    if (iVar1 == 0) goto switchD_004091c8_default;
    *(undefined2 *)(puVar4 + 9) = 1;
    *puVar4 = 1;
    FUN_00424d40(iVar1,iVar3 + 0x6d1,2);
    FUN_004108b0(iVar1 + 4,local_6c);
    FUN_00443fe0(iVar1);
    pcVar6[-1] = '\x01';
    pcVar6[1] = local_64._2_1_;
    switch(local_6c[0]) {
    case 0:
      *pcVar6 = (char)local_64 << 2;
      break;
    case 1:
      *pcVar6 = (char)local_64 << 1;
      break;
    case 2:
      cVar2 = (char)local_64;
      goto LAB_00409202;
    case 3:
      cVar2 = (char)((ulonglong)((longlong)(int)(local_64 & 0xffff) * 0x2aaaaaab) >> 0x20);
LAB_00409202:
      *pcVar6 = cVar2;
    }
switchD_004091c8_default:
    puVar4 = puVar4 + 0x30;
    iVar3 = iVar3 + 1;
    pcVar6 = pcVar6 + 4;
    if (0x556188 < (int)puVar4) {
      _DAT_004a5e54 = 1;
      return;
    }
  } while( true );
}


