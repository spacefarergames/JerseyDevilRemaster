/*
 * Function: FUN_00446e50
 * Entry:    00446e50
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00446e50(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_0044c980((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_004a4f54 < 2) {
        uVar4 = (byte)PTR_DAT_004a4d48[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_00448760((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_004a4f58;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}


