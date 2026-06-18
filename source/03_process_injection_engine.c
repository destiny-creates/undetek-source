/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: injection                                                 */
/* /* Process injection, memory write, DLL loading */                     */
/* Functions: 6                                                         */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x1400037d0 : dll_inject_into_process [was: FUN_1400037d0] ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1400037d0(void)

{
  DWORD dwProcessId;
  BOOL BVar1;
  undefined8 uVar2;
  char *pcVar3;
  short *psVar4;
  ulonglong uVar5;
  size_t sVar6;
  longlong lVar7;
  LPVOID lpBaseAddress;
  undefined1 *puVar8;
  char *pcVar9;
  BYTE *pBVar10;
  undefined1 *puVar11;
  LPVOID *lpBuffer;
  undefined1 auStackY_4998 [32];
  undefined1 local_4958 [8];
  LPVOID local_4950;
  LPVOID local_4948;
  DWORD local_4940 [2];
  undefined1 *local_4938;
  void *local_4930;
  LPVOID local_4928;
  undefined1 *local_4920;
  HANDLE local_4918;
  undefined1 *local_4910;
  LPCVOID local_4908;
  longlong local_4900;
  char *local_48f8;
  HMODULE local_48f0;
  char *local_48e8;
  LPVOID local_48e0;
  void *local_48d8;
  char *local_48d0;
  longlong local_48c8;
  char *local_48c0;
  HMODULE local_48b8;
  char *local_48b0;
  HMODULE local_48a8;
  char *local_48a0;
  HMODULE local_4898;
  char local_4888 [32];
  char local_4868 [32];
  char local_4848 [32];
  char local_4828 [32];
  char local_4808 [32];
  code *local_47e8;
  code *local_47e0;
  BYTE local_47c8 [32];
  undefined4 uStack_47a8;
  undefined4 uStack_47a0;
  undefined1 local_479c [32];
  undefined4 uStack_477c;
  undefined4 uStack_4774;
  undefined1 local_4770 [32];
  undefined4 uStack_4750;
  undefined4 uStack_474c;
  undefined4 uStack_4748;
  undefined1 local_4744 [32];
  undefined4 uStack_4724;
  undefined4 uStack_4720;
  undefined4 uStack_471c;
  undefined1 local_4718 [32];
  undefined4 uStack_46f8;
  undefined4 uStack_46f0;
  undefined1 local_46ec [32];
  undefined4 uStack_46cc;
  undefined4 uStack_46c4;
  undefined1 local_46c0 [32];
  undefined4 uStack_46a0;
  undefined4 uStack_4698;
  undefined1 local_4694 [32];
  undefined4 uStack_4674;
  undefined4 uStack_466c;
  undefined1 local_4668 [32];
  undefined4 uStack_4648;
  undefined4 uStack_4640;
  undefined1 local_463c [32];
  undefined4 uStack_461c;
  undefined4 uStack_4618;
  undefined4 uStack_4614;
  undefined4 local_4610;
  undefined1 local_460a [14];
  undefined1 local_45fc;
  undefined4 local_4514;
  undefined4 local_450c;
  undefined4 local_4508;
  undefined4 local_4504;
  undefined4 local_4500;
  undefined4 local_44fc;
  undefined4 local_44f8;
  undefined4 local_44f4;
  undefined4 local_44f0;
  undefined4 local_44c0;
  undefined4 local_44a0;
  undefined8 local_2a20;
  char local_2a10 [40];
  undefined1 uStack_29e8;
  undefined1 local_29e7;
  undefined1 uStack_29e6;
  undefined1 uStack_29e5;
  undefined1 uStack_29e4;
  undefined1 local_29e3;
  undefined1 uStack_29e2;
  undefined1 uStack_29e1;
  undefined1 uStack_29e0;
  undefined1 local_29df;
  undefined1 uStack_29de;
  undefined1 uStack_29dd;
  undefined1 uStack_29dc;
  undefined1 local_29db;
  undefined1 uStack_29da;
  undefined1 uStack_29d9;
  undefined1 uStack_29d8;
  undefined1 local_29d7;
  undefined1 uStack_29d6;
  undefined1 uStack_29d5;
  undefined1 uStack_29d4;
  undefined1 local_29d3;
  undefined1 uStack_29d2;
  undefined1 uStack_29d1;
  undefined1 uStack_29d0;
  undefined1 local_29cf;
  undefined1 uStack_29ce;
  undefined1 uStack_29cd;
  undefined1 uStack_29cc;
  undefined1 local_29cb;
  undefined1 uStack_29ca;
  undefined1 uStack_29c9;
  undefined1 uStack_29c8;
  undefined1 local_29c7;
  undefined1 uStack_29c6;
  undefined1 uStack_29c5;
  undefined1 uStack_29c4;
  undefined1 local_29c3;
  undefined1 uStack_29c2;
  undefined1 uStack_29c1;
  undefined1 uStack_29c0;
  undefined1 local_29bf;
  undefined1 uStack_29be;
  undefined1 uStack_29bd;
  undefined1 local_29b8;
  undefined1 local_29b7;
  undefined1 uStack_29b6;
  undefined1 uStack_29b5;
  undefined1 local_29b4;
  undefined1 local_29b3;
  undefined1 uStack_29b2;
  undefined1 uStack_29b1;
  undefined1 local_29b0;
  undefined1 local_29af;
  undefined1 uStack_29ae;
  undefined1 uStack_29ad;
  undefined1 local_29ac;
  undefined1 local_29ab;
  undefined1 uStack_29aa;
  undefined1 uStack_29a9;
  undefined1 local_29a8;
  undefined1 local_29a7;
  undefined1 uStack_29a6;
  undefined1 uStack_29a5;
  undefined1 local_29a4;
  undefined1 local_29a3;
  undefined1 uStack_29a2;
  undefined1 uStack_29a1;
  undefined1 local_29a0;
  undefined1 local_299f;
  undefined1 uStack_299e;
  undefined1 uStack_299d;
  undefined1 local_299c;
  undefined1 local_299b;
  undefined1 uStack_299a;
  undefined1 uStack_2999;
  undefined1 local_2998;
  undefined1 local_2997;
  undefined1 uStack_2996;
  undefined1 uStack_2995;
  undefined1 local_2994;
  undefined1 local_2993;
  undefined1 uStack_2992;
  undefined1 uStack_2991;
  undefined1 local_2990;
  undefined1 local_298f;
  undefined1 uStack_298e;
  undefined1 uStack_298d;
  undefined1 local_298c;
  undefined1 local_298b;
  undefined1 uStack_298a;
  undefined1 uStack_2989;
  undefined1 local_2988;
  undefined1 local_2987;
  undefined1 uStack_2986;
  undefined1 uStack_2985;
  undefined1 local_2984;
  undefined1 local_2983;
  undefined1 uStack_2982;
  undefined1 uStack_2981;
  undefined1 local_2980;
  undefined1 local_297f;
  undefined1 uStack_297e;
  undefined1 uStack_297d;
  undefined1 local_297c;
  undefined1 local_297b;
  undefined1 uStack_297a;
  undefined1 uStack_2979;
  undefined1 local_2978;
  undefined1 local_2977;
  undefined1 uStack_2976;
  undefined1 uStack_2975;
  undefined1 local_2974;
  undefined1 local_2973;
  undefined1 uStack_2972;
  undefined1 uStack_2971;
  undefined1 local_2970;
  undefined1 local_296f;
  undefined1 uStack_296e;
  undefined1 uStack_296d;
  undefined1 local_296c;
  undefined1 local_296b;
  undefined1 uStack_296a;
  undefined1 uStack_2969;
  undefined1 local_2968;
  undefined1 local_2967;
  undefined1 uStack_2966;
  undefined1 uStack_2965;
  undefined1 local_2964;
  undefined1 local_2963;
  undefined1 uStack_2962;
  undefined1 uStack_2961;
  undefined1 local_2960;
  undefined1 local_295f;
  undefined1 uStack_295e;
  undefined1 uStack_295d;
  undefined1 local_295c;
  undefined1 local_295b;
  undefined1 uStack_295a;
  undefined1 uStack_2959;
  undefined1 local_2958;
  undefined1 local_2957;
  undefined1 uStack_2956;
  undefined1 uStack_2955;
  undefined1 local_2954;
  undefined1 local_2953;
  undefined1 uStack_2952;
  undefined1 uStack_2951;
  undefined1 local_2950;
  undefined1 local_294f;
  undefined1 uStack_294e;
  undefined1 uStack_294d;
  undefined1 local_294c;
  undefined1 local_294b;
  undefined1 uStack_294a;
  undefined1 uStack_2949;
  undefined1 local_2948;
  undefined1 local_2947;
  undefined1 uStack_2946;
  undefined1 uStack_2945;
  undefined1 local_2944;
  undefined1 local_2943;
  undefined1 uStack_2942;
  undefined1 uStack_2941;
  undefined1 local_2940;
  undefined1 local_293f;
  undefined1 uStack_293e;
  undefined1 uStack_293d;
  undefined1 local_293c;
  undefined1 local_293b;
  undefined1 uStack_293a;
  undefined1 uStack_2939;
  undefined1 local_2938;
  undefined1 local_2937;
  undefined1 uStack_2936;
  undefined1 uStack_2935;
  undefined1 local_2934;
  undefined1 local_2933;
  undefined1 uStack_2932;
  undefined1 uStack_2931;
  undefined1 local_2930;
  undefined1 local_292f;
  undefined1 uStack_292e;
  undefined1 uStack_292d;
  undefined1 local_292c;
  undefined1 local_292b;
  undefined1 uStack_292a;
  undefined1 uStack_2929;
  undefined1 local_2928;
  undefined1 local_2927;
  undefined1 uStack_2926;
  undefined1 uStack_2925;
  undefined1 local_2924;
  undefined1 local_2923;
  undefined1 uStack_2922;
  undefined1 uStack_2921;
  undefined1 local_2920;
  undefined1 local_291f;
  undefined1 uStack_291e;
  undefined1 uStack_291d;
  undefined1 local_291c;
  undefined1 local_291b;
  undefined1 uStack_291a;
  undefined1 uStack_2919;
  undefined1 local_2918;
  undefined1 local_2917;
  undefined1 uStack_2916;
  undefined1 uStack_2915;
  undefined1 local_2914;
  undefined1 local_2913;
  undefined1 uStack_2912;
  undefined1 uStack_2911;
  undefined1 local_2910;
  undefined1 local_290f;
  undefined1 uStack_290e;
  undefined1 uStack_290d;
  undefined1 local_290c;
  undefined1 local_290b;
  undefined1 uStack_290a;
  undefined1 uStack_2909;
  undefined1 local_2908;
  undefined1 local_2907;
  undefined1 uStack_2906;
  undefined1 uStack_2905;
  undefined1 local_2904;
  undefined1 local_2903;
  undefined1 uStack_2902;
  undefined1 uStack_2901;
  undefined1 local_2900;
  undefined1 local_28ff;
  undefined1 uStack_28fe;
  undefined1 uStack_28fd;
  undefined1 local_28fc;
  undefined1 local_28fb;
  undefined1 uStack_28fa;
  undefined1 uStack_28f9;
  undefined1 local_28f8;
  undefined1 local_28f7;
  undefined1 uStack_28f6;
  undefined1 uStack_28f5;
  undefined1 local_28f4;
  undefined1 local_28f3;
  undefined1 uStack_28f2;
  undefined1 uStack_28f1;
  undefined1 local_28f0;
  undefined1 local_28ef;
  undefined1 uStack_28ee;
  undefined1 uStack_28ed;
  undefined1 local_28ec;
  undefined1 local_28eb;
  undefined1 uStack_28ea;
  undefined1 uStack_28e9;
  undefined1 local_28e8;
  undefined1 local_28e7;
  undefined1 uStack_28e6;
  undefined1 uStack_28e5;
  undefined1 local_28e4;
  undefined1 local_28e3;
  undefined1 uStack_28e2;
  undefined1 uStack_28e1;
  undefined1 local_28e0;
  undefined1 local_28df;
  undefined1 uStack_28de;
  undefined1 uStack_28dd;
  undefined1 local_28dc;
  undefined1 local_28db;
  undefined1 uStack_28da;
  undefined1 uStack_28d9;
  undefined1 local_28d8;
  undefined1 local_28d7;
  undefined1 uStack_28d6;
  undefined1 uStack_28d5;
  undefined1 local_28d4;
  undefined1 local_28d3;
  undefined1 uStack_28d2;
  undefined1 uStack_28d1;
  undefined1 local_28d0;
  undefined1 local_28cf;
  undefined1 uStack_28ce;
  undefined1 uStack_28cd;
  undefined1 local_28cc;
  undefined1 local_28cb;
  undefined1 uStack_28ca;
  undefined1 uStack_28c9;
  undefined4 local_28b4;
  undefined8 local_28b0;
  code *local_28a8;
  code *local_28a0;
  code *local_2898;
  code *local_2890;
  undefined8 local_2888;
  code *local_2880;
  code *local_2878;
  code *local_2870;
  undefined1 local_2868 [40];
  FARPROC local_2840;
  FARPROC local_2838;
  FARPROC local_2830;
  FARPROC local_2828;
  undefined4 local_2820;
  longlong local_2818;
  undefined8 local_2600;
  undefined8 local_25f8;
  undefined8 local_25f0;
  undefined8 local_25e8;
  undefined4 local_2538;
  undefined4 local_251c;
  undefined4 local_2518;
  undefined4 local_2514;
  undefined1 local_2508 [6800];
  undefined1 local_a78 [2000];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [32];
  undefined1 local_c0 [56];
  undefined1 local_88 [96];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x1400037dd;
  local_28 = DAT_14003c2c0 ^ (ulonglong)auStackY_4998;
  local_4900 = FUN_140006a00();
  if (local_4900 == 0) {
    uVar2 = 1;
  }
  else {
    puVar8 = local_f8;
    for (lVar7 = 0x15; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    pcVar3 = FUN_140001250(local_f8);
    pcVar3 = FUN_140001d20(pcVar3);
    dwProcessId = FUN_140009b90(pcVar3);
    DAT_14003ce70 = OpenProcess(0x1fffff,0,dwProcessId);
    if (DAT_14003ce70 == (HANDLE)0x0) {
      uVar2 = 2;
    }
    else {
      local_4950 = VirtualAllocEx(DAT_14003ce70,(LPVOID)0x0,0x20000,0x3000,0x40);
      if (local_4950 == (LPVOID)0x0) {
        uVar2 = 3;
      }
      else {
        pcVar3 = local_4888;
        for (lVar7 = 0xc0; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar3 = '\0';
          pcVar3 = pcVar3 + 1;
        }
        local_47e8 = GetModuleHandleA_exref;
        local_47e0 = GetProcAddress_exref;
        puVar8 = local_128;
        for (lVar7 = 0x13; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        pcVar3 = FUN_140001210(local_128);
        pcVar3 = FUN_140001c00(pcVar3);
        pcVar9 = local_4888;
        for (lVar7 = 0x11; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
        puVar8 = local_1e8;
        for (lVar7 = 0xd; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        pcVar3 = FUN_1400013d0(local_1e8);
        pcVar3 = FUN_140002740(pcVar3);
        pcVar9 = local_4868;
        for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
        puVar8 = local_188;
        for (lVar7 = 0x11; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        pcVar3 = FUN_1400011f0(local_188);
        pcVar3 = FUN_140001b70(pcVar3);
        pcVar9 = local_4848;
        for (lVar7 = 0xf; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
        puVar8 = local_1c8;
        for (lVar7 = 0xf; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        pcVar3 = FUN_140001410(local_1c8);
        pcVar3 = FUN_1400028f0(pcVar3);
        pcVar9 = local_4828;
        for (lVar7 = 0xd; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
        puVar8 = local_170;
        for (lVar7 = 0x11; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        pcVar3 = FUN_1400011f0(local_170);
        pcVar3 = FUN_140001ae0(pcVar3);
        pcVar9 = local_4808;
        for (lVar7 = 0xf; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
        WriteProcessMemory(DAT_14003ce70,local_4950,local_4888,0xc0,(SIZE_T *)0x0);
        WriteProcessMemory(DAT_14003ce70,(LPVOID)((longlong)local_4950 + 0xc0),&DAT_140036000,0xdd,
                           (SIZE_T *)0x0);
        local_4918 = CreateRemoteThread(DAT_14003ce70,(LPSECURITY_ATTRIBUTES)0x0,0,
                                        (LPTHREAD_START_ROUTINE)((longlong)local_4950 + 0xc0),
                                        local_4950,0,(LPDWORD)0x0);
        if (local_4918 == (HANDLE)0x0) {
          uVar2 = 4;
        }
        else {
          local_4920 = operator_new(0xc0);
          if (local_4920 == (undefined1 *)0x0) {
            local_4910 = (undefined1 *)0x0;
          }
          else {
            puVar8 = local_4920;
            for (lVar7 = 0xc0; local_4910 = local_4920, lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
          }
          local_4938 = local_4910;
          WaitForSingleObject(local_4918,0xffffffff);
          CloseHandle(local_4918);
          ReadProcessMemory(DAT_14003ce70,local_4950,local_4938,0xc0,(SIZE_T *)0x0);
          local_4928 = VirtualAllocEx(DAT_14003ce70,(LPVOID)0x0,0x4000,0x3000,0x40);
          if (local_4928 == (LPVOID)0x0) {
            uVar2 = 3;
          }
          else {
            local_4908 = (LPCVOID)0x0;
            ReadProcessMemory(DAT_14003ce70,*(LPCVOID *)(local_4938 + 0xb0),&local_4908,8,
                              (SIZE_T *)0x0);
            local_4930 = operator_new(0x800);
            local_48d8 = local_4930;
            ReadProcessMemory(DAT_14003ce70,local_4908,local_4930,0x800,(SIZE_T *)0x0);
            pBVar10 = local_47c8;
            for (lVar7 = 0x4520; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pBVar10 = '\0';
              pBVar10 = pBVar10 + 1;
            }
            puVar8 = local_e0;
            for (lVar7 = 0x1e; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001490(local_e0);
            psVar4 = FUN_140002f90(psVar4);
            puVar8 = local_2868;
            for (lVar7 = 0x1a; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80((undefined1 (*) [32])local_2868);
            FUN_1400010b0((longlong)local_2868,uVar5);
            puVar8 = local_288;
            for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_140001190(local_288);
            pcVar3 = FUN_1400018a0(pcVar3);
            pcVar9 = local_2a10;
            for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pcVar9 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar9 = pcVar9 + 1;
            }
            sVar6 = strlen(local_2a10);
            FUN_140001050((longlong)local_2a10,sVar6);
            puVar8 = local_280;
            for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001190(local_280);
            psVar4 = FUN_140002a10(psVar4);
            local_4610 = *(undefined4 *)psVar4;
            uVar5 = FUN_140018b80((undefined1 (*) [32])&local_4610);
            FUN_1400010b0((longlong)&local_4610,uVar5);
            puVar8 = local_268;
            for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001430(local_268);
            psVar4 = FUN_140002b10(psVar4);
            puVar8 = local_460a;
            for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80((undefined1 (*) [32])local_460a);
            FUN_1400010b0((longlong)local_460a,uVar5);
            uStack_47a0 = 0;
            uStack_47a8 = 1;
            local_45fc = 1;
            puVar8 = local_198;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001450(local_198);
            psVar4 = FUN_140002d10(psVar4);
            pBVar10 = local_47c8;
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pBVar10 = (BYTE)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              pBVar10 = pBVar10 + 1;
            }
            uVar5 = FUN_140018b80((undefined1 (*) [32])local_47c8);
            FUN_1400010b0((longlong)local_47c8,uVar5);
            uStack_4774 = 2;
            uStack_477c = 5;
            puVar8 = local_258;
            for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001430(local_258);
            psVar4 = FUN_140002b90(psVar4);
            puVar8 = local_479c;
            for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_479c);
            FUN_1400010b0((longlong)local_479c,uVar5);
            uStack_4748 = 1;
            uStack_4750 = 0x1e;
            uStack_474c = 100;
            puVar8 = local_1b8;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001450(local_1b8);
            psVar4 = FUN_140002c90(psVar4);
            puVar8 = local_4770;
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_4770);
            FUN_1400010b0((longlong)local_4770,uVar5);
            uStack_471c = 1;
            uStack_4724 = 1;
            uStack_4720 = 4;
            puVar8 = local_1a8;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001450(local_1a8);
            psVar4 = FUN_140002d90(psVar4);
            puVar8 = local_4744;
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_4744);
            FUN_1400010b0((longlong)local_4744,uVar5);
            uStack_46f0 = 0;
            uStack_46f8 = 1;
            puVar8 = local_158;
            for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001470(local_158);
            psVar4 = FUN_140002e10(psVar4);
            puVar8 = local_4718;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_4718);
            FUN_1400010b0((longlong)local_4718,uVar5);
            uStack_46c4 = 2;
            uStack_46cc = 6;
            puVar8 = local_248;
            for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001430(local_248);
            psVar4 = FUN_140002b90(psVar4);
            puVar8 = local_46ec;
            for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_46ec);
            FUN_1400010b0((longlong)local_46ec,uVar5);
            uStack_4698 = 0;
            uStack_46a0 = 0;
            puVar8 = local_140;
            for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001470(local_140);
            psVar4 = FUN_140002e90(psVar4);
            puVar8 = local_46c0;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_46c0);
            FUN_1400010b0((longlong)local_46c0,uVar5);
            uStack_466c = 0;
            uStack_4674 = 1;
            puVar8 = local_238;
            for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001430(local_238);
            psVar4 = FUN_140002a90(psVar4);
            puVar8 = local_4694;
            for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_4694);
            FUN_1400010b0((longlong)local_4694,uVar5);
            uStack_4640 = 0;
            uStack_4648 = 0;
            puVar8 = local_110;
            for (lVar7 = 0x14; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_140001230(local_110);
            psVar4 = FUN_140002f10(psVar4);
            puVar8 = local_4668;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_4668);
            FUN_1400010b0((longlong)local_4668,uVar5);
            uStack_4614 = 1;
            uStack_461c = 1;
            uStack_4618 = 0x1e;
            puVar8 = local_1d8;
            for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            psVar4 = (short *)FUN_1400013f0(local_1d8);
            psVar4 = FUN_140002c10(psVar4);
            puVar8 = local_463c;
            for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar8 = puVar8 + 1;
            }
            uVar5 = FUN_140018b80(&local_463c);
            FUN_1400010b0((longlong)local_463c,uVar5);
            local_44a0 = 0x42480000;
            local_44c0 = 0xbdcccccd;
            uStack_29e8 = 0;
            local_29e7 = 0;
            uStack_29e6 = 0;
            uStack_29e5 = 0x96;
            uStack_29e4 = 0xff;
            local_29e3 = 0xff;
            uStack_29e2 = 0xff;
            uStack_29e1 = 0xff;
            uStack_29e0 = 0xe1;
            local_29df = 0xe1;
            uStack_29de = 0xe1;
            uStack_29dd = 0xff;
            uStack_29d8 = 0x12;
            local_29d7 = 0x12;
            uStack_29d6 = 0x12;
            uStack_29d5 = 0xff;
            uStack_29d4 = 0x2d;
            local_29d3 = 0x2d;
            uStack_29d2 = 0x2d;
            uStack_29d1 = 0xff;
            uStack_29dc = 0x3c;
            local_29db = 0x3c;
            uStack_29da = 0x3c;
            uStack_29d9 = 0xff;
            uStack_29d0 = 0xff;
            local_29cf = 0x80;
            uStack_29ce = 0;
            uStack_29cd = 0xff;
            uStack_29cc = 0xff;
            local_29cb = 0x99;
            uStack_29ca = 0x33;
            uStack_29c9 = 200;
            uStack_29c8 = 0;
            local_29c7 = 0xff;
            uStack_29c6 = 0;
            uStack_29c5 = 0xff;
            uStack_29c4 = 0xff;
            local_29c3 = 0;
            uStack_29c2 = 0;
            uStack_29c1 = 0xff;
            uStack_29c0 = 0x66;
            local_29bf = 0xb2;
            uStack_29be = 0xff;
            uStack_29bd = 0xff;
            local_29b8 = 0xff;
            local_29b7 = 0x8c;
            uStack_29b6 = 0;
            uStack_29b5 = 0xff;
            local_2940 = 0xff;
            local_293f = 0xa5;
            uStack_293e = 0;
            uStack_293d = 0xff;
            local_29b4 = 0;
            local_29b3 = 0;
            uStack_29b2 = 0x8b;
            uStack_29b1 = 0xff;
            local_293c = 0x87;
            local_293b = 0xce;
            uStack_293a = 0xfa;
            uStack_2939 = 0xff;
            local_29b0 = 0x80;
            local_29af = 0;
            uStack_29ae = 0x80;
            uStack_29ad = 0xff;
            local_2938 = 0xff;
            local_2937 = 0xb6;
            uStack_2936 = 0xc1;
            uStack_2935 = 0xff;
            local_29ac = 0x8b;
            local_29ab = 0;
            uStack_29aa = 0;
            uStack_29a9 = 0xff;
            local_2934 = 0xff;
            local_2933 = 99;
            uStack_2932 = 0x47;
            uStack_2931 = 0xff;
            local_29a8 = 0xff;
            local_29a7 = 0xc0;
            uStack_29a6 = 0xcb;
            uStack_29a5 = 0xff;
            local_2930 = 0xff;
            local_292f = 0xf5;
            uStack_292e = 0xee;
            uStack_292d = 0xff;
            local_29a4 = 0xff;
            local_29a3 = 0xa5;
            uStack_29a2 = 0;
            uStack_29a1 = 0xff;
            local_292c = 0xff;
            local_292b = 0xf5;
            uStack_292a = 0xee;
            uStack_2929 = 0xff;
            local_29a0 = 0xff;
            local_299f = 0xf5;
            uStack_299e = 0xee;
            uStack_299d = 0xff;
            local_2928 = 0;
            local_2927 = 0x80;
            uStack_2926 = 0;
            uStack_2925 = 0xff;
            local_299c = 0;
            local_299b = 0;
            uStack_299a = 0xff;
            uStack_2999 = 0xff;
            local_2924 = 0xff;
            local_2923 = 0xf5;
            uStack_2922 = 0xee;
            uStack_2921 = 0xff;
            local_2998 = 0xff;
            local_2997 = 0xff;
            uStack_2996 = 0;
            uStack_2995 = 0xff;
            local_2920 = 0xff;
            local_291f = 0xf5;
            uStack_291e = 0xee;
            uStack_291d = 0xff;
            local_2994 = 0;
            local_2993 = 100;
            uStack_2992 = 0;
            uStack_2991 = 0xff;
            local_291c = 0x39;
            local_291b = 0xff;
            uStack_291a = 0x14;
            uStack_2919 = 0xff;
            local_2990 = 0;
            local_298f = 0xbf;
            uStack_298e = 0xff;
            uStack_298d = 0xff;
            local_2918 = 0xff;
            local_2917 = 0x69;
            uStack_2916 = 0xb4;
            uStack_2915 = 0xff;
            local_298c = 0x30;
            local_298b = 0x19;
            uStack_298a = 0x34;
            uStack_2989 = 0xff;
            local_2914 = 0xff;
            local_2913 = 0xff;
            uStack_2912 = 0;
            uStack_2911 = 0xff;
            local_2988 = 0;
            local_2987 = 0xff;
            uStack_2986 = 0xef;
            uStack_2985 = 0xff;
            local_2910 = 0xff;
            local_290f = 0;
            uStack_290e = 0xff;
            uStack_290d = 0xff;
            local_2984 = 0xff;
            local_2983 = 0x45;
            uStack_2982 = 0;
            uStack_2981 = 0xff;
            local_290c = 0x36;
            local_290b = 0x45;
            uStack_290a = 0x4f;
            uStack_2909 = 0xff;
            local_2980 = 0;
            local_297f = 0;
            uStack_297e = 0x8b;
            uStack_297d = 0xff;
            local_2908 = 0xff;
            local_2907 = 0xa5;
            uStack_2906 = 0;
            uStack_2905 = 0xff;
            local_297c = 0xff;
            local_297b = 0xdf;
            uStack_297a = 0;
            uStack_2979 = 0xff;
            local_2904 = 0xdc;
            local_2903 = 0x14;
            uStack_2902 = 0x3c;
            uStack_2901 = 0xff;
            local_2978 = 0;
            local_2977 = 0xff;
            uStack_2976 = 0xff;
            uStack_2975 = 0xff;
            local_2900 = 0x30;
            local_28ff = 0x19;
            uStack_28fe = 0x34;
            uStack_28fd = 0xff;
            local_2974 = 0;
            local_2973 = 0;
            uStack_2972 = 0x8b;
            uStack_2971 = 0xff;
            local_28fc = 0xff;
            local_28fb = 0x69;
            uStack_28fa = 0xb4;
            uStack_28f9 = 0xff;
            local_2970 = 0xff;
            local_296f = 0x69;
            uStack_296e = 0xb4;
            uStack_296d = 0xff;
            local_28f8 = 0;
            local_28f7 = 0xbf;
            uStack_28f6 = 0xff;
            uStack_28f5 = 0xff;
            local_296c = 0;
            local_296b = 0x44;
            uStack_296a = 0xcc;
            uStack_2969 = 0xff;
            local_28f4 = 0x32;
            local_28f3 = 0xcd;
            uStack_28f2 = 0x32;
            uStack_28f1 = 0xff;
            local_2968 = 0xff;
            local_2967 = 0;
            uStack_2966 = 0;
            uStack_2965 = 0xff;
            local_28f0 = 0xff;
            local_28ef = 0;
            uStack_28ee = 0;
            uStack_28ed = 0xff;
            local_2964 = 0;
            local_2963 = 0x99;
            uStack_2962 = 0xff;
            uStack_2961 = 0xff;
            local_28ec = 0;
            local_28eb = 0x99;
            uStack_28ea = 0xff;
            uStack_28e9 = 0xff;
            local_2960 = 0x39;
            local_295f = 0xff;
            uStack_295e = 0x14;
            uStack_295d = 0xff;
            local_28e8 = 0x39;
            local_28e7 = 0xff;
            uStack_28e6 = 0x14;
            uStack_28e5 = 0xff;
            local_295c = 0xff;
            local_295b = 0x8c;
            uStack_295a = 0;
            uStack_2959 = 0xff;
            local_28e4 = 0xff;
            local_28e3 = 0x8c;
            uStack_28e2 = 0;
            uStack_28e1 = 0xff;
            local_2958 = 0xff;
            local_2957 = 0xdf;
            uStack_2956 = 0;
            uStack_2955 = 0xff;
            local_28e0 = 0xff;
            local_28df = 0xdf;
            uStack_28de = 0;
            uStack_28dd = 0xff;
            local_2954 = 0x80;
            local_2953 = 0;
            uStack_2952 = 0x80;
            uStack_2951 = 0xff;
            local_28dc = 0x80;
            local_28db = 0;
            uStack_28da = 0x80;
            uStack_28d9 = 0xff;
            local_2950 = 0xff;
            local_294f = 0xff;
            uStack_294e = 0xff;
            uStack_294d = 0xff;
            local_28d8 = 0xff;
            local_28d7 = 0xff;
            uStack_28d6 = 0xff;
            uStack_28d5 = 0xff;
            local_294c = 0xc0;
            local_294b = 0xc0;
            uStack_294a = 0xc0;
            uStack_2949 = 0xff;
            local_28d4 = 0xc0;
            local_28d3 = 0xc0;
            uStack_28d2 = 0xc0;
            uStack_28d1 = 0xff;
            local_2948 = 0xff;
            local_2947 = 0x69;
            uStack_2946 = 0xb4;
            uStack_2945 = 0xff;
            local_28d0 = 0xff;
            local_28cf = 0x69;
            uStack_28ce = 0xb4;
            uStack_28cd = 0xff;
            local_2944 = 0;
            local_2943 = 0;
            uStack_2942 = 0;
            uStack_2941 = 0xff;
            local_28cc = 0;
            local_28cb = 0;
            uStack_28ca = 0;
            uStack_28c9 = 0xff;
            puVar8 = local_278;
            for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_1400011b0(local_278);
            pcVar3 = FUN_140001930(pcVar3);
            local_2820 = FUN_140009b90(pcVar3);
            local_2818 = local_4900;
            local_2890 = GetTickCount64_exref;
            local_28a8 = OpenProcess_exref;
            local_28a0 = GetAsyncKeyState_exref;
            local_2888 = DAT_14003ceb0;
            local_2880 = RegSetValueExW_exref;
            local_2878 = RegOpenKeyExW_exref;
            local_2870 = RegCloseKey_exref;
            local_2898 = SendInput_exref;
            puVar8 = local_290;
            for (lVar7 = 7; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_140001170(local_290);
            local_48c0 = FUN_140001780(pcVar3);
            puVar8 = local_228;
            for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_1400011d0(local_228);
            pcVar3 = FUN_140001a50(pcVar3);
            local_48b8 = GetModuleHandleA(pcVar3);
            local_2840 = GetProcAddress(local_48b8,local_48c0);
            puVar8 = local_2a0;
            for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_140001150(local_2a0);
            local_48b0 = FUN_140001660(pcVar3);
            puVar8 = local_218;
            for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_1400011d0(local_218);
            pcVar3 = FUN_140001a50(pcVar3);
            local_48a8 = GetModuleHandleA(pcVar3);
            local_2838 = GetProcAddress(local_48a8,local_48b0);
            puVar8 = local_2a8;
            for (lVar7 = 5; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_140001130(local_2a8);
            local_48a0 = FUN_1400015d0(pcVar3);
            puVar8 = local_208;
            for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_1400011d0(local_208);
            pcVar3 = FUN_140001a50(pcVar3);
            local_4898 = GetModuleHandleA(pcVar3);
            local_2830 = GetProcAddress(local_4898,local_48a0);
            puVar8 = local_298;
            for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_140001150(local_298);
            local_48f8 = FUN_1400016f0(pcVar3);
            puVar8 = local_1f8;
            for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_1400011d0(local_1f8);
            pcVar3 = FUN_140001a50(pcVar3);
            local_48f0 = GetModuleHandleA(pcVar3);
            local_2828 = GetProcAddress(local_48f0,local_48f8);
            local_25f8 = DAT_14003ce80;
            local_25e8 = DAT_14003ce88;
            local_2600 = DAT_14003ce78;
            local_25f0 = DAT_14003ce90;
            local_4514 = 0xbf800000;
            local_44f4 = 0x3dcccccd;
            local_44f8 = 0x3a83126f;
            local_44f0 = 0x3f000000;
            local_450c = 0x3f800000;
            local_4508 = 0x40000000;
            local_4504 = 0x40800000;
            local_4500 = 0x41200000;
            local_44fc = 0x47c35000;
            local_2538 = 0x3f666666;
            local_28b4 = 0x40c00000;
            local_251c = 0x3d4ccccd;
            local_2518 = 0x42c80000;
            local_2514 = 0x3c23d70a;
            puVar8 = &DAT_14003a810;
            puVar11 = local_2508;
            for (lVar7 = 0x1a90; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar8 = &DAT_14003a3c0;
            puVar11 = local_a78;
            for (lVar7 = 0x449; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            local_28b0 = *(undefined8 *)((longlong)local_4930 + 0x468);
            *(longlong *)((longlong)local_4930 + 0x468) = (longlong)local_4950 + 0x4520;
            WriteProcessMemory(DAT_14003ce70,local_4928,local_4930,0x800,(SIZE_T *)0x0);
            local_2a20 = *(undefined8 *)(local_4938 + 0xb0);
            FUN_140006c90(local_47c8);
            WriteProcessMemory(DAT_14003ce70,local_4950,local_47c8,0x4520,(SIZE_T *)0x0);
            local_48e0 = (LPVOID)((longlong)local_4950 + 0x4520);
            local_48e8 = FUN_140009730(0x1400360e0,'\x11');
            *(LPVOID *)local_48e8 = local_4950;
            WriteProcessMemory(DAT_14003ce70,local_48e0,&DAT_1400360e0,0x42d4,(SIZE_T *)0x0);
            uVar2 = 8;
            lpBuffer = &local_4928;
            lpBaseAddress = *(LPVOID *)(local_4938 + 0xb0);
            WriteProcessMemory(DAT_14003ce70,lpBaseAddress,lpBuffer,8,(SIZE_T *)0x0);
            puVar8 = local_c0;
            for (lVar7 = 0x2a; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_140001290(local_c0);
            pcVar3 = FUN_140001ed0(pcVar3);
            FUN_140007400((longlong)pcVar3,lpBaseAddress,lpBuffer,uVar2);
            puVar8 = local_88;
            for (lVar7 = 0x56; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            pcVar3 = FUN_1400012f0(local_88);
            local_48d0 = FUN_140002080(pcVar3);
            local_48c8 = *(longlong *)(local_4938 + 0xb8);
            lVar7 = FUN_140009780(local_48c8,0xffffffff,local_48d0);
            if (lVar7 != 0) {
              local_4948 = (LPVOID)(lVar7 + 2);
              BVar1 = VirtualProtectEx(DAT_14003ce70,local_4948,1,0x40,local_4940);
              if (BVar1 != 0) {
                local_4958[0] = 0;
                WriteProcessMemory(DAT_14003ce70,local_4948,local_4958,1,(SIZE_T *)0x0);
                VirtualProtectEx(DAT_14003ce70,local_4948,1,local_4940[0],local_4940);
              }
            }
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}




/* ---- 0x140006a00 : injection_engine [was: FUN_140006a00] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140006a00(void)

{
  DWORD dwProcessId;
  char *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0 [2];
  char *local_c8;
  HMODULE local_c0;
  char *local_b8;
  HMODULE local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_14003c2c0 ^ (ulonglong)auStack_f8;
  puVar3 = local_88;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pcVar1 = FUN_1400011b0(local_88);
  pcVar1 = FUN_140001930(pcVar1);
  dwProcessId = FUN_140009b90(pcVar1);
  DAT_14003ce70 = OpenProcess(0x1fffff,0,dwProcessId);
  if (DAT_14003ce70 == (HANDLE)0x0) {
    local_d8 = 0;
  }
  else {
    puVar3 = local_30;
    for (lVar2 = 0x1b; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    pcVar1 = FUN_140001270(local_30);
    local_c8 = FUN_140001e40(pcVar1);
    puVar3 = local_78;
    for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    pcVar1 = FUN_1400011d0(local_78);
    pcVar1 = FUN_140001a50(pcVar1);
    local_c0 = GetModuleHandleA(pcVar1);
    DAT_14003cec0 = GetProcAddress(local_c0,local_c8);
    puVar3 = local_48;
    for (lVar2 = 0x15; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    pcVar1 = FUN_140001250(local_48);
    local_b8 = FUN_140001db0(pcVar1);
    puVar3 = local_68;
    for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    pcVar1 = FUN_1400011d0(local_68);
    pcVar1 = FUN_140001a50(pcVar1);
    local_b0 = GetModuleHandleA(pcVar1);
    DAT_14003ceb0 = GetProcAddress(local_b0,local_b8);
    puVar3 = local_58;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    pcVar1 = FUN_140001390(local_58);
    pcVar1 = FUN_140002590(pcVar1);
    local_d8 = FUN_140009990(pcVar1,local_d0);
    local_a8 = local_d8 + 0x20e8ea;
    lVar2 = FUN_140009920(local_a8,3,7);
    DAT_14003ce78 = FUN_140001000(lVar2,0);
    local_a0 = local_d8 + 0x1c74d0;
    lVar2 = FUN_140009920(local_a0,3,7);
    DAT_14003ce80 = FUN_140001000(lVar2,0);
    local_98 = local_d8 + 0xb70f53;
    DAT_14003ce88 = FUN_140009920(local_98,3,7);
    local_90 = local_d8 + 0xb0743b;
    DAT_14003ce90 = FUN_140009920(local_90,3,7);
    CloseHandle(DAT_14003ce70);
  }
  return local_d8;
}




/* ---- 0x14000f91c : FUN_14000f91c [was: FUN_14000f91c] ---- */

FARPROC FUN_14000f91c(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  wchar_t *lpLibFileName;
  DWORD DVar2;
  int iVar3;
  HMODULE hLibModule;
  FARPROC pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  pFVar4 = *(FARPROC *)(&DAT_14003d588 + uVar6 * 8);
  if (pFVar4 != (FARPROC)0xffffffffffffffff) {
    if (pFVar4 != (FARPROC)0x0) {
      return pFVar4;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      uVar5 = (ulonglong)*param_3;
      hLibModule = *(HMODULE *)(&DAT_14003d570 + uVar5 * 8);
      if (hLibModule == (HMODULE)0x0) {
        lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_14002aec8)[uVar5];
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
        if ((hLibModule != (HMODULE)0x0) ||
           (((DVar2 = GetLastError(), DVar2 == 0x57 &&
             (iVar3 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar3 != 0)) &&
            (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)))
           ) {
          LOCK();
          lVar1 = *(longlong *)(&DAT_14003d570 + uVar5 * 8);
          *(HMODULE *)(&DAT_14003d570 + uVar5 * 8) = hLibModule;
          UNLOCK();
          if (lVar1 != 0) {
            FreeLibrary(hLibModule);
          }
          goto LAB_14000fa4d;
        }
        LOCK();
        *(undefined8 *)(&DAT_14003d570 + uVar5 * 8) = 0xffffffffffffffff;
        UNLOCK();
      }
      else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_14000fa4d:
        pFVar4 = GetProcAddress(hLibModule,param_2);
        if (pFVar4 != (FARPROC)0x0) {
          LOCK();
          *(FARPROC *)(&DAT_14003d588 + uVar6 * 8) = pFVar4;
          UNLOCK();
          return pFVar4;
        }
        break;
      }
    }
    LOCK();
    *(undefined8 *)(&DAT_14003d588 + uVar6 * 8) = 0xffffffffffffffff;
    UNLOCK();
  }
  return (FARPROC)0x0;
}




/* ---- 0x140010838 : keyboard_input_poll [was: FUN_140010838] ---- */

void FUN_140010838(void)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)FUN_140010650(0);
  FUN_140010724(pFVar1);
  return;
}




/* ---- 0x140019fd0 : FUN_140019fd0 [was: FUN_140019fd0] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140019fd0(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) &&
     (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*pFVar2)((ulonglong)param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}




/* ---- 0x14001b3b0 : FUN_14001b3b0 [was: FUN_14001b3b0] ---- */

FARPROC FUN_14001b3b0(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  HMODULE hLibModule;
  FARPROC pFVar6;
  FARPROC pFVar7;
  DWORD local_res18 [2];
  
  do {
    if (param_3 == param_4) {
      pFVar7 = (FARPROC)0x0;
LAB_14001b4a2:
      __acrt_lock(0xe);
      local_res18[0] = 0;
      BVar5 = VirtualProtect(&DAT_140041000,0x100,4,local_res18);
      if (BVar5 != 0) {
        pFVar6 = pFVar7;
        if (pFVar7 == (FARPROC)0x0) {
          pFVar6 = (FARPROC)0xffffffffffffffff;
        }
        LOCK();
        (&DAT_140041000)[param_1] = pFVar6;
        UNLOCK();
        BVar5 = VirtualProtect(&DAT_140041000,0x100,2,local_res18);
        if (BVar5 != 0) {
          __acrt_unlock(0xe);
          return pFVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
    uVar2 = *param_3;
    hLibModule = (HMODULE)(&DAT_14003d7b0)[uVar2];
    if (hLibModule == (HMODULE)0x0) {
      lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_14002ce00)[uVar2];
      hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((hLibModule != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
            (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
          (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0))))
      {
        LOCK();
        lVar1 = (&DAT_14003d7b0)[uVar2];
        (&DAT_14003d7b0)[uVar2] = hLibModule;
        UNLOCK();
        if (lVar1 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_14001b548;
      }
      LOCK();
      (&DAT_14003d7b0)[uVar2] = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_14001b548:
      pFVar7 = GetProcAddress(hLibModule,param_2);
      goto LAB_14001b4a2;
    }
    param_3 = param_3 + 1;
  } while( true );
}




