/*
 * Function: FUN_00420a60
 * Entry:    00420a60
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00420a60(undefined4 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  float10 fVar18;
  undefined4 local_18c;
  undefined1 local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  double local_158;
  int aiStack_150 [10];
  int local_128 [10];
  undefined4 local_100 [64];
  
  if (DAT_004a607c == 0) {
    return 0;
  }
  local_188 = 0;
  local_184 = 0;
  pbVar14 = &DAT_004a08ac;
  local_18c = *param_1;
  pbVar11 = (byte *)&local_18c;
  do {
    bVar1 = *pbVar11;
    bVar17 = bVar1 < *pbVar14;
    if (bVar1 != *pbVar14) {
LAB_00420ac9:
      iVar3 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_00420ace;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar11[1];
    bVar17 = bVar1 < pbVar14[1];
    if (bVar1 != pbVar14[1]) goto LAB_00420ac9;
    pbVar11 = pbVar11 + 2;
    pbVar14 = pbVar14 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00420ace:
  if (iVar3 == 0) {
    return 0;
  }
  local_168 = FUN_00420210(param_1 + 1);
  local_18c = param_1[2];
  local_168 = local_168 + 8;
  iVar3 = 0xc;
  iVar15 = 0;
  if (0xc < local_168) {
    do {
      local_18c = *(undefined4 *)(iVar3 + (int)param_1);
      local_174 = FUN_00420210(iVar3 + 4 + (int)param_1);
      iVar15 = iVar3 + 8;
      local_16c = iVar15;
      pbVar14 = &DAT_004a08a4;
      pbVar11 = (byte *)&local_18c;
      do {
        bVar1 = *pbVar11;
        bVar17 = bVar1 < *pbVar14;
        if (bVar1 != *pbVar14) {
LAB_00420b57:
          iVar4 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00420b5c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar17 = bVar1 < pbVar14[1];
        if (bVar1 != pbVar14[1]) goto LAB_00420b57;
        pbVar11 = pbVar11 + 2;
        pbVar14 = pbVar14 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00420b5c:
      if (iVar4 == 0) {
        FUN_00420240(iVar15 + (int)param_1);
        iVar3 = iVar3 + 10;
        local_15c = iVar15 + local_174;
        if (iVar3 < iVar15 + local_174) {
          do {
            sVar2 = FUN_00420240(iVar3 + (int)param_1);
            iVar15 = local_184;
            local_128[local_184] = (int)sVar2;
            iVar4 = FUN_00420210(iVar3 + 2 + (int)param_1);
            aiStack_150[iVar15] = iVar4;
            uVar5 = (uint)*(char *)(iVar3 + 6 + (int)param_1);
            iVar15 = iVar3 + 7;
            iVar3 = iVar15 + uVar5;
            puVar12 = (undefined4 *)(iVar15 + (int)param_1);
            puVar16 = local_100;
            for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar16 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar16 = puVar16 + 1;
            }
            for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar16 = *(undefined1 *)puVar12;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            *(undefined1 *)((int)local_100 + uVar5) = 0;
            uVar7 = (int)(uVar5 + 1) >> 0x1f;
            if (((uVar5 + 1 ^ uVar7) - uVar7 & 1 ^ uVar7) - uVar7 == 1) {
              iVar3 = iVar3 + 1;
            }
            local_184 = local_184 + 1;
            iVar15 = local_16c;
          } while (iVar3 < local_15c);
        }
      }
      pbVar14 = &DAT_004a089c;
      pbVar11 = (byte *)&local_18c;
      do {
        bVar1 = *pbVar11;
        bVar17 = bVar1 < *pbVar14;
        if (bVar1 != *pbVar14) {
LAB_00420c45:
          iVar3 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00420c4a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar17 = bVar1 < pbVar14[1];
        if (bVar1 != pbVar14[1]) goto LAB_00420c45;
        pbVar11 = pbVar11 + 2;
        pbVar14 = pbVar14 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00420c4a:
      if (iVar3 == 0) {
        sVar2 = FUN_00420240(iVar15 + (int)param_1);
        local_17c = (int)sVar2;
        local_180 = FUN_00420210(iVar15 + 2 + (int)param_1);
        sVar2 = FUN_00420240(iVar15 + 6 + (int)param_1);
        local_170 = (int)sVar2;
        fVar18 = (float10)FUN_004200f0(iVar15 + 8 + (int)param_1);
        uVar5 = (uint)*(char *)(iVar15 + 0x16 + (int)param_1);
        local_158 = (double)fVar18;
        puVar12 = (undefined4 *)(iVar15 + 0x17 + (int)param_1);
        puVar16 = local_100;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar16 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        }
        for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar16 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar16 = (undefined4 *)((int)puVar16 + 1);
        }
        *(undefined1 *)((int)local_100 + uVar5) = 0;
        iVar15 = local_16c;
      }
      pbVar14 = &DAT_004a0894;
      pbVar11 = (byte *)&local_18c;
      do {
        bVar1 = *pbVar11;
        bVar17 = bVar1 < *pbVar14;
        if (bVar1 != *pbVar14) {
LAB_00420cfe:
          iVar3 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00420d03;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar17 = bVar1 < pbVar14[1];
        if (bVar1 != pbVar14[1]) goto LAB_00420cfe;
        pbVar11 = pbVar11 + 2;
        pbVar14 = pbVar14 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00420d03:
      if (iVar3 == 0) {
        FUN_00420240(iVar15 + 6 + (int)param_1);
        FUN_00420240(iVar15 + 8 + (int)param_1);
        sVar2 = FUN_00420240(iVar15 + 10 + (int)param_1);
        local_160 = (int)sVar2;
        sVar2 = FUN_00420240(iVar15 + 0xc + (int)param_1);
        local_164 = (int)sVar2;
        FUN_00420240(iVar15 + 0xe + (int)param_1);
        FUN_00420240(iVar15 + 0x10 + (int)param_1);
        FUN_00420240(iVar15 + 0x12 + (int)param_1);
      }
      pbVar14 = &DAT_004a088c;
      pbVar11 = (byte *)&local_18c;
      do {
        bVar1 = *pbVar11;
        bVar17 = bVar1 < *pbVar14;
        if (bVar1 != *pbVar14) {
LAB_00420daf:
          iVar3 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00420db4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar17 = bVar1 < pbVar14[1];
        if (bVar1 != pbVar14[1]) goto LAB_00420daf;
        pbVar11 = pbVar11 + 2;
        pbVar14 = pbVar14 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00420db4:
      if (iVar3 == 0) {
        local_178 = iVar15 + 2 + (int)param_1;
      }
      iVar3 = iVar15 + local_174;
      iVar15 = local_184;
    } while (iVar3 < local_168);
  }
  iVar3 = local_17c;
  iVar4 = (int)(local_170 + (local_170 >> 0x1f & 7U)) >> 3;
  iVar13 = local_17c * local_180 * iVar4;
  FUN_004201e0(local_178,iVar13);
  local_180 = __ftol();
  if (iVar15 < 2) {
    iVar8 = 0;
    iVar15 = 0;
  }
  else {
    iVar8 = 0;
    if (0 < iVar15) {
      piVar9 = local_128;
      do {
        if (*piVar9 == local_160) break;
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar8 < iVar15);
    }
    iVar8 = aiStack_150[iVar8];
    iVar10 = 0;
    if (0 < iVar15) {
      piVar9 = local_128;
      do {
        iVar3 = local_17c;
        if (*piVar9 == local_164) break;
        iVar10 = iVar10 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar10 < iVar15);
    }
    iVar15 = aiStack_150[iVar10];
  }
  uVar6 = FUN_004207f0(local_180,local_178,iVar13,iVar3,local_170,iVar3 * iVar8 * iVar4,
                       iVar3 * iVar15 * iVar4);
  return uVar6;
}


