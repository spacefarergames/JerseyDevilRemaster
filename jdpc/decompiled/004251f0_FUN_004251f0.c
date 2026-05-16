/*
 * Function: FUN_004251f0
 * Entry:    004251f0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004251f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  
  iVar2 = param_1 * 0x30;
  (&DAT_0053ea90)[iVar2] = 0;
  iVar1 = (&DAT_0053ea80)[param_1 * 0xc];
  while (iVar1 = iVar1 >> 1, 0 < iVar1) {
    (&DAT_0053ea90)[iVar2] = (&DAT_0053ea90)[iVar2] + '\x01';
  }
  (&DAT_0053ea8f)[iVar2] = 0;
  iVar1 = (&DAT_0053ea84)[param_1 * 0xc];
  iVar5 = DAT_0045f800;
  while (iVar1 = iVar1 >> 1, DAT_0045f800 = iVar5, 0 < iVar1) {
    (&DAT_0053ea8f)[iVar2] = (&DAT_0053ea8f)[iVar2] + '\x01';
    iVar5 = DAT_0045f800;
  }
  iVar1 = (&DAT_0053ea84)[param_1 * 0xc] * (&DAT_0053ea80)[param_1 * 0xc];
  if (((iVar1 < 0x1000) && (0 < iVar1)) && ((&DAT_0053ea92)[param_1 * 0x18] == 4)) {
    (&DAT_0053ea8a)[iVar2] = 1;
    if (iVar5 == 8) {
      piVar6 = *(int **)(&DAT_0053eaac + iVar2);
      iVar5 = 1;
      iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
      piVar4 = piVar6;
      if (1 < iVar1) {
        do {
          piVar4 = piVar4 + 1;
          if (*piVar6 != *piVar4) {
            (&DAT_0053ea8a)[iVar2] = 0;
            break;
          }
          piVar6 = piVar6 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      if ((&DAT_0053ea8a)[iVar2] != '\0') {
        (&DAT_0053ea8b)[iVar2] = **(undefined1 **)(&DAT_0053eaac + iVar2);
        return;
      }
    }
    else {
      puVar3 = *(uint **)(&DAT_0053eaac + iVar2);
      iVar5 = 1;
      puVar7 = puVar3;
      if (1 < iVar1) {
        do {
          puVar7 = (uint *)((int)puVar7 + 3);
          if (((*puVar7 ^ *puVar3) & 0xffffff) != 0) {
            (&DAT_0053ea8a)[iVar2] = 0;
            break;
          }
          puVar3 = (uint *)((int)puVar3 + 3);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      if ((&DAT_0053ea8a)[iVar2] != '\0') {
        *(undefined2 *)(&DAT_0053ea8c + iVar2) = **(undefined2 **)(&DAT_0053eaac + iVar2);
        (&DAT_0053ea8e)[iVar2] = *(undefined1 *)(*(undefined2 **)(&DAT_0053eaac + iVar2) + 1);
        return;
      }
    }
  }
  else {
    (&DAT_0053ea8a)[iVar2] = 0;
  }
  return;
}


