/*
 * Function: FUN_0041dcf0
 * Entry:    0041dcf0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041dcf0(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 local_400 [1024];
  
  puVar3 = local_400;
  iVar4 = 0x100;
  puVar1 = (undefined1 *)(param_2 + 1);
  do {
    puVar2 = puVar1 + 4;
    *puVar3 = puVar1[1];
    puVar2[(int)(local_400 + (-4 - param_2))] = *puVar1;
    puVar2[(int)(local_400 + (-3 - param_2))] = puVar1[-1];
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + -1;
    puVar1 = puVar2;
  } while (iVar4 != 0);
  (**(code **)(*DAT_004a604c + 0x14))(DAT_004a604c,4,local_400,param_1,0);
  return;
}


