/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: entity                                                    */
/* /* Entity/player loop, bone matrix, w2s */                             */
/* Functions: 4                                                         */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x140018b80 : entity_loop_aimbot [was: FUN_140018b80] ---- */

ulonglong FUN_140018b80(undefined1 (*param_1) [32])

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  if (DAT_14003c320 < 5) {
    pauVar2 = param_1;
    if (DAT_14003c320 < 1) {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
             (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar3 != uVar4 >> 1) {
        return uVar3;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
      while( true ) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar2 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar2 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar2 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar2 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar2 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar2 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar2 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar2 + 0xe) == 0);
        if ((((((((((((((((SUB161(auVar5 >> 7,0) & 1) != 0 || (SUB161(auVar5 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar5 >> 0x17,0) & 1) != 0) || (SUB161(auVar5 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar5 >> 0x27,0) & 1) != 0) || (SUB161(auVar5 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar5 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar5 >> 0x3f,0) & 1) != 0) || (SUB161(auVar5 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar5 >> 0x4f,0) & 1) != 0) || (SUB161(auVar5 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || (SUB161(auVar5 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar5 >> 0x6f,0) & 1) != 0) || (auVar5._14_2_ >> 7 & 1) != 0) ||
            (auVar5._14_2_ & 0x8000) != 0) break;
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
      }
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (((ulonglong)param_1 & 1) == 0) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0x20 - uVar3;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
           (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
    if (uVar3 != uVar4 >> 1) {
      return uVar3;
    }
    pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
    while (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
          (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                       (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                            (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                           (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                          (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0')
                        && (SUB321(auVar1 >> 0x87,0) & 1) == 0) &&
                       (SUB321(auVar1 >> 0x8f,0) & 1) == 0) && (SUB321(auVar1 >> 0x97,0) & 1) == 0)
                     && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0)
                   && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                 && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
               (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
             (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
           (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
          -1 < auVar1[0x1f]) {
      pauVar2 = pauVar2 + 1;
    }
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}




/* ---- 0x14001aa7c : player_bone_matrix [was: FUN_14001aa7c] ---- */

uint FUN_14001aa7c(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(&DAT_14002c614 + (ulonglong)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar7 = 0;
      uVar8 = 0x2c;
      do {
        uVar9 = uVar5 >> 1;
        if (uVar9 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint *)(&DAT_14002c610 + uVar7 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint *)0x0;
            }
LAB_14001ab1d:
            if (puVar4 != (uint *)0x0) {
              return puVar4[1];
            }
          }
          break;
        }
        uVar6 = uVar9 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar9;
        }
        lVar1 = uVar6 + uVar7;
        puVar4 = (uint *)(&DAT_14002c610 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_14001ab1d;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*puVar4 <= param_1) {
          uVar7 = lVar1 + 1;
          uVar3 = uVar8;
          uVar5 = uVar9;
        }
        uVar8 = uVar3;
      } while (uVar7 <= uVar3);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVar2 = 8;
    }
  }
  return uVar2;
}




/* ---- 0x14001abbc : get_client_entity [was: FUN_14001abbc] ---- */

__acrt_ptd * FUN_14001abbc(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_14001b148();
  p_Var2 = p_Var1 + 0x20;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_14003c470;
  }
  return p_Var2;
}




/* ---- 0x14001b148 : world_to_screen [was: FUN_14001b148] ---- */

__acrt_ptd * FUN_14001b148(void)

{
  DWORD dwErrCode;
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_14003d7a0 == '\0') {
    dwErrCode = GetLastError();
    p_Var1 = p_Var2;
    if (DAT_14003c478 != 0xffffffff) {
      p_Var1 = FlsGetValue(DAT_14003c478);
    }
    if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
       (p_Var2 = p_Var1, p_Var1 == (__acrt_ptd *)0x0)) {
      p_Var2 = FUN_14001afc8();
    }
    SetLastError(dwErrCode);
  }
  else {
    p_Var1 = p_Var2;
    if (DAT_14003c478 != 0xffffffff) {
      p_Var1 = (__acrt_ptd *)FUN_14001b6e8();
    }
    if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
       (p_Var2 = p_Var1, p_Var1 == (__acrt_ptd *)0x0)) {
      p_Var2 = FUN_14001afc8();
    }
  }
  return p_Var2;
}




