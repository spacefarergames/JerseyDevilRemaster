/*
 * Function: FUN_0041d430
 * Entry:    0041d430
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041d430(char *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  
  piVar3 = (int *)FUN_004056f0(param_1,&DAT_0045bbec);
  if (piVar3 != (int *)0x0) {
    pcVar4 = _strstr(param_1,(char *)&DAT_0045f780);
    if ((pcVar4 == (char *)0x0) && (pcVar4 = _strstr(param_1,&DAT_0045f778), pcVar4 == (char *)0x0))
    {
      return;
    }
    FUN_00444440(piVar3,0x36,0);
    iVar5 = 0x100;
    puVar6 = (undefined1 *)(param_2 + 2);
    do {
      iVar1 = piVar3[1];
      piVar3[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        uVar2 = FUN_004453a0(piVar3);
      }
      else {
        uVar2 = *(undefined1 *)*piVar3;
        *piVar3 = (int)((undefined1 *)*piVar3 + 1);
      }
      puVar6[-2] = uVar2;
      iVar1 = piVar3[1];
      piVar3[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        uVar2 = FUN_004453a0(piVar3);
      }
      else {
        uVar2 = *(undefined1 *)*piVar3;
        *piVar3 = (int)((undefined1 *)*piVar3 + 1);
      }
      puVar6[-1] = uVar2;
      iVar1 = piVar3[1];
      piVar3[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        uVar2 = FUN_004453a0(piVar3);
      }
      else {
        uVar2 = *(undefined1 *)*piVar3;
        *piVar3 = (int)((undefined1 *)*piVar3 + 1);
      }
      *puVar6 = uVar2;
      puVar6[1] = 0xff;
      iVar1 = piVar3[1];
      piVar3[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        FUN_004453a0(piVar3);
      }
      else {
        *piVar3 = *piVar3 + 1;
      }
      puVar6 = puVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_00444c10(piVar3);
  }
  return;
}


