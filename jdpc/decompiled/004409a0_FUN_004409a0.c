/*
 * Function: FUN_004409a0
 * Entry:    004409a0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_004409a0(short param_1,undefined4 *param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = DAT_004cd970;
  if (DAT_004cd970 != (int *)0x0) {
    while ((short)piVar6[6] != param_1) {
      piVar6 = (int *)*piVar6;
      if (piVar6 == (int *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    puVar3 = (undefined4 *)FUN_00440710(DAT_004cd998,0x1a8,DAT_004cdfc0 * 0x1a8);
    if (puVar3 != (undefined4 *)0x0) {
      iVar5 = 0x6a;
      puVar4 = puVar3;
      do {
        *puVar4 = *(undefined4 *)(((int)piVar6 - (int)puVar3) + (int)puVar4);
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *puVar3 = 0;
      DAT_004d18fc = FUN_00440810(DAT_004d18fc,puVar3);
      puVar3[0x2a] = puVar3 + 0x2d;
      if (param_2 != (undefined4 *)0x0) {
        puVar3[0x33] = *param_2;
        puVar3[0x34] = param_2[1];
        puVar3[0x35] = param_2[2];
      }
      if (param_3 != (undefined2 *)0x0) {
        *(undefined2 *)(puVar3 + 0x31) = *param_3;
        *(undefined2 *)((int)puVar3 + 0xc6) = param_3[1];
        *(undefined2 *)(puVar3 + 0x32) = param_3[2];
      }
      if (DAT_004d237c != 0) {
        iVar2 = *(int *)(DAT_004d237c + 0x10);
        iVar5 = DAT_004d237c;
        while (iVar1 = iVar2, iVar1 != 0) {
          iVar5 = iVar1;
          iVar2 = *(int *)(iVar1 + 0x10);
        }
        *(undefined4 **)(iVar5 + 0x10) = puVar3;
        puVar3[4] = 0;
      }
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}


