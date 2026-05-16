/*
 * Function: FUN_004130c0
 * Entry:    004130c0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004130c0(ushort *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  DAT_0066b648 = &DAT_0064e180;
  _DAT_0064e184 = &DAT_0064e18c;
  DAT_0064e194 = &DAT_0064e180;
  uVar3 = (uint)*param_1;
  iVar2 = 1;
  if (*param_1 != 0) {
    iVar2 = uVar3 + 1;
    puVar1 = &DAT_0064e1a0;
    do {
      puVar1[-5] = param_1;
      puVar1[-4] = puVar1 + -2;
      *puVar1 = puVar1 + -5;
      param_1 = (ushort *)((int)param_1 + param_2);
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + 3;
    } while (uVar3 != 0);
  }
  iVar2 = iVar2 * 0xc;
  _DAT_0064e188 = 0;
  *(undefined4 *)(&DAT_0064e180 + iVar2) = 0;
  *(undefined4 *)(&DAT_0064e184 + iVar2) = 0;
  *(undefined4 *)(&DAT_0064e188 + iVar2) = 0;
  return;
}


