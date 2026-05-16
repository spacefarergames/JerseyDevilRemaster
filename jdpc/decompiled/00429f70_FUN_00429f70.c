/*
 * Function: FUN_00429f70
 * Entry:    00429f70
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined1 FUN_00429f70(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    if (param_1[1] != 0) break;
    bVar1 = (&DAT_004a0a2d)[-*param_1];
    bVar2 = (char)-*param_1 + 5;
    param_1 = (int *)param_1[(((uint)(byte)((*param_2 & bVar1) >> (bVar2 & 0x1f)) << 1 |
                              (uint)(byte)((param_2[1] & bVar1) >> (bVar2 & 0x1f))) << 1 |
                             (uint)(byte)((param_2[2] & bVar1) >> (bVar2 & 0x1f))) + 8];
  }
  return (char)param_1[2];
}


