/*
 * Function: FUN_0042b7b0
 * Entry:    0042b7b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042b7b0(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint local_4;
  
  iVar4 = 0xff;
  uVar3 = FUN_0042b790(0xffffffc2);
  local_4 = uVar3 & 0xff;
  FUN_0042b770(0xffffffc2,uVar3 ^ 4);
  FUN_0042b790(0xffffffc0);
  cVar1 = FUN_0042b790(0xffffffc2);
  bVar5 = cVar1 != (char)uVar3;
  FUN_0042b770(0xffffffc2,local_4);
  cVar1 = FUN_0042b790(0xffffffc3);
  FUN_0042b770(0xffffffc3,CONCAT31((int3)((uint)extraout_EDX >> 8),cVar1) ^ 0x80);
  FUN_0042b790(0xffffffc0);
  cVar2 = FUN_0042b790(0xffffffc3);
  bVar6 = cVar2 == cVar1;
  FUN_0042b770(0xffffffc3,cVar1);
  if (bVar5) {
    if (bVar6) {
      if (!bVar5) goto LAB_0042b85f;
LAB_0042b876:
      if (bVar6) {
        iVar4 = 0xfe;
        goto LAB_0042b88e;
      }
      if (bVar5) goto LAB_0042b88e;
      goto LAB_0042b885;
    }
  }
  else {
LAB_0042b85f:
    if (bVar6) {
      if (bVar5) goto LAB_0042b876;
LAB_0042b885:
      if (bVar6) {
        iVar4 = 0xfd;
      }
      goto LAB_0042b88e;
    }
  }
  cVar1 = FUN_0042b790(0xfffffffe);
  iVar4 = (int)cVar1;
LAB_0042b88e:
  if ((0x2f < iVar4) && (iVar4 < 0xfd)) {
    if (iVar4 < 0x50) {
      DAT_004e1c10 = 5;
      DAT_004e1c14 = 0xf;
      return;
    }
    DAT_004e1c10 = 6;
    DAT_004e1c14 = 0xf;
    DAT_004a61f4 = 1;
    return;
  }
  DAT_004e1c10 = 4;
  DAT_004e1c14 = 0xf;
  return;
}


