/*
 * Function: FUN_0044fbe0
 * Entry:    0044fbe0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044fbe0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  HANDLE hFile;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint in_stack_00001008;
  int in_stack_0000100c;
  
  FUN_00444fa0();
  iVar6 = 0;
  if ((in_stack_00001008 < DAT_00a14e20) &&
     ((*(byte *)((&DAT_00a14d20)[(int)in_stack_00001008 >> 5] + 4 + (in_stack_00001008 & 0x1f) * 8)
      & 1) != 0)) {
    iVar1 = FUN_00444030(in_stack_00001008,0,1);
    if ((iVar1 != -1) && (iVar2 = FUN_00444030(in_stack_00001008,0,2), iVar2 != -1)) {
      iVar2 = in_stack_0000100c - iVar2;
      if (iVar2 < 1) {
        if (iVar2 < 0) {
          FUN_00444030(in_stack_00001008,in_stack_0000100c,0);
          hFile = (HANDLE)FUN_00447610(in_stack_00001008);
          BVar4 = SetEndOfFile(hFile);
          iVar6 = (BVar4 != 0) - 1;
          if (iVar6 == -1) {
            _DAT_004a6220 = 0xd;
            DAT_004a6224 = GetLastError();
          }
        }
        FUN_00444030(in_stack_00001008,iVar1,0);
        return iVar6;
      }
      puVar7 = (undefined4 *)register0x00000010;
      for (iVar5 = 0x400; puVar7 = puVar7 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
      }
      uVar3 = FUN_00450170(in_stack_00001008,0x8000);
      while( true ) {
        iVar5 = 0x1000;
        if (iVar2 < 0x1000) {
          iVar5 = iVar2;
        }
        iVar5 = FUN_00448910(in_stack_00001008,&stack0x00000004,iVar5);
        if (iVar5 == -1) break;
        iVar2 = iVar2 - iVar5;
        if (iVar2 < 1) {
LAB_0044fcc1:
          FUN_00450170(in_stack_00001008,uVar3);
          FUN_00444030(in_stack_00001008,iVar1,0);
          return iVar6;
        }
      }
      if (DAT_004a6224 == 5) {
        _DAT_004a6220 = 0xd;
      }
      iVar6 = -1;
      goto LAB_0044fcc1;
    }
  }
  else {
    _DAT_004a6220 = 9;
  }
  return -1;
}


