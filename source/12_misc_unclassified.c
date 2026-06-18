/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: misc                                                      */
/* /* Unclassified / compiler-generated functions */                      */
/* Functions: 383                                                       */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x1400070f0 : FUN_1400070f0 [was: FUN_1400070f0] ---- */

undefined * FUN_1400070f0(void)

{
  return &DAT_14003cea0;
}




/* ---- 0x140007560 : FUN_140007560 [was: FUN_140007560] ---- */

undefined8 * FUN_140007560(undefined8 *param_1)

{
  FUN_140007b30(param_1);
  FUN_140008630(param_1);
  return param_1;
}




/* ---- 0x140007590 : FUN_140007590 [was: FUN_140007590] ---- */

undefined8 * FUN_140007590(undefined8 *param_1)

{
  FUN_140008630(param_1);
  return param_1;
}




/* ---- 0x1400075c0 : FUN_1400075c0 [was: FUN_1400075c0] ---- */

ulonglong FUN_1400075c0(__uint64 param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_140009cb0();
    if (cVar1 == '\0') {
      if (param_1 < 0x1000) {
        uVar2 = FUN_140008d60(param_1);
      }
      else {
        uVar2 = FUN_140007740(param_1);
      }
    }
    else {
      uVar2 = FUN_140008d60(param_1);
    }
  }
  return uVar2;
}




/* ---- 0x140007650 : FUN_140007650 [was: FUN_140007650] ---- */

void FUN_140007650(undefined8 param_1,ulonglong *param_2)

{
  FUN_1400093f0(param_1,*param_2);
  return;
}




/* ---- 0x140007740 : FUN_140007740 [was: FUN_140007740] ---- */

ulonglong FUN_140007740(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 + 0x27 <= param_1) {
    FUN_1400091d0();
  }
  lVar1 = FUN_140008d60(param_1 + 0x27);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar2 - 8) = lVar1;
  return uVar2;
}




/* ---- 0x140007970 : FUN_140007970 [was: FUN_140007970] ---- */

void FUN_140007970(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  cVar1 = FUN_140009cb0();
  if (cVar1 == '\0') {
    uVar2 = FUN_140007b30(param_1);
    puVar3 = (undefined4 *)FUN_140008b80(4,uVar2);
    *puVar3 = *param_2;
  }
  else {
    uVar2 = FUN_140007b30(param_1);
    FUN_1400083c0(uVar2,param_2);
  }
  return;
}




/* ---- 0x1400079e0 : FUN_1400079e0 [was: FUN_1400079e0] ---- */

void FUN_1400079e0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  cVar1 = FUN_140009cb0();
  if (cVar1 == '\0') {
    uVar2 = FUN_140007b30(param_1);
    puVar3 = (undefined8 *)FUN_140008b80(8,uVar2);
    *puVar3 = *param_2;
  }
  else {
    uVar2 = FUN_140007b30(param_1);
    FUN_140008400(uVar2,param_2);
  }
  return;
}




/* ---- 0x140007a50 : FUN_140007a50 [was: FUN_140007a50] ---- */

void FUN_140007a50(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
  local_18 = FUN_1400090c0(param_1);
  puVar2 = local_38;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20 = local_38;
  local_30 = param_1;
  FUN_1400087e0(local_38 + 1);
  if (param_2 != 0) {
    FUN_140008d80(param_1,param_2);
    local_28 = param_1;
    lVar1 = FUN_140008130(*param_3,*param_4,*local_30,local_18);
    local_30[1] = lVar1;
    local_28 = (longlong *)0x0;
    FUN_1400089f0((longlong *)&local_28);
  }
  FUN_140007ca0();
  return;
}




/* ---- 0x140007b30 : FUN_140007b30 [was: FUN_140007b30] ---- */

undefined8 FUN_140007b30(undefined8 param_1)

{
  return param_1;
}




/* ---- 0x140007b40 : FUN_140007b40 [was: FUN_140007b40] ---- */

void FUN_140007b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  puVar1 = (undefined8 *)FUN_140008110(&local_res8);
  lVar2 = FUN_140008110(&local_res10);
  FUN_140007be0(puVar1,local_res18,lVar2 - (longlong)puVar1,lVar2 - (longlong)puVar1 >> 2);
  return;
}




/* ---- 0x140007be0 : FUN_140007be0 [was: FUN_140007be0] ---- */

longlong FUN_140007be0(undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  ulonglong local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_140008110(&local_res10);
  FUN_140027a20(puVar1,param_1,local_res18);
  return (longlong)puVar1 + local_res18;
}




/* ---- 0x140007c40 : FUN_140007c40 [was: FUN_140007c40] ---- */

void FUN_140007c40(LPVOID param_1,ulonglong param_2)

{
  char cVar1;
  LPVOID local_res8;
  ulonglong local_res10 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  cVar1 = FUN_140009cb0();
  if (cVar1 == '\0') {
    if (0xfff < local_res10[0]) {
      FUN_140008cb0((longlong *)&local_res8,(longlong *)local_res10);
    }
    thunk_FUN_14001b320(local_res8);
  }
  else {
    thunk_FUN_14001b320(local_res8);
  }
  return;
}




/* ---- 0x140007ca0 : FUN_140007ca0 [was: FUN_140007ca0] ---- */

void FUN_140007ca0(void)

{
  return;
}




/* ---- 0x140007cb0 : FUN_140007cb0 [was: FUN_140007cb0] ---- */

void FUN_140007cb0(void)

{
  return;
}




/* ---- 0x140007cc0 : FUN_140007cc0 [was: FUN_140007cc0] ---- */

void FUN_140007cc0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140007b30(*(undefined8 *)(param_1 + 8));
  FUN_140008350(*(undefined8 *)(param_1 + 0x10),uVar1,param_2);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
  return;
}




/* ---- 0x140007d20 : FUN_140007d20 [was: FUN_140007d20] ---- */

longlong FUN_140007d20(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 8);
  FUN_140007970(*plVar2,param_2);
  FUN_140007cb0();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 4;
  return lVar1;
}




/* ---- 0x140007da0 : FUN_140007da0 [was: FUN_140007da0] ---- */

void FUN_140007da0(longlong *param_1,undefined4 *param_2)

{
  if (param_1[1] == param_1[2]) {
    FUN_140007e10(param_1,param_1[1],param_2);
  }
  else {
    FUN_140007d20((longlong)param_1,param_2);
  }
  return;
}




/* ---- 0x140007e10 : FUN_140007e10 [was: FUN_140007e10] ---- */

longlong FUN_140007e10(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  __uint64 _Var4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong local_70;
  longlong *local_68;
  __uint64 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  
  uVar1 = FUN_1400090c0(param_1);
  plVar2 = param_1 + 1;
  lVar3 = param_2 - *param_1 >> 2;
  local_60 = *plVar2 - *param_1 >> 2;
  local_68 = param_1;
  _Var4 = FUN_140009e90(param_1);
  if (local_60 == _Var4) {
    FUN_1400093a0();
  }
  local_48 = local_60 + 1;
  local_70 = FUN_140008ef0(param_1,local_48);
  lVar5 = FUN_140007650(uVar1,&local_70);
  local_58 = lVar5 + 4 + lVar3 * 4;
  local_28 = local_70;
  local_50 = &local_20;
  local_38 = uVar1;
  local_30 = lVar5;
  local_20 = local_58;
  local_18 = local_58;
  uVar6 = FUN_140007b30(lVar5 + lVar3 * 4);
  FUN_140008350(uVar1,uVar6,param_3);
  *local_50 = lVar5 + lVar3 * 4;
  if (param_2 == *plVar2) {
    FUN_140008260(*param_1,*plVar2,lVar5,uVar1);
  }
  else {
    FUN_140008260(*param_1,param_2,lVar5,uVar1);
    *local_50 = lVar5;
    FUN_140008260(param_2,*plVar2,lVar5 + 4 + lVar3 * 4,uVar1);
  }
  local_30 = 0;
  FUN_140008f80(param_1,lVar5,local_48,local_70);
  local_40 = lVar5 + lVar3 * 4;
  FUN_140008aa0(&local_38);
  return local_40;
}




/* ---- 0x140008090 : FUN_140008090 [was: FUN_140008090] ---- */

longlong FUN_140008090(ulonglong param_1)

{
  if (0x3fffffffffffffff < param_1) {
    FUN_1400091d0();
  }
  return param_1 << 2;
}




/* ---- 0x1400080e0 : FUN_1400080e0 [was: FUN_1400080e0] ---- */

undefined8 FUN_1400080e0(undefined8 *param_1)

{
  return *param_1;
}




/* ---- 0x1400080f0 : FUN_1400080f0 [was: FUN_1400080f0] ---- */

undefined8 FUN_1400080f0(void)

{
  return 0x7fffffffffffffff;
}




/* ---- 0x140008110 : FUN_140008110 [was: FUN_140008110] ---- */

void FUN_140008110(undefined8 *param_1)

{
  FUN_140007b30(*param_1);
  return;
}




/* ---- 0x140008130 : FUN_140008130 [was: FUN_140008130] ---- */

longlong FUN_140008130(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [4];
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = (undefined4 *)FUN_1400080e0(&local_res8);
  local_48 = (undefined4 *)FUN_1400080e0(&local_res10);
  cVar1 = FUN_140009cb0();
  if (cVar1 == '\0') {
    local_40 = FUN_140007b30(local_res18);
    local_38 = FUN_140008110(&local_48);
    local_30 = FUN_140008110(&local_50);
    FUN_140007b40(local_30,local_38,local_40);
    local_28 = local_res18 + ((longlong)local_48 - (longlong)local_50 >> 2) * 4;
  }
  else {
    FUN_1400085f0(local_20,local_res18,local_res20);
    for (; local_50 != local_48; local_50 = local_50 + 1) {
      FUN_140007cc0((longlong)local_20,local_50);
    }
    local_28 = FUN_140009150(local_20);
    FUN_140008a20();
  }
  return local_28;
}




/* ---- 0x140008260 : FUN_140008260 [was: FUN_140008260] ---- */

longlong FUN_140008260(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 *local_38;
  undefined8 local_20 [4];
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_38 = (undefined4 *)FUN_1400080e0(&local_res8);
  puVar2 = (undefined4 *)FUN_1400080e0(&local_res10);
  cVar1 = FUN_140009cb0();
  if (cVar1 == '\0') {
    uVar3 = FUN_140007b30(local_res18);
    FUN_140007b40(local_38,puVar2,uVar3);
    lVar4 = local_res18 + ((longlong)puVar2 - (longlong)local_38 >> 2) * 4;
  }
  else {
    FUN_1400085f0(local_20,local_res18,local_res20);
    for (; local_38 != puVar2; local_38 = local_38 + 1) {
      FUN_140007cc0((longlong)local_20,local_38);
    }
    lVar4 = FUN_140009150(local_20);
    FUN_140008a20();
  }
  return lVar4;
}




/* ---- 0x140008350 : FUN_140008350 [was: FUN_140008350] ---- */

void FUN_140008350(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_1400083c0(param_2,param_3);
  return;
}




/* ---- 0x140008380 : FUN_140008380 [was: FUN_140008380] ---- */

undefined1 * FUN_140008380(undefined8 param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)FUN_140008b80(1,param_1);
  puVar3 = puVar1;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return puVar1;
}




/* ---- 0x1400083c0 : FUN_1400083c0 [was: FUN_1400083c0] ---- */

undefined4 * FUN_1400083c0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140008b80(4,param_1);
  *puVar1 = *param_2;
  return puVar1;
}




/* ---- 0x140008400 : FUN_140008400 [was: FUN_140008400] ---- */

undefined8 * FUN_140008400(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140008b80(8,param_1);
  *puVar1 = *param_2;
  return puVar1;
}




/* ---- 0x1400084e0 : FUN_1400084e0 [was: FUN_1400084e0] ---- */

undefined2 FUN_1400084e0(longlong param_1,int param_2)

{
  undefined2 local_18 [4];
  longlong local_10;
  
  local_10 = param_1 + param_2;
  FUN_140009f10(local_10,local_18,2);
  return local_18[0];
}




/* ---- 0x140008530 : FUN_140008530 [was: FUN_140008530] ---- */

void FUN_140008530(longlong param_1,longlong param_2,uint param_3)

{
  short sVar1;
  uint local_14;
  
  local_14 = 0;
  while ((local_14 < param_3 &&
         (sVar1 = FUN_1400084e0(param_1 + (ulonglong)local_14 * 2,0), sVar1 != 0))) {
    *(short *)(param_2 + (ulonglong)local_14 * 2) = sVar1;
    local_14 = local_14 + 1;
  }
  *(undefined2 *)(param_2 + (ulonglong)local_14 * 2) = 0;
  return;
}




/* ---- 0x1400085f0 : FUN_1400085f0 [was: FUN_1400085f0] ---- */

undefined8 * FUN_1400085f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}




/* ---- 0x140008630 : FUN_140008630 [was: FUN_140008630] ---- */

undefined8 * FUN_140008630(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




/* ---- 0x1400086d0 : FUN_1400086d0 [was: FUN_1400086d0] ---- */

longlong * FUN_1400086d0(longlong *param_1,longlong *param_2)

{
  undefined1 local_37 [7];
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_20 = param_1;
  FUN_1400090c0(param_2);
  local_28 = FUN_140009f80(local_37);
  FUN_140007590(local_20);
  local_18 = param_2[1] - *param_2 >> 2;
  local_30 = param_2;
  FUN_140007a50(param_1,local_18,param_2,param_2 + 1);
  return param_1;
}




/* ---- 0x140008780 : FUN_140008780 [was: FUN_140008780] ---- */

undefined8 * FUN_140008780(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = param_1;
  FUN_140007560(param_1);
  puVar2 = local_28;
  local_18 = param_1;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140008d50();
  return param_1;
}




/* ---- 0x1400087e0 : FUN_1400087e0 [was: FUN_1400087e0] ---- */

undefined8 FUN_1400087e0(undefined8 param_1)

{
  return param_1;
}




/* ---- 0x1400089b0 : FUN_1400089b0 [was: FUN_1400089b0] ---- */

void FUN_1400089b0(void)

{
  FUN_1400089d0();
  return;
}




/* ---- 0x1400089d0 : FUN_1400089d0 [was: FUN_1400089d0] ---- */

void FUN_1400089d0(void)

{
  FUN_140007ca0();
  return;
}




/* ---- 0x1400089f0 : FUN_1400089f0 [was: FUN_1400089f0] ---- */

void FUN_1400089f0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_140009200((longlong *)*param_1);
  }
  return;
}




/* ---- 0x140008a20 : FUN_140008a20 [was: FUN_140008a20] ---- */

void FUN_140008a20(void)

{
  FUN_140007cb0();
  return;
}




/* ---- 0x140008a80 : FUN_140008a80 [was: FUN_140008a80] ---- */

void FUN_140008a80(longlong *param_1)

{
  FUN_140009200(param_1);
  return;
}




/* ---- 0x140008aa0 : FUN_140008aa0 [was: FUN_140008aa0] ---- */

void FUN_140008aa0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_140007cb0();
    FUN_140009700(*param_1,(LPVOID)param_1[1],param_1[2]);
  }
  return;
}




/* ---- 0x140008b10 : FUN_140008b10 [was: FUN_140008b10] ---- */

void FUN_140008b10(undefined8 *param_1)

{
  FUN_140008b50(param_1);
  return;
}




/* ---- 0x140008b30 : FUN_140008b30 [was: FUN_140008b30] ---- */

void FUN_140008b30(undefined8 *param_1)

{
  FUN_140008b10(param_1);
  return;
}




/* ---- 0x140008b80 : FUN_140008b80 [was: FUN_140008b80] ---- */

undefined8 FUN_140008b80(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* ---- 0x140008bc0 : FUN_140008bc0 [was: FUN_140008bc0] ---- */

longlong FUN_140008bc0(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 4;
}




/* ---- 0x140008bf0 : FUN_140008bf0 [was: FUN_140008bf0] ---- */

undefined8 * FUN_140008bf0(undefined8 *param_1,uint param_2)

{
  FUN_140008b10(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14001b320(param_1);
  }
  return param_1;
}




/* ---- 0x140008c30 : FUN_140008c30 [was: FUN_140008c30] ---- */

undefined8 * FUN_140008c30(undefined8 *param_1,uint param_2)

{
  FUN_140008b30(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14001b320(param_1);
  }
  return param_1;
}




/* ---- 0x140008c70 : FUN_140008c70 [was: FUN_140008c70] ---- */

undefined8 * FUN_140008c70(undefined8 *param_1,uint param_2)

{
  FUN_140008b50(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14001b320(param_1);
  }
  return param_1;
}




/* ---- 0x140008cb0 : FUN_140008cb0 [was: FUN_140008cb0] ---- */

void FUN_140008cb0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  *param_2 = *param_2 + 0x27;
  uVar1 = *param_1 - *(longlong *)(*param_1 + -8);
  if ((7 < uVar1) && (uVar1 < 0x28)) {
    *param_1 = *(longlong *)(*param_1 + -8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}




/* ---- 0x140008d50 : FUN_140008d50 [was: FUN_140008d50] ---- */

void FUN_140008d50(void)

{
  return;
}




/* ---- 0x140008d60 : FUN_140008d60 [was: FUN_140008d60] ---- */

void FUN_140008d60(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




/* ---- 0x140008d80 : FUN_140008d80 [was: FUN_140008d80] ---- */

void FUN_140008d80(longlong *param_1,ulonglong param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_140009e90(param_1);
  if (_Var1 < param_2) {
    FUN_1400093a0();
  }
  FUN_140008dc0(param_1,param_2);
  return;
}




/* ---- 0x140008dc0 : FUN_140008dc0 [was: FUN_140008dc0] ---- */

void FUN_140008dc0(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = param_2;
  uVar1 = FUN_1400090c0(param_1);
  lVar2 = FUN_140007650(uVar1,local_res10);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + local_res10[0] * 4;
  return;
}




/* ---- 0x140008ef0 : FUN_140008ef0 [was: FUN_140008ef0] ---- */

ulonglong FUN_140008ef0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_140009480(param_1);
  uVar2 = FUN_140009e90(param_1);
  if ((uVar1 <= uVar2 - uVar1 / 2) && (uVar2 = uVar1 + uVar1 / 2, uVar2 < param_2)) {
    uVar2 = param_2;
  }
  return uVar2;
}




/* ---- 0x140008f80 : FUN_140008f80 [was: FUN_140008f80] ---- */

void FUN_140008f80(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400090c0(param_1);
  FUN_140007ca0();
  if (*param_1 != 0) {
    FUN_140007cb0();
    FUN_140009700(uVar1,(LPVOID)*param_1,param_1[2] - *param_1 >> 2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}




/* ---- 0x140009080 : FUN_140009080 [was: FUN_140009080] ---- */

void FUN_140009080(undefined8 param_1,LPVOID param_2,longlong param_3)

{
  FUN_1400096d0(param_1,param_2,param_3 + 1);
  return;
}




/* ---- 0x1400090c0 : FUN_1400090c0 [was: FUN_1400090c0] ---- */

void FUN_1400090c0(undefined8 param_1)

{
  FUN_140007b30(param_1);
  return;
}




/* ---- 0x1400090e0 : FUN_1400090e0 [was: FUN_1400090e0] ---- */

bool FUN_1400090e0(longlong param_1)

{
  return 0xf < *(ulonglong *)(param_1 + 0x18);
}




/* ---- 0x140009150 : FUN_140009150 [was: FUN_140009150] ---- */

undefined8 FUN_140009150(undefined8 *param_1)

{
  *param_1 = param_1[1];
  return param_1[1];
}




/* ---- 0x140009170 : FUN_140009170 [was: FUN_140009170] ---- */

void FUN_140009170(longlong param_1)

{
  char cVar1;
  undefined8 local_18;
  
  FUN_140007ca0();
  cVar1 = FUN_140009cb0();
  if (cVar1 != '\0') {
    for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
      *(undefined1 *)(param_1 + local_18) = 0;
    }
  }
  return;
}




/* ---- 0x140009200 : FUN_140009200 [was: FUN_140009200] ---- */

void FUN_140009200(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400090c0(param_1);
  FUN_140007ca0();
  if (*param_1 != 0) {
    FUN_140007cb0();
    FUN_140009700(uVar1,(LPVOID)*param_1,param_1[2] - *param_1 >> 2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




/* ---- 0x1400092d0 : FUN_1400092d0 [was: FUN_1400092d0] ---- */

void FUN_1400092d0(undefined8 *param_1)

{
  bool bVar1;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  FUN_140007ca0();
  bVar1 = FUN_1400090e0((longlong)local_20);
  if (bVar1) {
    local_18 = FUN_1400090c0(param_1);
    FUN_140009080(local_18,(LPVOID)*local_20,local_20[3]);
    FUN_140009170((longlong)local_20);
  }
  local_20[2] = 0;
  local_20[3] = 0xf;
  local_28[0] = 0;
  FUN_140009440((undefined1 *)local_20,local_28);
  return;
}




/* ---- 0x140009380 : FUN_140009380 [was: FUN_140009380] ---- */

void FUN_140009380(void)

{
  FUN_14000a158(0x140029ec8);
  return;
}




/* ---- 0x1400093a0 : FUN_1400093a0 [was: FUN_1400093a0] ---- */

void FUN_1400093a0(void)

{
  FUN_14000a158(0x140029ed8);
  return;
}




/* ---- 0x1400093f0 : FUN_1400093f0 [was: FUN_1400093f0] ---- */

void FUN_1400093f0(undefined8 param_1,ulonglong param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_140008090(param_2);
  FUN_1400075c0(_Var1);
  return;
}




/* ---- 0x140009420 : FUN_140009420 [was: FUN_140009420] ---- */

void FUN_140009420(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




/* ---- 0x140009440 : FUN_140009440 [was: FUN_140009440] ---- */

void FUN_140009440(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_140009cb0();
  if (cVar1 == '\0') {
    *param_1 = *param_2;
  }
  else {
    FUN_140009420(param_1,param_2);
  }
  return;
}




/* ---- 0x140009480 : FUN_140009480 [was: FUN_140009480] ---- */

longlong FUN_140009480(longlong *param_1)

{
  return param_1[2] - *param_1 >> 2;
}




/* ---- 0x1400094b0 : FUN_1400094b0 [was: FUN_1400094b0] ---- */

undefined1 * FUN_1400094b0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  char cVar1;
  undefined1 *puVar2;
  longlong local_28;
  
  cVar1 = FUN_140009cb0();
  puVar2 = param_1;
  if (cVar1 == '\0') {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    for (local_28 = 0; local_28 != param_3; local_28 = local_28 + 1) {
      param_1[local_28] = param_2[local_28];
    }
  }
  return param_1;
}




/* ---- 0x1400096d0 : FUN_1400096d0 [was: FUN_1400096d0] ---- */

void FUN_1400096d0(undefined8 param_1,LPVOID param_2,ulonglong param_3)

{
  FUN_140007c40(param_2,param_3);
  return;
}




/* ---- 0x140009700 : FUN_140009700 [was: FUN_140009700] ---- */

void FUN_140009700(undefined8 param_1,LPVOID param_2,longlong param_3)

{
  FUN_140007c40(param_2,param_3 << 2);
  return;
}




/* ---- 0x140009730 : FUN_140009730 [was: FUN_140009730] ---- */

char * FUN_140009730(longlong param_1,char param_2)

{
  char *pcVar1;
  undefined8 local_18;
  
  local_18 = 0;
  do {
    pcVar1 = (char *)(param_1 + local_18);
    local_18 = local_18 + 1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}




/* ---- 0x140009920 : FUN_140009920 [was: FUN_140009920] ---- */

longlong FUN_140009920(longlong param_1,int param_2,int param_3)

{
  uint local_28 [10];
  
  FUN_140009f10(param_1 + param_2,local_28,4);
  return (ulonglong)local_28[0] + param_1 + param_3;
}




/* ---- 0x140009cb0 : stub_return_zero [was: FUN_140009cb0] ---- */

undefined1 FUN_140009cb0(void)

{
  return 0;
}




/* ---- 0x140009e00 : FUN_140009e00 [was: FUN_140009e00] ---- */

undefined8 FUN_140009e00(void)

{
  return 0xffffffffffffffff;
}




/* ---- 0x140009e10 : FUN_140009e10 [was: FUN_140009e10] ---- */

undefined8 FUN_140009e10(void)

{
  return 0x3fffffffffffffff;
}




/* ---- 0x140009ee0 : FUN_140009ee0 [was: FUN_140009ee0] ---- */

void FUN_140009ee0(longlong *param_1,undefined4 *param_2)

{
  FUN_140007da0(param_1,param_2);
  return;
}




/* ---- 0x140009f80 : FUN_140009f80 [was: FUN_140009f80] ---- */

undefined8 FUN_140009f80(undefined8 param_1)

{
  return param_1;
}




/* ---- 0x140009f90 : FUN_140009f90 [was: FUN_140009f90] ---- */

undefined8 FUN_140009f90(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* ---- 0x140009fa0 : FUN_140009fa0 [was: FUN_140009fa0] ---- */

longlong FUN_140009fa0(longlong *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




/* ---- 0x140009fd0 : FUN_140009fd0 [was: FUN_140009fd0] ---- */

char * FUN_140009fd0(longlong param_1)

{
  char *local_18;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_18 = "Unknown exception";
  }
  else {
    local_18 = *(char **)(param_1 + 8);
  }
  return local_18;
}




/* ---- 0x14000a158 : FUN_14000a158 [was: FUN_14000a158] ---- */

void FUN_14000a158(longlong param_1)

{
  longlong local_28 [5];
  
  FUN_14000a07c(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_14000b37c(local_28,&DAT_140034948);
}




/* ---- 0x14000a1c8 : FUN_14000a1c8 [was: FUN_14000a1c8] ---- */

undefined8 FUN_14000a1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_14000a1e8(param_2,param_4);
  return 1;
}




/* ---- 0x14000a2e8 : FUN_14000a2e8 [was: FUN_14000a2e8] ---- */

void FUN_14000a2e8(int *param_1,__uint64 param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_14000a1e8(param_2,(longlong)param_4);
  if ((*(uint *)(lVar1 + 4) & ((param_1[1] & 0x66U) != 0) + 1) != 0) {
    FUN_14000c06c(param_1,param_2,param_3,param_4);
  }
  return;
}




/* ---- 0x14000a368 : FUN_14000a368 [was: FUN_14000a368] ---- */

undefined8 * FUN_14000a368(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14001b320(param_1);
  }
  return param_1;
}




/* ---- 0x14000a44c : FUN_14000a44c [was: FUN_14000a44c] ---- */

undefined8 FUN_14000a44c(void)

{
  FUN_14000aae0();
  return 0;
}




/* ---- 0x14000a45c : FUN_14000a45c [was: FUN_14000a45c] ---- */

void FUN_14000a45c(void)

{
  undefined8 uVar1;
  
  FUN_14000accc();
  uVar1 = FUN_14000aab4();
  FUN_14001a250((uint)uVar1);
  return;
}




/* ---- 0x14000a608 : FUN_14000a608 [was: FUN_14000a608] ---- */

void FUN_14000a608(void)

{
  longlong local_28 [5];
  
  FUN_14000a01c(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_14000b37c(local_28,&DAT_1400348e8);
}




/* ---- 0x14000a800 : FUN_14000a800 [was: FUN_14000a800] ---- */

ulonglong FUN_14000a800(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_14003d450 = 1;
  }
  FUN_14000adb8();
  uVar1 = __vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_14001a7b4();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffffffffffff00;
}




/* ---- 0x14000aab4 : FUN_14000aab4 [was: FUN_14000aab4] ---- */

undefined8 FUN_14000aab4(void)

{
  return 0;
}




/* ---- 0x14000aab8 : FUN_14000aab8 [was: FUN_14000aab8] ---- */

undefined8 FUN_14000aab8(void)

{
  return 1;
}




/* ---- 0x14000aac0 : FUN_14000aac0 [was: FUN_14000aac0] ---- */

undefined8 FUN_14000aac0(void)

{
  return 0x4000;
}




/* ---- 0x14000aac8 : FUN_14000aac8 [was: FUN_14000aac8] ---- */

void FUN_14000aac8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000aacf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_14003d490);
  return;
}




/* ---- 0x14000aad8 : FUN_14000aad8 [was: FUN_14000aad8] ---- */

undefined1 FUN_14000aad8(void)

{
  return 1;
}




/* ---- 0x14000aae0 : FUN_14000aae0 [was: FUN_14000aae0] ---- */

void FUN_14000aae0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1400070e0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1400070f0();
  *puVar1 = *puVar1 | 2;
  return;
}




/* ---- 0x14000aafc : FUN_14000aafc [was: FUN_14000aafc] ---- */

bool FUN_14000aafc(void)

{
  return DAT_14003c310 == 0;
}




/* ---- 0x14000ab08 : FUN_14000ab08 [was: FUN_14000ab08] ---- */

undefined * FUN_14000ab08(void)

{
  return &DAT_14003df80;
}




/* ---- 0x14000ab10 : FUN_14000ab10 [was: FUN_14000ab10] ---- */

undefined * FUN_14000ab10(void)

{
  return &DAT_14003df78;
}




/* ---- 0x14000ab18 : FUN_14000ab18 [was: FUN_14000ab18] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ab18(void)

{
  _DAT_14003d4a0 = 0;
  return;
}




/* ---- 0x14000ab24 : FUN_14000ab24 [was: FUN_14000ab24] ---- */

void FUN_14000ab24(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x14000ab58;
  FUN_14000ab18();
  *(undefined8 *)(puVar4 + -8) = 0x14000ab69;
  FUN_1400280c0((undefined1 (*) [32])local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x14000ab73;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x14000ab8d;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x14000abd1;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x14000ac03;
  FUN_1400280c0((undefined1 (*) [32])(puVar4 + 0x50),0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x14000ac25;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x14000ac42;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x14000ac4d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x14000ac5e;
    FUN_14000ab18();
  }
  return;
}




/* ---- 0x14000ac78 : FUN_14000ac78 [was: FUN_14000ac78] ---- */

bool FUN_14000ac78(void)

{
  HMODULE pHVar1;
  longlong lVar2;
  bool bVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (lVar2 = (longlong)pHVar1[0xf].unused, *(int *)((longlong)&pHVar1->unused + lVar2) != 0x4550))
     || ((*(short *)((longlong)&pHVar1[6].unused + lVar2) != 0x20b ||
         (*(uint *)((longlong)&pHVar1[0x21].unused + lVar2) < 0xf)))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)((longlong)&pHVar1[0x3e].unused + lVar2) != 0;
  }
  return bVar3;
}




/* ---- 0x14000accc : FUN_14000accc [was: FUN_14000accc] ---- */

void FUN_14000accc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000acd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter(FUN_14000acdc);
  return;
}




/* ---- 0x14000acdc : FUN_14000acdc [was: FUN_14000acdc] ---- */

undefined8 FUN_14000acdc(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  piVar2 = (int *)*param_1;
  if (((*piVar2 == -0x1f928c9d) && (piVar2[6] == 4)) &&
     ((iVar1 = piVar2[8], iVar1 == 0x19930520 || ((iVar1 + 0xe66cfadfU < 2 || (iVar1 == 0x1994000)))
      ))) {
    puVar4 = (undefined8 *)FUN_14000c4e8();
    *puVar4 = piVar2;
    uVar3 = param_1[1];
    puVar4 = (undefined8 *)FUN_14000c4fc();
    *puVar4 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_14001a800();
  }
  return 0;
}




/* ---- 0x14000b354 : FUN_14000b354 [was: FUN_14000b354] ---- */

void FUN_14000b354(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_14001b320((LPVOID)*param_1);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}




/* ---- 0x14000b4cc : FUN_14000b4cc [was: FUN_14000b4cc] ---- */

longlong FUN_14000b4cc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  do {
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = uVar1 - 1;
    lVar2 = FUN_14000c540();
    lVar2 = (longlong)*(int *)(param_1 + 0x10) +
            *(longlong *)(lVar2 + 0x60) + (ulonglong)uVar1 * 0x14;
  } while ((param_2 <= *(int *)(lVar2 + 4)) || (*(int *)(lVar2 + 8) < param_2));
  return lVar2;
}




/* ---- 0x14000b530 : FUN_14000b530 [was: FUN_14000b530] ---- */

longlong FUN_14000b530(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  bVar3 = *param_1;
  pbVar11 = param_1 + 1;
  *param_2 = bVar3;
  if ((bVar3 & 4) != 0) {
    bVar4 = *pbVar11;
    pbVar11 = pbVar11 + -(longlong)(char)(&DAT_140029f60)[bVar4 & 0xf];
    *(uint *)(param_2 + 4) = *(uint *)(pbVar11 + -4) >> ((&DAT_140029f70)[bVar4 & 0xf] & 0x1f);
  }
  if ((bVar3 & 8) != 0) {
    uVar5 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    *(undefined4 *)(param_2 + 8) = uVar5;
  }
  if ((bVar3 & 0x10) != 0) {
    uVar5 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar5;
  }
  uVar9 = 0;
  pbVar10 = pbVar11 + 4;
  if ((param_5 == '\0') && ((bVar3 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar11 == 0) {
      pcVar7 = (code *)swi(0x29);
      (*pcVar7)(7);
    }
    else {
      uVar8 = *(byte *)(param_3 + *(int *)pbVar11) & 0xf;
      pbVar11 = (byte *)(param_3 + *(int *)pbVar11) + -(longlong)(char)(&DAT_140029f60)[uVar8];
      puVar1 = (uint *)(pbVar11 + -4);
      if (*puVar1 >> ((&DAT_140029f70)[uVar8] & 0x1f) != 0) {
        do {
          iVar6 = *(int *)pbVar11;
          pbVar2 = pbVar11 + 4;
          pbVar11 = pbVar11 + 8;
          if (iVar6 == param_4) {
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar2;
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *puVar1 >> ((&DAT_140029f70)[uVar8] & 0x1f));
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar11;
  }
  if ((bVar3 & 1) != 0) {
    bVar3 = *pbVar10;
    pbVar10 = pbVar10 + -(longlong)(char)(&DAT_140029f60)[bVar3 & 0xf];
    *(uint *)(param_2 + 0x14) = *(uint *)(pbVar10 + -4) >> ((&DAT_140029f70)[bVar3 & 0xf] & 0x1f);
  }
  return (longlong)pbVar10 - (longlong)param_1;
}




/* ---- 0x14000b65c : FUN_14000b65c [was: FUN_14000b65c] ---- */

bool FUN_14000b65c(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14000c734(param_2,param_1);
  lVar2 = FUN_14000b4cc(param_2,iVar1);
  return lVar2 != 0;
}




/* ---- 0x14000b688 : FUN_14000b688 [was: FUN_14000b688] ---- */

byte FUN_14000b688(undefined8 param_1,byte *param_2)

{
  return *param_2 & 1;
}




/* ---- 0x14000b728 : FUN_14000b728 [was: FUN_14000b728] ---- */

longlong * FUN_14000b728(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  PRUNTIME_FUNCTION p_Var5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong local_res8;
  
  uVar9 = *(uint *)(param_3 + 0xc);
  iVar4 = FUN_14000c734(param_3,param_2);
  *param_4 = *param_1;
  do {
    do {
      if (uVar9 == 0) {
        return param_4;
      }
      uVar9 = uVar9 - 1;
      uVar3 = param_2[1];
      lVar1 = (longlong)*(int *)(param_3 + 0x10) + (ulonglong)uVar9 * 0x14;
    } while ((iVar4 <= *(int *)(lVar1 + 4 + uVar3)) || (*(int *)(lVar1 + 8 + uVar3) < iVar4));
    p_Var5 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    uVar7 = 0;
    lVar10 = (longlong)*(int *)(lVar1 + 0x10 + uVar3) + local_res8;
    uVar2 = *(uint *)(lVar1 + 0xc + uVar3);
    if (uVar2 != 0) {
      piVar8 = (int *)(lVar10 + 0xc);
      do {
        if ((longlong)*piVar8 == (ulonglong)p_Var5->BeginAddress) goto LAB_14000b7d9;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        piVar8 = piVar8 + 5;
      } while (uVar6 < uVar2);
    }
  } while (uVar2 <= (uint)uVar7);
LAB_14000b7d9:
  *param_4 = *(longlong *)((longlong)*(int *)(lVar10 + 0x10 + uVar7 * 0x14) + *param_1);
  return param_4;
}




/* ---- 0x14000b810 : FUN_14000b810 [was: FUN_14000b810] ---- */

longlong * FUN_14000b810(longlong *param_1,undefined8 param_2,byte *param_3,longlong *param_4)

{
  *param_4 = *param_1;
  if ((*param_3 & 1) != 0) {
    *param_4 = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}




/* ---- 0x14000b834 : FUN_14000b834 [was: FUN_14000b834] ---- */

undefined8 *
FUN_14000b834(undefined8 *param_1,undefined8 param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar5 = FUN_14000c734(param_5,param_4);
  uVar8 = 0;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14001a8a0();
  }
  uVar4 = param_4[1];
  lVar12 = (longlong)*(int *)(param_5 + 0x10);
  iVar9 = -1;
  uVar13 = 0xffffffff;
  uVar7 = uVar3;
  while( true ) {
    uVar1 = uVar7 - 1;
    lVar2 = uVar4 + (ulonglong)uVar1 * 0x14;
    if ((*(int *)(lVar2 + 4 + lVar12) < iVar5) && (iVar5 <= *(int *)(lVar2 + 8 + lVar12))) break;
    uVar10 = uVar8;
    uVar7 = uVar1;
    if (uVar1 == 0) {
LAB_14000b8bc:
      piVar6 = (int *)(uVar4 + lVar12);
      do {
        if ((((uVar10 == 0) ||
             ((*(int *)(uVar10 + 4) < *piVar6 && (piVar6[1] <= *(int *)(uVar10 + 8))))) &&
            (*piVar6 <= param_3)) && ((param_3 <= piVar6[1] && (uVar13 = uVar8, iVar9 == -1)))) {
          iVar9 = (int)uVar8;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        piVar6 = piVar6 + 5;
      } while (uVar7 < uVar3);
      iVar5 = 0;
      if (iVar9 != -1) {
        iVar5 = iVar9;
      }
      iVar11 = 0;
      if (iVar9 != -1) {
        iVar11 = (int)uVar13 + 1;
      }
      *param_1 = param_2;
      param_1[1] = CONCAT44(uStack_3c,iVar5);
      param_1[2] = param_2;
      param_1[3] = CONCAT44(uStack_2c,iVar11);
      return param_1;
    }
  }
  uVar10 = uVar4 + (ulonglong)(uVar7 - 1) * 0x14 + lVar12;
  goto LAB_14000b8bc;
}




/* ---- 0x14000b96c : FUN_14000b96c [was: FUN_14000b96c] ---- */

undefined4 * FUN_14000b96c(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  int *local_38;
  int iStack_30;
  
  iVar7 = 0;
  iVar11 = 0;
  iStack_30 = 0;
  iVar6 = 0;
  local_38 = param_2;
  FUN_14000bd10((longlong)param_2,(longlong)&local_38);
  iVar9 = 0;
  if (*param_2 != 0) {
    pbVar10 = *(byte **)(param_2 + 2);
    iVar6 = 0;
    do {
      iVar4 = iVar7;
      if ((((int)*(undefined8 *)(param_2 + 6) <= param_3) &&
          (param_3 <= (int)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20))) &&
         (iVar11 = iVar9, iVar4 = iVar9, iVar6 = iVar9, iVar7 == 0)) {
        iVar11 = 0;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      iVar9 = iVar9 + 1;
      lVar8 = (longlong)(char)(&DAT_140029f60)[*pbVar10 & 0xf];
      bVar1 = (&DAT_140029f70)[*pbVar10 & 0xf];
      pbVar5 = pbVar10 + -lVar8;
      uVar3 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      param_2[6] = uVar3 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_140029f60)[*pbVar5 & 0xf];
      bVar1 = (&DAT_140029f70)[*pbVar5 & 0xf];
      pbVar5 = pbVar10 + (-lVar8 - (longlong)cVar2);
      uVar3 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      param_2[7] = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_140029f70)[*pbVar5 & 0xf];
      pbVar10 = pbVar10 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_140029f60)[*pbVar5 & 0xf]) -
                          lVar8);
      uVar3 = *(uint *)(pbVar10 + -4);
      *(byte **)(param_2 + 2) = pbVar10;
      param_2[8] = uVar3 >> (bVar1 & 0x1f);
      iVar4 = *(int *)pbVar10;
      pbVar10 = pbVar10 + 4;
      *(byte **)(param_2 + 2) = pbVar10;
      param_2[9] = iVar4;
    } while (iVar9 != *param_2);
  }
  iStack_30 = iVar11;
  local_38 = param_2;
  FUN_14000bd10((longlong)param_2,(longlong)&local_38);
  *(int **)param_1 = param_2;
  param_1[2] = iVar11;
  param_1[3] = uStack_4c;
  *(int **)(param_1 + 4) = param_2;
  *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_3c,iVar6 + 1);
  return param_1;
}




/* ---- 0x14000bd10 : FUN_14000bd10 [was: FUN_14000bd10] ---- */

void FUN_14000bd10(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  *(byte **)(param_1 + 8) = pbVar9;
  pbVar7 = pbVar9 + -(longlong)(char)(&DAT_140029f60)[*pbVar9 & 0xf];
  *(uint *)(param_1 + 0x18) = *(uint *)(pbVar7 + -4) >> ((&DAT_140029f70)[*pbVar9 & 0xf] & 0x1f);
  *(byte **)(param_1 + 8) = pbVar7;
  bVar1 = (&DAT_140029f70)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_140029f60)[*pbVar7 & 0xf];
  uVar3 = *(uint *)(pbVar7 + -4);
  *(byte **)(param_1 + 8) = pbVar7;
  *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_140029f70)[*pbVar7 & 0xf];
  pbVar7 = pbVar7 + -(longlong)(char)(&DAT_140029f60)[*pbVar7 & 0xf];
  uVar3 = *(uint *)(pbVar7 + -4);
  pbVar9 = pbVar7 + 4;
  *(byte **)(param_1 + 8) = pbVar7;
  iVar4 = *(int *)(param_2 + 8);
  *(uint *)(param_1 + 0x20) = uVar3 >> (bVar1 & 0x1f);
  uVar5 = *(undefined4 *)pbVar7;
  *(byte **)(param_1 + 8) = pbVar9;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  if (iVar4 != 0) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 8);
    do {
      lVar8 = (longlong)(char)(&DAT_140029f60)[*pbVar9 & 0xf];
      bVar1 = (&DAT_140029f70)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar3 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar3 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_140029f60)[*pbVar7 & 0xf];
      bVar1 = (&DAT_140029f70)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar3 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_140029f70)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_140029f60)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar3 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar3 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      lVar8 = (longlong)(char)(&DAT_140029f60)[*pbVar9 & 0xf];
      bVar1 = (&DAT_140029f70)[*pbVar9 & 0xf];
      pbVar7 = pbVar9 + -lVar8;
      uVar3 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x18) = uVar3 >> (bVar1 & 0x1f);
      cVar2 = (&DAT_140029f60)[*pbVar7 & 0xf];
      bVar1 = (&DAT_140029f70)[*pbVar7 & 0xf];
      pbVar7 = pbVar9 + (-lVar8 - (longlong)cVar2);
      uVar3 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_140029f70)[*pbVar7 & 0xf];
      pbVar9 = pbVar9 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_140029f60)[*pbVar7 & 0xf]) -
                        lVar8);
      uVar3 = *(uint *)(pbVar9 + -4);
      *(byte **)(param_1 + 8) = pbVar9;
      *(uint *)(param_1 + 0x20) = uVar3 >> (bVar1 & 0x1f);
      uVar5 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      *(byte **)(param_1 + 8) = pbVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}




/* ---- 0x14000bf38 : FUN_14000bf38 [was: FUN_14000bf38] ---- */

void FUN_14000bf38(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_14000c540();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_14000c540();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_14000c540();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14000bf8c : FUN_14000bf8c [was: FUN_14000bf8c] ---- */

undefined8 FUN_14000bf8c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  return *(undefined8 *)(lVar1 + 0x60);
}




/* ---- 0x14000bfa0 : FUN_14000bfa0 [was: FUN_14000bfa0] ---- */

undefined8 FUN_14000bfa0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  return *(undefined8 *)(lVar1 + 0x68);
}




/* ---- 0x14000bfb4 : FUN_14000bfb4 [was: FUN_14000bfb4] ---- */

void FUN_14000bfb4(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  return;
}




/* ---- 0x14000bfcc : FUN_14000bfcc [was: FUN_14000bfcc] ---- */

void FUN_14000bfcc(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  return;
}




/* ---- 0x14000c06c : FUN_14000c06c [was: FUN_14000c06c] ---- */

void FUN_14000c06c(int *param_1,__uint64 param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  __uint64 local_res8;
  FuncInfo4 local_28 [4];
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_28[0] = (FuncInfo4)0x0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_res8 = param_2;
  lVar2 = FUN_14000c540();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xe);
  lVar2 = FUN_14000c540();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_14000c540();
  FUN_14000b530((byte *)((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60)),
                (byte *)local_28,*(longlong *)(param_4 + 8),**(int **)(param_4 + 0x10),'\0');
  FUN_14000e690(param_1,&local_res8,param_3,param_4,local_28,0,0,0);
  return;
}




/* ---- 0x14000c140 : FUN_14000c140 [was: FUN_14000c140] ---- */

undefined8 FUN_14000c140(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  PEXCEPTION_RECORD local_38;
  longlong local_30;
  
  __except_validate_context_record(param_3);
  lVar2 = param_4[1];
  puVar3 = (uint *)param_4[7];
  uVar10 = *param_4 - lVar2;
  uVar8 = *(uint *)(param_4 + 9);
  local_38 = param_1;
  local_30 = param_3;
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    for (; uVar8 < *puVar3; uVar8 = uVar8 + 1) {
      uVar5 = (ulonglong)uVar8;
      if (((puVar3[uVar5 * 4 + 1] <= uVar10) && (uVar10 < puVar3[uVar5 * 4 + 2])) &&
         (puVar3[uVar5 * 4 + 4] != 0)) {
        if (puVar3[uVar5 * 4 + 3] != 1) {
          iVar4 = (*(code *)((ulonglong)puVar3[uVar5 * 4 + 3] + lVar2))(&local_38,param_2);
          if (iVar4 < 0) {
            return 0;
          }
          if (iVar4 < 1) goto LAB_14000c267;
        }
        if ((param_1->ExceptionCode == 0xe06d7363) &&
           (uVar5 = FUN_140027660(0x14002a0b8), (int)uVar5 != 0)) {
          FUN_14000c3b4((int *)param_1);
        }
        FUN_14000f830();
        RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar3[((ulonglong)uVar8 + 1) * 4] + lVar2),param_1,
                    (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                    (PUNWIND_HISTORY_TABLE)param_4[8]);
        FUN_14000f860();
      }
LAB_14000c267:
    }
  }
  else {
    uVar5 = param_4[4] - lVar2;
    for (; uVar1 = *puVar3, uVar8 < uVar1; uVar8 = uVar8 + 1) {
      uVar9 = (ulonglong)uVar8;
      if ((puVar3[uVar9 * 4 + 1] <= uVar10) && (uVar10 < puVar3[uVar9 * 4 + 2])) {
        if ((param_1->ExceptionFlags & 0x20) != 0) {
          uVar7 = 0;
          if (uVar1 != 0) {
            do {
              if ((((puVar3[uVar7 * 4 + 1] <= uVar5) && (uVar5 < puVar3[uVar7 * 4 + 2])) &&
                  (puVar3[uVar7 * 4 + 4] == puVar3[uVar9 * 4 + 4])) &&
                 (puVar3[uVar7 * 4 + 3] == puVar3[uVar9 * 4 + 3])) break;
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar6 < uVar1);
          }
          if ((uint)uVar7 != *puVar3) {
            return 1;
          }
        }
        if (puVar3[((ulonglong)uVar8 + 1) * 4] == 0) {
          *(uint *)(param_4 + 9) = uVar8 + 1;
          (*(code *)((ulonglong)puVar3[(ulonglong)uVar8 * 4 + 3] + lVar2))
                    (CONCAT71((int7)((ulonglong)uVar8 * 2 >> 8),1));
        }
        else if ((uVar5 == puVar3[((ulonglong)uVar8 + 1) * 4]) &&
                ((param_1->ExceptionFlags & 0x20) != 0)) {
          return 1;
        }
      }
    }
  }
  return 1;
}




/* ---- 0x14000c428 : FUN_14000c428 [was: FUN_14000c428] ---- */

void FUN_14000c428(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00014000c428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}




/* ---- 0x14000c480 : FUN_14000c480 [was: FUN_14000c480] ---- */

undefined8 FUN_14000c480(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    lVar3 = FUN_14000c540();
    if (0 < *(int *)(lVar3 + 0x30)) {
      lVar3 = FUN_14000c540();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    lVar3 = FUN_14000c540();
    *(int **)(lVar3 + 0x20) = piVar1;
    uVar2 = param_1[1];
    lVar3 = FUN_14000c540();
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_14001a800();
  }
  return 0;
}




/* ---- 0x14000c4e8 : FUN_14000c4e8 [was: FUN_14000c4e8] ---- */

longlong FUN_14000c4e8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  return lVar1 + 0x20;
}




/* ---- 0x14000c4fc : FUN_14000c4fc [was: FUN_14000c4fc] ---- */

longlong FUN_14000c4fc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  return lVar1 + 0x28;
}




/* ---- 0x14000c510 : Unwind@14000c510 [was: Unwind@14000c510] ---- */

void Unwind_14000c510(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_14001a800();
}




/* ---- 0x14000c520 : FUN_14000c520 [was: FUN_14000c520] ---- */

void FUN_14000c520(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &DAT_14003d4c0)) {
    thunk_FUN_14001b320(param_1);
  }
  return;
}




/* ---- 0x14000c540 : FUN_14000c540 [was: FUN_14000c540] ---- */

void FUN_14000c540(void)

{
  LPVOID pvVar1;
  
  pvVar1 = FUN_14000c55c();
  if (pvVar1 != (LPVOID)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14000c698 : FUN_14000c698 [was: FUN_14000c698] ---- */

void FUN_14000c698(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) == -2) {
    FUN_14000c744(param_3,(longlong)param_2,*param_2);
  }
  return;
}




/* ---- 0x14000c734 : FUN_14000c734 [was: FUN_14000c734] ---- */

void FUN_14000c734(longlong param_1,ulonglong *param_2)

{
  FUN_14000c744(param_1,(longlong)param_2,*param_2);
  return;
}




/* ---- 0x14000c73c : FUN_14000c73c [was: FUN_14000c73c] ---- */

void FUN_14000c73c(longlong param_1,ulonglong *param_2)

{
  FUN_14000c7ac(param_1,(longlong)param_2,*param_2);
  return;
}




/* ---- 0x14000c744 : FUN_14000c744 [was: FUN_14000c744] ---- */

undefined4 FUN_14000c744(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 + lVar4 != 0) {
      uVar3 = 0;
      if (*(uint *)(param_1 + 0x14) != 0) {
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar4 + uVar3 * 8 + lVar1) + lVar1)) break;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x14));
        if ((int)uVar3 != 0) {
          return *(undefined4 *)(lVar1 + (ulonglong)((int)uVar3 - 1) * 8 + 4 + lVar4);
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14000c7ac : FUN_14000c7ac [was: FUN_14000c7ac] ---- */

int FUN_14000c7ac(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x10) + *(longlong *)(param_2 + 8));
    uVar5 = 0;
    iVar3 = -1;
    uVar2 = *pbVar6 & 0xf;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_140029f60)[uVar2];
    puVar1 = (uint *)(pbVar6 + -4);
    if (*puVar1 >> ((&DAT_140029f70)[uVar2] & 0x1f) != 0) {
      do {
        pbVar7 = pbVar6 + -(longlong)(char)(&DAT_140029f60)[*pbVar6 & 0xf];
        uVar4 = uVar4 + (*(uint *)(pbVar7 + -4) >> ((&DAT_140029f70)[*pbVar6 & 0xf] & 0x1f));
        if (param_3 < (ulonglong)uVar4 + (ulonglong)**(uint **)(param_2 + 0x10) +
                      *(longlong *)(param_2 + 8)) break;
        uVar5 = uVar5 + 1;
        pbVar6 = pbVar7 + -(longlong)(char)(&DAT_140029f60)[*pbVar7 & 0xf];
        iVar3 = (*(uint *)(pbVar6 + -4) >> ((&DAT_140029f70)[*pbVar7 & 0xf] & 0x1f)) - 1;
      } while (uVar5 < *puVar1 >> ((&DAT_140029f70)[uVar2] & 0x1f));
      if (uVar5 != 0) {
        return iVar3;
      }
      return -1;
    }
  }
  return -1;
}




/* ---- 0x14000cc88 : FUN_14000cc88 [was: FUN_14000cc88] ---- */

void FUN_14000cc88(longlong param_1,longlong *param_2,byte *param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined *UNRECOVERED_JUMPTABLE;
  longlong *plVar5;
  
  UNRECOVERED_JUMPTABLE = (undefined *)0x0;
  plVar5 = param_2;
  if (-1 < *(int *)param_3) {
    plVar5 = (longlong *)((longlong)*(int *)(param_3 + 8) + *param_2);
  }
  cVar1 = FUN_14000c89c(param_1,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 != 0) {
      lVar4 = FUN_14000bfa0();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar4 + iVar2);
    }
    FUN_14000f660(plVar5,UNRECOVERED_JUMPTABLE,lVar3);
  }
  else if (iVar2 == 2) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 != 0) {
      lVar4 = FUN_14000bfa0();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar4 + iVar2);
    }
    FUN_14000f66c(plVar5,UNRECOVERED_JUMPTABLE,lVar3,1);
  }
  return;
}




/* ---- 0x14000cd48 : FUN_14000cd48 [was: FUN_14000cd48] ---- */

void FUN_14000cd48(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined *UNRECOVERED_JUMPTABLE;
  longlong *plVar5;
  
  UNRECOVERED_JUMPTABLE = (undefined *)0x0;
  plVar5 = param_2;
  if (-1 < *(int *)(param_3 + 4)) {
    plVar5 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  cVar1 = FUN_14000ca90(param_1,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 != 0) {
      lVar4 = FUN_14000bfa0();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar4 + iVar2);
    }
    FUN_14000f660(plVar5,UNRECOVERED_JUMPTABLE,lVar3);
  }
  else if (iVar2 == 2) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 != 0) {
      lVar4 = FUN_14000bfa0();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar4 + iVar2);
    }
    FUN_14000f66c(plVar5,UNRECOVERED_JUMPTABLE,lVar3,1);
  }
  return;
}




/* ---- 0x14000ce0c : FUN_14000ce0c [was: FUN_14000ce0c] ---- */

void FUN_14000ce0c(ULONG_PTR param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                  ULONG_PTR param_5,byte *param_6,byte *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res10;
  ULONG_PTR local_res18;
  byte in_stack_00000060;
  undefined4 in_stack_ffffffffffffffa4;
  
  local_res18 = param_3;
  plVar4 = FUN_14000b728(param_2,param_4,param_5,&local_res10);
  if (param_7 != (byte *)0x0) {
    FUN_14000cc88(param_1,plVar4,param_6,param_7);
  }
  iVar1 = *(int *)(param_6 + 0xc);
  iVar2 = param_8[2];
  iVar3 = *param_8;
  lVar5 = FUN_14000bf8c();
  FUN_14000baec(param_2,param_1,local_res18,(ULONG_PTR)plVar4,lVar5 + iVar1,param_5,iVar3,
                CONCAT44(in_stack_ffffffffffffffa4,iVar2),param_6,param_4,in_stack_00000060);
  return;
}




/* ---- 0x14000cee4 : FUN_14000cee4 [was: FUN_14000cee4] ---- */

void FUN_14000cee4(ULONG_PTR param_1,longlong *param_2,ULONG_PTR param_3,undefined8 *param_4,
                  byte *param_5,longlong param_6,byte *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res10;
  ULONG_PTR local_res18;
  byte in_stack_00000060;
  
  local_res18 = param_3;
  plVar4 = FUN_14000b810(param_2,param_4,param_5,&local_res10);
  if (param_7 != (byte *)0x0) {
    FUN_14000cd48(param_1,plVar4,param_6,param_7);
  }
  iVar1 = *(int *)(param_6 + 0x10);
  iVar2 = param_8[2];
  iVar3 = *param_8;
  lVar5 = FUN_14000bf8c();
  FUN_14000bbf0(param_2,param_1,local_res18,(ULONG_PTR)plVar4,lVar5 + iVar1,param_5,iVar3,iVar2,
                param_6,param_4,in_stack_00000060);
  return;
}




/* ---- 0x14000d9e4 : FUN_14000d9e4 [was: FUN_14000d9e4] ---- */

void FUN_14000d9e4(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,
                  ULONG_PTR param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  PVOID pvVar4;
  byte *pbVar5;
  ULONG_PTR local_98;
  ulonglong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  int local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint local_48;
  
  if (*param_1 != -0x7ffffffd) {
    lVar3 = FUN_14000c540();
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      pvVar4 = EncodePointer((PVOID)0x0);
      lVar3 = FUN_14000c540();
      if ((((*(PVOID *)(lVar3 + 0x10) != pvVar4) && (*param_1 != -0x1fbcb0b3)) &&
          (*param_1 != -0x1fbcbcae)) && (iVar1 = FUN_14000b424(param_1,param_2,param_3), iVar1 != 0)
         ) {
        return;
      }
    }
    local_90 = param_4[1];
    local_98 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
    FUN_14000b834(&local_60,&local_98,param_6,param_4,param_5);
    uVar2 = (uint)uStack_58;
    local_88 = local_60;
    uStack_80 = uStack_58;
    if (uVar2 < local_48) {
      do {
        lVar3 = (longlong)*(int *)(*local_88 + 0x10) + (ulonglong)uVar2 * 0x14;
        local_78 = *(undefined1 (*) [16])(lVar3 + local_60[1]);
        local_68 = *(int *)(lVar3 + 0x10 + local_60[1]);
        if ((local_78._0_4_ <= param_6) && (param_6 <= local_78._4_4_)) {
          pbVar5 = (byte *)((param_4[1] - 0x14) +
                           (longlong)local_68 + (local_78._8_8_ >> 0x20) * 0x14);
          iVar1 = *(int *)(pbVar5 + 4);
          if ((iVar1 != 0) && (lVar3 = FUN_14000bf8c(), lVar3 + iVar1 != 0)) {
            iVar1 = *(int *)(pbVar5 + 4);
            if (iVar1 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = FUN_14000bf8c();
              lVar3 = lVar3 + iVar1;
            }
            if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_14000dc0d;
          }
          if ((*pbVar5 & 0x40) == 0) {
            FUN_14000ce0c((ULONG_PTR)param_1,param_2,param_3,param_4,param_5,pbVar5,(byte *)0x0,
                          (int *)local_78);
          }
        }
LAB_14000dc0d:
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_48);
    }
  }
  return;
}




/* ---- 0x14000e690 : FUN_14000e690 [was: FUN_14000e690] ---- */

ulonglong FUN_14000e690(int *param_1,__uint64 *param_2,ULONG_PTR param_3,
                       _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,int param_6,
                       undefined8 param_7,byte param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14000e3e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar2 = FUN_14000c540();
  *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1 & 0xffffffff;
}




/* ---- 0x14000e6dc : FUN_14000e6dc [was: FUN_14000e6dc] ---- */

HandlerMap4 *
FUN_14000e6dc(HandlerMap4 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = (HandlerMap4)0x0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(longlong *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  if (*(int *)(param_2 + 0xc) == 0) {
    *(undefined4 *)param_1 = 0;
  }
  else {
    pbVar1 = (byte *)(*(int *)(param_2 + 0xc) + param_3);
    *(byte **)(param_1 + 8) = pbVar1;
    lVar2 = (longlong)pbVar1 - (longlong)(char)(&DAT_140029f60)[*pbVar1 & 0xf];
    *(uint *)param_1 = *(uint *)(lVar2 + -4) >> ((&DAT_140029f70)[*pbVar1 & 0xf] & 0x1f);
    *(longlong *)(param_1 + 8) = lVar2;
    *(longlong *)(param_1 + 0x10) = lVar2;
    FH4::HandlerMap4::DecompHandler(param_1);
  }
  return param_1;
}




/* ---- 0x14000e760 : FUN_14000e760 [was: FUN_14000e760] ---- */

uint * FUN_14000e760(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    *param_1 = 0;
  }
  else {
    pbVar3 = (byte *)(*(int *)(param_2 + 0xc) + param_3);
    *(byte **)(param_1 + 2) = pbVar3;
    bVar1 = (&DAT_140029f70)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_140029f60)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    *param_1 = uVar2 >> (bVar1 & 0x1f);
    *(byte **)(param_1 + 4) = pbVar3;
    bVar1 = (&DAT_140029f70)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_140029f60)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    param_1[6] = uVar2 >> (bVar1 & 0x1f);
    bVar1 = (&DAT_140029f70)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_140029f60)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    param_1[7] = uVar2 >> (bVar1 & 0x1f);
    puVar4 = (uint *)(pbVar3 + -(longlong)(char)(&DAT_140029f60)[*pbVar3 & 0xf]);
    param_1[8] = puVar4[-1] >> ((&DAT_140029f70)[*pbVar3 & 0xf] & 0x1f);
    *(uint **)(param_1 + 2) = puVar4;
    uVar2 = *puVar4;
    *(uint **)(param_1 + 2) = puVar4 + 1;
    param_1[9] = uVar2;
  }
  return param_1;
}




/* ---- 0x14000e8a4 : FUN_14000e8a4 [was: FUN_14000e8a4] ---- */

undefined8 FUN_14000e8a4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_48 [2];
  
  lVar6 = FUN_14000c540();
  uVar1 = *(undefined8 *)(lVar6 + 0x28);
  lVar6 = FUN_14000c540();
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  piVar3 = *(int **)(param_1 + 0x50);
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar8 = *(longlong *)(param_1 + 0x40);
  plVar4 = *(longlong **)(param_1 + 0x28);
  __except_validate_context_record(lVar8);
  lVar7 = FUN_14000c540();
  *(int **)(lVar7 + 0x20) = piVar3;
  lVar7 = FUN_14000c540();
  *(longlong *)(lVar7 + 0x28) = lVar8;
  lVar8 = FUN_14000c540();
  puVar9 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14000c540();
  }
  uVar10 = _CallSettingFrame();
  FUN_14000bf38((longlong)puVar9);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) &&
      ((piVar3[8] == 0x19930520 || (piVar3[8] + 0xe66cfadfU < 2)))) &&
     (iVar5 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar3 + 10)), iVar5 != 0)) {
    FUN_14000c3b4(piVar3);
  }
  lVar8 = FUN_14000c540();
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  lVar8 = FUN_14000c540();
  *(undefined8 *)(lVar8 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(lVar6 + 0x1c) + *plVar4) = 0xfffffffffffffffe;
  return uVar10;
}




/* ---- 0x14000ea90 : FUN_14000ea90 [was: FUN_14000ea90] ---- */

longlong FUN_14000ea90(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong local_58 [4];
  
  lVar6 = FUN_14000c540();
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  lVar6 = FUN_14000c540();
  uVar3 = *(undefined8 *)(lVar6 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  lVar6 = *(longlong *)(param_1 + 0x40);
  local_58[0] = *(longlong *)(param_1 + 0x48);
  local_58[1] = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  __except_validate_context_record(lVar6);
  lVar7 = FUN_14000c540();
  *(int **)(lVar7 + 0x20) = piVar4;
  lVar7 = FUN_14000c540();
  *(longlong *)(lVar7 + 0x28) = lVar6;
  lVar6 = FUN_14000c540();
  puVar8 = _CreateFrameInfo(local_58 + 2,*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14000c540();
  }
  lVar6 = FUN_14000fc80();
  if ((lVar6 < 2) && (lVar6 = local_58[lVar6], lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_14001a8a0();
  }
  FUN_14000fcb0();
  FUN_14000bf38((longlong)puVar8);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) &&
      ((piVar4[8] == 0x19930520 || (piVar4[8] + 0xe66cfadfU < 2)))) &&
     (iVar5 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar4 + 10)), iVar5 != 0)) {
    FUN_14000c3b4(piVar4);
  }
  lVar7 = FUN_14000c540();
  *(undefined8 *)(lVar7 + 0x20) = uVar3;
  lVar7 = FUN_14000c540();
  *(undefined8 *)(lVar7 + 0x28) = uVar2;
  lVar7 = FUN_14000c540();
  *(undefined4 *)(lVar7 + 0x78) = uVar1;
  lVar7 = FUN_14000c540();
  *(undefined4 *)(lVar7 + 0x78) = 0xfffffffe;
  return lVar6;
}




/* ---- 0x14000ee58 : FUN_14000ee58 [was: FUN_14000ee58] ---- */

undefined8 FUN_14000ee58(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if ((piVar1[6] == 4) &&
       (((piVar1[8] == 0x19930520 || (piVar1[8] + 0xe66cfadfU < 2)) &&
        (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))))) {
      *param_3 = 1;
    }
    if ((((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
        ((piVar1[8] == 0x19930520 || (piVar1[8] + 0xe66cfadfU < 2)))) &&
       (*(longlong *)(piVar1 + 0xc) == 0)) {
      lVar2 = FUN_14000c540();
      *(undefined4 *)(lVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}




/* ---- 0x14000ef20 : FUN_14000ef20 [was: FUN_14000ef20] ---- */

void FUN_14000ef20(__uint64 *param_1,ulonglong *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_14000bf8c();
  iVar2 = FUN_14000c698((longlong *)param_1,param_2,(longlong)param_3);
  lVar4 = FUN_14000c540();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
    lVar4 = FUN_14000bf8c();
    lVar5 = (longlong)iVar2 * 8;
    iVar2 = *(int *)((int)param_3->dispUnwindMap + lVar5 + lVar4);
    iVar1 = param_3->dispUnwindMap;
    lVar4 = FUN_14000bf8c();
    if (*(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1) == 0) {
      lVar4 = 0;
    }
    else {
      iVar1 = param_3->dispUnwindMap;
      lVar4 = FUN_14000bf8c();
      iVar1 = *(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1);
      lVar4 = FUN_14000bf8c();
      lVar4 = lVar4 + iVar1;
    }
    if (lVar4 != 0) {
      __FrameHandler3::SetState(param_1,param_3,iVar2);
      iVar1 = param_3->dispUnwindMap;
      lVar4 = FUN_14000bf8c();
      if (*(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1) != 0) {
        FUN_14000bf8c();
        FUN_14000bf8c();
      }
      _CallSettingFrame();
      FUN_14000bfb4(uVar3);
    }
  }
  lVar4 = FUN_14000c540();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_14000c540();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_14001a8a0();
  }
  __FrameHandler3::SetState(param_1,param_3,iVar2);
  return;
}




/* ---- 0x14000f450 : FUN_14000f450 [was: FUN_14000f450] ---- */

undefined1 FUN_14000f450(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  undefined1 uVar9;
  int iVar10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14001a8a0();
  }
  uVar9 = 0;
  iVar7 = 0;
  if (0 < *param_2) {
    do {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_14000bfa0();
      piVar8 = (int *)((longlong)iVar10 + lVar4 + 4);
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_14000bfa0();
      iVar10 = *(int *)(lVar4 + iVar10);
      if (0 < iVar10) {
        do {
          iVar1 = *piVar8;
          lVar4 = FUN_14000bfa0();
          iVar2 = param_2[1];
          pbVar3 = *(byte **)(param_1 + 0x30);
          lVar5 = FUN_14000bf8c();
          uVar6 = FUN_14000df50((byte *)(lVar5 + (longlong)iVar7 * 0x14 + (longlong)iVar2),
                                (byte *)(iVar1 + lVar4),pbVar3);
          if ((int)uVar6 != 0) {
            uVar9 = 1;
            break;
          }
          iVar10 = iVar10 + -1;
          piVar8 = piVar8 + 1;
        } while (0 < iVar10);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_2);
  }
  return uVar9;
}




/* ---- 0x14000f538 : FUN_14000f538 [was: FUN_14000f538] ---- */

ulonglong FUN_14000f538(int *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined4 extraout_var;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *param_1) {
    lVar4 = 0;
    do {
      iVar1 = param_1[1];
      lVar2 = FUN_14000bf8c();
      if (*(int *)(lVar2 + lVar4 + 4 + (longlong)iVar1) == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar2 = FUN_14000bf8c();
        iVar1 = *(int *)(lVar2 + lVar4 + 4 + (longlong)iVar1);
        lVar2 = FUN_14000bf8c();
        lVar2 = lVar2 + iVar1;
      }
      iVar1 = FUN_14000c39c(lVar2 + 8,0x14003ce28);
      in_RAX = CONCAT44(extraout_var,iVar1);
      if (iVar1 == 0) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x14;
    } while (iVar3 < *param_1);
  }
  return in_RAX & 0xffffffffffffff00;
}




/* ---- 0x14000f660 : FUN_14000f660 [was: FUN_14000f660] ---- */

void FUN_14000f660(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014000f666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}




/* ---- 0x14000f66c : FUN_14000f66c [was: FUN_14000f66c] ---- */

void FUN_14000f66c(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3,
                  undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014000f678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}




/* ---- 0x14000f67c : FUN_14000f67c [was: FUN_14000f67c] ---- */

void FUN_14000f67c(UWMap4 *param_1,int param_2,int param_3,longlong *param_4,longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  uchar *puVar5;
  int iVar6;
  uchar *puVar7;
  uchar *local_res8;
  int local_res10;
  
  local_res8 = *(uchar **)(param_1 + 8);
  bVar3 = false;
  bVar4 = false;
  iVar6 = 0;
  puVar5 = local_res8 + -1;
  puVar7 = puVar5;
  local_res10 = param_2;
  if (0 < *(int *)param_1) {
    do {
      if (iVar6 == param_2) {
        bVar3 = true;
        puVar5 = local_res8;
      }
      if (iVar6 == param_3) {
        bVar4 = true;
        puVar7 = local_res8;
      }
      if ((bVar3) && (bVar4)) break;
      FH4::UWMap4::ReadEntry(param_1,&local_res8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)param_1);
  }
  puVar1 = (undefined8 *)*param_4;
  param_4[1] = (longlong)puVar5;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = uVar2;
  puVar1 = (undefined8 *)*param_5;
  param_5[1] = (longlong)puVar7;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = uVar2;
  return;
}




/* ---- 0x14000f74c : FUN_14000f74c [was: FUN_14000f74c] ---- */

int FUN_14000f74c(undefined8 *param_1,int param_2,longlong param_3,int param_4,undefined8 *param_5)

{
  ulonglong uVar1;
  UWMap4 *pUVar2;
  uchar *puStack_10;
  
  uVar1 = param_5[1];
  if ((*(ulonglong *)(param_3 + 8) < uVar1) || (uVar1 < (ulonglong)param_1[1])) {
    param_2 = -1;
  }
  else if ((longlong)(uVar1 - param_1[1]) < (longlong)(*(longlong *)(param_3 + 8) - uVar1)) {
    pUVar2 = (UWMap4 *)*param_1;
    puStack_10 = (uchar *)param_1[1];
    if ((ulonglong)param_1[1] < uVar1) {
      do {
        FH4::UWMap4::ReadEntry(pUVar2,&puStack_10);
        param_2 = param_2 + 1;
      } while (puStack_10 < (uchar *)param_5[1]);
    }
  }
  else {
    pUVar2 = (UWMap4 *)*param_5;
    puStack_10 = (uchar *)param_5[1];
    param_2 = param_4;
    if (uVar1 < *(ulonglong *)(param_3 + 8)) {
      do {
        FH4::UWMap4::ReadEntry(pUVar2,&puStack_10);
        param_4 = param_4 + -1;
        param_2 = param_4;
      } while (puStack_10 < *(uchar **)(param_3 + 8));
    }
  }
  return param_2;
}




/* ---- 0x14000f830 : FUN_14000f830 [was: FUN_14000f830] ---- */

void FUN_14000f830(void)

{
  FUN_14000f850();
  return;
}




/* ---- 0x14000f850 : FUN_14000f850 [was: FUN_14000f850] ---- */

void FUN_14000f850(void)

{
  return;
}




/* ---- 0x14000f860 : FUN_14000f860 [was: FUN_14000f860] ---- */

void FUN_14000f860(void)

{
  return;
}




/* ---- 0x14000fc80 : FUN_14000fc80 [was: FUN_14000fc80] ---- */

void FUN_14000fc80(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14000f830();
  (*pcVar1)();
  FUN_14000f860();
  return;
}




/* ---- 0x14000fcb0 : FUN_14000fcb0 [was: FUN_14000fcb0] ---- */

void FUN_14000fcb0(void)

{
  FUN_14000f830();
  return;
}




/* ---- 0x14000fd30 : FUN_14000fd30 [was: FUN_14000fd30] ---- */

ulonglong FUN_14000fd30(byte param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  if ((param_1 & 4) == 0) {
    if ((param_1 & 1) != 0) {
      if ((param_1 & 2) == 0) {
        return CONCAT71(0x7fffffffffffff,0x7fffffffffffffff < param_2);
      }
      in_RAX = 0x8000000000000000;
      if (0x8000000000000000 < param_2) goto LAB_14000fd62;
    }
    return in_RAX & 0xffffffffffffff00;
  }
LAB_14000fd62:
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* ---- 0x14000fd68 : FUN_14000fd68 [was: FUN_14000fd68] ---- */

uint FUN_14000fd68(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  __acrt_ptd *p_Var11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  pbVar2 = (byte *)*param_2;
  uVar13 = (ulonglong)param_3;
  if (pbVar2 == (byte *)0x0) {
    p_Var11 = FUN_14001abbc();
    *(undefined4 *)p_Var11 = 0x16;
    FUN_14001925c();
LAB_14000fddd:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_14000fddd;
  }
  uVar14 = (uint)*pbVar2;
  *param_2 = (longlong)(pbVar2 + 1);
  if ((char)param_1[5] == '\0') {
    FUN_140010390(param_1);
  }
  while (uVar7 = FUN_140010408(uVar14,8,(_locale_t)(param_1 + 3)), uVar7 != 0) {
    uVar14 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  uVar7 = param_4 & 0xff | 2;
  if ((char)uVar14 != '-') {
    uVar7 = param_4 & 0xff;
  }
  if ((uVar14 - 0x2b & 0xfd) == 0) {
    uVar14 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) == 0) {
    cVar1 = (char)uVar14;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar8 = cVar1 + -0x30;
LAB_14000fe8d:
      if (iVar8 != 0) goto LAB_14000fede;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
      *param_2 = (longlong)(pcVar3 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar3;
        uVar9 = 8;
        if (param_3 != 0) {
          uVar9 = param_3;
        }
        uVar13 = (ulonglong)uVar9;
        if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
          p_Var11 = FUN_14001abbc();
          *(undefined4 *)p_Var11 = 0x16;
          FUN_14001925c();
        }
        goto LAB_14000feea;
      }
      uVar14 = (uint)(byte)pcVar3[1];
      *param_2 = (longlong)(pcVar3 + 2);
      uVar9 = 0x10;
    }
    else {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        iVar8 = cVar1 + -0x57;
        goto LAB_14000fe8d;
      }
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        iVar8 = cVar1 + -0x37;
        goto LAB_14000fe8d;
      }
LAB_14000fede:
      uVar9 = 10;
    }
    if (param_3 != 0) {
      uVar9 = param_3;
    }
    uVar13 = (ulonglong)uVar9;
  }
LAB_14000feea:
  uVar9 = 0;
  while( true ) {
    bVar6 = (byte)uVar14;
    if ((byte)(bVar6 - 0x30) < 10) {
      uVar12 = (int)(char)bVar6 - 0x30;
    }
    else if ((byte)(bVar6 + 0x9f) < 0x1a) {
      uVar12 = (int)(char)bVar6 - 0x57;
    }
    else if ((byte)(bVar6 + 0xbf) < 0x1a) {
      uVar12 = (int)(char)bVar6 - 0x37;
    }
    else {
      uVar12 = 0xffffffff;
    }
    pbVar4 = (byte *)*param_2;
    if ((uint)uVar13 <= uVar12) break;
    uVar14 = (uint)*pbVar4;
    uVar10 = uVar9 * (uint)uVar13;
    uVar12 = uVar10 + uVar12;
    *param_2 = (longlong)(pbVar4 + 1);
    uVar7 = uVar7 | (uint)(uVar12 < uVar10 || (uint)(0xffffffff / uVar13) < uVar9) << 2 | 8;
    uVar9 = uVar12;
  }
  *param_2 = (longlong)(pbVar4 + -1);
  if ((bVar6 != 0) && (pbVar4[-1] != bVar6)) {
    p_Var11 = FUN_14001abbc();
    *(undefined4 *)p_Var11 = 0x16;
    FUN_14001925c();
  }
  if ((uVar7 & 8) == 0) {
    *param_2 = (longlong)pbVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pbVar2;
    return 0;
  }
  if ((uVar7 & 4) == 0) {
    if ((uVar7 & 1) == 0) {
      if ((uVar7 & 2) == 0) goto LAB_14000ffd9;
LAB_14000fffa:
      uVar9 = -uVar9;
      goto LAB_14000ffd9;
    }
    if ((uVar7 & 2) == 0) {
      if (uVar9 < 0x80000000) goto LAB_14000ffd9;
    }
    else if (uVar9 < 0x80000001) goto LAB_14000fffa;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  uVar9 = 0xffffffff;
  if ((uVar7 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar7 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
LAB_14000ffd9:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar9;
  }
  return uVar9;
}




/* ---- 0x140010044 : FUN_140010044 [was: FUN_140010044] ---- */

ulonglong FUN_140010044(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  uint uVar8;
  int iVar9;
  __acrt_ptd *p_Var10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  byte bVar17;
  
  pbVar2 = (byte *)*param_2;
  if (pbVar2 == (byte *)0x0) {
    p_Var10 = FUN_14001abbc();
    *(undefined4 *)p_Var10 = 0x16;
    FUN_14001925c();
LAB_1400100b9:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1400100b9;
  }
  uVar16 = (uint)*pbVar2;
  *param_2 = (longlong)(pbVar2 + 1);
  if ((char)param_1[5] == '\0') {
    FUN_140010390(param_1);
  }
  while (uVar8 = FUN_140010408(uVar16,8,(_locale_t)(param_1 + 3)), uVar8 != 0) {
    uVar16 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  bVar17 = param_4 | 2;
  if ((char)uVar16 != '-') {
    bVar17 = param_4;
  }
  if ((uVar16 - 0x2b & 0xfd) == 0) {
    uVar16 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  uVar8 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1400101cb;
  cVar1 = (char)uVar16;
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar9 = cVar1 + -0x30;
LAB_14001016e:
    if (iVar9 != 0) goto LAB_1400101bf;
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *param_2 = (longlong)(pcVar3 + 1);
    if ((cVar1 + 0xa8U & 0xdf) != 0) {
      *param_2 = (longlong)pcVar3;
      uVar8 = 8;
      if (param_3 != 0) {
        uVar8 = param_3;
      }
      if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
        p_Var10 = FUN_14001abbc();
        *(undefined4 *)p_Var10 = 0x16;
        FUN_14001925c();
      }
      goto LAB_1400101cb;
    }
    uVar16 = (uint)(byte)pcVar3[1];
    *param_2 = (longlong)(pcVar3 + 2);
    uVar8 = 0x10;
  }
  else {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      iVar9 = cVar1 + -0x57;
      goto LAB_14001016e;
    }
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      iVar9 = cVar1 + -0x37;
      goto LAB_14001016e;
    }
LAB_1400101bf:
    uVar8 = 10;
  }
  if (param_3 != 0) {
    uVar8 = param_3;
  }
LAB_1400101cb:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)(int)uVar8;
  uVar15 = 0;
  while( true ) {
    bVar7 = (byte)uVar16;
    if ((byte)(bVar7 - 0x30) < 10) {
      uVar13 = (int)(char)bVar7 - 0x30;
    }
    else if ((byte)(bVar7 + 0x9f) < 0x1a) {
      uVar13 = (int)(char)bVar7 - 0x57;
    }
    else if ((byte)(bVar7 + 0xbf) < 0x1a) {
      uVar13 = (int)(char)bVar7 - 0x37;
    }
    else {
      uVar13 = 0xffffffff;
    }
    pbVar4 = (byte *)*param_2;
    if (uVar8 <= uVar13) break;
    uVar16 = (uint)*pbVar4;
    uVar11 = (longlong)(int)uVar8 * uVar15;
    uVar14 = uVar13 + uVar11;
    *param_2 = (longlong)(pbVar4 + 1);
    bVar17 = bVar17 | (uVar14 < uVar11 ||
                      SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar6,0) < uVar15
                      ) << 2 | 8U;
    uVar15 = uVar14;
  }
  *param_2 = (longlong)(pbVar4 + -1);
  if ((bVar7 != 0) && (pbVar4[-1] != bVar7)) {
    p_Var10 = FUN_14001abbc();
    *(undefined4 *)p_Var10 = 0x16;
    FUN_14001925c();
  }
  if ((bVar17 & 8) == 0) {
    *param_2 = (longlong)pbVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pbVar2;
    return 0;
  }
  uVar12 = FUN_14000fd30(bVar17,uVar15);
  if ((char)uVar12 == '\0') {
    if ((bVar17 & 2) != 0) {
      uVar15 = -uVar15;
    }
  }
  else {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
    if ((bVar17 & 1) != 0) {
      plVar5 = (longlong *)param_2[1];
      if ((bVar17 & 2) == 0) {
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x8000000000000000;
    }
    uVar15 = 0xffffffffffffffff;
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar15;
  }
  return uVar15;
}




/* ---- 0x140010320 : FUN_140010320 [was: FUN_140010320] ---- */

longlong FUN_140010320(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      lVar2 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_14001b1d8(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
  }
  return *param_1;
}




/* ---- 0x140010390 : FUN_140010390 [was: FUN_140010390] ---- */

void FUN_140010390(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140010320(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_14001ac14(lVar1,param_1 + 3,param_1[1]);
  FUN_14001ac80(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}




/* ---- 0x140010408 : FUN_140010408 [was: FUN_140010408] ---- */

uint FUN_140010408(int param_1,uint param_2,_locale_t param_3)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 == (_locale_t)0x0) {
    puVar1 = __pctype_func();
    if (param_1 + 1U < 0x101) {
      uVar2 = puVar1[param_1] & param_2;
    }
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = *(ushort *)(*(longlong *)param_3->locinfo + (longlong)param_1 * 2) & param_2;
  }
  else if ((int)param_3->locinfo->lc_collate_cp < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = _isctype_l(param_1,param_2,param_3);
  }
  return uVar2;
}




/* ---- 0x1400106c0 : FUN_1400106c0 [was: FUN_1400106c0] ---- */

void FUN_1400106c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400106c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(param_1 + 0x30);
  return;
}




/* ---- 0x1400106cc : FUN_1400106cc [was: FUN_1400106cc] ---- */

void FUN_1400106cc(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400106d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1 + 0x30);
  return;
}




/* ---- 0x140010850 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
   __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
   <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
   <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
   __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
   <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
   <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
   <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
     36 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  
  FUN_1400106c0(*param_2);
  uVar1 = FUN_14001153c(param_3);
  FUN_1400106cc(*param_4);
  return uVar1;
}




/* ---- 0x140010938 : FUN_140010938 [was: FUN_140010938] ---- */

uint FUN_140010938(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  __acrt_ptd *p_Var8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  char *pcVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  
  pcVar2 = (char *)*param_2;
  uVar4 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    p_Var8 = FUN_14001abbc();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_14001925c();
LAB_1400109a9:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_1400109a9;
  }
  cVar13 = *pcVar2;
  pcVar12 = pcVar2 + 1;
  *param_2 = (longlong)pcVar12;
  bVar14 = param_4 | 2;
  if ((cVar13 == '-') || (bVar14 = param_4, cVar13 == '+')) {
    cVar13 = *pcVar12;
    pcVar12 = pcVar2 + 2;
    *param_2 = (longlong)pcVar12;
  }
  uVar9 = uVar4;
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      iVar6 = cVar13 + -0x30;
LAB_140010a2f:
      if (iVar6 != 0) goto LAB_140010a7d;
      cVar1 = *pcVar12;
      *param_2 = (longlong)(pcVar12 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar12;
        uVar9 = 8;
        if (param_3 != 0) {
          uVar9 = uVar4;
        }
        if ((cVar1 != '\0') && (*pcVar12 != cVar1)) {
          p_Var8 = FUN_14001abbc();
          *(undefined4 *)p_Var8 = 0x16;
          FUN_14001925c();
        }
        goto LAB_140010a89;
      }
      cVar13 = pcVar12[1];
      *param_2 = (longlong)(pcVar12 + 2);
      uVar9 = 0x10;
    }
    else {
      if ((byte)(cVar13 + 0x9fU) < 0x1a) {
        iVar6 = cVar13 + -0x57;
        goto LAB_140010a2f;
      }
      if ((byte)(cVar13 + 0xbfU) < 0x1a) {
        iVar6 = cVar13 + -0x37;
        goto LAB_140010a2f;
      }
LAB_140010a7d:
      uVar9 = 10;
    }
    if (param_3 != 0) {
      uVar9 = uVar4;
    }
  }
LAB_140010a89:
  pcVar12 = (char *)*param_2;
  uVar15 = 0;
  while( true ) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      uVar11 = (int)cVar13 - 0x30;
    }
    else if ((byte)(cVar13 + 0x9fU) < 0x1a) {
      uVar11 = (int)cVar13 - 0x57;
    }
    else if ((byte)(cVar13 + 0xbfU) < 0x1a) {
      uVar11 = (int)cVar13 - 0x37;
    }
    else {
      uVar11 = 0xffffffff;
    }
    if ((uint)uVar9 <= uVar11) break;
    cVar13 = *pcVar12;
    uVar7 = uVar15 * (uint)uVar9;
    uVar11 = uVar7 + uVar11;
    bVar14 = bVar14 | (uVar11 < uVar7 || (uint)(0xffffffff / uVar9) < uVar15) << 2 | 8U;
    pcVar12 = pcVar12 + 1;
    *param_2 = (longlong)pcVar12;
    uVar15 = uVar11;
  }
  *param_2 = (longlong)(pcVar12 + -1);
  if ((cVar13 != '\0') && (pcVar12[-1] != cVar13)) {
    p_Var8 = FUN_14001abbc();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_14001925c();
  }
  if ((bVar14 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  if ((bVar14 & 4) == 0) {
    if ((bVar14 & 1) == 0) {
      if ((bVar14 & 2) == 0) goto LAB_140010bbd;
LAB_140010bba:
      uVar15 = -uVar15;
      goto LAB_140010bbd;
    }
    if ((bVar14 & 2) == 0) {
      if (uVar15 < 0x80000000) goto LAB_140010bbd;
    }
    else if (uVar15 < 0x80000001) goto LAB_140010bba;
    bVar10 = 1;
    bVar5 = bVar14;
  }
  else {
    bVar10 = bVar14;
    bVar5 = 1;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  if ((bVar5 & bVar10) != 0) {
    plVar3 = (longlong *)param_2[1];
    if ((bVar14 & 2) != 0) {
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
  uVar15 = 0xffffffff;
LAB_140010bbd:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar15;
  }
  return uVar15;
}




/* ---- 0x140010bec : FUN_140010bec [was: FUN_140010bec] ---- */

ulonglong FUN_140010bec(longlong param_1)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_140010c6a;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_140010c6a;
        }
        goto LAB_140010c3a;
      }
LAB_140010d3f:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_140010c6a;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_140010c3a:
    if (iVar9 == 1) goto LAB_140010d3f;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_140010c6a:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_140010890(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_140011398(param_1,uVar7);
  }
  else {
    FUN_1400111f8(param_1,(uint)uVar7);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}




/* ---- 0x140010df0 : FUN_140010df0 [was: FUN_140010df0] ---- */

ulonglong FUN_140010df0(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_140010e6e;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_140010e6e;
        }
        goto LAB_140010e3e;
      }
LAB_140010f43:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_140010e6e;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_140010e3e:
    if (iVar9 == 1) goto LAB_140010f43;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_140010e6e:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_140010890(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_140011408(param_1,uVar7,param_2);
  }
  else {
    FUN_140011268(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}




/* ---- 0x140010ff4 : FUN_140010ff4 [was: FUN_140010ff4] ---- */

ulonglong FUN_140010ff4(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 < 6) {
    if (iVar9 != 5) {
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 1;
          pbVar3 = *(byte **)(param_1 + 0x18);
          *(byte **)(param_1 + 0x18) = pbVar3 + 8;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*pbVar3;
          }
          else {
            uVar7 = (ulonglong)(char)*pbVar3;
          }
          goto LAB_140011072;
        }
        iVar9 = iVar9 + -2;
        if (iVar9 == 0) {
          uVar6 = *(uint *)(param_1 + 0x28);
          lVar8 = 2;
          puVar2 = *(ushort **)(param_1 + 0x18);
          *(ushort **)(param_1 + 0x18) = puVar2 + 4;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar7 = (ulonglong)*puVar2;
          }
          else {
            uVar7 = (ulonglong)(short)*puVar2;
          }
          goto LAB_140011072;
        }
        goto LAB_140011042;
      }
LAB_140011147:
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar8 = 4;
      puVar4 = *(uint **)(param_1 + 0x18);
      *(uint **)(param_1 + 0x18) = puVar4 + 2;
      if ((uVar6 >> 4 & 1) == 0) {
        uVar7 = (ulonglong)*puVar4;
      }
      else {
        uVar7 = (ulonglong)(int)*puVar4;
      }
      goto LAB_140011072;
    }
  }
  else if (((iVar9 != 6) && (iVar9 != 7)) && (iVar9 = iVar9 + -9, iVar9 != 0)) {
LAB_140011042:
    if (iVar9 == 1) goto LAB_140011147;
    if (iVar9 != 2) {
      lVar8 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar8 + 0x30) = 1;
      *(undefined4 *)(lVar8 + 0x2c) = 0x16;
      uVar7 = FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar7 & 0xffffffffffffff00;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  lVar8 = 8;
  puVar1 = *(ulonglong **)(param_1 + 0x18);
  *(ulonglong **)(param_1 + 0x18) = puVar1 + 1;
  uVar7 = *puVar1;
LAB_140011072:
  if (((uVar6 >> 4 & 1) != 0) && ((longlong)uVar7 < 0)) {
    uVar7 = -uVar7;
    uVar6 = uVar6 | 0x40;
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar6 & 0xfffffff7;
    FUN_140010890(param_1 + 0x50,(longlong)*(int *)(param_1 + 0x30),*(longlong *)(param_1 + 8));
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (lVar8 == 8) {
    FUN_1400114b8(param_1,uVar7,param_2);
  }
  else {
    FUN_140011314(param_1,(uint)uVar7,param_2);
  }
  uVar6 = *(uint *)(param_1 + 0x28) >> 7;
  pcVar5 = (char *)(ulonglong)uVar6;
  if (((uVar6 & 1) != 0) &&
     ((*(int *)(param_1 + 0x48) == 0 || (pcVar5 = *(char **)(param_1 + 0x40), *pcVar5 != '0')))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    **(undefined1 **)(param_1 + 0x40) = 0x30;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}




/* ---- 0x1400111f8 : FUN_1400111f8 [was: FUN_1400111f8] ---- */

void FUN_1400111f8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}




/* ---- 0x140011268 : FUN_140011268 [was: FUN_140011268] ---- */

void FUN_140011268(longlong param_1,uint param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
    param_2 = (uint)((ulonglong)param_2 / 10);
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}




/* ---- 0x140011314 : FUN_140011314 [was: FUN_140011314] ---- */

void FUN_140011314(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}




/* ---- 0x140011398 : FUN_140011398 [was: FUN_140011398] ---- */

void FUN_140011398(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x458);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar2 = (char *)(lVar3 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar4 = pcVar2;
  for (; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar2 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}




/* ---- 0x140011408 : FUN_140011408 [was: FUN_140011408] ---- */

void FUN_140011408(longlong param_1,ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}




/* ---- 0x1400114b8 : FUN_1400114b8 [was: FUN_1400114b8] ---- */

void FUN_1400114b8(longlong param_1,ulonglong param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}




/* ---- 0x140011658 : FUN_140011658 [was: FUN_140011658] ---- */

void FUN_140011658(char *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != *(char *)**(undefined8 **)(*param_2 + 0xf8)))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != '\0') {
    do {
      param_1 = param_1 + 1;
      pcVar2 = param_1;
      if (*param_1 == '\0') break;
    } while ((*param_1 + 0xbbU & 0xdf) != 0);
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    pcVar3 = pcVar3 + -2;
    if (*pcVar2 != *(char *)**(undefined8 **)(*param_2 + 0xf8)) {
      pcVar3 = pcVar2;
    }
    lVar4 = (longlong)param_1 - (longlong)pcVar3;
    do {
      cVar1 = pcVar3[lVar4];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}




/* ---- 0x1400116c4 : FUN_1400116c4 [was: FUN_1400116c4] ---- */

undefined1 FUN_1400116c4(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;
  
  plVar1 = *(longlong **)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 1;
  uVar2 = *(undefined8 *)((longlong)plVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_140010938(plVar1,(longlong *)&local_18,10,1);
  *param_2 = uVar3;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (uVar4 = 0, *(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (uVar4 = 0, *(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)((longlong)plVar1 + 0x2c) = uVar2;
  return uVar4;
}




/* ---- 0x140011754 : FUN_140011754 [was: FUN_140011754] ---- */

undefined4 FUN_140011754(ulonglong *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  char *pcVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)param_1[1];
  if ((_iobuf *)param_1[0x8c] == (_iobuf *)0x0) {
    *(undefined1 *)(plVar10 + 6) = 1;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = 0x16;
  }
  else {
    bVar2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      ((_iobuf *)param_1[0x8c]);
    if (!bVar2) {
      return 0xffffffff;
    }
    pcVar8 = (char *)param_1[2];
    if (pcVar8 != (char *)0x0) {
      iVar4 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar4;
      do {
        if (iVar4 == 2) {
          return (int)param_1[4];
        }
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        cVar3 = *pcVar8;
        while( true ) {
          pcVar8 = pcVar8 + 1;
          param_1[2] = (ulonglong)pcVar8;
          *(char *)((longlong)param_1 + 0x39) = cVar3;
          if ((cVar3 == '\0') || ((int)param_1[4] < 0)) break;
          bVar7 = 0;
          if ((byte)(cVar3 - 0x20U) < 0x5b) {
            bVar7 = (&DAT_14002b011)[(ulonglong)((int)cVar3 - 0x20U & 0x7f) * 2];
          }
          bVar7 = (&DAT_14002b010)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar7 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar7;
          if (7 < bVar7) {
LAB_140011aa4:
            uVar6 = param_1[1];
            *(undefined1 *)(uVar6 + 0x30) = 1;
            *(undefined4 *)(uVar6 + 0x2c) = 0x16;
            plVar10 = (longlong *)param_1[1];
            goto LAB_140011abc;
          }
          if (bVar7 == 0) {
            plVar10 = (longlong *)param_1[1];
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
            if ((char)plVar10[5] == '\0') {
              FUN_140010390(plVar10);
            }
            bVar7 = *(byte *)((longlong)param_1 + 0x39);
            if ((-2 < (char)bVar7) &&
               ((*(ushort *)(*(longlong *)plVar10[3] + (longlong)(char)bVar7 * 2) & 0x8000) != 0)) {
              if ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(param_1[0x8c] + 8) != 0)) &&
                 (uVar6 = FUN_14001d848(bVar7,(FILE *)param_1[0x8c],param_1[1]), (int)uVar6 == -1))
              {
                *(undefined4 *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              }
              bVar7 = *(byte *)param_1[2];
              param_1[2] = (ulonglong)((byte *)param_1[2] + 1);
              *(byte *)((longlong)param_1 + 0x39) = bVar7;
              if (bVar7 == 0) {
                uVar6 = param_1[1];
                *(undefined1 *)(uVar6 + 0x30) = 1;
                *(undefined4 *)(uVar6 + 0x2c) = 0x16;
                FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                              (longlong *)param_1[1]);
                goto LAB_140011aa4;
              }
            }
            if ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(param_1[0x8c] + 8) != 0)) &&
               (uVar6 = FUN_14001d848(bVar7,(FILE *)param_1[0x8c],param_1[1]), (int)uVar6 == -1)) {
              *(undefined4 *)(param_1 + 4) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 4) = (int)param_1[4] + 1;
            }
          }
          else if (bVar7 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar7 == 2) {
            if (cVar3 == ' ') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (cVar3 == '#') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (cVar3 == '+') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (cVar3 == '-') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (cVar3 == '0') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar7 == 3) {
              if (cVar3 == '*') {
                piVar1 = (int *)param_1[3];
                param_1[3] = (ulonglong)(piVar1 + 2);
                iVar4 = *piVar1;
                *(int *)((longlong)param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar4;
                }
LAB_1400118e5:
                cVar3 = '\x01';
              }
              else {
                puVar9 = (ulonglong *)((longlong)param_1 + 0x2c);
LAB_14001188f:
                cVar3 = FUN_1400116c4((longlong)param_1,(uint *)puVar9);
              }
            }
            else {
              if (bVar7 == 4) {
                *(undefined4 *)(param_1 + 6) = 0;
                goto LAB_140011a41;
              }
              if (bVar7 == 5) {
                if (cVar3 == '*') {
                  piVar1 = (int *)param_1[3];
                  param_1[3] = (ulonglong)(piVar1 + 2);
                  iVar4 = *piVar1;
                  *(int *)(param_1 + 6) = iVar4;
                  if (iVar4 < 0) {
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  }
                  goto LAB_1400118e5;
                }
                puVar9 = param_1 + 6;
                goto LAB_14001188f;
              }
              if (bVar7 == 6) {
                uVar6 = FUN_140011e48(param_1);
                cVar3 = (char)uVar6;
              }
              else {
                if (bVar7 != 7) {
                  return 0xffffffff;
                }
                uVar5 = FUN_140012158(param_1);
                cVar3 = (char)uVar5;
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_140011a41:
          pcVar8 = (char *)param_1[2];
          cVar3 = *pcVar8;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar4 = (int)param_1[0x8d];
      } while( true );
    }
    uVar6 = param_1[1];
    *(undefined1 *)(uVar6 + 0x30) = 1;
    *(undefined4 *)(uVar6 + 0x2c) = 0x16;
    plVar10 = (longlong *)param_1[1];
  }
LAB_140011abc:
  FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar10);
  return 0xffffffff;
}




/* ---- 0x140011ad8 : FUN_140011ad8 [was: FUN_140011ad8] ---- */

undefined4 FUN_140011ad8(ulonglong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  char *pcVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)param_1[1];
  if (param_1[0x8c] == 0) {
    *(undefined1 *)(plVar9 + 6) = 1;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x16;
  }
  else {
    pcVar7 = (char *)param_1[2];
    if (pcVar7 != (char *)0x0) {
      iVar3 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar3;
      do {
        if (iVar3 == 2) {
          return (int)param_1[4];
        }
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        cVar2 = *pcVar7;
        while( true ) {
          pcVar7 = pcVar7 + 1;
          param_1[2] = (ulonglong)pcVar7;
          *(char *)((longlong)param_1 + 0x39) = cVar2;
          if ((cVar2 == '\0') || ((int)param_1[4] < 0)) break;
          bVar6 = 0;
          if ((byte)(cVar2 - 0x20U) < 0x5b) {
            bVar6 = (&DAT_14002b011)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
          }
          bVar6 = (&DAT_14002b010)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar6 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar6;
          if (7 < bVar6) {
LAB_140011e29:
            uVar5 = param_1[1];
            *(undefined1 *)(uVar5 + 0x30) = 1;
            *(undefined4 *)(uVar5 + 0x2c) = 0x16;
            plVar9 = (longlong *)param_1[1];
            goto LAB_140011b33;
          }
          if (bVar6 == 0) {
            plVar9 = (longlong *)param_1[1];
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
            if ((char)plVar9[5] == '\0') {
              FUN_140010390(plVar9);
            }
            cVar2 = *(char *)((longlong)param_1 + 0x39);
            if ((-2 < cVar2) &&
               ((*(ushort *)(*(longlong *)plVar9[3] + (longlong)cVar2 * 2) & 0x8000) != 0)) {
              uVar5 = param_1[0x8c];
              if (*(longlong *)(uVar5 + 0x10) == *(longlong *)(uVar5 + 8)) {
                if (*(char *)(uVar5 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 4) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
                }
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
                *(longlong *)(uVar5 + 0x10) = *(longlong *)(uVar5 + 0x10) + 1;
                **(char **)param_1[0x8c] = cVar2;
                *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
              }
              cVar2 = *(char *)param_1[2];
              param_1[2] = (ulonglong)((char *)param_1[2] + 1);
              *(char *)((longlong)param_1 + 0x39) = cVar2;
              if (cVar2 == '\0') {
                uVar5 = param_1[1];
                *(undefined1 *)(uVar5 + 0x30) = 1;
                *(undefined4 *)(uVar5 + 0x2c) = 0x16;
                FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                              (longlong *)param_1[1]);
                goto LAB_140011e29;
              }
            }
            uVar5 = param_1[0x8c];
            if (*(longlong *)(uVar5 + 0x10) == *(longlong *)(uVar5 + 8)) {
              if (*(char *)(uVar5 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              }
            }
            else {
              *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              *(longlong *)(uVar5 + 0x10) = *(longlong *)(uVar5 + 0x10) + 1;
              **(char **)param_1[0x8c] = cVar2;
              *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
            }
          }
          else if (bVar6 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar6 == 2) {
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar6 == 3) {
              if (cVar2 == '*') {
                piVar1 = (int *)param_1[3];
                param_1[3] = (ulonglong)(piVar1 + 2);
                iVar3 = *piVar1;
                *(int *)((longlong)param_1 + 0x2c) = iVar3;
                if (iVar3 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar3;
                }
LAB_140011c6f:
                cVar2 = '\x01';
              }
              else {
                puVar8 = (ulonglong *)((longlong)param_1 + 0x2c);
LAB_140011c19:
                cVar2 = FUN_1400116c4((longlong)param_1,(uint *)puVar8);
              }
            }
            else {
              if (bVar6 == 4) {
                *(undefined4 *)(param_1 + 6) = 0;
                goto LAB_140011db0;
              }
              if (bVar6 == 5) {
                if (cVar2 == '*') {
                  piVar1 = (int *)param_1[3];
                  param_1[3] = (ulonglong)(piVar1 + 2);
                  iVar3 = *piVar1;
                  *(int *)(param_1 + 6) = iVar3;
                  if (iVar3 < 0) {
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  }
                  goto LAB_140011c6f;
                }
                puVar8 = param_1 + 6;
                goto LAB_140011c19;
              }
              if (bVar6 == 6) {
                uVar5 = FUN_140011fd0(param_1);
                cVar2 = (char)uVar5;
              }
              else {
                if (bVar6 != 7) {
                  return 0xffffffff;
                }
                uVar4 = FUN_140012690(param_1);
                cVar2 = (char)uVar4;
              }
            }
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
          }
LAB_140011db0:
          pcVar7 = (char *)param_1[2];
          cVar2 = *pcVar7;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar3 = (int)param_1[0x8d];
      } while( true );
    }
    *(undefined1 *)(plVar9 + 6) = 1;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x16;
    plVar9 = (longlong *)param_1[1];
  }
LAB_140011b33:
  FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar9);
  return 0xffffffff;
}




/* ---- 0x140011e48 : FUN_140011e48 [was: FUN_140011e48] ---- */

ulonglong FUN_140011e48(ulonglong *param_1)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined7 uVar6;
  ulonglong uVar4;
  char *pcVar5;
  
  cVar1 = *(char *)((longlong)param_1 + 0x39);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)CONCAT71(uVar6,cVar1);
  if (cVar1 == 'F') {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 7;
      uVar4 = FUN_140012158(param_1);
      return uVar4;
    }
  }
  else if (cVar1 == 'N') {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 8;
LAB_140011e7a:
      uVar4 = param_1[1];
      *(undefined1 *)(uVar4 + 0x30) = 1;
      *(undefined4 *)(uVar4 + 0x2c) = 0x16;
      uVar4 = FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_140011e7a;
    if (cVar1 == 'I') {
      pcVar2 = (char *)param_1[2];
      cVar1 = *pcVar2;
      pcVar5 = (char *)CONCAT71(uVar6,cVar1);
      if ((cVar1 == '3') && (pcVar2[1] == '2')) {
        pcVar5 = pcVar2 + 2;
        *(undefined4 *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (ulonglong)pcVar5;
      }
      else if (cVar1 == '6') {
        if (pcVar2[1] == '4') {
          pcVar5 = pcVar2 + 2;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (ulonglong)pcVar5;
        }
      }
      else {
        bVar3 = cVar1 + 0xa8;
        pcVar5 = (char *)CONCAT71(uVar6,bVar3);
        if ((bVar3 < 0x21) && ((0x120821001U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (cVar1 == 'L') {
      *(undefined4 *)((longlong)param_1 + 0x34) = 8;
    }
    else if (cVar1 == 'T') {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (cVar1 == 'h') {
        if (*(char *)param_1[2] == 'h') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x1;
        }
        else {
          pcVar5 = (char *)0x2;
        }
      }
      else {
        if (cVar1 == 'j') {
          *(undefined4 *)((longlong)param_1 + 0x34) = 5;
          goto LAB_140011fc8;
        }
        if (cVar1 != 'l') {
          if (cVar1 == 't') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 7;
          }
          else if (cVar1 == 'w') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (cVar1 == 'z') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_140011fc8;
        }
        if (*(char *)param_1[2] == 'l') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x4;
        }
        else {
          pcVar5 = (char *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)pcVar5;
    }
  }
LAB_140011fc8:
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}




/* ---- 0x140011fd0 : FUN_140011fd0 [was: FUN_140011fd0] ---- */

ulonglong FUN_140011fd0(ulonglong *param_1)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined7 uVar6;
  ulonglong uVar4;
  char *pcVar5;
  
  cVar1 = *(char *)((longlong)param_1 + 0x39);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)CONCAT71(uVar6,cVar1);
  if (cVar1 == 'F') {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 7;
      uVar4 = FUN_140012690(param_1);
      return uVar4;
    }
  }
  else if (cVar1 == 'N') {
    if ((*param_1 & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x24) = 8;
LAB_140012002:
      uVar4 = param_1[1];
      *(undefined1 *)(uVar4 + 0x30) = 1;
      *(undefined4 *)(uVar4 + 0x2c) = 0x16;
      uVar4 = FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_140012002;
    if (cVar1 == 'I') {
      pcVar2 = (char *)param_1[2];
      cVar1 = *pcVar2;
      pcVar5 = (char *)CONCAT71(uVar6,cVar1);
      if ((cVar1 == '3') && (pcVar2[1] == '2')) {
        pcVar5 = pcVar2 + 2;
        *(undefined4 *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (ulonglong)pcVar5;
      }
      else if (cVar1 == '6') {
        if (pcVar2[1] == '4') {
          pcVar5 = pcVar2 + 2;
          *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (ulonglong)pcVar5;
        }
      }
      else {
        bVar3 = cVar1 + 0xa8;
        pcVar5 = (char *)CONCAT71(uVar6,bVar3);
        if ((bVar3 < 0x21) && ((0x120821001U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (cVar1 == 'L') {
      *(undefined4 *)((longlong)param_1 + 0x34) = 8;
    }
    else if (cVar1 == 'T') {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (cVar1 == 'h') {
        if (*(char *)param_1[2] == 'h') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x1;
        }
        else {
          pcVar5 = (char *)0x2;
        }
      }
      else {
        if (cVar1 == 'j') {
          *(undefined4 *)((longlong)param_1 + 0x34) = 5;
          goto LAB_140012150;
        }
        if (cVar1 != 'l') {
          if (cVar1 == 't') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 7;
          }
          else if (cVar1 == 'w') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (cVar1 == 'z') {
            *(undefined4 *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_140012150;
        }
        if (*(char *)param_1[2] == 'l') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x4;
        }
        else {
          pcVar5 = (char *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)pcVar5;
    }
  }
LAB_140012150:
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}




/* ---- 0x140012b00 : FUN_140012b00 [was: FUN_140012b00] ---- */

undefined8 FUN_140012b00(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar3 + 1;
  puVar4 = (ushort *)*puVar3;
  if ((puVar4 == (ushort *)0x0) || (*(longlong *)(puVar4 + 4) == 0)) {
    uVar5 = 6;
    *(char **)(param_1 + 0x40) = "(null)";
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 2) {
LAB_140012b4a:
      bVar6 = false;
    }
    else if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar6 = true;
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0xd) goto LAB_140012b4a;
      bVar6 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(puVar4 + 4);
    uVar1 = *puVar4;
    uVar5 = (ulonglong)uVar1;
    if (bVar6) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_140012b76;
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
LAB_140012b76:
  *(int *)(param_1 + 0x48) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}




/* ---- 0x140012b7c : FUN_140012b7c [was: FUN_140012b7c] ---- */

undefined8 FUN_140012b7c(ulonglong *param_1)

{
  double *pdVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 (*pauVar10) [16];
  byte *pbVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  double local_res8;
  
  *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
  iVar6 = (int)param_1[6];
  if (iVar6 < 0) {
    iVar6 = (-(uint)((*(char *)((longlong)param_1 + 0x39) + 0xbfU & 0xdf) != 0) & 0xfffffff9) + 0xd;
    *(int *)(param_1 + 6) = iVar6;
  }
  else if ((iVar6 == 0) &&
          ((*(char *)((longlong)param_1 + 0x39) == 'g' ||
           (*(char *)((longlong)param_1 + 0x39) == 'G')))) {
    *(undefined4 *)(param_1 + 6) = 1;
    iVar6 = 1;
  }
  bVar3 = FUN_140010890((longlong)(param_1 + 10),(longlong)(iVar6 + 0x15d),param_1[1]);
  uVar16 = 0x200;
  if (bVar3) {
    uVar14 = (uint)param_1[6];
  }
  else {
    if (param_1[0x8b] == 0) {
      iVar6 = 0x200;
    }
    else {
      iVar6 = (int)(param_1[0x8a] >> 1);
    }
    uVar14 = iVar6 - 0x15d;
    *(uint *)(param_1 + 6) = uVar14;
  }
  puVar7 = (ulonglong *)param_1[0x8b];
  if ((ulonglong *)param_1[0x8b] == (ulonglong *)0x0) {
    puVar7 = param_1 + 10;
  }
  param_1[8] = (ulonglong)puVar7;
  pdVar1 = (double *)param_1[3];
  param_1[3] = (ulonglong)(pdVar1 + 1);
  pauVar10 = (undefined1 (*) [16])param_1[0x8b];
  local_res8 = *pdVar1;
  if (pauVar10 == (undefined1 (*) [16])0x0) {
    puVar7 = param_1 + 0x4a;
    pauVar10 = (undefined1 (*) [16])(param_1 + 10);
    uVar8 = 0x200;
  }
  else {
    puVar7 = (ulonglong *)(*pauVar10 + (param_1[0x8a] >> 1));
    uVar8 = param_1[0x8a] >> 1;
    uVar16 = param_1[0x8a] >> 1;
  }
  FUN_14001cce0(&local_res8,pauVar10,uVar16,(char *)puVar7,uVar8,
                (int)*(char *)((longlong)param_1 + 0x39),uVar14,*param_1,1,(longlong *)param_1[1]);
  uVar14 = (uint)param_1[5] >> 5;
  uVar16 = (ulonglong)uVar14;
  if (((uVar14 & 1) != 0) && ((int)param_1[6] == 0)) {
    plVar2 = (longlong *)param_1[1];
    if ((char)plVar2[5] == '\0') {
      FUN_140010390(plVar2);
    }
    pbVar15 = (byte *)param_1[8];
    plVar2 = (longlong *)plVar2[3];
    uVar8 = (ulonglong)*pbVar15;
    if (*(char *)(uVar8 + plVar2[0x22]) != 'e') {
      do {
        pbVar15 = pbVar15 + 1;
        uVar8 = (ulonglong)*pbVar15;
      } while ((*(byte *)(*plVar2 + uVar8 * 2) & 4) != 0);
    }
    bVar3 = *(char *)(uVar8 + plVar2[0x22]) == 'x';
    if (bVar3) {
      uVar8 = (ulonglong)pbVar15[2];
    }
    pbVar11 = pbVar15 + 2;
    if (!bVar3) {
      pbVar11 = pbVar15;
    }
    bVar4 = **(byte **)plVar2[0x1f];
    uVar16 = CONCAT71((int7)((ulonglong)plVar2[0x1f] >> 8),bVar4);
    *pbVar11 = bVar4;
    do {
      pbVar11 = pbVar11 + 1;
      bVar4 = *pbVar11;
      uVar16 = CONCAT71((int7)(uVar16 >> 8),bVar4);
      bVar13 = (byte)uVar8;
      *pbVar11 = bVar13;
      uVar8 = (ulonglong)bVar4;
    } while (bVar13 != 0);
  }
  bVar4 = *(char *)((longlong)param_1 + 0x39) + 0xb9;
  uVar16 = CONCAT71((int7)(uVar16 >> 8),bVar4);
  if (((bVar4 & 0xdf) == 0) &&
     (uVar14 = (uint)param_1[5] >> 5, uVar16 = (ulonglong)uVar14, (uVar14 & 1) == 0)) {
    plVar2 = (longlong *)param_1[1];
    if ((char)plVar2[5] == '\0') {
      FUN_140010390(plVar2);
    }
    uVar16 = FUN_140011658((char *)param_1[8],plVar2 + 3);
  }
  pcVar9 = (char *)param_1[8];
  cVar5 = *pcVar9;
  if (cVar5 == '-') {
    *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x40;
    pcVar9 = pcVar9 + 1;
    param_1[8] = (ulonglong)pcVar9;
    cVar5 = *pcVar9;
  }
  if (((byte)(cVar5 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar5 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = (uint)param_1[5] & 0xfffffff7;
    *(undefined1 *)((longlong)param_1 + 0x39) = 0x73;
  }
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (pcVar9[lVar12] != '\0');
  *(int *)(param_1 + 9) = (int)lVar12;
  return CONCAT71((int7)(uVar16 >> 8),1);
}




/* ---- 0x140012dd8 : FUN_140012dd8 [was: FUN_140012dd8] ---- */

undefined8 FUN_140012dd8(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ushort *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [32];
  undefined1 *puVar9;
  ulonglong uVar10;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if ((iVar5 == 2) ||
     (((iVar5 != 3 && (iVar5 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    puVar4 = *(undefined1 **)(param_1 + 0x18);
    puVar1 = puVar4 + 8;
    puVar9 = *(undefined1 **)(param_1 + 0x458);
    if (*(undefined1 **)(param_1 + 0x458) == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)(param_1 + 0x50);
    }
    *(undefined1 **)(param_1 + 0x18) = puVar1;
    uVar2 = *puVar4;
    uVar6 = CONCAT71((int7)((ulonglong)puVar1 >> 8),uVar2);
    *puVar9 = uVar2;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  else {
    puVar3 = *(ushort **)(param_1 + 0x18);
    *(ushort **)(param_1 + 0x18) = puVar3 + 4;
    pauVar8 = *(undefined1 (**) [32])(param_1 + 0x458);
    if (pauVar8 == (undefined1 (*) [32])0x0) {
      pauVar8 = (undefined1 (*) [32])(param_1 + 0x50);
      uVar10 = 0x200;
    }
    else {
      uVar10 = *(ulonglong *)(param_1 + 0x450) >> 1;
    }
    iVar5 = FUN_14001cfc8((int *)(param_1 + 0x48),pauVar8,uVar10,*puVar3,*(longlong **)(param_1 + 8)
                         );
    uVar6 = CONCAT44(extraout_var,iVar5);
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x458) == 0) {
    lVar7 = param_1 + 0x50;
  }
  *(longlong *)(param_1 + 0x40) = lVar7;
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}




/* ---- 0x140012eac : FUN_140012eac [was: FUN_140012eac] ---- */

ulonglong FUN_140012eac(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  int iVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar1 + 1;
  puVar2 = (ulonglong *)*puVar1;
  bVar4 = FUN_14001d830();
  if ((int)CONCAT71(extraout_var,bVar4) == 0) goto LAB_140012ed1;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          uVar5 = CONCAT71(extraout_var,*(undefined1 *)(param_1 + 0x20));
          *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x20);
          goto LAB_140012f4a;
        }
        iVar6 = iVar6 + -2;
        if (iVar6 == 0) {
          uVar5 = (ulonglong)*(ushort *)(param_1 + 0x20);
          *(ushort *)puVar2 = *(ushort *)(param_1 + 0x20);
          goto LAB_140012f4a;
        }
        goto LAB_140012f39;
      }
LAB_140012f5b:
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      *(uint *)puVar2 = *(uint *)(param_1 + 0x20);
      goto LAB_140012f4a;
    }
  }
  else if (((iVar6 != 6) && (iVar6 != 7)) && (iVar6 = iVar6 + -9, iVar6 != 0)) {
LAB_140012f39:
    if (iVar6 == 1) goto LAB_140012f5b;
    if (iVar6 != 2) {
LAB_140012ed1:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x20);
  *puVar2 = uVar5;
LAB_140012f4a:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}




/* ---- 0x140012f64 : FUN_140012f64 [was: FUN_140012f64] ---- */

undefined8 FUN_140012f64(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar2 + 1;
  pwVar5 = (wchar_t *)*plVar2;
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) == -1) {
    iVar3 = 0x7fffffff;
  }
  *(wchar_t **)(param_1 + 0x40) = pwVar5;
  if ((iVar1 == 2) ||
     (((iVar1 != 3 && (iVar1 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    if ((undefined1 (*) [32])pwVar5 == (undefined1 (*) [32])0x0) {
      *(char **)(param_1 + 0x40) = "(null)";
      pwVar5 = (wchar_t *)"(null)";
    }
    uVar4 = FUN_1400189f0((undefined1 (*) [32])pwVar5,(longlong)iVar3);
  }
  else {
    if ((undefined1 (*) [32])pwVar5 == (undefined1 (*) [32])0x0) {
      pwVar5 = L"(null)";
      *(wchar_t **)(param_1 + 0x40) = L"(null)";
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    uVar4 = FUN_140018cd0((undefined1 (*) [32])pwVar5,(longlong)iVar3);
  }
  *(int *)(param_1 + 0x48) = (int)uVar4;
  return CONCAT71((int7)(uVar4 >> 8),1);
}




/* ---- 0x140013140 : FUN_140013140 [was: FUN_140013140] ---- */

void FUN_140013140(longlong *param_1,byte *param_2,int param_3,int *param_4,longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  
  pbVar3 = param_2 + param_3;
  uVar1 = *(undefined8 *)(param_5 + 0x2c);
  do {
    if (param_2 == pbVar3) {
LAB_1400131f2:
      *(undefined8 *)(param_5 + 0x2c) = uVar1;
      return;
    }
    if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*param_1 + 8) != 0)) &&
       (uVar2 = FUN_14001d848(*param_2,(FILE *)*param_1,param_5), (int)uVar2 == -1)) {
      if ((*(char *)(param_5 + 0x30) == '\0') || (*(int *)(param_5 + 0x2c) != 0x2a)) {
        *param_4 = -1;
        goto LAB_1400131f2;
      }
      if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) != 0) && (*(longlong *)(*param_1 + 8) == 0)) ||
         (uVar2 = FUN_14001d848(0x3f,(FILE *)*param_1,param_5), (int)uVar2 != -1))
      goto LAB_1400131de;
      *param_4 = -1;
    }
    else {
LAB_1400131de:
      *param_4 = *param_4 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}




/* ---- 0x140013588 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_1c23a5dd5e46d7c5fbe45428cfdcd388>,class <lambda_ad9c22e73f4850e44729a5f831ae9ec1> &
   __ptr64,class <lambda_13a597834fd3cef18bd4341e137232db> >(class
   <lambda_1c23a5dd5e46d7c5fbe45428cfdcd388> && __ptr64,class
   <lambda_ad9c22e73f4850e44729a5f831ae9ec1> & __ptr64,class
   <lambda_13a597834fd3cef18bd4341e137232db> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_2647abb55a408a205467c4169a724277>,class <lambda_576477a770bb5ab586b2d9569451c7f7> &
   __ptr64,class <lambda_c2b006f504a10a4cf14b9a1fbce2a01e> >(class
   <lambda_2647abb55a408a205467c4169a724277> && __ptr64,class
   <lambda_576477a770bb5ab586b2d9569451c7f7> & __ptr64,class
   <lambda_c2b006f504a10a4cf14b9a1fbce2a01e> && __ptr64) __ptr64
     22 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  
  FUN_1400106c0(*param_2);
  uVar1 = FUN_1400152ec(param_3);
  FUN_1400106cc(*param_4);
  return uVar1;
}




/* ---- 0x140014bec : FUN_140014bec [was: FUN_140014bec] ---- */

ulonglong FUN_140014bec(undefined4 *param_1,longlong *param_2,uint param_3,byte param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = PTR_PTR_14003c5d8._0_4_;
    uVar4 = PTR_PTR_14003c5d8._4_4_;
    uVar5 = PTR_DAT_14003c5e0._0_4_;
    uVar6 = PTR_DAT_14003c5e0._4_4_;
    if (DAT_14003d760 != 0) goto LAB_140014c47;
  }
  else {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
  }
  local_20 = '\x01';
  local_30 = uVar3;
  uStack_2c = uVar4;
  uStack_28 = uVar5;
  uStack_24 = uVar6;
LAB_140014c47:
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = param_2[3];
  param_2[3] = 0;
  *param_2 = 0;
  uVar1 = FUN_1400147b4(local_48,&local_68,param_3,param_4);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *(undefined1 *)param_2[3] = 0;
  }
  return uVar1;
}




/* ---- 0x140014cec : FUN_140014cec [was: FUN_140014cec] ---- */

bool FUN_140014cec(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  __acrt_ptd *p_Var4;
  bool bVar5;
  char local_res8 [8];
  uint local_res10 [2];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_res10[0] = 0;
  local_28 = param_1 + 8;
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  uVar3 = parse_floating_point<>(*(_locale_t *)(param_1 + 0x70),&local_28,local_res10);
  if ((local_res8[0] == '\0') || ((int)uVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x32) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x78);
    *(longlong **)(param_1 + 0x78) = plVar1 + 1;
    puVar2 = (uint *)*plVar1;
    bVar5 = puVar2 != (uint *)0x0;
    if (bVar5) {
      *puVar2 = local_res10[0];
    }
    else {
      p_Var4 = FUN_14001abbc();
      *(undefined4 *)p_Var4 = 0x16;
      FUN_14001925c();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}




/* ---- 0x140014d88 : FUN_140014d88 [was: FUN_140014d88] ---- */

bool FUN_140014d88(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  __acrt_ptd *p_Var4;
  bool bVar5;
  char local_res8 [8];
  ulonglong local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  local_28 = param_1 + 8;
  local_res8[0] = '\x01';
  local_20 = *(undefined8 *)(param_1 + 0x38);
  local_10 = local_res8;
  local_res10 = 0;
  local_18 = 0;
  uVar3 = parse_floating_point<>(*(_locale_t *)(param_1 + 0x70),&local_28,&local_res10);
  if ((local_res8[0] == '\0') || ((int)uVar3 == 1)) {
    bVar5 = false;
  }
  else if (*(char *)(param_1 + 0x32) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x78);
    *(longlong **)(param_1 + 0x78) = plVar1 + 1;
    puVar2 = (ulonglong *)*plVar1;
    bVar5 = puVar2 != (ulonglong *)0x0;
    if (bVar5) {
      *puVar2 = local_res10;
    }
    else {
      p_Var4 = FUN_14001abbc();
      *(undefined4 *)p_Var4 = 0x16;
      FUN_14001925c();
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}




/* ---- 0x140015274 : FUN_140015274 [was: FUN_140015274] ---- */

undefined8 FUN_140015274(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  plVar2 = (longlong *)*param_1;
  cVar1 = *(char *)param_1[1];
  lVar3 = plVar2[2];
  plVar2[2] = lVar3 - 1U;
  if ((((plVar2[1] == 0) || (lVar3 - 1U <= (ulonglong)plVar2[1])) && (1 < (byte)(cVar1 + 1U))) &&
     (puVar4 = (undefined8 *)*plVar2, (int)cVar1 != 0xffffffff)) {
    plVar2 = puVar4 + 1;
    *plVar2 = *plVar2 + -1;
    FUN_14001db1c((int)cVar1,(FILE *)*puVar4);
  }
  *(undefined1 *)param_1[1] = 0;
  puVar5 = *(undefined1 **)(*param_1 + 0x10);
  bVar6 = *(undefined1 **)param_1[2] == puVar5;
  if (!bVar6) {
    puVar5 = *(undefined1 **)(*param_1 + 0x18);
    *puVar5 = 0;
  }
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),bVar6);
}




/* ---- 0x1400153c4 : FUN_1400153c4 [was: FUN_1400153c4] ---- */

ulonglong FUN_1400153c4(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  ushort *in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 uVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) goto LAB_140015408;
  in_RAX = *(ushort **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((byte)*in_RAX == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    goto LAB_140015408;
  }
  iVar5 = isspace((uint)(byte)*in_RAX);
  pbVar3 = *(byte **)(param_1 + 8);
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    iVar5 = isspace((uint)*pbVar3);
    uVar6 = 1;
    in_RAX = (ushort *)CONCAT44(extraout_var,iVar5);
    while ((int)in_RAX != 0) {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      iVar5 = isspace((uint)**(byte **)(param_1 + 8));
      in_RAX = (ushort *)CONCAT44(extraout_var_00,iVar5);
    }
    goto LAB_140015451;
  }
  if ((*pbVar3 != 0x25) || (pbVar1 = pbVar3 + 1, *pbVar1 == 0x25)) {
    *(undefined4 *)(param_1 + 0x14) = 3;
    uVar6 = 1;
    *(byte *)(param_1 + 0x18) = *pbVar3;
    *(byte **)(param_1 + 8) = pbVar3 + (ulonglong)(*pbVar3 == 0x25) + 1;
    in_RAX = __pctype_func();
    if ((short)in_RAX[*(byte *)(param_1 + 0x18)] < 0) {
      in_RAX = *(ushort **)(param_1 + 8);
      uVar4 = *in_RAX;
      if ((byte)uVar4 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0x2a;
        uVar6 = 0;
        *(undefined2 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x1a) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        in_RAX = (ushort *)((longlong)in_RAX + 1);
        *(byte *)(param_1 + 0x19) = (byte)uVar4;
        *(ushort **)(param_1 + 8) = in_RAX;
      }
    }
    goto LAB_140015451;
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  uVar6 = 1;
  *(byte **)(param_1 + 8) = pbVar1;
  if (*pbVar1 == 0x2a) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    *(byte **)(param_1 + 8) = pbVar3 + 2;
  }
  in_RAX = (ushort *)FUN_140018484(param_1);
  if ((char)in_RAX == '\0') goto LAB_140015408;
  FUN_140018524(param_1);
  cVar2 = **(char **)(param_1 + 8);
  if (cVar2 == 'w') {
    *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + 1;
LAB_1400154be:
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  else if ((cVar2 + 0xbdU & 0xef) == 0) goto LAB_1400154be;
  in_RAX = (ushort *)FUN_1400182b8(param_1);
  if ((char)in_RAX != '\0') {
    in_RAX = (ushort *)&DAT_14002bcc0;
    if ((&DAT_14002bcc0)
        [(longlong)*(int *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 0xc] != '\0') {
LAB_140015451:
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar6);
    }
    *(undefined8 *)(param_1 + 0x10) = 0x16;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_140015408:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




/* ---- 0x14001558c : FUN_14001558c [was: FUN_14001558c] ---- */

undefined8 FUN_14001558c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
}




/* ---- 0x1400155c8 : FUN_1400155c8 [was: FUN_1400155c8] ---- */

undefined8 FUN_1400155c8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
}




/* ---- 0x140015604 : FUN_140015604 [was: FUN_140015604] ---- */

undefined8
FUN_140015604(ulonglong param_1,int param_2,ulonglong param_3,char param_4,undefined8 *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  
  lVar2 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar11 = param_3 & 0xff;
  if (param_1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)lVar2 + 1;
  }
  cVar10 = *(char *)(param_5 + 1);
  iVar7 = ((-(uint)(cVar10 != '\0') & 0x1d) + 0x18) - iVar7;
  iVar12 = param_2 - iVar7;
  iVar13 = (-(uint)(cVar10 != '\0') & 0x380) + 0x7f;
  iVar5 = (int)uVar11;
  if (iVar13 < iVar12) goto LAB_1400158de;
  bVar4 = (byte)param_3;
  if (iVar12 < (int)((-(uint)(cVar10 != '\0') & 0xfffffc80) - 0x7e)) {
    iVar15 = param_2 + -1 + iVar13;
    iVar12 = -iVar13;
    if (iVar15 < 0) {
      if ((uint)-iVar15 < 0x40) {
        bVar6 = (byte)-iVar15;
        uVar14 = 1L << (bVar6 - 1 & 0x3f);
        uVar9 = uVar14 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar14 - 1) != 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((uVar9 != 0) || (bVar3)) {
          iVar13 = fegetround();
          if (iVar13 == 0) {
            if ((uVar9 == 0) || ((bVar4 = 1, !bVar3 && ((1L << (bVar6 & 0x3f) & param_1) == 0))))
            goto LAB_14001576a;
          }
          else if (iVar13 != 0x100) {
            if (iVar13 != 0x200) goto LAB_14001576a;
            bVar4 = bVar4 ^ 1;
          }
        }
        else {
LAB_14001576a:
          bVar4 = 0;
        }
        param_1 = (param_1 >> (bVar6 & 0x3f)) + (ulonglong)bVar4;
      }
      else {
        param_1 = 0;
      }
      cVar10 = *(char *)(param_5 + 1);
      if (param_1 == 0) {
        if (cVar10 == '\0') {
          *(int *)*param_5 = iVar5 << 0x1f;
        }
        else {
          *(ulonglong *)*param_5 = uVar11 << 0x3f;
        }
        return 2;
      }
      if ((-(ulonglong)(cVar10 != '\0') & 0xfffffff800000) + 0x7fffff < param_1) {
        iVar12 = ((param_2 - iVar15) - iVar7) + -1;
      }
      goto LAB_14001591c;
    }
  }
  else {
    if (iVar7 < 0) {
      if ((uint)-iVar7 < 0x40) {
        bVar6 = (byte)-iVar7;
        uVar14 = 1L << (bVar6 - 1 & 0x3f);
        uVar9 = uVar14 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar14 - 1) != 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((uVar9 != 0) || (bVar3)) {
          iVar7 = fegetround();
          if (iVar7 == 0) {
            if ((uVar9 == 0) || ((!bVar3 && ((1L << (bVar6 & 0x3f) & param_1) == 0))))
            goto LAB_14001588b;
            bVar4 = 1;
          }
          else if (iVar7 != 0x100) {
            if (iVar7 != 0x200) goto LAB_14001588b;
            bVar4 = bVar4 ^ 1;
          }
        }
        else {
LAB_14001588b:
          bVar4 = 0;
        }
        param_1 = (param_1 >> (bVar6 & 0x3f)) + (ulonglong)bVar4;
      }
      else {
        param_1 = 0;
      }
      cVar10 = *(char *)(param_5 + 1);
      if ((-(ulonglong)(cVar10 != '\0') & 0x1fffffff000000) + 0xffffff < param_1) {
        param_1 = param_1 >> 1;
        iVar12 = iVar12 + 1;
        if ((int)((-(uint)(cVar10 != '\0') & 0x380) + 0x7f) < iVar12) {
LAB_1400158de:
          if (cVar10 == '\0') {
            *(uint *)*param_5 = iVar5 << 0x1f | 0x7f800000;
          }
          else {
            *(ulonglong *)*param_5 = uVar11 << 0x3f | 0x7ff0000000000000;
          }
          return 3;
        }
      }
      goto LAB_14001591c;
    }
    iVar15 = iVar7;
    if (iVar7 < 1) goto LAB_14001591c;
  }
  param_1 = param_1 << ((byte)iVar15 & 0x3f);
LAB_14001591c:
  puVar1 = (ulonglong *)*param_5;
  uVar14 = (-(ulonglong)(cVar10 != '\0') & 0xfffffff800000) + 0x7fffff & param_1;
  if (cVar10 == '\0') {
    uVar8 = iVar5 << 0x1f | (uint)*puVar1 & 0x7fffffff;
    uVar8 = ((iVar12 + 0x7f) * 0x800000 ^ uVar8) & 0x7f800000 ^ uVar8;
    *(uint *)puVar1 = (uVar8 ^ (uint)uVar14) & 0x7fffff ^ uVar8;
  }
  else {
    uVar9 = (longlong)(iVar12 + 0x3ff) << 0x34;
    *puVar1 = (uVar11 << 0x3f ^ uVar9) & 0x8000000000000000 ^ uVar9 | uVar14;
  }
  return 0;
}




/* ---- 0x1400159bc : FUN_1400159bc [was: FUN_1400159bc] ---- */

void FUN_1400159bc(uint *param_1,uint param_2,ulonglong param_3,byte param_4,undefined8 *param_5)

{
  sbyte sVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  
  uVar8 = 0;
  iVar5 = (-(uint)(*(char *)(param_5 + 1) != '\0') & 0x1d) + 0x17;
  if (param_2 < 0x41) {
    if (*param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulonglong)param_1[1];
      uVar8 = 0;
      if (1 < *param_1) {
        uVar8 = param_1[2];
      }
    }
    bVar11 = param_4 ^ 1;
    uVar4 = ((ulonglong)uVar8 << 0x20) + uVar4;
  }
  else {
    uVar7 = param_2 >> 5;
    uVar6 = uVar7 - 2;
    uVar8 = param_1[(ulonglong)uVar6 + 1];
    uVar9 = param_2 & 0x1f;
    uVar10 = 0;
    if (uVar9 == 0) {
      iVar5 = iVar5 + uVar6 * 0x20;
      uVar4 = CONCAT44(param_1[(ulonglong)(uVar7 - 1) + 1],uVar8);
      bVar11 = param_4 ^ 1;
      uVar8 = 0;
      if (uVar6 != 0) {
        do {
          uVar10 = 0;
          if (param_1[(ulonglong)uVar8 + 1] == 0) {
            uVar10 = (ulonglong)bVar11;
          }
          uVar8 = uVar8 + 1;
          bVar11 = (byte)uVar10;
        } while (uVar8 != uVar6);
      }
    }
    else {
      sVar1 = (sbyte)uVar9;
      iVar5 = uVar6 * 0x20 + uVar9 + iVar5;
      uVar9 = (1 << sVar1) - 1;
      uVar4 = ((ulonglong)param_1[(ulonglong)(uVar7 - 1) + 1] << (-sVar1 + 0x20U & 0x3f)) +
              ((ulonglong)(param_1[(ulonglong)uVar7 + 1] & uVar9) << (-sVar1 + 0x40U & 0x3f)) +
              (ulonglong)((~uVar9 & uVar8) >> sVar1);
      if ((param_4 != 0) || (bVar11 = 1, (uVar9 & uVar8) != 0)) {
        bVar11 = 0;
      }
      uVar2 = 0;
      if (uVar6 != 0) {
        do {
          uVar10 = uVar2;
          bVar3 = 0;
          if (param_1[uVar10 + 1] == 0) {
            bVar3 = bVar11;
          }
          bVar11 = bVar3;
          uVar8 = (int)uVar10 + 1;
          uVar2 = (ulonglong)uVar8;
        } while (uVar8 != uVar6);
      }
    }
    param_3 = CONCAT71((int7)(uVar10 >> 8),(char)param_3);
  }
  FUN_140015604(uVar4,iVar5,param_3,bVar11,param_5);
  return;
}




/* ---- 0x140017d5c : FUN_140017d5c [was: FUN_140017d5c] ---- */

char FUN_140017d5c(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 6) {
    if (iVar2 != 5) {
      if ((iVar2 == 0) || (iVar2 == 1)) {
LAB_140017dbe:
        return (*(char *)(param_1 + 0x2c) != '\0') + '\x01';
      }
      if ((iVar2 != 2) && (iVar2 = iVar2 + -3, iVar2 != 0)) goto LAB_140017db6;
    }
LAB_140017d7c:
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < 6) {
      if (iVar2 != 5) {
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            return '\x01';
          }
          if (iVar2 == 2) {
            return '\x02';
          }
          iVar2 = iVar2 + -3;
          goto LAB_140017d97;
        }
        goto LAB_140017de6;
      }
    }
    else if ((iVar2 != 6) && (iVar2 != 7)) {
      iVar2 = iVar2 + -9;
LAB_140017d97:
      if (iVar2 == 0) goto LAB_140017de6;
      if (iVar2 != 1) {
        return '\0';
      }
    }
    cVar1 = '\b';
  }
  else {
    if (iVar2 == 6) goto LAB_140017d7c;
    if (iVar2 != 7) {
      iVar2 = iVar2 + -8;
      if (iVar2 == 0) goto LAB_140017dbe;
LAB_140017db6:
      if (iVar2 != 1) {
        return '\0';
      }
      goto LAB_140017d7c;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        return '\b';
      }
      if (iVar2 == 8) {
        return '\b';
      }
      return '\0';
    }
LAB_140017de6:
    cVar1 = '\x04';
  }
  return cVar1;
}




/* ---- 0x1400182b8 : FUN_1400182b8 [was: FUN_1400182b8] ---- */

ulonglong FUN_1400182b8(longlong param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  pbVar3 = *(byte **)(param_1 + 8);
  bVar1 = *pbVar3;
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    else if (bVar1 < 0x4a) {
      if (bVar1 == 0x49) {
LAB_1400183f2:
        *(undefined4 *)(param_1 + 0x30) = 2;
      }
      else {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x43) {
LAB_140018331:
            pbVar4 = (byte *)0x0;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              *(undefined8 *)(param_1 + 0x20) = 1;
            }
            iVar2 = *(int *)(param_1 + 0x28);
            if (iVar2 == 2) {
              *(undefined1 *)(param_1 + 0x2c) = 0;
            }
            else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
              *(undefined1 *)(param_1 + 0x2c) = 1;
            }
            *(undefined4 *)(param_1 + 0x30) = 0;
            *(byte **)(param_1 + 8) = pbVar3 + 1;
            goto LAB_14001847e;
          }
          if (((bVar1 != 0x45) && (bVar1 != 0x46)) && (bVar1 != 0x47)) goto LAB_140018415;
        }
LAB_140018300:
        *(undefined4 *)(param_1 + 0x30) = 7;
      }
    }
    else {
      if (bVar1 != 0x53) {
        if (bVar1 == 0x58) goto LAB_14001846f;
        if (bVar1 == 0x5b) {
          iVar2 = *(int *)(param_1 + 0x28);
          if (iVar2 == 2) {
            *(undefined1 *)(param_1 + 0x2c) = 0;
          }
          else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
            *(undefined1 *)(param_1 + 0x2c) = 1;
          }
          *(undefined4 *)(param_1 + 0x30) = 8;
          *(byte **)(param_1 + 8) = pbVar3 + 1;
          uVar5 = FUN_140018634(param_1);
          return uVar5;
        }
        if (bVar1 != 0x61) {
          if (bVar1 != 99) goto LAB_140018415;
          goto LAB_140018331;
        }
        goto LAB_140018300;
      }
LAB_14001843d:
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  else if (bVar1 < 0x70) {
    if (bVar1 == 0x6f) {
      *(undefined4 *)(param_1 + 0x30) = 4;
    }
    else {
      if (((bVar1 == 0x65) || (bVar1 == 0x66)) || (bVar1 == 0x67)) goto LAB_140018300;
      if (bVar1 == 0x69) goto LAB_1400183f2;
      if (bVar1 != 0x6e) {
LAB_140018415:
        *(undefined8 *)(param_1 + 0x10) = 0x16;
        *(undefined2 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x1a) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 9;
    }
  }
  else {
    if (bVar1 == 0x70) {
      *(undefined4 *)(param_1 + 0x28) = 10;
    }
    else {
      if (bVar1 == 0x73) goto LAB_14001843d;
      if (bVar1 == 0x75) {
        *(undefined4 *)(param_1 + 0x30) = 5;
        goto LAB_140018476;
      }
      if (bVar1 != 0x78) goto LAB_140018415;
    }
LAB_14001846f:
    *(undefined4 *)(param_1 + 0x30) = 6;
  }
LAB_140018476:
  pbVar4 = pbVar3 + 1;
  *(byte **)(param_1 + 8) = pbVar4;
LAB_14001847e:
  return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
}




/* ---- 0x140018484 : FUN_140018484 [was: FUN_140018484] ---- */

undefined8 FUN_140018484(longlong param_1)

{
  char *pcVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  longlong local_res8 [4];
  
  pcVar1 = *(char **)(param_1 + 8);
  if ((byte)(*pcVar1 - 0x30U) < 10) {
    uVar2 = (ulonglong)((int)*pcVar1 - 0x30);
  }
  else if ((byte)(*pcVar1 + 0x9fU) < 0x1a) {
    uVar2 = (ulonglong)((int)*pcVar1 - 0x57);
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*pcVar1 + 0xbfU);
    if (0x19 < (byte)(*pcVar1 + 0xbfU)) goto LAB_1400184f2;
    uVar2 = (ulonglong)((int)*pcVar1 - 0x37);
  }
  if ((uint)uVar2 < 10) {
    local_res8[0] = 0;
    uVar2 = FUN_14001da68((longlong)pcVar1,local_res8,10);
    if ((uVar2 == 0) || (local_res8[0] == *(longlong *)(param_1 + 8))) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0x16;
      return uVar2 & 0xffffffffffffff00;
    }
    *(ulonglong *)(param_1 + 0x20) = uVar2;
    *(longlong *)(param_1 + 8) = local_res8[0];
  }
LAB_1400184f2:
  return CONCAT71((int7)(uVar2 >> 8),1);
}




/* ---- 0x140018524 : FUN_140018524 [was: FUN_140018524] ---- */

void FUN_140018524(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 8);
  cVar1 = *pcVar4;
  if (cVar1 == 'I') {
    cVar1 = pcVar4[1];
    if ((cVar1 == '3') && (pcVar4[2] == '2')) {
      pcVar4 = pcVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 9;
      goto LAB_14001862c;
    }
    if (cVar1 == '6') {
      if (pcVar4[2] != '4') {
        return;
      }
      pcVar4 = pcVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 10;
      goto LAB_14001862c;
    }
    if (0x20 < (byte)(cVar1 + 0xa8U)) {
      return;
    }
    if ((0x120821001U >> ((ulonglong)(byte)(cVar1 + 0xa8U) & 0x3f) & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 10;
  }
  else if (cVar1 == 'L') {
    *(undefined4 *)(param_1 + 0x28) = 8;
  }
  else if (cVar1 == 'T') {
    *(undefined4 *)(param_1 + 0x28) = 0xb;
  }
  else {
    if (cVar1 == 'h') {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar3;
      if (cVar1 == 'h') {
        pcVar3 = pcVar4 + 2;
      }
      *(char **)(param_1 + 8) = pcVar3;
      iVar2 = (cVar1 != 'h') + 1;
LAB_1400185c4:
      *(int *)(param_1 + 0x28) = iVar2;
      return;
    }
    if (cVar1 == 'j') {
      *(undefined4 *)(param_1 + 0x28) = 5;
    }
    else {
      if (cVar1 == 'l') {
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar3;
        if (cVar1 == 'l') {
          pcVar3 = pcVar4 + 2;
        }
        *(char **)(param_1 + 8) = pcVar3;
        iVar2 = 4 - (uint)(cVar1 != 'l');
        goto LAB_1400185c4;
      }
      if (cVar1 == 't') {
        *(undefined4 *)(param_1 + 0x28) = 7;
      }
      else {
        if (cVar1 != 'z') {
          return;
        }
        *(undefined4 *)(param_1 + 0x28) = 6;
      }
    }
  }
  pcVar4 = pcVar4 + 1;
LAB_14001862c:
  *(char **)(param_1 + 8) = pcVar4;
  return;
}




/* ---- 0x140018634 : FUN_140018634 [was: FUN_140018634] ---- */

ulonglong FUN_140018634(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  
  pbVar6 = (byte *)(param_1 + 0x34);
  pbVar5 = (byte *)0x0;
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0xc;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    pbVar2 = *(byte **)(param_1 + 8);
    bVar1 = *pbVar2;
    bVar3 = bVar1;
    if (bVar1 == 0x5e) {
      pbVar2 = pbVar2 + 1;
      *(byte **)(param_1 + 8) = pbVar2;
      bVar3 = *pbVar2;
    }
    if (bVar3 == 0x5d) {
      pbVar2 = pbVar2 + 1;
      *(byte **)(param_1 + 8) = pbVar2;
      *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) | 0x20;
    }
    register0x00000020 = (BADSPACEBASE *)pbVar2;
    if (*pbVar2 != 0x5d) {
      bVar3 = *pbVar2;
      do {
        if (bVar3 == 0) break;
        if ((((bVar3 == 0x2d) && ((byte *)((longlong)register0x00000020 + -1) != pbVar5)) &&
            ((byte *)register0x00000020 != pbVar2)) &&
           (*(byte *)((longlong)register0x00000020 + 1) != 0x5d)) {
          bVar3 = *(byte *)((longlong)register0x00000020 + -1);
          pbVar5 = (byte *)((longlong)register0x00000020 + 1);
          bVar4 = bVar3;
          bVar7 = *(byte *)((longlong)register0x00000020 + 1);
          if (bVar3 <= *(byte *)((longlong)register0x00000020 + 1)) {
            bVar4 = *(byte *)((longlong)register0x00000020 + 1);
            bVar7 = bVar3;
          }
          for (; bVar7 != (byte)(bVar4 + 1); bVar7 = bVar7 + 1) {
            *(byte *)((ulonglong)(bVar7 >> 3) + 0x34 + param_1) =
                 *(byte *)((ulonglong)(bVar7 >> 3) + 0x34 + param_1) | (byte)(1 << (bVar7 & 7));
          }
        }
        else {
          *(byte *)((ulonglong)(bVar3 >> 3) + 0x34 + param_1) =
               *(byte *)((ulonglong)(bVar3 >> 3) + 0x34 + param_1) | (byte)(1 << (bVar3 & 7));
        }
        register0x00000020 = (BADSPACEBASE *)(*(longlong *)(param_1 + 8) + 1);
        *(BADSPACEBASE **)(param_1 + 8) = register0x00000020;
        bVar3 = *(byte *)register0x00000020;
      } while (bVar3 != 0x5d);
    }
    if (*(byte *)register0x00000020 != 0) {
      if (bVar1 == 0x5e) {
        for (; pbVar6 != (byte *)(param_1 + 0x54); pbVar6 = pbVar6 + 1) {
          *pbVar6 = ~*pbVar6;
        }
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      return CONCAT71((int7)((ulonglong)register0x00000020 >> 8),1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0x16;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}




/* ---- 0x140018860 : FUN_140018860 [was: FUN_140018860] ---- */

ulonglong FUN_140018860(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  undefined7 extraout_var;
  longlong lVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  *(longlong **)(param_1 + 0x78) = plVar1 + 1;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    p_Var4 = FUN_14001abbc();
    *(undefined4 *)p_Var4 = 0x16;
    uVar5 = FUN_14001925c();
LAB_140018891:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    cVar3 = FUN_140017d5c(param_1 + 0x18);
    lVar6 = CONCAT71(extraout_var,cVar3);
    if (lVar6 == 1) {
      *(char *)puVar2 = (char)param_2;
      uVar5 = 0;
    }
    else if (lVar6 == 2) {
      *(short *)puVar2 = (short)param_2;
      uVar5 = 0;
    }
    else {
      uVar5 = lVar6 - 4;
      if (uVar5 == 0) {
        *(int *)puVar2 = (int)param_2;
      }
      else {
        if (uVar5 != 4) goto LAB_140018891;
        *puVar2 = param_2;
      }
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  return uVar5;
}




/* ---- 0x1400189f0 : FUN_1400189f0 [was: FUN_1400189f0] ---- */

ulonglong FUN_1400189f0(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 auVar6 [16];
  
  if (4 < DAT_14003c320) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0x20 - uVar3;
    }
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (pauVar2 = param_1;
        (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1;
    if (uVar3 == uVar5) {
      pauVar4 = (undefined1 (*) [32])
                ((longlong)pauVar2 +
                ((param_2 - uVar5) - (ulonglong)((uint)(param_2 - uVar5) & 0x1f)));
      while ((pauVar2 != pauVar4 &&
             (auVar1 = vpcmpeqb_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
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
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1;
    }
    return uVar3;
  }
  pauVar2 = param_1;
  if (DAT_14003c320 < 1) {
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
  }
  else {
    uVar3 = (ulonglong)((uint)param_1 & 0xf);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0x10 - uVar3;
    }
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    if ((longlong)pauVar2 - (longlong)param_1 != uVar5) {
      return (longlong)pauVar2 - (longlong)param_1;
    }
    pauVar4 = (undefined1 (*) [32])
              ((longlong)pauVar2 + ((param_2 - uVar5) - (ulonglong)((uint)(param_2 - uVar5) & 0xf)))
    ;
    while ((pauVar2 != pauVar4 &&
           (auVar6[0] = -((*pauVar2)[0] == '\0'), auVar6[1] = -((*pauVar2)[1] == '\0'),
           auVar6[2] = -((*pauVar2)[2] == '\0'), auVar6[3] = -((*pauVar2)[3] == '\0'),
           auVar6[4] = -((*pauVar2)[4] == '\0'), auVar6[5] = -((*pauVar2)[5] == '\0'),
           auVar6[6] = -((*pauVar2)[6] == '\0'), auVar6[7] = -((*pauVar2)[7] == '\0'),
           auVar6[8] = -((*pauVar2)[8] == '\0'), auVar6[9] = -((*pauVar2)[9] == '\0'),
           auVar6[10] = -((*pauVar2)[10] == '\0'), auVar6[0xb] = -((*pauVar2)[0xb] == '\0'),
           auVar6[0xc] = -((*pauVar2)[0xc] == '\0'), auVar6[0xd] = -((*pauVar2)[0xd] == '\0'),
           auVar6[0xe] = -((*pauVar2)[0xe] == '\0'), auVar6[0xf] = -((*pauVar2)[0xf] == '\0'),
           (((((((((((((((SUB161(auVar6 >> 7,0) & 1) == 0 && (SUB161(auVar6 >> 0xf,0) & 1) == 0) &&
                       (SUB161(auVar6 >> 0x17,0) & 1) == 0) && (SUB161(auVar6 >> 0x1f,0) & 1) == 0)
                     && (SUB161(auVar6 >> 0x27,0) & 1) == 0) && (SUB161(auVar6 >> 0x2f,0) & 1) == 0)
                   && (SUB161(auVar6 >> 0x37,0) & 1) == 0) && (SUB161(auVar6 >> 0x3f,0) & 1) == 0)
                 && (SUB161(auVar6 >> 0x47,0) & 1) == 0) && (SUB161(auVar6 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar6 >> 0x57,0) & 1) == 0) && (SUB161(auVar6 >> 0x5f,0) & 1) == 0) &&
             (SUB161(auVar6 >> 0x67,0) & 1) == 0) && (SUB161(auVar6 >> 0x6f,0) & 1) == 0) &&
           (SUB161(auVar6 >> 0x77,0) & 1) == 0) && -1 < auVar6[0xf]))) {
      pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
    }
    if (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2)) {
      while ((*pauVar2)[0] != '\0') {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2)) {
          return (longlong)pauVar2 - (longlong)param_1;
        }
      }
    }
  }
  return (longlong)pauVar2 - (longlong)param_1;
}




/* ---- 0x140018cd0 : FUN_140018cd0 [was: FUN_140018cd0] ---- */

ulonglong FUN_140018cd0(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined1 auVar6 [16];
  
  if (4 < DAT_14003c320) {
    if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0x1f);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x20 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (pauVar2 = param_1;
          (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar4 * 2);
      while ((pauVar2 !=
              (undefined1 (*) [32])
              ((longlong)param_1 +
              (((param_2 - uVar3) - (ulonglong)((uint)(param_2 - uVar3) & 0x1f)) + uVar4) * 2) &&
             (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
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
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0))
          ; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      pauVar2 = param_1;
      if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
        while (*(short *)*pauVar2 != 0) {
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2);
          if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
            return (longlong)pauVar2 - (longlong)param_1 >> 1;
          }
        }
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (DAT_14003c320 < 1) {
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      for (psVar5 = (short *)(*param_1 + uVar4 * 2);
          psVar5 != (short *)((longlong)param_1 +
                             (((param_2 - uVar3) - (ulonglong)((uint)(param_2 - uVar3) & 0xf)) +
                             uVar4) * 2); psVar5 = psVar5 + 8) {
        auVar6._0_2_ = -(ushort)(*psVar5 == 0);
        auVar6._2_2_ = -(ushort)(psVar5[1] == 0);
        auVar6._4_2_ = -(ushort)(psVar5[2] == 0);
        auVar6._6_2_ = -(ushort)(psVar5[3] == 0);
        auVar6._8_2_ = -(ushort)(psVar5[4] == 0);
        auVar6._10_2_ = -(ushort)(psVar5[5] == 0);
        auVar6._12_2_ = -(ushort)(psVar5[6] == 0);
        auVar6._14_2_ = -(ushort)(psVar5[7] == 0);
        if ((((((((((((((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar6 >> 0x17,0) & 1) != 0) || (SUB161(auVar6 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar6 >> 0x27,0) & 1) != 0) || (SUB161(auVar6 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar6 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar6 >> 0x3f,0) & 1) != 0) || (SUB161(auVar6 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar6 >> 0x4f,0) & 1) != 0) || (SUB161(auVar6 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar6 >> 0x5f,0) & 1) != 0) || (SUB161(auVar6 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar6 >> 0x6f,0) & 1) != 0) || (auVar6._14_2_ >> 7 & 1) != 0) ||
            (auVar6._14_2_ & 0x8000) != 0) break;
      }
      for (; (psVar5 != (short *)(*param_1 + param_2 * 2) && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
      }
      return (longlong)psVar5 - (longlong)param_1 >> 1;
    }
    if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
      while (*(short *)*pauVar2 != 0) {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
          return (longlong)pauVar2 - (longlong)param_1 >> 1;
        }
      }
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}




/* ---- 0x140018ed8 : FUN_140018ed8 [was: FUN_140018ed8] ---- */

__acrt_ptd * FUN_140018ed8(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  p_Var1 = (__acrt_ptd *)*param_1;
  lVar2 = 0;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_14001b1d8(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
  }
  return p_Var1;
}




/* ---- 0x140018f44 : FUN_140018f44 [was: FUN_140018f44] ---- */

longlong FUN_140018f44(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}




/* ---- 0x140019100 : FUN_140019100 [was: FUN_140019100] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140019100(undefined8 param_1)

{
  _DAT_14003d5d0 = param_1;
  return;
}




/* ---- 0x140019108 : FUN_140019108 [was: FUN_140019108] ---- */

void FUN_140019108(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  )

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_14003d760 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14003c5d8;
    puStack_28 = PTR_DAT_14003c5e0;
  }
  FUN_1400191a4(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_140010320(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_140010320(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}




/* ---- 0x14001925c : FUN_14001925c [was: FUN_14001925c] ---- */

void FUN_14001925c(void)

{
  FUN_140019108((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}




/* ---- 0x140019310 : FUN_140019310 [was: FUN_140019310] ---- */

void FUN_140019310(undefined8 param_1)

{
  DAT_14003d5d8 = param_1;
  return;
}




/* ---- 0x140019554 : FUN_140019554 [was: FUN_140019554] ---- */

undefined4 FUN_140019554(void)

{
  return DAT_14003d5e0;
}




/* ---- 0x14001955c : FUN_14001955c [was: FUN_14001955c] ---- */

void FUN_14001955c(undefined4 param_1)

{
  DAT_14003d5e0 = param_1;
  return;
}




/* ---- 0x140019590 : FUN_140019590 [was: FUN_140019590] ---- */

void FUN_140019590(undefined8 param_1)

{
  DAT_14003d5e8 = param_1;
  return;
}




/* ---- 0x1400195f4 : FUN_1400195f4 [was: FUN_1400195f4] ---- */

void FUN_1400195f4(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar2 = !bVar2;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = FUN_14001f5a0((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_1400196a6;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_1400196a6:
  bVar2 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar2 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar1) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = FUN_14001f5a0((int)*pcVar6);
        if (iVar5 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}




/* ---- 0x140019994 : FUN_140019994 [was: FUN_140019994] ---- */

undefined8 FUN_140019994(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_14003d6f8 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pcVar2 = FUN_14001f724();
    if (pcVar2 == (char *)0x0) {
      FUN_14001b320((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_140019a08(pcVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_14003d6f8;
        puVar1 = DAT_14003d710;
      }
      DAT_14003d710 = puVar1;
      DAT_14003d6f8 = puVar4;
      FUN_14001b320((LPVOID)0x0);
      FUN_14001b320(pcVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




/* ---- 0x140019c78 : FUN_140019c78 [was: FUN_140019c78] ---- */

longlong FUN_140019c78(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14003d6f8;
  if ((DAT_14003d6f8 == 0) &&
     ((DAT_14003d700 == 0 ||
      ((uVar1 = FUN_140019994(), lVar2 = DAT_14003d6f8, (int)uVar1 != 0 &&
       (uVar1 = FUN_140019b60(), lVar2 = DAT_14003d6f8, (int)uVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}




/* ---- 0x140019ebc : FUN_140019ebc [was: FUN_140019ebc] ---- */

void FUN_140019ebc(uint param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  HMODULE pHVar4;
  undefined7 extraout_var;
  int *piVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34 [3];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar4 != (HMODULE)0x0) && ((short)pHVar4->unused == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)&pHVar4->unused + (longlong)pHVar4[0xf].unused),
        *piVar5 == 0x4550)) &&
       ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_140019fd0(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34[0] = 2;
  local_34[1] = 2;
  operator()<>(local_38,local_34 + 1,&local_20,local_34);
  if (local_res18[0] == 0) {
    bVar2 = FUN_14001fcb0();
    if ((int)CONCAT71(extraout_var,bVar2) == 1) {
      bVar2 = false;
    }
    else {
      uVar3 = FUN_14001fc7c();
      bVar2 = (char)uVar3 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_140019fa0(param_1,bVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}




/* ---- 0x140019fa0 : FUN_140019fa0 [was: FUN_140019fa0] ---- */

void FUN_140019fa0(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_140019fd0(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}




/* ---- 0x14001a034 : FUN_14001a034 [was: FUN_14001a034] ---- */

void FUN_14001a034(undefined8 param_1)

{
  DAT_14003d720 = param_1;
  return;
}




/* ---- 0x14001a05c : FUN_14001a05c [was: FUN_14001a05c] ---- */

void FUN_14001a05c(uint param_1)

{
  FUN_140019ebc(param_1,2,0);
  return;
}




/* ---- 0x14001a0a4 : FUN_14001a0a4 [was: FUN_14001a0a4] ---- */

void FUN_14001a0a4(uint param_1)

{
  FUN_140019ebc(param_1,0,0);
  return;
}




/* ---- 0x14001a0f0 : FUN_14001a0f0 [was: FUN_14001a0f0] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14001a0f0(void)

{
  DAT_14003d750 = GetCommandLineA();
  _DAT_14003d758 = GetCommandLineW();
  return 1;
}




/* ---- 0x14001a118 : FUN_14001a118 [was: FUN_14001a118] ---- */

undefined * FUN_14001a118(void)

{
  return &DAT_14003d738;
}




/* ---- 0x14001a120 : FUN_14001a120 [was: FUN_14001a120] ---- */

undefined8 * FUN_14001a120(void)

{
  return &DAT_14003d740;
}




/* ---- 0x14001a240 : FUN_14001a240 [was: FUN_14001a240] ---- */

undefined4 FUN_14001a240(void)

{
  return DAT_14003d764;
}




/* ---- 0x14001a27c : FUN_14001a27c [was: FUN_14001a27c] ---- */

undefined * FUN_14001a27c(void)

{
  return &DAT_14003d768;
}




/* ---- 0x14001a5c4 : FUN_14001a5c4 [was: FUN_14001a5c4] ---- */

void FUN_14001a5c4(undefined8 param_1)

{
  _register_onexit_function(&DAT_14003d770,param_1);
  return;
}




/* ---- 0x14001a5d4 : FUN_14001a5d4 [was: FUN_14001a5d4] ---- */

void FUN_14001a5d4(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}




/* ---- 0x14001a69c : FUN_14001a69c [was: FUN_14001a69c] ---- */

undefined8 FUN_14001a69c(void)

{
  undefined8 uVar1;
  
  _initialize_onexit_table((longlong *)&DAT_14003d770);
  uVar1 = _initialize_onexit_table((longlong *)&DAT_14003d788);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




/* ---- 0x14001a6c0 : FUN_14001a6c0 [was: FUN_14001a6c0] ---- */

undefined1 FUN_14001a6c0(void)

{
  FUN_140019cb4();
  return 1;
}




/* ---- 0x14001a758 : FUN_14001a758 [was: FUN_14001a758] ---- */

undefined1 FUN_14001a758(void)

{
  FUN_14001b320(DAT_14003dc98);
  DAT_14003dc98 = (LPVOID)0x0;
  FUN_14001b320(DAT_14003dca0);
  DAT_14003dca0 = (LPVOID)0x0;
  FUN_14001b320(DAT_14003d740);
  DAT_14003d740 = (LPVOID)0x0;
  FUN_14001b320(DAT_14003d748);
  DAT_14003d748 = (LPVOID)0x0;
  return 1;
}




/* ---- 0x14001a7b4 : FUN_14001a7b4 [was: FUN_14001a7b4] ---- */

void FUN_14001a7b4(void)

{
  FUN_140020988(&PTR_LAB_14002bf10,(undefined8 *)&DAT_14002c010);
  return;
}




/* ---- 0x14001a820 : FUN_14001a820 [was: FUN_14001a820] ---- */

undefined8 FUN_14001a820(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (longlong)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      p_Var2 = FUN_14001abbc();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_14001925c();
      return 0x22;
    }
    *param_1 = '\0';
  }
  p_Var2 = FUN_14001abbc();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_14001925c();
  return 0x16;
}




/* ---- 0x14001a8a0 : FUN_14001a8a0 [was: FUN_14001a8a0] ---- */

void FUN_14001a8a0(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_140020adc(0x16);
  }
  if ((DAT_14003c460 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x14001a8eb;
    FUN_140018f90(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -8) = &UNK_14001a8f5;
  FUN_14001a05c(3);
}




/* ---- 0x14001ab4c : FUN_14001ab4c [was: FUN_14001ab4c] ---- */

void FUN_14001ab4c(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = FUN_14001ab98();
  *(uint *)p_Var2 = param_1;
  uVar1 = FUN_14001aa7c(param_1);
  p_Var2 = FUN_14001abbc();
  *(uint *)p_Var2 = uVar1;
  return;
}




/* ---- 0x14001ab74 : FUN_14001ab74 [was: FUN_14001ab74] ---- */

void FUN_14001ab74(uint param_1,longlong param_2)

{
  uint uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(uint *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_14001aa7c(param_1);
  *(uint *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}




/* ---- 0x14001ab98 : FUN_14001ab98 [was: FUN_14001ab98] ---- */

__acrt_ptd * FUN_14001ab98(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_14001b148();
  p_Var2 = p_Var1 + 0x24;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_14003c474;
  }
  return p_Var2;
}




/* ---- 0x14001ac14 : FUN_14001ac14 [was: FUN_14001ac14] ---- */

void FUN_14001ac14(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined **ppuVar1;
  
  if ((*param_2 != (&DAT_14003d7a8)[param_3]) && ((DAT_14003cc20 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}




/* ---- 0x14001ac4c : FUN_14001ac4c [was: FUN_14001ac4c] ---- */

void FUN_14001ac4c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_14003df20) && ((DAT_14003cc20 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_14001f248();
    *param_2 = lVar1;
  }
  return;
}




/* ---- 0x14001ac80 : FUN_14001ac80 [was: FUN_14001ac80] ---- */

void FUN_14001ac80(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_14003df20)[param_3]) && ((DAT_14003cc20 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_14001f248();
    *param_2 = lVar1;
  }
  return;
}




/* ---- 0x14001aeb0 : FUN_14001aeb0 [was: FUN_14001aeb0] ---- */

void FUN_14001aeb0(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_14001b320(param_1);
  }
  return;
}




/* ---- 0x14001b0e8 : FUN_14001b0e8 [was: FUN_14001b0e8] ---- */

void FUN_14001b0e8(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_14001b148();
  if (p_Var1 != (__acrt_ptd *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14001b104 : FUN_14001b104 [was: FUN_14001b104] ---- */

void FUN_14001b104(void)

{
  PVOID pvVar1;
  __acrt_ptd *p_Var2;
  
  if (DAT_14003c478 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_14003c478);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      p_Var2 = FUN_14001afc8();
      if (p_Var2 == (__acrt_ptd *)0x0) goto LAB_14001b140;
    }
    return;
  }
LAB_14001b140:
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14001b1d8 : FUN_14001b1d8 [was: FUN_14001b1d8] ---- */

__acrt_ptd * FUN_14001b1d8(undefined8 param_1,longlong param_2)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  p_Var1 = p_Var2;
  if (DAT_14003c478 != 0xffffffff) {
    p_Var1 = FlsGetValue(DAT_14003c478);
  }
  if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
     ((p_Var1 != (__acrt_ptd *)0x0 || (p_Var1 = FUN_14001afc8(), p_Var1 != (__acrt_ptd *)0x0)))) {
    p_Var2 = p_Var1 + param_2 * 0x3c8;
  }
  return p_Var2;
}




/* ---- 0x14001b234 : FUN_14001b234 [was: FUN_14001b234] ---- */

ulonglong FUN_14001b234(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var_00;
  undefined4 extraout_var;
  
  DAT_14003d7a0 = FUN_14001b88c();
  DAT_14003c478 = FlsAlloc(FUN_14001aeb0);
  uVar2 = CONCAT44(extraout_var,DAT_14003c478);
  if (DAT_14003c478 != 0xffffffff) {
    p_Var3 = FUN_14001b148();
    if (p_Var3 != (__acrt_ptd *)0x0) {
      return CONCAT71((int7)((ulonglong)p_Var3 >> 8),1);
    }
    uVar1 = FUN_14001b278();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}




/* ---- 0x14001b6e8 : FUN_14001b6e8 [was: FUN_14001b6e8] ---- */

void FUN_14001b6e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014001b6ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_140041018)();
  return;
}




/* ---- 0x14001b85c : FUN_14001b85c [was: FUN_14001b85c] ---- */

bool FUN_14001b85c(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_140041000,0x100,2,local_res8);
  return BVar1 != 0;
}




/* ---- 0x14001b88c : FUN_14001b88c [was: FUN_14001b88c] ---- */

bool FUN_14001b88c(void)

{
  FARPROC pFVar1;
  bool bVar2;
  
  if (DAT_140041018 == -1) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    bVar2 = DAT_140041018 == 0;
    if (!bVar2) goto LAB_14001b8c6;
    pFVar1 = FUN_14001b3b0(3,"FlsGetValue2",(uint *)&DAT_14002d418,(uint *)"FlsGetValue2");
  }
  bVar2 = pFVar1 == (FARPROC)0x0;
LAB_14001b8c6:
  return !bVar2;
}




/* ---- 0x14001b9c8 : FUN_14001b9c8 [was: FUN_14001b9c8] ---- */

void FUN_14001b9c8(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_1400106c0(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_14001bc34(*(FILE **)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_1400106cc(*param_4);
  return;
}




/* ---- 0x14001bc34 : FUN_14001bc34 [was: FUN_14001bc34] ---- */

int FUN_14001bc34(FILE *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_14003d760 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14003c5d8;
    puStack_28 = PTR_DAT_14003c5e0;
  }
  if (param_1 == (FILE *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_14001bcb9;
  }
  uVar2 = FUN_14001bba8(param_1,local_48);
  if ((int)uVar2 == 0) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xb & 1) != 0) {
      iVar1 = _fileno(param_1);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_14001bc94;
    }
    iVar1 = 0;
  }
  else {
LAB_14001bc94:
    iVar1 = -1;
  }
LAB_14001bcb9:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_140010320(local_48);
    *(undefined4 *)(lVar3 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_140010320(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar1;
}




/* ---- 0x14001bd54 : FUN_14001bd54 [was: FUN_14001bd54] ---- */

void FUN_14001bd54(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;
  
  FUN_1400280c0((undefined1 (*) [32])&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  lVar5 = 0;
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_14003dc70 < (int)uVar7) {
      uVar7 = DAT_14003dc70;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      do {
        if ((((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0))
           && (((*puVar6 & 8) != 0 || (DVar2 = GetFileType(*(HANDLE *)pbVar4), DVar2 != 0)))) {
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_14003d870)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}




/* ---- 0x14001be54 : FUN_14001be54 [was: FUN_14001be54] ---- */

void FUN_14001be54(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_14003d870)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_14001bf32;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_14003d5c0 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_14003d5c0) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_14001bf32:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}




/* ---- 0x14001c1d0 : FUN_14001c1d0 [was: FUN_14001c1d0] ---- */

undefined8
FUN_14001c1d0(double *param_1,undefined1 (*param_2) [16],ulonglong param_3,char *param_4,
             longlong param_5,uint param_6,byte param_7,int param_8,__acrt_rounding_mode param_9,
             longlong *param_10)

{
  undefined1 (*pauVar1) [32];
  char *pcVar2;
  undefined1 (*pauVar3) [32];
  undefined1 uVar4;
  bool bVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [32];
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  short sVar13;
  short sVar14;
  undefined1 (*pauVar15) [32];
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  (*param_2)[0] = 0;
  uVar16 = 0;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  if (param_3 <= (ulonglong)(longlong)(int)(uVar16 + 0xb)) {
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x22;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
    return 0x22;
  }
  if (((ulonglong)*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    uVar7 = FUN_14001c564((ulonglong *)param_1,*param_2,param_3,param_4,param_5,uVar16,'\0',param_8,
                          param_9,param_10);
    if ((int)uVar7 != 0) {
      (*param_2)[0] = 0;
      return uVar7;
    }
    pauVar8 = FUN_14002785c(param_2,0x65);
    if (pauVar8 == (undefined1 (*) [16])0x0) {
      return 0;
    }
    (*pauVar8)[0] = (param_7 ^ 1) * ' ' + 'P';
    (*pauVar8)[3] = 0;
    return 0;
  }
  if ((longlong)*param_1 < 0) {
    (*param_2)[0] = 0x2d;
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
  }
  pauVar1 = (undefined1 (*) [32])(*param_2 + 1);
  uVar19 = 0x3ff;
  sVar14 = (ushort)(param_7 ^ 1) * 0x20 + 7;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    (*param_2)[0] = 0x30;
    uVar19 = (ulonglong)(-(uint)(((ulonglong)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
  }
  else {
    (*param_2)[0] = 0x31;
  }
  pauVar15 = (undefined1 (*) [32])(*param_2 + 2);
  if (uVar16 == 0) {
    uVar4 = 0;
  }
  else {
    if ((char)param_10[5] == '\0') {
      FUN_140010390(param_10);
    }
    uVar4 = *(undefined1 *)**(undefined8 **)(param_10[3] + 0xf8);
  }
  (*pauVar1)[0] = uVar4;
  if (((ulonglong)*param_1 & 0xfffffffffffff) != 0) {
    sVar13 = 0x30;
    uVar18 = 0xf000000000000;
    while (0 < (int)uVar16) {
      uVar6 = (short)(((ulonglong)*param_1 & uVar18) >> ((byte)sVar13 & 0x3f)) + 0x30;
      if (0x39 < uVar6) {
        uVar6 = uVar6 + sVar14;
      }
      (*pauVar15)[0] = (char)uVar6;
      uVar16 = uVar16 - 1;
      pauVar15 = (undefined1 (*) [32])(*pauVar15 + 1);
      uVar18 = uVar18 >> 4;
      sVar13 = sVar13 + -4;
      if (sVar13 < 0) goto LAB_14001c422;
    }
    bVar5 = should_round_up(param_1,uVar18,sVar13,param_9);
    pauVar3 = pauVar15;
    if (!bVar5) goto LAB_14001c448;
    while( true ) {
      pauVar9 = (undefined1 (*) [32])(pauVar3[-1] + 0x1f);
      cVar12 = (*pauVar9)[0];
      if ((cVar12 + 0xbaU & 0xdf) != 0) break;
      (*pauVar9)[0] = 0x30;
      pauVar3 = pauVar9;
    }
    if (pauVar9 == pauVar1) {
      pauVar3[-1][0x1e] = pauVar3[-1][0x1e] + '\x01';
    }
    else {
      if (cVar12 == '9') {
        cVar12 = (char)sVar14 + '9';
      }
      (*pauVar9)[0] = cVar12 + '\x01';
    }
  }
LAB_14001c422:
  if (0 < (int)uVar16) {
    FUN_1400280c0(pauVar15,0x30,(ulonglong)uVar16);
    pauVar15 = (undefined1 (*) [32])(*pauVar15 + uVar16);
  }
LAB_14001c448:
  if ((*pauVar1)[0] == '\0') {
    pauVar15 = pauVar1;
  }
  (*pauVar15)[0] = (param_7 ^ 1) * ' ' + 'P';
  pcVar2 = *pauVar15 + 2;
  uVar16 = (uint)((ulonglong)*param_1 >> 0x34) & 0x7ff;
  lVar10 = uVar16 - uVar19;
  lVar11 = lVar10;
  if (lVar10 < 0) {
    lVar11 = uVar19 - uVar16;
  }
  uVar4 = 0x2b;
  if (lVar10 < 0) {
    uVar4 = 0x2d;
  }
  (*pauVar15)[1] = uVar4;
  *pcVar2 = '0';
  pcVar17 = pcVar2;
  if (lVar11 < 1000) {
LAB_14001c4cf:
    if (99 < lVar11) goto LAB_14001c4d5;
LAB_14001c508:
    if (lVar11 < 10) goto LAB_14001c539;
  }
  else {
    pcVar17 = *pauVar15 + 3;
    *pcVar2 = (char)(lVar11 / 1000) + '0';
    lVar11 = lVar11 % 1000;
    if (pcVar17 == pcVar2) goto LAB_14001c4cf;
LAB_14001c4d5:
    lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar11),8) + lVar11;
    lVar10 = (lVar10 >> 6) - (lVar10 >> 0x3f);
    *pcVar17 = (char)lVar10 + '0';
    pcVar17 = pcVar17 + 1;
    lVar11 = lVar11 + lVar10 * -100;
    if (pcVar17 == pcVar2) goto LAB_14001c508;
  }
  *pcVar17 = (char)(lVar11 / 10) + '0';
  pcVar17 = pcVar17 + 1;
  lVar11 = lVar11 % 10;
LAB_14001c539:
  *pcVar17 = (char)lVar11 + '0';
  pcVar17[1] = '\0';
  return 0;
}




/* ---- 0x14001c564 : FUN_14001c564 [was: FUN_14001c564] ---- */

void FUN_14001c564(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,char *param_4,
                  longlong param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar2 = FUN_140022a30(*param_1,param_6 + 1,1,local_18,param_4,param_5);
  uVar3 = (param_3 - (0 < param_6)) - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == 0xffffffffffffffff) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar1 = FUN_140022920(param_2 + (ulonglong)(0 < param_6) + (ulonglong)(local_18[0] == 0x2d),uVar3,
                        param_6 + 1,local_18,(int)uVar2,param_9,param_10);
  if (iVar1 == 0) {
    FUN_14001c668(param_2,param_3,param_6,param_7,param_8,local_18,0,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}




/* ---- 0x14001c668 : FUN_14001c668 [was: FUN_14001c668] ---- */

undefined8
FUN_14001c668(undefined1 *param_1,ulonglong param_2,int param_3,char param_4,int param_5,
             int *param_6,byte param_7,longlong *param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  if (0 < param_3) {
    iVar5 = param_3;
  }
  if ((ulonglong)(longlong)(iVar5 + 9) < param_2) {
    if ((param_7 != 0) && (puVar2 = (undefined8 *)(param_1 + (*param_6 == 0x2d)), 0 < param_3)) {
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (*(char *)((longlong)puVar2 + lVar6) != '\0');
      FUN_140027a20((undefined8 *)((longlong)puVar2 + 1),puVar2,lVar7 + 2);
    }
    puVar3 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = 0x2d;
      puVar3 = param_1 + 1;
    }
    if (0 < param_3) {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      if ((char)param_8[5] == '\0') {
        FUN_140010390(param_8);
      }
      *puVar3 = *(undefined1 *)**(undefined8 **)(param_8[3] + 0xf8);
    }
    pcVar4 = puVar3 + ((ulonglong)param_7 ^ 1) + (longlong)param_3;
    puVar3 = param_1 + (param_2 - (longlong)pcVar4);
    if (param_2 == 0xffffffffffffffff) {
      puVar3 = (undefined1 *)0xffffffffffffffff;
    }
    uVar1 = FUN_14001a820(pcVar4,(longlong)puVar3,0x14002d55c);
    if ((int)uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *pcVar4 = 'E';
    }
    if (**(char **)(param_6 + 2) != '0') {
      iVar5 = param_6[1] + -1;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        pcVar4[1] = '-';
      }
      if (99 < iVar5) {
        pcVar4[2] = pcVar4[2] + (char)(iVar5 / 100);
        iVar5 = iVar5 % 100;
      }
      if (9 < iVar5) {
        pcVar4[3] = pcVar4[3] + (char)(iVar5 / 10);
        iVar5 = iVar5 % 10;
      }
      pcVar4[4] = pcVar4[4] + (char)iVar5;
    }
    if ((param_5 == 2) && (pcVar4[2] == '0')) {
      FUN_140027a20((undefined8 *)(pcVar4 + 2),(undefined8 *)(pcVar4 + 3),3);
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_8 + 6) = 1;
    *(undefined4 *)((longlong)param_8 + 0x2c) = 0x22;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_8);
    uVar1 = 0x22;
  }
  return uVar1;
}




/* ---- 0x14001c84c : FUN_14001c84c [was: FUN_14001c84c] ---- */

void FUN_14001c84c(ulonglong *param_1,undefined8 *param_2,longlong param_3,char *param_4,
                  longlong param_5,int param_6,int param_7,longlong *param_8)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar2 = FUN_140022a30(*param_1,param_6,0,local_18,param_4,param_5);
  uVar3 = param_3 - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == -1) {
    uVar3 = 0xffffffffffffffff;
  }
  iVar1 = FUN_140022920((char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2),uVar3,
                        local_18[1] + param_6,local_18,(int)uVar2,param_7,param_8);
  if (iVar1 == 0) {
    FUN_14001c924(param_2,param_3,param_6,local_18,'\0',param_8);
  }
  else {
    *(undefined1 *)param_2 = 0;
  }
  return;
}




/* ---- 0x14001c924 : FUN_14001c924 [was: FUN_14001c924] ---- */

undefined8
FUN_14001c924(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,
             longlong *param_6)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(undefined2 *)((longlong)param_1 + (longlong)param_4[1] + -1 + (ulonglong)(*param_4 == 0x2d)) =
         0x30;
  }
  if (*param_4 == 0x2d) {
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (undefined8 *)((longlong)param_1 + 1);
  }
  iVar3 = param_4[1];
  if (iVar3 < 1) {
    if ((iVar3 == 0) && (**(char **)(param_4 + 2) == '0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((param_5 == '\0') || (!bVar2)) {
      lVar6 = -1;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
      } while (*(char *)((longlong)param_1 + lVar6) != '\0');
      FUN_140027a20((undefined8 *)((longlong)param_1 + 1),param_1,lVar5 + 2);
    }
    *(undefined1 *)param_1 = 0x30;
    puVar4 = (undefined8 *)((longlong)param_1 + 1);
  }
  else {
    puVar4 = (undefined8 *)((longlong)param_1 + (longlong)iVar3);
  }
  if (0 < param_3) {
    pauVar1 = (undefined1 (*) [32])((longlong)puVar4 + 1);
    lVar6 = -1;
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (*(char *)((longlong)puVar4 + lVar6) != '\0');
    FUN_140027a20((undefined8 *)pauVar1,puVar4,lVar5 + 2);
    if ((char)param_6[5] == '\0') {
      FUN_140010390(param_6);
    }
    *(undefined1 *)puVar4 = *(undefined1 *)**(undefined8 **)(param_6[3] + 0xf8);
    if (param_4[1] < 0) {
      iVar3 = -param_4[1];
      if ((param_5 != '\0') || (iVar3 < param_3)) {
        param_3 = iVar3;
      }
      lVar6 = -1;
      do {
        lVar5 = lVar6;
        lVar6 = lVar5 + 1;
      } while ((*pauVar1)[lVar6] != '\0');
      FUN_140027a20((undefined8 *)(*pauVar1 + param_3),(undefined8 *)pauVar1,lVar5 + 2);
      FUN_1400280c0(pauVar1,0x30,(longlong)param_3);
    }
  }
  return 0;
}




/* ---- 0x14001ca74 : FUN_14001ca74 [was: FUN_14001ca74] ---- */

void FUN_14001ca74(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,char *param_4,
                  longlong param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar3 = FUN_140022a30(*param_1,param_6,0,local_18,param_4,param_5);
  uVar4 = param_3 - (local_18[0] == 0x2d);
  iVar6 = local_18[1] + -1;
  pcVar1 = (char *)((ulonglong)(local_18[0] == 0x2d) + (longlong)param_2);
  if (param_3 == 0xffffffffffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  iVar2 = FUN_140022920(pcVar1,uVar4,param_6,local_18,(int)uVar3,param_9,param_10);
  if (iVar2 == 0) {
    iVar2 = local_18[1] + -1;
    if ((iVar2 < -4) || (param_6 <= iVar2)) {
      FUN_14001c668((undefined1 *)param_2,param_3,param_6,param_7,param_8,local_18,1,param_10);
    }
    else {
      if (iVar6 < iVar2) {
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      FUN_14001c924(param_2,param_3,param_6,local_18,'\x01',param_10);
    }
  }
  else {
    *(undefined1 *)param_2 = 0;
  }
  return;
}




/* ---- 0x14001cce0 : FUN_14001cce0 [was: FUN_14001cce0] ---- */

undefined8
FUN_14001cce0(double *param_1,undefined1 (*param_2) [16],ulonglong param_3,char *param_4,
             longlong param_5,int param_6,uint param_7,ulonglong param_8,
             __acrt_rounding_mode param_9,longlong *param_10)

{
  double dVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  __acrt_rounding_mode _Var5;
  byte bVar6;
  ulonglong uVar7;
  
  if (param_2 == (undefined1 (*) [16])0x0) {
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x16;
  }
  else {
    if (((param_3 != 0) && (param_4 != (char *)0x0)) && (param_5 != 0)) {
      if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      bVar6 = (byte)uVar4;
      if (((param_8 & 8) == 0) &&
         (dVar1 = *param_1, ((uint)((ulonglong)dVar1 >> 0x34) & 0x7ff) == 0x7ff)) {
        if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) {
          lVar3 = 0;
        }
        else if (((longlong)dVar1 < 0) && (((ulonglong)dVar1 & 0xfffffffffffff) == 0x8000000000000))
        {
          lVar3 = 0xc;
        }
        else {
          lVar3 = (-(ulonglong)(((ulonglong)dVar1 & 0x8000000000000) != 0) & 0xfffffffffffffffc) + 8
          ;
        }
        if (param_3 < 4U - ((longlong)dVar1 >> 0x3f)) {
          (*param_2)[0] = 0;
          return 0xc;
        }
        uVar7 = 0xffffffffffffffff;
        if ((longlong)dVar1 < 0) {
          (*param_2)[0] = 0x2d;
          param_2 = (undefined1 (*) [16])(*param_2 + 1);
          (*param_2)[0] = 0;
          if (param_3 != 0xffffffffffffffff) {
            param_3 = param_3 - 1;
          }
        }
        uVar4 = (uVar4 ^ 1) * 2;
        do {
          uVar7 = uVar7 + 1;
        } while ((&PTR_DAT_14002d490)[(ulonglong)uVar4 + lVar3][uVar7] != '\0');
        uVar2 = FUN_14001a820((char *)param_2,param_3,
                              (longlong)
                              (&PTR_DAT_14002d490)[(ulonglong)(uVar4 + (param_3 <= uVar7)) + lVar3])
        ;
        if ((int)uVar2 == 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = (uint)(param_8 >> 4);
      _Var5 = -(uint)((param_8 & 0x20) != 0) & param_9;
      if (param_6 != 0x41) {
        if (param_6 == 0x45) {
LAB_14001cf2d:
          uVar2 = FUN_14001c564((ulonglong *)param_1,*param_2,param_3,param_4,param_5,param_7,bVar6,
                                uVar4 & 1 | 2,_Var5,param_10);
          return uVar2;
        }
        if (param_6 == 0x46) {
LAB_14001cefc:
          uVar2 = FUN_14001c84c((ulonglong *)param_1,(undefined8 *)param_2,param_3,param_4,param_5,
                                param_7,_Var5,param_10);
          return uVar2;
        }
        if (param_6 != 0x47) {
          if (param_6 == 0x61) goto LAB_14001cf67;
          if (param_6 == 0x65) goto LAB_14001cf2d;
          if (param_6 == 0x66) goto LAB_14001cefc;
        }
        uVar2 = FUN_14001ca74((ulonglong *)param_1,(undefined8 *)param_2,param_3,param_4,param_5,
                              param_7,bVar6,uVar4 & 1 | 2,_Var5,param_10);
        return uVar2;
      }
LAB_14001cf67:
      uVar2 = FUN_14001c1d0(param_1,param_2,param_3,param_4,param_5,param_7,bVar6,uVar4 & 1 | 2,
                            _Var5,param_10);
      return uVar2;
    }
    *(undefined1 *)(param_10 + 6) = 1;
    *(undefined4 *)((longlong)param_10 + 0x2c) = 0x16;
  }
  FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_10);
  return 0x16;
}




/* ---- 0x14001cfc8 : FUN_14001cfc8 [was: FUN_14001cfc8] ---- */

undefined4
FUN_14001cfc8(int *param_1,undefined1 (*param_2) [32],ulonglong param_3,ushort param_4,
             longlong *param_5)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong local_res10;
  ushort local_res20 [4];
  
  if ((param_2 == (undefined1 (*) [32])0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if ((char)param_5[5] == '\0') {
      FUN_140010390(param_5);
    }
    uVar1 = *(uint *)(param_5[3] + 0xc);
    if (uVar1 == 0xfde9) {
      local_res10 = 0;
      uVar4 = FUN_140023cb0((byte *)param_2,(uint)local_res20[0],&local_res10,(longlong)param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = (int)uVar4;
      }
      if ((int)uVar4 < 5) {
        return 0;
      }
      if ((char)param_5[6] != '\0') {
        return *(undefined4 *)((longlong)param_5 + 0x2c);
      }
      return 0;
    }
    if (*(longlong *)(param_5[3] + 0x138) == 0) {
      if (0xff < local_res20[0]) {
        if ((param_2 != (undefined1 (*) [32])0x0) && (param_3 != 0)) {
          FUN_1400280c0(param_2,0,param_3);
        }
        goto LAB_14001d0aa;
      }
      if (param_2 == (undefined1 (*) [32])0x0) {
LAB_14001d0d6:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        (*param_2)[0] = (char)local_res20[0];
        goto LAB_14001d0d6;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar2 = FUN_14001f644(uVar1,0,local_res20,1);
      if (iVar2 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar2;
          return 0;
        }
LAB_14001d0aa:
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0x2a;
        *(undefined1 *)(param_5 + 6) = 1;
        return 0x2a;
      }
      DVar3 = GetLastError();
      if (DVar3 != 0x7a) goto LAB_14001d0aa;
      if ((param_2 != (undefined1 (*) [32])0x0) && (param_3 != 0)) {
        FUN_1400280c0(param_2,0,param_3);
      }
    }
    uVar5 = 0x22;
  }
  else {
    uVar5 = 0x16;
  }
  *(undefined4 *)((longlong)param_5 + 0x2c) = uVar5;
  *(undefined1 *)(param_5 + 6) = 1;
  FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  return uVar5;
}




/* ---- 0x14001d178 : FUN_14001d178 [was: FUN_14001d178] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14001d178(ushort *param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_14003dc78 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_140010390(param_4);
      }
      plVar2 = (longlong *)param_4[3];
      uVar1 = *(uint *)((longlong)plVar2 + 0xc);
      if (uVar1 != 0xfde9) {
        if (plVar2[0x27] == 0) {
          if (param_1 != (ushort *)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
          if ((((1 < (int)plVar2[1]) && ((int)plVar2[1] <= (int)param_3)) &&
              (iVar3 = FUN_14001f5b4(uVar1,9), iVar3 != 0)) ||
             (((ulonglong)(longlong)*(int *)(param_4[3] + 8) <= param_3 && (param_2[1] != 0)))) {
            return *(int *)(param_4[3] + 8);
          }
        }
        else {
          iVar3 = FUN_14001f5b4(uVar1,9);
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_4 + 6) = 1;
        *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
        return -1;
      }
      iVar3 = FUN_14001d630(param_1,param_2,param_3,(uint *)&DAT_14003dc78,(longlong)param_4);
      if (iVar3 < 0) {
        return -1;
      }
      return iVar3;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}




/* ---- 0x14001d2f0 : FUN_14001d2f0 [was: FUN_14001d2f0] ---- */

int FUN_14001d2f0(ushort *param_1,byte *param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    uVar3 = PTR_PTR_14003c5d8._0_4_;
    uVar4 = PTR_PTR_14003c5d8._4_4_;
    uVar5 = PTR_DAT_14003c5e0._0_4_;
    uVar6 = PTR_DAT_14003c5e0._4_4_;
    if (DAT_14003d760 != 0) goto LAB_14001d33b;
  }
  else {
    uVar3 = *param_4;
    uVar4 = param_4[1];
    uVar5 = param_4[2];
    uVar6 = param_4[3];
  }
  local_20 = '\x01';
  local_30 = uVar3;
  uStack_2c = uVar4;
  uStack_28 = uVar5;
  uStack_24 = uVar6;
LAB_14001d33b:
  iVar1 = FUN_14001d178(param_1,param_2,param_3,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}




/* ---- 0x14001d394 : FUN_14001d394 [was: FUN_14001d394] ---- */

ulonglong FUN_14001d394(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (ulonglong)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVar2 = 0xffffffff;
  if ((bVar1 & 0xf8) == 0xf0) {
    uVar2 = 4;
  }
  return uVar2;
}




/* ---- 0x14001d58c : FUN_14001d58c [was: FUN_14001d58c] ---- */

undefined8 FUN_14001d58c(byte *param_1,uint param_2,int *param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_res18 [2];
  
  piVar3 = &DAT_14003dc88;
  if (param_3 != (int *)0x0) {
    piVar3 = param_3;
  }
  uVar1 = (short)param_2 + 0x2400;
  if (*piVar3 == 0) {
    if (0x3ff < uVar1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *piVar3 = (param_2 & 0x27ff) * 0x400 + 0x10000;
        return 0;
      }
      uVar2 = FUN_140023cb0(param_1,param_2 & 0xffff,(undefined8 *)piVar3,param_4);
      return uVar2;
    }
  }
  else if (uVar1 < 0x400) {
    local_res18[0] = 0;
    uVar2 = FUN_140023cb0(param_1,(param_2 & 0x23ff) + *piVar3,local_res18,param_4);
    uVar2 = FUN_140023d54(uVar2,(undefined8 *)piVar3);
    return uVar2;
  }
  uVar2 = FUN_140023d5c((undefined8 *)piVar3,param_4);
  return uVar2;
}




/* ---- 0x14001d630 : FUN_14001d630 [was: FUN_14001d630] ---- */

void FUN_14001d630(undefined2 *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_14001d3cc((ulonglong)local_18,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}




/* ---- 0x14001d678 : FUN_14001d678 [was: FUN_14001d678] ---- */

byte * FUN_14001d678(ushort *param_1,undefined8 *param_2,ulonglong param_3,uint *param_4,
                    longlong param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  pbVar4 = (byte *)*param_2;
  pbVar3 = (byte *)0x0;
  puVar2 = param_1;
  if (param_1 == (ushort *)0x0) {
    while( true ) {
      if (*pbVar4 == 0) {
        uVar5 = 1;
      }
      else if (pbVar4[1] == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)(pbVar4[2] != 0) + 3;
      }
      uVar5 = FUN_14001d3cc(0,pbVar4,uVar5,param_4,param_5);
      if (uVar5 == 0xffffffffffffffff) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return (byte *)0xffffffffffffffff;
      }
      if (uVar5 == 0) break;
      pbVar4 = pbVar4 + uVar5;
      pbVar1 = pbVar3 + 1;
      if (uVar5 != 4) {
        pbVar1 = pbVar3;
      }
      pbVar3 = pbVar1 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pbVar4 == 0) {
        uVar5 = 1;
      }
      else if (pbVar4[1] == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)(pbVar4[2] != 0) + 3;
      }
      local_res8[0] = 0;
      uVar5 = FUN_14001d3cc((ulonglong)local_res8,pbVar4,uVar5,param_4,param_5);
      if (uVar5 == 0xffffffffffffffff) {
        *param_2 = pbVar4;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return (byte *)0xffffffffffffffff;
      }
      if (uVar5 == 0) {
        *puVar2 = 0;
        pbVar4 = pbVar3;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar2 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar2 = puVar2 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar2 = (ushort)local_res8[0];
      pbVar4 = pbVar4 + uVar5;
      puVar2 = puVar2 + 1;
    }
    *param_2 = pbVar4;
    pbVar3 = (byte *)((longlong)puVar2 - (longlong)param_1 >> 1);
  }
  return pbVar3;
}




/* ---- 0x14001d860 : FUN_14001d860 [was: FUN_14001d860] ---- */

ulonglong FUN_14001d860(FILE *param_1)

{
  byte bVar1;
  uint uVar2;
  FILE *pFVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  pFVar3 = (FILE *)FUN_140010650(2);
  if (param_1 == pFVar3) {
    uVar4 = CONCAT71((int7)((ulonglong)pFVar3 >> 8),1);
  }
  else {
    pFVar3 = (FILE *)FUN_140010650(1);
    if (param_1 == pFVar3) {
      uVar2 = _fileno(param_1);
      bVar1 = FUN_140023fbc(uVar2);
      uVar4 = CONCAT71(extraout_var,(int)CONCAT71(extraout_var,bVar1) != 0);
    }
    else {
      uVar4 = (ulonglong)pFVar3 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}




/* ---- 0x14001da68 : FUN_14001da68 [was: FUN_14001da68] ---- */

ulonglong FUN_14001da68(longlong param_1,longlong *param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_14003d760 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14003c5d8;
    puStack_28 = PTR_DAT_14003c5e0;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_140010044(local_48,&local_58,param_3,0);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}




/* ---- 0x14001e7a0 : FUN_14001e7a0 [was: FUN_14001e7a0] ---- */

undefined4 FUN_14001e7a0(short *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  __acrt_ptd *p_Var3;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_14001f644(param_4,0,param_1,0xffffffff);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_14001e7f4;
        }
        iVar1 = FUN_14001f644(param_4,0,param_1,0xffffffff);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_14001ab4c(DVar2);
      p_Var3 = FUN_14001abbc();
      return *(undefined4 *)p_Var3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_14001e7f4:
      p_Var3 = FUN_14001abbc();
      *(undefined4 *)p_Var3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}




/* ---- 0x14001ec30 : FUN_14001ec30 [was: FUN_14001ec30] ---- */

void FUN_14001ec30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_1400280c0((undefined1 (*) [32])(param_1 + 0x18),0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar4 = lVar2, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    lVar1 = lVar4 + 1;
    *(undefined1 *)(param_1 + lVar4 + 0x18) = (&DAT_14003c658)[lVar4];
    lVar4 = lVar1;
  } while (lVar1 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_14003c759)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}




/* ---- 0x14001f248 : FUN_14001f248 [was: FUN_14001f248] ---- */

void FUN_14001f248(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = (__acrt_ptd *)FUN_14001b0e8();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_14003df20);
  return;
}




/* ---- 0x14001f52c : FUN_14001f52c [was: FUN_14001f52c] ---- */

undefined8 FUN_14001f52c(__crt_locale_pointers *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  if (((*(byte *)((ulonglong)(param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + (ulonglong)(param_2 & 0xff) * 2)) == 0)))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}




/* ---- 0x14001f5a0 : FUN_14001f5a0 [was: FUN_14001f5a0] ---- */

void FUN_14001f5a0(uint param_1)

{
  FUN_14001f52c((__crt_locale_pointers *)0x0,param_1,0,4);
  return;
}




/* ---- 0x14001f5b4 : FUN_14001f5b4 [was: FUN_14001f5b4] ---- */

void FUN_14001f5b4(uint param_1,ulonglong param_2)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_14001f601:
          if (!bVar1) goto LAB_14001f605;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_14001f63f;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_14001f601;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_14001f605;
LAB_14001f63f:
    param_2 = (ulonglong)((uint)param_2 & 8);
    goto LAB_14001f605;
  }
  param_2 = 0;
LAB_14001f605:
                    /* WARNING: Could not recover jumptable at 0x00014001f605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2);
  return;
}




/* ---- 0x14001f644 : FUN_14001f644 [was: FUN_14001f644] ---- */

void FUN_14001f644(uint param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *in_stack_00000040;
  
  uVar2 = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto LAB_14001f6e4;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto LAB_14001f6e4;
      iVar1 = param_1 - 0xdeaa;
      goto LAB_14001f6d5;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto LAB_14001f6e4;
    bVar3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) ||
       ((param_1 == 0xdeb2 || (param_1 == 0xdeb3)))) goto LAB_14001f6e4;
    iVar1 = param_1 - 65000;
LAB_14001f6d5:
    if (iVar1 == 0) goto LAB_14001f6e4;
    bVar3 = iVar1 == 1;
  }
  if (!bVar3) {
    uVar2 = param_2 & 0xffffff7f;
  }
LAB_14001f6e4:
  if ((param_1 - 65000 < 2) && (in_stack_00000040 != (undefined4 *)0x0)) {
    *in_stack_00000040 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014001f71b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,uVar2,param_3,param_4);
  return;
}




/* ---- 0x14001fcb0 : FUN_14001fcb0 [was: FUN_14001fcb0] ---- */

bool FUN_14001fcb0(void)

{
  uint uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_14001fc98();
  if ((char)uVar1 == '\0') {
    FUN_14001b564(local_res8);
  }
  return local_res8[0] != 1;
}




/* ---- 0x14001fe80 : FUN_14001fe80 [was: FUN_14001fe80] ---- */

void FUN_14001fe80(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001fea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}




/* ---- 0x14001fea8 : FUN_14001fea8 [was: FUN_14001fea8] ---- */

void FUN_14001fea8(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001fec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}




/* ---- 0x14001fed0 : FUN_14001fed0 [was: FUN_14001fed0] ---- */

undefined8 FUN_14001fed0(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_14003dc70)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_14003d870)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_14003d870)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_140019554();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_14001ff50;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_14001ff50:
      *(undefined8 *)
       ((&DAT_14003d870)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  p_Var3 = FUN_14001abbc();
  *(undefined4 *)p_Var3 = 9;
  p_Var3 = FUN_14001ab98();
  *(undefined4 *)p_Var3 = 0;
  return 0xffffffff;
}




/* ---- 0x14001ff8c : FUN_14001ff8c [was: FUN_14001ff8c] ---- */

undefined8 FUN_14001ff8c(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_14001ab98();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_14003dc70)) {
      if ((*(byte *)((&DAT_14003d870)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_14003d870)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    p_Var1 = FUN_14001ab98();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 9;
    FUN_14001925c();
  }
  return 0xffffffffffffffff;
}




/* ---- 0x140020194 : FUN_140020194 [was: FUN_140020194] ---- */

void FUN_140020194(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_14001b320((LPVOID)*param_1);
  }
  return;
}




/* ---- 0x140020930 : FUN_140020930 [was: FUN_140020930] ---- */

bool FUN_140020930(void)

{
  DAT_14003df40 = GetProcessHeap();
  return DAT_14003df40 != (HANDLE)0x0;
}




/* ---- 0x140020abc : FUN_140020abc [was: FUN_140020abc] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140020abc(undefined8 param_1)

{
  _DAT_14003df48 = param_1;
  _DAT_14003df50 = param_1;
  DAT_14003df58 = param_1;
  _DAT_14003df60 = param_1;
  return;
}




/* ---- 0x140020d38 : FUN_140020d38 [was: FUN_140020d38] ---- */

undefined4 FUN_140020d38(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (ushort *)0x0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_140025420(param_1,(ushort *)(&PTR_DAT_14002f030)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_14002f038 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if (0xe3 < (ulonglong)(longlong)iVar5) {
          return 0;
        }
        return *(undefined4 *)(&DAT_14002d5d0 + (longlong)iVar5 * 0x10);
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}




/* ---- 0x140020de0 : FUN_140020de0 [was: FUN_140020de0] ---- */

ulonglong FUN_140020de0(FILE *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
      FUN_1400106c0((longlong)param_1);
      uVar1 = FUN_140020e5c(param_1,param_2);
      FUN_1400106cc((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    FUN_140025768(&param_1->_ptr);
  }
  return 0xffffffff;
}




/* ---- 0x140020f04 : FUN_140020f04 [was: FUN_140020f04] ---- */

ulonglong FUN_140020f04(FILE *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_14003d760 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14003c5d8;
    puStack_28 = PTR_DAT_14003c5e0;
  }
  uVar1 = FUN_140020de0(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}




/* ---- 0x140020f9c : FUN_140020f9c [was: FUN_140020f9c] ---- */

undefined8 FUN_140020f9c(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  
  FUN_14001fe80(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_14003d870)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_14001ff8c(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_140021013;
    DVar3 = GetLastError();
    p_Var4 = FUN_14001ab98();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_14001abbc();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_140021013:
  FUN_14001fea8(*param_4);
  return uVar5;
}




/* ---- 0x1400218e8 : FUN_1400218e8 [was: FUN_1400218e8] ---- */

int FUN_1400218e8(uint param_1,byte *param_2,uint param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_14003dc70 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_14001fe80(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          iVar2 = FUN_140021a08(param_1,param_2,param_3,param_4);
        }
        FUN_14001fea8(param_1);
        return iVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}




/* ---- 0x140021a08 : FUN_140021a08 [was: FUN_140021a08] ---- */

int FUN_140021a08(uint param_1,byte *param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  BOOL BVar7;
  DWORD DVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 extraout_var;
  DWORD *pDVar11;
  DWORD DVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined8 local_70;
  DWORD local_68;
  undefined8 local_60;
  DWORD local_50 [4];
  
  DVar12 = 0;
  uVar14 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (byte *)0x0) {
LAB_140021a38:
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  uVar10 = (ulonglong)(param_1 & 0x3f);
  lVar13 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_14003d870)[lVar13] + 0x39 + uVar10 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_140021a38;
  if ((*(byte *)((&DAT_14003d870)[lVar13] + 0x38 + uVar10 * 0x48) & 0x20) != 0) {
    thunk_FUN_1400258a4(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_60 = 0;
  bVar4 = FUN_140023fbc(param_1);
  if (((int)CONCAT71(extraout_var,bVar4) == 0) ||
     (-1 < *(char *)((&DAT_14003d870)[lVar13] + 0x38 + uVar10 * 0x48))) {
LAB_140021bf0:
    if (-1 < *(char *)((&DAT_14003d870)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar7 = WriteFile(*(HANDLE *)
                         ((&DAT_14003d870)[lVar13] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      DVar12 = local_68;
      uVar3 = local_70;
      if (BVar7 == 0) {
        DVar12 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar12);
        DVar12 = local_68;
        uVar3 = local_70;
      }
      goto LAB_140021ca5;
    }
    if (cVar1 == '\0') {
      pDVar11 = FUN_140021550((DWORD *)&local_70,param_1,(char *)param_2,uVar14);
    }
    else if (cVar1 == '\x01') {
      pDVar11 = FUN_140021774((DWORD *)&local_70,param_1,(short *)param_2,param_3);
    }
    else {
      DVar12 = 0;
      uVar3 = local_60;
      if (cVar1 != '\x02') goto LAB_140021ca5;
      pDVar11 = FUN_140021658((DWORD *)&local_70,param_1,(short *)param_2,uVar14);
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_140010390(param_4);
    }
    if ((*(longlong *)(param_4[3] + 0x138) == 0) &&
       (*(char *)((&DAT_14003d870)[lVar13] + 0x39 + uVar10 * 0x48) == '\0')) goto LAB_140021bf0;
    local_50[0] = 0;
    BVar7 = GetConsoleMode(*(HANDLE *)((&DAT_14003d870)[lVar13] + 0x28 + uVar10 * 0x48),local_50);
    if (BVar7 == 0) goto LAB_140021bf0;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar3 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar3 = local_70;
        if (param_2 < param_2 + uVar14) {
          local_70._4_4_ = 0;
          pbVar15 = param_2;
          iVar9 = local_70._4_4_;
          do {
            sVar6 = *(short *)pbVar15;
            sVar5 = FUN_140025a94(sVar6);
            if (sVar5 != sVar6) {
LAB_140021bb8:
              DVar8 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar8);
              uVar3 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar9 + 2,(DWORD)local_70);
            iVar2 = iVar9 + 2;
            if (sVar6 == 10) {
              sVar6 = FUN_140025a94(0xd);
              if (sVar6 != 0xd) goto LAB_140021bb8;
              local_70 = CONCAT44(iVar9 + 3,(DWORD)local_70);
              DVar12 = DVar12 + 1;
              iVar2 = iVar9 + 3;
            }
            iVar9 = iVar2;
            pbVar15 = pbVar15 + 2;
            uVar3 = local_70;
          } while (pbVar15 < param_2 + uVar14);
        }
      }
      goto LAB_140021ca5;
    }
    pDVar11 = FUN_1400210bc((DWORD *)&local_70,param_1,param_2,uVar14,param_4);
  }
  DVar12 = pDVar11[2];
  uVar3 = *(undefined8 *)pDVar11;
LAB_140021ca5:
  local_60 = uVar3;
  iVar9 = (int)((ulonglong)local_60 >> 0x20);
  if (iVar9 != 0) {
    return iVar9 - DVar12;
  }
  if ((uint)local_60 != 0) {
    if ((uint)local_60 == 5) {
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 7) = 1;
      *(undefined4 *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_14001ab74((uint)local_60,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_14003d870)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) != 0
      ) && (*param_2 == 0x1a)) {
    return 0;
  }
  *(undefined4 *)((longlong)param_4 + 0x34) = 0;
  *(undefined1 *)(param_4 + 6) = 1;
  *(undefined4 *)((longlong)param_4 + 0x2c) = 0x1c;
  *(undefined1 *)(param_4 + 7) = 1;
  return -1;
}




/* ---- 0x140021d38 : FUN_140021d38 [was: FUN_140021d38] ---- */

int FUN_140021d38(uint param_1,short *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  HANDLE hFile;
  short *psVar4;
  BOOL BVar5;
  ulonglong uVar6;
  short *psVar7;
  short sVar8;
  short *psVar9;
  longlong lVar10;
  longlong lVar11;
  short local_res8 [4];
  short local_res10 [4];
  DWORD local_res18 [2];
  
  lVar10 = 0;
  uVar6 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  lVar3 = (&DAT_14003d870)[lVar11];
  hFile = *(HANDLE *)(lVar3 + 0x28 + uVar6 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 | 4;
  }
  psVar9 = param_2;
  psVar4 = param_2;
  do {
    if (param_2 + param_3 <= psVar4) goto LAB_140021f12;
    sVar8 = *psVar4;
    if (sVar8 == 0x1a) {
      bVar2 = *(byte *)((&DAT_14003d870)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
      if ((bVar2 & 0x40) != 0) {
        *psVar9 = 0x1a;
        goto LAB_140021f0f;
      }
      *(byte *)((&DAT_14003d870)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar2 | 2;
      goto LAB_140021f12;
    }
    psVar7 = psVar4 + 1;
    if (sVar8 == 0xd) {
      if (param_2 + param_3 <= psVar7) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        BVar5 = ReadFile(hFile,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
        if ((BVar5 == 0) || (local_res18[0] == 0)) {
LAB_140021ed6:
          *psVar9 = 0xd;
          goto LAB_140021f0f;
        }
        if ((*(byte *)((&DAT_14003d870)[lVar11] + 0x38 + uVar6 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] != 10) || (psVar9 != param_2)) {
            FUN_1400259f0(param_1,(LARGE_INTEGER)0xfffffffffffffffe,1);
            if (local_res8[0] != 10) goto LAB_140021ed6;
            goto LAB_140021f12;
          }
        }
        else if (local_res8[0] != 10) {
          local_res10[0] = local_res8[0];
          *psVar9 = 0xd;
          do {
            *(undefined1 *)
             ((&DAT_14003d870)[lVar11] + (ulonglong)(param_1 & 0x3f) * 0x48 + 0x3a + lVar10) =
                 *(undefined1 *)((longlong)local_res10 + lVar10);
            lVar10 = lVar10 + 1;
          } while (lVar10 < 2);
          *(undefined1 *)((&DAT_14003d870)[lVar11] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = 10
          ;
LAB_140021f0f:
          psVar9 = psVar9 + 1;
LAB_140021f12:
          return (int)((longlong)psVar9 - (longlong)param_2 >> 1) * 2;
        }
        *psVar9 = 10;
        goto LAB_140021f0f;
      }
      if (*psVar7 == 10) {
        psVar7 = psVar4 + 2;
        sVar8 = 10;
      }
    }
    *psVar9 = sVar8;
    psVar9 = psVar9 + 1;
    psVar4 = psVar7;
  } while( true );
}




/* ---- 0x140021f34 : FUN_140021f34 [was: FUN_140021f34] ---- */

int FUN_140021f34(uint param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  byte *pbVar5;
  __acrt_ptd *p_Var6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  char local_res8 [8];
  DWORD local_res10 [2];
  
  lVar12 = (longlong)(int)param_1 >> 6;
  uVar11 = (ulonglong)(param_1 & 0x3f);
  lVar2 = (&DAT_14003d870)[lVar12];
  hFile = *(HANDLE *)(lVar2 + 0x28 + uVar11 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar8 = (byte *)(lVar2 + 0x38 + uVar11 * 0x48);
    *pbVar8 = *pbVar8 & 0xfb;
  }
  else {
    pbVar8 = (byte *)(lVar2 + 0x38 + uVar11 * 0x48);
    *pbVar8 = *pbVar8 | 4;
  }
  pbVar8 = param_2;
  pbVar9 = param_2;
  do {
    if (param_2 + param_3 <= pbVar9) {
LAB_1400220a0:
      iVar7 = (int)pbVar8 - (int)param_2;
      if (iVar7 == 0) {
        return 0;
      }
      if (*(char *)((&DAT_14003d870)[lVar12] + 0x39 + uVar11 * 0x48) != '\0') {
        pbVar8 = param_2 + iVar7;
        if ((char)pbVar8[-1] < '\0') {
          uVar10 = 1;
          for (pbVar8 = pbVar8 + -1;
              (((&DAT_14003cc30)[*pbVar8] == '\0' && (uVar10 < 5)) && (param_2 <= pbVar8));
              pbVar8 = pbVar8 + -1) {
            uVar10 = uVar10 + 1;
          }
          if ((&DAT_14003cc30)[*pbVar8] == '\0') {
            p_Var6 = FUN_14001abbc();
            *(undefined4 *)p_Var6 = 0x2a;
            return -1;
          }
          if ((int)(char)(&DAT_14003cc30)[*pbVar8] + 1U == uVar10) {
            pbVar8 = pbVar8 + uVar10;
          }
          else if ((*(byte *)((&DAT_14003d870)[lVar12] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)
                   & 0x48) == 0) {
            FUN_1400259f0(param_1,(LARGE_INTEGER)(longlong)(int)-uVar10,1);
          }
          else {
            pbVar9 = pbVar8 + 1;
            *(byte *)((&DAT_14003d870)[lVar12] + 0x3a + (ulonglong)(param_1 & 0x3f) * 0x48) =
                 *pbVar8;
            if (1 < uVar10) {
              bVar1 = *pbVar9;
              pbVar9 = pbVar8 + 2;
              *(byte *)((&DAT_14003d870)[lVar12] + 0x3b + (ulonglong)(param_1 & 0x3f) * 0x48) =
                   bVar1;
            }
            if (uVar10 == 3) {
              bVar1 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              *(byte *)((&DAT_14003d870)[lVar12] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) =
                   bVar1;
            }
            pbVar8 = pbVar9 + -(ulonglong)uVar10;
          }
        }
        iVar7 = FUN_14001f5b4(0xfde9,0);
        if (iVar7 == 0) {
          DVar4 = GetLastError();
          FUN_14001ab4c(DVar4);
          return -1;
        }
        *(byte *)((&DAT_14003d870)[lVar12] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) =
             -(iVar7 != (int)pbVar8 - (int)param_2) & 2U |
             *(byte *)((&DAT_14003d870)[lVar12] + 0x3d + (ulonglong)(param_1 & 0x3f) * 0x48) & 0xfd;
        return iVar7 * 2;
      }
      return iVar7;
    }
    bVar1 = *pbVar9;
    if (bVar1 == 0x1a) {
      bVar1 = *(byte *)((&DAT_14003d870)[lVar12] + 0x38 + uVar11 * 0x48);
      if ((bVar1 & 0x40) != 0) {
        *pbVar8 = 0x1a;
        goto LAB_14002209d;
      }
      *(byte *)((&DAT_14003d870)[lVar12] + 0x38 + uVar11 * 0x48) = bVar1 | 2;
      goto LAB_1400220a0;
    }
    pbVar5 = pbVar9 + 1;
    if (bVar1 == 0xd) {
      if (param_2 + param_3 <= pbVar5) {
        local_res8[0] = '\0';
        local_res10[0] = 0;
        BVar3 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (local_res10[0] == 0)) {
          *pbVar8 = 0xd;
        }
        else if ((*(byte *)((&DAT_14003d870)[lVar12] + 0x38 + uVar11 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] == '\n') && (pbVar8 == param_2)) goto LAB_14002202e;
          FUN_1400259f0(param_1,(LARGE_INTEGER)0xffffffffffffffff,1);
          if (local_res8[0] == '\n') goto LAB_1400220a0;
          *pbVar8 = 0xd;
        }
        else if (local_res8[0] == '\n') {
LAB_14002202e:
          *pbVar8 = 10;
        }
        else {
          *pbVar8 = 0xd;
          *(char *)((&DAT_14003d870)[lVar12] + 0x3a + uVar11 * 0x48) = local_res8[0];
        }
LAB_14002209d:
        pbVar8 = pbVar8 + 1;
        goto LAB_1400220a0;
      }
      if (*pbVar5 != 10) goto LAB_140021fcd;
      pbVar5 = pbVar9 + 2;
      *pbVar8 = 10;
    }
    else {
LAB_140021fcd:
      *pbVar8 = bVar1;
    }
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar5;
  } while( true );
}




/* ---- 0x140022264 : FUN_140022264 [was: FUN_140022264] ---- */

int FUN_140022264(uint param_1,byte *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  
  if (param_1 == 0xfffffffe) {
    p_Var3 = FUN_14001ab98();
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = FUN_14001abbc();
    *(undefined4 *)p_Var3 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_14003dc70 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        FUN_14001fe80(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          p_Var3 = FUN_14001abbc();
          *(undefined4 *)p_Var3 = 9;
          p_Var3 = FUN_14001ab98();
          *(undefined4 *)p_Var3 = 0;
        }
        else {
          iVar2 = FUN_140022384(param_1,param_2,param_3);
        }
        FUN_14001fea8(param_1);
        return iVar2;
      }
      p_Var3 = FUN_14001ab98();
      *(undefined4 *)p_Var3 = 0;
      p_Var3 = FUN_14001abbc();
      *(undefined4 *)p_Var3 = 0x16;
      goto LAB_1400222ea;
    }
  }
  p_Var3 = FUN_14001ab98();
  *(undefined4 *)p_Var3 = 0;
  p_Var3 = FUN_14001abbc();
  *(undefined4 *)p_Var3 = 9;
LAB_1400222ea:
  FUN_14001925c();
  return -1;
}




/* ---- 0x140022850 : FUN_140022850 [was: FUN_140022850] ---- */

bool FUN_140022850(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar1 = fegetround();
  if (iVar1 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      pcVar2 = param_2;
      if (param_4 == 0) {
        return true;
      }
      do {
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 == '0');
      if (*pcVar2 != '\0') {
        return true;
      }
      if (param_2 != param_1) {
        return (bool)(param_2[-1] & 1);
      }
    }
  }
  else if (iVar1 == 0x200) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 != 0x2d) {
      return true;
    }
  }
  else if (iVar1 == 0x100) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 == 0x2d) {
      return true;
    }
  }
  return false;
}




/* ---- 0x140022920 : FUN_140022920 [was: FUN_140022920] ---- */

undefined4
FUN_140022920(char *param_1,ulonglong param_2,int param_3,int *param_4,int param_5,int param_6,
             longlong *param_7)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  longlong lVar9;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar5 = 0;
    if (0 < param_3) {
      iVar5 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar5 + 1)) {
      uVar7 = 0x22;
      goto LAB_140022944;
    }
    if (param_4 != (int *)0x0) {
      pcVar1 = *(char **)(param_4 + 2);
      *param_1 = '0';
      pcVar6 = pcVar1;
      pcVar8 = param_1;
      while( true ) {
        pcVar8 = pcVar8 + 1;
        if (param_3 < 1) break;
        cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          cVar3 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar8 = cVar3;
        param_3 = param_3 + -1;
      }
      *pcVar8 = '\0';
      if ((-1 < param_3) && (bVar4 = FUN_140022850(pcVar1,pcVar6,*param_4,param_5,param_6), bVar4))
      {
        while( true ) {
          pcVar8 = pcVar8 + -1;
          if (*pcVar8 != '9') break;
          *pcVar8 = '0';
        }
        *pcVar8 = *pcVar8 + '\x01';
      }
      if (*param_1 == '1') {
        param_4[1] = param_4[1] + 1;
      }
      else {
        lVar2 = -1;
        do {
          lVar9 = lVar2;
          lVar2 = lVar9 + 1;
        } while (param_1[lVar9 + 2] != '\0');
        FUN_140027a20((undefined8 *)param_1,(undefined8 *)(param_1 + 1),lVar9 + 2);
      }
      return 0;
    }
  }
  uVar7 = 0x16;
LAB_140022944:
  *(undefined4 *)((longlong)param_7 + 0x2c) = uVar7;
  *(undefined1 *)(param_7 + 6) = 1;
  FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_7);
  return uVar7;
}




/* ---- 0x140023cb0 : FUN_140023cb0 [was: FUN_140023cb0] ---- */

undefined8 FUN_140023cb0(byte *param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar4 = 1;
        bVar3 = 0xc0;
        lVar5 = lVar4;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_140023d47:
          uVar2 = FUN_140023d5c(param_3,param_4);
          return uVar2;
        }
        lVar4 = 2;
        bVar3 = 0xe0;
        lVar5 = lVar4;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_140023d47;
        lVar4 = 3;
        bVar3 = 0xf0;
        lVar5 = lVar4;
      }
      do {
        bVar1 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar4] = bVar1 & 0x3f | 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *param_1 = bVar3 | (byte)param_2;
      uVar2 = FUN_140023d54(lVar5 + 1,param_3);
      return uVar2;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}




/* ---- 0x140023d54 : FUN_140023d54 [was: FUN_140023d54] ---- */

undefined8 FUN_140023d54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}




/* ---- 0x140023d5c : FUN_140023d5c [was: FUN_140023d5c] ---- */

undefined8 FUN_140023d5c(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}




/* ---- 0x140023e68 : FUN_140023e68 [was: FUN_140023e68] ---- */

bool FUN_140023e68(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  HANDLE hFile;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if ((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
       (hFile = (HANDLE)FUN_14001ff8c(*(uint *)(param_1 + 3)), hFile != (HANDLE)0xffffffffffffffff))
    {
      local_res10[0].QuadPart = 0;
      BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,local_res10,1);
      if (BVar2 != 0) {
        local_res8.QuadPart = 0;
        BVar2 = GetFileSizeEx(hFile,&local_res8);
        if (BVar2 != 0) {
          return local_res10[0].QuadPart == local_res8.QuadPart;
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




/* ---- 0x140023fbc : FUN_140023fbc [was: FUN_140023fbc] ---- */

byte FUN_140023fbc(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_14003dc70)) {
      return *(byte *)((&DAT_14003d870)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 9;
    FUN_14001925c();
  }
  return 0;
}




/* ---- 0x140024020 : FUN_140024020 [was: FUN_140024020] ---- */

uint FUN_140024020(uint param_1)

{
  return param_1 & 0x300;
}




/* ---- 0x140024030 : FUN_140024030 [was: FUN_140024030] ---- */

uint FUN_140024030(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ushort)MXCSR & 0x8040;
  if (uVar1 == 0x8000) {
    uVar4 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar4 = 0x800;
  }
  else {
    uVar4 = 0;
    if (uVar1 == 0x8040) {
      uVar4 = 0x400;
    }
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 0x2000) {
    uVar3 = 0x100;
  }
  else if (uVar2 == 0x4000) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x300;
    if (uVar2 != 0x6000) {
      uVar3 = 0;
    }
  }
  uVar4 = ((((MXCSR >> 2 & 0x400 | MXCSR & 0x800) >> 2 | MXCSR & 0x400) >> 2 | MXCSR & 0x200) >> 3 |
          MXCSR & 0x180) >> 3 | uVar4 | uVar3;
  return (uVar3 | uVar4 * 4) << 0x16 | uVar4;
}




/* ---- 0x140024110 : FUN_140024110 [was: FUN_140024110] ---- */

uint FUN_140024110(void)

{
  uint uVar1;
  
  uVar1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 |
          ((MXCSR & 2) << 3 | MXCSR & 4) * 2 | (MXCSR & 1) << 4;
  return uVar1 << 0x18 | uVar1;
}




/* ---- 0x140024170 : FUN_140024170 [was: FUN_140024170] ---- */

void FUN_140024170(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  
  uVar5 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x16 & 0x300;
  uVar4 = param_1 & 0xc00;
  uVar9 = 0;
  uVar7 = 0x400;
  uVar11 = 0x800;
  if (uVar4 == 0x400) {
    uVar9 = 0x8040;
  }
  else if (uVar4 == 0x800) {
    uVar9 = 0x40;
  }
  else if (uVar4 == 0xc00) {
    uVar9 = 0x8000;
  }
  uVar6 = 0x100;
  uVar10 = 0x200;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar8 = 0x2000;
      goto LAB_14002420f;
    }
    if (uVar2 == 0x200) {
      uVar8 = 0x4000;
      goto LAB_14002420f;
    }
    if (uVar2 == 0x300) {
      uVar8 = 0x6000;
      goto LAB_14002420f;
    }
  }
  uVar8 = 0;
LAB_14002420f:
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1000;
  }
  if ((uVar5 & 2) == 0) {
    uVar11 = 0;
  }
  if ((uVar5 & 4) == 0) {
    uVar7 = 0;
  }
  if ((uVar5 & 8) == 0) {
    uVar10 = 0;
  }
  if ((uVar5 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  if ((uVar5 & 0x20) == 0) {
    uVar6 = 0;
  }
  MXCSR = MXCSR & 0xffff003f |
          (uint)(ushort)(uVar8 | uVar3 | uVar11 | uVar7 | uVar10 | uVar1 | uVar6 | uVar9);
  return;
}




/* ---- 0x1400242a0 : FUN_1400242a0 [was: FUN_1400242a0] ---- */

void FUN_1400242a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 >> 0x18;
  bVar3 = ((uVar2 & 0x3f) >> 4 & 1) != 0;
  uVar1 = (uint)bVar3;
  MXCSR = MXCSR & 0xffffffc0 |
          -(uint)((uVar2 & 1) != 0) & 0x20 | -(uint)((uVar2 & 2) != 0) & 0x10 |
          -(uint)((uVar2 & 4) != 0) & 8 | -(uint)((uVar2 & 8) != 0) & 4 | uVar1 |
          (uVar1 - bVar3) - (uint)((uVar2 & 0x20) != 0) & 2;
  return;
}




/* ---- 0x1400246c0 : FUN_1400246c0 [was: FUN_1400246c0] ---- */

undefined4 FUN_1400246c0(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_140024719;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_140024719;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      p_Var2 = FUN_14001abbc();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_14001925c();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_140024719:
  p_Var2 = FUN_14001abbc();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_14001925c();
  return 0x16;
}




/* ---- 0x140024c48 : FUN_140024c48 [was: FUN_140024c48] ---- */

void FUN_140024c48(uchar *param_1,uchar *param_2)

{
  _mbsdec_l(param_1,param_2,(_locale_t)0x0);
  return;
}




/* ---- 0x1400250b0 : FUN_1400250b0 [was: FUN_1400250b0] ---- */

uint FUN_1400250b0(void)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_initialize_multibyte();
  return (uint)uVar1 & 0xff ^ 1;
}




/* ---- 0x140025274 : FUN_140025274 [was: FUN_140025274] ---- */

LPCWSTR FUN_140025274(char *param_1,char *param_2)

{
  uint uVar1;
  INT_PTR IVar2;
  LPCWSTR pWVar3;
  LPCWSTR pWVar4;
  uint uVar5;
  undefined1 local_res18 [8];
  longlong local_98;
  longlong local_90;
  char local_80;
  undefined8 local_78;
  undefined8 local_70;
  LPCWSTR local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  LPCWSTR local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_20;
  
  pWVar3 = (LPCWSTR)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (LPCWSTR)0x0;
  local_30 = 0;
  uVar5 = 0;
  local_28 = 0;
  local_20 = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = (LPCWSTR)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
  uVar1 = 0xfde9;
  if (*(int *)(local_90 + 0xc) == 0xfde9) {
    if (local_80 != '\0') {
      *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    IVar2 = FUN_14001b5c0();
    if ((int)IVar2 == 0) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = uVar5;
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  uVar1 = FUN_14001dd2c(param_1,(longlong)&local_48,local_res18,uVar1);
  pWVar4 = pWVar3;
  if (uVar1 == 0) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_90 + 0xc) == 0xfde9) {
      uVar5 = 0xfde9;
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      IVar2 = FUN_14001b5c0();
      if ((int)IVar2 == 0) {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        uVar5 = 1;
      }
      else if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
    uVar1 = FUN_14001dd2c(param_2,(longlong)&local_78,local_res18,uVar5);
    pWVar4 = local_68;
    if (uVar1 == 0) {
      uVar1 = SetEnvironmentVariableW(local_38,local_68);
      pWVar3 = (LPCWSTR)(ulonglong)uVar1;
    }
  }
  if (local_50 != '\0') {
    FUN_14001b320(pWVar4);
  }
  if (local_20 != '\0') {
    FUN_14001b320(local_38);
  }
  return pWVar3;
}




/* ---- 0x140025420 : FUN_140025420 [was: FUN_140025420] ---- */

int FUN_140025420(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    do {
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = (uint)uVar2;
      if ((uint)uVar1 != (uint)uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = (uint)uVar1;
        }
        uVar4 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar4 = (uint)uVar2;
        }
      }
    } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    return uVar3 - uVar4;
  }
  return 0;
}




/* ---- 0x14002555c : FUN_14002555c [was: FUN_14002555c] ---- */

ulonglong FUN_14002555c(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14001fe80(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_14003d870)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined4 *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_140025698(uVar1,lVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  FUN_14001fea8(*param_4);
  return uVar3;
}




/* ---- 0x1400255d4 : FUN_1400255d4 [was: FUN_1400255d4] ---- */

ulonglong FUN_1400255d4(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong *local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_14003dc70)) &&
       ((*(byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_14002555c(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}




/* ---- 0x140025784 : FUN_140025784 [was: FUN_140025784] ---- */

longlong FUN_140025784(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_14003dc70 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_14001fe80(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          lVar2 = FUN_1400258a4(param_1,param_2,param_3,(longlong)param_4);
        }
        FUN_14001fea8(param_1);
        return lVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}




/* ---- 0x1400258a4 : FUN_1400258a4 [was: FUN_1400258a4] ---- */

longlong FUN_1400258a4(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)FUN_14001ff8c(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_14001ab74(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)local_18[0].s;
    }
  }
  return -1;
}




/* ---- 0x140025954 : FUN_140025954 [was: FUN_140025954] ---- */

longlong FUN_140025954(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_14003d760 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14003c5d8;
    puStack_28 = PTR_DAT_14003c5e0;
  }
  lVar1 = FUN_140025784(param_1,param_2,param_3,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return lVar1;
}




/* ---- 0x1400259f0 : FUN_1400259f0 [was: FUN_1400259f0] ---- */

longlong FUN_1400259f0(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_14003d760 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14003c5d8;
    puStack_28 = PTR_DAT_14003c5e0;
  }
  lVar1 = FUN_1400258a4(param_1,param_2,param_3,(longlong)local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_140010320(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return lVar1;
}




/* ---- 0x140025a94 : FUN_140025a94 [was: FUN_140025a94] ---- */

undefined2 FUN_140025a94(undefined2 param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  undefined2 local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = param_1;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    local_res10[0] = 0;
    BVar2 = __dcrt_write_console(local_res8,1,local_res10);
    if (BVar2 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}




/* ---- 0x140025ae0 : FUN_140025ae0 [was: FUN_140025ae0] ---- */

undefined8 FUN_140025ae0(uint *param_1,uint param_2,uint param_3)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  
  uVar2 = param_3 & 0xfff7ffff;
  if ((param_2 & uVar2 & 0xfcf0fce0) != 0) {
    if (param_1 != (uint *)0x0) {
      uVar2 = thunk_FUN_140026b00(0,0);
      *param_1 = uVar2;
    }
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_14001925c();
    return 0x16;
  }
  if (param_1 != (uint *)0x0) {
    uVar2 = thunk_FUN_140026b00(param_2,uVar2);
    *param_1 = uVar2;
    return 0;
  }
  thunk_FUN_140026b00(param_2,uVar2);
  return 0;
}




/* ---- 0x140025b50 : FUN_140025b50 [was: FUN_140025b50] ---- */

undefined8 FUN_140025b50(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_140024030();
  *param_1 = uVar1;
  uVar1 = FUN_140024110();
  param_1[1] = uVar1;
  return 0;
}




/* ---- 0x140025b70 : FUN_140025b70 [was: FUN_140025b70] ---- */

bool FUN_140025b70(uint *param_1)

{
  undefined8 uVar1;
  uint local_res8 [2];
  
  FUN_140024170(*param_1);
  FUN_1400242a0(param_1[1]);
  local_res8[0] = 0;
  local_res8[1] = 0;
  uVar1 = FUN_140025b50(local_res8);
  if (((int)uVar1 == 0) && (*param_1 == local_res8[0])) {
    return param_1[1] != local_res8[1];
  }
  return true;
}




/* ---- 0x140025be0 : FUN_140025be0 [was: FUN_140025be0] ---- */

undefined8 FUN_140025be0(ulonglong *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  uVar3 = FUN_140025b50((uint *)local_res10);
  uVar1 = local_res10[0];
  if ((int)uVar3 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    bVar2 = FUN_140025b70((uint *)local_res10);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      FUN_140026a80();
      return 0;
    }
  }
  return 1;
}




/* ---- 0x140025c40 : FUN_140025c40 [was: FUN_140025c40] ---- */

double FUN_140025c40(void)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  
  dVar4 = in_XMM0._0_8_;
  if (1 < DAT_14003c320) {
    auVar5 = roundsd(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  dVar1 = ABS(dVar4);
  uVar3 = (ulonglong)dVar1 >> 0x34;
  dVar2 = dVar4;
  if (uVar3 < 0x433) {
    if (uVar3 < 0x3ff) {
      if (dVar1 != 0.0) {
        if (dVar4 != dVar1) {
          return -0.0;
        }
        return 1.0;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)uVar3 & 0x3f)) - 1U) & (ulonglong)dVar4);
      if ((dVar4 == dVar1) && (dVar2 != dVar4)) {
        dVar2 = dVar2 + 1.0;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar4 = (double)FUN_140026ff0((ulonglong)dVar4);
    return dVar4;
  }
  return dVar2;
}




/* ---- 0x140025d10 : FUN_140025d10 [was: FUN_140025d10] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140025d10(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_ZMM0 [64];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  
  dVar3 = in_ZMM0._0_8_;
  auVar5 = in_ZMM0._0_16_;
  if (DAT_14003df68 == 0) {
    if ((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY) {
      if (dVar3 == INFINITY) {
        return INFINITY;
      }
      if (dVar3 != -INFINITY) {
        return (double)((ulonglong)dVar3 | 0x8000000000000);
      }
    }
    else {
      dVar17 = (double)(int)(((ulonglong)dVar3 >> 0x34) - 0x3ff);
      if (0.0 < dVar3) {
        dVar9 = (double)((ulonglong)dVar3 & (ulonglong)DAT_140030980);
        dVar7 = dVar3;
        if (dVar17 == -1023.0) {
          dVar17 = (double)((ulonglong)dVar9 | DAT_140030a10) - 1.0;
          dVar7 = (double)((ulonglong)dVar17 & (ulonglong)DAT_140030980);
          dVar17 = (double)(int)((uint)((ulonglong)dVar17 >> 0x34) - 0x7fd);
          dVar9 = dVar7;
        }
        uVar1 = ((ulonglong)dVar7 & 0xff00000000000) + ((ulonglong)dVar7 & 0x80000000000) * 2;
        if (ABS(dVar3 - 1.0) < 0.0625) {
          dVar3 = dVar3 - 1.0;
          dVar17 = dVar3 / (dVar3 + 2.0);
          dVar7 = dVar17 + dVar17;
          dVar9 = dVar7 * dVar7;
          dVar10 = dVar9 * dVar7;
          dVar12 = (double)((ulonglong)dVar3 & (ulonglong)DAT_140030b50);
          dVar3 = (((dVar9 * 0.012500000003771751 + 0.08333333333333179) * dVar10 +
                   (dVar9 * 0.0004348877777076146 + 0.0022321399879194482) * dVar10 * dVar10 * dVar7
                   ) - dVar3 * dVar17) + (dVar3 - dVar12);
          return dVar12 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
                 dVar3 * 0.4342937469482422 + dVar12 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        dVar7 = ((double)(uVar1 | DAT_140030a20) - (double)((ulonglong)dVar9 | DAT_140030a20)) *
                *(double *)(&DAT_140031be0 + uVar2 * 8);
        dVar3 = dVar7 * dVar7;
        return *(double *)(&DAT_140030bc0 + uVar2 * 8) + dVar17 * 0.3010299950838089 +
               *(double *)(&DAT_1400313d0 + uVar2 * 8) +
               (dVar17 * 5.801722962879576e-10 -
               ((dVar7 * 0.3333333333333333 + 0.5) * dVar3 + dVar7 +
               ((dVar7 * 0.16666666666666666 + 0.2) * dVar7 + 0.25) * dVar3 * dVar3) *
               0.4342944819032518);
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_1400270e0(dVar3,0xfff0000000000000,1);
        return dVar3;
      }
    }
    dVar3 = (double)FUN_1400270e0(dVar3,0xfff8000000000000,2);
                    /* WARNING: Read-only address (ram,0x000140030930) is written */
                    /* WARNING: Read-only address (ram,0x000140030960) is written */
                    /* WARNING: Read-only address (ram,0x000140030980) is written */
                    /* WARNING: Read-only address (ram,0x000140030990) is written */
                    /* WARNING: Read-only address (ram,0x0001400309a0) is written */
                    /* WARNING: Read-only address (ram,0x000140030a10) is written */
                    /* WARNING: Read-only address (ram,0x000140030a20) is written */
                    /* WARNING: Read-only address (ram,0x000140030ab0) is written */
                    /* WARNING: Read-only address (ram,0x000140030b00) is written */
                    /* WARNING: Read-only address (ram,0x000140030b50) is written */
    return dVar3;
  }
  auVar13 = vpsrlq_avx(auVar5,0x34);
  auVar13 = vpsubq_avx(auVar13,_DAT_140030960);
  auVar13 = vcvtdq2pd_avx(auVar13);
  auVar16 = vpand_avx(auVar5,_DAT_140030930);
  if (auVar16._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_140026260;
      dVar3 = (double)FUN_1400270e0(dVar3,(ulonglong)dVar3 | 0x8000000000000,3);
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar16 = vpand_avx(auVar5,_DAT_140030980);
    if (auVar13._0_8_ == -1023.0) {
      auVar5 = vpor_avx(auVar16,_DAT_140030a10);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar5._0_8_ - 1.0;
      auVar16 = vpsrlq_avx(auVar13,0x34);
      auVar5 = vpand_avx(auVar13,_DAT_140030980);
      auVar13 = vpsubd_avx(auVar16,_DAT_140030ab0);
      auVar13 = vcvtdq2pd_avx(auVar13);
      auVar16 = auVar5;
    }
    auVar4 = vpand_avx(auVar5,_DAT_140030990);
    auVar14 = vpand_avx(auVar5,_DAT_1400309a0);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar4 = vpaddq_avx(auVar14,auVar4);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar3 - 1.0;
    auVar14 = vpand_avx(auVar14,_DAT_140030b00);
    if (auVar14._0_8_ < 0.0625) {
      dVar7 = auVar5._0_8_ - 1.0;
      dVar9 = dVar7 / (dVar7 + 2.0);
      dVar3 = dVar9 + dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar3 * dVar3;
      auVar13 = vfmadd213sd_fma(ZEXT816(0x3f89999999bac6d4),auVar11,ZEXT816(0x3fb55555555554e6));
      auVar16 = vfmadd213sd_fma(ZEXT816(0x3f3c8034c85dfff0),auVar11,ZEXT816(0x3f62492307f1519f));
      dVar17 = dVar3 * dVar3 * dVar3;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar7;
      auVar5 = vpand_avx(auVar6,_DAT_140030b50);
      dVar10 = auVar5._0_8_;
      dVar3 = ((auVar13._0_8_ * dVar17 + auVar16._0_8_ * dVar17 * dVar17 * dVar3) - dVar7 * dVar9) +
              (dVar7 - dVar10);
      return dVar10 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
             dVar3 * 0.4342937469482422 + dVar10 * 0.4342937469482422;
    }
    uVar1 = auVar4._0_8_ >> 0x2c;
    auVar5 = vpor_avx(auVar16,_DAT_140030a20);
    auVar16 = vpor_avx(auVar4,_DAT_140030a20);
    dVar3 = (auVar16._0_8_ - auVar5._0_8_) * *(double *)(&DAT_140031be0 + uVar1 * 8);
    dVar17 = dVar3 * dVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar3;
    auVar5 = vfmadd213sd_fma(ZEXT816(0x3fc5555555555555),auVar8,ZEXT816(0x3fc999999999999a));
    auVar16 = vfmadd213sd_fma(ZEXT816(0x3fd5555555555555),auVar8,ZEXT816(0x3fe0000000000000));
    auVar5 = vfmadd213sd_fma(auVar5,auVar8,ZEXT816(0x3fd0000000000000));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar17;
    auVar16 = vfmadd231sd_fma(auVar8,auVar16,auVar4);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar17 * dVar17;
    auVar5 = vfmadd231sd_fma(auVar16,auVar5,auVar15);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar5._0_8_ * 0.4342944819032518;
    auVar16 = vfmsub213sd_fma(ZEXT816(0x3e03ef3fde623e25),auVar13,auVar16);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(&DAT_140030bc0 + uVar1 * 8);
    auVar5 = vfmadd231sd_fma(auVar5,auVar13,ZEXT816(0x3fd3441350000000));
    return auVar5._0_8_ + *(double *)(&DAT_1400313d0 + uVar1 * 8) + auVar16._0_8_;
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_1400270e0(dVar3,0xfff0000000000000,1);
    return dVar3;
  }
LAB_140026260:
  dVar3 = (double)FUN_1400270e0(dVar3,0xfff8000000000000,2);
  return dVar3;
}




/* ---- 0x1400262bc : FUN_1400262bc [was: FUN_1400262bc] ---- */

void FUN_1400262bc(void)

{
  _guard_check_icall();
  return;
}




/* ---- 0x140026300 : FUN_140026300 [was: FUN_140026300] ---- */

undefined8 FUN_140026300(longlong param_1,longlong param_2,ulonglong param_3)

{
  __acrt_ptd *p_Var1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x7fffffff < param_3)) {
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_14001925c();
  }
  return 0x7fffffff;
}




/* ---- 0x140026340 : FUN_140026340 [was: FUN_140026340] ---- */

ulonglong FUN_140026340(byte *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  uint uVar5;
  uint uVar6;
  
  if (DAT_14003d760 != 0) {
    iVar3 = FUN_1400263d0(param_1,param_2,param_3,(undefined8 *)0x0);
    return CONCAT44(extraout_var,iVar3);
  }
  if (((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (param_3 < 0x80000000)) {
    if (param_3 == 0) {
      return 0;
    }
    while( true ) {
      bVar1 = *param_1;
      uVar5 = (uint)bVar1;
      param_1 = param_1 + 1;
      bVar2 = *param_2;
      uVar6 = (uint)bVar2;
      param_2 = param_2 + 1;
      if ((uint)bVar1 != (uint)bVar2) {
        uVar5 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar5 = (uint)bVar1;
        }
        if (bVar2 - 0x41 < 0x1a) {
          uVar6 = bVar2 + 0x20;
        }
      }
      uVar4 = (ulonglong)(uVar5 - uVar6);
      if ((uVar5 - uVar6 != 0) || (uVar5 == 0)) break;
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return uVar4;
      }
    }
    return uVar4;
  }
  uVar4 = FUN_140026300((longlong)param_1,(longlong)param_2,param_3);
  return uVar4;
}




/* ---- 0x1400263d0 : FUN_1400263d0 [was: FUN_1400263d0] ---- */

int FUN_1400263d0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  longlong local_28;
  undefined *local_20;
  longlong lStack_18;
  char local_10;
  
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    p_Var3 = FUN_14001abbc();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_14001925c();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_10 = '\0';
  if (param_4 == (undefined8 *)0x0) {
    if (DAT_14003d760 == 0) {
      local_20 = PTR_PTR_14003c5d8;
      local_10 = '\0';
    }
    else {
      local_28 = FUN_14001b0e8();
      local_20 = *(undefined **)(local_28 + 0x90);
      lStack_18 = *(longlong *)(local_28 + 0x88);
      __acrt_update_locale_info(local_28,(longlong *)&local_20);
      FUN_14001ac4c(local_28,&lStack_18);
      if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = (undefined *)*param_4;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if ((iVar2 != 0) || (bVar1 == 0)) break;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}




/* ---- 0x140026a80 : FUN_140026a80 [was: FUN_140026a80] ---- */

uint FUN_140026a80(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_1400271a0();
  if ((uVar2 & 0x3f) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (uVar2 & 1) << 4;
    uVar3 = uVar4 | 8;
    if ((uVar2 & 4) == 0) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3 | 4;
    if ((uVar2 & 8) == 0) {
      uVar4 = uVar3;
    }
    uVar1 = uVar4 | 2;
    if ((uVar2 & 0x10) == 0) {
      uVar1 = uVar4;
    }
    uVar3 = uVar1 | 1;
    if ((uVar2 & 0x20) == 0) {
      uVar3 = uVar1;
    }
    if ((uVar2 & 2) != 0) {
      return uVar3 | 0x80000;
    }
  }
  return uVar3;
}




/* ---- 0x140026b00 : FUN_140026b00 [was: FUN_140026b00] ---- */

uint FUN_140026b00(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = FUN_140027240();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_14003cd38 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar2 = (uint)uVar3 & 0xffffffbf;
      uVar3 = (ulonglong)uVar2;
      FUN_140027250(uVar2);
    }
    else {
      FUN_140027250((uint)uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar4 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar4 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar4 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar4 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}




/* ---- 0x140026da0 : FUN_140026da0 [was: FUN_140026da0] ---- */

uint FUN_140026da0(uint param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined4 extraout_var;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = param_1 & 0x1f;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_140027240();
    *param_2 = CONCAT44(extraout_var,uVar1);
    if (((param_1 & 8) == 0) || (-1 < (char)uVar1)) {
      if (((param_1 & 4) == 0) || ((uVar1 & 0x200) == 0)) {
        if (((param_1 & 1) == 0) || ((uVar1 & 0x400) == 0)) {
          if (((param_1 & 2) != 0) && ((uVar1 & 0x800) != 0)) {
            uVar2 = param_1 & 0x1d;
            uVar3 = (ulonglong)(param_1 & 0x10);
          }
        }
        else {
          uVar3 = 8;
          uVar2 = param_1 & 0x1e;
        }
      }
      else {
        uVar3 = 4;
        uVar2 = param_1 & 0x1b;
      }
    }
    else {
      uVar3 = 1;
      uVar2 = param_1 & 0x17;
    }
    if (((param_1 & 0x10) != 0) && ((uVar1 & 0x1000) != 0)) {
      uVar3 = uVar3 | 0x20;
      uVar2 = uVar2 & 0xffffffef;
    }
    if (uVar2 != 0) {
      FUN_1400271c0(0x1f80,0xffc0);
    }
    if ((uVar3 != 0) && ((uVar3 & ~CONCAT44(extraout_var,uVar1)) != 0)) {
      if (uVar2 == 0) {
        FUN_140027250(uVar1 | (uint)uVar3);
      }
      else {
        FUN_140027260((uint)uVar3);
      }
    }
  }
  return uVar2;
}




/* ---- 0x140026ff0 : FUN_140026ff0 [was: FUN_140026ff0] ---- */

ulonglong FUN_140026ff0(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}




/* ---- 0x1400270e0 : FUN_1400270e0 [was: FUN_1400270e0] ---- */

void FUN_1400270e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_140027100(param_1,param_2,param_3,0x1b,"log10");
  return;
}




/* ---- 0x140027100 : FUN_140027100 [was: FUN_140027100] ---- */

undefined8
FUN_140027100(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffffffffffc4;
  
  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_140026eb0(param_5,param_4,param_2,iVar1,uVar2,CONCAT44(in_stack_ffffffffffffffc4,uVar3),
                param_1,0,1);
  return param_2;
}




/* ---- 0x1400271a0 : FUN_1400271a0 [was: FUN_1400271a0] ---- */

uint FUN_1400271a0(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}




/* ---- 0x1400271c0 : FUN_1400271c0 [was: FUN_1400271c0] ---- */

uint FUN_1400271c0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_14003cd40 != '\0') && ((MXCSR & 0x40) != 0)) {
    return uVar1;
  }
  MXCSR = MXCSR & 0xffffffbf;
  return uVar1;
}




/* ---- 0x140027240 : FUN_140027240 [was: FUN_140027240] ---- */

undefined4 FUN_140027240(void)

{
  return MXCSR;
}




/* ---- 0x140027250 : FUN_140027250 [was: FUN_140027250] ---- */

void FUN_140027250(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}




/* ---- 0x140027260 : FUN_140027260 [was: FUN_140027260] ---- */

void FUN_140027260(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}




/* ---- 0x140027280 : FUN_140027280 [was: FUN_140027280] ---- */

uint FUN_140027280(void)

{
  return MXCSR & 0x3f;
}




/* ---- 0x140027290 : FUN_140027290 [was: FUN_140027290] ---- */

void FUN_140027290(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,uint *param_5,
                  uint *param_6)

{
  FUN_1400272c0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}




/* ---- 0x1400272c0 : FUN_1400272c0 [was: FUN_1400272c0] ---- */

void FUN_1400272c0(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  DWORD dwExceptionCode;
  uint *local_res8;
  
  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~((uint)*param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar1 = FUN_140027280();
  if ((uVar1 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar1 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = (uint)*param_2 & 0x6000;
  if (uVar1 == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 ^ (param_4 << 5 ^ *local_res8) & 0x1ffe0;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 4) = *(undefined8 *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *param_6;
  }
  FUN_1400271a0();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((local_res8[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((local_res8[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((local_res8[2] & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((local_res8[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(local_res8 + 0x14);
  }
  else {
    *param_6 = local_res8[0x14];
  }
  return;
}




/* ---- 0x1400275d0 : FUN_1400275d0 [was: FUN_1400275d0] ---- */

void FUN_1400275d0(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 0x22;
    return;
  }
  return;
}




/* ---- 0x140027660 : FUN_140027660 [was: FUN_140027660] ---- */

ulonglong FUN_140027660(longlong param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  PIMAGE_SECTION_HEADER p_Var3;
  ulonglong uVar2;
  
  bVar1 = FUN_1400276b0((short *)&IMAGE_DOS_HEADER_140000000);
  uVar2 = CONCAT71(extraout_var,bVar1);
  if ((int)uVar2 != 0) {
    p_Var3 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_140000000,param_1 - 0x140000000);
    uVar2 = 0;
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = (ulonglong)(~p_Var3->Characteristics >> 0x1f);
    }
  }
  return uVar2;
}




/* ---- 0x1400276b0 : FUN_1400276b0 [was: FUN_1400276b0] ---- */

bool FUN_1400276b0(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}




/* ---- 0x140027764 : FUN_140027764 [was: FUN_140027764] ---- */

void FUN_140027764(int *param_1,__uint64 param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_14000a1e8(param_2,(longlong)param_4);
  if ((*(uint *)(lVar1 + 4) & ((param_1[1] & 0x66U) != 0) + 1) != 0) {
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return;
}




/* ---- 0x1400277e4 : FUN_1400277e4 [was: FUN_1400277e4] ---- */

void FUN_1400277e4(PVOID param_1,PVOID param_2)

{
  RtlUnwind(param_1,param_2,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}




/* ---- 0x140027810 : FUN_140027810 [was: FUN_140027810] ---- */

void FUN_140027810(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14000c140(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    lVar2 = FUN_14000c540();
    *(PEXCEPTION_RECORD *)(lVar2 + 0x20) = param_1;
    lVar2 = FUN_14000c540();
    *(longlong *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_14001a800();
  }
  return;
}




/* ---- 0x14002785c : FUN_14002785c [was: FUN_14002785c] ---- */

undefined1 (*) [16] FUN_14002785c(undefined1 (*param_1) [16],byte param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  
  pauVar6 = (undefined1 (*) [16])0x0;
  if (param_2 == 0) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar13[0] = -(*pcVar4 == '\0');
    auVar13[1] = -(pcVar4[1] == '\0');
    auVar13[2] = -(pcVar4[2] == '\0');
    auVar13[3] = -(pcVar4[3] == '\0');
    auVar13[4] = -(pcVar4[4] == '\0');
    auVar13[5] = -(pcVar4[5] == '\0');
    auVar13[6] = -(pcVar4[6] == '\0');
    auVar13[7] = -(pcVar4[7] == '\0');
    auVar13[8] = -(pcVar4[8] == '\0');
    auVar13[9] = -(pcVar4[9] == '\0');
    auVar13[10] = -(pcVar4[10] == '\0');
    auVar13[0xb] = -(pcVar4[0xb] == '\0');
    auVar13[0xc] = -(pcVar4[0xc] == '\0');
    auVar13[0xd] = -(pcVar4[0xd] == '\0');
    auVar13[0xe] = -(pcVar4[0xe] == '\0');
    auVar13[0xf] = -(pcVar4[0xf] == '\0');
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar13[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    pcVar5 = pcVar4;
    if (uVar2 == 0) {
      do {
        pcVar4 = pcVar5 + 0x10;
        auVar10[0] = -(*pcVar4 == '\0');
        auVar10[1] = -(pcVar5[0x11] == '\0');
        auVar10[2] = -(pcVar5[0x12] == '\0');
        auVar10[3] = -(pcVar5[0x13] == '\0');
        auVar10[4] = -(pcVar5[0x14] == '\0');
        auVar10[5] = -(pcVar5[0x15] == '\0');
        auVar10[6] = -(pcVar5[0x16] == '\0');
        auVar10[7] = -(pcVar5[0x17] == '\0');
        auVar10[8] = -(pcVar5[0x18] == '\0');
        auVar10[9] = -(pcVar5[0x19] == '\0');
        auVar10[10] = -(pcVar5[0x1a] == '\0');
        auVar10[0xb] = -(pcVar5[0x1b] == '\0');
        auVar10[0xc] = -(pcVar5[0x1c] == '\0');
        auVar10[0xd] = -(pcVar5[0x1d] == '\0');
        auVar10[0xe] = -(pcVar5[0x1e] == '\0');
        auVar10[0xf] = -(pcVar5[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        pcVar5 = pcVar4;
      } while (uVar1 == 0);
    }
    uVar7 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    return (undefined1 (*) [16])(pcVar4 + uVar7);
  }
  if (DAT_14003c320 < 2) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar13 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    uVar2 = -1 << ((byte)param_1 & 0xf);
    auVar11[0] = -(*pcVar4 == '\0');
    auVar11[1] = -(pcVar4[1] == '\0');
    auVar11[2] = -(pcVar4[2] == '\0');
    auVar11[3] = -(pcVar4[3] == '\0');
    auVar11[4] = -(pcVar4[4] == '\0');
    auVar11[5] = -(pcVar4[5] == '\0');
    auVar11[6] = -(pcVar4[6] == '\0');
    auVar11[7] = -(pcVar4[7] == '\0');
    auVar11[8] = -(pcVar4[8] == '\0');
    auVar11[9] = -(pcVar4[9] == '\0');
    auVar11[10] = -(pcVar4[10] == '\0');
    auVar11[0xb] = -(pcVar4[0xb] == '\0');
    auVar11[0xc] = -(pcVar4[0xc] == '\0');
    auVar11[0xd] = -(pcVar4[0xd] == '\0');
    auVar11[0xe] = -(pcVar4[0xe] == '\0');
    auVar11[0xf] = -(pcVar4[0xf] == '\0');
    cVar16 = auVar13[0];
    auVar15[0] = -(*pcVar4 == cVar16);
    cVar17 = auVar13[1];
    auVar15[1] = -(pcVar4[1] == cVar17);
    cVar18 = auVar13[2];
    auVar15[2] = -(pcVar4[2] == cVar18);
    cVar19 = auVar13[3];
    auVar15[3] = -(pcVar4[3] == cVar19);
    auVar15[4] = -(pcVar4[4] == cVar16);
    auVar15[5] = -(pcVar4[5] == cVar17);
    auVar15[6] = -(pcVar4[6] == cVar18);
    auVar15[7] = -(pcVar4[7] == cVar19);
    auVar15[8] = -(pcVar4[8] == cVar16);
    auVar15[9] = -(pcVar4[9] == cVar17);
    auVar15[10] = -(pcVar4[10] == cVar18);
    auVar15[0xb] = -(pcVar4[0xb] == cVar19);
    auVar15[0xc] = -(pcVar4[0xc] == cVar16);
    auVar15[0xd] = -(pcVar4[0xd] == cVar17);
    auVar15[0xe] = -(pcVar4[0xe] == cVar18);
    auVar15[0xf] = -(pcVar4[0xf] == cVar19);
    uVar7 = (ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar15[0xf] >> 7) << 0xf) & uVar2;
    uVar2 = (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar11[0xf] >> 7) << 0xf) & uVar2;
    pcVar5 = pcVar4;
    if (uVar2 == 0) {
      do {
        uVar2 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> uVar2 == 0; uVar2 = uVar2 - 1) {
          }
        }
        if (uVar7 != 0) {
          pauVar6 = (undefined1 (*) [16])(pcVar5 + uVar2);
        }
        pcVar4 = pcVar5 + 0x10;
        auVar14[0] = -(*pcVar4 == '\0');
        auVar14[1] = -(pcVar5[0x11] == '\0');
        auVar14[2] = -(pcVar5[0x12] == '\0');
        auVar14[3] = -(pcVar5[0x13] == '\0');
        auVar14[4] = -(pcVar5[0x14] == '\0');
        auVar14[5] = -(pcVar5[0x15] == '\0');
        auVar14[6] = -(pcVar5[0x16] == '\0');
        auVar14[7] = -(pcVar5[0x17] == '\0');
        auVar14[8] = -(pcVar5[0x18] == '\0');
        auVar14[9] = -(pcVar5[0x19] == '\0');
        auVar14[10] = -(pcVar5[0x1a] == '\0');
        auVar14[0xb] = -(pcVar5[0x1b] == '\0');
        auVar14[0xc] = -(pcVar5[0x1c] == '\0');
        auVar14[0xd] = -(pcVar5[0x1d] == '\0');
        auVar14[0xe] = -(pcVar5[0x1e] == '\0');
        auVar14[0xf] = -(pcVar5[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
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
                (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        auVar12[0] = -(*pcVar4 == cVar16);
        auVar12[1] = -(pcVar5[0x11] == cVar17);
        auVar12[2] = -(pcVar5[0x12] == cVar18);
        auVar12[3] = -(pcVar5[0x13] == cVar19);
        auVar12[4] = -(pcVar5[0x14] == cVar16);
        auVar12[5] = -(pcVar5[0x15] == cVar17);
        auVar12[6] = -(pcVar5[0x16] == cVar18);
        auVar12[7] = -(pcVar5[0x17] == cVar19);
        auVar12[8] = -(pcVar5[0x18] == cVar16);
        auVar12[9] = -(pcVar5[0x19] == cVar17);
        auVar12[10] = -(pcVar5[0x1a] == cVar18);
        auVar12[0xb] = -(pcVar5[0x1b] == cVar19);
        auVar12[0xc] = -(pcVar5[0x1c] == cVar16);
        auVar12[0xd] = -(pcVar5[0x1d] == cVar17);
        auVar12[0xe] = -(pcVar5[0x1e] == cVar18);
        auVar12[0xf] = -(pcVar5[0x1f] == cVar19);
        uVar7 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
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
                              (ushort)(auVar12[0xf] >> 7) << 0xf);
        pcVar5 = pcVar4;
      } while (uVar1 == 0);
    }
    uVar7 = (-uVar2 & uVar2) - 1 & uVar7;
    uVar2 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    if (uVar7 != 0) {
      pauVar6 = (undefined1 (*) [16])(pcVar4 + uVar2);
    }
  }
  else {
    for (; bVar8 = false, ((ulonglong)param_1 & 0xf) != 0;
        param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
      if ((*param_1)[0] == param_2) {
        pauVar6 = param_1;
      }
      if ((*param_1)[0] == '\0') {
        return pauVar6;
      }
    }
    bVar9 = true;
    while( true ) {
      iVar3 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bVar8) {
        pauVar6 = (undefined1 (*) [16])(*param_1 + iVar3);
        bVar9 = pauVar6 == (undefined1 (*) [16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bVar9) break;
      bVar8 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar9 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return pauVar6;
}




/* ---- 0x140027a10 : FUN_140027a10 [was: FUN_140027a10] ---- */

void FUN_140027a10(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}




/* ---- 0x140027a20 : FUN_140027a20 [was: FUN_140027a20] ---- */

void FUN_140027a20(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined1 (*pauVar26) [32];
  undefined1 (*pauVar27) [32];
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar25;
    uVar12 = puVar25[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar25 = uVar11;
    puVar25[1] = uVar12;
    return;
  }
  puVar25 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar25 = param_1;
  }
  if (puVar25 <= param_1) {
    if (DAT_14003c320 < 3) {
      if ((param_3 < 0x801) || (((byte)DAT_14003d4a8 & 2) == 0)) {
        if (0x80 < param_3) {
          lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
          puVar25 = (undefined8 *)((longlong)param_1 - lVar30);
          puVar28 = (undefined8 *)((longlong)param_2 - lVar30);
          param_3 = param_3 + lVar30;
          if (0x80 < param_3) {
            do {
              uVar10 = puVar28[1];
              uVar11 = puVar28[2];
              uVar12 = puVar28[3];
              uVar13 = puVar28[4];
              uVar32 = puVar28[5];
              uVar33 = puVar28[6];
              uVar14 = puVar28[7];
              *puVar25 = *puVar28;
              puVar25[1] = uVar10;
              puVar25[2] = uVar11;
              puVar25[3] = uVar12;
              puVar25[4] = uVar13;
              puVar25[5] = uVar32;
              puVar25[6] = uVar33;
              puVar25[7] = uVar14;
              uVar10 = puVar28[9];
              uVar11 = puVar28[10];
              uVar12 = puVar28[0xb];
              uVar13 = puVar28[0xc];
              uVar32 = puVar28[0xd];
              uVar33 = puVar28[0xe];
              uVar14 = puVar28[0xf];
              puVar25[8] = puVar28[8];
              puVar25[9] = uVar10;
              puVar25[10] = uVar11;
              puVar25[0xb] = uVar12;
              puVar25[0xc] = uVar13;
              puVar25[0xd] = uVar32;
              puVar25[0xe] = uVar33;
              puVar25[0xf] = uVar14;
              puVar25 = puVar25 + 0x10;
              puVar28 = puVar28 + 0x10;
              param_3 = param_3 - 0x80;
            } while (0x7f < param_3);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000140027f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)(&DAT_1400325e8 + (param_3 + 0xf >> 4) * 4)))();
        return;
      }
    }
    else if (((param_3 < 0x2001) || (0x180000 < param_3)) || (((byte)DAT_14003d4a8 & 2) == 0)) {
      uVar10 = *param_2;
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
      uVar32 = *puVar25;
      uVar33 = puVar25[1];
      uVar14 = puVar25[2];
      uVar15 = puVar25[3];
      if (0x100 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
        pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
        pauVar26 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x100 < param_3) {
          if (0x180000 < param_3) {
            do {
              uVar29 = param_3;
              pauVar27 = pauVar26;
              pauVar24 = pauVar23;
              auVar3 = pauVar27[1];
              auVar4 = pauVar27[2];
              auVar5 = pauVar27[3];
              auVar6 = vmovntdq_avx(*pauVar27);
              *pauVar24 = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[1] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[2] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[3] = auVar3;
              auVar3 = pauVar27[5];
              auVar4 = pauVar27[6];
              auVar5 = pauVar27[7];
              auVar6 = vmovntdq_avx(pauVar27[4]);
              pauVar24[4] = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[5] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[6] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[7] = auVar3;
              pauVar23 = pauVar24 + 8;
              pauVar26 = pauVar27 + 8;
              param_3 = uVar29 - 0x100;
            } while (0xff < uVar29 - 0x100);
            uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
            switch(uVar29) {
            case 0x1e1:
            case 0x1e2:
            case 0x1e3:
            case 0x1e4:
            case 0x1e5:
            case 0x1e6:
            case 0x1e7:
            case 0x1e8:
            case 0x1e9:
            case 0x1ea:
            case 0x1eb:
            case 0x1ec:
            case 0x1ed:
            case 0x1ee:
            case 0x1ef:
            case 0x1f0:
            case 0x1f1:
            case 0x1f2:
            case 499:
            case 500:
            case 0x1f5:
            case 0x1f6:
            case 0x1f7:
            case 0x1f8:
            case 0x1f9:
            case 0x1fa:
            case 0x1fb:
            case 0x1fc:
            case 0x1fd:
            case 0x1fe:
            case 0x1ff:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar27 + uVar31));
              *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
            case 0x1c1:
            case 0x1c2:
            case 0x1c3:
            case 0x1c4:
            case 0x1c5:
            case 0x1c6:
            case 0x1c7:
            case 0x1c8:
            case 0x1c9:
            case 0x1ca:
            case 0x1cb:
            case 0x1cc:
            case 0x1cd:
            case 0x1ce:
            case 0x1cf:
            case 0x1d0:
            case 0x1d1:
            case 0x1d2:
            case 0x1d3:
            case 0x1d4:
            case 0x1d5:
            case 0x1d6:
            case 0x1d7:
            case 0x1d8:
            case 0x1d9:
            case 0x1da:
            case 0x1db:
            case 0x1dc:
            case 0x1dd:
            case 0x1de:
            case 0x1df:
            case 0x1e0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[1] + uVar31));
              *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
            case 0x1a1:
            case 0x1a2:
            case 0x1a3:
            case 0x1a4:
            case 0x1a5:
            case 0x1a6:
            case 0x1a7:
            case 0x1a8:
            case 0x1a9:
            case 0x1aa:
            case 0x1ab:
            case 0x1ac:
            case 0x1ad:
            case 0x1ae:
            case 0x1af:
            case 0x1b0:
            case 0x1b1:
            case 0x1b2:
            case 0x1b3:
            case 0x1b4:
            case 0x1b5:
            case 0x1b6:
            case 0x1b7:
            case 0x1b8:
            case 0x1b9:
            case 0x1ba:
            case 0x1bb:
            case 0x1bc:
            case 0x1bd:
            case 0x1be:
            case 0x1bf:
            case 0x1c0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[2] + uVar31));
              *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
            case 0x181:
            case 0x182:
            case 0x183:
            case 0x184:
            case 0x185:
            case 0x186:
            case 0x187:
            case 0x188:
            case 0x189:
            case 0x18a:
            case 0x18b:
            case 0x18c:
            case 0x18d:
            case 0x18e:
            case 399:
            case 400:
            case 0x191:
            case 0x192:
            case 0x193:
            case 0x194:
            case 0x195:
            case 0x196:
            case 0x197:
            case 0x198:
            case 0x199:
            case 0x19a:
            case 0x19b:
            case 0x19c:
            case 0x19d:
            case 0x19e:
            case 0x19f:
            case 0x1a0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[3] + uVar31));
              *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
            case 0x161:
            case 0x162:
            case 0x163:
            case 0x164:
            case 0x165:
            case 0x166:
            case 0x167:
            case 0x168:
            case 0x169:
            case 0x16a:
            case 0x16b:
            case 0x16c:
            case 0x16d:
            case 0x16e:
            case 0x16f:
            case 0x170:
            case 0x171:
            case 0x172:
            case 0x173:
            case 0x174:
            case 0x175:
            case 0x176:
            case 0x177:
            case 0x178:
            case 0x179:
            case 0x17a:
            case 0x17b:
            case 0x17c:
            case 0x17d:
            case 0x17e:
            case 0x17f:
            case 0x180:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[4] + uVar31));
              *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
            case 0x141:
            case 0x142:
            case 0x143:
            case 0x144:
            case 0x145:
            case 0x146:
            case 0x147:
            case 0x148:
            case 0x149:
            case 0x14a:
            case 0x14b:
            case 0x14c:
            case 0x14d:
            case 0x14e:
            case 0x14f:
            case 0x150:
            case 0x151:
            case 0x152:
            case 0x153:
            case 0x154:
            case 0x155:
            case 0x156:
            case 0x157:
            case 0x158:
            case 0x159:
            case 0x15a:
            case 0x15b:
            case 0x15c:
            case 0x15d:
            case 0x15e:
            case 0x15f:
            case 0x160:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[5] + uVar31));
              *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
            case 0x121:
            case 0x122:
            case 0x123:
            case 0x124:
            case 0x125:
            case 0x126:
            case 0x127:
            case 0x128:
            case 0x129:
            case 0x12a:
            case 299:
            case 300:
            case 0x12d:
            case 0x12e:
            case 0x12f:
            case 0x130:
            case 0x131:
            case 0x132:
            case 0x133:
            case 0x134:
            case 0x135:
            case 0x136:
            case 0x137:
            case 0x138:
            case 0x139:
            case 0x13a:
            case 0x13b:
            case 0x13c:
            case 0x13d:
            case 0x13e:
            case 0x13f:
            case 0x140:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[6] + uVar31));
              *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
            default:
              puVar25 = (undefined8 *)(pauVar24[-1] + uVar29);
              *puVar25 = uVar32;
              puVar25[1] = uVar33;
              puVar25[2] = uVar14;
              puVar25[3] = uVar15;
            case 0x100:
              *param_1 = uVar10;
              param_1[1] = uVar11;
              param_1[2] = uVar12;
              param_1[3] = uVar13;
              return;
            }
          }
          do {
            uVar10 = *(undefined8 *)(*pauVar26 + 8);
            uVar11 = *(undefined8 *)(*pauVar26 + 0x10);
            uVar12 = *(undefined8 *)(*pauVar26 + 0x18);
            uVar13 = *(undefined8 *)pauVar26[1];
            uVar32 = *(undefined8 *)(pauVar26[1] + 8);
            uVar33 = *(undefined8 *)(pauVar26[1] + 0x10);
            uVar14 = *(undefined8 *)(pauVar26[1] + 0x18);
            uVar15 = *(undefined8 *)pauVar26[2];
            uVar16 = *(undefined8 *)(pauVar26[2] + 8);
            uVar17 = *(undefined8 *)(pauVar26[2] + 0x10);
            uVar18 = *(undefined8 *)(pauVar26[2] + 0x18);
            uVar19 = *(undefined8 *)pauVar26[3];
            uVar20 = *(undefined8 *)(pauVar26[3] + 8);
            uVar21 = *(undefined8 *)(pauVar26[3] + 0x10);
            uVar22 = *(undefined8 *)(pauVar26[3] + 0x18);
            *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar26;
            *(undefined8 *)(*pauVar23 + 8) = uVar10;
            *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
            *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
            *(undefined8 *)pauVar23[1] = uVar13;
            *(undefined8 *)(pauVar23[1] + 8) = uVar32;
            *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[2] = uVar15;
            *(undefined8 *)(pauVar23[2] + 8) = uVar16;
            *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[3] = uVar19;
            *(undefined8 *)(pauVar23[3] + 8) = uVar20;
            *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
            uVar10 = *(undefined8 *)(pauVar26[4] + 8);
            uVar11 = *(undefined8 *)(pauVar26[4] + 0x10);
            uVar12 = *(undefined8 *)(pauVar26[4] + 0x18);
            uVar13 = *(undefined8 *)pauVar26[5];
            uVar32 = *(undefined8 *)(pauVar26[5] + 8);
            uVar33 = *(undefined8 *)(pauVar26[5] + 0x10);
            uVar14 = *(undefined8 *)(pauVar26[5] + 0x18);
            uVar15 = *(undefined8 *)pauVar26[6];
            uVar16 = *(undefined8 *)(pauVar26[6] + 8);
            uVar17 = *(undefined8 *)(pauVar26[6] + 0x10);
            uVar18 = *(undefined8 *)(pauVar26[6] + 0x18);
            uVar19 = *(undefined8 *)pauVar26[7];
            uVar20 = *(undefined8 *)(pauVar26[7] + 8);
            uVar21 = *(undefined8 *)(pauVar26[7] + 0x10);
            uVar22 = *(undefined8 *)(pauVar26[7] + 0x18);
            *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar26[4];
            *(undefined8 *)(pauVar23[4] + 8) = uVar10;
            *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
            *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
            *(undefined8 *)pauVar23[5] = uVar13;
            *(undefined8 *)(pauVar23[5] + 8) = uVar32;
            *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[6] = uVar15;
            *(undefined8 *)(pauVar23[6] + 8) = uVar16;
            *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[7] = uVar19;
            *(undefined8 *)(pauVar23[7] + 8) = uVar20;
            *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
            pauVar23 = pauVar23 + 8;
            pauVar26 = pauVar26 + 8;
            param_3 = param_3 - 0x100;
          } while (0xff < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000140027c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_1400325a0 + (param_3 + 0x1f >> 5) * 4)))();
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar25 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar25;
  uVar13 = puVar25[1];
  puVar28 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar25 = puVar28;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar28 & 0xf) != 0) {
    puVar25 = (undefined8 *)((ulonglong)puVar28 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
    *puVar28 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar25 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    puVar28 = puVar25;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar25 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x20);
      uVar13 = *puVar25;
      uVar32 = puVar25[1];
      puVar25 = puVar28 + -0x10;
      puVar28[-2] = *puVar1;
      puVar28[-1] = uVar12;
      puVar28[-4] = uVar13;
      puVar28[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar28[-6] = *puVar1;
      puVar28[-5] = uVar12;
      puVar28[-8] = uVar13;
      puVar28[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar28[-10] = *puVar1;
      puVar28[-9] = uVar12;
      puVar28[-0xc] = uVar13;
      puVar28[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar28[-0xe] = uVar12;
      puVar28[-0xd] = uVar13;
      *puVar25 = uVar32;
      puVar28[-0xf] = uVar33;
      puVar28 = puVar25;
    }
    puVar28[-0xe] = uVar12;
    puVar28[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    puVar25 = puVar25 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar25 = uVar32;
  puVar25[1] = uVar33;
  return;
}




/* ---- 0x1400280b0 : FUN_1400280b0 [was: FUN_1400280b0] ---- */

undefined8 FUN_1400280b0(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}




/* ---- 0x1400280c0 : FUN_1400280c0 [was: FUN_1400280c0] ---- */

undefined1 (*) [32] FUN_1400280c0(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined2 uVar9;
  undefined4 uVar10;
  
  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  pauVar2 = param_1;
  if (DAT_14003c320 < 3) {
    if ((param_3 <= DAT_14003c328) || (((byte)DAT_14003d4a8 & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      uVar6 = param_3 + lVar11;
      if (0x80 < uVar6) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          uVar6 = uVar6 - 0x80;
        } while (0x7f < uVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x000140028408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                          *(uint *)(&DAT_140032698 + (uVar6 + 0xf >> 4) * 4)))
                          (pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_14003c328) || (DAT_14003c330 < param_3)) ||
          (((byte)DAT_14003d4a8 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar7 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar7);
    uVar6 = param_3 + lVar7;
    if (0x100 < uVar6) {
      if (DAT_14003c330 < uVar6) {
        do {
          uVar5 = uVar6;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar6 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar6) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar6) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar6) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar6) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar6) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar6) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        uVar6 = uVar6 - 0x100;
      } while (0xff < uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x000140028254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)(&DAT_140032650 + (uVar6 + 0x1f >> 5) * 4)))(lVar11,uVar5 - lVar7);
    return pauVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}




/* ---- 0x1400287b0 : FUN_1400287b0 [was: FUN_1400287b0] ---- */

void FUN_1400287b0(undefined8 param_1,longlong param_2)

{
  FUN_1400089f0((longlong *)(param_2 + 0x30));
  return;
}




/* ---- 0x1400287d0 : FUN_1400287d0 [was: FUN_1400287d0] ---- */

void FUN_1400287d0(undefined8 param_1,longlong param_2)

{
  FUN_140008aa0((undefined8 *)(param_2 + 0x80));
  return;
}




/* ---- 0x1400287f0 : FUN_1400287f0 [was: FUN_1400287f0] ---- */

void FUN_1400287f0(void)

{
  FUN_140008a20();
  return;
}




/* ---- 0x140028810 : FUN_140028810 [was: FUN_140028810] ---- */

void FUN_140028810(void)

{
  FUN_140008a20();
  return;
}




/* ---- 0x140028830 : FUN_140028830 [was: FUN_140028830] ---- */

void FUN_140028830(void)

{
  FUN_1400089b0();
  return;
}




/* ---- 0x140028850 : FUN_140028850 [was: FUN_140028850] ---- */

void FUN_140028850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    FUN_140008a80(*(longlong **)(param_2 + 0x60));
  }
  return;
}




/* ---- 0x1400288a0 : FUN_1400288a0 [was: FUN_1400288a0] ---- */

void FUN_1400288a0(undefined8 param_1,longlong param_2)

{
  FUN_140008a80((longlong *)(param_2 + 0x60));
  return;
}




/* ---- 0x1400288b8 : FUN_1400288b8 [was: FUN_1400288b8] ---- */

void FUN_1400288b8(undefined8 *param_1)

{
  FUN_1400193e8(*(int *)*param_1,param_1);
  return;
}




/* ---- 0x1400288d6 : FUN_1400288d6 [was: FUN_1400288d6] ---- */

bool FUN_1400288d6(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* ---- 0x1400288ee : FUN_1400288ee [was: FUN_1400288ee] ---- */

undefined4 FUN_1400288ee(undefined8 param_1,longlong param_2)

{
  _xDISPATCHER_CONTEXT *p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar3 = FUN_14000c540();
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  p_Var1 = *(_xDISPATCHER_CONTEXT **)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(p_Var1 + 8);
  lVar3 = FUN_14000c540();
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_14000c540();
  *(undefined8 *)(lVar3 + 0x68) = uVar2;
  thunk_FUN_14000e1b0((int *)**(undefined8 **)(param_2 + 0x48),*(__uint64 **)(param_2 + 0x78),
                      *(ULONG_PTR *)(param_2 + 0x80),p_Var1,*(_s_FuncInfo **)(param_2 + 0x90),0,0,1)
  ;
  lVar3 = FUN_14000c540();
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}




/* ---- 0x140028995 : FUN_140028995 [was: FUN_140028995] ---- */

undefined4 FUN_140028995(undefined8 param_1,longlong param_2)

{
  _xDISPATCHER_CONTEXT *p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar3 = FUN_14000c540();
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  p_Var1 = *(_xDISPATCHER_CONTEXT **)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(p_Var1 + 8);
  lVar3 = FUN_14000c540();
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_14000c540();
  *(undefined8 *)(lVar3 + 0x68) = uVar2;
  lVar3 = FUN_14000c540();
  *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(param_2 + 0xa8);
  FUN_14000e690((int *)**(undefined8 **)(param_2 + 0x48),*(__uint64 **)(param_2 + 0x78),
                *(ULONG_PTR *)(param_2 + 0x80),p_Var1,*(FuncInfo4 **)(param_2 + 0x90),0,0,1);
  lVar3 = FUN_14000c540();
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}




/* ---- 0x140028a4a : FUN_140028a4a [was: FUN_140028a4a] ---- */

undefined4 FUN_140028a4a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if ((((*(char *)(param_2 + 0x58) != '\0') &&
       (*(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30),
       **(int **)(param_2 + 0x28) == -0x1f928c9d)) &&
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
     (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
       (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521)) ||
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))) {
    lVar2 = FUN_14000c540();
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_14000c540();
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_14001a800();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}




/* ---- 0x140028adc : FUN_140028adc [was: FUN_140028adc] ---- */

void FUN_140028adc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  *(undefined4 *)(lVar1 + 0x78) = 0xfffffffe;
  return;
}




/* ---- 0x140028af8 : FUN_140028af8 [was: FUN_140028af8] ---- */

void FUN_140028af8(undefined8 *param_1,longlong param_2)

{
  FUN_14000ee58(param_1,*(longlong *)(param_2 + 0xb8),(undefined4 *)(param_2 + 0x20));
  return;
}




/* ---- 0x140028b19 : FUN_140028b19 [was: FUN_140028b19] ---- */

void FUN_140028b19(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_14000bf38(*(longlong *)(param_2 + 0x38));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xb8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_14000c3b4(piVar1);
    }
  }
  lVar2 = FUN_14000c540();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0xc0);
  lVar2 = FUN_14000c540();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x40);
  return;
}




/* ---- 0x140028b9f : FUN_140028b9f [was: FUN_140028b9f] ---- */

void FUN_140028b9f(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0xd8),*(int *)(param_2 + 200),
                     (int *)(param_2 + 0x20));
  return;
}




/* ---- 0x140028bc7 : FUN_140028bc7 [was: FUN_140028bc7] ---- */

void FUN_140028bc7(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_14000bf38(*(longlong *)(param_2 + 0x40));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar1 + 10));
    if (iVar3 != 0) {
      FUN_14000c3b4(piVar1);
    }
  }
  lVar2 = FUN_14000c540();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  lVar2 = FUN_14000c540();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x48);
  lVar2 = FUN_14000c540();
  *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_2 + 0xc0);
  return;
}




/* ---- 0x140028c58 : FUN_140028c58 [was: FUN_140028c58] ---- */

void FUN_140028c58(undefined8 *param_1)

{
  FUN_14000c480(param_1);
  return;
}




/* ---- 0x140028c6e : FUN_140028c6e [was: FUN_140028c6e] ---- */

void FUN_140028c6e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_14000c540();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}




/* ---- 0x140028c91 : FUN_140028c91 [was: FUN_140028c91] ---- */

void FUN_140028c91(undefined8 *param_1)

{
  FUN_14000c480(param_1);
  return;
}




/* ---- 0x140028ca7 : FUN_140028ca7 [was: FUN_140028ca7] ---- */

void FUN_140028ca7(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14000c540();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_14000c540();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}




/* ---- 0x140028cca : FUN_140028cca [was: FUN_140028cca] ---- */

void FUN_140028cca(undefined8 param_1,longlong param_2)

{
  FUN_1400106cc(*(longlong *)(param_2 + 0x40));
  return;
}




/* ---- 0x140028ce4 : FUN_140028ce4 [was: FUN_140028ce4] ---- */

void FUN_140028ce4(undefined8 param_1,longlong param_2)

{
  FUN_1400106cc(**(longlong **)(param_2 + 0x48));
  return;
}




/* ---- 0x140028d46 : FUN_140028d46 [was: FUN_140028d46] ---- */

undefined4 FUN_140028d46(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}




/* ---- 0x140028e49 : FUN_140028e49 [was: FUN_140028e49] ---- */

void FUN_140028e49(undefined8 param_1,longlong param_2)

{
  FUN_1400106cc(*(longlong *)(param_2 + 0x40));
  return;
}




/* ---- 0x140028e61 : FUN_140028e61 [was: FUN_140028e61] ---- */

void FUN_140028e61(undefined8 param_1,longlong param_2)

{
  FUN_14001fea8(**(uint **)(param_2 + 0x48));
  return;
}




/* ---- 0x140028e7b : FUN_140028e7b [was: FUN_140028e7b] ---- */

void FUN_140028e7b(undefined8 param_1,longlong param_2)

{
  FUN_14001fea8(*(uint *)(param_2 + 0x60));
  return;
}




/* ---- 0x140028e92 : FUN_140028e92 [was: FUN_140028e92] ---- */

void FUN_140028e92(undefined8 param_1,longlong param_2)

{
  FUN_14001fea8(*(uint *)(param_2 + 0x40));
  return;
}




/* ---- 0x140028eb0 : _ctrlfp$filt$0 [was: _ctrlfp$filt$0] ---- */

/* Library Function - Single Match
    _ctrlfp$filt$0
   
   Library: Visual Studio 2005 Release */

undefined8 _ctrlfp_filt_0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




/* ---- 0x140028ee0 : FUN_140028ee0 [was: FUN_140028ee0] ---- */

undefined8 FUN_140028ee0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined8 **)(param_2 + 0x10) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 8) = iVar1;
  if ((iVar1 == -0x3ffffffb) || (iVar1 == -0x3fffffe3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




/* ---- 0x140028f10 : FUN_140028f10 [was: FUN_140028f10] ---- */

bool FUN_140028f10(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




