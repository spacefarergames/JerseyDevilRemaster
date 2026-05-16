/*
 * Function: _strstr
 * Entry:    00444a90
 * Warning:  Decompiled pseudocode, not original source.
 */


/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*_SubStr == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    pcVar4 = (char *)FUN_00448816();
    return pcVar4;
  }
  do {
    cVar3 = *_Str;
    do {
      while (_Str = _Str + 1, cVar3 != *_SubStr) {
        if (cVar3 == '\0') {
          return (char *)0x0;
        }
        cVar3 = *_Str;
      }
      cVar3 = *_Str;
      pcVar5 = _Str + 1;
      pcVar4 = _SubStr;
    } while (cVar3 != _SubStr[1]);
    do {
      if (pcVar4[2] == '\0') {
LAB_00444b03:
        return _Str + -1;
      }
      if (*pcVar5 != pcVar4[2]) break;
      pcVar1 = pcVar4 + 3;
      if (*pcVar1 == '\0') goto LAB_00444b03;
      pcVar2 = pcVar5 + 1;
      pcVar4 = pcVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}


