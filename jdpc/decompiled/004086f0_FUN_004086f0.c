/*
 * Function: FUN_004086f0
 * Entry:    004086f0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004086f0(size_t param_1)

{
  char cVar1;
  LPSTR _Str;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  _Str = GetCommandLineA();
  DAT_008134a0 = 0;
  pcVar2 = _strstr(_Str,&DAT_0045bd68);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,&DAT_0045bd64), pcVar2 != (char *)0x0)) {
    _strncpy(&DAT_004a5e50,pcVar2 + 2,2);
    DAT_004a5e52 = 0;
  }
  pcVar2 = _strstr(_Str,&DAT_0045bd60);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,&DAT_0045bd5c), pcVar2 != (char *)0x0)) {
    pcVar2 = pcVar2 + 3;
    uVar3 = 0xffffffff;
    param_1 = 0;
    pcVar7 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (0 < (int)(~uVar3 - 1)) {
      do {
        if (pcVar2[param_1] == ' ') break;
        param_1 = param_1 + 1;
      } while ((int)param_1 < (int)(~uVar3 - 1));
    }
    _strncpy(&DAT_008134a0,pcVar2,param_1);
    (&DAT_008134a0)[param_1] = 0;
    DAT_004a6120 = 2;
  }
  pcVar2 = _strstr(_Str,&DAT_0045bd58);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = _strstr(_Str,&DAT_0045bd54);
  }
  if (pcVar2 != (char *)0x0) {
    pcVar2 = pcVar2 + 3;
    uVar3 = 0xffffffff;
    param_1 = 0;
    pcVar7 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (0 < (int)(~uVar3 - 1)) {
      do {
        if (pcVar2[param_1] == ' ') break;
        param_1 = param_1 + 1;
      } while ((int)param_1 < (int)(~uVar3 - 1));
    }
    _strncpy(&DAT_008134a0,pcVar2,param_1);
    (&DAT_008134a0)[param_1] = 0;
    DAT_004a6120 = 1;
  }
  pcVar2 = _strstr(_Str,&DAT_0045bd50);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,&DAT_0045bd4c), pcVar2 != (char *)0x0)) {
    DAT_0053e850 = FUN_00444940(pcVar2 + 2);
  }
  pcVar2 = _strstr(_Str,&DAT_0045bd48);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,&DAT_0045bd44), pcVar2 != (char *)0x0)) {
    DAT_0053e854 = FUN_00444940(pcVar2 + 2);
  }
  pcVar2 = _strstr(_Str,s__no_sync_0045bd38);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__NO_SYNC_0045bd2c), pcVar2 != (char *)0x0)
     ) {
    DAT_004537e0 = 0;
  }
  pcVar2 = _strstr(_Str,s__no_skip_0045bd20);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__NO_SKIP_0045bd14), pcVar2 != (char *)0x0)
     ) {
    _DAT_004537dc = 0;
  }
  pcVar2 = _strstr(_Str,s__FULL_0045bd0c);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__full_0045bd04), pcVar2 != (char *)0x0)) {
    DAT_0053e858 = 1;
  }
  pcVar2 = _strstr(_Str,&DAT_0045bcfc);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,&DAT_0045bcf4), pcVar2 != (char *)0x0)) {
    DAT_0053e858 = 0;
  }
  pcVar2 = _strstr(_Str,&DAT_0045bcec);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,&DAT_0045bce4), pcVar2 != (char *)0x0)) {
    DAT_0053e844 = 2;
  }
  pcVar2 = _strstr(_Str,s__OPENGL_0045bcdc);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__opengl_0045bcd4), pcVar2 != (char *)0x0))
  {
    DAT_0053e844 = 2;
  }
  pcVar2 = _strstr(_Str,s__SOFT_0045bccc);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__soft_0045bcc4), pcVar2 != (char *)0x0)) {
    DAT_0053e844 = 1;
  }
  pcVar2 = _strstr(_Str,s__SOFT8_0045bcbc);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__soft8_0045bcb4), pcVar2 != (char *)0x0))
  {
    DAT_0053e844 = 0;
  }
  pcVar2 = _strstr(_Str,s__SOFTPAL_0045bca8);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__softpal_0045bc9c), pcVar2 != (char *)0x0)
     ) {
    DAT_0053e844 = 0;
  }
  pcVar2 = _strstr(_Str,s__SOFTRGB_0045bc90);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__softrgb_0045bc84), pcVar2 != (char *)0x0)
     ) {
    DAT_0053e844 = 1;
  }
  pcVar2 = _strstr(_Str,s__SOFT16_0045bc7c);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__soft16_0045bc74), pcVar2 != (char *)0x0))
  {
    DAT_0053e844 = 1;
  }
  pcVar2 = _strstr(_Str,s__SOFT24_0045bc6c);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__soft24_0045bc64), pcVar2 != (char *)0x0))
  {
    DAT_0053e844 = 1;
  }
  pcVar2 = _strstr(_Str,s__skip_intro_0045bc58);
  if ((pcVar2 != (char *)0x0) ||
     (pcVar2 = _strstr(_Str,s__SKIP_INTRO_0045bc4c), pcVar2 != (char *)0x0)) {
    DAT_004537e4 = 0;
  }
  pcVar2 = _strstr(_Str,s__cons_0045bc44);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__CONS_0045bc3c), pcVar2 != (char *)0x0)) {
    _DAT_004a5cc0 = 1;
  }
  pcVar2 = _strstr(_Str,s__fntp_0045bc34);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__FNTP_0045bc2c), pcVar2 != (char *)0x0)) {
    _DAT_004a6104 = 1;
  }
  pcVar2 = _strstr(_Str,s__DLL__0045bc24);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__dll__0045bc1c), pcVar2 != (char *)0x0)) {
    pcVar2 = pcVar2 + 5;
    uVar3 = 0xffffffff;
    param_1 = 0;
    pcVar7 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (0 < (int)(~uVar3 - 1)) {
      do {
        cVar1 = pcVar2[param_1];
        if (((cVar1 == ' ') || (cVar1 == '/')) || (cVar1 == '\0')) break;
        param_1 = param_1 + 1;
      } while ((int)param_1 < (int)(~uVar3 - 1));
    }
    _strncpy(s_opengl32_dll_0045ba68,pcVar2,param_1);
    s_opengl32_dll_0045ba68[param_1] = '\0';
  }
  pcVar2 = _strstr(_Str,&DAT_0045bc14);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,&DAT_0045bc0c), pcVar2 != (char *)0x0)) {
    DAT_004a6100 = FUN_00444940(&DAT_004a5e50);
  }
  pcVar2 = _strstr(_Str,s__PAL__0045bc04);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,s__pal__0045bbfc), pcVar2 != (char *)0x0)) {
    _DAT_00813260 = DAT_0045bbf4;
    uVar3 = 0xffffffff;
    _DAT_00813264 = PTR_DAT_0045bbf8;
    pcVar2 = pcVar2 + 5;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = &DAT_00813260;
    do {
      pcVar6 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar2 = &DAT_00813260;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    for (; ((((int)param_1 < (int)(~uVar3 - 1) && (cVar1 = (&DAT_00813260)[param_1], cVar1 != ' '))
            && (cVar1 != '/')) && (cVar1 != '\0')); param_1 = param_1 + 1) {
    }
    (&DAT_00813260)[param_1] = 0;
    DAT_004a6100 = 0xffffffff;
  }
  pcVar2 = _strstr(_Str,&DAT_0045bbf0);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strstr(_Str,&DAT_0045bbf0), pcVar2 != (char *)0x0)) {
    DAT_004a6100 = 0xffffff9c;
  }
  FUN_0041f3d0();
  FUN_00426770(_Str);
  return;
}


