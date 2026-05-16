/*
 * Function: FUN_00406d60
 * Entry:    00406d60
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406d60(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  QueryPerformanceCounter((LARGE_INTEGER *)&DAT_00813b40);
  iVar3 = *(int *)(DAT_0053ea20 + 0x10004);
  uVar1 = DAT_00813b00;
  iVar4 = DAT_00813b04;
  if ((((iVar3 != 0x41) && (iVar3 != 0x42)) && (iVar3 != 0x43)) &&
     ((iVar3 != 0x44 && (iVar3 != 0x45)))) {
    uVar1 = DAT_00813b30;
    iVar4 = DAT_00813b34;
  }
  bVar5 = CARRY4(DAT_00813b50,uVar1);
  uVar1 = DAT_00813b50 + uVar1;
  DAT_00813b50 = uVar1;
  iVar3 = DAT_00813b54 + iVar4 + (uint)bVar5;
  uVar2 = uVar1 - DAT_00813b40;
  DAT_00813b54 = iVar3;
  iVar4 = (iVar3 - DAT_00813b44) - (uint)(uVar1 < DAT_00813b40);
  if (DAT_004a5df8 < 2) {
    if (((iVar4 <= DAT_00813b5c) && ((iVar4 < DAT_00813b5c || (uVar2 < DAT_00813b58)))) &&
       (DAT_004a5de4 == 0)) {
      if ((int)DAT_004cffe0 < 1) {
        DAT_004a611c = 1;
        DAT_004a5e3c = 0;
        DAT_004a5df8 = DAT_004a5df8 + 1;
        DAT_004a5e40 = 0;
        return;
      }
      if ((DAT_004cffe0 & 1) == 0) {
        if (0 < DAT_004a5e3c) {
          DAT_004a5e3c = 0;
          DAT_004a611c = 0;
          DAT_004a5df8 = 0;
          return;
        }
        DAT_004a5e3c = DAT_004a5e3c + 1;
      }
      else {
        if (0 < DAT_004a5e40) {
          DAT_004a5e40 = 0;
          DAT_004a611c = 0;
          DAT_004a5df8 = 0;
          return;
        }
        DAT_004a5e40 = DAT_004a5e40 + 1;
      }
      DAT_004a611c = 1;
      DAT_004a5df8 = DAT_004a5df8 + 1;
      return;
    }
    DAT_004a611c = 0;
    DAT_004a5df8 = 0;
    DAT_004a5e3c = 0;
    DAT_004a5e40 = 0;
    if (((DAT_00813b24 <= iVar4) && ((DAT_00813b24 < iVar4 || (DAT_00813b20 < uVar2)))) &&
       ((DAT_004537e0 != 0 &&
        ((DAT_00813b44 <= iVar3 && ((DAT_00813b44 < iVar3 || (DAT_00813b40 < uVar1)))))))) {
      while( true ) {
        do {
          QueryPerformanceCounter((LARGE_INTEGER *)&DAT_00813b40);
        } while (DAT_00813b44 < iVar3);
        if (iVar3 < DAT_00813b44) break;
        if (uVar1 <= DAT_00813b40) {
          return;
        }
      }
    }
  }
  else {
    DAT_004a611c = 0;
    DAT_004a5df8 = 0;
    DAT_004a5e3c = 0;
    DAT_004a5e40 = 0;
    if ((iVar4 <= DAT_00813b3c) && ((iVar4 < DAT_00813b3c || (uVar2 < DAT_00813b38)))) {
      DAT_00813b50 = DAT_00813b40;
      DAT_00813b54 = DAT_00813b44;
      DAT_004a5dd4 = 0;
      _DAT_004a5dd8 = 0;
      _DAT_004a5ddc = 0;
      return;
    }
    if (((DAT_00813b24 <= iVar4) &&
        (((DAT_00813b24 < iVar4 || (DAT_00813b20 < uVar2)) && (DAT_004537e0 != 0)))) &&
       (DAT_00813b44 <= iVar3)) {
      if (DAT_00813b44 < iVar3) goto LAB_00406fbd;
      do {
        if (uVar1 <= DAT_00813b40) {
          return;
        }
LAB_00406fbd:
        do {
          QueryPerformanceCounter((LARGE_INTEGER *)&DAT_00813b40);
        } while (DAT_00813b44 < iVar3);
      } while (DAT_00813b44 <= iVar3);
    }
  }
  return;
}


