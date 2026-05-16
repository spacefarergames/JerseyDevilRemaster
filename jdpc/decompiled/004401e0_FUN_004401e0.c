/*
 * Function: FUN_004401e0
 * Entry:    004401e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004401e0(int param_1)

{
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  
  piVar6 = DAT_0051d6e0;
  DAT_0051d6e0[6] = DAT_004d22e0;
  piVar6[7] = DAT_004d22e4;
  piVar6[8] = DAT_004d22e8;
  FUN_00408180(&DAT_0053ea00);
  FUN_004082f0(&DAT_0053ea14);
  piVar6[0xc] = 0;
  piVar6[0xd] = 0;
  piVar6[0xe] = 0;
  DAT_004d237c = 0;
  piVar6[0xb] = param_1;
  do {
    if (param_1 == 0) {
      if (DAT_004d13c4 != 0) {
        *(int *)(DAT_004d13c4 + 0x10) = DAT_004d237c;
        DAT_004d237c = DAT_004d13c4;
      }
      iVar8 = piVar6[0xe];
      if (iVar8 != 0) {
        piVar6[0xb] = iVar8;
        for (iVar8 = *(int *)(iVar8 + 0x10); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x10)) {
          iVar8 = *(int *)(piVar6[0xb] + 0x10);
          piVar6[0xb] = iVar8;
        }
        *(int *)(piVar6[0xb] + 0x10) = DAT_004d237c;
        DAT_004d237c = piVar6[0xe];
      }
      iVar8 = piVar6[0xc];
      if (iVar8 != 0) {
        piVar6[0xb] = iVar8;
        for (iVar8 = *(int *)(iVar8 + 0x10); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x10)) {
          iVar8 = *(int *)(piVar6[0xb] + 0x10);
          piVar6[0xb] = iVar8;
        }
        *(int *)(piVar6[0xb] + 0x10) = DAT_004d237c;
        DAT_004d237c = piVar6[0xc];
      }
      if (piVar6[0xd] != 0) {
        *(int *)(piVar6[0xd] + 0x10) = DAT_004d237c;
        DAT_004d237c = piVar6[0xd];
      }
      DAT_004d239a = 0;
      iVar8 = DAT_004d237c;
      if (DAT_004deba0 == 2) {
        while (iVar5 = iVar8, iVar5 != 0) {
          if (*(char *)(iVar5 + 0x26) == '\x15') {
            (*(code *)PTR_FUN_004a259c)(iVar5);
          }
          iVar8 = *(int *)(iVar5 + 0x10);
          if ((*(uint *)(iVar5 + 0x14) & 0x100) != 0) {
            FUN_004400c0(iVar5);
          }
        }
      }
      else if (DAT_004d237c != 0) {
        do {
          (*(code *)(&PTR_FUN_004a2548)[*(byte *)(iVar8 + 0x26)])(iVar8);
          iVar5 = *(int *)(iVar8 + 0x10);
          if ((*(uint *)(iVar8 + 0x14) & 0x100) != 0) {
            FUN_004400c0(iVar8);
          }
          iVar8 = iVar5;
        } while (iVar5 != 0);
        return;
      }
      return;
    }
    iVar8 = DAT_004d13c4;
    if ((*(byte *)(piVar6[0xb] + 0xc) & 0x40) != 0) goto LAB_00440570;
    if ((DAT_004d2352 & 0x100) == 0) {
      psVar1 = (short *)(piVar6[0xb] + 0x1e);
      *psVar1 = *psVar1 + 1;
    }
    iVar8 = piVar6[0xb];
    sVar4 = *(short *)(iVar8 + 0x18);
    if ((((sVar4 == 1) || (sVar4 == 0x26)) || (sVar4 == 0x12)) ||
       (((*(char *)(iVar8 + 0x26) == '\x15' || (*(char *)(iVar8 + 0x26) == '\x14')) ||
        ((*(int *)(iVar8 + 0x54) == DAT_004d13c4 ||
         ((*(int *)(iVar8 + 0x58) == DAT_004d13c4 || ((*(uint *)(iVar8 + 8) & 0x80000) != 0))))))))
    {
LAB_0044050d:
      iVar8 = piVar6[0xb];
      if (*(char *)(iVar8 + 0x26) == '\x15') {
        *(int *)(iVar8 + 0x10) = piVar6[0xd];
        piVar6[0xd] = piVar6[0xb];
        iVar8 = DAT_004d13c4;
      }
      else if ((*(uint *)(iVar8 + 8) & 0x20000) == 0) {
        if ((*(uint *)(iVar8 + 8) & 8) == 0) {
          if (*(short *)(iVar8 + 0x18) != 1) {
            *(int *)(iVar8 + 0x10) = DAT_004d237c;
            DAT_004d237c = piVar6[0xb];
            iVar8 = DAT_004d13c4;
          }
        }
        else {
          *(int *)(iVar8 + 0x10) = piVar6[0xe];
          piVar6[0xe] = piVar6[0xb];
          iVar8 = DAT_004d13c4;
        }
      }
      else {
        *(int *)(iVar8 + 0x10) = piVar6[0xc];
        piVar6[0xc] = piVar6[0xb];
        iVar8 = DAT_004d13c4;
      }
    }
    else {
      if (((DAT_004d138e & 2) != 0) && ((*(uint *)(iVar8 + 0xc) & 0x101) == 0)) {
        *piVar6 = piVar6[6] - *(int *)(iVar8 + 0xcc);
        piVar6[1] = piVar6[7] - *(int *)(iVar8 + 0xd0);
        piVar6[2] = piVar6[8] - *(int *)(iVar8 + 0xd4);
        FUN_00407120(piVar6,piVar6 + 0x11);
        if (DAT_0051d800 + 0x460 < piVar6[0x11]) {
          FUN_00440180(piVar6[0xb]);
          iVar8 = DAT_004d13c4;
          goto LAB_00440570;
        }
      }
      if ((((DAT_004d138e & 1) == 0) || ((*(byte *)(piVar6[0xb] + 0xc) & 0x20) != 0)) &&
         ((*(byte *)(piVar6[0xb] + 0xc) & 1) == 0)) {
LAB_004403d2:
        if ((((DAT_004d138e & 4) == 0) ||
            (iVar8 = piVar6[0xb], (*(uint *)(iVar8 + 8) & 0x820000) != 0)) ||
           ((*(byte *)(iVar8 + 0xc) & 1) != 0)) goto LAB_0044050d;
        piVar2 = piVar6 + 4;
        *(short *)piVar2 = *(short *)(iVar8 + 0xcc);
        *(undefined2 *)((int)piVar6 + 0x12) = *(undefined2 *)(iVar8 + 0xd0);
        *(undefined2 *)(piVar6 + 5) = *(undefined2 *)(iVar8 + 0xd4);
        FUN_004081f0(piVar2);
        FUN_00408310();
        puVar3 = (uint *)(piVar6 + 0x1b);
        FUN_00408430(puVar3);
        if ((int)*puVar3 < -299) {
          FUN_00440180(piVar6[0xb]);
          iVar8 = DAT_004d13c4;
        }
        else {
          FUN_00408440(piVar6 + 0x1a);
          piVar6[0x10] = (int)(0x12c000 / (longlong)(int)(*puVar3 | 1));
          sVar4 = *(short *)(piVar6[0xb] + 0x30);
          sVar7 = *(short *)(piVar6[0xb] + 0x34);
          if (sVar4 < sVar7) {
            sVar7 = sVar4;
          }
          *(short *)piVar2 = sVar7;
          sVar4 = *(short *)(piVar6[0xb] + 0x38);
          sVar7 = *(short *)(piVar6[0xb] + 0x3c);
          if (sVar7 < sVar4) {
            sVar7 = sVar4;
          }
          *(short *)((int)piVar6 + 0x12) = sVar7;
          *(undefined2 *)(piVar6 + 5) = *(undefined2 *)(piVar6[0xb] + 0x32);
          FUN_00408460(piVar6 + 0x10);
          FUN_00408470(piVar2);
          FUN_004084c0();
          FUN_004084a0(piVar6);
          iVar8 = (int)(short)piVar6[0x1a];
          if (((*piVar6 + iVar8 < 0x101) && (-0x101 < piVar6[1] + iVar8)) &&
             (-0x79 < (int)*(short *)((int)piVar6 + 0x6a) + piVar6[2])) goto LAB_0044050d;
          FUN_00440180(piVar6[0xb]);
          iVar8 = DAT_004d13c4;
        }
      }
      else {
        piVar6[0x10] = 0;
        piVar6[0xf] = (int)&DAT_004d1700;
        if (0 < DAT_004d2398) {
          do {
            if (*(short *)(piVar6[0xb] + 0x20) == *(short *)piVar6[0xf]) break;
            iVar8 = piVar6[0x10];
            piVar6[0xf] = (int)((short *)piVar6[0xf] + 10);
            piVar6[0x10] = iVar8 + 1;
          } while (iVar8 + 1 < (int)DAT_004d2398);
        }
        if ((piVar6[0x10] < (int)DAT_004d2398) && ((*(byte *)(piVar6[0xf] + 2) & 1) != 0)) {
          if ((*(uint *)(piVar6[0xb] + 8) & 0x10000) != 0) goto LAB_004403d2;
          FUN_00440180(piVar6[0xb]);
          iVar8 = DAT_004d13c4;
        }
        else {
          if ((int)DAT_004d2398 != piVar6[0x10]) goto LAB_004403d2;
          FUN_00440180(piVar6[0xb]);
          iVar8 = DAT_004d13c4;
        }
      }
    }
LAB_00440570:
    DAT_004d13c4 = iVar8;
    param_1 = *(int *)piVar6[0xb];
    piVar6[0xb] = param_1;
  } while( true );
}


