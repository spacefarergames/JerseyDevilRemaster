/*
 * Function: FUN_00426a20
 * Entry:    00426a20
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00426a20(double param_1,double param_2,double param_3)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  double *pdVar5;
  undefined1 *puVar6;
  int iStack00000004;
  undefined8 in_stack_00000000;
  undefined1 local_8 [4];
  
  FUN_00444fa0();
  if (0 < param_1._0_4_) {
    iStack00000004 = (int)((ulonglong)in_stack_00000000 >> 0x20);
    puVar6 = &stack0x00000020;
    pbVar4 = (byte *)(iStack00000004 + 2);
    iVar3 = param_1._0_4_;
    do {
      param_1 = (double)pbVar4[-2] * 0.00392156862745098;
      iStack00000004 = (int)((ulonglong)((double)pbVar4[-1] * 0.00392156862745098) >> 0x20);
      _local_8 = (double)*pbVar4 * 0.00392156862745098;
      FUN_00426e90(param_1,(double)pbVar4[-1] * 0.00392156862745098,_local_8,puVar6 + -8,puVar6,
                   puVar6 + 8);
      pbVar4 = pbVar4 + 3;
      puVar6 = puVar6 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (0 < param_1._0_4_) {
      param_2 = (double)param_1._4_4_;
      pdVar5 = (double *)&stack0x00000020;
      puVar6 = (undefined1 *)(iStack00000004 + 2);
      iVar3 = param_1._0_4_;
      do {
        dVar1 = pdVar5[-1] + param_2;
        pdVar5[-1] = dVar1;
        if (360.0 < dVar1) {
          pdVar5[-1] = dVar1 - 360.0;
        }
        dVar1 = pdVar5[1];
        pdVar5[1] = dVar1 * param_3;
        if (1.0 < dVar1 * param_3) {
          *(undefined4 *)(pdVar5 + 1) = 0;
          *(undefined4 *)((int)pdVar5 + 0xc) = 0x3ff00000;
        }
        dVar1 = *pdVar5;
        *pdVar5 = dVar1 * param_2;
        if (1.0 < dVar1 * param_2) {
          *(undefined4 *)pdVar5 = 0;
          *(undefined4 *)((int)pdVar5 + 4) = 0x3ff00000;
        }
        FUN_00426bd0(&param_1,&stack0x00000000,local_8,*(undefined4 *)(pdVar5 + -1),
                     *(undefined4 *)((int)pdVar5 + -4),*(undefined4 *)pdVar5,
                     *(undefined4 *)((int)pdVar5 + 4),*(undefined4 *)(pdVar5 + 1),
                     *(undefined4 *)((int)pdVar5 + 0xc));
        uVar2 = __ftol();
        puVar6[-2] = uVar2;
        uVar2 = __ftol();
        puVar6[-1] = uVar2;
        uVar2 = __ftol();
        *puVar6 = uVar2;
        pdVar5 = pdVar5 + 3;
        puVar6 = puVar6 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}


