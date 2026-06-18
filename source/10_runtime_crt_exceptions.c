/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: runtime                                                   */
/* /* CRT init, TLS callbacks, security cookies */                        */
/* Functions: 71                                                        */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x140009780 : FUN_140009780 [was: FUN_140009780] ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140009780(longlong param_1,ulonglong param_2,char *param_3)

{
  bool bVar1;
  undefined1 auStack_10d8 [32];
  int local_10b8;
  longlong local_10b0;
  longlong *local_10a8;
  undefined1 *local_10a0;
  longlong *local_1098;
  longlong local_1090;
  longlong local_1088;
  longlong local_1080;
  longlong local_1078 [3];
  longlong local_1060 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1048 [32];
  undefined1 local_1028 [4096];
  undefined1 local_28 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x140009799;
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_10d8;
  FUN_140008670(local_1048,param_3);
  FUN_140009540(local_1078,local_1048);
  ~basic_string<>((undefined8 *)local_1048);
  local_10b8 = 0;
  do {
    if (param_2 <= (ulonglong)(longlong)local_10b8) {
      local_1080 = 0;
      FUN_140008a80(local_1078);
      return local_1080;
    }
    bVar1 = FUN_140009f10(param_1 + local_10b8,local_1028,0x1000);
    if (bVar1) {
      local_10a8 = local_1060;
      local_10a0 = local_28;
      local_1098 = FUN_1400086d0(local_10a8,local_1078);
      local_10b0 = FUN_140009ce0(local_1098,(longlong)local_1028,(longlong)local_10a0);
      if (local_10b0 != 0) {
        local_1090 = local_10b0 - (longlong)local_1028;
        local_1088 = param_1 + local_1090 + (longlong)local_10b8;
        FUN_140008a80(local_1078);
        return local_1088;
      }
    }
    local_10b8 = local_10b8 + 0x800;
  } while( true );
}




/* ---- 0x140009990 : FUN_140009990 [was: FUN_140009990] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140009990(char *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 auStack_588 [32];
  undefined8 local_568;
  char *local_558;
  char *local_550;
  longlong local_548;
  longlong local_540;
  code *local_538;
  undefined1 local_530 [8];
  undefined8 local_528;
  longlong local_4f8 [6];
  undefined8 local_4c8;
  undefined4 local_4b8;
  longlong local_498;
  undefined1 local_418 [16];
  longlong local_408;
  undefined1 local_3b8 [24];
  undefined8 local_3a0;
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_588;
  puVar4 = local_530;
  for (lVar3 = 0x30; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_538 = DAT_14003cec0;
  local_568 = 0;
  iVar2 = (*DAT_14003cec0)(DAT_14003ce70,0,local_530,0x30);
  if (((iVar2 == 0) && (bVar1 = FUN_140009f10(local_528,local_3b8,0x2a0), bVar1)) &&
     (bVar1 = FUN_140009f10(local_3a0,local_418,0x58), bVar1)) {
    local_540 = local_408;
    local_548 = local_408;
    do {
      bVar1 = FUN_140009f10(local_548,local_4f8,0xe0);
      if (!bVar1) {
        return 0;
      }
      pcVar5 = local_118;
      for (lVar3 = 0x100; lVar3 != 0; lVar3 = lVar3 + -1) {
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + 1;
      }
      FUN_140008530(local_498,(longlong)local_118,0x100);
      local_550 = local_118;
      local_558 = param_1;
      while ((*local_558 != '\0' && (*local_558 == *local_550))) {
        local_558 = local_558 + 1;
        local_550 = local_550 + 2;
        if ((*local_558 == '\0') && (*local_550 == '\0')) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = local_4b8;
            return local_4c8;
          }
          return local_4c8;
        }
      }
      local_548 = local_4f8[0];
    } while (local_4f8[0] != local_540);
  }
  return 0;
}




/* ---- 0x14000a17c : tls_callback [was: operator_new] ---- */

/* Library Function - Single Match
    void * __ptr64 __cdecl operator new(unsigned __int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  void *pvVar4;
  
  do {
    pvVar3 = _malloc_base(param_1);
    if (pvVar3 != (LPVOID)0x0) {
      return pvVar3;
    }
    bVar2 = FUN_1400192d0(param_1);
  } while ((int)CONCAT71(extraout_var,bVar2) != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_14000a628();
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  FUN_14000a608();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}




/* ---- 0x14000a1b8 : tls_callback_stub [was: operator_new] ---- */

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  void *pvVar4;
  
  do {
    pvVar3 = _malloc_base(param_1);
    if (pvVar3 != (LPVOID)0x0) {
      return pvVar3;
    }
    bVar2 = FUN_1400192d0(param_1);
  } while ((int)CONCAT71(extraout_var,bVar2) != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_14000a628();
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  FUN_14000a608();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}




/* ---- 0x14000a1c0 : tls_callback_stub2 [was: thunk_FUN_14001b320] ---- */

void thunk_FUN_14001b320(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_14003df40,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_14001aa7c(DVar2);
    p_Var4 = FUN_14001abbc();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}




/* ---- 0x14000a1e8 : FUN_14000a1e8 [was: FUN_14000a1e8] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14000a1e8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0;
  }
  return uVar1;
}




/* ---- 0x14000a260 : security_cookie_init [was: __chkstk] ---- */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}




/* ---- 0x14000a2c0 : crt_startup_init [was: __security_check_cookie] ---- */

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_14003c2c0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_14000a67c();
  return;
}




/* ---- 0x14000a648 : atexit_handler [was: __raise_securityfailure] ---- */

/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00014000a675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}




/* ---- 0x14000a67c : FUN_14000a67c [was: FUN_14000a67c] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000a67c(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14000a6a7;
  FUN_14000a750((PCONTEXT)&DAT_14003cf70);
  _DAT_14003cee0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_14003d008 = puVar3 + 0x40;
  _DAT_14003cff0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_14003ced0 = 0xc0000409;
  _DAT_14003ced4 = 1;
  _DAT_14003cee8 = 1;
  DAT_14003cef0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_14003c2c0;
  *(undefined8 *)(puVar3 + 0x28) = DAT_14003c300;
  *(undefined8 *)(puVar3 + -8) = 0x14000a749;
  DAT_14003d068 = _DAT_14003cee0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140029f38);
  return;
}




/* ---- 0x14000a750 : heap_init [was: FUN_14000a750] ---- */

void FUN_14000a750(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}




/* ---- 0x14000aa04 : FUN_14000aa04 [was: FUN_14000aa04] ---- */

void FUN_14000aa04(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_14003c2c0 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_14003c2c0 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_14003c2c0 == 0x2b992ddfa232) {
      DAT_14003c2c0 = 0x2b992ddfa233;
    }
  }
  DAT_14003c300 = ~DAT_14003c2c0;
  return;
}




/* ---- 0x14000ad40 : FUN_14000ad40 [was: FUN_14000ad40] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000ad40(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140032f38; puVar1 < &DAT_140032f38; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* ---- 0x14000ad7c : FUN_14000ad7c [was: FUN_14000ad7c] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000ad7c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140032f48; puVar1 < &DAT_140032f48; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* ---- 0x14000b37c : FUN_14000b37c [was: FUN_14000b37c] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000b37c(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (**(code **)(*(longlong *)(*param_1 + -8) + 0x40))();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}




/* ---- 0x14000b424 : FUN_14000b424 [was: FUN_14000b424] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_14000b424(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *local_18;
  undefined8 local_10;
  
  local_18 = param_1;
  local_10 = param_3;
  lVar1 = FUN_14000c540();
  (**(code **)(lVar1 + 0x10))(*param_1,&local_18);
  return 0;
}




/* ---- 0x14000b478 : FUN_14000b478 [was: FUN_14000b478] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_14000b478(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *local_18;
  undefined8 local_10;
  
  local_18 = param_1;
  local_10 = param_3;
  lVar1 = FUN_14000c540();
  (**(code **)(lVar1 + 0x10))(*param_1,&local_18);
  return 0;
}




/* ---- 0x14000baec : FUN_14000baec [was: FUN_14000baec] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14000baec(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStackY_e8;
  local_b8.ExceptionCode = 0x80000029;
  local_b8.ExceptionFlags = 1;
  local_b8.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_b8.ExceptionAddress = (PVOID)0x0;
  local_b8.NumberParameters = 0xf;
  local_b8._28_4_ = 0;
  local_b8.ExceptionInformation[9] = 0;
  local_b8.ExceptionInformation[10]._0_4_ = 0;
  local_b8.ExceptionInformation[10]._4_4_ = 0;
  local_b8.ExceptionInformation[0xb]._0_4_ = 0;
  local_b8.ExceptionInformation[0xb]._4_4_ = 0;
  local_b8.ExceptionInformation[0xc]._0_4_ = 0;
  local_b8.ExceptionInformation[0xc]._4_4_ = 0;
  local_b8.ExceptionInformation[0xd]._0_4_ = 0;
  local_b8.ExceptionInformation[0xd]._4_4_ = 0;
  local_b8.ExceptionInformation[0xe] = 0;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_14000e8a4;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}




/* ---- 0x14000bbf0 : FUN_14000bbf0 [was: FUN_14000bbf0] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14000bbf0(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,undefined8 param_6,int param_7,int param_8,longlong param_9,
                  undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStackY_e8;
  local_b8.ExceptionCode = 0x80000029;
  local_b8.ExceptionFlags = 1;
  local_b8.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_b8.ExceptionAddress = (PVOID)0x0;
  local_b8.NumberParameters = 0xf;
  local_b8._28_4_ = 0;
  local_b8.ExceptionInformation[10]._0_4_ = 0;
  local_b8.ExceptionInformation[10]._4_4_ = 0;
  local_b8.ExceptionInformation[0xc]._0_4_ = 0;
  local_b8.ExceptionInformation[0xc]._4_4_ = 0;
  local_b8.ExceptionInformation[0xd]._0_4_ = 0;
  local_b8.ExceptionInformation[0xd]._4_4_ = 0;
  local_b8.ExceptionInformation[0xe] = 0;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_14000ea90;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[5] = *(longlong *)(param_9 + 0x18) + param_10[1];
  local_b8.ExceptionInformation[9] = *(longlong *)(param_9 + 0x20) + param_10[1];
  local_b8.ExceptionInformation[0xb] = (ULONG_PTR)param_8;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}




/* ---- 0x14000c3b4 : FUN_14000c3b4 [was: FUN_14000c3b4] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000c3b4(int *param_1)

{
  byte *pbVar1;
  
  if (((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
      ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) &&
     (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && ((longlong *)**(longlong **)(param_1 + 10) != (longlong *)0x0))
      {
        (**(code **)(*(longlong *)**(longlong **)(param_1 + 10) + 0x10))();
      }
    }
    else {
      FUN_14000c428(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}




/* ---- 0x14000c89c : FUN_14000c89c [was: FUN_14000c89c] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char FUN_14000c89c(longlong param_1,longlong *param_2,byte *param_3,byte *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  iVar1 = *(int *)(param_3 + 4);
  uVar4 = uVar5;
  if (iVar1 != 0) {
    lVar2 = FUN_14000bf8c();
    uVar4 = iVar1 + lVar2;
  }
  if (uVar4 == 0) {
    return '\0';
  }
  iVar1 = *(int *)(param_3 + 4);
  uVar4 = uVar5;
  if (iVar1 != 0) {
    lVar2 = FUN_14000bf8c();
    uVar4 = iVar1 + lVar2;
  }
  if (*(char *)(uVar4 + 0x10) == '\0') {
    return '\0';
  }
  if ((*(int *)(param_3 + 8) == 0) && (-1 < *(int *)param_3)) {
    return '\0';
  }
  if (-1 < *(int *)param_3) {
    param_2 = (longlong *)((longlong)*(int *)(param_3 + 8) + *param_2);
  }
  if ((((*param_3 & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_14003d4b0 == 0)) {
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        iVar1 = *(int *)(param_4 + 0x18);
        uVar4 = uVar5;
        if (iVar1 != 0) {
          lVar2 = FUN_14000bfa0();
          uVar4 = iVar1 + lVar2;
        }
        if (uVar4 != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
            iVar1 = *(int *)(param_4 + 0x18);
            if (iVar1 != 0) {
              lVar2 = FUN_14000bfa0();
              uVar5 = iVar1 + lVar2;
            }
            if (uVar5 != 0) {
              uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
              goto LAB_14000ca4e;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_14001a8a0();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_14001a8a0();
        }
        iVar1 = *(int *)(param_4 + 0x14);
        puVar3 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_140027a20(param_2,puVar3,(longlong)iVar1);
        goto LAB_14000ca4e;
      }
      if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_14001a8a0();
      }
      FUN_140027a20(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar5;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_14000ca4e;
      lVar2 = *param_2;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x28);
      if ((lVar2 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_14001a8a0();
      }
      *param_2 = lVar2;
    }
  }
  else {
    lVar2 = (*(code *)DAT_14003d4b0)();
    if ((lVar2 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
    *param_2 = lVar2;
  }
  lVar2 = __AdjustPointer(lVar2,(int *)(param_4 + 8));
  *param_2 = lVar2;
  uVar6 = uVar5;
LAB_14000ca4e:
  return (char)uVar6;
}




/* ---- 0x14000ca90 : FUN_14000ca90 [was: FUN_14000ca90] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char FUN_14000ca90(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  iVar1 = *(int *)(param_3 + 8);
  uVar4 = uVar5;
  if (iVar1 != 0) {
    lVar2 = FUN_14000bf8c();
    uVar4 = iVar1 + lVar2;
  }
  if (uVar4 == 0) {
    return '\0';
  }
  iVar1 = *(int *)(param_3 + 8);
  uVar4 = uVar5;
  if (iVar1 != 0) {
    lVar2 = FUN_14000bf8c();
    uVar4 = iVar1 + lVar2;
  }
  if (*(char *)(uVar4 + 0x10) == '\0') {
    return '\0';
  }
  if ((*(int *)(param_3 + 0xc) == 0) && (-1 < *(int *)(param_3 + 4))) {
    return '\0';
  }
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  if ((((*(byte *)(param_3 + 4) & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_14003d4b0 == 0))
  {
    if ((*(byte *)(param_3 + 4) & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        iVar1 = *(int *)(param_4 + 0x18);
        uVar4 = uVar5;
        if (iVar1 != 0) {
          lVar2 = FUN_14000bfa0();
          uVar4 = iVar1 + lVar2;
        }
        if (uVar4 != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
            iVar1 = *(int *)(param_4 + 0x18);
            if (iVar1 != 0) {
              lVar2 = FUN_14000bfa0();
              uVar5 = iVar1 + lVar2;
            }
            if (uVar5 != 0) {
              uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
              goto LAB_14000cc45;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_14001a8a0();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_14001a8a0();
        }
        iVar1 = *(int *)(param_4 + 0x14);
        puVar3 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_140027a20(param_2,puVar3,(longlong)iVar1);
        goto LAB_14000cc45;
      }
      if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_14001a8a0();
      }
      FUN_140027a20(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar5;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_14000cc45;
      lVar2 = *param_2;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x28);
      if ((lVar2 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_14001a8a0();
      }
      *param_2 = lVar2;
    }
  }
  else {
    lVar2 = (*(code *)DAT_14003d4b0)();
    if ((lVar2 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
    *param_2 = lVar2;
  }
  lVar2 = __AdjustPointer(lVar2,(int *)(param_4 + 8));
  *param_2 = lVar2;
  uVar6 = uVar5;
LAB_14000cc45:
  return (char)uVar6;
}




/* ---- 0x14000d4ac : FUN_14000d4ac [was: FUN_14000d4ac] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14000d4ac(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,byte *param_5
                  ,char param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int *piVar16;
  undefined1 auStackY_1c8 [32];
  int local_160;
  ULONG_PTR local_158;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 uStack_110;
  uint local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint local_d0 [10];
  int local_a8 [6];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = DAT_14003c2c0 ^ (ulonglong)auStackY_1c8;
  local_128 = param_8;
  local_120 = param_2;
  iVar7 = FUN_14000c73c((longlong)param_5,param_4);
  if ((int)param_4[9] == 0) {
    lVar8 = FUN_14000c540();
    if (*(int *)(lVar8 + 0x78) != -2) {
      lVar8 = FUN_14000c540();
      iVar7 = *(int *)(lVar8 + 0x78);
      lVar8 = FUN_14000c540();
      *(undefined4 *)(lVar8 + 0x78) = 0xfffffffe;
    }
  }
  else {
    lVar8 = FUN_14000c540();
    if (*(int *)(lVar8 + 0x78) != -2) goto LAB_14000d9dd;
    iVar7 = (int)param_4[9] + -2;
  }
  if (-2 < iVar7) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(byte *)(param_4[1] + (longlong)*(int *)(param_5 + 8)) & 0xf;
      uVar11 = *(uint *)((byte *)(param_4[1] + (longlong)*(int *)(param_5 + 8)) +
                        (-4 - (longlong)(char)(&DAT_140029f60)[uVar11])) >>
               ((&DAT_140029f70)[uVar11] & 0x1f);
    }
    if (iVar7 < (int)uVar11) {
      local_158 = param_3;
      if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
          ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) &&
         (*(longlong *)(param_1 + 0xc) == 0)) {
        lVar8 = FUN_14000c540();
        if (*(longlong *)(lVar8 + 0x20) == 0) {
          return;
        }
        lVar8 = FUN_14000c540();
        param_1 = *(int **)(lVar8 + 0x20);
        lVar8 = FUN_14000c540();
        local_158 = *(ULONG_PTR *)(lVar8 + 0x28);
        FUN_14000bfcc(*(undefined8 *)(param_1 + 0xe));
        if ((param_1 == (int *)0x0) ||
           (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
            (((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)) &&
             (*(longlong *)(param_1 + 0xc) == 0)))))) goto LAB_14000d9dd;
        lVar8 = FUN_14000c540();
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          lVar8 = FUN_14000c540();
          piVar16 = *(int **)(lVar8 + 0x38);
          lVar8 = FUN_14000c540();
          *(undefined8 *)(lVar8 + 0x38) = 0;
          cVar5 = FUN_14000f450((longlong)param_1,piVar16);
          if (cVar5 == '\0') {
            uVar9 = FUN_14000f538(piVar16);
            if ((char)uVar9 != '\0') {
              FUN_14000c3b4(param_1);
              FUN_14000e880(&local_140);
                    /* WARNING: Subroutine does not return */
              FUN_14000b37c(&local_140,&DAT_1400349b0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_14001a800();
          }
        }
      }
      FUN_14000e760(local_d0,(longlong)param_5,param_4[1]);
      if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
         ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) {
        if (local_d0[0] != 0) {
          FUN_14000b96c((undefined4 *)&local_118,(int *)local_d0,iVar7);
          uVar11 = (uint)uStack_110;
          local_140 = local_118;
          uStack_138 = uStack_110;
          if (uVar11 < local_100) {
            do {
              local_140 = *(longlong *)(local_118 + 0x18);
              uStack_138 = *(undefined8 *)(local_118 + 0x20);
              if ((*(int *)(local_118 + 0x18) <= iVar7) && (iVar7 <= *(int *)(local_118 + 0x1c))) {
                FUN_14000e6dc((HandlerMap4 *)local_a8,(longlong)&local_140,param_4[1],
                              *(undefined4 *)param_4[2]);
                iVar4 = local_a8[0];
                local_160 = 0;
                if (local_a8[0] != 0) {
                  do {
                    local_f8 = local_90;
                    uStack_f0 = uStack_88;
                    local_d8 = local_70;
                    local_e8 = local_80;
                    uStack_e0 = uStack_78;
                    iVar15 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar8 = FUN_14000bfa0();
                    piVar16 = (int *)((longlong)iVar15 + lVar8 + 4);
                    iVar15 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar8 = FUN_14000bfa0();
                    for (iVar15 = *(int *)(lVar8 + iVar15); 0 < iVar15; iVar15 = iVar15 + -1) {
                      iVar1 = *piVar16;
                      lVar8 = FUN_14000bfa0();
                      uVar10 = FUN_14000e070((longlong)&local_f8,(byte *)(iVar1 + lVar8),
                                             *(byte **)(param_1 + 0xc));
                      if ((int)uVar10 != 0) {
                        FUN_14000cee4((ULONG_PTR)param_1,local_120,local_158,param_4,param_5,
                                      (longlong)&local_f8,(byte *)(iVar1 + lVar8),(int *)&local_140)
                        ;
                        goto LAB_14000d86c;
                      }
                      piVar16 = piVar16 + 1;
                    }
                    FH4::HandlerMap4::DecompHandler((HandlerMap4 *)local_a8);
                    local_160 = local_160 + 1;
                  } while (local_160 != iVar4);
                }
              }
LAB_14000d86c:
              pbVar14 = *(byte **)(local_118 + 8);
              uVar11 = uVar11 + 1;
              lVar8 = (longlong)(char)(&DAT_140029f60)[*pbVar14 & 0xf];
              bVar6 = (&DAT_140029f70)[*pbVar14 & 0xf];
              pbVar12 = pbVar14 + -lVar8;
              uVar2 = *(uint *)(pbVar12 + -4);
              *(byte **)(local_118 + 8) = pbVar12;
              *(uint *)(local_118 + 0x18) = uVar2 >> (bVar6 & 0x1f);
              cVar5 = (&DAT_140029f60)[*pbVar12 & 0xf];
              pbVar13 = pbVar14 + (-lVar8 - (longlong)cVar5);
              *(uint *)(local_118 + 0x1c) =
                   *(uint *)(pbVar13 + -4) >> ((&DAT_140029f70)[*pbVar12 & 0xf] & 0x1f);
              *(byte **)(local_118 + 8) = pbVar13;
              pbVar14 = pbVar14 + ((-(longlong)cVar5 -
                                   (longlong)(char)(&DAT_140029f60)[*pbVar13 & 0xf]) - lVar8);
              *(uint *)(local_118 + 0x20) =
                   *(uint *)(pbVar14 + -4) >> ((&DAT_140029f70)[*pbVar13 & 0xf] & 0x1f);
              *(byte **)(local_118 + 8) = pbVar14;
              uVar3 = *(undefined4 *)pbVar14;
              *(byte **)(local_118 + 8) = pbVar14 + 4;
              *(undefined4 *)(local_118 + 0x24) = uVar3;
            } while (uVar11 < local_100);
          }
        }
        if (((*param_5 & 0x40) != 0) && (bVar6 = FUN_14000b688(param_4,param_5), bVar6 == 0)) {
          lVar8 = FUN_14000c540();
          *(int **)(lVar8 + 0x20) = param_1;
          lVar8 = FUN_14000c540();
          *(ULONG_PTR *)(lVar8 + 0x28) = local_158;
                    /* WARNING: Subroutine does not return */
          FUN_14001a800();
        }
      }
      else if (local_d0[0] != 0) {
        if (param_6 != '\0') goto LAB_14000d9dd;
        FUN_14000dc48(param_1,param_2,local_158,param_4,param_5,iVar7);
      }
      lVar8 = FUN_14000c540();
      if (*(longlong *)(lVar8 + 0x38) == 0) {
        return;
      }
    }
  }
LAB_14000d9dd:
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14000dc48 : FUN_14000dc48 [was: FUN_14000dc48] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14000dc48(int *param_1,longlong *param_2,ULONG_PTR param_3,undefined8 *param_4,
                  byte *param_5,int param_6)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  PVOID pvVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  byte *pbVar11;
  undefined1 auStackY_178 [32];
  uint local_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong *local_f0;
  longlong local_e8;
  uint uStack_e0;
  uint local_d0;
  int local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [4];
  byte local_ac;
  int local_a8;
  uint local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_14003c2c0 ^ (ulonglong)auStackY_178;
  if (*param_1 != -0x7ffffffd) {
    local_f0 = param_2;
    lVar5 = FUN_14000c540();
    if (*(longlong *)(lVar5 + 0x10) != 0) {
      pvVar6 = EncodePointer((PVOID)0x0);
      lVar5 = FUN_14000c540();
      if ((((*(PVOID *)(lVar5 + 0x10) != pvVar6) && (*param_1 != -0x1fbcb0b3)) &&
          (*param_1 != -0x1fbcbcae)) && (iVar4 = FUN_14000b478(param_1,param_2,param_3), iVar4 != 0)
         ) {
        return;
      }
    }
    FUN_14000e760(local_78,(longlong)param_5,param_4[1]);
    if (local_78[0] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
    FUN_14000b96c((undefined4 *)&local_e8,(int *)local_78,param_6);
    local_118 = uStack_e0;
    if (uStack_e0 < local_d0) {
      do {
        local_100 = *(undefined8 *)(local_e8 + 0x18);
        uStack_f8 = *(undefined8 *)(local_e8 + 0x20);
        if ((*(int *)(local_e8 + 0x18) <= param_6) && (param_6 <= *(int *)(local_e8 + 0x1c))) {
          FUN_14000e6dc((HandlerMap4 *)local_c8,(longlong)&local_100,param_4[1],
                        *(undefined4 *)param_4[2]);
          local_c0 = local_b8;
          FH4::HandlerMap4::DecompHandler((HandlerMap4 *)local_c8);
          iVar4 = local_c8[0];
          local_c0 = local_b8;
          FH4::HandlerMap4::DecompHandler((HandlerMap4 *)local_c8);
          uVar10 = (ulonglong)(iVar4 - 1U);
          if (iVar4 - 1U != 0) {
            do {
              FH4::HandlerMap4::DecompHandler((HandlerMap4 *)local_c8);
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar5 = (longlong)local_a8;
          if ((local_a8 != 0) && (lVar7 = FUN_14000bf8c(), lVar7 + lVar5 != 0)) {
            lVar5 = (longlong)local_a8;
            if (local_a8 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = FUN_14000bf8c();
              lVar7 = lVar7 + lVar5;
            }
            if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_14000de7c;
          }
          if ((local_ac & 0x40) == 0) {
            FUN_14000cee4((ULONG_PTR)param_1,local_f0,param_3,param_4,param_5,(longlong)local_b0,
                          (byte *)0x0,(int *)&local_100);
          }
        }
LAB_14000de7c:
        pbVar11 = *(byte **)(local_e8 + 8);
        lVar5 = (longlong)(char)(&DAT_140029f60)[*pbVar11 & 0xf];
        bVar1 = (&DAT_140029f70)[*pbVar11 & 0xf];
        pbVar8 = pbVar11 + -lVar5;
        uVar3 = *(uint *)(pbVar8 + -4);
        *(byte **)(local_e8 + 8) = pbVar8;
        *(uint *)(local_e8 + 0x18) = uVar3 >> (bVar1 & 0x1f);
        cVar2 = (&DAT_140029f60)[*pbVar8 & 0xf];
        pbVar9 = pbVar11 + (-lVar5 - (longlong)cVar2);
        *(uint *)(local_e8 + 0x1c) =
             *(uint *)(pbVar9 + -4) >> ((&DAT_140029f70)[*pbVar8 & 0xf] & 0x1f);
        *(byte **)(local_e8 + 8) = pbVar9;
        pbVar11 = pbVar11 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_140029f60)[*pbVar9 & 0xf]) -
                            lVar5);
        *(uint *)(local_e8 + 0x20) =
             *(uint *)(pbVar11 + -4) >> ((&DAT_140029f70)[*pbVar9 & 0xf] & 0x1f);
        *(byte **)(local_e8 + 8) = pbVar11;
        *(undefined4 *)(local_e8 + 0x24) = *(undefined4 *)pbVar11;
        local_118 = local_118 + 1;
        *(byte **)(local_e8 + 8) = pbVar11 + 4;
      } while (local_118 < local_d0);
    }
  }
  return;
}




/* ---- 0x14000e3e0 : FUN_14000e3e0 [was: FUN_14000e3e0] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_14000e3e0(int *param_1,__uint64 *param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4,
             FuncInfo4 *param_5,int param_6,undefined8 param_7,byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar8;
  uint local_48 [12];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  __except_validate_context_record(param_3);
  lVar2 = FUN_14000c540();
  uVar5 = 0;
  if ((*(int *)(lVar2 + 0x40) == 0) && (*param_1 != -0x1f928c9d)) {
    if (*param_1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        if (*(longlong *)(param_1 + 0x18) == 0x19930520) goto LAB_14000e462;
        goto LAB_14000e454;
      }
    }
    else {
LAB_14000e454:
      if (*param_1 == -0x7fffffda) goto LAB_14000e462;
    }
    if (((byte)*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_14000e462:
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    FUN_14000e760(local_48,(longlong)param_5,*(longlong *)(param_4 + 8));
    if ((local_48[0] == 0) && (((byte)*param_5 & 0x40) == 0)) {
      return 1;
    }
    if ((*param_1 == -0x1f928c9d) &&
       (((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
        (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)))) {
      lVar2 = FUN_14000bfa0();
      pcVar6 = (code *)(lVar2 + iVar1);
      if (pcVar6 != (code *)0x0) {
        uVar3 = (*pcVar6)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                          CONCAT44(uVar8,(uint)param_8));
        return uVar3;
      }
    }
    FUN_14000d4ac(param_1,(longlong *)param_2,param_3,(ulonglong *)param_4,(byte *)param_5,param_8,
                  CONCAT44(uVar7,param_6),param_7);
    return 1;
  }
  if (*(int *)(param_5 + 8) == 0) {
    return 1;
  }
  uVar4 = *(byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)) & 0xf;
  if (*(uint *)((byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)) +
               (-4 - (longlong)(char)(&DAT_140029f60)[uVar4])) >> ((&DAT_140029f70)[uVar4] & 0x1f)
      == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 1) & 0x20) == 0) {
LAB_14000e57e:
    __FrameHandler4::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*param_1 == -0x7fffffda) {
      iVar1 = FUN_14000c7ac((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if (iVar1 < -1) {
LAB_14000e67f:
                    /* WARNING: Subroutine does not return */
        FUN_14001a8a0();
      }
      if (*(int *)(param_5 + 8) != 0) {
        uVar5 = *(byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)) & 0xf;
        uVar5 = *(uint *)((byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)) +
                         (-4 - (longlong)(char)(&DAT_140029f60)[uVar5])) >>
                ((&DAT_140029f70)[uVar5] & 0x1f);
      }
      if ((int)uVar5 <= iVar1) goto LAB_14000e67f;
    }
    else {
      if (*param_1 != -0x7fffffd7) goto LAB_14000e57e;
      iVar1 = param_1[0xe];
      if ((iVar1 < -1) ||
         (uVar5 = *(byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)) & 0xf,
         (int)(*(uint *)((byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)) +
                        (-4 - (longlong)(char)(&DAT_140029f60)[uVar5])) >>
              ((&DAT_140029f70)[uVar5] & 0x1f)) <= iVar1)) goto LAB_14000e67f;
      param_2 = *(__uint64 **)(param_1 + 10);
    }
    FUN_14000f0ac((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,iVar1);
  }
  return 1;
}




/* ---- 0x14000f0ac : FUN_14000f0ac [was: FUN_14000f0ac] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14000f0ac(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  UWMap4 *pUVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined1 auStackY_138 [32];
  UWMap4 *local_108;
  byte *pbStack_100;
  int local_f8;
  int local_f4;
  int local_f0;
  uint *local_e8;
  byte *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  ulonglong *local_c8;
  longlong *local_c0;
  ulonglong *local_b8;
  uint *local_b0;
  byte *local_a8;
  UWMap4 *local_98;
  byte *pbStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  uint local_78 [2];
  byte *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_14003c2c0 ^ (ulonglong)auStackY_138;
  local_f0 = param_4;
  local_d8 = param_1;
  local_c0 = param_1;
  local_d0 = FUN_14000bf8c();
  iVar6 = FUN_14000c73c(param_3,param_2);
  puVar1 = param_2 + 9;
  local_c8 = puVar1;
  if ((int)*puVar1 == 0) {
    lVar7 = FUN_14000c540();
    if (*(int *)(lVar7 + 0x78) != -2) {
      lVar7 = FUN_14000c540();
      iVar6 = *(int *)(lVar7 + 0x78);
      lVar7 = FUN_14000c540();
      *(undefined4 *)(lVar7 + 0x78) = 0xfffffffe;
    }
  }
  else {
    lVar7 = FUN_14000c540();
    if (*(int *)(lVar7 + 0x78) != -2) {
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
    iVar6 = (int)*puVar1 + -2;
  }
  lVar7 = FUN_14000c540();
  *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
  puVar9 = param_2 + 1;
  local_70 = (byte *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    local_78[0] = 0;
  }
  else {
    local_70 = (byte *)((longlong)*(int *)(param_3 + 8) + *puVar9);
    uVar8 = *local_70 & 0xf;
    local_70 = local_70 + -(longlong)(char)(&DAT_140029f60)[uVar8];
    local_78[0] = *(uint *)(local_70 + -4) >> ((&DAT_140029f70)[uVar8] & 0x1f);
  }
  local_108 = (UWMap4 *)local_78;
  local_e8 = local_78;
  pbStack_100 = local_70;
  local_e0 = local_70;
  local_b8 = puVar9;
  FUN_14000f67c((UWMap4 *)local_78,iVar6,param_4,(longlong *)&local_108,(longlong *)&local_e8);
  while( true ) {
    pbVar5 = pbStack_100;
    local_b0 = local_78;
    local_a8 = local_70;
    if ((pbStack_100 < local_70) || (pbStack_100 <= local_e0)) break;
    FH4::UWMap4::ReadEntry(local_108,&pbStack_100);
    pUVar4 = local_108;
    local_88 = *(undefined4 *)(local_108 + 0x10);
    iVar2 = *(int *)(local_108 + 0x14);
    iVar3 = *(int *)(local_108 + 0x18);
    uVar8 = *(uint *)(local_108 + 0x1c);
    local_98 = local_108;
    pbStack_90 = pbVar5;
    pbStack_100 = pbVar5;
    iStack_84 = iVar2;
    iStack_80 = iVar3;
    uStack_7c = uVar8;
    FH4::UWMap4::ReadEntry(local_108,&pbStack_100);
    pbStack_100 = pbVar5 + -(ulonglong)*(uint *)(pUVar4 + 0x10);
    iVar6 = FUN_14000f74c(&local_e8,param_4,(longlong)&local_98,iVar6,&local_108);
    local_f8 = 0;
    if (iVar2 != 0) {
      local_f8 = iVar3;
    }
    local_f4 = iVar6;
    if (local_f8 != 0) {
      *(int *)puVar1 = iVar6 + 2;
      if (iVar2 - 1U < 2) {
        lVar7 = *local_d8;
        if (iVar2 == 2) {
          lVar10 = *(longlong *)((ulonglong)uVar8 + lVar7);
        }
        else {
          lVar10 = (ulonglong)uVar8 + lVar7;
        }
        _CallSettingFrameEncoded((longlong)local_f8 + *puVar9,lVar7,lVar10);
      }
      else {
        _CallSettingFrame();
      }
      FUN_14000bfb4(local_d0);
    }
  }
  lVar7 = FUN_14000c540();
  if (0 < *(int *)(lVar7 + 0x30)) {
    lVar7 = FUN_14000c540();
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
  }
  return;
}




/* ---- 0x140010480 : thread_create_wrapper [was: FUN_140010480] ---- */

uint FUN_140010480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong local_58 [4];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_58[2] = 0;
  local_20 = DAT_14003d760 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14003c5d8;
    puStack_28 = PTR_DAT_14003c5e0;
  }
  local_58[1] = 0;
  local_58[0] = param_1;
  uVar1 = FUN_14000fd68(local_58 + 2,local_58,10,CONCAT31((int3)((uint)param_4 >> 8),1));
  if (local_20 == '\x02') {
    *(uint *)(local_58[2] + 0x3a8) = *(uint *)(local_58[2] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140010320(local_58 + 2);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140010320(local_58 + 2);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}




/* ---- 0x14001153c : FUN_14001153c [was: FUN_14001153c] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14001153c(undefined8 *param_1)

{
  longlong *plVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_4b8 [32];
  ulonglong local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined2 local_460;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_48;
  LPVOID pvStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14003c2c0 ^ (ulonglong)auStack_4b8;
  plVar1 = (longlong *)param_1[1];
  pFVar2 = *(FILE **)*param_1;
  uVar4 = FUN_14001d8ac(pFVar2);
  local_480 = *(undefined8 *)param_1[4];
  local_38 = *(undefined8 *)*param_1;
  local_488 = *(undefined8 *)param_1[3];
  local_498 = *(ulonglong *)param_1[2];
  local_490 = param_1[1];
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_450 = 0;
  local_30 = 0;
  local_474 = 0;
  local_44c = 0;
  local_48 = 0;
  pvStack_40 = (LPVOID)0x0;
  uVar3 = FUN_140011754(&local_498);
  FUN_14001b320(pvStack_40);
  pvStack_40 = (LPVOID)0x0;
  FUN_14001d974((char)uVar4,pFVar2,plVar1);
  return uVar3;
}




/* ---- 0x140012158 : FUN_140012158 [was: FUN_140012158] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140012158(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  ushort uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 extraout_var;
  byte bVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar15;
  ushort *puVar16;
  int iVar17;
  undefined1 auStackY_88 [32];
  undefined8 local_50;
  undefined8 local_48;
  byte local_40 [8];
  ulonglong local_38;
  ulonglong uVar14;
  
  local_48 = 0xfffffffffffffffe;
  uVar8 = DAT_14003c2c0 ^ (ulonglong)auStackY_88;
  cVar3 = *(char *)((longlong)param_1 + 0x39);
  uVar12 = 0x78;
  local_38 = uVar8;
  if (cVar3 < 'e') {
    if (cVar3 == 'd') {
LAB_14001223b:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_14001223f:
      uVar8 = FUN_140010df0((longlong)param_1,0);
    }
    else if (cVar3 < 'T') {
      if (cVar3 == 'S') {
LAB_140012281:
        uVar8 = FUN_140012f64((longlong)param_1);
      }
      else {
        if (cVar3 != 'A') {
          if (cVar3 == 'C') {
LAB_1400121f5:
            uVar8 = FUN_140012dd8((longlong)param_1);
            goto LAB_1400122a3;
          }
          if (((cVar3 != 'E') && (cVar3 != 'F')) && (cVar3 != 'G')) goto LAB_1400122aa;
        }
LAB_1400121cc:
        uVar8 = FUN_140012b7c(param_1);
      }
    }
    else {
      if (cVar3 == 'X') goto LAB_140012299;
      if (cVar3 != 'Z') {
        if (cVar3 != 'a') {
          if (cVar3 != 'c') goto LAB_1400122aa;
          goto LAB_1400121f5;
        }
        goto LAB_1400121cc;
      }
      uVar8 = FUN_140012b00((longlong)param_1);
    }
  }
  else if (cVar3 < 'p') {
    if (cVar3 == 'o') {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      uVar8 = FUN_140010bec((longlong)param_1);
    }
    else {
      if (((cVar3 == 'e') || (cVar3 == 'f')) || (cVar3 == 'g')) goto LAB_1400121cc;
      if (cVar3 == 'i') goto LAB_14001223b;
      if (cVar3 != 'n') goto LAB_1400122aa;
      uVar8 = FUN_140012eac((longlong)param_1);
    }
  }
  else {
    if (cVar3 == 'p') {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_140012299:
      bVar11 = 1;
    }
    else {
      if (cVar3 == 's') goto LAB_140012281;
      if (cVar3 == 'u') goto LAB_14001223f;
      if (cVar3 != 'x') goto LAB_1400122aa;
      bVar11 = 0;
    }
    uVar8 = FUN_140010ff4((longlong)param_1,bVar11);
  }
LAB_1400122a3:
  uVar15 = 0;
  if ((char)uVar8 == '\0') {
LAB_1400122aa:
    return uVar8 & 0xffffffffffffff00;
  }
  if ((char)param_1[7] != '\0') goto LAB_140012664;
  local_50 = local_50 & 0xffffffffff000000;
  uVar13 = (uint)param_1[5];
  uVar8 = uVar15;
  if ((uVar13 >> 4 & 1) != 0) {
    if ((uVar13 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) == 0) {
        if ((uVar13 >> 1 & 1) == 0) goto LAB_1400122ff;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    uVar8 = 1;
  }
LAB_1400122ff:
  cVar3 = *(char *)((longlong)param_1 + 0x39);
  if (((cVar3 + 0xa8U & 0xdf) != 0) || (bVar6 = true, (uVar13 >> 5 & 1) == 0)) {
    bVar6 = false;
  }
  if ((bVar6) || ((cVar3 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_50 + uVar8) = 0x30;
    if ((cVar3 == 'X') || (cVar3 == 'A')) {
      uVar12 = 0x58;
    }
    *(undefined1 *)((longlong)&local_50 + uVar8 + 1) = uVar12;
    uVar8 = uVar8 + 2;
  }
  iVar7 = (int)uVar8;
  iVar17 = (*(int *)((longlong)param_1 + 0x2c) - (int)param_1[9]) - iVar7;
  if (((uVar13 & 0xc) == 0) && (uVar8 = param_1[1], uVar14 = uVar15, 0 < iVar17)) {
    while ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(param_1[0x8c] + 8) == 0)) ||
           (uVar9 = FUN_14001d848(0x20,(FILE *)param_1[0x8c],uVar8), (int)uVar9 != -1))) {
      uVar9 = param_1[4];
      *(int *)(param_1 + 4) = (int)uVar9 + 1;
      if (((int)uVar9 == -2) ||
         (uVar13 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar13, iVar17 <= (int)uVar13))
      goto LAB_1400123b4;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
LAB_1400123b4:
  puVar2 = param_1 + 0x8c;
  puVar1 = param_1 + 4;
  if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*puVar2 + 8) != 0)) {
    FUN_140013140((longlong *)puVar2,(byte *)&local_50,iVar7,(int *)puVar1,param_1[1]);
  }
  else {
    *(int *)puVar1 = (int)*puVar1 + iVar7;
  }
  if (((((uint)param_1[5] >> 3 & 1) != 0) && (((uint)param_1[5] >> 2 & 1) == 0)) &&
     (uVar8 = param_1[1], uVar14 = uVar15, 0 < iVar17)) {
    while ((((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*puVar2 + 8) == 0)) ||
           (uVar9 = FUN_14001d848(0x30,(FILE *)*puVar2,uVar8), (int)uVar9 != -1))) {
      uVar9 = *puVar1;
      *(int *)puVar1 = (int)uVar9 + 1;
      if (((int)uVar9 == -2) ||
         (uVar13 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar13, iVar17 <= (int)uVar13))
      goto LAB_14001245b;
    }
    *(int *)puVar1 = -1;
  }
LAB_14001245b:
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') || ((int)param_1[9] < 1)) {
    puVar2 = param_1 + 0x8c;
    puVar1 = param_1 + 4;
    if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) ||
       (uVar8 = *puVar2, *(longlong *)(uVar8 + 8) != 0)) {
      uVar8 = FUN_140013140((longlong *)puVar2,(byte *)param_1[8],(int)param_1[9],(int *)puVar1,
                            param_1[1]);
    }
    else {
      *(int *)puVar1 = (int)*puVar1 + (int)param_1[9];
    }
  }
  else {
    plVar5 = (longlong *)param_1[1];
    if ((char)plVar5[5] == '\0') {
      FUN_140010390(plVar5);
    }
    puVar16 = (ushort *)param_1[8];
    uVar8 = plVar5[3];
    if (*(int *)(uVar8 + 0xc) == 0xfde9) {
      local_50 = 0;
      if ((int)param_1[9] != 0) {
        puVar1 = param_1 + 4;
        puVar2 = param_1 + 0x8c;
        uVar14 = uVar15;
        do {
          uVar4 = *puVar16;
          puVar16 = puVar16 + 1;
          lVar10 = FUN_14001d58c(local_40,(uint)uVar4,(int *)&local_50,param_1[1]);
          if (lVar10 == -1) {
            *(int *)puVar1 = -1;
            uVar8 = 0xffffffffffffffff;
            break;
          }
          if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) ||
             (uVar8 = *puVar2, *(longlong *)(uVar8 + 8) != 0)) {
            uVar8 = FUN_140013140((longlong *)puVar2,local_40,(int)lVar10,(int *)puVar1,param_1[1]);
          }
          else {
            *(int *)puVar1 = (int)*puVar1 + (int)lVar10;
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 != (uint)param_1[9]);
      }
    }
    else if ((int)param_1[9] != 0) {
      puVar1 = param_1 + 0x8c;
      uVar14 = uVar15;
      do {
        local_50 = local_50 & 0xffffffff00000000;
        uVar4 = *puVar16;
        puVar16 = puVar16 + 1;
        iVar7 = FUN_14001cfc8((int *)&local_50,(undefined1 (*) [32])local_40,6,uVar4,
                              (longlong *)param_1[1]);
        uVar8 = CONCAT44(extraout_var,iVar7);
        if ((iVar7 != 0) || ((int)local_50 == 0)) {
          *(undefined4 *)(param_1 + 4) = 0xffffffff;
          break;
        }
        if (((*(uint *)(*puVar1 + 0x14) >> 0xc & 1) == 0) ||
           (uVar8 = *puVar1, *(longlong *)(uVar8 + 8) != 0)) {
          uVar8 = FUN_140013140((longlong *)puVar1,local_40,(int)local_50,(int *)(param_1 + 4),
                                param_1[1]);
        }
        else {
          *(int *)(param_1 + 4) = (int)param_1[4] + (int)local_50;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 != (uint)param_1[9]);
    }
  }
  if (((-1 < (int)param_1[4]) &&
      (uVar13 = (uint)param_1[5] >> 2, uVar8 = (ulonglong)uVar13, (uVar13 & 1) != 0)) &&
     (uVar14 = param_1[1], 0 < iVar17)) {
    while ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(param_1[0x8c] + 8) == 0)) ||
           (uVar8 = FUN_14001d848(0x20,(FILE *)param_1[0x8c],uVar14), (int)uVar8 != -1))) {
      uVar9 = param_1[4];
      uVar13 = (int)uVar9 + 1;
      uVar8 = (ulonglong)uVar13;
      *(uint *)(param_1 + 4) = uVar13;
      if (((int)uVar9 == -2) ||
         (uVar13 = (int)uVar15 + 1, uVar15 = (ulonglong)uVar13, iVar17 <= (int)uVar13))
      goto LAB_140012664;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
LAB_140012664:
  return CONCAT71((int7)(uVar8 >> 8),1);
}




/* ---- 0x140012690 : FUN_140012690 [was: FUN_140012690] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140012690(ulonglong *param_1)

{
  ulonglong *puVar1;
  string_output_adapter<char> *this;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *extraout_RAX;
  undefined4 extraout_var;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  ushort *puVar15;
  undefined1 auStackY_88 [32];
  undefined4 local_48;
  int local_40 [2];
  ulonglong *local_38;
  
  puVar8 = (ulonglong *)(DAT_14003c2c0 ^ (ulonglong)auStackY_88);
  cVar2 = *(char *)((longlong)param_1 + 0x39);
  uVar12 = 0x78;
  local_38 = puVar8;
  if (cVar2 < 'e') {
    if (cVar2 == 'd') {
LAB_140012762:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_140012766:
      puVar8 = (ulonglong *)FUN_140010df0((longlong)param_1,0);
    }
    else if (cVar2 < 'T') {
      if (cVar2 == 'S') {
LAB_1400127a5:
        puVar8 = (ulonglong *)FUN_140012f64((longlong)param_1);
      }
      else {
        if (cVar2 != 'A') {
          if (cVar2 == 'C') {
LAB_140012725:
            puVar8 = (ulonglong *)FUN_140012dd8((longlong)param_1);
            goto LAB_1400127c1;
          }
          if (((cVar2 != 'E') && (cVar2 != 'F')) && (cVar2 != 'G')) goto LAB_1400127c5;
        }
LAB_1400126ff:
        puVar8 = (ulonglong *)FUN_140012b7c(param_1);
      }
    }
    else {
      if (cVar2 == 'X') goto LAB_1400127ba;
      if (cVar2 != 'Z') {
        if (cVar2 != 'a') {
          if (cVar2 != 'c') goto LAB_1400127c5;
          goto LAB_140012725;
        }
        goto LAB_1400126ff;
      }
      puVar8 = (ulonglong *)FUN_140012b00((longlong)param_1);
    }
  }
  else if (cVar2 < 'p') {
    if (cVar2 == 'o') {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      puVar8 = (ulonglong *)FUN_140010bec((longlong)param_1);
    }
    else {
      if (((cVar2 == 'e') || (cVar2 == 'f')) || (cVar2 == 'g')) goto LAB_1400126ff;
      if (cVar2 == 'i') goto LAB_140012762;
      if (cVar2 != 'n') goto LAB_1400127c5;
      puVar8 = (ulonglong *)FUN_140012eac((longlong)param_1);
    }
  }
  else {
    if (cVar2 == 'p') {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_1400127ba:
      bVar9 = 1;
    }
    else {
      if (cVar2 == 's') goto LAB_1400127a5;
      if (cVar2 == 'u') goto LAB_140012766;
      if (cVar2 != 'x') goto LAB_1400127c5;
      bVar9 = 0;
    }
    puVar8 = (ulonglong *)FUN_140010ff4((longlong)param_1,bVar9);
  }
LAB_1400127c1:
  if ((char)puVar8 == '\0') {
LAB_1400127c5:
    return (ulonglong)puVar8 & 0xffffffffffffff00;
  }
  if ((char)param_1[7] != '\0') goto LAB_140012ad6;
  local_48 = (uint)local_48._3_1_ << 0x18;
  lVar13 = 0;
  uVar7 = (uint)param_1[5];
  if ((uVar7 >> 4 & 1) != 0) {
    if ((uVar7 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) == 0) {
        if ((uVar7 >> 1 & 1) == 0) goto LAB_14001281b;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar13 = 1;
  }
LAB_14001281b:
  cVar2 = *(char *)((longlong)param_1 + 0x39);
  if (((cVar2 + 0xa8U & 0xdf) == 0) && ((uVar7 >> 5 & 1) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((bVar6) || ((cVar2 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_48 + lVar13) = 0x30;
    if ((cVar2 == 'X') || (cVar2 == 'A')) {
      uVar12 = 0x58;
    }
    *(undefined1 *)((longlong)&local_48 + lVar13 + 1) = uVar12;
    lVar13 = lVar13 + 2;
  }
  iVar11 = (*(int *)((longlong)param_1 + 0x2c) - (int)lVar13) - (int)param_1[9];
  if (((uVar7 & 0xc) == 0) && (iVar14 = 0, 0 < iVar11)) {
    iVar10 = (int)param_1[4];
    do {
      uVar4 = param_1[0x8c];
      if (*(longlong *)(uVar4 + 0x10) == *(longlong *)(uVar4 + 8)) {
        if (*(char *)(uVar4 + 0x18) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *(int *)(param_1 + 4) = iVar10;
      }
      else {
        *(int *)(param_1 + 4) = iVar10 + 1;
        *(longlong *)(uVar4 + 0x10) = *(longlong *)(uVar4 + 0x10) + 1;
        **(undefined1 **)param_1[0x8c] = 0x20;
        *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
      }
      iVar10 = (int)param_1[4];
    } while ((iVar10 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar11));
  }
  this = (string_output_adapter<char> *)(param_1 + 0x8c);
  puVar1 = param_1 + 4;
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_48,(int)lVar13,(int *)puVar1,
             (__crt_deferred_errno_cache *)param_1[1]);
  if ((((uint)param_1[5] >> 3 & 1) != 0) &&
     ((((uint)param_1[5] >> 2 & 1) == 0 && (iVar14 = 0, 0 < iVar11)))) {
    iVar10 = (int)*puVar1;
    do {
      lVar13 = *(longlong *)this;
      if (*(longlong *)(lVar13 + 0x10) == *(longlong *)(lVar13 + 8)) {
        if (*(char *)(lVar13 + 0x18) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *(int *)puVar1 = iVar10;
      }
      else {
        *(int *)puVar1 = iVar10 + 1;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 1;
      }
      iVar10 = (int)*puVar1;
    } while ((iVar10 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar11));
  }
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') || ((int)param_1[9] < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,(char *)param_1[8],(int)param_1[9],(int *)puVar1,
               (__crt_deferred_errno_cache *)param_1[1]);
    puVar8 = extraout_RAX_01;
  }
  else {
    plVar5 = (longlong *)param_1[1];
    if ((char)plVar5[5] == '\0') {
      FUN_140010390(plVar5);
    }
    puVar15 = (ushort *)param_1[8];
    puVar8 = (ulonglong *)plVar5[3];
    iVar14 = 0;
    if (*(int *)((longlong)puVar8 + 0xc) == 0xfde9) {
      local_40[0] = 0;
      local_40[1] = 0;
      if ((int)param_1[9] != 0) {
        do {
          uVar3 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar8 = (ulonglong *)FUN_14001d58c((byte *)&local_48,(uint)uVar3,local_40,param_1[1]);
          if (puVar8 == (ulonglong *)0xffffffffffffffff) goto LAB_1400129e6;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    (this,(char *)&local_48,(int)puVar8,(int *)puVar1,
                     (__crt_deferred_errno_cache *)param_1[1]);
          iVar14 = iVar14 + 1;
          puVar8 = extraout_RAX;
        } while (iVar14 != (int)param_1[9]);
      }
    }
    else if ((int)param_1[9] != 0) {
      do {
        local_48 = 0;
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
        iVar10 = FUN_14001cfc8(&local_48,(undefined1 (*) [32])local_40,6,uVar3,
                               (longlong *)param_1[1]);
        puVar8 = (ulonglong *)CONCAT44(extraout_var,iVar10);
        if ((iVar10 != 0) || (local_48 == 0)) goto LAB_1400129e6;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,(char *)local_40,local_48,(int *)puVar1,
                   (__crt_deferred_errno_cache *)param_1[1]);
        iVar14 = iVar14 + 1;
        puVar8 = extraout_RAX_00;
      } while (iVar14 != (int)param_1[9]);
    }
  }
  goto LAB_140012a64;
LAB_1400129e6:
  *(int *)puVar1 = -1;
LAB_140012a64:
  iVar14 = (int)param_1[4];
  if ((-1 < iVar14) &&
     (uVar7 = (uint)param_1[5] >> 2, puVar8 = (ulonglong *)(ulonglong)uVar7, (uVar7 & 1) != 0)) {
    puVar1 = param_1 + 4;
    iVar10 = 0;
    if (0 < iVar11) {
      do {
        uVar4 = param_1[0x8c];
        if (*(longlong *)(uVar4 + 0x10) == *(longlong *)(uVar4 + 8)) {
          if (*(char *)(uVar4 + 0x18) == '\0') {
            iVar14 = -1;
          }
          else {
            iVar14 = iVar14 + 1;
          }
          *(int *)puVar1 = iVar14;
          puVar8 = puVar1;
        }
        else {
          *(int *)puVar1 = iVar14 + 1;
          *(longlong *)(uVar4 + 0x10) = *(longlong *)(uVar4 + 0x10) + 1;
          **(undefined1 **)param_1[0x8c] = 0x20;
          puVar8 = (ulonglong *)param_1[0x8c];
          *puVar8 = *puVar8 + 1;
        }
        iVar14 = (int)*puVar1;
      } while ((iVar14 != -1) && (iVar10 = iVar10 + 1, iVar10 < iVar11));
    }
  }
LAB_140012ad6:
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
}




/* ---- 0x140013334 : FUN_140013334 [was: FUN_140013334] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140013334(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
                       undefined4 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStackY_548 [32];
  undefined1 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  LPVOID pvStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14003c2c0 ^ (ulonglong)auStackY_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    uVar4 = PTR_PTR_14003c5d8._0_4_;
    uVar5 = PTR_PTR_14003c5d8._4_4_;
    uVar6 = PTR_DAT_14003c5e0._0_4_;
    uVar7 = PTR_DAT_14003c5e0._4_4_;
    if (DAT_14003d760 == 0) goto LAB_1400133a3;
  }
  else {
    uVar4 = *param_5;
    uVar5 = param_5[1];
    uVar6 = param_5[2];
    uVar7 = param_5[3];
LAB_1400133a3:
    local_4d0 = '\x01';
    local_4e0 = uVar4;
    uStack_4dc = uVar5;
    uStack_4d8 = uVar6;
    uStack_4d4 = uVar7;
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    local_4c8 = '\x01';
    local_4cc = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_4f8);
  }
  else {
    local_4ff = 0;
    local_4fb = 0;
    local_4f9 = 0;
    local_508 = 0;
    if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined1 *)0x0)) {
      local_500 = 1;
    }
    local_4b0 = local_4f8;
    local_498 = 0;
    local_58 = &local_518;
    local_494 = 0;
    local_4a0 = param_6;
    local_490 = 0;
    local_488 = 0;
    local_480 = 0;
    local_470 = 0;
    local_46c = 0;
    local_68 = 0;
    pvStack_60 = (LPVOID)0x0;
    local_50 = 0;
    local_518 = param_2;
    local_510 = param_3;
    local_4b8 = param_1;
    local_4a8 = param_4;
    iVar1 = FUN_140011ad8(&local_4b8);
    uVar3 = (ulonglong)iVar1;
    if (param_2 == (undefined1 *)0x0) {
LAB_140013516:
      FUN_14001b320(pvStack_60);
      goto LAB_140013522;
    }
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar1 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_140013512;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_140013516;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_14001b320(pvStack_60);
          uVar3 = 0xfffffffe;
          goto LAB_140013522;
        }
        goto LAB_140013512;
      }
    }
    else if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_508 != param_3) {
LAB_140013512:
        param_2[local_508] = 0;
        goto LAB_140013516;
      }
      if ((iVar1 < 0) || (uVar3 <= param_3)) goto LAB_140013516;
    }
    FUN_14001b320(pvStack_60);
  }
  uVar3 = 0xffffffff;
LAB_140013522:
  uVar4 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar2 = FUN_140010320(local_4f8);
    *(undefined4 *)(lVar2 + 0x20) = uVar4;
  }
  if (local_4c0 != '\0') {
    lVar2 = FUN_140010320(local_4f8);
    *(undefined4 *)(lVar2 + 0x24) = local_4c4;
  }
  return uVar3 & 0xffffffff;
}




/* ---- 0x1400152ec : FUN_1400152ec [was: FUN_1400152ec] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400152ec(undefined8 *param_1)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  char local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_f8;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_c8,*(__crt_locale_pointers **)*param_1);
  local_30 = *(undefined8 *)param_1[4];
  local_88 = *(undefined8 *)param_1[3];
  local_a8 = *(undefined8 *)param_1[2];
  uStack_d0 = 0;
  local_d8 = *(undefined8 *)param_1[1];
  local_38 = local_c0;
  uStack_98 = 0;
  local_80 = 0;
  local_5c = 0;
  uStack_54 = 0;
  local_78 = 0;
  local_4c = 0;
  uStack_44 = 0;
  local_76 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_28 = 0;
  local_a0 = local_d8;
  local_90 = local_a8;
  FUN_140017e10((input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_> *)
                &local_a8);
  if (local_b0 != '\0') {
    *(uint *)(local_c8 + 0x3a8) = *(uint *)(local_c8 + 0x3a8) & 0xfffffffd;
  }
  return;
}




/* ---- 0x140015b1c : FUN_140015b1c [was: FUN_140015b1c] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140015b1c(uint *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  __acrt_ptd *p_Var8;
  ulonglong *puVar9;
  undefined8 uVar10;
  byte bVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined7 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  rsize_t rVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStackY_d78 [32];
  uint local_cf4 [115];
  undefined4 local_b28;
  undefined1 local_b24 [460];
  uint local_958;
  uint local_954 [115];
  uint local_788;
  uint local_784 [115];
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  undefined8 local_3e4;
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;
  
  local_48 = DAT_14003c2c0 ^ (ulonglong)auStackY_d78;
  uVar5 = param_1[1];
  uVar4 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  local_788 = 0;
  puVar28 = param_1 + 2;
  uVar18 = 0;
  uVar29 = *param_1;
  if ((int)*param_1 < 0) {
    uVar29 = 0;
  }
  uVar32 = 0;
  uVar23 = 0;
  uVar31 = uVar29;
  if (uVar5 <= uVar29) {
    uVar31 = uVar5;
  }
  uVar29 = uVar29 - uVar31;
  puVar26 = (uint *)((longlong)param_1 + (ulonglong)uVar31 + 8);
  puVar7 = (uint *)((longlong)param_1 + (ulonglong)uVar5 + 8);
  uVar5 = (int)puVar7 - (int)puVar26;
  if (puVar28 != puVar26) {
    do {
      uVar31 = (uint)uVar32;
      if (uVar23 == 9) {
        if (uVar18 != 0) {
          uVar21 = 0;
          uVar14 = 0;
          do {
            uVar23 = (int)uVar14 + 1;
            uVar13 = (ulonglong)local_784[uVar14] * 1000000000 + uVar21;
            local_784[uVar14] = (uint)uVar13;
            uVar21 = uVar13 >> 0x20;
            uVar14 = (ulonglong)uVar23;
          } while (uVar23 != uVar18);
          uVar23 = (uint)(uVar13 >> 0x20);
          uVar18 = local_788;
          if (uVar23 != 0) {
            if (local_788 < 0x73) {
              local_784[local_788] = uVar23;
              local_788 = local_788 + 1;
              uVar18 = local_788;
            }
            else {
              local_788 = 0;
              uVar18 = 0;
            }
          }
        }
        if (uVar31 != 0) {
          uVar23 = 0;
          uVar30 = 0;
          if (uVar18 != 0) {
            do {
              uVar18 = uVar30 + 1;
              uVar14 = local_784[uVar30] + uVar32;
              local_784[uVar30] = (uint)uVar14;
              uVar32 = uVar14 >> 0x20;
              uVar31 = (uint)(uVar14 >> 0x20);
              uVar30 = uVar18;
            } while (uVar18 != local_788);
            uVar18 = local_788;
            uVar23 = local_788;
            if (uVar31 == 0) goto LAB_140015cc7;
          }
          if (uVar23 < 0x73) {
            local_784[uVar23] = uVar31;
            uVar18 = local_788 + 1;
            local_788 = uVar18;
          }
          else {
            uVar18 = 0;
            local_788 = 0;
          }
        }
LAB_140015cc7:
        uVar31 = 0;
        uVar23 = 0;
      }
      uVar30 = *puVar28;
      uVar23 = uVar23 + 1;
      puVar28 = (uint *)((longlong)puVar28 + 1);
      uVar31 = (uint)(byte)uVar30 + uVar31 * 10;
      uVar32 = (ulonglong)uVar31;
    } while (puVar28 != puVar26);
    if (uVar23 != 0) {
      for (uVar30 = uVar23 / 10; uVar30 != 0; uVar30 = uVar30 - uVar24) {
        uVar24 = uVar30;
        if (0x26 < uVar30) {
          uVar24 = 0x26;
        }
        uVar20 = uVar24 - 1;
        bVar11 = (&DAT_14002ba92)[(ulonglong)uVar20 * 4];
        bVar1 = (&DAT_14002ba93)[(ulonglong)uVar20 * 4];
        local_218 = (uint)bVar1 + (uint)bVar11;
        FUN_1400280c0((undefined1 (*) [32])local_214,0,(ulonglong)bVar11 * 4);
        FUN_140027a20((undefined8 *)(local_214 + bVar11),
                      (undefined8 *)
                      (&DAT_14002b180 +
                      (ulonglong)*(ushort *)(&DAT_14002ba90 + (ulonglong)uVar20 * 4) * 4),
                      (ulonglong)bVar1 << 2);
        uVar20 = local_784[0];
        if (local_218 < 2) {
          uVar14 = (ulonglong)local_214[0];
          if (local_214[0] == 0) {
LAB_140015d98:
            local_788 = 0;
            uVar6 = 0;
            goto LAB_1400160b6;
          }
          uVar6 = uVar18;
          if ((local_214[0] == 1) || (uVar18 == 0)) goto LAB_1400160b6;
          uVar13 = 0;
          uVar21 = 0;
          do {
            uVar6 = (int)uVar21 + 1;
            uVar15 = local_784[uVar21] * uVar14 + uVar13;
            local_784[uVar21] = (uint)uVar15;
            uVar13 = uVar15 >> 0x20;
            uVar20 = (uint)(uVar15 >> 0x20);
            uVar21 = (ulonglong)uVar6;
          } while (uVar6 != uVar18);
LAB_140015deb:
          uVar18 = 0;
          uVar6 = local_788;
          if (uVar20 == 0) goto LAB_1400160b6;
          if (local_788 < 0x73) {
            local_784[local_788] = uVar20;
            local_788 = local_788 + 1;
            uVar6 = local_788;
            goto LAB_1400160b6;
          }
          local_788 = 0;
          bVar33 = false;
        }
        else {
          if (uVar18 < 2) {
            uVar14 = (ulonglong)local_784[0];
            uVar21 = (ulonglong)local_218 << 2;
            local_788 = local_218;
            if ((ulonglong)local_218 != 0) {
              if (uVar21 < 0x1cd) {
                FUN_140027a20((undefined8 *)local_784,(undefined8 *)local_214,uVar21);
              }
              else {
                FUN_1400280c0((undefined1 (*) [32])local_784,0,0x1cc);
                p_Var8 = FUN_14001abbc();
                *(undefined4 *)p_Var8 = 0x22;
                FUN_14001925c();
              }
            }
            if (uVar20 == 0) goto LAB_140015d98;
            uVar6 = local_788;
            if ((uVar20 != 1) && (local_788 != 0)) {
              uVar13 = 0;
              uVar21 = 0;
              do {
                uVar18 = (int)uVar21 + 1;
                uVar15 = local_784[uVar21] * uVar14 + uVar13;
                local_784[uVar21] = (uint)uVar15;
                uVar13 = uVar15 >> 0x20;
                uVar20 = (uint)(uVar15 >> 0x20);
                uVar21 = (ulonglong)uVar18;
              } while (uVar18 != local_788);
              goto LAB_140015deb;
            }
          }
          else {
            puVar28 = local_784;
            puVar16 = local_214;
            uVar20 = uVar18;
            if (local_218 < uVar18) {
              puVar16 = local_784;
              uVar20 = local_218;
              puVar28 = local_214;
            }
            local_788 = 0;
            local_5b8 = 0;
            uVar14 = 0;
            uVar6 = local_218;
            if (local_218 < uVar18) {
              uVar6 = uVar18;
            }
            if (uVar20 != 0) {
              do {
                uVar17 = (uint)uVar14;
                uVar18 = puVar28[uVar14];
                if (uVar18 == 0) {
                  if (uVar17 == local_788) {
                    local_788 = uVar17 + 1;
                    local_5b4[uVar14] = 0;
                    local_5b8 = local_788;
                  }
                }
                else {
                  uVar21 = 0;
                  uVar25 = uVar17;
                  if (uVar6 != 0) {
                    do {
                      uVar25 = (uint)uVar14;
                      uVar13 = uVar14;
                      if (uVar25 == 0x73) break;
                      if (uVar25 == local_788) {
                        local_5b4[uVar14] = 0;
                        local_5b8 = uVar25 + 1;
                      }
                      uVar13 = (ulonglong)(uVar25 + 1);
                      uVar21 = (ulonglong)puVar16[-uVar17 + uVar25] * (ulonglong)uVar18 + uVar21 +
                               (ulonglong)local_5b4[uVar14];
                      local_5b4[uVar14] = (uint)uVar21;
                      uVar21 = uVar21 >> 0x20;
                      uVar14 = uVar13;
                      local_788 = local_5b8;
                    } while (-uVar17 + uVar25 + 1 != uVar6);
                    uVar25 = (uint)uVar13;
                    uVar18 = (uint)uVar21;
                    while (uVar18 != 0) {
                      uVar25 = (uint)uVar13;
                      if (uVar25 == 0x73) goto LAB_140016188;
                      if (uVar25 == local_788) {
                        local_5b4[uVar13] = 0;
                        local_5b8 = uVar25 + 1;
                      }
                      uVar18 = local_5b4[uVar13];
                      uVar25 = uVar25 + 1;
                      local_5b4[uVar13] = (uint)(uVar18 + uVar21);
                      uVar18 = (uint)(uVar18 + uVar21 >> 0x20);
                      uVar21 = (ulonglong)uVar18;
                      uVar13 = (ulonglong)uVar25;
                      local_788 = local_5b8;
                    }
                  }
                  if (uVar25 == 0x73) goto LAB_140016188;
                }
                uVar14 = (ulonglong)(uVar17 + 1);
              } while (uVar17 + 1 != uVar20);
            }
            uVar14 = (ulonglong)local_788 << 2;
            uVar6 = local_788;
            if ((ulonglong)local_788 != 0) {
              if (uVar14 < 0x1cd) {
                FUN_140027a20((undefined8 *)local_784,(undefined8 *)local_5b4,uVar14);
                uVar6 = local_788;
              }
              else {
                FUN_1400280c0((undefined1 (*) [32])local_784,0,0x1cc);
                p_Var8 = FUN_14001abbc();
                *(undefined4 *)p_Var8 = 0x22;
                FUN_14001925c();
                uVar6 = local_788;
              }
            }
          }
LAB_1400160b6:
          bVar33 = true;
          uVar18 = uVar6;
        }
        if (!bVar33) goto LAB_140016188;
      }
      if (uVar23 % 10 != 0) {
        uVar23 = *(uint *)(&DAT_14002bb28 + (ulonglong)(uVar23 % 10 - 1) * 4);
        if (uVar23 == 0) {
LAB_140016188:
          local_788 = 0;
          uVar18 = 0;
        }
        else if ((uVar23 != 1) && (uVar18 != 0)) {
          uVar21 = 0;
          uVar14 = 0;
          do {
            uVar30 = (int)uVar14 + 1;
            uVar13 = (ulonglong)local_784[uVar14] * (ulonglong)uVar23 + uVar21;
            local_784[uVar14] = (uint)uVar13;
            uVar21 = uVar13 >> 0x20;
            uVar14 = (ulonglong)uVar30;
          } while (uVar30 != uVar18);
          uVar23 = (uint)(uVar13 >> 0x20);
          uVar18 = local_788;
          if (uVar23 != 0) {
            if (0x72 < local_788) goto LAB_140016188;
            local_784[local_788] = uVar23;
            local_788 = local_788 + 1;
            uVar18 = local_788;
          }
        }
      }
      if (uVar31 != 0) {
        uVar23 = 0;
        uVar30 = 0;
        if (uVar18 != 0) {
          do {
            uVar23 = uVar30 + 1;
            uVar18 = local_784[uVar30];
            local_784[uVar30] = (uint)(uVar18 + uVar32);
            uVar31 = (uint)(uVar18 + uVar32 >> 0x20);
            uVar32 = (ulonglong)uVar31;
            uVar30 = uVar23;
          } while (uVar23 != local_788);
          uVar18 = local_788;
          uVar23 = local_788;
          if (uVar31 == 0) goto LAB_140016214;
        }
        if (uVar23 < 0x73) {
          local_784[uVar23] = uVar31;
          local_788 = local_788 + 1;
          uVar18 = local_788;
        }
        else {
          local_788 = 0;
          uVar18 = 0;
        }
      }
    }
  }
LAB_140016214:
  if (uVar29 == 0) {
LAB_140016745:
    if (uVar18 == 0) goto LAB_14001674a;
    iVar12 = 0x1f;
    bVar33 = local_784[uVar18 - 1] == 0;
    if (!bVar33) {
      for (; local_784[uVar18 - 1] >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (bVar33) {
      iVar12 = 0;
    }
    else {
      iVar12 = iVar12 + 1;
    }
    uVar29 = (uVar18 - 1) * 0x20 + iVar12;
  }
  else {
    for (uVar31 = uVar29 / 10; uVar31 != 0; uVar31 = uVar31 - uVar23) {
      uVar23 = uVar31;
      if (0x26 < uVar31) {
        uVar23 = 0x26;
      }
      uVar30 = uVar23 - 1;
      bVar11 = (&DAT_14002ba92)[(ulonglong)uVar30 * 4];
      bVar1 = (&DAT_14002ba93)[(ulonglong)uVar30 * 4];
      local_218 = (uint)bVar1 + (uint)bVar11;
      FUN_1400280c0((undefined1 (*) [32])local_214,0,(ulonglong)bVar11 * 4);
      FUN_140027a20((undefined8 *)(local_214 + bVar11),
                    (undefined8 *)
                    (&DAT_14002b180 +
                    (ulonglong)*(ushort *)(&DAT_14002ba90 + (ulonglong)uVar30 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      uVar30 = local_784[0];
      if (local_218 < 2) {
        uVar32 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
LAB_1400162d7:
          local_788 = 0;
          uVar24 = 0;
          goto LAB_1400165e4;
        }
        uVar24 = uVar18;
        if ((local_214[0] == 1) || (uVar18 == 0)) goto LAB_1400165e4;
        uVar21 = 0;
        uVar14 = 0;
        do {
          uVar24 = (int)uVar14 + 1;
          uVar13 = local_784[uVar14] * uVar32 + uVar21;
          local_784[uVar14] = (uint)uVar13;
          uVar21 = uVar13 >> 0x20;
          uVar30 = (uint)(uVar13 >> 0x20);
          uVar14 = (ulonglong)uVar24;
        } while (uVar24 != uVar18);
LAB_14001632a:
        uVar18 = 0;
        uVar24 = local_788;
        if (uVar30 == 0) goto LAB_1400165e4;
        if (local_788 < 0x73) {
          local_784[local_788] = uVar30;
          local_788 = local_788 + 1;
          uVar24 = local_788;
          goto LAB_1400165e4;
        }
        local_788 = 0;
        bVar33 = false;
      }
      else {
        if (uVar18 < 2) {
          uVar32 = (ulonglong)local_784[0];
          uVar14 = (ulonglong)local_218 << 2;
          local_788 = local_218;
          if ((ulonglong)local_218 != 0) {
            if (uVar14 < 0x1cd) {
              FUN_140027a20((undefined8 *)local_784,(undefined8 *)local_214,uVar14);
            }
            else {
              FUN_1400280c0((undefined1 (*) [32])local_784,0,0x1cc);
              p_Var8 = FUN_14001abbc();
              *(undefined4 *)p_Var8 = 0x22;
              FUN_14001925c();
            }
          }
          if (uVar30 == 0) goto LAB_1400162d7;
          uVar24 = local_788;
          if ((uVar30 != 1) && (local_788 != 0)) {
            uVar21 = 0;
            uVar14 = 0;
            do {
              uVar18 = (int)uVar14 + 1;
              uVar13 = local_784[uVar14] * uVar32 + uVar21;
              local_784[uVar14] = (uint)uVar13;
              uVar21 = uVar13 >> 0x20;
              uVar30 = (uint)(uVar13 >> 0x20);
              uVar14 = (ulonglong)uVar18;
            } while (uVar18 != local_788);
            goto LAB_14001632a;
          }
        }
        else {
          puVar28 = local_784;
          puVar16 = local_214;
          uVar30 = uVar18;
          if (local_218 < uVar18) {
            puVar16 = local_784;
            uVar30 = local_218;
            puVar28 = local_214;
          }
          local_788 = 0;
          local_5b8 = 0;
          uVar32 = 0;
          uVar24 = local_218;
          if (local_218 < uVar18) {
            uVar24 = uVar18;
          }
          if (uVar30 != 0) {
            do {
              uVar20 = (uint)uVar32;
              uVar18 = puVar28[uVar32];
              if (uVar18 == 0) {
                if (uVar20 == local_788) {
                  local_788 = uVar20 + 1;
                  local_5b4[uVar32] = 0;
                  local_5b8 = local_788;
                }
              }
              else {
                uVar14 = 0;
                uVar6 = uVar20;
                if (uVar24 != 0) {
                  do {
                    uVar6 = (uint)uVar32;
                    uVar21 = uVar32;
                    if (uVar6 == 0x73) break;
                    if (uVar6 == local_788) {
                      local_5b4[uVar32] = 0;
                      local_5b8 = uVar6 + 1;
                    }
                    uVar21 = (ulonglong)(uVar6 + 1);
                    uVar14 = (ulonglong)puVar16[-uVar20 + uVar6] * (ulonglong)uVar18 + uVar14 +
                             (ulonglong)local_5b4[uVar32];
                    local_5b4[uVar32] = (uint)uVar14;
                    uVar14 = uVar14 >> 0x20;
                    uVar32 = uVar21;
                    local_788 = local_5b8;
                  } while (-uVar20 + uVar6 + 1 != uVar24);
                  uVar6 = (uint)uVar21;
                  uVar18 = (uint)uVar14;
                  while (uVar18 != 0) {
                    uVar6 = (uint)uVar21;
                    if (uVar6 == 0x73) goto LAB_1400166be;
                    if (uVar6 == local_788) {
                      local_5b4[uVar21] = 0;
                      local_5b8 = uVar6 + 1;
                    }
                    uVar18 = local_5b4[uVar21];
                    uVar6 = uVar6 + 1;
                    local_5b4[uVar21] = (uint)(uVar14 + uVar18);
                    uVar18 = (uint)(uVar14 + uVar18 >> 0x20);
                    uVar14 = (ulonglong)uVar18;
                    uVar21 = (ulonglong)uVar6;
                    local_788 = local_5b8;
                  }
                }
                if (uVar6 == 0x73) goto LAB_1400166be;
              }
              uVar32 = (ulonglong)(uVar20 + 1);
            } while (uVar20 + 1 != uVar30);
          }
          uVar32 = (ulonglong)local_788 << 2;
          uVar24 = local_788;
          if ((ulonglong)local_788 != 0) {
            if (uVar32 < 0x1cd) {
              FUN_140027a20((undefined8 *)local_784,(undefined8 *)local_5b4,uVar32);
              uVar24 = local_788;
            }
            else {
              FUN_1400280c0((undefined1 (*) [32])local_784,0,0x1cc);
              p_Var8 = FUN_14001abbc();
              *(undefined4 *)p_Var8 = 0x22;
              FUN_14001925c();
              uVar24 = local_788;
            }
          }
        }
LAB_1400165e4:
        bVar33 = true;
        uVar18 = uVar24;
      }
      if (!bVar33) goto LAB_1400166be;
    }
    if (uVar29 % 10 == 0) goto LAB_140016745;
    uVar29 = *(uint *)(&DAT_14002bb28 + (ulonglong)(uVar29 % 10 - 1) * 4);
    if (uVar29 == 0) {
      local_788 = 0;
      uVar18 = 0;
      goto LAB_140016745;
    }
    if (uVar29 == 1) goto LAB_140016745;
    if (uVar18 != 0) {
      uVar14 = 0;
      uVar32 = 0;
      do {
        uVar31 = (int)uVar32 + 1;
        uVar21 = (ulonglong)local_784[uVar32] * (ulonglong)uVar29 + uVar14;
        local_784[uVar32] = (uint)uVar21;
        uVar14 = uVar21 >> 0x20;
        uVar32 = (ulonglong)uVar31;
      } while (uVar31 != uVar18);
      uVar29 = (uint)(uVar21 >> 0x20);
      uVar18 = local_788;
      if (uVar29 != 0) {
        if (0x72 < local_788) {
LAB_1400166be:
          puVar9 = (ulonglong *)*param_2;
          if (*(char *)(param_2 + 1) == '\0') {
            *(uint *)puVar9 =
                 (-(uint)((char)param_1[0xc2] != '\0') & 0x80000000) + 0x7f800000 |
                 (uint)*puVar9 & 0x7f800000;
          }
          else {
            *puVar9 = (-(ulonglong)((char)param_1[0xc2] != '\0') & 0x8000000000000000) +
                      0x7ff0000000000000 | *puVar9 & 0x7ff0000000000000;
          }
          return 3;
        }
        local_784[local_788] = uVar29;
        local_788 = local_788 + 1;
        uVar18 = local_788;
      }
      goto LAB_140016745;
    }
LAB_14001674a:
    uVar29 = 0;
  }
  uVar22 = (undefined7)((ulonglong)param_1 >> 8);
  if ((uVar29 < uVar4) && (uVar5 != 0)) {
    uVar23 = 0;
    uVar32 = 0;
    local_958 = 0;
    uVar31 = 0;
    if (puVar26 != puVar7) {
      do {
        uVar30 = (uint)uVar32;
        if (uVar31 == 9) {
          if (uVar23 != 0) {
            uVar21 = 0;
            uVar14 = 0;
            do {
              uVar31 = (int)uVar14 + 1;
              uVar13 = (ulonglong)local_954[uVar14] * 1000000000 + uVar21;
              local_954[uVar14] = (uint)uVar13;
              uVar21 = uVar13 >> 0x20;
              uVar14 = (ulonglong)uVar31;
            } while (uVar31 != uVar23);
            uVar31 = (uint)(uVar13 >> 0x20);
            uVar23 = local_958;
            if (uVar31 != 0) {
              if (local_958 < 0x73) {
                local_954[local_958] = uVar31;
                local_958 = local_958 + 1;
                uVar23 = local_958;
              }
              else {
                local_218 = 0;
                local_958 = 0;
                memcpy_s(local_954,0x1cc,local_214,0);
                uVar23 = local_958;
              }
            }
          }
          if (uVar30 != 0) {
            uVar14 = 0;
            uVar31 = 0;
            if (uVar23 != 0) {
              do {
                uVar31 = (int)uVar14 + 1;
                uVar21 = local_954[uVar14] + uVar32;
                local_954[uVar14] = (uint)uVar21;
                uVar32 = uVar21 >> 0x20;
                uVar30 = (uint)(uVar21 >> 0x20);
                uVar14 = (ulonglong)uVar31;
              } while (uVar31 != local_958);
              uVar31 = local_958;
              uVar23 = local_958;
              if (uVar30 == 0) goto LAB_1400168e5;
            }
            if (uVar31 < 0x73) {
              local_954[uVar31] = uVar30;
              local_958 = local_958 + 1;
              uVar23 = local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
              uVar23 = local_958;
            }
          }
LAB_1400168e5:
          uVar30 = 0;
          uVar31 = 0;
        }
        uVar24 = *puVar26;
        uVar31 = uVar31 + 1;
        puVar26 = (uint *)((longlong)puVar26 + 1);
        uVar30 = (uint)(byte)uVar24 + uVar30 * 10;
        uVar32 = (ulonglong)uVar30;
      } while (puVar26 != puVar7);
      if (uVar31 != 0) {
        uVar14 = (ulonglong)uVar31 / 10;
        uVar24 = (uint)uVar14;
        while (uVar20 = (uint)uVar14, uVar24 != 0) {
          uVar24 = uVar20;
          if (0x26 < uVar20) {
            uVar24 = 0x26;
          }
          uVar14 = (ulonglong)(uVar24 - 1);
          bVar11 = (&DAT_14002ba92)[uVar14 * 4];
          bVar1 = (&DAT_14002ba93)[uVar14 * 4];
          local_218 = (uint)bVar1 + (uint)bVar11;
          FUN_1400280c0((undefined1 (*) [32])local_214,0,(ulonglong)bVar11 * 4);
          FUN_140027a20((undefined8 *)(local_214 + bVar11),
                        (undefined8 *)
                        (&DAT_14002b180 + (ulonglong)*(ushort *)(&DAT_14002ba90 + uVar14 * 4) * 4),
                        (ulonglong)bVar1 << 2);
          uVar6 = local_954[0];
          if (local_218 < 2) {
            uVar14 = (ulonglong)local_214[0];
            if (local_214[0] == 0) {
LAB_1400169bb:
              local_218 = 0;
              puVar28 = local_214;
              local_958 = 0;
              rVar27 = 0;
              goto LAB_140016c83;
            }
            if ((local_214[0] == 1) || (uVar23 == 0)) goto LAB_140016c9b;
            uVar13 = 0;
            uVar21 = 0;
            do {
              uVar6 = (int)uVar21 + 1;
              uVar15 = local_954[uVar21] * uVar14 + uVar13;
              local_954[uVar21] = (uint)uVar15;
              uVar13 = uVar15 >> 0x20;
              uVar17 = (uint)(uVar15 >> 0x20);
              uVar21 = (ulonglong)uVar6;
            } while (uVar6 != uVar23);
LAB_140016a1b:
            uVar23 = local_958;
            if (uVar17 == 0) goto LAB_140016c9b;
            if (local_958 < 0x73) {
              local_954[local_958] = uVar17;
              local_958 = local_958 + 1;
              uVar23 = local_958;
              goto LAB_140016c9b;
            }
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            bVar33 = false;
            uVar23 = local_958;
          }
          else {
            puVar28 = local_214;
            puVar7 = local_954;
            if (uVar23 < 2) {
              local_958 = local_218;
              memcpy_s(puVar7,0x1cc,puVar28,(ulonglong)local_218 << 2);
              if (uVar6 != 0) {
                uVar23 = local_958;
                if ((uVar6 != 1) && (local_958 != 0)) {
                  uVar21 = 0;
                  uVar14 = 0;
                  do {
                    uVar23 = (int)uVar14 + 1;
                    uVar13 = (ulonglong)local_954[uVar14] * (ulonglong)uVar6 + uVar21;
                    local_954[uVar14] = (uint)uVar13;
                    uVar21 = uVar13 >> 0x20;
                    uVar17 = (uint)(uVar13 >> 0x20);
                    uVar14 = (ulonglong)uVar23;
                  } while (uVar23 != local_958);
                  goto LAB_140016a1b;
                }
                goto LAB_140016c9b;
              }
              goto LAB_1400169bb;
            }
            uVar6 = uVar23;
            if (local_218 < uVar23) {
              puVar28 = local_954;
              puVar7 = local_214;
              uVar6 = local_218;
            }
            uVar25 = 0;
            local_958 = 0;
            uVar17 = local_218;
            if (local_218 < uVar23) {
              uVar17 = uVar23;
            }
            local_5b8 = 0;
            if (uVar6 != 0) {
              do {
                uVar23 = puVar7[uVar25];
                if (uVar23 == 0) {
                  if (uVar25 == local_958) {
                    local_958 = uVar25 + 1;
                    local_5b4[uVar25] = 0;
                    local_5b8 = local_958;
                  }
                }
                else {
                  uVar14 = 0;
                  uVar19 = uVar25;
                  if (uVar17 != 0) {
                    uVar21 = (ulonglong)uVar25;
                    do {
                      uVar19 = (uint)uVar21;
                      uVar13 = uVar21;
                      if (uVar19 == 0x73) break;
                      if (uVar19 == local_958) {
                        local_5b4[uVar21] = 0;
                        local_5b8 = uVar19 + 1;
                      }
                      uVar13 = (ulonglong)(uVar19 + 1);
                      uVar14 = (ulonglong)puVar28[-uVar25 + uVar19] * (ulonglong)uVar23 +
                               (ulonglong)local_5b4[uVar21] + uVar14;
                      local_5b4[uVar21] = (uint)uVar14;
                      uVar14 = uVar14 >> 0x20;
                      uVar21 = uVar13;
                      local_958 = local_5b8;
                    } while (-uVar25 + uVar19 + 1 != uVar17);
                    uVar19 = (uint)uVar13;
                    uVar23 = (uint)uVar14;
                    while (uVar23 != 0) {
                      uVar19 = (uint)uVar13;
                      if (uVar19 == 0x73) goto LAB_140016d5e;
                      if (uVar19 == local_958) {
                        local_5b4[uVar13] = 0;
                        local_5b8 = uVar19 + 1;
                      }
                      uVar23 = local_5b4[uVar13];
                      uVar19 = uVar19 + 1;
                      local_5b4[uVar13] = (uint)(uVar23 + uVar14);
                      uVar23 = (uint)(uVar23 + uVar14 >> 0x20);
                      uVar14 = (ulonglong)uVar23;
                      uVar13 = (ulonglong)uVar19;
                      local_958 = local_5b8;
                    }
                  }
                  if (uVar19 == 0x73) {
LAB_140016d5e:
                    local_b28 = 0;
                    local_958 = 0;
                    memcpy_s(local_954,0x1cc,local_b24,0);
                    goto LAB_140016d85;
                  }
                }
                uVar25 = uVar25 + 1;
              } while (uVar25 != uVar6);
            }
            puVar28 = local_5b4;
            rVar27 = (ulonglong)local_958 << 2;
LAB_140016c83:
            memcpy_s(local_954,0x1cc,puVar28,rVar27);
            uVar23 = local_958;
LAB_140016c9b:
            bVar33 = true;
          }
          if (!bVar33) goto LAB_140016d85;
          uVar24 = uVar20 - uVar24;
          uVar14 = (ulonglong)uVar24;
        }
        if (uVar31 % 10 != 0) {
          uVar31 = *(uint *)(&DAT_14002bb28 + (ulonglong)(uVar31 % 10 - 1) * 4);
          if (uVar31 == 0) {
LAB_140016d85:
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar23 = local_958;
          }
          else if ((uVar31 != 1) && (uVar23 != 0)) {
            uVar21 = 0;
            uVar14 = 0;
            do {
              uVar24 = (int)uVar14 + 1;
              uVar13 = (ulonglong)local_954[uVar14] * (ulonglong)uVar31 + uVar21;
              local_954[uVar14] = (uint)uVar13;
              uVar21 = uVar13 >> 0x20;
              uVar14 = (ulonglong)uVar24;
            } while (uVar24 != uVar23);
            uVar31 = (uint)(uVar13 >> 0x20);
            uVar23 = local_958;
            if (uVar31 != 0) {
              if (0x72 < local_958) goto LAB_140016d85;
              local_954[local_958] = uVar31;
              local_958 = local_958 + 1;
              uVar23 = local_958;
            }
          }
        }
        if (uVar30 != 0) {
          uVar31 = 0;
          uVar24 = 0;
          if (uVar23 != 0) {
            do {
              uVar24 = uVar31 + 1;
              uVar23 = local_954[uVar31];
              local_954[uVar31] = (uint)(uVar23 + uVar32);
              uVar30 = (uint)(uVar23 + uVar32 >> 0x20);
              uVar32 = (ulonglong)uVar30;
              uVar31 = uVar24;
            } while (uVar24 != local_958);
            uVar24 = local_958;
            uVar23 = local_958;
            if (uVar30 == 0) goto LAB_140016e42;
          }
          if (uVar24 < 0x73) {
            local_954[uVar24] = uVar30;
            local_958 = local_958 + 1;
            uVar23 = local_958;
          }
          else {
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar23 = local_958;
          }
        }
      }
    }
LAB_140016e42:
    if ((int)*param_1 < 0) {
      uVar5 = uVar5 - *param_1;
    }
    uVar30 = 1;
    local_3e4 = 1;
    local_3e8 = 1;
    for (uVar31 = uVar5 / 10; uVar31 != 0; uVar31 = uVar31 - uVar24) {
      uVar24 = uVar31;
      if (0x26 < uVar31) {
        uVar24 = 0x26;
      }
      uVar32 = (ulonglong)(uVar24 - 1);
      bVar11 = (&DAT_14002ba92)[uVar32 * 4];
      bVar1 = (&DAT_14002ba93)[uVar32 * 4];
      local_218 = (uint)bVar1 + (uint)bVar11;
      FUN_1400280c0((undefined1 (*) [32])local_214,0,(ulonglong)bVar11 * 4);
      FUN_140027a20((undefined8 *)(local_214 + bVar11),
                    (undefined8 *)
                    (&DAT_14002b180 + (ulonglong)*(ushort *)(&DAT_14002ba90 + uVar32 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      if (local_218 < 2) {
        uVar32 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          uVar30 = local_3e8;
        }
        else if ((local_214[0] != 1) && (uVar30 != 0)) {
          uVar21 = 0;
          uVar14 = 0;
          do {
            uVar20 = (int)uVar14 + 1;
            uVar13 = *(uint *)((longlong)&local_3e4 + uVar14 * 4) * uVar32 + uVar21;
            *(int *)((longlong)&local_3e4 + uVar14 * 4) = (int)uVar13;
            uVar21 = uVar13 >> 0x20;
            uVar14 = (ulonglong)uVar20;
          } while (uVar20 != uVar30);
          iVar12 = (int)(uVar13 >> 0x20);
          uVar30 = local_3e8;
          if (iVar12 == 0) goto LAB_140016f46;
          if (local_3e8 < 0x73) {
            *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar12;
            local_3e8 = local_3e8 + 1;
            uVar30 = local_3e8;
            goto LAB_140016f46;
          }
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          bVar33 = false;
          uVar30 = local_3e8;
          goto LAB_14001727e;
        }
LAB_140016f46:
        bVar33 = true;
      }
      else {
        puVar28 = local_214;
        puVar7 = (uint *)&local_3e4;
        if (uVar30 < 2) {
          uVar30 = (uint)local_3e4;
          uVar32 = local_3e4 & 0xffffffff;
          local_3e8 = local_218;
          memcpy_s(puVar7,0x1cc,puVar28,(ulonglong)local_218 << 2);
          if (uVar30 == 0) {
            puVar28 = local_cf4;
            local_3e8 = 0;
            rVar27 = 0;
            goto LAB_140017266;
          }
          if ((uVar30 != 1) && (local_3e8 != 0)) {
            uVar21 = 0;
            uVar14 = 0;
            do {
              uVar30 = (int)uVar14 + 1;
              uVar13 = *(uint *)((longlong)&local_3e4 + uVar14 * 4) * uVar32 + uVar21;
              *(int *)((longlong)&local_3e4 + uVar14 * 4) = (int)uVar13;
              uVar21 = uVar13 >> 0x20;
              uVar14 = (ulonglong)uVar30;
            } while (uVar30 != local_3e8);
            iVar12 = (int)(uVar13 >> 0x20);
            if (iVar12 != 0) {
              if (0x72 < local_3e8) {
                local_3e8 = 0;
                memcpy_s(&local_3e4,0x1cc,local_cf4,0);
                bVar33 = false;
                uVar30 = local_3e8;
                goto LAB_14001727e;
              }
              *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar12;
              local_3e8 = local_3e8 + 1;
            }
          }
        }
        else {
          uVar20 = uVar30;
          if (local_218 < uVar30) {
            puVar28 = (uint *)&local_3e4;
            puVar7 = local_214;
            uVar20 = local_218;
          }
          uVar25 = 0;
          uVar6 = 0;
          uVar17 = local_218;
          if (local_218 < uVar30) {
            uVar17 = uVar30;
          }
          local_5b8 = 0;
          if (uVar20 != 0) {
            do {
              uVar30 = puVar7[uVar25];
              if (uVar30 == 0) {
                if (uVar25 == uVar6) {
                  uVar6 = uVar25 + 1;
                  local_5b4[uVar25] = 0;
                  local_5b8 = uVar6;
                }
              }
              else {
                uVar32 = 0;
                uVar19 = uVar25;
                if (uVar17 != 0) {
                  uVar14 = (ulonglong)uVar25;
                  do {
                    uVar19 = (uint)uVar14;
                    uVar21 = uVar14;
                    if (uVar19 == 0x73) break;
                    if (uVar19 == uVar6) {
                      local_5b4[uVar14] = 0;
                      local_5b8 = uVar19 + 1;
                    }
                    uVar21 = (ulonglong)(uVar19 + 1);
                    uVar32 = (ulonglong)puVar28[-uVar25 + uVar19] * (ulonglong)uVar30 + uVar32 +
                             (ulonglong)local_5b4[uVar14];
                    local_5b4[uVar14] = (uint)uVar32;
                    uVar32 = uVar32 >> 0x20;
                    uVar14 = uVar21;
                    uVar6 = local_5b8;
                  } while (-uVar25 + uVar19 + 1 != uVar17);
                  uVar19 = (uint)uVar21;
                  uVar30 = (uint)uVar32;
                  while (uVar30 != 0) {
                    uVar19 = (uint)uVar21;
                    if (uVar19 == 0x73) goto LAB_1400172f9;
                    if (uVar19 == uVar6) {
                      local_5b4[uVar21] = 0;
                      local_5b8 = uVar19 + 1;
                    }
                    uVar30 = local_5b4[uVar21];
                    uVar19 = uVar19 + 1;
                    local_5b4[uVar21] = (uint)(uVar30 + uVar32);
                    uVar30 = (uint)(uVar30 + uVar32 >> 0x20);
                    uVar32 = (ulonglong)uVar30;
                    uVar21 = (ulonglong)uVar19;
                    uVar6 = local_5b8;
                  }
                }
                if (uVar19 == 0x73) {
LAB_1400172f9:
                  local_b28 = 0;
                  local_3e8 = 0;
                  memcpy_s(&local_3e4,0x1cc,local_b24,0);
                  goto LAB_14001739f;
                }
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar20);
          }
          puVar28 = local_5b4;
          rVar27 = (ulonglong)uVar6 << 2;
          local_3e8 = uVar6;
LAB_140017266:
          memcpy_s(&local_3e4,0x1cc,puVar28,rVar27);
        }
        bVar33 = true;
        uVar30 = local_3e8;
      }
LAB_14001727e:
      if (!bVar33) goto LAB_14001739f;
    }
    if (uVar5 % 10 != 0) {
      uVar5 = *(uint *)(&DAT_14002bb28 + (ulonglong)(uVar5 % 10 - 1) * 4);
      if (uVar5 == 0) {
        local_3e8 = 0;
        memcpy_s(&local_3e4,0x1cc,local_cf4,0);
        uVar30 = local_3e8;
      }
      else if ((uVar5 != 1) && (uVar30 != 0)) {
        uVar14 = 0;
        uVar32 = 0;
        do {
          uVar31 = (int)uVar32 + 1;
          uVar21 = (ulonglong)*(uint *)((longlong)&local_3e4 + uVar32 * 4) * (ulonglong)uVar5 +
                   uVar14;
          *(int *)((longlong)&local_3e4 + uVar32 * 4) = (int)uVar21;
          uVar14 = uVar21 >> 0x20;
          uVar32 = (ulonglong)uVar31;
        } while (uVar31 != uVar30);
        iVar12 = (int)(uVar21 >> 0x20);
        uVar30 = local_3e8;
        if (iVar12 != 0) {
          if (0x72 < local_3e8) {
LAB_14001739f:
            local_3e8 = 0;
            memcpy_s(&local_3e4,0x1cc,local_cf4,0);
            uVar5 = param_1[0xc2];
            if (*(char *)(param_2 + 1) == '\0') {
              puVar28 = (uint *)FUN_1400155c8(param_2);
              *puVar28 = -(uint)((char)uVar5 != '\0') & 0x80000000;
            }
            else {
              puVar9 = (ulonglong *)FUN_14001558c(param_2);
              *puVar9 = -(ulonglong)((char)uVar5 != '\0') & 0x8000000000000000;
            }
            return 2;
          }
          *(int *)((longlong)&local_3e4 + (ulonglong)local_3e8 * 4) = iVar12;
          local_3e8 = local_3e8 + 1;
          uVar30 = local_3e8;
        }
      }
    }
    if (uVar23 == 0) {
      uVar5 = 0;
    }
    else {
      iVar12 = 0x1f;
      bVar33 = local_954[uVar23 - 1] == 0;
      if (!bVar33) {
        for (; local_954[uVar23 - 1] >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (bVar33) {
        iVar12 = 0;
      }
      else {
        iVar12 = iVar12 + 1;
      }
      uVar5 = (uVar23 - 1) * 0x20 + iVar12;
    }
    if (uVar30 == 0) {
      uVar31 = 0;
    }
    else {
      puVar28 = (uint *)((longlong)&local_3e4 + (ulonglong)(uVar30 - 1) * 4);
      iVar12 = 0x1f;
      bVar33 = *puVar28 == 0;
      if (!bVar33) {
        for (; *puVar28 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (bVar33) {
        iVar12 = 0;
      }
      else {
        iVar12 = iVar12 + 1;
      }
      uVar31 = (uVar30 - 1) * 0x20 + iVar12;
    }
    uVar5 = -(uint)(uVar5 < uVar31) & uVar31 - uVar5;
    uVar31 = uVar23;
    if (uVar5 != 0) {
      sVar3 = (sbyte)(uVar5 & 0x1f);
      bVar11 = 0x20 - sVar3;
      uVar20 = uVar5 >> 5;
      uVar24 = (1 << (bVar11 & 0x3f)) - 1;
      iVar12 = 0x1f;
      bVar33 = local_954[uVar23 - 1] == 0;
      if (!bVar33) {
        for (; local_954[uVar23 - 1] >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (bVar33) {
        iVar12 = 0;
      }
      else {
        iVar12 = iVar12 + 1;
      }
      if ((uVar20 + uVar23 < 0x74) &&
         (uVar31 = (0x20U - iVar12 < (uVar5 & 0x1f)) + uVar20 + uVar23, uVar31 < 0x74)) {
        uVar6 = uVar31 - 1;
        if (uVar6 != uVar20 - 1) {
          do {
            uVar17 = uVar6 - uVar20;
            if (uVar17 < uVar23) {
              uVar25 = local_954[uVar17];
            }
            else {
              uVar25 = 0;
            }
            if (uVar17 - 1 < uVar23) {
              uVar23 = local_954[uVar17 - 1];
            }
            else {
              uVar23 = 0;
            }
            local_954[uVar6] = (uVar23 & ~uVar24) >> (bVar11 & 0x1f) | (uVar25 & uVar24) << sVar3;
            uVar6 = uVar6 - 1;
            uVar23 = local_958;
          } while (uVar6 != uVar20 - 1);
        }
        uVar23 = 0;
        local_958 = uVar31;
        if (uVar20 != 0) {
          do {
            uVar32 = (ulonglong)uVar23;
            uVar23 = uVar23 + 1;
            local_954[uVar32] = 0;
          } while (uVar23 != uVar20);
        }
      }
      else {
        local_958 = 0;
        memcpy_s(local_954,0x1cc,local_cf4,0);
        uVar31 = local_958;
      }
    }
    uVar4 = uVar4 - uVar29;
    uVar23 = uVar4;
    if (uVar29 != 0) {
      if (uVar4 < uVar5) {
        bVar33 = true;
        goto LAB_1400177d0;
      }
      uVar23 = uVar4 - uVar5;
    }
    if (uVar30 < uVar31) {
LAB_1400175ee:
      bVar33 = false;
    }
    else {
      uVar24 = uVar31;
      if (uVar31 < uVar30) {
        bVar33 = true;
      }
      else {
        do {
          uVar24 = uVar24 - 1;
          if (uVar24 == 0xffffffff) goto LAB_1400175ee;
          uVar30 = *(uint *)((longlong)&local_3e4 + (ulonglong)uVar24 * 4);
        } while (local_954[uVar24] == uVar30);
        bVar33 = local_954[uVar24] <= uVar30;
      }
    }
    if (bVar33) {
      uVar5 = uVar5 + 1;
    }
    uVar24 = uVar23 >> 5;
    sVar3 = (sbyte)(uVar23 & 0x1f);
    bVar11 = 0x20 - sVar3;
    uVar30 = (int)(1L << (bVar11 & 0x3f)) - 1;
    iVar12 = 0x1f;
    bVar33 = local_954[uVar31 - 1] == 0;
    if (!bVar33) {
      for (; local_954[uVar31 - 1] >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (bVar33) {
      iVar12 = 0;
    }
    else {
      iVar12 = iVar12 + 1;
    }
    if ((uVar24 + uVar31 < 0x74) &&
       (uVar23 = (0x20U - iVar12 < (uVar23 & 0x1f)) + uVar24 + uVar31, uVar23 < 0x74)) {
      uVar20 = uVar23;
      while (uVar20 = uVar20 - 1, uVar20 != uVar24 - 1) {
        uVar6 = uVar20 - uVar24;
        if (uVar6 < uVar31) {
          uVar17 = local_954[uVar6];
        }
        else {
          uVar17 = 0;
        }
        if (uVar6 - 1 < uVar31) {
          uVar31 = local_954[uVar6 - 1];
        }
        else {
          uVar31 = 0;
        }
        local_954[uVar20] = (uVar31 & ~uVar30) >> (bVar11 & 0x1f) | (uVar17 & uVar30) << sVar3;
        uVar31 = local_958;
      }
      uVar31 = 0;
      local_958 = uVar23;
      if (uVar24 != 0) {
        do {
          uVar32 = (ulonglong)uVar31;
          uVar31 = uVar31 + 1;
          local_954[uVar32] = 0;
        } while (uVar31 != uVar24);
      }
    }
    else {
      local_958 = 0;
      memcpy_s(local_954,0x1cc,local_cf4,0);
    }
    uVar32 = FUN_1400178d0(&local_958,&local_3e8);
    bVar33 = local_958 == 0;
    lVar2 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar32 == 0) {
      uVar31 = 0;
    }
    else {
      uVar31 = (int)lVar2 + 1;
    }
    if (uVar4 < uVar31) {
      bVar11 = (char)uVar31 - (byte)uVar4;
      if ((!bVar33) || (bVar33 = true, (uVar32 & (1L << (bVar11 & 0x3f)) - 1U) != 0)) {
        bVar33 = false;
      }
      uVar32 = uVar32 >> (bVar11 & 0x3f);
    }
    uVar14 = 0;
    if (uVar18 != 0) {
      uVar14 = (ulonglong)local_784[0];
    }
    uVar21 = 0;
    if (1 < uVar18) {
      uVar21 = (ulonglong)local_784[1];
    }
    uVar5 = ~uVar5;
    if (uVar29 != 0) {
      uVar5 = uVar29 - 2;
    }
    uVar10 = FUN_140015604(uVar32 + ((uVar21 << 0x20) + uVar14 << ((byte)uVar4 & 0x3f)),uVar5,
                           CONCAT71(uVar22,(char)param_1[0xc2]),bVar33,param_2);
  }
  else {
    bVar33 = uVar5 != 0;
LAB_1400177d0:
    uVar10 = FUN_1400159bc(&local_788,uVar29,CONCAT71(uVar22,(char)param_1[0xc2]),bVar33,param_2);
  }
  return uVar10;
}




/* ---- 0x140018f90 : FUN_140018f90 [was: FUN_140018f90] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140018f90(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 local_res8 [8];
  undefined1 auStackY_608 [32];
  ulonglong local_5c8 [2];
  PVOID local_5b8;
  _EXCEPTION_POINTERS local_5b0;
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_14003c2c0 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_14000ab18();
  }
  FUN_1400280c0((undefined1 (*) [32])&local_598,0,0x98);
  FUN_1400280c0((undefined1 (*) [32])&local_4f8,0,0x4d0);
  local_5c8[1] = 0;
  local_5b0.ExceptionRecord = &local_598;
  local_5c8[0] = 0;
  local_5b8 = (PVOID)0x0;
  local_5b0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8[0],local_4f8.Rip,FunctionEntry,&local_4f8,&local_5b8,local_5c8 + 1,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)local_res8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5b0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_14000ab18();
  }
  return;
}




/* ---- 0x1400191a4 : FUN_1400191a4 [was: FUN_1400191a4] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400191a4(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,longlong *param_6)

{
  __acrt_ptd *p_Var1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  
  p_Var1 = FUN_140018ed8(param_6);
  if ((p_Var1 == (__acrt_ptd *)0x0) || (pcVar4 = *(code **)(p_Var1 + 0x3b8), pcVar4 == (code *)0x0))
  {
    puVar2 = (ulonglong *)FUN_140018f44(0x14003d5d0,(longlong)param_6);
    bVar3 = (byte)DAT_14003c2c0 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_14003c2c0) >> bVar3 | (*puVar2 ^ DAT_14003c2c0) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}




/* ---- 0x1400192d0 : FUN_1400192d0 [was: FUN_1400192d0] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_1400192d0(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_140019320();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}




/* ---- 0x1400193e8 : FUN_1400193e8 [was: FUN_1400193e8] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_1400193e8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  __acrt_ptd *p_Var5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  p_Var5 = FUN_14001b148();
  if (p_Var5 != (__acrt_ptd *)0x0) {
    piVar2 = *(int **)p_Var5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)0x5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
          uVar4 = *(undefined8 *)(p_Var5 + 8);
          *(undefined8 *)(p_Var5 + 8) = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(p_Var5 + 0x10);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_140019526:
              *(undefined4 *)(p_Var5 + 0x10) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_140019526;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_140019526;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_140019526;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_140019526;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_140019526;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_140019526;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_140019526;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_140019526;
              }
            }
            (*pcVar3)(8,uVar8);
            *(undefined4 *)(p_Var5 + 0x10) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          *(undefined8 *)(p_Var5 + 8) = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}




/* ---- 0x140019570 : FUN_140019570 [was: FUN_140019570] ---- */

undefined8 FUN_140019570(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_14003c2c0 & 0x3f;
  return CONCAT71((int7)(DAT_14003c2c0 >> 8),
                  (DAT_14003d5e8 ^ DAT_14003c2c0) >> bVar1 != 0 ||
                  (DAT_14003d5e8 ^ DAT_14003c2c0) << 0x40 - bVar1 != 0);
}




/* ---- 0x1400195a0 : FUN_1400195a0 [was: FUN_1400195a0] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1400195a0(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_14003c2c0 & 0x3f;
  pcVar3 = (code *)((DAT_14003d5e8 ^ DAT_14003c2c0) >> bVar2 |
                   (DAT_14003d5e8 ^ DAT_14003c2c0) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}




/* ---- 0x1400195d0 : FUN_1400195d0 [was: FUN_1400195d0] ---- */

void FUN_1400195d0(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_14003c2c0 & 0x3f) & 0x3f;
  DAT_14003d5e8 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_14003c2c0;
  return;
}




/* ---- 0x140019d50 : FUN_140019d50 [was: FUN_140019d50] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140019d50(undefined8 *param_1,undefined8 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}




/* ---- 0x140019d88 : FUN_140019d88 [was: FUN_140019d88] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140019d88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}




/* ---- 0x14001a068 : FUN_14001a068 [was: FUN_14001a068] ---- */

void FUN_14001a068(ulonglong param_1)

{
  byte bVar1;
  
  if (DAT_14003d720 == DAT_14003c2c0) {
    bVar1 = 0x40 - ((byte)DAT_14003c2c0 & 0x3f) & 0x3f;
    DAT_14003d720 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_14003c2c0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14001a800();
}




/* ---- 0x14001a2fc : FUN_14001a2fc [was: FUN_14001a2fc] ---- */

undefined8 FUN_14001a2fc(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4 == (ulonglong *)0x0) {
LAB_14001a48e:
    uVar2 = 0xffffffff;
  }
  else {
    bVar3 = (byte)DAT_14003c2c0 & 0x3f;
    pvVar6 = (LPVOID)((DAT_14003c2c0 ^ *puVar4) >> bVar3 | (DAT_14003c2c0 ^ *puVar4) << 0x40 - bVar3
                     );
    puVar10 = (ulonglong *)
              ((DAT_14003c2c0 ^ puVar4[1]) >> bVar3 | (DAT_14003c2c0 ^ puVar4[1]) << 0x40 - bVar3);
    puVar4 = (ulonglong *)
             ((DAT_14003c2c0 ^ puVar4[2]) >> bVar3 | (DAT_14003c2c0 ^ puVar4[2]) << 0x40 - bVar3);
    if (puVar10 == puVar4) {
      uVar5 = (longlong)puVar4 - (longlong)pvVar6 >> 3;
      uVar7 = uVar5;
      if (0x200 < uVar5) {
        uVar7 = 0x200;
      }
      uVar8 = uVar7 + uVar5;
      if (uVar7 + uVar5 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar5) {
LAB_14001a39e:
        uVar8 = uVar5 + 4;
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_14001b320((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_14001a48e;
      }
      else {
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_14001b320((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_14001a39e;
      }
      pvVar6 = pvVar1;
      uVar7 = DAT_14003c2c0;
      puVar10 = (ulonglong *)((longlong)pvVar6 + uVar5 * 8);
      puVar4 = (ulonglong *)((longlong)pvVar6 + uVar8 * 8);
      uVar5 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar10)) >> 3;
      if (puVar4 < puVar10) {
        uVar5 = 0;
      }
      puVar9 = puVar10;
      if (uVar5 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = uVar7;
          puVar9 = puVar9 + 1;
        }
      }
    }
    bVar3 = -((byte)DAT_14003c2c0 & 0x3f) & 0x3f;
    *puVar10 = (*(ulonglong *)param_1[1] >> bVar3 | *(ulonglong *)param_1[1] << 0x40 - bVar3) ^
               DAT_14003c2c0;
    bVar3 = -((byte)DAT_14003c2c0 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 =
         ((ulonglong)pvVar6 >> bVar3 | (longlong)pvVar6 << 0x40 - bVar3) ^ DAT_14003c2c0;
    bVar3 = -((byte)DAT_14003c2c0 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar10 + 1) >> bVar3 | (longlong)(puVar10 + 1) << 0x40 - bVar3) ^
         DAT_14003c2c0;
    bVar3 = 0x40 - ((byte)DAT_14003c2c0 & 0x3f) & 0x3f;
    uVar2 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar4 >> bVar3 | (longlong)puVar4 << 0x40 - bVar3) ^ DAT_14003c2c0;
  }
  return uVar2;
}




/* ---- 0x14001a4ac : FUN_14001a4ac [was: FUN_14001a4ac] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14001a4ac(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  uVar1 = DAT_14003c2c0;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_14003c2c0 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_14003c2c0 ^ *puVar8) >> bVar5 | (DAT_14003c2c0 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_14003c2c0 ^ puVar8[1]) >> bVar5 | (DAT_14003c2c0 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_14003c2c0 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_14003c2c0;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint)DAT_14003c2c0 & 0x3f;
          uVar11 = DAT_14003c2c0 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_14003c2c0 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_14003c2c0;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_14001b320(puVar10);
        uVar3 = DAT_14003c2c0;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}




/* ---- 0x14001a6d0 : FUN_14001a6d0 [was: FUN_14001a6d0] ---- */

undefined1 FUN_14001a6d0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14003c2c0;
  FUN_140019100(DAT_14003c2c0);
  FUN_140019310(uVar1);
  FUN_140020abc(uVar1);
  FUN_140019590(uVar1);
  FUN_14001a034(uVar1);
  return 1;
}




/* ---- 0x14001a800 : FUN_14001a800 [was: FUN_14001a800] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14001a800(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001b0e8();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14001b564 : FUN_14001b564 [was: FUN_14001b564] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_14001b564(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_1400410d0 == (FARPROC)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pFVar1 = DAT_1400410d0;
  if ((DAT_1400410d0 == (FARPROC)0x0) &&
     (pFVar1 = FUN_14001b3b0(0x1a,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_14002d464,
                             (uint *)"AppPolicyGetProcessTerminationMethod"), pFVar1 == (FARPROC)0x0
     )) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}




/* ---- 0x14001b5c0 : FUN_14001b5c0 [was: FUN_14001b5c0] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_14001b5c0(void)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_140041000 == (FARPROC)0xffffffffffffffff) {
    return 1;
  }
  pFVar1 = DAT_140041000;
  if ((DAT_140041000 == (FARPROC)0x0) &&
     (pFVar1 = FUN_14001b3b0(0,"AreFileApisANSI",(uint *)&DAT_14002d3e8,(uint *)&DAT_14002d3ec),
     pFVar1 == (FARPROC)0x0)) {
    return 1;
  }
  IVar2 = (*pFVar1)();
  return IVar2;
}




/* ---- 0x14001b60c : FUN_14001b60c [was: FUN_14001b60c] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14001b60c(ushort *param_1,uint param_2,PCNZWCH param_3,uint param_4,PCNZWCH param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_14001b378();
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_14001b7f8(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}




/* ---- 0x14001b704 : FUN_14001b704 [was: FUN_14001b704] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14001b704(ushort *param_1,uint param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  if (DAT_140041090 == (FARPROC)0xffffffffffffffff) {
LAB_14001b7af:
    Locale = FUN_14001b7f8(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pFVar1 = DAT_140041090;
    if (DAT_140041090 == (FARPROC)0x0) {
      pFVar1 = FUN_14001b3b0(0x12,"LCMapStringEx",(uint *)&DAT_14002d430,(uint *)"LCMapStringEx");
      if (pFVar1 == (FARPROC)0x0) goto LAB_14001b7af;
    }
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}




/* ---- 0x14001b7f8 : FUN_14001b7f8 [was: FUN_14001b7f8] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14001b7f8(ushort *param_1,uint param_2)

{
  FARPROC pFVar1;
  
  if (DAT_1400410a0 == (FARPROC)0xffffffffffffffff) {
LAB_14001b847:
    FUN_140020d38(param_1);
  }
  else {
    pFVar1 = DAT_1400410a0;
    if (DAT_1400410a0 == (FARPROC)0x0) {
      pFVar1 = FUN_14001b3b0(0x14,"LocaleNameToLCID",(uint *)&DAT_14002d448,
                             (uint *)"LocaleNameToLCID");
      if (pFVar1 == (FARPROC)0x0) goto LAB_14001b847;
    }
    (*pFVar1)(param_1,(ulonglong)param_2);
  }
  return;
}




/* ---- 0x14001d3cc : FUN_14001d3cc [was: FUN_14001d3cc] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14001d3cc(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                       longlong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14003c2c0 ^ (ulonglong)auStack_78;
  puVar5 = (uint *)&DAT_14003dc80;
  if (param_4 != (uint *)0x0) {
    puVar5 = param_4;
  }
  pbVar6 = (byte *)0x14002a8e2;
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) {
LAB_14001d42e:
    uVar2 = 0xfffffffffffffffe;
  }
  else {
    if (*(short *)((longlong)puVar5 + 6) == 0) {
      uVar3 = FUN_14001d394(pbVar6);
      uVar4 = (uint)uVar3;
      uVar8 = (ulonglong)(int)uVar4;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (uVar4 < 2) {
        if (puVar10 == (uint *)0x0) {
          return uVar8;
        }
        *puVar10 = (uint)bVar1;
        return uVar8;
      }
      if (uVar4 - 2 < 3) {
        bVar7 = (byte)uVar3;
        uVar4 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)bVar1;
LAB_14001d4b9:
        uVar9 = (ulonglong)bVar7;
        uVar3 = uVar9;
        if (uVar2 <= uVar9) {
          uVar3 = uVar2;
        }
        while ((ulonglong)((longlong)pbVar6 - (longlong)param_2) < uVar3) {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_14001d562;
          uVar4 = bVar1 & 0x3f | uVar4 << 6;
        }
        if (uVar3 < uVar9) {
          *(ushort *)(puVar5 + 1) = (ushort)uVar8 & 0xff;
          *(ushort *)((longlong)puVar5 + 6) = (ushort)(byte)(bVar7 - (char)uVar3);
          *puVar5 = uVar4;
          goto LAB_14001d42e;
        }
        if ((0x7ff < uVar4 - 0xd800) && (uVar4 < 0x110000)) {
          auStack_60[2] = 0x80;
          auStack_60[3] = 0x800;
          auStack_60[4] = 0x10000;
          if (auStack_60[uVar8 & 0xff] <= uVar4) {
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar4;
            }
            uVar2 = FUN_140023d54(-(ulonglong)(uVar4 != 0) & uVar9,(undefined8 *)puVar5);
            return uVar2;
          }
        }
      }
    }
    else {
      bVar1 = (byte)puVar5[1];
      uVar8 = (ulonglong)bVar1;
      uVar4 = *puVar5;
      bVar7 = *(byte *)((longlong)puVar5 + 6);
      if ((((byte)(bVar1 - 2) < 3) && (bVar7 != 0)) && (bVar7 < bVar1)) goto LAB_14001d4b9;
    }
LAB_14001d562:
    uVar2 = FUN_140023d5c((undefined8 *)puVar5,param_5);
  }
  return uVar2;
}




/* ---- 0x14001d830 : FUN_14001d830 [was: FUN_14001d830] ---- */

bool FUN_14001d830(void)

{
  return DAT_14003dc90 == (DAT_14003c2c0 | 1);
}




/* ---- 0x14001e438 : FUN_14001e438 [was: FUN_14001e438] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14001e438(uchar *param_1,uchar *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  HANDLE hFindFile;
  INT_PTR IVar6;
  ulonglong uVar7;
  LPCWSTR lpFileName;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_14003c2c0 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2f) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2f) & 0x3fU) & 1) == 0))))) {
    param_2 = (uchar *)FUN_140024c48(param_1,param_2);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    uVar5 = FUN_14001e2b4((longlong)param_1,0,0,param_3);
  }
  else {
    bVar11 = *param_2 - 0x2f;
    uVar3 = 0;
    if ((0x2d < bVar11) ||
       (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar11 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    uVar5 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar5;
    FUN_1400280c0((undefined1 (*) [32])&local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0xfde9;
    }
    else {
      IVar6 = FUN_14001b5c0();
      if ((int)IVar6 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
    }
    uVar3 = FUN_14001dd2c((char *)param_1,(longlong)&local_338,local_348,uVar3);
    lpFileName = local_328;
    if (uVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      uVar5 = FUN_14001e2b4((longlong)param_1,0,0,param_3);
      uVar5 = uVar5 & 0xffffffff;
      if (local_310 != '\0') {
        FUN_14001b320(local_328);
      }
    }
    else {
      lVar10 = param_3[1] - *param_3 >> 3;
      do {
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        uVar3 = 0xfde9;
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        else {
          IVar6 = FUN_14001b5c0();
          if ((int)IVar6 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 1;
          }
          else {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 0;
          }
        }
        uVar3 = FUN_14001decc(local_298.cFileName,(longlong)&local_2c8,local_348,uVar3);
        pcVar2 = local_2b8;
        pcVar8 = local_2b8;
        if (uVar3 != 0) {
          pcVar8 = (char *)0x0;
        }
        if ((*pcVar8 == '.') && ((pcVar8[1] == '\0' || ((pcVar8[1] == '.' && (pcVar8[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_14001b320(local_2b8);
          }
        }
        else {
          uVar7 = FUN_14001e2b4((longlong)pcVar8,(longlong)param_1,uVar5,param_3);
          if ((int)uVar7 != 0) {
            if (local_2a0 != '\0') {
              FUN_14001b320(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 == '\0') {
              return uVar7 & 0xffffffff;
            }
            FUN_14001b320(local_328);
            return uVar7 & 0xffffffff;
          }
          uVar5 = local_340;
          if (local_2a0 != (char)uVar7) {
            FUN_14001b320(pcVar2);
            uVar5 = local_340;
          }
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar9 = param_3[1] - *param_3 >> 3;
      if (lVar10 != lVar9) {
        FUN_140024320((undefined1 *)(*param_3 + lVar10 * 8),lVar9 - lVar10,8,&LAB_14001dd18);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_14001b320(local_328);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}




/* ---- 0x14001e8bc : FUN_14001e8bc [was: FUN_14001e8bc] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14001e8bc(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  INT_PTR IVar2;
  uint uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined1 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_14001ab4c(DVar1);
    local_240 = 0;
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_280,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      IVar2 = FUN_14001b5c0();
      if ((int)IVar2 == 0) {
        if (local_268 != (char)IVar2) {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_14001e7a0(local_228,(longlong)&local_260,local_288,uVar3);
    local_240 = local_240 & 0xffffffff;
  }
  return local_240;
}




/* ---- 0x14001ecc8 : FUN_14001ecc8 [was: FUN_14001ecc8] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14001ecc8(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  BYTE *pBVar8;
  WORD *pWVar9;
  longlong lVar10;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  char local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStackY_788;
  local_738.LeadByte[10] = '\0';
  local_738.LeadByte[0xb] = '\0';
  local_738._18_2_ = 0;
  local_738.MaxCharSize = 0;
  local_738.DefaultChar[0] = '\0';
  local_738.DefaultChar[1] = '\0';
  local_738.LeadByte[0] = '\0';
  local_738.LeadByte[1] = '\0';
  local_738.LeadByte[2] = '\0';
  local_738.LeadByte[3] = '\0';
  local_738.LeadByte[4] = '\0';
  local_738.LeadByte[5] = '\0';
  local_738.LeadByte[6] = '\0';
  local_738.LeadByte[7] = '\0';
  local_738.LeadByte[8] = '\0';
  local_738.LeadByte[9] = '\0';
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar3 == 0)) {
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x20;
        bVar2 = (char)uVar4 - 0x20;
      }
      else {
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    pcVar6 = local_718;
    lVar10 = 0x100;
    do {
      *pcVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = ' ';
    bVar2 = local_738.LeadByte[0];
    while (bVar2 != 0) {
      bVar1 = pBVar8[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = ' ';
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      bVar2 = *pBVar8;
    }
    FUN_1400202d0((__crt_locale_pointers *)0x0,1,local_718,0x100,local_418,*(uint *)(param_1 + 4),0)
    ;
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x100,local_718,
                        0x100,local_618,0x100,*(uint *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x200,local_718,
                        0x100,local_518,0x100,*(uint *)(param_1 + 4),0);
    pWVar9 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pWVar9 & 1) == 0) {
        if ((*pWVar9 & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = pbVar5[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = pbVar5[(longlong)(abStack_631 + -param_1)];
      }
      pbVar5[0x100] = bVar2;
      pWVar9 = pWVar9 + 1;
      pbVar5 = pbVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}




/* ---- 0x14001f264 : FUN_14001f264 [was: FUN_14001f264] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14001f264(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint *puVar6;
  byte *pbVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  BYTE *pBVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar18;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  wchar_t *pwVar17;
  
  local_30 = DAT_14003c2c0 ^ (ulonglong)auStack_68;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  uVar4 = getSystemCP(param_1);
  pwVar8 = (wchar_t *)0x0;
  if (uVar4 == 0) {
LAB_14001f4fc:
    FUN_14001ec30(param_2);
    return 0;
  }
  puVar6 = &DAT_14003ca90;
  uVar14 = 1;
  pwVar17 = pwVar8;
  do {
    if (*puVar6 == uVar4) {
      FUN_1400280c0((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
      pbVar18 = &DAT_14003ca80;
      lVar9 = 4;
      pbVar7 = &DAT_14003caa0 + (longlong)pwVar17 * 0x30;
      do {
        bVar2 = *pbVar7;
        pbVar12 = pbVar7;
        while ((bVar2 != 0 && (pbVar12[1] != 0))) {
          bVar2 = *pbVar12;
          uVar16 = (uint)bVar2;
          if (bVar2 <= pbVar12[1]) {
            uVar15 = (uint)bVar2;
            do {
              uVar15 = uVar15 + 1;
              if (0x100 < uVar15) break;
              uVar16 = uVar16 + 1;
              pbVar1 = (byte *)((ulonglong)uVar15 + 0x18 + param_2);
              *pbVar1 = *pbVar1 | *pbVar18;
            } while (uVar16 <= pbVar12[1]);
          }
          pbVar12 = pbVar12 + 2;
          bVar2 = *pbVar12;
        }
        pbVar7 = pbVar7 + 8;
        pbVar18 = pbVar18 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      *(uint *)(param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 8) = 1;
      if (uVar4 == 0x3a4) {
        pwVar8 = L"ja-JP";
      }
      else if (uVar4 == 0x3a8) {
        pwVar8 = L"zh-CN";
      }
      else if (uVar4 == 0x3b5) {
        pwVar8 = L"ko-KR";
      }
      else if (uVar4 == 0x3b6) {
        pwVar8 = L"zh-TW";
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar8;
      puVar13 = (undefined2 *)(param_2 + 0xc);
      lVar9 = 6;
      do {
        *puVar13 = *(undefined2 *)
                    (((longlong)pwVar17 * 0x30 - param_2) + 0x14003ca88 + (longlong)puVar13);
        puVar13 = puVar13 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      goto LAB_14001f4f2;
    }
    uVar16 = (int)pwVar17 + 1;
    pwVar17 = (wchar_t *)(ulonglong)uVar16;
    puVar6 = puVar6 + 0xc;
  } while (uVar16 < 5);
  if ((uVar4 == 65000) || (BVar5 = IsValidCodePage(uVar4 & 0xffff), BVar5 == 0)) {
    return 0xffffffff;
  }
  if (uVar4 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVar4,&local_48);
    if (BVar5 == 0) {
      if (DAT_14003df28 == 0) {
        return 0xffffffff;
      }
      goto LAB_14001f4fc;
    }
    FUN_1400280c0((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar10 = local_48.LeadByte;
      bVar2 = local_48.LeadByte[0];
      while ((bVar2 != 0 && (pBVar10[1] != 0))) {
        bVar2 = *pBVar10;
        if ((uint)bVar2 <= (uint)pBVar10[1]) {
          uVar4 = (uint)bVar2;
          uVar11 = (ulonglong)(((uint)pBVar10[1] - (uint)bVar2) + 1);
          do {
            uVar4 = uVar4 + 1;
            pbVar7 = (byte *)((ulonglong)uVar4 + 0x18 + param_2);
            *pbVar7 = *pbVar7 | 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        pBVar10 = pBVar10 + 2;
        bVar2 = *pBVar10;
      }
      pbVar7 = (byte *)(param_2 + 0x1a);
      lVar9 = 0xfe;
      do {
        *pbVar7 = *pbVar7 | 8;
        pbVar7 = pbVar7 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 == 0x3a4) {
        pwVar8 = L"ja-JP";
      }
      else if (iVar3 == 0x3a8) {
        pwVar8 = L"zh-CN";
      }
      else if (iVar3 == 0x3b5) {
        pwVar8 = L"ko-KR";
      }
      else if (iVar3 == 0x3b6) {
        pwVar8 = L"zh-TW";
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar8;
    }
    else {
      uVar14 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar14;
  }
  puVar13 = (undefined2 *)(param_2 + 0xc);
  for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
LAB_14001f4f2:
  FUN_14001ecc8(param_2);
  return 0;
}




/* ---- 0x1400202d0 : FUN_1400202d0 [was: FUN_1400202d0] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

BOOL FUN_1400202d0(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,
                  undefined8 param_4,LPWORD param_5,uint param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 (*lpSrcStr) [32];
  undefined1 *puVar8;
  undefined1 *puVar9;
  BOOL BVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  local_30 = DAT_14003c2c0 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = FUN_14001f5b4(param_6,(ulonglong)((-(uint)(param_7 != 0) & 8) + 1));
  if (iVar3 == 0) {
    BVar10 = 0;
    puVar9 = auStack_88;
    goto LAB_140020426;
  }
  uVar1 = (longlong)iVar3 * 2;
  uVar7 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar7 == 0) {
    lpSrcStr = (undefined1 (*) [32])0x0;
LAB_14002040e:
    BVar10 = 0;
    BVar4 = 0;
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_140020426;
  }
  else {
    if (uVar7 < 0x401) {
      uVar5 = uVar7 + 0xf;
      if (uVar5 <= uVar7) {
        uVar5 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar5 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar2;
      puVar8 = auStack_88 + lVar2;
      puVar6 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_14002040e;
      *puVar6 = 0xcccc;
LAB_1400203bc:
      lpSrcStr = (undefined1 (*) [32])(puVar6 + 4);
      puVar9 = puVar8;
    }
    else {
      puVar6 = _malloc_base(uVar7);
      lpSrcStr = (undefined1 (*) [32])0x0;
      puVar9 = auStack_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1400203bc;
      }
    }
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_14002040e;
    *(undefined8 *)(puVar9 + -8) = 0x1400203d2;
    FUN_1400280c0(lpSrcStr,0,uVar1);
    *(int *)(puVar9 + 0x28) = iVar3;
    *(undefined1 (**) [32])(puVar9 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar9 + -8) = 0x1400203ee;
    iVar3 = FUN_14001f5b4(param_6,1);
    if (iVar3 == 0) goto LAB_14002040e;
    *(undefined8 *)(puVar9 + -8) = 0x140020408;
    BVar4 = GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar3,param_5);
  }
  BVar10 = BVar4;
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x140020426;
    FUN_14001b320(lpSrcStr[-1] + 0x10);
  }
LAB_140020426:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar9 + -8) = 0x140020445;
  return BVar10;
}




/* ---- 0x140020988 : FUN_140020988 [was: FUN_140020988] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140020988(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      in_RAX = (undefined8 *)0x0;
      if (((code *)*puVar1 != (code *)0x0) &&
         (in_RAX = (undefined8 *)(*(code *)*puVar1)(), (char)in_RAX == '\0')) break;
      puVar1 = puVar1 + 2;
    } while (puVar1 != param_2);
    if (puVar1 != param_2) {
      if (puVar1 != param_1) {
        puVar1 = puVar1 + -1;
        do {
          if ((puVar1[-1] != 0) && ((code *)*puVar1 != (code *)0x0)) {
            (*(code *)*puVar1)(0);
          }
          in_RAX = puVar1 + -1;
          puVar1 = puVar1 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* ---- 0x140020a08 : FUN_140020a08 [was: FUN_140020a08] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140020a08(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    in_RAX = 0;
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      in_RAX = (**(code **)(param_2 + -8))(0);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* ---- 0x1400210bc : FUN_1400210bc [was: FUN_1400210bc] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_1400210bc(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong *param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  ushort local_c4 [2];
  DWORD local_c0 [2];
  byte *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  uint local_88 [2];
  undefined8 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_14003c2c0 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar16 = (longlong)(int)param_2 >> 6;
  uVar6 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_14003d870)[lVar16] + 0x28 + uVar6 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar16;
  local_a0 = GetConsoleOutputCP();
  uVar13 = 0;
  if ((char)local_b0[5] == '\0') {
    FUN_140010390(local_b0);
  }
  local_9c = *(int *)(local_b0[3] + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar15 = uVar13;
  local_68 = lVar16;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    do {
      local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
      local_c4[0] = 0;
      local_c4[1] = 0;
      uVar10 = 1;
      if (local_9c == 0xfde9) {
        pcVar8 = (char *)(uVar6 * 0x48 + 0x3e + (&DAT_14003d870)[local_68]);
        uVar15 = uVar13;
        uVar17 = uVar13;
        do {
          uVar10 = (uint)uVar15;
          if (*pcVar8 == '\0') break;
          uVar10 = uVar10 + 1;
          uVar15 = (ulonglong)uVar10;
          uVar17 = uVar17 + 1;
          pcVar8 = pcVar8 + 1;
        } while ((longlong)uVar17 < 5);
        if ((longlong)uVar17 < 1) {
          cVar1 = (&DAT_14003cc30)[*param_3];
          iVar3 = cVar1 + 1;
          lVar16 = (longlong)local_b8 - (longlong)param_3;
          if (lVar16 < iVar3) {
            uVar15 = uVar13;
            if (0 < lVar16) {
              do {
                *(byte *)(uVar15 + uVar6 * 0x48 + 0x3e + (&DAT_14003d870)[local_90]) =
                     param_3[uVar15];
                uVar10 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar10;
                uVar15 = uVar15 + 1;
              } while ((int)uVar10 < lVar16);
            }
            param_1[1] = param_1[1] + (int)lVar16;
            return param_1;
          }
          local_a8[0] = 0;
          local_a8[1] = 0;
          uVar10 = (iVar3 == 4) + 1;
          local_78 = param_3;
          pbVar7 = FUN_14001d678(local_c4,&local_78,(ulonglong)uVar10,local_a8,(longlong)local_b0);
          if (pbVar7 == (byte *)0xffffffffffffffff) {
            return param_1;
          }
          pbVar7 = param_3 + cVar1;
          lVar16 = local_90;
        }
        else {
          cVar1 = (&DAT_14003cc30)[*(byte *)((&DAT_14003d870)[lVar16] + 0x3e + uVar6 * 0x48)];
          iVar3 = (cVar1 + 1) - uVar10;
          local_a8[0] = iVar3;
          lVar14 = (longlong)local_b8 - (longlong)param_3;
          uVar15 = (ulonglong)iVar3;
          if (lVar14 < (longlong)uVar15) {
            if (0 < lVar14) {
              uVar15 = uVar17;
              do {
                *(byte *)(uVar15 + uVar6 * 0x48 + 0x3e + (&DAT_14003d870)[lVar16]) =
                     param_3[uVar15 - uVar17];
                uVar10 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar10;
                uVar15 = uVar15 + 1;
              } while ((int)uVar10 < lVar14);
            }
            param_1[1] = param_1[1] + (int)lVar14;
            return param_1;
          }
          puVar12 = (undefined1 *)(uVar6 * 0x48 + 0x3e + (&DAT_14003d870)[local_68]);
          uVar9 = uVar13;
          do {
            *(undefined1 *)((longlong)&local_58 + uVar9) = *puVar12;
            uVar9 = uVar9 + 1;
            puVar12 = puVar12 + 1;
          } while ((longlong)uVar9 < (longlong)uVar17);
          uVar9 = uVar13;
          if (0 < (longlong)uVar15) {
            FUN_140027a20((undefined8 *)((longlong)&local_58 + uVar17),(undefined8 *)param_3,uVar15)
            ;
          }
          do {
            *(undefined1 *)(uVar9 + uVar6 * 0x48 + 0x3e + (&DAT_14003d870)[lVar16]) = 0;
            uVar9 = uVar9 + 1;
          } while ((longlong)uVar9 < (longlong)uVar17);
          local_88[0] = 0;
          local_88[1] = 0;
          local_80 = &local_58;
          uVar10 = (cVar1 + 1 == 4) + 1;
          pbVar7 = FUN_14001d678(local_c4,&local_80,(ulonglong)uVar10,local_88,(longlong)local_b0);
          if (pbVar7 == (byte *)0xffffffffffffffff) {
            return param_1;
          }
          pbVar7 = param_3 + (int)(local_a8[0] - 1);
        }
      }
      else {
        lVar14 = (&DAT_14003d870)[lVar16];
        bVar2 = *(byte *)(lVar14 + 0x3d + uVar6 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(*(longlong *)local_b0[3] + (ulonglong)*param_3 * 2) < 0) {
            pbVar7 = param_3 + 1;
            if (local_b8 <= pbVar7) {
              *(byte *)(lVar14 + 0x3e + uVar6 * 0x48) = *param_3;
              pbVar7 = (byte *)((&DAT_14003d870)[lVar16] + 0x3d + uVar6 * 0x48);
              *pbVar7 = *pbVar7 | 4;
              param_1[1] = (int)uVar15 + 1;
              return param_1;
            }
            iVar3 = FUN_14001d178(local_c4,param_3,2,local_b0);
            if (iVar3 == -1) {
              return param_1;
            }
            goto LAB_1400213c4;
          }
          uVar15 = 1;
          pbVar7 = param_3;
        }
        else {
          local_50 = *(byte *)(lVar14 + 0x3e + uVar6 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVar14 + 0x3d + uVar6 * 0x48) = bVar2 & 0xfb;
          uVar15 = 2;
          pbVar7 = &local_50;
        }
        iVar3 = FUN_14001d178(local_c4,pbVar7,uVar15,local_b0);
        pbVar7 = param_3;
        if (iVar3 == -1) {
          return param_1;
        }
      }
LAB_1400213c4:
      param_3 = pbVar7 + 1;
      uVar10 = FUN_14001f644(local_a0,0,local_c4,uVar10);
      hFile = local_70;
      if (uVar10 == 0) {
        return param_1;
      }
      local_c0[0] = 0;
      BVar4 = WriteFile(local_70,local_48,uVar10,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
LAB_14002151d:
        DVar5 = GetLastError();
        *param_1 = DVar5;
        return param_1;
      }
      uVar11 = (param_1[2] - (int)local_98) + (int)param_3;
      param_1[1] = uVar11;
      if (local_c0[0] < uVar10) {
        return param_1;
      }
      if ((char)local_c8[0] == '\n') {
        local_c8[0] = 0xd;
        BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_14002151d;
        if (local_c0[0] == 0) {
          return param_1;
        }
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        uVar11 = param_1[1];
      }
      uVar15 = (ulonglong)uVar11;
    } while (param_3 < local_b8);
  }
  return param_1;
}




/* ---- 0x140021550 : FUN_140021550 [was: FUN_140021550] ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_140021550(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x140021568;
  local_28 = DAT_14003c2c0 ^ (ulonglong)auStackY_1468;
  pcVar5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_14003d870)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pcVar5 <= param_3) {
      return param_1;
    }
    pcVar4 = local_1428;
    do {
      if (pcVar5 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1428 + 0x13ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)pcVar4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}




/* ---- 0x140021658 : FUN_140021658 [was: FUN_140021658] ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_140021658(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStackY_1468 [32];
  DWORD local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x140021670;
  local_28 = DAT_14003c2c0 ^ (ulonglong)auStackY_1468;
  psVar5 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_14003d870)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar5 <= param_3) {
      return param_1;
    }
    psVar4 = local_1428;
    do {
      if (psVar5 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1428 + 0x9ff);
    local_1438[0] = 0;
    nNumberOfBytesToWrite = (int)((longlong)psVar4 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      return param_1;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return param_1;
    }
  } while( true );
}




/* ---- 0x140021774 : FUN_140021774 [was: FUN_140021774] ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_140021774(DWORD *param_1,uint param_2,short *param_3,uint param_4)

{
  short sVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  short local_1448 [856];
  undefined1 local_d98 [3424];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x140021790;
  local_38 = DAT_14003c2c0 ^ (ulonglong)auStackY_1498;
  hFile = *(HANDLE *)
           ((&DAT_14003d870)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  psVar7 = param_3;
  do {
    if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar7) {
      return param_1;
    }
    psVar8 = local_1448;
    do {
      if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar7) break;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      if (sVar1 == 10) {
        *psVar8 = 0xd;
        psVar8 = psVar8 + 1;
      }
      *psVar8 = sVar1;
      psVar8 = psVar8 + 1;
    } while (psVar8 < local_1448 + 0x354);
    uVar2 = FUN_14001f644(0xfde9,0,local_1448,(int)((longlong)psVar8 - (longlong)local_1448 >> 1));
    if (uVar2 == 0) {
LAB_1400218b1:
      DVar4 = GetLastError();
      *param_1 = DVar4;
      return param_1;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        local_1458[0] = 0;
        BVar3 = WriteFile(hFile,local_d98 + uVar6,uVar2 - (int)uVar6,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_1400218b1;
        uVar5 = (int)uVar6 + local_1458[0];
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    param_1[1] = (int)psVar7 - (int)param_3;
  } while( true );
}




/* ---- 0x140022a30 : FUN_140022a30 [was: FUN_140022a30] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140022a30(ulonglong param_1,int param_2,uint param_3,undefined4 *param_4,char *param_5,
             longlong param_6)

{
  uint *puVar1;
  byte bVar2;
  sbyte sVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  __acrt_ptd *p_Var8;
  longlong lVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  ulonglong uVar22;
  uint uVar23;
  rsize_t _MaxCount;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  bool bVar27;
  double dVar28;
  undefined1 auStackY_828 [32];
  uint local_7f0;
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7e0;
  uint local_7dc;
  uint local_7d8 [2];
  uint local_7d0;
  uint local_7cc;
  uint *local_7c8;
  byte local_7c0 [8];
  char local_7b8;
  uint *local_7b0;
  char *local_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint local_5c8;
  uint local_5c4 [115];
  uint local_3f8;
  uint local_3f4 [115];
  uint local_228;
  uint local_224 [115];
  ulonglong local_58;
  
  local_58 = DAT_14003c2c0 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_140025b50((uint *)local_7c0);
  uVar26 = 1;
  local_7b8 = (local_7c0[0] & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_140025be0((ulonglong *)local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar4 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar4 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar4;
  FUN_140025ae0(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) != 0) && ((local_7d8[0] & 0x1000000) == 0)) {
LAB_140022bd2:
      local_7ec = 0;
      local_7cc = 0x8001f;
      FUN_140025ae0(&local_7d0,0,0);
      FUN_140025ae0(&local_7ec,0x8001f,local_7cc);
      local_7ec = param_2 + 1;
      uVar22 = (param_1 & 0x7fffffffffffffff) >> 0x34;
      uVar6 = (-(ulonglong)(uVar22 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
      uVar25 = (2 - (uint)(uVar22 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
      FUN_140025d10();
      dVar28 = FUN_140025c40();
      uVar5 = -(uint)(((int)dVar28 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar28;
      uVar18 = (uint)(uVar6 >> 0x20);
      local_794 = uVar6;
      uVar23 = (uint)(uVar18 != 0);
      uVar16 = uVar23 + 1;
      if (uVar25 < 0x434) {
        if (uVar25 == 0x36) {
LAB_140023068:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar18 != 0) & 4));
          iVar12 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (bVar27) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          uVar23 = (iVar12 == 0x20) + uVar16;
          if (uVar23 < 0x74) {
            uVar18 = uVar23 - 1;
            while (uVar18 != 0xffffffff) {
              uVar24 = uVar18 - 1;
              if (uVar18 < uVar16) {
                iVar12 = *(int *)((longlong)&local_794 + (ulonglong)uVar18 * 4);
              }
              else {
                iVar12 = 0;
              }
              if (uVar24 < uVar16) {
                uVar13 = *(uint *)((longlong)&local_794 + (ulonglong)uVar24 * 4);
              }
              else {
                uVar13 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar18 * 4) = uVar13 >> 0x1f | iVar12 * 2;
              uVar18 = uVar24;
            }
          }
          else {
            uVar23 = 0;
          }
          uVar16 = 0x435 - uVar25 >> 5;
          local_798 = uVar23;
          FUN_1400280c0((undefined1 (*) [32])local_3f4,0,(ulonglong)uVar16 * 4);
          local_3f4[uVar16] = 1 << ((byte)(0x435 - uVar25) & 0x1f);
        }
        else {
          local_3f4[1] = 0x100000;
          local_3f4[0] = 0;
          local_3f8 = 2;
          if (uVar18 == 0) goto LAB_140023068;
          uVar6 = 0;
          do {
            if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_140023068;
            uVar23 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar23;
          } while (uVar23 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          iVar12 = 0x1f;
          if (uVar18 != 0) {
            for (; uVar18 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (uVar18 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          local_798 = (0x20U - iVar12 < 2) + uVar16;
          if (local_798 < 0x74) {
            uVar23 = local_798 - 1;
            while (uVar23 != 0xffffffff) {
              uVar18 = uVar23 - 1;
              if (uVar23 < uVar16) {
                iVar12 = *(int *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
              }
              else {
                iVar12 = 0;
              }
              if (uVar18 < uVar16) {
                uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)uVar18 * 4);
              }
              else {
                uVar24 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4) = uVar24 >> 0x1e | iVar12 * 4;
              uVar23 = uVar18;
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          uVar23 = local_798;
          uVar16 = 0x436 - uVar25 >> 5;
          FUN_1400280c0((undefined1 (*) [32])local_3f4,0,(ulonglong)uVar16 * 4);
          local_3f4[uVar16] = 1 << ((byte)(0x436 - uVar25) & 0x1f);
        }
        local_3f8 = uVar16 + 1;
        _MaxCount = (ulonglong)local_3f8 << 2;
      }
      else {
        local_3f4[1] = 0x100000;
        local_3f4[0] = 0;
        local_3f8 = 2;
        if (uVar18 == 0) {
LAB_140022e29:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar24 = uVar25 - 0x433 & 0x1f;
          uVar18 = uVar25 - 0x433 >> 5;
          sVar3 = (sbyte)uVar24;
          bVar10 = 0x20 - sVar3;
          uVar25 = (int)(1L << (bVar10 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
          iVar12 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (bVar27) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          if ((uVar16 + uVar18 < 0x74) &&
             (local_798 = (0x20U - iVar12 < uVar24) + uVar16 + uVar18, local_798 < 0x74)) {
            uVar23 = local_798;
            while (uVar23 = uVar23 - 1, uVar23 != uVar18 - 1) {
              uVar24 = uVar23 - uVar18;
              if (uVar24 < uVar16) {
                uVar13 = *(uint *)((longlong)&local_794 + (ulonglong)uVar24 * 4);
              }
              else {
                uVar13 = 0;
              }
              if (uVar24 - 1 < uVar16) {
                uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar24 - 1) * 4);
              }
              else {
                uVar24 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4) =
                   (uVar24 & ~uVar25) >> (bVar10 & 0x1f) | (uVar13 & uVar25) << sVar3;
            }
            uVar6 = 0;
            if (uVar18 != 0) {
              do {
                *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
                uVar23 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar23;
              } while (uVar23 != uVar18);
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          local_3f4[0] = 2;
        }
        else {
          uVar6 = 0;
          do {
            if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_140022e29;
            uVar18 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar18;
          } while (uVar18 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar24 = uVar25 - 0x432 & 0x1f;
          uVar18 = uVar25 - 0x432 >> 5;
          sVar3 = (sbyte)uVar24;
          bVar10 = 0x20 - sVar3;
          uVar25 = (int)(1L << (bVar10 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4);
          iVar12 = 0x1f;
          bVar27 = *puVar1 == 0;
          if (!bVar27) {
            for (; *puVar1 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (bVar27) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          if ((uVar16 + uVar18 < 0x74) &&
             (local_798 = (0x20U - iVar12 < uVar24) + uVar16 + uVar18, local_798 < 0x74)) {
            uVar23 = local_798;
            while (uVar23 = uVar23 - 1, uVar23 != uVar18 - 1) {
              uVar24 = uVar23 - uVar18;
              if (uVar24 < uVar16) {
                uVar13 = *(uint *)((longlong)&local_794 + (ulonglong)uVar24 * 4);
              }
              else {
                uVar13 = 0;
              }
              if (uVar24 - 1 < uVar16) {
                uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar24 - 1) * 4);
              }
              else {
                uVar24 = 0;
              }
              *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4) =
                   (uVar24 & ~uVar25) >> (bVar10 & 0x1f) | (uVar13 & uVar25) << sVar3;
            }
            uVar6 = 0;
            if (uVar18 != 0) {
              do {
                *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
                uVar23 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar23;
              } while (uVar23 != uVar18);
            }
          }
          else {
            local_3f8 = 0;
            local_798 = 0;
            memcpy_s(&local_794,0x1cc,local_3f4,0);
          }
          local_3f4[0] = 4;
        }
        local_3f4[1] = 0;
        _MaxCount = 4;
        local_3f8 = 1;
        uVar23 = local_798;
      }
      uVar26 = 1;
      local_5c8 = local_3f8;
      memcpy_s(local_5c4,0x1cc,local_3f4,_MaxCount);
      if ((int)uVar5 < 0) {
        uVar16 = -uVar5;
        local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,uVar16);
        uVar6 = (ulonglong)uVar16 / 10;
        local_7f0 = (uint)uVar6;
        if (local_7f0 != 0) {
          do {
            local_7e0 = (uint)uVar6;
            if (0x26 < local_7e0) {
              local_7e0 = 0x26;
            }
            uVar16 = local_7e0 - 1;
            bVar10 = (&DAT_14002ba92)[(ulonglong)uVar16 * 4];
            bVar2 = (&DAT_14002ba93)[(ulonglong)uVar16 * 4];
            local_3f8 = (uint)bVar2 + (uint)bVar10;
            FUN_1400280c0((undefined1 (*) [32])local_3f4,0,(ulonglong)bVar10 * 4);
            FUN_140027a20((undefined8 *)(local_3f4 + bVar10),
                          (undefined8 *)
                          (&DAT_14002b180 +
                          (ulonglong)*(ushort *)(&DAT_14002ba90 + (ulonglong)uVar16 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            if (local_3f8 < 2) {
              uVar6 = (ulonglong)local_3f4[0];
              if (local_3f4[0] == 0) {
LAB_1400236b5:
                local_798 = 0;
                uVar23 = local_798;
                goto LAB_14002397b;
              }
              if ((local_3f4[0] == 1) || (uVar23 == 0)) goto LAB_14002397b;
              uVar22 = 0;
              uVar15 = 0;
              do {
                uVar14 = *(uint *)((longlong)&local_794 + uVar15 * 4) * uVar6 + uVar22;
                *(int *)((longlong)&local_794 + uVar15 * 4) = (int)uVar14;
                uVar22 = uVar14 >> 0x20;
                iVar12 = (int)(uVar14 >> 0x20);
                uVar16 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar16;
              } while (uVar16 != uVar23);
LAB_1400236ff:
              uVar23 = local_798;
              if (iVar12 == 0) goto LAB_14002397b;
              if (local_798 < 0x73) {
                *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar12;
                local_798 = local_798 + 1;
                uVar23 = local_798;
                goto LAB_14002397b;
              }
              uVar23 = 0;
              local_798 = 0;
              bVar27 = false;
            }
            else {
              if (uVar23 < 2) {
                uVar16 = (uint)local_794;
                uVar6 = local_794 & 0xffffffff;
                uVar22 = (ulonglong)local_3f8 << 2;
                local_798 = local_3f8;
                if ((ulonglong)local_3f8 != 0) {
                  if (uVar22 < 0x1cd) {
                    FUN_140027a20(&local_794,(undefined8 *)local_3f4,uVar22);
                  }
                  else {
                    FUN_1400280c0((undefined1 (*) [32])&local_794,0,0x1cc);
                    p_Var8 = FUN_14001abbc();
                    *(undefined4 *)p_Var8 = 0x22;
                    FUN_14001925c();
                  }
                }
                if (uVar16 == 0) goto LAB_1400236b5;
                uVar23 = local_798;
                if ((uVar16 != 1) && (local_798 != 0)) {
                  uVar22 = 0;
                  uVar15 = 0;
                  do {
                    uVar14 = *(uint *)((longlong)&local_794 + uVar15 * 4) * uVar6 + uVar22;
                    *(int *)((longlong)&local_794 + uVar15 * 4) = (int)uVar14;
                    uVar22 = uVar14 >> 0x20;
                    iVar12 = (int)(uVar14 >> 0x20);
                    uVar23 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar23;
                  } while (uVar23 != local_798);
                  goto LAB_1400236ff;
                }
              }
              else {
                local_7b0 = (uint *)&local_794;
                local_7c8 = local_3f4;
                uVar16 = local_3f8;
                if (local_3f8 < uVar23) {
                  uVar16 = uVar23;
                  local_7c8 = (uint *)&local_794;
                  local_7b0 = local_3f4;
                  uVar23 = local_3f8;
                }
                uVar22 = 0;
                uVar6 = 0;
                local_228 = 0;
                if (uVar23 != 0) {
                  do {
                    uVar18 = local_7b0[uVar6];
                    iVar12 = (int)uVar6;
                    if (uVar18 == 0) {
                      if (iVar12 == (int)uVar22) {
                        local_224[uVar6] = 0;
                        uVar22 = (ulonglong)(iVar12 + 1U);
                        local_228 = iVar12 + 1U;
                      }
                    }
                    else {
                      uVar15 = 0;
                      if (uVar16 != 0) {
                        do {
                          iVar20 = (int)uVar6;
                          uVar14 = uVar6;
                          if (iVar20 == 0x73) break;
                          if (iVar20 == (int)uVar22) {
                            local_224[uVar6] = 0;
                            local_228 = iVar20 + 1;
                          }
                          uVar14 = (ulonglong)(iVar20 + 1U);
                          uVar15 = (ulonglong)local_7c8[(uint)(iVar20 + -iVar12)] *
                                   (ulonglong)uVar18 + uVar15 + (ulonglong)local_224[uVar6];
                          local_224[uVar6] = (uint)uVar15;
                          uVar22 = (ulonglong)local_228;
                          uVar15 = uVar15 >> 0x20;
                          uVar6 = uVar14;
                        } while (iVar20 + 1U + -iVar12 != uVar16);
                        uVar18 = (uint)uVar15;
                        uVar6 = uVar14;
                        while (uVar18 != 0) {
                          iVar20 = (int)uVar6;
                          if (iVar20 == 0x73) goto LAB_140023a22;
                          if (iVar20 == (int)uVar22) {
                            local_224[uVar6] = 0;
                            local_228 = iVar20 + 1;
                          }
                          uVar18 = local_224[uVar6];
                          local_224[uVar6] = (uint)(uVar18 + uVar15);
                          uVar22 = (ulonglong)local_228;
                          uVar18 = (uint)(uVar18 + uVar15 >> 0x20);
                          uVar15 = (ulonglong)uVar18;
                          uVar6 = (ulonglong)(iVar20 + 1);
                        }
                      }
                      if ((int)uVar6 == 0x73) goto LAB_140023a22;
                    }
                    uVar6 = (ulonglong)(iVar12 + 1U);
                  } while (iVar12 + 1U != uVar23);
                }
                local_798 = (uint)uVar22;
                uVar23 = 0;
                if (uVar22 != 0) {
                  if (uVar22 << 2 < 0x1cd) {
                    FUN_140027a20(&local_794,(undefined8 *)local_224,uVar22 << 2);
                    uVar23 = local_798;
                  }
                  else {
                    FUN_1400280c0((undefined1 (*) [32])&local_794,0,0x1cc);
                    p_Var8 = FUN_14001abbc();
                    *(undefined4 *)p_Var8 = 0x22;
                    FUN_14001925c();
                    uVar23 = local_798;
                  }
                }
              }
LAB_14002397b:
              bVar27 = true;
            }
            if (!bVar27) goto LAB_140023a22;
            local_7f0 = local_7f0 - local_7e0;
            uVar6 = (ulonglong)local_7f0;
          } while (local_7f0 != 0);
          uVar16 = (uint)local_7e8;
        }
        uVar18 = local_5c8;
        if (uVar16 % 10 != 0) {
          uVar16 = *(uint *)(&DAT_14002bb28 + (ulonglong)(uVar16 % 10 - 1) * 4);
          if (uVar16 == 0) {
LAB_140023a22:
            local_798 = 0;
            uVar18 = local_5c8;
            uVar23 = local_798;
          }
          else if ((uVar16 != 1) && (uVar23 != 0)) {
            uVar6 = 0;
            uVar22 = 0;
            do {
              uVar15 = (ulonglong)*(uint *)((longlong)&local_794 + uVar22 * 4) * (ulonglong)uVar16 +
                       uVar6;
              *(int *)((longlong)&local_794 + uVar22 * 4) = (int)uVar15;
              uVar6 = uVar15 >> 0x20;
              uVar18 = (int)uVar22 + 1;
              uVar22 = (ulonglong)uVar18;
            } while (uVar18 != uVar23);
            iVar12 = (int)(uVar15 >> 0x20);
            uVar18 = local_5c8;
            uVar23 = local_798;
            if (iVar12 != 0) {
              if (0x72 < local_798) goto LAB_140023a22;
              *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar12;
              local_798 = local_798 + 1;
              uVar23 = local_798;
            }
          }
        }
      }
      else {
        uVar6 = (ulonglong)uVar5 / 10;
        uVar16 = (uint)uVar6;
        uVar18 = local_5c8;
        while (uVar16 != 0) {
          local_7e0 = (uint)uVar6;
          if (0x26 < local_7e0) {
            local_7e0 = 0x26;
          }
          uVar25 = local_7e0 - 1;
          bVar10 = (&DAT_14002ba92)[(ulonglong)uVar25 * 4];
          bVar2 = (&DAT_14002ba93)[(ulonglong)uVar25 * 4];
          local_3f8 = (uint)bVar2 + (uint)bVar10;
          FUN_1400280c0((undefined1 (*) [32])local_3f4,0,(ulonglong)bVar10 * 4);
          FUN_140027a20((undefined8 *)(local_3f4 + bVar10),
                        (undefined8 *)
                        (&DAT_14002b180 +
                        (ulonglong)*(ushort *)(&DAT_14002ba90 + (ulonglong)uVar25 * 4) * 4),
                        (ulonglong)bVar2 << 2);
          uVar25 = local_5c4[0];
          if (local_3f8 < 2) {
            uVar6 = (ulonglong)local_3f4[0];
            if (local_3f4[0] == 0) {
LAB_1400231d5:
              local_5c8 = 0;
LAB_1400231d8:
              uVar18 = local_5c8;
              goto LAB_140023530;
            }
            if ((local_3f4[0] == 1) || (uVar18 == 0)) goto LAB_140023530;
            uVar22 = 0;
            uVar15 = 0;
            do {
              uVar14 = local_5c4[uVar15] * uVar6 + uVar22;
              local_5c4[uVar15] = (uint)uVar14;
              uVar22 = uVar14 >> 0x20;
              uVar25 = (uint)(uVar14 >> 0x20);
              uVar24 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar24;
            } while (uVar24 != uVar18);
LAB_140023277:
            uVar18 = local_5c8;
            if (uVar25 == 0) goto LAB_140023530;
            if (local_5c8 < 0x73) {
              local_5c4[local_5c8] = uVar25;
              local_5c8 = local_5c8 + 1;
              goto LAB_1400231d8;
            }
            uVar18 = 0;
            local_5c8 = 0;
            bVar27 = false;
          }
          else {
            if (uVar18 < 2) {
              uVar6 = (ulonglong)local_5c4[0];
              uVar22 = (ulonglong)local_3f8 << 2;
              local_5c8 = local_3f8;
              if ((ulonglong)local_3f8 != 0) {
                if (uVar22 < 0x1cd) {
                  FUN_140027a20((undefined8 *)local_5c4,(undefined8 *)local_3f4,uVar22);
                }
                else {
                  FUN_1400280c0((undefined1 (*) [32])local_5c4,0,0x1cc);
                  p_Var8 = FUN_14001abbc();
                  *(undefined4 *)p_Var8 = 0x22;
                  FUN_14001925c();
                }
              }
              if (uVar25 == 0) goto LAB_1400231d5;
              uVar18 = local_5c8;
              if ((uVar25 != 1) && (local_5c8 != 0)) {
                uVar22 = 0;
                uVar15 = 0;
                do {
                  uVar14 = local_5c4[uVar15] * uVar6 + uVar22;
                  local_5c4[uVar15] = (uint)uVar14;
                  uVar22 = uVar14 >> 0x20;
                  uVar25 = (uint)(uVar14 >> 0x20);
                  uVar18 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar18;
                } while (uVar18 != local_5c8);
                goto LAB_140023277;
              }
            }
            else {
              local_7c8 = local_5c4;
              local_7e8 = local_3f4;
              uVar25 = local_3f8;
              if (local_3f8 < uVar18) {
                uVar25 = uVar18;
                local_7e8 = local_5c4;
                uVar18 = local_3f8;
                local_7c8 = local_3f4;
              }
              local_5c8 = 0;
              uVar6 = 0;
              local_228 = 0;
              if (uVar18 != 0) {
                do {
                  uVar24 = local_7c8[uVar6];
                  uVar13 = (uint)uVar6;
                  if (uVar24 == 0) {
                    if (uVar13 == local_5c8) {
                      local_224[uVar6] = 0;
                      local_5c8 = uVar13 + 1;
                      local_228 = local_5c8;
                    }
                  }
                  else {
                    uVar22 = 0;
                    if (uVar25 != 0) {
                      do {
                        uVar19 = (uint)uVar6;
                        uVar15 = uVar6;
                        if (uVar19 == 0x73) break;
                        if (uVar19 == local_5c8) {
                          local_224[uVar6] = 0;
                          local_228 = uVar19 + 1;
                        }
                        uVar15 = (ulonglong)(uVar19 + 1);
                        uVar22 = (ulonglong)local_7e8[uVar19 + -uVar13] * (ulonglong)uVar24 +
                                 (ulonglong)local_224[uVar6] + uVar22;
                        local_224[uVar6] = (uint)uVar22;
                        uVar22 = uVar22 >> 0x20;
                        uVar6 = uVar15;
                        local_5c8 = local_228;
                      } while (uVar19 + 1 + -uVar13 != uVar25);
                      uVar24 = (uint)uVar22;
                      uVar6 = uVar15;
                      while (uVar24 != 0) {
                        uVar19 = (uint)uVar6;
                        if (uVar19 == 0x73) goto LAB_1400235fa;
                        if (uVar19 == local_5c8) {
                          local_224[uVar6] = 0;
                          local_228 = uVar19 + 1;
                        }
                        uVar24 = local_224[uVar6];
                        local_224[uVar6] = (uint)(uVar24 + uVar22);
                        uVar24 = (uint)(uVar24 + uVar22 >> 0x20);
                        uVar22 = (ulonglong)uVar24;
                        uVar6 = (ulonglong)(uVar19 + 1);
                        local_5c8 = local_228;
                      }
                    }
                    if ((int)uVar6 == 0x73) goto LAB_1400235fa;
                  }
                  uVar6 = (ulonglong)(uVar13 + 1);
                } while (uVar13 + 1 != uVar18);
              }
              uVar6 = (ulonglong)local_5c8 << 2;
              uVar18 = local_5c8;
              if ((ulonglong)local_5c8 != 0) {
                if (uVar6 < 0x1cd) {
                  FUN_140027a20((undefined8 *)local_5c4,(undefined8 *)local_224,uVar6);
                  uVar18 = local_5c8;
                }
                else {
                  FUN_1400280c0((undefined1 (*) [32])local_5c4,0,0x1cc);
                  p_Var8 = FUN_14001abbc();
                  *(undefined4 *)p_Var8 = 0x22;
                  FUN_14001925c();
                  uVar18 = local_5c8;
                }
              }
            }
LAB_140023530:
            bVar27 = true;
          }
          if (!bVar27) goto LAB_1400235fa;
          uVar16 = uVar16 - local_7e0;
          uVar6 = (ulonglong)uVar16;
        }
        if (uVar5 % 10 != 0) {
          uVar16 = *(uint *)(&DAT_14002bb28 + (ulonglong)(uVar5 % 10 - 1) * 4);
          if (uVar16 == 0) {
LAB_1400235fa:
            local_5c8 = 0;
LAB_1400235fd:
            uVar18 = local_5c8;
          }
          else if ((uVar16 != 1) && (uVar18 != 0)) {
            uVar6 = 0;
            uVar22 = 0;
            do {
              uVar15 = (ulonglong)local_5c4[uVar22] * (ulonglong)uVar16 + uVar6;
              local_5c4[uVar22] = (uint)uVar15;
              uVar6 = uVar15 >> 0x20;
              uVar25 = (int)uVar22 + 1;
              uVar22 = (ulonglong)uVar25;
            } while (uVar25 != uVar18);
            uVar16 = (uint)(uVar15 >> 0x20);
            uVar18 = local_5c8;
            if (uVar16 != 0) {
              if (0x72 < local_5c8) goto LAB_1400235fa;
              local_5c4[local_5c8] = uVar16;
              local_5c8 = local_5c8 + 1;
              goto LAB_1400235fd;
            }
          }
        }
      }
      pcVar21 = local_7a8;
      if (uVar23 != 0) {
        uVar6 = 0;
        uVar22 = 0;
        do {
          uVar15 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar22 * 4) * 10;
          *(int *)((longlong)&local_794 + uVar22 * 4) = (int)uVar15;
          uVar16 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar16;
          uVar6 = uVar15 >> 0x20;
        } while (uVar16 != uVar23);
        iVar12 = (int)(uVar15 >> 0x20);
        if (iVar12 != 0) {
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar12;
            local_798 = local_798 + 1;
          }
          else {
            local_798 = 0;
          }
        }
      }
      uVar6 = FUN_1400178d0(&local_798,&local_5c8);
      if ((int)uVar6 == 10) {
        uVar5 = uVar5 + 1;
        *pcVar21 = '1';
        pcVar17 = pcVar21 + 1;
        if (uVar18 != 0) {
          uVar6 = 0;
          uVar22 = 0;
          do {
            uVar15 = uVar6 + (ulonglong)local_5c4[uVar22] * 10;
            local_5c4[uVar22] = (uint)uVar15;
            uVar23 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar23;
            uVar6 = uVar15 >> 0x20;
          } while (uVar23 != uVar18);
          uVar23 = (uint)(uVar15 >> 0x20);
          if (uVar23 != 0) {
            if (local_5c8 < 0x73) {
              local_5c4[local_5c8] = uVar23;
              local_5c8 = local_5c8 + 1;
            }
            else {
              local_5c8 = 0;
            }
          }
        }
      }
      else if ((int)uVar6 == 0) {
        uVar5 = uVar5 - 1;
        pcVar17 = pcVar21;
      }
      else {
        pcVar17 = pcVar21 + 1;
        *pcVar21 = (char)uVar6 + '0';
      }
      local_7a0[1] = uVar5;
      uVar23 = local_7ec;
      if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
        uVar23 = local_7ec + uVar5;
      }
      uVar6 = (ulonglong)uVar23;
      if (param_6 - 1U < (ulonglong)uVar23) {
        uVar6 = param_6 - 1U;
      }
      pcVar21 = pcVar21 + uVar6;
      bVar27 = false;
      while ((pcVar17 != pcVar21 && (local_798 != 0))) {
        uVar6 = 0;
        uVar22 = 0;
        do {
          uVar15 = (ulonglong)*(uint *)((longlong)&local_794 + uVar22 * 4) * 1000000000 + uVar6;
          *(int *)((longlong)&local_794 + uVar22 * 4) = (int)uVar15;
          uVar6 = uVar15 >> 0x20;
          uVar23 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar23;
        } while (uVar23 != local_798);
        iVar12 = (int)(uVar15 >> 0x20);
        if (iVar12 != 0) {
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar12;
            local_798 = local_798 + 1;
          }
          else {
            local_798 = 0;
          }
        }
        uVar6 = FUN_1400178d0(&local_798,&local_5c8);
        uVar23 = 8;
        do {
          uVar22 = (uVar6 & 0xffffffff) / 10;
          cVar11 = (char)uVar6 + (char)uVar22 * -10 + '0';
          if (uVar23 < (uint)((int)pcVar21 - (int)pcVar17)) {
            pcVar17[uVar23] = cVar11;
          }
          else if (cVar11 != '0') {
            bVar27 = true;
          }
          uVar23 = uVar23 - 1;
          uVar6 = uVar22;
        } while (uVar23 != 0xffffffff);
        lVar9 = (longlong)pcVar21 - (longlong)pcVar17;
        if (9 < lVar9) {
          lVar9 = 9;
        }
        pcVar17 = pcVar17 + lVar9;
      }
      *pcVar17 = '\0';
      if ((local_798 != 0) || (bVar27)) {
        uVar26 = 0;
      }
      local_7dc = 0;
      FUN_140025ae0(&local_7dc,local_7d0,local_7cc);
      goto LAB_140023c5c;
    }
    param_4[1] = 0;
    pcVar21 = "0";
  }
  else {
    if (uVar6 != 0x7ff) goto LAB_140022bd2;
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar23 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar23 = 4;
    }
    else {
      uVar23 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar23 == 1) {
      uVar26 = FUN_14001a820(param_5,param_6,0x1400308f4);
      if ((int)uVar26 != 0) goto LAB_140023c99;
      uVar26 = 0;
      goto LAB_140023c5c;
    }
    if (uVar23 == 2) {
      pcVar21 = "1#QNAN";
    }
    else if (uVar23 == 3) {
      pcVar21 = "1#SNAN";
    }
    else {
      if (uVar23 != 4) goto LAB_140022bd2;
      pcVar21 = "1#IND";
    }
  }
  uVar7 = FUN_14001a820(param_5,param_6,(longlong)pcVar21);
  if ((int)uVar7 != 0) {
LAB_140023c99:
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_140023c5c:
  if (local_7b8 != '\0') {
    FUN_140025b70((uint *)local_7c0);
  }
  return uVar26;
}




/* ---- 0x140024320 : FUN_140024320 [was: FUN_140024320] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140024320(undefined1 *param_1,ulonglong param_2,ulonglong param_3,undefined *param_4)

{
  undefined1 uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 local_438 [62];
  undefined8 local_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_14003c2c0 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    p_Var3 = FUN_14001abbc();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_14001925c();
  }
  else {
    FUN_1400262bc();
    FUN_1400280c0((undefined1 (*) [32])local_438,0,0x1f0);
    FUN_1400280c0((undefined1 (*) [32])local_248,0,0x1f0);
    if (1 < param_2) {
      local_448 = 0;
      puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_1400243e0:
      while (uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1, 8 < uVar9) {
        lVar5 = (uVar9 >> 1) * param_3;
        puVar7 = param_1 + lVar5;
        iVar2 = (*(code *)param_4)(param_1,puVar7);
        if ((0 < iVar2) && (puVar6 = puVar7, uVar9 = param_3, param_1 != puVar7)) {
          do {
            uVar1 = puVar6[-lVar5];
            puVar6[-lVar5] = *puVar6;
            *puVar6 = uVar1;
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar9 != 0);
        }
        iVar2 = (*(code *)param_4)(param_1,puVar10);
        if ((0 < iVar2) && (param_1 != puVar10)) {
          puVar6 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
            puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar2 = (*(code *)param_4)(puVar7);
        puVar6 = param_1;
        puVar8 = puVar10;
        if ((0 < iVar2) && (puVar7 != puVar10)) {
          puVar4 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar4[(longlong)puVar7 - (longlong)puVar10];
            puVar4[(longlong)puVar7 - (longlong)puVar10] = *puVar4;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
LAB_140024550:
        puVar4 = puVar7;
        if (puVar6 < puVar4) {
          do {
            puVar6 = puVar6 + param_3;
            if (puVar4 <= puVar6) goto LAB_140024570;
            iVar2 = (*(code *)param_4)(puVar6);
          } while (iVar2 < 1);
        }
        else {
LAB_140024570:
          do {
            puVar6 = puVar6 + param_3;
            if (puVar10 < puVar6) break;
            iVar2 = (*(code *)param_4)(puVar6);
          } while (iVar2 < 1);
        }
        do {
          puVar7 = puVar8;
          puVar8 = puVar7 + -param_3;
          if (puVar8 <= puVar4) break;
          iVar2 = (*(code *)param_4)(puVar8);
        } while (0 < iVar2);
        if (puVar6 <= puVar8) {
          if (puVar8 != puVar6) {
            puVar7 = puVar8;
            uVar9 = param_3;
            do {
              uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
              puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar7 = puVar6;
          if (puVar4 != puVar8) {
            puVar7 = puVar4;
          }
          goto LAB_140024550;
        }
        if (puVar4 < puVar7) {
          do {
            puVar7 = puVar7 + -param_3;
            if (puVar7 <= puVar4) goto LAB_1400245f7;
            iVar2 = (*(code *)param_4)(puVar7);
          } while (iVar2 == 0);
        }
        else {
LAB_1400245f7:
          do {
            puVar7 = puVar7 + -param_3;
            if (puVar7 <= param_1) break;
            iVar2 = (*(code *)param_4)(puVar7);
          } while (iVar2 == 0);
        }
        if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6)
        goto LAB_14002464d;
        if (param_1 < puVar7) {
          local_438[local_448] = param_1;
          local_248[local_448] = puVar7;
          local_448 = local_448 + 1;
        }
        param_1 = puVar6;
        if (puVar10 <= puVar6) goto LAB_140024463;
      }
      for (; puVar6 = param_1, puVar7 = param_1, param_1 < puVar10; puVar10 = puVar10 + -param_3) {
        while (puVar8 = puVar6, puVar7 = puVar7 + param_3, puVar7 <= puVar10) {
          iVar2 = (*(code *)param_4)(puVar7,puVar8);
          puVar6 = puVar7;
          if (iVar2 < 1) {
            puVar6 = puVar8;
          }
        }
        if (puVar8 != puVar10) {
          puVar7 = puVar10;
          uVar9 = param_3;
          do {
            uVar1 = puVar7[(longlong)puVar8 - (longlong)puVar10];
            puVar7[(longlong)puVar8 - (longlong)puVar10] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      goto LAB_140024463;
    }
  }
  return;
LAB_14002464d:
  if (puVar6 < puVar10) {
    local_438[local_448] = puVar6;
    local_248[local_448] = puVar10;
    local_448 = local_448 + 1;
  }
  puVar10 = puVar7;
  if (puVar7 <= param_1) {
LAB_140024463:
    local_448 = local_448 + -1;
    if (local_448 < 0) {
      return;
    }
    param_1 = (undefined1 *)local_438[local_448];
    puVar10 = (undefined1 *)local_248[local_448];
  }
  goto LAB_1400243e0;
}




/* ---- 0x1400247f0 : FUN_1400247f0 [was: FUN_1400247f0] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_1400247f0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte local_38 [56];
  
  bVar2 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  local_38[0x13] = 0;
  local_38[0x14] = 0;
  local_38[0x15] = 0;
  local_38[0x16] = 0;
  local_38[0x17] = 0;
  local_38[0x18] = 0;
  local_38[0x19] = 0;
  local_38[0x1a] = 0;
  local_38[0x1b] = 0;
  local_38[0x1c] = 0;
  local_38[0x1d] = 0;
  local_38[0x1e] = 0;
  local_38[0x1f] = 0;
  while (bVar2 != 0) {
    local_38[(longlong)(int)(uint)bVar2 >> 3] =
         local_38[(longlong)(int)(uint)bVar2 >> 3] | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    if ((local_38[bVar2 >> 3] >> (bVar2 & 7) & 1) != 0) break;
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}




/* ---- 0x140024ce4 : FUN_140024ce4 [was: FUN_140024ce4] ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140024ce4(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                       undefined8 param_6,int param_7,uint param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  LPCWSTR pWVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  puVar10 = auStack_88;
  puVar12 = auStack_88;
  local_30 = DAT_14003c2c0 ^ (ulonglong)local_38;
  if (0 < param_5) {
    __strncnt(param_4,(longlong)param_5);
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  uVar5 = FUN_14001f5b4(param_8,(ulonglong)((-(uint)(param_9 != 0) & 8) + 1));
  pWVar9 = (LPCWSTR)0x0;
  uVar3 = (uint)uVar5;
  puVar13 = auStack_88;
  if (uVar3 == 0) goto LAB_140024fef;
  uVar5 = (longlong)(int)uVar3 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)(int)uVar3 * 2) < uVar5) & uVar5;
  if (uVar5 == 0) {
LAB_140024fd5:
    uVar5 = 0;
    if (pWVar9 != (LPCWSTR)0x0) goto LAB_140024fdc;
  }
  else {
    if (uVar5 < 0x401) {
      uVar8 = uVar5 + 0xf;
      if (uVar8 <= uVar5) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar12 = auStack_88 + lVar1;
      puVar10 = auStack_88 + lVar1;
      puVar6 = (undefined4 *)((longlong)local_38 + lVar1);
      pWVar9 = (LPCWSTR)0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_140024fd5;
      *puVar6 = 0xcccc;
LAB_140024df0:
      pWVar9 = (LPCWSTR)(puVar6 + 4);
      puVar12 = puVar10;
    }
    else {
      puVar6 = _malloc_base(uVar5);
      pWVar9 = (LPCWSTR)0x0;
      puVar12 = auStack_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_140024df0;
      }
    }
    if (pWVar9 == (LPCWSTR)0x0) goto LAB_140024fd5;
    *(uint *)(puVar12 + 0x28) = uVar3;
    *(LPCWSTR *)(puVar12 + 0x20) = pWVar9;
    *(undefined8 *)(puVar12 + -8) = 0x140024e1a;
    iVar2 = FUN_14001f5b4(param_8,1);
    if (iVar2 == 0) goto LAB_140024fd5;
    *(undefined8 *)(puVar12 + 0x40) = 0;
    *(undefined8 *)(puVar12 + 0x38) = 0;
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined4 *)(puVar12 + 0x28) = 0;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + -8) = 0x140024e4d;
    iVar2 = FUN_14001b704(param_2,param_3,pWVar9,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                          *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                          *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
    puVar6 = (undefined4 *)0x0;
    uVar5 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_140024fd5;
    if ((param_3 & 0x400) == 0) {
      uVar8 = uVar5 * 2 + 0x10;
      uVar8 = -(ulonglong)(uVar5 * 2 < uVar8) & uVar8;
      if (uVar8 == 0) goto LAB_140024fb8;
      if (uVar8 < 0x401) {
        uVar5 = uVar8 + 0xf;
        if (uVar5 <= uVar8) {
          uVar5 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar12 + -8) = 0x140024ef0;
        lVar1 = -(uVar5 & 0xfffffffffffffff0);
        puVar11 = puVar12 + lVar1;
        puVar7 = (undefined4 *)(puVar12 + lVar1 + 0x50);
        puVar12 = puVar12 + lVar1;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xcccc;
          puVar12 = puVar11;
LAB_140024f1e:
          puVar6 = puVar7 + 4;
          goto LAB_140024f22;
        }
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x140024f0e;
        puVar7 = _malloc_base(uVar8);
        puVar6 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xdddd;
          goto LAB_140024f1e;
        }
LAB_140024f22:
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar12 + 0x40) = 0;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          *(int *)(puVar12 + 0x28) = iVar2;
          *(undefined4 **)(puVar12 + 0x20) = puVar6;
          *(undefined8 *)(puVar12 + -8) = 0x140024f54;
          iVar4 = FUN_14001b704(param_2,param_3,pWVar9,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                                *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                                *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
          if (iVar4 != 0) {
            *(undefined8 *)(puVar12 + 0x38) = 0;
            *(undefined8 *)(puVar12 + 0x30) = 0;
            if (param_7 == 0) {
              *(undefined4 *)(puVar12 + 0x28) = 0;
              *(undefined8 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x140024f82;
              uVar3 = FUN_14001f644(param_8,0,puVar6,iVar2);
              if (uVar3 == 0) goto LAB_140024fb8;
            }
            else {
              *(int *)(puVar12 + 0x28) = param_7;
              *(undefined8 *)(puVar12 + 0x20) = param_6;
              *(undefined8 *)(puVar12 + -8) = 0x140024f9c;
              uVar3 = FUN_14001f644(param_8,0,puVar6,iVar2);
              if (uVar3 == 0) goto LAB_140024fbd;
            }
            uVar5 = (ulonglong)uVar3;
            if (puVar6[-4] == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x140024fb3;
              FUN_14001b320(puVar6 + -4);
            }
            goto LAB_140024fdc;
          }
LAB_140024fb8:
          if (puVar6 != (undefined4 *)0x0) {
LAB_140024fbd:
            if (puVar6[-4] == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x140024fce;
              FUN_14001b320(puVar6 + -4);
            }
          }
        }
      }
      uVar5 = 0;
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(undefined8 *)(puVar12 + 0x40) = 0;
        *(undefined8 *)(puVar12 + 0x38) = 0;
        *(undefined8 *)(puVar12 + 0x30) = 0;
        *(int *)(puVar12 + 0x28) = param_7;
        *(undefined8 *)(puVar12 + 0x20) = param_6;
        *(undefined8 *)(puVar12 + -8) = 0x140024ea5;
        uVar3 = FUN_14001b704(param_2,param_3,pWVar9,uVar3,*(LPWSTR *)(puVar12 + 0x20),
                              *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                              *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
        uVar5 = (ulonglong)uVar3;
        if (uVar3 != 0) goto LAB_140024fdc;
      }
      goto LAB_140024fd5;
    }
LAB_140024fdc:
    if (*(int *)(pWVar9 + -8) == 0xdddd) {
      *(undefined8 *)(puVar12 + -8) = 0x140024fed;
      FUN_14001b320(pWVar9 + -8);
    }
  }
  uVar5 = uVar5 & 0xffffffff;
  puVar13 = puVar12;
LAB_140024fef:
  *(undefined8 *)(puVar13 + -8) = 0x140024ffb;
  return uVar5;
}




/* ---- 0x14002652c : FUN_14002652c [was: FUN_14002652c] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14002652c(longlong *param_1,ushort *param_2,uint param_3,byte *param_4,int param_5,byte *param_6
             ,int param_7,uint param_8)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  size_t sVar11;
  BYTE *pBVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  PCNZWCH pWVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_88 [2];
  byte *local_80;
  ushort *local_78;
  _cpinfo local_70;
  ulonglong local_58;
  
  puVar17 = auStack_d8;
  puVar18 = auStack_d8;
  puVar19 = auStack_d8;
  local_58 = DAT_14003c2c0 ^ (ulonglong)local_88;
  local_80 = param_6;
  local_88[0] = param_3;
  local_78 = param_2;
  if (param_5 < 1) {
    puVar5 = auStack_d8;
    if (-2 < param_5) goto LAB_140026593;
    goto LAB_140026895;
  }
  sVar11 = __strncnt((char *)param_4,(longlong)param_5);
  param_5 = (int)sVar11;
LAB_140026593:
  if (param_7 < 1) {
    puVar5 = auStack_d8;
    if (param_7 < -1) goto LAB_140026895;
  }
  else {
    sVar11 = __strncnt((char *)param_6,(longlong)param_7);
    param_7 = (int)sVar11;
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*param_1 + 0xc);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    local_70.LeadByte[10] = '\0';
    local_70.LeadByte[0xb] = '\0';
    local_70._18_2_ = 0;
    local_70.MaxCharSize = 0;
    local_70.DefaultChar[0] = '\0';
    local_70.DefaultChar[1] = '\0';
    local_70.LeadByte[0] = '\0';
    local_70.LeadByte[1] = '\0';
    local_70.LeadByte[2] = '\0';
    local_70.LeadByte[3] = '\0';
    local_70.LeadByte[4] = '\0';
    local_70.LeadByte[5] = '\0';
    local_70.LeadByte[6] = '\0';
    local_70.LeadByte[7] = '\0';
    local_70.LeadByte[8] = '\0';
    local_70.LeadByte[9] = '\0';
    if (param_5 == param_7) {
LAB_1400268b4:
      uVar10 = 2;
      puVar19 = auStack_d8;
      goto LAB_140026897;
    }
    if (param_7 < 2) {
      if (param_5 < 2) {
        BVar6 = GetCPInfo(param_8,&local_70);
        puVar5 = auStack_d8;
        if (BVar6 == 0) goto LAB_140026895;
        if (param_5 < 1) {
          if (param_7 < 1) goto LAB_140026688;
          if (1 < local_70.MaxCharSize) {
            pBVar12 = local_70.LeadByte;
            while ((local_70.LeadByte[0] != 0 && (pBVar12[1] != 0))) {
              if ((*pBVar12 <= *param_6) && (*param_6 <= pBVar12[1])) goto LAB_1400268b4;
              pBVar12 = pBVar12 + 2;
              local_70.LeadByte[0] = *pBVar12;
            }
          }
          goto LAB_14002667e;
        }
        if (1 < local_70.MaxCharSize) {
          pBVar12 = local_70.LeadByte;
          while ((local_70.LeadByte[0] != 0 && (pBVar12[1] != 0))) {
            if ((*pBVar12 <= *param_4) && (*param_4 <= pBVar12[1])) goto LAB_1400268b4;
            pBVar12 = pBVar12 + 2;
            local_70.LeadByte[0] = *pBVar12;
          }
        }
      }
      uVar10 = 3;
      puVar19 = auStack_d8;
    }
    else {
LAB_14002667e:
      uVar10 = 1;
    }
    goto LAB_140026897;
  }
LAB_140026688:
  local_b0 = 0;
  local_b8 = 0;
  uVar7 = FUN_14001f5b4(param_8,9);
  puVar5 = auStack_d8;
  if ((uVar7 != 0) &&
     (uVar15 = (longlong)(int)uVar7 * 2 + 0x10,
     uVar15 = -(ulonglong)((ulonglong)((longlong)(int)uVar7 * 2) < uVar15) & uVar15,
     puVar5 = auStack_d8, uVar15 != 0)) {
    if (uVar15 < 0x401) {
      uVar13 = uVar15 + 0xf;
      if (uVar13 <= uVar15) {
        uVar13 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar13 & 0xfffffffffffffff0);
      puVar17 = auStack_d8 + lVar2;
      puVar14 = (undefined4 *)((longlong)local_88 + lVar2);
      puVar5 = auStack_d8 + lVar2;
      if (puVar14 == (undefined4 *)0x0) goto LAB_140026895;
      *puVar14 = 0xcccc;
LAB_140026720:
      pWVar16 = (PCNZWCH)(puVar14 + 4);
      puVar18 = puVar17;
    }
    else {
      puVar14 = _malloc_base(uVar15);
      pWVar16 = (PCNZWCH)0x0;
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 0xdddd;
        goto LAB_140026720;
      }
    }
    puVar5 = puVar18;
    if (pWVar16 != (PCNZWCH)0x0) {
      *(uint *)(puVar18 + 0x28) = uVar7;
      *(PCNZWCH *)(puVar18 + 0x20) = pWVar16;
      *(undefined8 *)(puVar18 + -8) = 0x14002674a;
      iVar8 = FUN_14001f5b4(param_8,1);
      puVar19 = puVar18;
      if (iVar8 == 0) {
LAB_140026884:
        iVar8 = *(int *)(pWVar16 + -8);
      }
      else {
        *(undefined4 *)(puVar18 + 0x28) = 0;
        *(undefined8 *)(puVar18 + 0x20) = 0;
        *(undefined8 *)(puVar18 + -8) = 0x140026770;
        iVar8 = FUN_14001f5b4(param_8,9);
        if ((iVar8 == 0) ||
           (uVar15 = (longlong)iVar8 * 2 + 0x10,
           uVar15 = -(ulonglong)((ulonglong)((longlong)iVar8 * 2) < uVar15) & uVar15, uVar15 == 0))
        goto LAB_140026884;
        if (uVar15 < 0x401) {
          uVar13 = uVar15 + 0xf;
          if (uVar13 <= uVar15) {
            uVar13 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1400267b9;
          lVar2 = -(uVar13 & 0xfffffffffffffff0);
          puVar19 = puVar18 + lVar2;
          puVar14 = (undefined4 *)(puVar18 + lVar2 + 0x50);
          if (puVar14 == (undefined4 *)0x0) goto LAB_140026884;
          *puVar14 = 0xcccc;
          puVar18 = puVar18 + lVar2;
LAB_1400267e5:
          puVar20 = puVar14 + 4;
          puVar19 = puVar18;
        }
        else {
          *(undefined8 *)(puVar18 + -8) = 0x1400267d7;
          puVar14 = _malloc_base(uVar15);
          puVar20 = (undefined4 *)0x0;
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = 0xdddd;
            goto LAB_1400267e5;
          }
        }
        if (puVar20 == (undefined4 *)0x0) goto LAB_140026884;
        piVar1 = puVar20 + -4;
        *(int *)(puVar19 + 0x28) = iVar8;
        *(undefined4 **)(puVar19 + 0x20) = puVar20;
        *(undefined8 *)(puVar19 + -8) = 0x140026814;
        iVar9 = FUN_14001f5b4(param_8,1);
        uVar3 = local_88[0];
        if (iVar9 != 0) {
          *(undefined8 *)(puVar19 + 0x40) = 0;
          *(undefined8 *)(puVar19 + 0x38) = 0;
          *(undefined8 *)(puVar19 + 0x30) = 0;
          puVar4 = local_78;
          *(int *)(puVar19 + 0x28) = iVar8;
          *(undefined4 **)(puVar19 + 0x20) = puVar20;
          *(undefined8 *)(puVar19 + -8) = 0x14002685f;
          uVar10 = FUN_14001b60c(puVar4,uVar3,pWVar16,uVar7,*(PCNZWCH *)(puVar19 + 0x20),
                                 *(int *)(puVar19 + 0x28),*(undefined8 *)(puVar19 + 0x30),
                                 *(undefined8 *)(puVar19 + 0x38),*(undefined8 *)(puVar19 + 0x40));
          if (*piVar1 == 0xdddd) {
            *(undefined8 *)(puVar19 + -8) = 0x140026873;
            FUN_14001b320(piVar1);
          }
          if (*(int *)(pWVar16 + -8) == 0xdddd) {
            *(undefined8 *)(puVar19 + -8) = 0x140026880;
            FUN_14001b320(pWVar16 + -8);
          }
          goto LAB_140026897;
        }
        if (*piVar1 == 0xdddd) {
          *(undefined8 *)(puVar19 + -8) = 0x14002682c;
          FUN_14001b320(piVar1);
        }
        iVar8 = *(int *)(pWVar16 + -8);
      }
      puVar5 = puVar19;
      if (iVar8 == 0xdddd) {
        *(undefined8 *)(puVar19 + -8) = 0x140026895;
        FUN_14001b320(pWVar16 + -8);
      }
    }
  }
LAB_140026895:
  puVar19 = puVar5;
  uVar10 = 0;
LAB_140026897:
  *(undefined8 *)(puVar19 + -8) = 0x1400268a3;
  return uVar10;
}




/* ---- 0x140026eb0 : FUN_140026eb0 [was: FUN_140026eb0] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140026eb0(undefined8 param_1,int param_2,undefined8 param_3,int param_4,uint param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStackY_128 [32];
  undefined8 local_f8;
  ulonglong local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14003c2c0 ^ (ulonglong)auStackY_128;
  local_f0 = 0;
  local_f8 = param_3;
  uVar1 = FUN_140026da0(param_5,&local_f0);
  uVar3 = param_8;
  if (uVar1 != 0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = 3;
    }
    FUN_140027290(local_b8,&local_f0,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)&local_f8);
  }
  uVar2 = FUN_140019570();
  if (((char)uVar2 == '\0') || (param_4 == 0)) {
    FUN_1400275d0(param_4);
    uVar4 = (undefined4)local_f8;
    uVar5 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    local_d8 = param_7;
    local_c8 = local_f8;
    local_e8[1] = 0;
    local_d0 = uVar3;
    local_e8[0] = param_4;
    local_e0 = param_1;
    uVar3 = FUN_1400195a0(local_e8);
    if ((int)uVar3 == 0) {
      FUN_1400275d0(param_4);
    }
    uVar4 = (undefined4)local_c8;
    uVar5 = (undefined4)((ulonglong)local_c8 >> 0x20);
  }
  return CONCAT44(uVar5,uVar4);
}




