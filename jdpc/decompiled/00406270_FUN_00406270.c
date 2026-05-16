/*
 * Function: FUN_00406270
 * Entry:    00406270
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00406270(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  FUN_004240f0(0);
  FUN_0041f3d0();
  iVar5 = DAT_0053ea20;
  pbVar2 = &DAT_00453a5c;
  pbVar6 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_004062b2:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004062b7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_004062b2;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004062b7:
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_0053ea20 + 0x10070) = DAT_00453a50;
    *(undefined4 *)(iVar5 + 0x10074) = DAT_00453a54;
    *(undefined **)(iVar5 + 0x10078) = PTR_DAT_00453a58;
  }
  pcVar4 = s__OPTIONS_EXE_1_00453a40;
  pbVar6 = param_1;
  do {
    bVar1 = *pcVar4;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_0040630a:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_0040630f;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar4[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_0040630a;
    pcVar4 = pcVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0040630f:
  if (iVar5 == 0) {
    FUN_0042dcb0(0);
    iVar5 = FUN_0042bff0(0,DAT_0053ea20 + 0x200000);
    if (iVar5 != 0) {
      DAT_004537e8 = 0;
      return;
    }
    FUN_0042f920(DAT_004cd990);
    FUN_00444860(1);
    FUN_004401e0(DAT_004d18fc);
    DAT_004cd960 = DAT_004cd960 + 1;
    DAT_004cd968 = 0;
    DAT_004cdfc4 = 0;
    DAT_004cd99c = 1;
    DAT_004d2380 = 0;
    FUN_00441de0();
    FUN_00406140();
    DAT_004537e8 = 4;
  }
  pbVar2 = &DAT_00453a34;
  pbVar6 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_004063cd:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004063d2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_004063cd;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_004063d2:
  if (iVar5 == 0) {
    DAT_004537e8 = 0xb;
  }
  pcVar4 = s__CREDITS_EXE_1_00453a24;
  do {
    bVar1 = *pcVar4;
    bVar7 = bVar1 < *param_1;
    if (bVar1 != *param_1) {
LAB_0040640b:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00406410;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar4[1];
    bVar7 = bVar1 < param_1[1];
    if (bVar1 != param_1[1]) goto LAB_0040640b;
    pcVar4 = pcVar4 + 2;
    param_1 = param_1 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00406410:
  if (iVar5 == 0) {
    DAT_004537e8 = 9;
  }
  return;
}


