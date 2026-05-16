/*
 * Function: FUN_00446fa0
 * Entry:    00446fa0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined1 * FUN_00446fa0(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_004a62a4;
  if (DAT_004a62a8 == '\0') {
    piVar1 = (int *)FUN_0044d040(*param_1,param_1[1]);
    FUN_0044cfa0(param_2 + (uint)(*piVar1 == 0x2d) + (uint)(0 < param_3),param_3 + 1,piVar1);
  }
  else {
    FUN_00447360(param_2 + (*DAT_004a62a4 == 0x2d),0 < param_3);
  }
  puVar2 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  if (0 < param_3) {
    *puVar2 = puVar2[1];
    puVar2 = puVar2 + 1;
    *puVar2 = DAT_004a4f58;
  }
  puVar4 = (undefined4 *)(puVar2 + param_3 + (uint)(DAT_004a62a8 == '\0'));
  *puVar4 = 0x30302b65;
  *(undefined2 *)(puVar4 + 1) = 0x30;
  if (param_4 != 0) {
    *(undefined1 *)puVar4 = 0x45;
  }
  if (*(char *)piVar1[3] != '0') {
    iVar3 = piVar1[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      *(undefined1 *)((int)puVar4 + 1) = 0x2d;
    }
    if (99 < iVar3) {
      *(char *)((int)puVar4 + 2) =
           *(char *)((int)puVar4 + 2) +
           (((char)(iVar3 / 100) + (char)(iVar3 >> 0x1f)) -
           (char)((longlong)iVar3 * 0x51eb851f >> 0x3f));
      iVar3 = iVar3 % 100;
    }
    if (9 < iVar3) {
      *(char *)((int)puVar4 + 3) =
           *(char *)((int)puVar4 + 3) +
           (((char)(iVar3 / 10) + (char)(iVar3 >> 0x1f)) -
           (char)((longlong)iVar3 * 0x66666667 >> 0x3f));
      iVar3 = iVar3 % 10;
    }
    *(char *)(puVar4 + 1) = *(char *)(puVar4 + 1) + (char)iVar3;
  }
  return param_2;
}


