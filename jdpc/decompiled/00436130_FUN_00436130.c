/*
 * Function: FUN_00436130
 * Entry:    00436130
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00436130(int param_1,short *param_2,int param_3,uint param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  bool bVar13;
  int local_8;
  int local_4;
  
  iVar6 = param_3;
  *(undefined2 *)(param_3 + 0x38) = *(undefined2 *)(param_1 + 0x30);
  *(undefined2 *)(param_3 + 0x3a) = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)(param_3 + 0x3c) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_3 + 0x40) = *(undefined2 *)(param_1 + 0x38);
  *(undefined2 *)(param_3 + 0x42) = *(undefined2 *)(param_1 + 0x3a);
  *(undefined2 *)(param_3 + 0x44) = *(undefined2 *)(param_1 + 0x3c);
  bVar13 = DAT_004d237c == 0;
  *(int *)(param_3 + 0x30) = DAT_004d237c;
  if (bVar13) {
    return (undefined4 *)0x0;
  }
  do {
    iVar12 = *(int *)(iVar6 + 0x30);
    if (((((*(uint *)(iVar12 + 8) & param_4) != 0) && ((*(byte *)(iVar12 + 0x14) & 1) == 0)) &&
        (*(short *)(iVar12 + 0x20) == *(short *)(param_1 + 0x20))) &&
       (((*(short *)(iVar12 + 0x24) == 2 && (param_1 != iVar12)) && (*(int *)(iVar12 + 0x60) != 0)))
       ) {
      *(int *)(iVar6 + 0x198) = (int)*(short *)(iVar12 + 0x1c);
      *(short *)(iVar6 + 0x20) = 0x1000 - *(short *)(param_1 + 0xc4);
      *(short *)(iVar6 + 0x22) = 0x1000 - *(short *)(param_1 + 0xc6);
      *(short *)(iVar6 + 0x24) = 0x1000 - *(short *)(param_1 + 200);
      *(undefined2 *)(iVar6 + 0x28) = *(undefined2 *)(iVar12 + 0xcc);
      *(undefined2 *)(iVar6 + 0x2a) = *(undefined2 *)(iVar12 + 0xd0);
      *(undefined2 *)(iVar6 + 0x2c) = *(undefined2 *)(iVar12 + 0xd4);
      *(short *)(iVar6 + 0x28) = *(short *)(iVar6 + 0x28) - *param_2;
      *(short *)(iVar6 + 0x2a) = *(short *)(iVar6 + 0x2a) - param_2[2];
      *(short *)(iVar6 + 0x2c) = *(short *)(iVar6 + 0x2c) - param_2[4];
      FUN_004072e0((short *)(iVar6 + 0x20),iVar6);
      FUN_00407900(iVar6,*(int *)(iVar6 + 0x30) + 0xb4);
      piVar5 = *(int **)(*(int *)(iVar6 + 0x30) + 0x60);
      *(int **)(iVar6 + 0x34) = piVar5;
      iVar12 = *piVar5;
      while (iVar12 != 0) {
        piVar5 = (int *)**(undefined4 **)(iVar6 + 0x34);
        *(int **)(iVar6 + 0x34) = piVar5;
        iVar12 = *piVar5;
      }
      iVar12 = *(int *)(*(int *)(iVar6 + 0x34) + 0x10);
      for (sVar9 = 0; (iVar12 != 0 && (sVar9 < 0x14)); sVar9 = sVar9 + 1) {
        iVar10 = sVar9 * 0x10 + iVar6;
        *(undefined2 *)(iVar10 + 0x58) = *(undefined2 *)(*(int *)(iVar12 + 0x44) + 0x18);
        *(undefined4 *)(iVar10 + 0x60) = *(undefined4 *)(*(int *)(iVar12 + 0x44) + 0x1c);
        *(undefined2 *)(iVar10 + 0x5a) = *(undefined2 *)(iVar10 + 0x60);
        uVar2 = *(undefined2 *)(*(int *)(iVar12 + 0x44) + 0x20);
        *(int *)(iVar10 + 100) = iVar12;
        *(undefined2 *)(iVar10 + 0x5c) = uVar2;
        FUN_004072e0(*(int *)(iVar12 + 0x44) + 0x10,iVar12 + 4);
        if (1 < sVar9) {
          FUN_00408180(*(int *)(iVar10 + 0x54) + 4);
          sVar8 = *(short *)(iVar10 + 0x4c);
          sVar3 = *(short *)(iVar10 + 0x48);
          sVar4 = *(short *)(iVar10 + 0x4a);
          sVar11 = sVar9 + -2;
          local_8 = (int)sVar11;
          iVar10 = local_8 * 0x10 + 0x58 + iVar6;
          if (0 < sVar11) {
            do {
              FUN_004081f0(iVar10);
              FUN_00408250();
              FUN_00408220(iVar10);
              iVar10 = iVar10 + -0x10;
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          psVar7 = (short *)(sVar11 * 0x10 + 0x58 + iVar6);
          if (-1 < sVar11) {
            iVar10 = sVar11 + 1;
            do {
              *psVar7 = *psVar7 + sVar3;
              psVar7[1] = psVar7[1] + sVar4;
              psVar7[2] = psVar7[2] + sVar8;
              psVar7 = psVar7 + -8;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        iVar12 = *(int *)(iVar12 + 0x48);
      }
      FUN_00408180(*(int *)(sVar9 * 0x10 + 0x54 + iVar6) + 4);
      sVar8 = *(short *)(iVar6 + 0x2c);
      sVar3 = *(short *)(iVar6 + 0x28);
      sVar4 = *(short *)(iVar6 + 0x2a);
      sVar11 = sVar9 + -2;
      local_4 = (int)sVar11;
      iVar12 = local_4 * 0x10 + 0x58 + iVar6;
      if (0 < sVar11) {
        do {
          FUN_004081f0(iVar12);
          FUN_00408250();
          FUN_00408220(iVar12);
          iVar12 = iVar12 + -0x10;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      psVar7 = (short *)(sVar11 * 0x10 + 0x58 + iVar6);
      if (-1 < sVar11) {
        param_3 = sVar11 + 1;
        do {
          *psVar7 = *psVar7 + sVar3;
          psVar7[2] = psVar7[2] + sVar8;
          psVar7[1] = psVar7[1] + sVar4;
          psVar7 = psVar7 + -8;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      FUN_00408180(iVar6);
      iVar10 = (int)sVar11;
      iVar12 = iVar10 * 0x10 + 0x58 + iVar6;
      if (0 < sVar11) {
        do {
          FUN_004081f0(iVar12);
          FUN_00408250();
          FUN_00408220(iVar12);
          iVar12 = iVar12 + -0x10;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      sVar8 = 0;
      psVar7 = (short *)(iVar6 + 0x58);
      if (0 < sVar9) {
        iVar12 = *(int *)(iVar6 + 0x198);
        do {
          if (((((*(short *)(iVar6 + 0x3c) - iVar12 <= (int)psVar7[2]) &&
                ((int)psVar7[2] <= iVar12 + *(short *)(iVar6 + 0x44))) &&
               (*(short *)(iVar6 + 0x38) - iVar12 <= (int)*psVar7)) &&
              (((int)*psVar7 <= iVar12 + *(short *)(iVar6 + 0x40) &&
               ((int)psVar7[1] - *(int *)(psVar7 + 4) < (int)*(short *)(iVar6 + 0x3a))))) &&
             (*(short *)(iVar6 + 0x42) < psVar7[1])) {
            *(undefined4 *)(*(int *)(iVar6 + 0x30) + 0x130) = *(undefined4 *)(psVar7 + 6);
            puVar1 = (undefined2 *)(sVar9 * 0x10 + 0x38 + iVar6);
            *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar6 + 0x30);
            *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(puVar1 + 6);
            *(undefined2 *)(iVar6 + 0x50) = *puVar1;
            *(undefined2 *)(iVar6 + 0x52) = puVar1[1];
            *(undefined2 *)(iVar6 + 0x54) = puVar1[2];
            return (undefined4 *)(iVar6 + 0x48);
          }
          psVar7 = psVar7 + 8;
          sVar8 = sVar8 + 1;
        } while (sVar8 < sVar9);
      }
    }
    iVar12 = *(int *)(*(int *)(iVar6 + 0x30) + 0x10);
    *(int *)(iVar6 + 0x30) = iVar12;
    if (iVar12 == 0) {
      return (undefined4 *)0x0;
    }
  } while( true );
}


