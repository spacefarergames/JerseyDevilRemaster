/*
 * Function: FUN_00431e40
 * Entry:    00431e40
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_00431e40(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 == DAT_004d13c4) {
    return CONCAT22((short)((uint)DAT_004d13c4 >> 0x10),0x7f7f);
  }
  local_10 = *(int *)(param_1 + 0xcc) - DAT_004d22ec;
  local_c = *(int *)(param_1 + 0xd0) - DAT_004d22f0;
  local_8 = *(int *)(param_1 + 0xd4) - DAT_004d22f4;
  uVar2 = FUN_004071e0(&local_10);
  if (0xfff < (int)uVar2) {
    return uVar2 & 0xffff0000;
  }
  local_8 = *(int *)(param_1 + 0xd4) - DAT_004d22e8;
  local_10 = *(int *)(param_1 + 0xcc) - DAT_004d22e0;
  iVar6 = DAT_004d22ec - DAT_004d22e0;
  iVar5 = DAT_004d22f4 - DAT_004d22e8;
  iVar3 = FUN_00407270(local_10,local_8);
  iVar5 = FUN_00407270(iVar6,iVar5);
  iVar3 = iVar3 - iVar5;
  if (0x800 < iVar3) {
    iVar3 = iVar3 + -0x1000;
  }
  if (iVar3 < -0x800) {
    iVar3 = iVar3 + 0x1000;
  }
  iVar5 = 0x7f - ((int)(uVar2 << 7) >> 0xc);
  uVar4 = (undefined2)((uint)iVar5 >> 0x10);
  cVar1 = (char)iVar5;
  if (-1 < iVar3) {
    if (0x400 < iVar3) {
      iVar3 = 0x800 - iVar3;
    }
    return CONCAT22(uVar4,CONCAT11(cVar1 - (char)(iVar3 * iVar5 >> 10),cVar1));
  }
  if (iVar3 < -0x400) {
    iVar3 = -0x800 - iVar3;
  }
  return CONCAT22(uVar4,(short)CONCAT31((int3)iVar5,(char)(iVar3 * iVar5 >> 10) + cVar1));
}


