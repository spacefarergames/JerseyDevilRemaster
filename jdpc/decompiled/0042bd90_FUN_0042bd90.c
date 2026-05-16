/*
 * Function: FUN_0042bd90
 * Entry:    0042bd90
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042bd90(char *param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = -1;
  pcVar5 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  sVar3 = ~(ushort)iVar4 - 3;
  param_1[sVar3] = '\0';
  iVar4 = FUN_00405650(param_1,0,0);
  if (iVar4 < 0) {
    iVar2 = FUN_004055c0(s__s___s_004a22b8,
                         (&PTR_s_File_Not_Found_004537f0)[*(byte *)(DAT_0053ea20 + 0x1006e)],param_1
                        );
    while (iVar2 != 2) {
      iVar4 = FUN_00405650(param_1,0,0);
      if (-1 < iVar4) goto LAB_0042be3c;
      iVar2 = FUN_004055c0(s__s___s_004a22b8,
                           (&PTR_s_File_Not_Found_004537f0)[*(byte *)(DAT_0053ea20 + 0x1006e)],
                           param_1);
    }
    if (iVar4 < 0) {
      DAT_004537e8 = 0;
      return -1;
    }
  }
LAB_0042be3c:
  FUN_00405790(iVar4,0,0);
  param_1[sVar3] = ';';
  return iVar4;
}


