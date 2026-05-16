/*
 * Function: FUN_0044ded0
 * Entry:    0044ded0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0044ded0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  
  if (((DAT_004a6248 != (int *)0x0) ||
      (((DAT_004a6250 == 0 || (iVar2 = FUN_0044fda0(), iVar2 == 0)) && (DAT_004a6248 != (int *)0x0))
      )) && (param_1 != (char *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar6 = (char *)*DAT_004a6248;
    pcVar8 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar3 - 1;
    piVar7 = DAT_004a6248;
    if (pcVar6 != (char *)0x0) {
      do {
        uVar5 = 0xffffffff;
        pcVar8 = pcVar6;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (((uVar4 < ~uVar5 - 1) && (pcVar6[uVar4] == '=')) &&
           (iVar2 = FUN_0044fd60(pcVar6,param_1,uVar4), iVar2 == 0)) {
          return ~uVar3 + *piVar7;
        }
        pcVar6 = (char *)piVar7[1];
        piVar7 = piVar7 + 1;
        if (pcVar6 == (char *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


