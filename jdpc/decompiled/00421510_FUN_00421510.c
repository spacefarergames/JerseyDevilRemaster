/*
 * Function: FUN_00421510
 * Entry:    00421510
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00421510(void)

{
  if (DAT_004a607c != (int *)0x0) {
    (**(code **)(*DAT_004a607c + 8))(DAT_004a607c);
    DAT_004a607c = (int *)0x0;
  }
  FUN_00421910();
  if (DAT_004a6080 != 0) {
    FUN_00443fe0(DAT_004a6080);
    DAT_004a6080 = 0;
  }
  for (; 0 < DAT_004a6088; DAT_004a6088 = DAT_004a6088 + -1) {
    if ((&DAT_0055dd00)[DAT_004a6088] != 0) {
      FUN_00443fe0((&DAT_0055dd00)[DAT_004a6088]);
      (&DAT_0055dd00)[DAT_004a6088] = 0;
    }
  }
  FUN_004012d0(&DAT_0055df20);
  DAT_0055dfa0 = 0;
  DAT_004a6078 = 0;
  return;
}


