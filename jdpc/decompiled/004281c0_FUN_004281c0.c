/*
 * Function: FUN_004281c0
 * Entry:    004281c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004281c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_38;
  undefined1 local_37;
  int local_36;
  undefined2 local_32;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  int local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined4 local_1a;
  int local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  iVar3 = 0x100;
  local_38 = 0x42;
  local_16 = (int)(param_4 * 0x100 + (param_4 * 0x100 >> 0x1f & 0xffU)) >> 8;
  local_37 = 0x4d;
  local_36 = local_16 + 0x436;
  local_32 = 0;
  local_22 = (int)(param_4 + (param_4 >> 0x1f & 0xffU)) >> 8;
  local_30 = 0;
  local_2e = 0x436;
  local_2a = 0x28;
  local_26 = 0x100;
  local_1e = 1;
  local_1c = 8;
  local_1a = 0;
  local_12 = 0;
  local_e = 0;
  local_a = 0x100;
  local_6 = 0x100;
  piVar2 = (int *)FUN_004056f0(param_1,&DAT_0045bd6c);
  if (piVar2 != (int *)0x0) {
    FUN_00444dd0(&local_38,0x36,1,piVar2);
    puVar4 = (undefined1 *)(param_2 + 1);
    do {
      iVar1 = piVar2[1];
      piVar2[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        FUN_00445b50(puVar4[1],piVar2);
      }
      else {
        *(undefined1 *)*piVar2 = puVar4[1];
        *piVar2 = *piVar2 + 1;
      }
      iVar1 = piVar2[1];
      piVar2[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        FUN_00445b50(*puVar4,piVar2);
      }
      else {
        *(undefined1 *)*piVar2 = *puVar4;
        *piVar2 = *piVar2 + 1;
      }
      iVar1 = piVar2[1];
      piVar2[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        FUN_00445b50(puVar4[-1],piVar2);
      }
      else {
        *(undefined1 *)*piVar2 = puVar4[-1];
        *piVar2 = *piVar2 + 1;
      }
      iVar1 = piVar2[1];
      piVar2[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        FUN_00445b50(0,piVar2);
      }
      else {
        *(undefined1 *)*piVar2 = 0;
        *piVar2 = *piVar2 + 1;
      }
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_00444dd0(param_3,1,param_4,piVar2);
    FUN_00444c10(piVar2);
  }
  return;
}


