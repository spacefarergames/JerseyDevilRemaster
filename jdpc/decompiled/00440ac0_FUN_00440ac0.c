/*
 * Function: FUN_00440ac0
 * Entry:    00440ac0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00440ac0(void)

{
  int iVar1;
  
  FUN_00402c00(&DAT_004d1390,8,&DAT_004d13a0,8);
  iVar1 = FUN_00402bf0();
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_0041f3d0(0);
  DAT_004a6840 = 1;
  DAT_004a6850 = 1;
  DAT_004a6841 = 0x40;
  DAT_004a6851 = 0x40;
  DAT_004a6842 = 0;
  DAT_004a6852 = 0;
  DAT_004a6843 = 0;
  DAT_004a6853 = 0;
  DAT_004a6844 = 0;
  DAT_004a6854 = 0;
  DAT_004a6845 = 0;
  DAT_004a6855 = 0;
  DAT_004a6846 = 0;
  DAT_004a6856 = 0;
  DAT_004a6847 = 0;
  DAT_004a6857 = 0;
  FUN_0041f3d0(&DAT_004a6850,8,&DAT_004a6840,8);
  *(undefined2 *)(DAT_0053ea20 + 0x10008) = 3;
  *(undefined2 *)(DAT_0053ea20 + 0x1000a) = 0;
  DAT_004d13ca = 0;
  DAT_004d18ea = 0;
  return;
}


