/*
 * Function: FUN_00433ed0
 * Entry:    00433ed0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433ed0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  
  if ((DAT_004d2388 == 0) && (iVar4 = FUN_0042ef20(param_1,param_1 + 0xcc,param_2), iVar4 != 0)) {
    for (puVar1 = *(undefined4 **)(iVar4 + 0x30); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (((*(short *)(param_1 + 0x18) == 0xdd) || (puVar1[1] == 0xdd)) &&
         ((*(byte *)(param_1 + 0xc) & 2) != 0)) {
LAB_0043415f:
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x100;
        return;
      }
      if (((int)*(short *)(param_1 + 0x18) == puVar1[1]) &&
         ((puVar1[2] == 0 || ((*(uint *)(param_1 + 0x14) & puVar1[2]) != 0)))) {
        iVar4 = FUN_00432f40(param_1,puVar1 + 3);
        if (iVar4 != 0) {
          FUN_00433830(param_1,puVar1 + 3);
          if ((puVar1[5] & 0x800) != 0) {
            FUN_00432360(puVar1[6],puVar1[7],puVar1[8]);
          }
          if ((puVar1[5] & 0x800000) != 0) {
            _DAT_004e1a10 = puVar1[6];
            _DAT_004e1a14 = puVar1[7];
            _DAT_004e1a18 = puVar1[8];
          }
          if ((puVar1[5] & 0x80000) != 0) {
            *(undefined4 *)(DAT_0053ea20 + 0x10004) = puVar1[6];
            DAT_004d2388 = 1;
          }
          if ((puVar1[5] & 0x1001000) != 0) {
            DAT_004d2328 = puVar1[6];
            DAT_004d232c = puVar1[7];
            DAT_004d2330 = puVar1[8];
            if ((puVar1[5] & 0x1000) == 0) {
              DAT_004d2352._0_1_ = (byte)DAT_004d2352 | 0x40;
            }
            else {
              DAT_004d2352._0_1_ = (byte)DAT_004d2352 | 1;
            }
          }
          if ((puVar1[5] & 0x4000) != 0) {
            DAT_004d2352._0_1_ = (byte)DAT_004d2352 & 0xbe;
          }
          if ((puVar1[5] & 0x200000) != 0) {
            FUN_004327d0(puVar1[6],0);
            *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0;
          }
          if ((puVar1[5] & 0x400000) != 0) {
            DAT_004e1a20 = puVar1[6];
          }
          if ((puVar1[5] & 0x100000) != 0) {
            DAT_004e1a30 = puVar1[6];
            DAT_004e1a34 = puVar1[7];
            DAT_004e1a38 = puVar1[8];
            if (DAT_004d13c4 == 0) {
              DAT_004e1a3c = 0;
            }
            else {
              DAT_004e1a3c = (int)*(short *)(DAT_004d13c4 + 0xc6);
            }
          }
          if ((puVar1[5] & 0x10000) != 0) goto LAB_0043415f;
          if ((puVar1[5] & 0x200) != 0) {
            FUN_004205c0(puVar1[6],0x7f7f,1,(int)DAT_004cd960);
          }
          if ((puVar1[5] & 0x2000) != 0) {
            puVar2 = *(undefined4 **)(param_1 + 0xdc);
            *(undefined2 *)(param_1 + 0x12e) = 0;
            for (; (puVar2 != (undefined4 *)0x0 && ((uint)*(ushort *)(puVar2 + 1) != puVar1[6]));
                puVar2 = (undefined4 *)*puVar2) {
            }
            *(undefined4 **)(param_1 + 0x130) = puVar2;
            if (puVar2 == (undefined4 *)0x0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
          }
          if ((*(byte *)(puVar1 + 5) & 0x40) != 0) {
            DAT_004d22e0 = puVar1[6];
            DAT_004d22e4 = puVar1[7];
            DAT_004d22e8 = puVar1[8];
            DAT_004d235c = DAT_004d22e0;
            DAT_004d2360 = DAT_004d22e4;
            DAT_004d2364 = DAT_004d22e8;
            sVar3 = FUN_00407270(DAT_004d22e0 - *(int *)(DAT_004d13c4 + 0xcc),
                                 DAT_004d22e8 - *(int *)(DAT_004d13c4 + 0xd4));
            DAT_004e1bc2 = sVar3 + 0x800;
          }
          if ((puVar1[5] & 0x8000) == 0) {
            return;
          }
        }
      }
    }
  }
  return;
}


