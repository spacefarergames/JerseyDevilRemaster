/*
 * Function: FUN_00427050
 * Entry:    00427050
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00427050(char *param_1,ushort *param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = param_2;
  iVar5 = 0x8000;
  do {
    if ((uint)(byte)((char)(*param_2 >> 5) << 3) + (uint)(byte)((byte)(*param_2 >> 10) << 3) +
        (uint)(byte)((char)*param_2 << 3) < 3) {
      *param_2 = 0;
    }
    param_2 = param_2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_2 = (ushort *)param_1;
  iVar5 = FUN_004056f0(param_1,&DAT_0045bd6c);
  if (iVar5 == 0) {
    FUN_00405550(s_FAILED_to_open_output_file____s_004a0ab8,param_1);
    param_2 = (ushort *)_strstr(param_1,&DAT_0045bbe8);
    if (param_2 != (ushort *)0x0) {
      param_2 = (ushort *)((int)param_2 + 7);
      iVar5 = FUN_004056f0(param_2,&DAT_0045bd6c);
      FUN_00405550(s_trying__s_0045bbdc,param_2);
      if (iVar5 == 0) {
        FUN_00405550(s_FAILED_to_open_output_file____s_004a0ab8,param_2);
      }
    }
  }
  FUN_00444c10(iVar5);
  if (DAT_004a09d8 == 0) {
    FUN_00429470(puVar1,&DAT_004e1c20,0xfe);
  }
  else if (DAT_004a09d8 == 1) {
    FUN_0042a030();
  }
  else {
    FUN_00429a90(puVar1,&DAT_004e1c20,0xfe);
  }
  iVar5 = 0x2fd;
  do {
    (&DAT_004e1c20)[iVar5] = *(undefined1 *)(iVar5 + 0x4e1c1d);
    iVar5 = iVar5 + -1;
  } while (2 < iVar5);
  puVar2 = (undefined4 *)FUN_00443ea0(0x50000);
  FUN_00427370(&DAT_004e1c20,DAT_004a09f0,DAT_004a09f4);
  FUN_004273d0(&DAT_004e1c20,0,0,DAT_004a09f8,DAT_004a09fc);
  FUN_00426a20(&DAT_004e1c20,0xff,0,DAT_004a09e0,DAT_004a09e4,DAT_004a09e8,DAT_004a09ec);
  FUN_00427410(DAT_004a09cc,DAT_004a09d0);
  FUN_00428d60(0xfe,1,&DAT_004e1c20,5,&DAT_004e3960,puVar1);
  FUN_00427410(8,DAT_004a09d0);
  puVar3 = (undefined4 *)FUN_00428920(0,&DAT_004e1c20);
  puVar4 = puVar3;
  puVar6 = puVar2;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00443fe0(puVar3);
  puVar3 = (undefined4 *)
           FUN_00428350(0,&DAT_004e1c20,0,0x3ff00000,0,0x3ff00000,0x9999999a,0x3fe99999,3);
  puVar4 = puVar3;
  puVar6 = puVar2 + 0x4000;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00443fe0(puVar3);
  puVar3 = (undefined4 *)
           FUN_00428350(0,&DAT_004e1c20,0,0x3ff00000,0x33333333,0x3fd33333,0,0x3ff00000,0);
  puVar4 = puVar3;
  puVar6 = puVar2 + 0x8000;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00443fe0(puVar3);
  puVar3 = (undefined4 *)FUN_00428350(0,&DAT_004e1c20,0,0x3ff00000,0,0xbff00000,0,0x3ff00000,0);
  puVar4 = puVar3;
  puVar6 = puVar2 + 0xc000;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00443fe0(puVar3);
  puVar3 = (undefined4 *)FUN_00428750(0,&DAT_004e1c20,0,0x3fe00000);
  puVar4 = puVar3;
  puVar6 = puVar2 + 0x10000;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00443fe0(puVar3);
  FUN_004281c0(param_2,&DAT_004e1c20,puVar2,0x50000);
  return;
}


