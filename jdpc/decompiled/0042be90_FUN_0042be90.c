/*
 * Function: FUN_0042be90
 * Entry:    0042be90
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0042be90(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = DAT_004e1bd8;
  iVar2 = FUN_00405790(param_1,0,1);
  iVar5 = (int)(DAT_004e1bd8 + ((int)DAT_004e1bd8 >> 0x1f & 0xfffU)) >> 0xc;
  do {
    if (iVar5 < 1) {
      uVar4 = (int)DAT_004e1bd8 >> 0x1f;
      iVar5 = ((DAT_004e1bd8 ^ uVar4) - uVar4 & 0xfff ^ uVar4) - uVar4;
      if (iVar5 != 0) {
        iVar5 = FUN_004057b0(param_1,param_2,iVar5);
        DAT_004e1bd8 = DAT_004e1bd8 - iVar5;
        DAT_004e1bc8 = DAT_004e1bc8 + iVar5;
        FUN_0042bd70();
      }
      uVar4 = (int)uVar1 >> 0x1f;
      iVar5 = ((uVar1 ^ uVar4) - uVar4 & 0x7ff ^ uVar4) - uVar4;
      if (iVar5 != 0) {
        FUN_00405790(param_1,0x800 - iVar5,1);
        DAT_004e1bc8 = DAT_004e1bc8 + (0x800 - iVar5);
      }
      return 0;
    }
    iVar3 = FUN_004057b0(param_1,param_2,0x1000);
    if (iVar3 == -1) {
      iVar6 = 0x14;
      do {
        if (iVar3 != -1) break;
        FUN_00405790(param_1,iVar2,0);
        iVar3 = FUN_004057b0(param_1,param_2,0x1000);
        iVar6 = iVar6 + -1;
      } while (0 < iVar6);
    }
    if (iVar3 != 0x1000) {
      FUN_0042bfe0(param_1);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    DAT_004e1bd8 = DAT_004e1bd8 - 0x1000;
    DAT_004e1bc8 = DAT_004e1bc8 + 0x1000;
    param_2 = param_2 + 0x1000;
    iVar2 = iVar2 + 0x1000;
    FUN_0042bd70();
    iVar5 = iVar5 + -1;
  } while( true );
}


