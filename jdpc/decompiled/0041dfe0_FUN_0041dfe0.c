/*
 * Function: FUN_0041dfe0
 * Entry:    0041dfe0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041dfe0(void)

{
  undefined1 *puVar1;
  int iVar2;
  PALETTEENTRY *pPVar3;
  LOGPALETTE local_404 [128];
  
  local_404[0].palVersion = 0x300;
  local_404[0].palNumEntries = 0x100;
  pPVar3 = local_404[0].palPalEntry;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    pPVar3->peRed = '\0';
    pPVar3->peGreen = '\0';
    pPVar3->peBlue = '\0';
    pPVar3->peFlags = '\0';
    pPVar3 = pPVar3 + 1;
  }
  puVar1 = (undefined1 *)(DAT_0055eb50 + 1);
  iVar2 = 0x100;
  do {
    puVar1[(int)local_404 + (3 - DAT_0055eb50)] = puVar1[1];
    puVar1[(int)local_404 + (4 - DAT_0055eb50)] = *puVar1;
    puVar1[(int)local_404 + (5 - DAT_0055eb50)] = puVar1[-1];
    puVar1[(int)local_404 + (6 - DAT_0055eb50)] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  CreatePalette(local_404);
  return;
}


