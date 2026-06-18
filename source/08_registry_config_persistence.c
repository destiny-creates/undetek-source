/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: persistence                                               */
/* /* Registry config read/write, Software\udtk */                        */
/* Functions: 4                                                         */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x140006c90 : FUN_140006c90 [was: FUN_140006c90] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140006c90(BYTE *param_1)

{
  LSTATUS LVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStackY_78 [32];
  DWORD local_48;
  DWORD local_44;
  HKEY local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStackY_78;
  puVar4 = local_38;
  for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pcVar2 = FUN_140001410(local_38);
  pcVar2 = FUN_140002980(pcVar2);
  LVar1 = RegOpenKeyExA((HKEY)0xffffffff80000001,pcVar2,0,0x20019,&local_40);
  if (LVar1 == 0) {
    local_44 = 0;
    local_48 = 0;
    LVar1 = RegQueryValueExA(local_40,(LPCSTR)0x0,(LPDWORD)0x0,&local_44,(LPBYTE)0x0,&local_48);
    if (((LVar1 == 0) && (local_44 == 3)) && (local_48 == 0x1b8)) {
      RegQueryValueExA(local_40,(LPCSTR)0x0,(LPDWORD)0x0,&local_44,param_1,&local_48);
      RegCloseKey(local_40);
    }
    else {
      RegCloseKey(local_40);
      puVar4 = local_28;
      for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      pcVar2 = FUN_140001410(local_28);
      pcVar2 = FUN_140002980(pcVar2);
      RegDeleteKeyA((HKEY)0xffffffff80000001,pcVar2);
      FUN_140006df0(param_1);
    }
  }
  else {
    FUN_140006df0(param_1);
  }
  return;
}




/* ---- 0x140006df0 : registry_write_config [was: FUN_140006df0] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140006df0(BYTE *param_1)

{
  LSTATUS LVar1;
  char *pcVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStackY_88 [32];
  HKEY local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStackY_88;
  puVar5 = local_28;
  for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pcVar2 = FUN_140001410(local_28);
  pcVar2 = FUN_140002980(pcVar2);
  LVar1 = RegCreateKeyExA((HKEY)0xffffffff80000001,pcVar2,0,(LPSTR)0x0,0,0x20006,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_30,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegSetValueExA(local_30,(LPCSTR)0x0,0,3,param_1,0x1b8);
    RegCloseKey(local_30);
    uVar3 = (ulonglong)(LVar1 == 0);
  }
  else {
    uVar3 = CONCAT44(extraout_var,LVar1) & 0xffffffffffffff00;
  }
  return uVar3;
}




/* ---- 0x140006ef0 : config_copy_block [was: FUN_140006ef0] ---- */

void FUN_140006ef0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  FUN_14000b0e0(param_1,param_2);
  return;
}




/* ---- 0x14000a394 : FUN_14000a394 [was: FUN_14000a394] ---- */

void FUN_14000a394(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined7 extraout_var;
  
  FUN_14001955c(1);
  uVar4 = FUN_14000aac0();
  _set_fmode((int)uVar4);
  uVar4 = FUN_14000aab4();
  puVar5 = (undefined4 *)FUN_14001a27c();
  *puVar5 = (int)uVar4;
  uVar4 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar4 != '\0') {
    FUN_14000ad40();
    atexit(FUN_14000ad7c);
    uVar4 = FUN_14000aab8();
    uVar6 = FUN_140019814((int)uVar4);
    if ((int)uVar6 == 0) {
      FUN_14000aac8();
      bVar2 = FUN_14000aafc();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        FUN_1400195d0(0x14000aab4);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar4 = FUN_14000aab4();
      _configthreadlocale((int)uVar4);
      cVar3 = FUN_14000aad8();
      if (cVar3 != '\0') {
        thunk_FUN_140019994();
      }
      FUN_14000aab4();
      uVar4 = thunk_FUN_14000aab4();
      if ((int)uVar4 == 0) {
        return;
      }
    }
  }
  FUN_14000ab24(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




