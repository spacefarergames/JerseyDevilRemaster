/*
 * Function: FUN_0042f020
 * Entry:    0042f020
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042f020(int param_1,short *param_2,short *param_3,int param_4,uint param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = DAT_004d237c;
  if (DAT_004d237c == 0) {
    return 0;
  }
  do {
    if (((((param_5 & *(uint *)(iVar8 + 8)) != 0) && (*(short *)(iVar8 + 0x24) == 2)) &&
        (param_1 != iVar8)) &&
       (((*(int *)(param_1 + 0x58) != iVar8 && (*(int *)(param_1 + 0x54) != iVar8)) &&
        (FUN_00407070(iVar8 + 0x30,iVar8 + 0x38,(int *)(param_4 + 0x6c)),
        *(int *)(param_4 + 0x6c) != 0)))) {
      iVar7 = (int)*(short *)(iVar8 + 0x1c);
      psVar1 = (short *)(param_4 + 0x40);
      *(short *)(param_4 + 0x30) = 0x1000 - *(short *)(iVar8 + 0xc4);
      *(short *)(param_4 + 0x32) = 0x1000 - *(short *)(iVar8 + 0xc6);
      *(short *)(param_4 + 0x34) = 0x1000 - *(short *)(iVar8 + 200);
      *psVar1 = *param_2;
      *(short *)(param_4 + 0x42) = param_2[2];
      *(short *)(param_4 + 0x44) = param_2[4];
      *psVar1 = *psVar1 - *(short *)(iVar8 + 0xcc);
      *(short *)(param_4 + 0x42) = *(short *)(param_4 + 0x42) - *(short *)(iVar8 + 0xd0);
      *(short *)(param_4 + 0x44) = *(short *)(param_4 + 0x44) - *(short *)(iVar8 + 0xd4);
      FUN_00407400((short *)(param_4 + 0x30),param_4 + 0x10);
      FUN_004080b0(param_4 + 0x10,psVar1,param_4 + 0x38);
      *(undefined2 *)(param_4 + 0x70) = *(undefined2 *)(iVar8 + 0x30);
      *(undefined2 *)(param_4 + 0x72) = *(undefined2 *)(iVar8 + 0x32);
      *(undefined2 *)(param_4 + 0x74) = *(undefined2 *)(iVar8 + 0x34);
      *(undefined2 *)(param_4 + 0x78) = *(undefined2 *)(iVar8 + 0x38);
      *(undefined2 *)(param_4 + 0x7a) = *(undefined2 *)(iVar8 + 0x3a);
      sVar6 = *(short *)(iVar8 + 0x3c);
      *(short *)(param_4 + 0x7c) = sVar6;
      if (((*(short *)(param_4 + 0x70) - iVar7 <= (int)*(short *)(param_4 + 0x38)) &&
          ((int)*(short *)(param_4 + 0x38) <= iVar7 + *(short *)(param_4 + 0x78))) &&
         ((*(short *)(param_4 + 0x74) - iVar7 <= (int)*(short *)(param_4 + 0x3c) &&
          ((((int)*(short *)(param_4 + 0x3c) <= iVar7 + sVar6 &&
            (*(short *)(param_4 + 0x7a) < *(short *)(param_4 + 0x3a))) &&
           ((int)*(short *)(param_1 + 0x3a) + (int)*(short *)(param_4 + 0x3a) <=
            (int)*(short *)(param_4 + 0x72))))))) {
        *(int *)(param_4 + 0x6c) = (int)*(short *)(param_4 + 0x7a) - (int)*(short *)(param_4 + 0x3a)
        ;
        sVar6 = *(short *)(param_1 + 0xcc);
        sVar3 = *(short *)(iVar8 + 0xcc);
        *(undefined2 *)(param_4 + 0x5e) = 0;
        *(short *)(param_4 + 0x5c) = sVar6 - sVar3;
        *(short *)(param_4 + 0x60) = *(short *)(param_1 + 0xd4) - *(short *)(iVar8 + 0xd4);
        FUN_00407a60(param_4 + 0x10,(short *)(param_4 + 0x5c),(short *)(param_4 + 100));
        iVar4 = FUN_00407270((int)*(short *)(param_4 + 100),(int)*(short *)(param_4 + 0x68));
        psVar1 = (short *)(param_4 + 0x38);
        *psVar1 = *param_3;
        *(short *)(param_4 + 0x3a) = param_3[1];
        *(short *)(param_4 + 0x3c) = param_3[2];
        FUN_00407a60(param_4 + 0x10,psVar1,psVar1);
        iVar7 = iVar7 + 2;
        sVar6 = (short)iVar7;
        if (iVar4 < 0) {
          iVar5 = FUN_00407270(*(short *)(param_4 + 0x70) - iVar7,iVar7 + *(short *)(param_4 + 0x7c)
                              );
          if (-iVar4 < -iVar5) {
            *(short *)(param_4 + 0x3c) =
                 (sVar6 - *(short *)(param_4 + 0x68)) + *(short *)(param_4 + 0x7c);
          }
          else {
            iVar7 = FUN_00407270(*(short *)(param_4 + 0x70) - iVar7,
                                 *(short *)(param_4 + 0x74) - iVar7);
            if (-iVar4 < -iVar7) {
              *psVar1 = (*(short *)(param_4 + 0x70) - sVar6) - *(short *)(param_4 + 100);
            }
            else {
              *(short *)(param_4 + 0x3c) =
                   (*(short *)(param_4 + 0x74) - sVar6) - *(short *)(param_4 + 0x68);
            }
          }
        }
        else {
          iVar5 = FUN_00407270(iVar7 + *(short *)(param_4 + 0x78),iVar7 + *(short *)(param_4 + 0x7c)
                              );
          if (iVar4 < iVar5) {
            *(short *)(param_4 + 0x3c) =
                 (sVar6 - *(short *)(param_4 + 0x68)) + *(short *)(param_4 + 0x7c);
          }
          else {
            iVar7 = FUN_00407270(iVar7 + *(short *)(param_4 + 0x78),
                                 *(short *)(param_4 + 0x74) - iVar7);
            if (iVar4 < iVar7) {
              *psVar1 = (sVar6 - *(short *)(param_4 + 100)) + *(short *)(param_4 + 0x78);
            }
            else {
              *(short *)(param_4 + 0x3c) =
                   (*(short *)(param_4 + 0x74) - sVar6) - *(short *)(param_4 + 0x68);
            }
          }
        }
        FUN_004072e0(iVar8 + 0xc4,param_4 + 0x10);
        FUN_00407a60(param_4 + 0x10,psVar1,psVar1);
        *param_3 = *psVar1;
        param_3[1] = *(short *)(param_4 + 0x6c);
        param_3[2] = *(short *)(param_4 + 0x3c);
        return iVar8;
      }
    }
    piVar2 = (int *)(iVar8 + 0x10);
    iVar8 = *piVar2;
    if (*piVar2 == 0) {
      return 0;
    }
  } while( true );
}


