/*
 * Function: FUN_00448910
 * Entry:    00448910
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00448910(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  BOOL BVar5;
  int iVar6;
  char *pcVar7;
  DWORD local_41c;
  DWORD local_414;
  DWORD local_410;
  int local_40c;
  int *local_408;
  char local_404 [1028];
  
  if (param_1 < DAT_00a14e20) {
    piVar1 = &DAT_00a14d20 + ((int)param_1 >> 5);
    iVar6 = (param_1 & 0x1f) * 8;
    bVar2 = *(byte *)(iVar6 + 4 + (&DAT_00a14d20)[(int)param_1 >> 5]);
    if ((bVar2 & 1) != 0) {
      local_41c = 0;
      local_40c = 0;
      if (param_3 == 0) {
        return 0;
      }
      local_408 = piVar1;
      if ((bVar2 & 0x20) != 0) {
        FUN_00444030(param_1,0,2);
      }
      if ((*(byte *)((undefined4 *)(*piVar1 + iVar6) + 1) & 0x80) == 0) {
        BVar5 = WriteFile(*(HANDLE *)(*piVar1 + iVar6),param_2,param_3,&local_410,(LPOVERLAPPED)0x0)
        ;
        if (BVar5 == 0) {
          local_414 = GetLastError();
        }
        else {
          local_41c = local_410;
          local_414 = 0;
        }
      }
      else {
        local_414 = 0;
        pcVar7 = param_2;
        if (param_3 != 0) {
          do {
            pcVar4 = local_404;
            do {
              if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
              cVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              if (cVar3 == '\n') {
                *pcVar4 = '\r';
                local_40c = local_40c + 1;
                pcVar4 = pcVar4 + 1;
              }
              *pcVar4 = cVar3;
              pcVar4 = pcVar4 + 1;
            } while ((int)pcVar4 - (int)local_404 < 0x400);
            BVar5 = WriteFile(*(HANDLE *)(iVar6 + *local_408),local_404,(int)pcVar4 - (int)local_404
                              ,&local_410,(LPOVERLAPPED)0x0);
            if (BVar5 == 0) {
              local_414 = GetLastError();
              break;
            }
            local_41c = local_41c + local_410;
            if (((int)local_410 < (int)pcVar4 - (int)local_404) ||
               (param_3 <= (uint)((int)pcVar7 - (int)param_2))) break;
          } while( true );
        }
      }
      if (local_41c != 0) {
        return local_41c - local_40c;
      }
      if (local_414 == 0) {
        if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) != 0) && (*param_2 == '\x1a')) {
          return 0;
        }
        _DAT_004a6220 = 0x1c;
        DAT_004a6224 = 0;
        return -1;
      }
      if (local_414 == 5) {
        DAT_004a6224 = local_414;
        _DAT_004a6220 = 9;
        return -1;
      }
      FUN_00447390(local_414);
      return -1;
    }
  }
  _DAT_004a6220 = 9;
  DAT_004a6224 = 0;
  return -1;
}


