/*
 * Function: FUN_0042f920
 * Entry:    0042f920
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042f920(int *param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  short sVar6;
  undefined4 *puVar7;
  
  iVar5 = *param_1;
  puVar4 = (ushort *)(param_1 + 1);
  puVar7 = &DAT_004e1ac0;
  for (iVar3 = 0x3c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  sVar6 = 0;
  DAT_004e1bb0 = iVar5;
  DAT_004e1bb4 = puVar4;
  if (0 < iVar5) {
    do {
      uVar1 = *puVar4;
      if (0x3b < uVar1) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if ((&DAT_004e1ac0)[uVar1] == 0) {
        (&DAT_004e1ac0)[uVar1] = puVar4;
        iVar5 = DAT_004e1bb0;
      }
      puVar4 = puVar4 + 0x22;
      sVar6 = sVar6 + 1;
    } while (sVar6 < iVar5);
  }
  sVar6 = 0;
  if (0 < iVar5) {
    piVar2 = param_1 + 9;
    do {
      piVar2[-1] = piVar2[-1] + (int)param_1;
      *piVar2 = *piVar2 + (int)param_1;
      piVar2 = piVar2 + 0x11;
      sVar6 = sVar6 + 1;
    } while (sVar6 < DAT_004e1bb0);
  }
  return;
}


