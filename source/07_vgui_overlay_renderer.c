/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: rendering                                                 */
/* /* VGUI overlay renderer, menu UI, draw calls */                       */
/* Functions: 3                                                         */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x14000b060 : vgui_surface_getfunc [was: FUN_14000b060] ---- */

char * FUN_14000b060(ulonglong param_1,char param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  
  pcVar4 = (char *)(param_1 & 0xfffffffffffffff0);
  auVar7 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
  auVar9[0] = -(*pcVar4 == '\0');
  auVar9[1] = -(pcVar4[1] == '\0');
  auVar9[2] = -(pcVar4[2] == '\0');
  auVar9[3] = -(pcVar4[3] == '\0');
  auVar9[4] = -(pcVar4[4] == '\0');
  auVar9[5] = -(pcVar4[5] == '\0');
  auVar9[6] = -(pcVar4[6] == '\0');
  auVar9[7] = -(pcVar4[7] == '\0');
  auVar9[8] = -(pcVar4[8] == '\0');
  auVar9[9] = -(pcVar4[9] == '\0');
  auVar9[10] = -(pcVar4[10] == '\0');
  auVar9[0xb] = -(pcVar4[0xb] == '\0');
  auVar9[0xc] = -(pcVar4[0xc] == '\0');
  auVar9[0xd] = -(pcVar4[0xd] == '\0');
  auVar9[0xe] = -(pcVar4[0xe] == '\0');
  auVar9[0xf] = -(pcVar4[0xf] == '\0');
  cVar10 = auVar7[0];
  auVar6[0] = -(*pcVar4 == cVar10);
  cVar11 = auVar7[1];
  auVar6[1] = -(pcVar4[1] == cVar11);
  cVar12 = auVar7[2];
  auVar6[2] = -(pcVar4[2] == cVar12);
  cVar13 = auVar7[3];
  auVar6[3] = -(pcVar4[3] == cVar13);
  auVar6[4] = -(pcVar4[4] == cVar10);
  auVar6[5] = -(pcVar4[5] == cVar11);
  auVar6[6] = -(pcVar4[6] == cVar12);
  auVar6[7] = -(pcVar4[7] == cVar13);
  auVar6[8] = -(pcVar4[8] == cVar10);
  auVar6[9] = -(pcVar4[9] == cVar11);
  auVar6[10] = -(pcVar4[10] == cVar12);
  auVar6[0xb] = -(pcVar4[0xb] == cVar13);
  auVar6[0xc] = -(pcVar4[0xc] == cVar10);
  auVar6[0xd] = -(pcVar4[0xd] == cVar11);
  auVar6[0xe] = -(pcVar4[0xe] == cVar12);
  auVar6[0xf] = -(pcVar4[0xf] == cVar13);
  auVar6 = auVar6 | auVar9;
  uVar3 = (uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
  pcVar5 = pcVar4;
  if (uVar3 == 0) {
    do {
      pcVar4 = pcVar5 + 0x10;
      auVar7[0] = -(*pcVar4 == '\0');
      auVar7[1] = -(pcVar5[0x11] == '\0');
      auVar7[2] = -(pcVar5[0x12] == '\0');
      auVar7[3] = -(pcVar5[0x13] == '\0');
      auVar7[4] = -(pcVar5[0x14] == '\0');
      auVar7[5] = -(pcVar5[0x15] == '\0');
      auVar7[6] = -(pcVar5[0x16] == '\0');
      auVar7[7] = -(pcVar5[0x17] == '\0');
      auVar7[8] = -(pcVar5[0x18] == '\0');
      auVar7[9] = -(pcVar5[0x19] == '\0');
      auVar7[10] = -(pcVar5[0x1a] == '\0');
      auVar7[0xb] = -(pcVar5[0x1b] == '\0');
      auVar7[0xc] = -(pcVar5[0x1c] == '\0');
      auVar7[0xd] = -(pcVar5[0x1d] == '\0');
      auVar7[0xe] = -(pcVar5[0x1e] == '\0');
      auVar7[0xf] = -(pcVar5[0x1f] == '\0');
      auVar8[0] = -(*pcVar4 == cVar10);
      auVar8[1] = -(pcVar5[0x11] == cVar11);
      auVar8[2] = -(pcVar5[0x12] == cVar12);
      auVar8[3] = -(pcVar5[0x13] == cVar13);
      auVar8[4] = -(pcVar5[0x14] == cVar10);
      auVar8[5] = -(pcVar5[0x15] == cVar11);
      auVar8[6] = -(pcVar5[0x16] == cVar12);
      auVar8[7] = -(pcVar5[0x17] == cVar13);
      auVar8[8] = -(pcVar5[0x18] == cVar10);
      auVar8[9] = -(pcVar5[0x19] == cVar11);
      auVar8[10] = -(pcVar5[0x1a] == cVar12);
      auVar8[0xb] = -(pcVar5[0x1b] == cVar13);
      auVar8[0xc] = -(pcVar5[0x1c] == cVar10);
      auVar8[0xd] = -(pcVar5[0x1d] == cVar11);
      auVar8[0xe] = -(pcVar5[0x1e] == cVar12);
      auVar8[0xf] = -(pcVar5[0x1f] == cVar13);
      auVar8 = auVar8 | auVar7;
      uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
      uVar3 = (uint)uVar2;
      pcVar5 = pcVar4;
    } while (uVar2 == 0);
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar5 = (char *)0x0;
  if (pcVar4[uVar1] == param_2) {
    pcVar5 = pcVar4 + uVar1;
  }
  return pcVar5;
}




/* ---- 0x14000b0e0 : vgui_overlay_renderer [was: FUN_14000b0e0] ---- */

undefined1 (*) [16] FUN_14000b0e0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  uint uVar1;
  ushort uVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  
  bVar7 = (*param_2)[0];
  if (bVar7 != 0) {
    if (1 < DAT_14003c320) {
      if (((ulonglong)param_2 & 0xfff) < 0xff1) {
        auVar10 = *param_2;
      }
      else {
        lVar5 = 0x10;
        pauVar3 = param_2;
        auVar11 = ZEXT816(0);
        do {
          auVar10._0_8_ = auVar11._1_8_;
          auVar10._8_8_ = auVar11._8_8_ >> 8 | (ulonglong)bVar7 << 0x38;
          if (bVar7 != 0) {
            bVar7 = (*(undefined1 (*) [16])(*pauVar3 + 1))[0];
            pauVar3 = (undefined1 (*) [16])(*pauVar3 + 1);
          }
          lVar5 = lVar5 + -1;
          auVar11 = auVar10;
        } while (lVar5 != 0);
        bVar7 = (*param_2)[0];
      }
      do {
        while( true ) {
          uVar4 = (ulonglong)param_1 & 0xfff;
          pauVar3 = param_2;
          if (uVar4 < 0xff1) break;
          if ((*param_1)[0] == '\0') goto LAB_14000b2c6;
          pauVar8 = param_1;
          if ((*param_1)[0] == bVar7) {
LAB_14000b26e:
            do {
              if (((ulonglong)param_1 & 0xfff) < 0xff1) {
                uVar4 = (ulonglong)pauVar3 & 0xfff;
                if (0xff0 < uVar4) goto LAB_14000b2a2;
                pcmpistri(*pauVar3,*param_1,0xc);
                if (!SBORROW8(uVar4,0xff0)) break;
                if ((longlong)(uVar4 - 0xff0) < 0) {
                  return pauVar8;
                }
                lVar5 = 0x10;
              }
              else {
LAB_14000b2a2:
                if ((*pauVar3)[0] == '\0') {
                  return pauVar8;
                }
                if ((*param_1)[0] != (*pauVar3)[0]) break;
                lVar5 = 1;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + lVar5);
              pauVar3 = (undefined1 (*) [16])(*pauVar3 + lVar5);
            } while( true );
          }
          param_1 = (undefined1 (*) [16])(*pauVar8 + 1);
        }
        pcmpistri(auVar10,*param_1,0xc);
        if (uVar4 < 0xff1) {
          if (uVar4 < 0xff0) {
            iVar6 = pcmpistri(auVar10,*param_1,0xc);
            param_1 = (undefined1 (*) [16])(*param_1 + iVar6);
            pauVar8 = param_1;
            goto LAB_14000b26e;
          }
          goto LAB_14000b2c6;
        }
        param_1 = param_1 + 1;
      } while( true );
    }
    auVar11 = pshuflw(in_XMM1,ZEXT216(CONCAT11(bVar7,bVar7)),0);
LAB_14000b12e:
    for (; ((ulonglong)param_1 & 0xfff) < 0xff1; param_1 = param_1 + 1) {
      cVar15 = auVar11[0];
      auVar9[0] = -((*param_1)[0] == cVar15);
      cVar16 = auVar11[1];
      auVar9[1] = -((*param_1)[1] == cVar16);
      cVar17 = auVar11[2];
      auVar9[2] = -((*param_1)[2] == cVar17);
      cVar18 = auVar11[3];
      auVar9[3] = -((*param_1)[3] == cVar18);
      auVar9[4] = -((*param_1)[4] == cVar15);
      auVar9[5] = -((*param_1)[5] == cVar16);
      auVar9[6] = -((*param_1)[6] == cVar17);
      auVar9[7] = -((*param_1)[7] == cVar18);
      auVar9[8] = -((*param_1)[8] == cVar15);
      auVar9[9] = -((*param_1)[9] == cVar16);
      auVar9[10] = -((*param_1)[10] == cVar17);
      auVar9[0xb] = -((*param_1)[0xb] == cVar18);
      auVar9[0xc] = -((*param_1)[0xc] == cVar15);
      auVar9[0xd] = -((*param_1)[0xd] == cVar16);
      auVar9[0xe] = -((*param_1)[0xe] == cVar17);
      auVar9[0xf] = -((*param_1)[0xf] == cVar18);
      auVar12[0] = -((*param_1)[0] == '\0');
      auVar12[1] = -((*param_1)[1] == '\0');
      auVar12[2] = -((*param_1)[2] == '\0');
      auVar12[3] = -((*param_1)[3] == '\0');
      auVar12[4] = -((*param_1)[4] == '\0');
      auVar12[5] = -((*param_1)[5] == '\0');
      auVar12[6] = -((*param_1)[6] == '\0');
      auVar12[7] = -((*param_1)[7] == '\0');
      auVar12[8] = -((*param_1)[8] == '\0');
      auVar12[9] = -((*param_1)[9] == '\0');
      auVar12[10] = -((*param_1)[10] == '\0');
      auVar12[0xb] = -((*param_1)[0xb] == '\0');
      auVar12[0xc] = -((*param_1)[0xc] == '\0');
      auVar12[0xd] = -((*param_1)[0xd] == '\0');
      auVar12[0xe] = -((*param_1)[0xe] == '\0');
      auVar12[0xf] = -((*param_1)[0xf] == '\0');
      auVar12 = auVar12 | auVar9;
      uVar2 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar12[0xf] >> 7) << 0xf;
      if (uVar2 != 0) {
        uVar1 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        param_1 = (undefined1 (*) [16])(*param_1 + uVar1);
        break;
      }
    }
    if ((*param_1)[0] != '\0') {
      pauVar3 = param_1;
      pauVar8 = param_2;
      if (bVar7 == (*param_1)[0]) {
LAB_14000b176:
        for (; (((ulonglong)pauVar8 & 0xfff) < 0xff1 && (((ulonglong)pauVar3 & 0xfff) < 0xff1));
            pauVar3 = pauVar3 + 1) {
          auVar13[0] = -((*pauVar8)[0] == '\0');
          auVar13[1] = -((*pauVar8)[1] == '\0');
          auVar13[2] = -((*pauVar8)[2] == '\0');
          auVar13[3] = -((*pauVar8)[3] == '\0');
          auVar13[4] = -((*pauVar8)[4] == '\0');
          auVar13[5] = -((*pauVar8)[5] == '\0');
          auVar13[6] = -((*pauVar8)[6] == '\0');
          auVar13[7] = -((*pauVar8)[7] == '\0');
          auVar13[8] = -((*pauVar8)[8] == '\0');
          auVar13[9] = -((*pauVar8)[9] == '\0');
          auVar13[10] = -((*pauVar8)[10] == '\0');
          auVar13[0xb] = -((*pauVar8)[0xb] == '\0');
          auVar13[0xc] = -((*pauVar8)[0xc] == '\0');
          auVar13[0xd] = -((*pauVar8)[0xd] == '\0');
          auVar13[0xe] = -((*pauVar8)[0xe] == '\0');
          auVar13[0xf] = -((*pauVar8)[0xf] == '\0');
          auVar14[0] = -((*pauVar8)[0] != (*pauVar3)[0]);
          auVar14[1] = -((*pauVar8)[1] != (*pauVar3)[1]);
          auVar14[2] = -((*pauVar8)[2] != (*pauVar3)[2]);
          auVar14[3] = -((*pauVar8)[3] != (*pauVar3)[3]);
          auVar14[4] = -((*pauVar8)[4] != (*pauVar3)[4]);
          auVar14[5] = -((*pauVar8)[5] != (*pauVar3)[5]);
          auVar14[6] = -((*pauVar8)[6] != (*pauVar3)[6]);
          auVar14[7] = -((*pauVar8)[7] != (*pauVar3)[7]);
          auVar14[8] = -((*pauVar8)[8] != (*pauVar3)[8]);
          auVar14[9] = -((*pauVar8)[9] != (*pauVar3)[9]);
          auVar14[10] = -((*pauVar8)[10] != (*pauVar3)[10]);
          auVar14[0xb] = -((*pauVar8)[0xb] != (*pauVar3)[0xb]);
          auVar14[0xc] = -((*pauVar8)[0xc] != (*pauVar3)[0xc]);
          auVar14[0xd] = -((*pauVar8)[0xd] != (*pauVar3)[0xd]);
          auVar14[0xe] = -((*pauVar8)[0xe] != (*pauVar3)[0xe]);
          auVar14[0xf] = -((*pauVar8)[0xf] != (*pauVar3)[0xf]);
          auVar14 = auVar14 | auVar13;
          uVar2 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar14[0xf] >> 7) << 0xf;
          if (uVar2 != 0) {
            uVar1 = 0;
            if (uVar2 != 0) {
              for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
              }
            }
            pauVar3 = (undefined1 (*) [16])(*pauVar3 + uVar1);
            pauVar8 = (undefined1 (*) [16])(*pauVar8 + uVar1);
            break;
          }
          pauVar8 = pauVar8 + 1;
        }
        if ((*pauVar8)[0] == '\0') {
          return param_1;
        }
        if ((*pauVar3)[0] == (*pauVar8)[0]) {
          pauVar3 = (undefined1 (*) [16])(*pauVar3 + 1);
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
          goto LAB_14000b176;
        }
      }
      param_1 = (undefined1 (*) [16])(*param_1 + 1);
      goto LAB_14000b12e;
    }
LAB_14000b2c6:
    param_1 = (undefined1 (*) [16])0x0;
  }
  return param_1;
}




/* ---- 0x140013210 : cheat_menu_controller [was: FUN_140013210] ---- */

undefined4
FUN_140013210(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    uVar1 = PTR_PTR_14003c5d8._0_4_;
    uVar3 = PTR_PTR_14003c5d8._4_4_;
    uVar4 = PTR_DAT_14003c5e0._0_4_;
    uVar5 = PTR_DAT_14003c5e0._4_4_;
    if (DAT_14003d760 != 0) goto LAB_140013259;
  }
  else {
    uVar1 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
  }
  local_70 = '\x01';
  local_80 = uVar1;
  uStack_7c = uVar3;
  uStack_78 = uVar4;
  uStack_74 = uVar5;
LAB_140013259:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_98);
    uVar1 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar1 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar3 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar2 = FUN_140010320(local_98);
    *(undefined4 *)(lVar2 + 0x20) = uVar3;
  }
  if (local_60 != '\0') {
    lVar2 = FUN_140010320(local_98);
    *(undefined4 *)(lVar2 + 0x24) = local_64;
  }
  return uVar1;
}




