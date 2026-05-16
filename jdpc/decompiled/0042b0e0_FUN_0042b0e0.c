/*
 * Function: FUN_0042b0e0
 * Entry:    0042b0e0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0042b0e0(int param_1)

{
  int iVar1;
  bool bVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  DAT_004a61a4 = FUN_00443ea0(param_1 * 4 + 4);
  if (DAT_004a61a4 == 0) {
    return 1;
  }
  DAT_004a6194 = (undefined4 *)FUN_00443ea0(iVar1 * 0x30);
  if (DAT_004a6194 == (undefined4 *)0x0) {
    return 1;
  }
  FUN_0042aaa0(0,0,0,0x1f,0x1f,0x1f,&local_28,&local_24,&local_20,&local_18,&local_1c,&param_1);
  FUN_0042ae60(local_28,local_24,local_20,local_18,local_1c,param_1,&local_14,&local_10,&local_c,
               &local_8,&local_4);
  DAT_004a6194[1] = local_14;
  *DAT_004a6194 = 1;
  DAT_004a6194[2] = local_10;
  DAT_004a6194[3] = local_c;
  DAT_004a6194[4] = local_8;
  DAT_004a6194[5] = local_4;
  DAT_004a6194[6] = local_28;
  DAT_004a6194[7] = local_24;
  DAT_004a6194[8] = local_20;
  DAT_004a6194[9] = local_18;
  DAT_004a6194[10] = local_1c;
  DAT_004a6194[0xb] = param_1;
  DAT_004a61b8 = 1;
  bVar2 = (((param_1 - local_28) - local_24) - local_20) + local_1c + local_18 != 0;
  if (bVar2) {
    *(undefined4 **)(DAT_004a61a4 + 4) = DAT_004a6194;
  }
  DAT_004a615c = (uint)bVar2;
  return 0;
}


