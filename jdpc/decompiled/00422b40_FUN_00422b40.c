/*
 * Function: FUN_00422b40
 * Entry:    00422b40
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422b40(void)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  double *pdVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  double local_20;
  double local_18;
  double local_10;
  
  iVar3 = 0;
  if (0 < DAT_00557980) {
    puVar6 = &DAT_00556188;
    pbVar4 = &DAT_005579a1;
    do {
      local_18 = (double)pbVar4[-1] * 0.00392156862745098;
      local_10 = (double)*pbVar4 * 0.00392156862745098;
      local_20 = (double)pbVar4[1] * 0.00392156862745098;
      FUN_00426e90(local_18,local_10,local_20,puVar6 + -2,puVar6,puVar6 + 2);
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 4;
      puVar6 = puVar6 + 6;
    } while (iVar3 < DAT_00557980);
  }
  iVar3 = 0;
  if (0 < DAT_00557980) {
    puVar7 = &DAT_005579a1;
    pdVar5 = (double *)&DAT_00556188;
    do {
      dVar1 = _DAT_0053e8a8 + pdVar5[-1];
      pdVar5[-1] = dVar1;
      if (360.0 < dVar1) {
        pdVar5[-1] = dVar1 - 360.0;
      }
      dVar1 = _DAT_0053e8b8 * pdVar5[1];
      pdVar5[1] = dVar1;
      if (1.0 < dVar1) {
        *(undefined4 *)(pdVar5 + 1) = 0;
        *(undefined4 *)((int)pdVar5 + 0xc) = 0x3ff00000;
      }
      dVar1 = _DAT_0053e8b0 * *pdVar5;
      *pdVar5 = dVar1;
      if (1.0 < dVar1) {
        *(undefined4 *)pdVar5 = 0;
        *(undefined4 *)((int)pdVar5 + 4) = 0x3ff00000;
      }
      FUN_00426bd0(&local_18,&local_10,&local_20,*(undefined4 *)(pdVar5 + -1),
                   *(undefined4 *)((int)pdVar5 + -4),*(undefined4 *)pdVar5,
                   *(undefined4 *)((int)pdVar5 + 4),*(undefined4 *)(pdVar5 + 1),
                   *(undefined4 *)((int)pdVar5 + 0xc));
      uVar2 = __ftol();
      puVar7[-1] = uVar2;
      uVar2 = __ftol();
      *puVar7 = uVar2;
      uVar2 = __ftol();
      puVar7[1] = uVar2;
      iVar3 = iVar3 + 1;
      pdVar5 = pdVar5 + 3;
      puVar7 = puVar7 + 4;
    } while (iVar3 < DAT_00557980);
  }
  return;
}


