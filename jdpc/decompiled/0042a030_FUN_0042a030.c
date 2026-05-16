/*
 * Function: FUN_0042a030
 * Entry:    0042a030
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042a030(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_300 [768];
  
  iVar6 = 0;
  DAT_004a61a4 = 0;
  DAT_004a6194 = 0;
  iVar2 = 0;
  puVar4 = param_1;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *(uint *)(PTR_DAT_004a0a34 + iVar2) = (uint)uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x20000);
  iVar2 = FUN_0042b0e0(param_3);
  if (iVar2 == 0) {
    FUN_00405550(&DAT_00453278);
    while ((DAT_004a61b8 < param_3 && (iVar2 = FUN_0042a170(), iVar2 != 0))) {
      FUN_0042a190(iVar2);
      FUN_00405550(&DAT_004a0bc8);
    }
    FUN_00405550(&DAT_00453278);
    FUN_0042b070(local_300);
    iVar2 = DAT_004a61b8;
    if (0 < DAT_004a61b8) {
      puVar5 = local_300 + 1;
      puVar3 = (undefined1 *)(param_2 + 2);
      do {
        iVar6 = iVar6 + 1;
        puVar3[-2] = puVar5[-1];
        puVar3[-1] = *puVar5;
        *puVar3 = puVar3[(int)(local_300 + -param_2)];
        puVar5 = puVar5 + 3;
        puVar3 = puVar3 + 3;
      } while (iVar6 < DAT_004a61b8);
    }
    FUN_00443fe0(DAT_004a61a4);
    FUN_00443fe0(DAT_004a6194);
    FUN_00428a70(DAT_004a61b8,local_300,5,&DAT_004e3960,param_1);
  }
  return iVar2;
}


