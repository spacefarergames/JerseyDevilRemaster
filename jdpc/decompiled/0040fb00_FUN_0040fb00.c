/*
 * Function: FUN_0040fb00
 * Entry:    0040fb00
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0040fb00(int param_1)

{
  undefined4 *puVar1;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_20 [20];
  int local_c;
  int local_8;
  int local_4;
  
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x10)) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x60); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (((*(ushort *)(puVar1 + 2) & 0x8000) == 0) && ((*(ushort *)(puVar1 + 2) & 0x40) != 0)) {
        DAT_004d2352._1_1_ = DAT_004d2352._1_1_ | 1;
        local_30 = 0;
        local_2c = 0;
        local_28 = 1000;
        FUN_0040f700(puVar1[4],local_20);
        DAT_004d22e0 = local_c;
        DAT_004d22e4 = local_8;
        DAT_004d22e8 = local_4;
        FUN_00407b00(local_20,&local_30,&local_30);
        DAT_004d22ec = local_30 + DAT_004d22e0;
        DAT_004d22f0 = local_2c + DAT_004d22e4;
        DAT_004d22f4 = local_28 + DAT_004d22e8;
      }
    }
  }
  return 1;
}


