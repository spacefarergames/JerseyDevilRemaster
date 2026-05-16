/*
 * Function: FUN_004440f0
 * Entry:    004440f0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004440f0(uint param_1,char *param_2,DWORD param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  DWORD local_c;
  int *local_8;
  char *local_4;
  
  if (param_1 < DAT_00a14e20) {
    iVar6 = (param_1 & 0x1f) * 8;
    piVar1 = &DAT_00a14d20 + ((int)param_1 >> 5);
    local_c = iVar6 + (&DAT_00a14d20)[(int)param_1 >> 5];
    bVar3 = *(byte *)(local_c + 4);
    if ((bVar3 & 1) != 0) {
      iVar7 = 0;
      if ((param_3 == 0) || ((bVar3 & 2) != 0)) {
        return 0;
      }
      pcVar8 = param_2;
      DVar5 = param_3;
      if (((bVar3 & 0x48) != 0) && (*(char *)(local_c + 5) != '\n')) {
        *param_2 = *(char *)(local_c + 5);
        pcVar8 = param_2 + 1;
        iVar7 = 1;
        DVar5 = param_3 - 1;
        *(undefined1 *)(iVar6 + 5 + *piVar1) = 10;
      }
      local_8 = piVar1;
      BVar4 = ReadFile(*(HANDLE *)(iVar6 + *piVar1),pcVar8,DVar5,&local_c,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        DVar5 = GetLastError();
        if (DVar5 == 5) {
          DAT_004a6224 = DVar5;
          _DAT_004a6220 = 9;
          return -1;
        }
        if (DVar5 == 0x6d) {
          return 0;
        }
        FUN_00447390(DVar5);
        return -1;
      }
      iVar7 = iVar7 + local_c;
      bVar3 = *(byte *)(iVar6 + 4 + *piVar1);
      if ((bVar3 & 0x80) != 0) {
        if ((local_c == 0) || (*param_2 != '\n')) {
          bVar3 = bVar3 & 0xfb;
        }
        else {
          bVar3 = bVar3 | 4;
        }
        *(byte *)(iVar6 + 4 + *piVar1) = bVar3;
        local_4 = param_2 + iVar7;
        pcVar8 = param_2;
        pcVar9 = param_2;
        if (param_2 < local_4) {
          while (cVar2 = *pcVar9, cVar2 != '\x1a') {
            if (cVar2 == '\r') {
              if (pcVar9 < local_4 + -1) {
                if (pcVar9[1] == '\n') {
                  pcVar9 = pcVar9 + 2;
                  *pcVar8 = '\n';
                  goto LAB_004442d8;
                }
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              }
              else {
                DVar5 = 0;
                pcVar9 = pcVar9 + 1;
                BVar4 = ReadFile(*(HANDLE *)(iVar6 + *local_8),&param_3,1,&local_c,(LPOVERLAPPED)0x0
                                );
                if (BVar4 == 0) {
                  DVar5 = GetLastError();
                }
                if ((DVar5 == 0) && (local_c != 0)) {
                  if ((*(byte *)(iVar6 + 4 + *local_8) & 0x48) == 0) {
                    if ((pcVar8 == param_2) && ((char)param_3 == '\n')) {
                      *pcVar8 = '\n';
                      goto LAB_004442d8;
                    }
                    FUN_00444030(param_1,0xffffffff,1);
                    if ((char)param_3 != '\n') goto LAB_004442d5;
                  }
                  else {
                    if ((char)param_3 == '\n') {
                      *pcVar8 = '\n';
                      goto LAB_004442d8;
                    }
                    *pcVar8 = '\r';
                    pcVar8 = pcVar8 + 1;
                    *(char *)(iVar6 + 5 + *local_8) = (char)param_3;
                  }
                }
                else {
LAB_004442d5:
                  *pcVar8 = '\r';
LAB_004442d8:
                  pcVar8 = pcVar8 + 1;
                }
              }
            }
            else {
              *pcVar8 = cVar2;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            }
            if (local_4 <= pcVar9) {
              return (int)pcVar8 - (int)param_2;
            }
          }
          bVar3 = *(byte *)(iVar6 + 4 + *local_8);
          if ((bVar3 & 0x40) == 0) {
            *(byte *)(iVar6 + 4 + *local_8) = bVar3 | 2;
          }
        }
        iVar7 = (int)pcVar8 - (int)param_2;
      }
      return iVar7;
    }
  }
  _DAT_004a6220 = 9;
  DAT_004a6224 = 0;
  return -1;
}


