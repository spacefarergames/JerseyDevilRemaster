/*
 * Function: FUN_004315d0
 * Entry:    004315d0
 * Warning:  Decompiled pseudocode, not original source.
 */


ushort * FUN_004315d0(int *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  short sVar5;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (-1 < param_2) {
    puVar4 = (ushort *)(&DAT_004e1ac0)[param_2];
    if (puVar4 != (ushort *)0x0) {
      do {
        if ((((iVar2 <= *(int *)(puVar4 + 10)) && (*(int *)(puVar4 + 0xc) < iVar2)) &&
            (*(int *)(puVar4 + 6) <= iVar1)) &&
           (((iVar1 < (int)((uint)puVar4[4] + *(int *)(puVar4 + 6)) &&
             (*(int *)(puVar4 + 8) <= iVar3)) &&
            (iVar3 < (int)((uint)puVar4[5] + *(int *)(puVar4 + 8)))))) {
          return puVar4;
        }
        puVar4 = puVar4 + 0x22;
      } while ((uint)*puVar4 == (int)param_2);
    }
  }
  sVar5 = 0;
  puVar4 = DAT_004e1bb4;
  if (0 < DAT_004e1bb0) {
    do {
      if (((iVar2 <= *(int *)(puVar4 + 10)) && (*(int *)(puVar4 + 0xc) < iVar2)) &&
         ((*(int *)(puVar4 + 6) <= iVar1 &&
          (((iVar1 < (int)((uint)puVar4[4] + *(int *)(puVar4 + 6)) &&
            (*(int *)(puVar4 + 8) <= iVar3)) &&
           (iVar3 < (int)((uint)puVar4[5] + *(int *)(puVar4 + 8)))))))) {
        return puVar4;
      }
      puVar4 = puVar4 + 0x22;
      sVar5 = sVar5 + 1;
    } while (sVar5 < DAT_004e1bb0);
  }
  return (ushort *)0x0;
}


