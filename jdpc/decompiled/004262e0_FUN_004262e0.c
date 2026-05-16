/*
 * Function: FUN_004262e0
 * Entry:    004262e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004262e0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char local_100 [256];
  
  puVar6 = &DAT_00503a60;
  for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_00426390();
  uVar4 = 0xffffffff;
  pcVar2 = (char *)&DAT_0053e8e0;
  do {
    pcVar7 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar7 + -uVar4;
  pcVar7 = local_100;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar2 = _strstr(local_100,&DAT_0045f7a0);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = _strstr(local_100,&DAT_0045f79c);
  }
  pcVar2[1] = 'b';
  pcVar2[2] = 'm';
  pcVar2[3] = 'p';
  pcVar2 = _strstr(local_100,&DAT_004a09a0);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  FUN_00427050(local_100,&DAT_00503a60);
  return;
}


