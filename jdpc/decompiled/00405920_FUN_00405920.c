/*
 * Function: FUN_00405920
 * Entry:    00405920
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00405920(void)

{
  char cVar1;
  LSTATUS LVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  HKEY local_110;
  DWORD local_10c;
  DWORD local_108;
  char acStack_106 [3];
  undefined4 local_103;
  
  LVar2 = RegOpenKeyExA((HKEY)0x80000001,s_Software_Infogrames_Jersey_Devil_00453a00,0,0x20019,
                        &local_110);
  if (LVar2 == 0) {
    acStack_106[2] = DAT_004a5e44;
    puVar7 = &local_103;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    *(undefined1 *)((int)puVar7 + 2) = 0;
    local_108 = 1;
    local_10c = 0x104;
    LVar2 = RegQueryValueExA(local_110,s_installation_path_004539ec,(LPDWORD)0x0,&stack0xfffffef8,
                             (LPBYTE)(acStack_106 + 2),&local_10c);
    if (LVar2 == 0) {
      uVar4 = 0xffffffff;
      pcVar6 = acStack_106 + 2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (acStack_106[~uVar4] != '\\') {
        uVar4 = 0xffffffff;
        pcVar6 = &DAT_004539e8;
        do {
          pcVar9 = pcVar6;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar9;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar3 = -1;
        pcVar6 = acStack_106 + 2;
        do {
          pcVar8 = pcVar6;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar8 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar8;
        } while (cVar1 != '\0');
        pcVar6 = pcVar9 + -uVar4;
        pcVar9 = pcVar8 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_004539e4;
      do {
        pcVar9 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar3 = -1;
      pcVar6 = acStack_106 + 2;
      do {
        pcVar8 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      pcVar6 = pcVar9 + -uVar4;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_004447c0(acStack_106 + 2);
      RegCloseKey(local_110);
      return 1;
    }
    RegCloseKey(local_110);
  }
  return 0;
}


