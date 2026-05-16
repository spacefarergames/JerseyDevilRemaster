/*
 * Function: FUN_0040a140
 * Entry:    0040a140
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0040a140(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puStack00000008;
  int iStack0000000c;
  uint uStack00000010;
  UINT in_stack_00000018;
  
  FUN_00444fa0();
  iVar6 = 0;
  iVar7 = 0;
  uStack00000010 = 0;
  DAT_004e1bdc = 1;
  iStack0000000c = 0;
  iVar2 = FUN_004056f0(s____data_credit_txt_0045be48,&DAT_0045be5c);
  if (iVar2 != 0) {
    iVar3 = FUN_00444f20(&stack0x00000080,0x50,iVar2);
    if (iVar3 != 0) {
      puVar8 = &stack0x00000080;
      do {
        puVar8 = puVar8 + 0x50;
        iVar6 = iVar6 + 1;
        iVar3 = FUN_00444f20(puVar8,0x50,iVar2);
      } while (iVar3 != 0);
    }
    FUN_00444c10(iVar2);
  }
  iVar3 = 0x1e0;
  FUN_004253a0();
  uVar4 = FUN_00425900(s____data_TITLEBACK_TIM_0045bd9c);
  FUN_00424d40(uVar4,0x6ce,4);
  FUN_00443fe0(uVar4);
  FUN_00444690(&stack0x00000030,s____data_TITLE_d_TIM_0045bd88,DAT_0053e848);
  iVar2 = FUN_00425900(&stack0x00000030);
  if (iVar2 != 0) {
    FUN_00424d40(iVar2,0x6cf,4);
    FUN_00443fe0(iVar2);
    DAT_0045bbd4 = 0x3f800000;
    if (iVar6 != 0) {
      puStack00000008 = &stack0x00000080;
      while (FUN_00440cc0(), (~DAT_004d1392 & 8) == 0) {
        if ((DAT_004537e8 == 0) || (DAT_004537e8 == 0x13)) {
          *(undefined4 *)(DAT_0053ea20 + 0x10004) = 3;
          goto LAB_0040a3ba;
        }
        iVar2 = PeekMessageA((LPMSG)&stack0x00000014,(HWND)0x0,0,0,1);
        while (iVar2 != 0) {
          if (in_stack_00000018 == 0x12) {
            DAT_004537e8 = 0;
          }
          TranslateMessage((MSG *)&stack0x00000014);
          DispatchMessageA((MSG *)&stack0x00000014);
          iVar2 = PeekMessageA((LPMSG)&stack0x00000014,(HWND)0x0,0,0,1);
        }
        (*DAT_004a5ea8)();
        FUN_0040e1c0();
        iVar2 = iVar3 + -2;
        if (iVar3 + -2 < -0x23) {
          iVar7 = iVar7 + 1;
          puStack00000008 = puStack00000008 + 0x50;
          iVar2 = iVar3 + 0x20;
          iStack0000000c = iVar7;
        }
        iVar3 = iVar2;
        iVar2 = iVar7;
        iVar1 = iVar3;
        puVar8 = puStack00000008;
        if (iVar7 == iVar6) goto LAB_0040a3ba;
        for (; (iVar2 < iVar6 && (iVar7 = iStack0000000c, iVar1 < 0x1e0)); iVar1 = iVar1 + 0x23) {
          FUN_0040a3f0(0x140,iVar1,0xfffffe70,puVar8);
          iVar2 = iVar2 + 1;
          puVar8 = puVar8 + 0x50;
        }
        do {
          DVar5 = GetTickCount();
          if (DVar5 < uStack00000010) break;
        } while (DVar5 - uStack00000010 < 0x21);
        InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
        UpdateWindow(DAT_004a610c);
        uStack00000010 = DVar5;
      }
      *(undefined4 *)(DAT_0053ea20 + 0x10004) = 3;
    }
LAB_0040a3ba:
    *(undefined4 *)(DAT_0053ea20 + 0x10004) = 3;
    DAT_004d2388 = 1;
    DAT_004e1bdc = 1;
  }
  return;
}


