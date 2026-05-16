/*
 * Function: FUN_00421b10
 * Entry:    00421b10
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00421b10(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (DAT_004a607c != 0) {
    iVar4 = 1;
    if (0 < DAT_0055dfa0) {
      piVar6 = &DAT_0055dfa4;
      do {
        puVar1 = (undefined4 *)(&DAT_0055dd00)[*piVar6];
        if ((puVar1 != (undefined4 *)0x0) &&
           (iVar3 = ((*(char *)(puVar1 + 9) * DAT_0053e870 + -0x319c) * 0x28) / 0x7f, -4000 < iVar3)
           ) {
          iVar2 = puVar1[8];
          if (iVar2 == 0) {
            (**(code **)(*(int *)*puVar1 + 0x3c))((int *)*puVar1,iVar3);
            piVar5 = (int *)*puVar1;
            iVar3 = *piVar5;
          }
          else {
            (**(code **)(*(int *)puVar1[1] + 0x3c))((int *)puVar1[1],iVar3);
            piVar5 = (int *)puVar1[1];
            iVar3 = *piVar5;
          }
          (**(code **)(iVar3 + 0x30))(piVar5,0,0,iVar2 != 0);
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 <= DAT_0055dfa0);
    }
    DAT_0055dfa0 = 0;
  }
  return;
}


