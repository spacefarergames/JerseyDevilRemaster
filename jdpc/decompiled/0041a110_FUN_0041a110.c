/*
 * Function: FUN_0041a110
 * Entry:    0041a110
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0041a110(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  FUN_0041a230();
  DAT_004a6068 = (undefined4 *)FUN_00443ea0(0x28);
  if (DAT_004a6068 == (undefined4 *)0x0) {
    return 0;
  }
  puVar4 = DAT_004a6068;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *DAT_004a6068 = 0x28;
  DAT_004a6068[1] = param_2;
  DAT_004a6068[2] = param_3;
  *(undefined2 *)(DAT_004a6068 + 3) = 1;
  *(short *)((int)DAT_004a6068 + 0xe) = (short)param_4;
  iVar2 = param_4 >> 3;
  DAT_004a6068[4] = 0;
  DAT_004a6068[5] = 0;
  DAT_004a6068[6] = 0;
  DAT_004a6068[7] = 0;
  DAT_004a6068[8] = 0;
  DAT_004a6068[9] = 0;
  DAT_004a606c = FUN_00443ea0((param_2 + 3U & 0xfffffffc) * param_3 * iVar2);
  if (DAT_004a606c == 0) {
    FUN_0041a230();
    return 0;
  }
  iVar1 = param_3 * param_2;
  DAT_0045f7f8 = param_2;
  DAT_0045f7fc = param_3;
  DAT_0045f800 = param_4;
  DAT_0045f804 = iVar2;
  DAT_0045f808 = iVar1;
  DAT_0055ed74 = DAT_004a606c;
  if (0 < param_3) {
    piVar3 = &DAT_0055ed80;
    do {
      iVar1 = iVar1 - param_2;
      *piVar3 = iVar1;
      piVar3 = piVar3 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  DAT_0045f80c = -param_2;
  return 1;
}


