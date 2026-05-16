/*
 * Function: FUN_00421960
 * Entry:    00421960
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00421960(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_100 [256];
  
  if (DAT_004a607c != 0) {
    FUN_004013b0(&DAT_0055df20);
    DAT_004a084c = 0;
    FUN_00444690(local_100,s____track_Track_d_xa_004a090c,param_1);
    DAT_004a0848 = FUN_00405650(local_100,0x8000);
    if ((DAT_004a0848 == -1) &&
       (DAT_004a0848 = FUN_00405650(s____track_Track3_xa_004a08f8,0x8000), DAT_004a0848 == -1)) {
      return;
    }
    uVar1 = FUN_004459f0(DAT_004a0848,DAT_004a0848,1);
    FUN_00401310(&DAT_0055df20,uVar1);
    (**(code **)(*DAT_0055df8c + 0x3c))(DAT_0055df8c,(DAT_0053e874 + -100) * 100);
    DAT_004a084c = param_1;
  }
  return;
}


