/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: cheat_features                                            */
/* /* Aimbot, ESP, Triggerbot, cheat logic */                             */
/* Functions: 64                                                        */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x14000a8c8 : FUN_14000a8c8 [was: FUN_14000a8c8] ---- */

/* WARNING: Removing unreachable block (ram,0x00014000a955) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_14000a8c8(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_1400001f8; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002e8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_14000a93e;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_14000a93e:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}




/* ---- 0x14000adb8 : FUN_14000adb8 [was: FUN_14000adb8] ---- */

/* WARNING: Removing unreachable block (ram,0x00014000aea9) */
/* WARNING: Removing unreachable block (ram,0x00014000ae99) */
/* WARNING: Removing unreachable block (ram,0x00014000ae74) */
/* WARNING: Removing unreachable block (ram,0x00014000adf2) */
/* WARNING: Removing unreachable block (ram,0x00014000add0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000adb8(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_14003c328 = 0x8000;
    DAT_14003c330 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_14003d4a8 = DAT_14003d4a8 | 1;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_14003d4a8 = DAT_14003d4a8 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar10 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar11 = (ulonglong)*(uint *)(lVar4 + 4);
    }
  }
  DAT_14003c320 = 1;
  DAT_14003c324 = 2;
  uVar7 = DAT_14003c318 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_14003c320 = 2;
    DAT_14003c324 = 6;
    uVar7 = DAT_14003c318 & 0xffffffffffffffee;
  }
  DAT_14003c318 = uVar7;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)in_XCR0, (bVar6 & 6) == 6)) {
      DAT_14003c320 = 3;
      uVar7 = DAT_14003c318;
      uVar5 = DAT_14003c324 | 8;
      if ((uVar8 & 0x20) != 0) {
        DAT_14003c320 = 5;
        uVar7 = DAT_14003c318 & 0xfffffffffffffffd;
        uVar5 = DAT_14003c324 | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          DAT_14003c324 = DAT_14003c324 | 0x68;
          DAT_14003c320 = 6;
          uVar7 = DAT_14003c318 & 0xffffffffffffffd9;
          uVar5 = DAT_14003c324;
        }
      }
      DAT_14003c324 = uVar5;
      DAT_14003c318 = uVar7;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_14003c318 = DAT_14003c318 & 0xfffffffffeffffff;
      }
      if (((uVar10 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        _DAT_14003d4a4 = (uint)uVar11 & 0x400ff;
        DAT_14003c318 = ~((ulonglong)((uint)(uVar11 >> 0x10) & 6) | 0x1000029) & DAT_14003c318;
        if (1 < (byte)_DAT_14003d4a4) {
          DAT_14003c318 = DAT_14003c318 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar10 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_14003c318 = DAT_14003c318 & 0xffffffffffffff7f;
    }
  }
  return 0;
}




/* ---- 0x14000cfbc : FUN_14000cfbc [was: FUN_14000cfbc] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14000cfbc(int *param_1,__uint64 *param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4,
                  _s_FuncInfo *param_5,byte param_6,undefined8 param_7,longlong param_8)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStackY_168 [32];
  int *in_stack_fffffffffffffed0;
  undefined4 uVar14;
  ULONG_PTR local_100;
  longlong local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined8 local_c8;
  int iStack_c0;
  uint uStack_bc;
  int local_b8;
  _s_FuncInfo *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_14003c2c0 ^ (ulonglong)auStackY_168;
  local_e0 = param_8;
  iVar5 = __FrameHandler3::GetHandlerSearchState(param_2,param_4,param_5);
  if ((-2 < iVar5) && (iVar5 < param_5->maxState)) {
    local_100 = param_3;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
       (((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)) &&
        (*(longlong *)(param_1 + 0xc) == 0)))) {
      lVar7 = FUN_14000c540();
      if (*(longlong *)(lVar7 + 0x20) == 0) {
        return;
      }
      lVar7 = FUN_14000c540();
      param_1 = *(int **)(lVar7 + 0x20);
      lVar7 = FUN_14000c540();
      local_100 = *(ULONG_PTR *)(lVar7 + 0x28);
      FUN_14000bfcc(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         ((((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
           ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) &&
          (*(longlong *)(param_1 + 0xc) == 0)))) goto LAB_14000d4a5;
      lVar7 = FUN_14000c540();
      if (*(longlong *)(lVar7 + 0x38) != 0) {
        lVar7 = FUN_14000c540();
        piVar11 = *(int **)(lVar7 + 0x38);
        lVar7 = FUN_14000c540();
        *(undefined8 *)(lVar7 + 0x38) = 0;
        cVar3 = FUN_14000f450((longlong)param_1,piVar11);
        if (cVar3 == '\0') {
          uVar8 = FUN_14000f538(piVar11);
          if ((char)uVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_14001a800();
          }
          FUN_14000c3b4(param_1);
          FUN_14000e880(&local_c8);
                    /* WARNING: Subroutine does not return */
          FUN_14000b37c(&local_c8,&DAT_1400349b0);
        }
      }
    }
    uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
    local_a8 = *(undefined8 *)(param_4 + 8);
    local_b0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
       ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) {
      if (param_5->nTryBlocks != 0) {
        FUN_14000b834(&local_90,&local_b0,iVar5,(ulonglong *)param_4,(longlong)param_5);
        uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        uVar6 = (uint)uStack_88;
        local_a0 = local_90;
        uStack_98 = uStack_88;
        if (uVar6 < local_78) {
          do {
            lVar7 = (longlong)*(int *)(*local_a0 + 0x10) + (ulonglong)uVar6 * 0x14;
            piVar11 = (int *)(lVar7 + local_90[1]);
            local_c8._0_4_ = *piVar11;
            local_c8._4_4_ = piVar11[1];
            iStack_c0 = piVar11[2];
            uStack_bc = piVar11[3];
            local_b8 = *(int *)(lVar7 + 0x10 + local_90[1]);
            if (((int)local_c8 <= iVar5) && (iVar5 <= local_c8._4_4_)) {
              local_d0 = (longlong)local_b8 + *(longlong *)(param_4 + 8);
              uVar8 = 0;
              uStack_d4 = 0;
              local_d8 = uStack_bc;
              if (uStack_bc != 0) {
                do {
                  puVar1 = (undefined8 *)(local_d0 + uVar8 * 0x14);
                  local_70 = *puVar1;
                  uStack_68 = puVar1[1];
                  local_60 = *(undefined4 *)(local_d0 + 0x10 + uVar8 * 0x14);
                  iVar13 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar7 = FUN_14000bfa0();
                  piVar11 = (int *)(lVar7 + 4 + (longlong)iVar13);
                  iVar13 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar7 = FUN_14000bfa0();
                  for (iVar13 = *(int *)(lVar7 + iVar13); 0 < iVar13; iVar13 = iVar13 + -1) {
                    iVar2 = *piVar11;
                    lVar7 = FUN_14000bfa0();
                    uVar9 = FUN_14000df50((byte *)&local_70,(byte *)(iVar2 + lVar7),
                                          *(byte **)(param_1 + 0xc));
                    if ((int)uVar9 != 0) {
                      in_stack_fffffffffffffed0 = (int *)&local_c8;
                      FUN_14000ce0c((ULONG_PTR)param_1,(longlong *)param_2,local_100,
                                    (ulonglong *)param_4,(ULONG_PTR)param_5,(byte *)&local_70,
                                    (byte *)(iVar2 + lVar7),in_stack_fffffffffffffed0);
                      goto LAB_14000d321;
                    }
                    piVar11 = piVar11 + 1;
                  }
                  uVar12 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar12;
                } while (uVar12 != local_d8);
              }
            }
LAB_14000d321:
            uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_78);
        }
      }
      if ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
         (((iVar5 = param_5->dispESTypeList, iVar5 != 0 &&
           (lVar7 = FUN_14000bf8c(), lVar7 + iVar5 != 0)) ||
          (((param_5->EHFlags & 4) != 0 &&
           (bVar4 = FUN_14000b65c((ulonglong *)param_4,(longlong)param_5), !bVar4)))))) {
        if ((param_5->EHFlags & 4) != 0) {
          lVar7 = FUN_14000c540();
          *(int **)(lVar7 + 0x20) = param_1;
          lVar7 = FUN_14000c540();
          *(ULONG_PTR *)(lVar7 + 0x28) = local_100;
                    /* WARNING: Subroutine does not return */
          FUN_14001a800();
        }
        iVar5 = param_5->dispESTypeList;
        if (iVar5 == 0) {
          piVar11 = (int *)0x0;
        }
        else {
          lVar7 = FUN_14000bf8c();
          piVar11 = (int *)(iVar5 + lVar7);
        }
        cVar3 = FUN_14000f450((longlong)param_1,piVar11);
        if (cVar3 == '\0') {
          plVar10 = FUN_14000b728((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,
                                  &local_e0);
          FUN_14000baec(param_2,(ULONG_PTR)param_1,local_100,(ULONG_PTR)plVar10,0,(ULONG_PTR)param_5
                        ,-1,CONCAT44(uVar14,0xffffffff),0,(undefined8 *)param_4,param_6);
        }
      }
    }
    else if (param_5->nTryBlocks != 0) {
      if (param_6 != 0) goto LAB_14000d4a5;
      FUN_14000d9e4(param_1,(longlong *)param_2,local_100,(ulonglong *)param_4,(ULONG_PTR)param_5,
                    iVar5);
    }
    lVar7 = FUN_14000c540();
    if (*(longlong *)(lVar7 + 0x38) == 0) {
      return;
    }
  }
LAB_14000d4a5:
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14000e1b0 : FUN_14000e1b0 [was: FUN_14000e1b0] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_14000e1b0(int *param_1,__uint64 *param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4,
             _s_FuncInfo *param_5,int param_6,longlong param_7,byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  __except_validate_context_record(param_3);
  lVar2 = FUN_14000c540();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*param_1 != -0x1f928c9d)) {
    if (*param_1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar5 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_14000e21e;
      }
    }
    else {
      bVar5 = *param_1 == -0x7fffffda;
LAB_14000e21e:
      if (bVar5) goto LAB_14000e235;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_14000e235:
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (iVar1 = param_5->dispESTypeList, iVar1 == 0)) ||
        (lVar2 = FUN_14000bf8c(), lVar2 + iVar1 == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5->EHFlags & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)))) {
      lVar2 = FUN_14000bfa0();
      pcVar4 = (code *)(lVar2 + iVar1);
      if (pcVar4 != (code *)0x0) {
        uVar3 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                          CONCAT44(uVar7,(uint)param_8));
        return uVar3;
      }
    }
    FUN_14000cfbc(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar6,param_6),param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 1) & 0x20) == 0) {
LAB_14000e2bb:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*param_1 == -0x7fffffda) {
      iVar1 = FUN_14000c744((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_14000e3d7:
                    /* WARNING: Subroutine does not return */
        FUN_14001a8a0();
      }
    }
    else {
      if (*param_1 != -0x7fffffd7) goto LAB_14000e2bb;
      iVar1 = param_1[0xe];
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_14000e3d7;
      param_2 = *(__uint64 **)(param_1 + 10);
    }
    FUN_14000ef20(param_2,(ulonglong *)param_4,param_5,iVar1);
  }
  return 1;
}




/* ---- 0x140010724 : FUN_140010724 [was: FUN_140010724] ---- */

ulonglong FUN_140010724(FILE *param_1)

{
  bool bVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (FILE *)0x0) {
    local_18 = auStack_38;
    p_Var3 = FUN_14001abbc();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_14001925c();
    return 0xffffffff;
  }
  FUN_1400106c0((longlong)param_1);
  bVar1 = true;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    if (uVar2 < 0xfffffffe) {
      puVar6 = (undefined *)
               ((&DAT_14003d870)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    else {
      puVar6 = &DAT_14003c5f0;
    }
    puVar5 = &DAT_14003c5f0;
    if (puVar6[0x39] == '\0') {
      if (uVar2 < 0xfffffffe) {
        puVar5 = (undefined *)
                 ((&DAT_14003d870)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_1400107f0;
    }
    bVar1 = false;
  }
LAB_1400107f0:
  if (bVar1) {
    uVar4 = _fgetc_nolock(param_1);
    uVar4 = uVar4 & 0xffffffff;
    FUN_1400106cc((longlong)param_1);
  }
  else {
    p_Var3 = FUN_14001abbc();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_14001925c();
    FUN_1400277e4(local_18,(PVOID)0x140010816);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}




/* ---- 0x140013718 : FUN_140013718 [was: FUN_140013718] ---- */

uint FUN_140013718(_locale_t param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  __acrt_ptd *p_Var12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  char cVar17;
  int iVar18;
  int *piVar19;
  byte local_res10 [8];
  int *local_res18;
  byte local_res20;
  int local_74;
  longlong local_68;
  longlong *local_60;
  byte *local_58;
  longlong *local_50;
  
  puVar4 = (undefined8 *)*param_2;
  local_res18 = param_3;
  if ((puVar4 == (undefined8 *)0x0) || (param_2[3] == 0)) {
    p_Var12 = FUN_14001abbc();
    *(undefined4 *)p_Var12 = 0x16;
    FUN_14001925c();
    return 7;
  }
  local_68 = param_2[2];
  param_2[2] = local_68 + 1U;
  if (((param_2[1] == 0) || (local_68 + 1U <= (ulonglong)param_2[1])) &&
     (uVar13 = _fgetc_nolock((FILE *)*puVar4), (int)uVar13 != -1)) {
    puVar4[1] = puVar4[1] + 1;
  }
  else {
    uVar13 = 0;
  }
  local_58 = local_res10;
  local_50 = &local_68;
  local_60 = param_2;
  while( true ) {
    local_res10[0] = (byte)uVar13;
    uVar10 = FUN_140010408((uint)uVar13 & 0xff,8,param_1);
    if (uVar10 == 0) break;
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      if ((int)uVar13 == -1) goto LAB_1400137e2;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1400137e2:
      uVar13 = 0;
    }
  }
  uVar13 = (ulonglong)local_res10[0];
  piVar2 = param_3 + 0xc2;
  *(bool *)piVar2 = local_res10[0] == 0x2d;
  if ((local_res10[0] - 0x2b & 0xfd) == 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar14 = _fgetc_nolock((FILE *)*puVar4);
      uVar13 = uVar14 & 0xffffffff;
      if ((int)uVar14 == -1) goto LAB_140013843;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_140013843:
      uVar13 = 0;
    }
    local_res10[0] = (byte)uVar13;
  }
  if (((int)uVar13 - 0x49U & 0xdf) == 0) {
    uVar10 = FUN_140013ef8((char *)local_res10,param_2,local_68);
    return uVar10;
  }
  if (((int)uVar13 - 0x4eU & 0xdf) == 0) {
    uVar10 = FUN_1400140cc((char *)local_res10,param_2,local_68);
    return uVar10;
  }
  local_res20 = 0;
  if ((char)uVar13 == '0') {
    lVar5 = param_2[2];
    uVar14 = lVar5 + 1;
    param_2[2] = uVar14;
    if ((param_2[1] == 0) || (uVar14 <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      iVar18 = (int)uVar13;
      if (iVar18 == -1) {
        uVar13 = (ulonglong)local_res10[0];
        goto LAB_1400138ea;
      }
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      if ((iVar18 - 0x58U & 0xdf) == 0) {
        lVar6 = param_2[2];
        local_res20 = 1;
        param_2[2] = lVar6 + 1U;
        if ((param_2[1] == 0) || (lVar6 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar13 = _fgetc_nolock((FILE *)*puVar4);
          if ((int)uVar13 == -1) goto LAB_1400138d4;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_1400138d4:
          uVar13 = 0;
        }
        local_res10[0] = (byte)uVar13;
        uVar13 = uVar13 & 0xff;
        local_68 = lVar5;
        goto LAB_140013927;
      }
      uVar13 = (ulonglong)local_res10[0];
    }
    else {
LAB_1400138ea:
      iVar18 = 0;
    }
    lVar5 = param_2[2];
    param_2[2] = lVar5 - 1U;
    if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
       (cVar9 = (char)iVar18, 1 < (byte)(cVar9 + 1U))) {
      puVar4 = (undefined8 *)*param_2;
      if ((int)cVar9 != 0xffffffff) {
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + -1;
        FUN_14001db1c((int)cVar9,(FILE *)*puVar4);
        uVar13 = (ulonglong)local_res10[0];
      }
    }
  }
LAB_140013927:
  piVar19 = param_3 + 2;
  bVar7 = false;
  if ((char)uVar13 == '0') {
    bVar7 = true;
    do {
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) {
LAB_140013972:
        uVar13 = 0;
        local_res10[0] = 0;
        break;
      }
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      if ((int)uVar13 == -1) goto LAB_140013972;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      local_res10[0] = (byte)uVar13;
      uVar13 = uVar13 & 0xff;
    } while (local_res10[0] == 0x30);
  }
  local_74 = 0;
  uVar10 = (-(uint)(local_res20 != 0) & 6) + 9;
  while( true ) {
    cVar9 = (char)uVar13;
    if ((byte)(cVar9 - 0x30U) < 10) {
      uVar11 = (int)cVar9 - 0x30;
    }
    else if ((byte)(cVar9 + 0x9fU) < 0x1a) {
      uVar11 = (int)cVar9 - 0x57;
    }
    else if ((byte)(cVar9 + 0xbfU) < 0x1a) {
      uVar11 = (int)cVar9 - 0x37;
    }
    else {
      uVar11 = 0xffffffff;
    }
    if (uVar10 < uVar11) break;
    bVar7 = true;
    if (piVar19 != piVar2) {
      *(char *)piVar19 = (char)uVar11;
      piVar19 = (int *)((longlong)piVar19 + 1);
    }
    lVar5 = param_2[2];
    local_74 = local_74 + 1;
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      if ((int)uVar13 == -1) goto LAB_1400139fc;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1400139fc:
      uVar13 = 0;
    }
    local_res10[0] = (byte)uVar13;
    uVar13 = uVar13 & 0xff;
  }
  if (cVar9 == **(char **)param_1->locinfo->ctype1_refcount) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar4 = (undefined8 *)*param_2;
      uVar13 = _fgetc_nolock((FILE *)*puVar4);
      local_res10[0] = (byte)uVar13;
      if ((int)uVar13 == -1) goto LAB_140013a52;
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_140013a52:
      local_res10[0] = 0;
    }
    uVar14 = (ulonglong)local_res10[0];
    uVar13 = (ulonglong)local_res10[0];
    if ((piVar19 == local_res18 + 2) && (local_res10[0] == 0x30)) {
      bVar7 = true;
      local_res10[0] = 0x30;
      do {
        local_74 = local_74 + -1;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) {
LAB_140013aaa:
          uVar13 = 0;
          local_res10[0] = 0;
          uVar14 = 0;
          break;
        }
        puVar4 = (undefined8 *)*param_2;
        uVar13 = _fgetc_nolock((FILE *)*puVar4);
        if ((int)uVar13 == -1) goto LAB_140013aaa;
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
        local_res10[0] = (byte)uVar13;
        uVar14 = uVar13 & 0xff;
      } while (local_res10[0] == 0x30);
    }
    uVar16 = uVar13 & 0xff;
    while( true ) {
      cVar9 = (char)uVar14;
      if (((char)uVar13 < '0') || ('9' < (char)uVar16)) {
        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          uVar11 = (int)cVar9 - 0x57;
        }
        else if ((byte)(cVar9 + 0xbfU) < 0x1a) {
          uVar11 = (int)cVar9 - 0x37;
        }
        else {
          uVar11 = 0xffffffff;
        }
      }
      else {
        uVar11 = (int)cVar9 - 0x30;
      }
      if (uVar10 < uVar11) break;
      bVar7 = true;
      if (piVar19 != piVar2) {
        *(char *)piVar19 = (char)uVar11;
        piVar19 = (int *)((longlong)piVar19 + 1);
      }
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar4 = (undefined8 *)*param_2;
        uVar13 = _fgetc_nolock((FILE *)*puVar4);
        uVar16 = uVar13 & 0xffffffff;
        if ((int)uVar13 == -1) goto LAB_140013b28;
        plVar1 = puVar4 + 1;
        *plVar1 = *plVar1 + 1;
      }
      else {
LAB_140013b28:
        uVar16 = 0;
      }
      local_res10[0] = (byte)uVar16;
      uVar14 = uVar16 & 0xff;
      uVar13 = uVar16 & 0xff;
    }
  }
  if (!bVar7) {
    uVar15 = FUN_140015274((longlong *)&local_60);
    if (((char)uVar15 != '\0') && (local_res20 != 0)) {
      return 2;
    }
    return 7;
  }
  lVar5 = param_2[2];
  param_2[2] = lVar5 - 1U;
  if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar9 + 1U))) {
    puVar4 = (undefined8 *)*param_2;
    if ((int)cVar9 != 0xffffffff) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_14001db1c((int)cVar9,(FILE *)*puVar4);
    }
  }
  local_68 = param_2[2];
  param_2[2] = local_68 + 1U;
  iVar18 = 0;
  if ((param_2[1] == 0) || (local_68 + 1U <= (ulonglong)param_2[1])) {
    puVar4 = (undefined8 *)*param_2;
    uVar13 = _fgetc_nolock((FILE *)*puVar4);
    uVar10 = (uint)uVar13;
    local_res10[0] = (byte)uVar13;
    if (uVar10 != 0xffffffff) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + 1;
      if (local_res10[0] == 0x45) {
LAB_140013be8:
        bVar8 = local_res20 ^ 1;
      }
      else if (local_res10[0] == 0x50) {
LAB_140013be3:
        bVar8 = local_res20;
      }
      else {
        if (local_res10[0] == 0x65) goto LAB_140013be8;
        bVar8 = 0;
        if (local_res10[0] == 0x70) goto LAB_140013be3;
      }
      if (bVar8 == 0) goto LAB_140013e0e;
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar4 = (undefined8 *)*param_2;
        uVar13 = _fgetc_nolock((FILE *)*puVar4);
        uVar14 = uVar13 & 0xffffffff;
        if ((int)uVar13 != -1) {
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
          local_res10[0] = (byte)uVar13;
          if ((local_res10[0] == 0x2b) || (local_res10[0] == 0x2d)) {
            lVar5 = param_2[2];
            param_2[2] = lVar5 + 1U;
            if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
              puVar4 = (undefined8 *)*param_2;
              uVar13 = _fgetc_nolock((FILE *)*puVar4);
              if ((int)uVar13 == -1) goto LAB_140013c6d;
              plVar1 = puVar4 + 1;
              *plVar1 = *plVar1 + 1;
            }
            else {
LAB_140013c6d:
              uVar13 = 0;
            }
            local_res10[0] = (byte)uVar13;
          }
          iVar18 = 0;
          uVar16 = uVar13 & 0xff;
          bVar7 = false;
          cVar9 = (char)uVar13;
          if (cVar9 != '0') goto LAB_140013ccc;
          bVar7 = true;
          do {
            lVar5 = param_2[2];
            param_2[2] = lVar5 + 1U;
            if ((param_2[1] != 0) && ((ulonglong)param_2[1] < lVar5 + 1U)) goto LAB_140013cc1;
            puVar4 = (undefined8 *)*param_2;
            uVar13 = _fgetc_nolock((FILE *)*puVar4);
            if ((int)uVar13 == -1) goto LAB_140013cc1;
            plVar1 = puVar4 + 1;
            *plVar1 = *plVar1 + 1;
            local_res10[0] = (byte)uVar13;
            uVar16 = uVar13 & 0xff;
          } while (local_res10[0] == 0x30);
          goto LAB_140013cca;
        }
      }
      bVar7 = false;
      uVar14 = 0;
LAB_140013cc1:
      iVar18 = 0;
      uVar16 = 0;
      uVar13 = 0;
      local_res10[0] = 0;
LAB_140013cca:
      while( true ) {
        cVar9 = (char)uVar13;
LAB_140013ccc:
        cVar17 = (char)uVar16;
        if ((cVar9 < '0') || ('9' < cVar17)) {
          if ((byte)(cVar17 + 0x9fU) < 0x1a) {
            uVar10 = (int)cVar17 - 0x57;
          }
          else {
            if (0x19 < (byte)(cVar17 + 0xbfU)) goto LAB_140013d49;
            uVar10 = (int)cVar17 - 0x37;
          }
        }
        else {
          uVar10 = (int)cVar17 - 0x30;
        }
        if (9 < uVar10) goto LAB_140013d49;
        bVar7 = true;
        iVar18 = uVar10 + iVar18 * 10;
        if (0x1450 < iVar18) break;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar13 = _fgetc_nolock((FILE *)*puVar4);
          if ((int)uVar13 == -1) goto LAB_140013d3a;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_140013d3a:
          uVar13 = 0;
        }
        local_res10[0] = (byte)uVar13;
        uVar16 = uVar13 & 0xff;
      }
      iVar18 = 0x1451;
LAB_140013d49:
      do {
        uVar10 = (uint)uVar16;
        cVar9 = (char)uVar16;
        if ((byte)(cVar9 - 0x30U) < 10) {
          uVar11 = (int)cVar9 - 0x30;
        }
        else if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          uVar11 = (int)cVar9 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar9 + 0xbfU)) goto LAB_140013db0;
          uVar11 = (int)cVar9 - 0x37;
        }
        if (9 < uVar11) goto LAB_140013db0;
        lVar5 = param_2[2];
        param_2[2] = lVar5 + 1U;
        if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
          puVar4 = (undefined8 *)*param_2;
          uVar16 = _fgetc_nolock((FILE *)*puVar4);
          if ((int)uVar16 == -1) goto LAB_140013da6;
          plVar1 = puVar4 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_140013da6:
          uVar16 = 0;
        }
        local_res10[0] = (byte)uVar16;
        uVar16 = uVar16 & 0xff;
      } while( true );
    }
  }
  uVar10 = 0;
  local_res10[0] = 0;
  goto LAB_140013e0e;
LAB_140013db0:
  if ((char)uVar14 == '-') {
    iVar18 = -iVar18;
  }
  if (bVar7) goto LAB_140013e0e;
  uVar15 = FUN_140015274((longlong *)&local_60);
  if ((char)uVar15 == '\0') {
    return 7;
  }
  lVar5 = param_2[2];
  param_2[2] = lVar5 + 1U;
  if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
    puVar4 = (undefined8 *)*param_2;
    uVar13 = _fgetc_nolock((FILE *)*puVar4);
    uVar10 = (uint)uVar13;
    if (uVar10 == 0xffffffff) goto LAB_140013dfb;
    plVar1 = puVar4 + 1;
    *plVar1 = *plVar1 + 1;
  }
  else {
LAB_140013dfb:
    uVar10 = 0;
  }
  local_res10[0] = (byte)uVar10;
  uVar10 = uVar10 & 0xff;
LAB_140013e0e:
  lVar5 = param_2[2];
  param_2[2] = lVar5 - 1U;
  if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
     (cVar9 = (char)uVar10, 1 < (byte)(cVar9 + 1U))) {
    puVar4 = (undefined8 *)*param_2;
    if ((int)cVar9 != 0xffffffff) {
      plVar1 = puVar4 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_14001db1c((int)cVar9,(FILE *)*puVar4);
    }
  }
  piVar2 = local_res18 + 2;
  if (piVar19 != piVar2) {
    do {
      piVar3 = (int *)((longlong)piVar19 + -1);
      if (*(char *)piVar3 != '\0') break;
      piVar19 = piVar3;
    } while (piVar3 != piVar2);
    if (piVar19 != piVar2) {
      if (0x1450 < iVar18) {
        return 9;
      }
      if (-0x1451 < iVar18) {
        iVar18 = iVar18 + ((-(uint)(local_res20 != 0) & 3) + 1) * local_74;
        if (0x1450 < iVar18) {
          return 9;
        }
        if (-0x1451 < iVar18) {
          *local_res18 = iVar18;
          local_res18[1] = (int)piVar19 - (int)piVar2;
          return (uint)local_res20;
        }
      }
      return 8;
    }
  }
  return 2;
}




/* ---- 0x140013ef8 : FUN_140013ef8 [was: FUN_140013ef8] ---- */

int FUN_140013ef8(char *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong local_res18 [2];
  longlong *local_38;
  char *local_30;
  longlong *local_28;
  
  local_28 = local_res18;
  lVar8 = 0;
  local_res18[0] = param_3;
  local_38 = param_2;
  local_30 = param_1;
  do {
    if ((*param_1 != (&DAT_14002bd38)[lVar8]) && (*param_1 != (&DAT_14002bd3c)[lVar8])) {
      FUN_140015274((longlong *)&local_38);
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      uVar4 = _fgetc_nolock((FILE *)*puVar3);
      cVar7 = (char)uVar4;
      if ((int)uVar4 == -1) goto LAB_140013f7a;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_140013f7a:
      cVar7 = '\0';
    }
    lVar8 = lVar8 + 1;
    *param_1 = cVar7;
  } while (lVar8 != 3);
  lVar8 = param_2[2];
  param_2[2] = lVar8 - 1U;
  if (((param_2[1] == 0) || (lVar8 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar7 + 1U))) {
    puVar3 = (undefined8 *)*param_2;
    if ((int)cVar7 != 0xffffffff) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_14001db1c((int)cVar7,(FILE *)*puVar3);
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    puVar3 = (undefined8 *)*param_2;
    uVar4 = _fgetc_nolock((FILE *)*puVar3);
    if ((int)uVar4 != -1) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
      goto LAB_140014007;
    }
  }
  uVar4 = 0;
LAB_140014007:
  *param_1 = (char)uVar4;
  lVar8 = 0;
  do {
    if (((char)uVar4 != "INITY"[lVar8]) && ((char)uVar4 != "inity"[lVar8])) {
      uVar6 = FUN_140015274((longlong *)&local_38);
      return ((uint)uVar6 & 0xff ^ 1) * 4 + 3;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      uVar5 = _fgetc_nolock((FILE *)*puVar3);
      uVar4 = uVar5 & 0xffffffff;
      if ((int)uVar5 == -1) goto LAB_140014054;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_140014054:
      uVar4 = 0;
    }
    lVar8 = lVar8 + 1;
    cVar7 = (char)uVar4;
    *param_1 = cVar7;
    uVar4 = uVar4 & 0xff;
    if (lVar8 == 5) {
      lVar8 = param_2[2];
      param_2[2] = lVar8 - 1U;
      if (((param_2[1] == 0) || (lVar8 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar7 + 1U)))
      {
        puVar3 = (undefined8 *)*param_2;
        if ((int)cVar7 != 0xffffffff) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_14001db1c((int)cVar7,(FILE *)*puVar3);
        }
      }
      return 3;
    }
  } while( true );
}




/* ---- 0x1400140cc : FUN_1400140cc [was: FUN_1400140cc] ---- */

int FUN_1400140cc(char *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_res18 [2];
  longlong *local_38;
  char *local_30;
  longlong *local_28;
  
  local_28 = local_res18;
  lVar10 = 0;
  local_res18[0] = param_3;
  local_38 = param_2;
  local_30 = param_1;
  do {
    if ((*param_1 != (&DAT_14002bd50)[lVar10]) && (*param_1 != (&DAT_14002bd54)[lVar10])) {
      FUN_140015274((longlong *)&local_38);
      return 7;
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 + 1U;
    if ((param_2[1] == 0) || (lVar2 + 1U <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      uVar5 = _fgetc_nolock((FILE *)*puVar3);
      iVar4 = (int)uVar5;
      if (iVar4 == -1) goto LAB_14001414d;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_14001414d:
      iVar4 = 0;
    }
    lVar10 = lVar10 + 1;
    cVar8 = (char)iVar4;
    *param_1 = cVar8;
  } while (lVar10 != 3);
  lVar10 = param_2[2];
  param_2[2] = lVar10 - 1U;
  if (((param_2[1] == 0) || (lVar10 - 1U <= (ulonglong)param_2[1])) && (1 < (byte)(cVar8 + 1U))) {
    puVar3 = (undefined8 *)*param_2;
    if ((int)cVar8 != 0xffffffff) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + -1;
      FUN_14001db1c((int)cVar8,(FILE *)*puVar3);
    }
  }
  local_res18[0] = param_2[2];
  param_2[2] = local_res18[0] + 1U;
  if ((param_2[1] == 0) || (local_res18[0] + 1U <= (ulonglong)param_2[1])) {
    puVar3 = (undefined8 *)*param_2;
    uVar5 = _fgetc_nolock((FILE *)*puVar3);
    if ((int)uVar5 != -1) {
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
      *param_1 = (char)uVar5;
      if ((char)uVar5 != '(') goto LAB_140014319;
      lVar10 = param_2[2];
      param_2[2] = lVar10 + 1U;
      if ((param_2[1] == 0) || (lVar10 + 1U <= (ulonglong)param_2[1])) {
        puVar3 = (undefined8 *)*param_2;
        uVar5 = _fgetc_nolock((FILE *)*puVar3);
        if ((int)uVar5 == -1) goto LAB_140014215;
        plVar1 = puVar3 + 1;
        *plVar1 = *plVar1 + 1;
      }
      else {
LAB_140014215:
        uVar5 = 0;
      }
      *param_1 = (char)uVar5;
      uVar6 = FUN_1400143dc(param_1,param_2);
      if ((char)uVar6 != '\0') {
        lVar10 = param_2[2];
        cVar8 = *param_1;
        param_2[2] = lVar10 - 1U;
        if ((((param_2[1] == 0) || (lVar10 - 1U <= (ulonglong)param_2[1])) &&
            (1 < (byte)(cVar8 + 1U))) && (puVar3 = (undefined8 *)*param_2, (int)cVar8 != 0xffffffff)
           ) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_14001db1c((int)cVar8,(FILE *)*puVar3);
        }
        return 5;
      }
      uVar6 = FUN_140014344(param_1,param_2);
      cVar8 = *param_1;
      uVar9 = (uint)cVar8;
      uVar5 = (ulonglong)uVar9;
      if ((char)uVar6 != '\0') {
        lVar10 = param_2[2];
        param_2[2] = lVar10 - 1U;
        if (((param_2[1] == 0) || (lVar10 - 1U <= (ulonglong)param_2[1])) &&
           ((1 < (byte)(cVar8 + 1U) && (puVar3 = (undefined8 *)*param_2, uVar9 != 0xffffffff)))) {
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_14001db1c(uVar9,(FILE *)*puVar3);
        }
        return 6;
      }
      while( true ) {
        cVar8 = (char)uVar5;
        if (cVar8 == ')') {
          return 4;
        }
        if ((cVar8 == '\0') ||
           ((((9 < (byte)(cVar8 - 0x30U) && (0x19 < (byte)(cVar8 + 0x9fU))) &&
             (0x19 < (byte)(cVar8 + 0xbfU))) && (cVar8 != '_')))) break;
        lVar10 = param_2[2];
        param_2[2] = lVar10 + 1U;
        if ((param_2[1] == 0) || (lVar10 + 1U <= (ulonglong)param_2[1])) {
          puVar3 = (undefined8 *)*param_2;
          uVar7 = _fgetc_nolock((FILE *)*puVar3);
          uVar5 = uVar7 & 0xffffffff;
          if ((int)uVar7 == -1) goto LAB_140014306;
          plVar1 = puVar3 + 1;
          *plVar1 = *plVar1 + 1;
        }
        else {
LAB_140014306:
          uVar5 = 0;
        }
        *param_1 = (char)uVar5;
      }
      goto LAB_140014319;
    }
  }
  *param_1 = '\0';
LAB_140014319:
  uVar6 = FUN_140015274((longlong *)&local_38);
  return (-(uint)((char)uVar6 != '\0') & 0xfffffffd) + 7;
}




/* ---- 0x140014344 : FUN_140014344 [was: FUN_140014344] ---- */

undefined8 FUN_140014344(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  lVar5 = lVar4;
  do {
    cVar2 = *param_1;
    in_RAX = CONCAT71((int7)(in_RAX >> 8),cVar2);
    if ((cVar2 != (&DAT_14002bd68)[lVar5]) && (cVar2 != (&DAT_14002bd6c)[lVar5]))
    goto LAB_1400143bf;
    in_RAX = param_2[2] + 1;
    param_2[2] = in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      in_RAX = _fgetc_nolock((FILE *)*puVar3);
      if ((int)in_RAX == -1) goto LAB_1400143af;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_1400143af:
      in_RAX = in_RAX & 0xffffffffffffff00;
    }
    lVar5 = lVar5 + 1;
    *param_1 = (char)in_RAX;
  } while (lVar5 != 4);
  lVar4 = 1;
LAB_1400143bf:
  return CONCAT71((int7)(in_RAX >> 8),(char)lVar4);
}




/* ---- 0x1400143dc : FUN_1400143dc [was: FUN_1400143dc] ---- */

undefined8 FUN_1400143dc(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  lVar5 = lVar4;
  do {
    cVar2 = *param_1;
    in_RAX = CONCAT71((int7)(in_RAX >> 8),cVar2);
    if ((cVar2 != (&DAT_14002bd58)[lVar5]) && (cVar2 != (&DAT_14002bd60)[lVar5]))
    goto LAB_140014457;
    in_RAX = param_2[2] + 1;
    param_2[2] = in_RAX;
    if ((param_2[1] == 0) || (in_RAX <= (ulonglong)param_2[1])) {
      puVar3 = (undefined8 *)*param_2;
      in_RAX = _fgetc_nolock((FILE *)*puVar3);
      if ((int)in_RAX == -1) goto LAB_140014447;
      plVar1 = puVar3 + 1;
      *plVar1 = *plVar1 + 1;
    }
    else {
LAB_140014447:
      in_RAX = in_RAX & 0xffffffffffffff00;
    }
    lVar5 = lVar5 + 1;
    *param_1 = (char)in_RAX;
  } while (lVar5 != 5);
  lVar4 = 1;
LAB_140014457:
  return CONCAT71((int7)(in_RAX >> 8),(char)lVar4);
}




/* ---- 0x1400147b4 : FUN_1400147b4 [was: FUN_1400147b4] ---- */

ulonglong FUN_1400147b4(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  int iVar9;
  __acrt_ptd *p_Var10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  
  puVar2 = (undefined8 *)*param_2;
  if ((puVar2 == (undefined8 *)0x0) || (param_2[3] == 0)) {
    p_Var10 = FUN_14001abbc();
    *(undefined4 *)p_Var10 = 0x16;
    FUN_14001925c();
LAB_140014833:
    puVar3 = (undefined1 *)param_2[3];
    if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *puVar3 = 0;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_140014833;
  }
  lVar4 = param_2[2];
  uVar11 = lVar4 + 1;
  param_2[2] = uVar11;
  if ((param_2[1] == 0) || (uVar11 <= (ulonglong)param_2[1])) {
    uVar11 = _fgetc_nolock((FILE *)*puVar2);
    uVar12 = uVar11 & 0xffffffff;
    if ((int)uVar11 == -1) goto LAB_140014885;
    puVar2[1] = puVar2[1] + 1;
  }
  else {
LAB_140014885:
    uVar12 = 0;
  }
  if ((char)param_1[5] == '\0') {
    FUN_140010390(param_1);
  }
  while( true ) {
    uVar8 = FUN_140010408((uint)uVar12 & 0xff,8,(_locale_t)(param_1 + 3));
    if (uVar8 == 0) break;
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar12 = _fgetc_nolock((FILE *)*puVar2);
      if ((int)uVar12 == -1) goto LAB_1400148c8;
      plVar1 = puVar2 + 1;
      *plVar1 = *plVar1 + 1;
      uVar12 = uVar12 & 0xff;
    }
    else {
LAB_1400148c8:
      uVar12 = 0;
    }
  }
  bVar16 = param_4 | 2;
  if ((char)uVar12 != '-') {
    bVar16 = param_4;
  }
  if (((uint)uVar12 - 0x2b & 0xfd) == 0) {
    lVar5 = param_2[2];
    param_2[2] = lVar5 + 1U;
    if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
      puVar2 = (undefined8 *)*param_2;
      uVar12 = _fgetc_nolock((FILE *)*puVar2);
      if ((int)uVar12 != -1) {
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + 1;
        uVar12 = uVar12 & 0xff;
        goto LAB_140014929;
      }
    }
    uVar12 = 0;
  }
LAB_140014929:
  uVar8 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_140014a39;
  cVar7 = (char)uVar12;
  if ((byte)(cVar7 - 0x30U) < 10) {
    iVar9 = cVar7 + -0x30;
LAB_140014967:
    if (iVar9 == 0) {
      lVar5 = param_2[2];
      param_2[2] = lVar5 + 1U;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
        puVar2 = (undefined8 *)*param_2;
        uVar11 = _fgetc_nolock((FILE *)*puVar2);
        iVar9 = (int)uVar11;
        if (iVar9 == -1) goto LAB_1400149e5;
        plVar1 = puVar2 + 1;
        *plVar1 = *plVar1 + 1;
        if ((iVar9 - 0x58U & 0xdf) == 0) {
          uVar8 = 0x10;
          if (param_3 != 0) {
            uVar8 = param_3;
          }
          lVar5 = param_2[2];
          param_2[2] = lVar5 + 1U;
          if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) {
            puVar2 = (undefined8 *)*param_2;
            uVar12 = _fgetc_nolock((FILE *)*puVar2);
            if ((int)uVar12 != -1) {
              plVar1 = puVar2 + 1;
              *plVar1 = *plVar1 + 1;
              uVar12 = uVar12 & 0xff;
              goto LAB_140014a39;
            }
          }
          uVar12 = 0;
          goto LAB_140014a39;
        }
      }
      else {
LAB_1400149e5:
        iVar9 = 0;
      }
      uVar8 = 8;
      if (param_3 != 0) {
        uVar8 = param_3;
      }
      lVar5 = param_2[2];
      param_2[2] = lVar5 - 1U;
      if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
         (cVar7 = (char)iVar9, 1 < (byte)(cVar7 + 1U))) {
        puVar2 = (undefined8 *)*param_2;
        if ((int)cVar7 != 0xffffffff) {
          plVar1 = puVar2 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_14001db1c((int)cVar7,(FILE *)*puVar2);
        }
      }
      goto LAB_140014a39;
    }
  }
  else {
    if ((byte)(cVar7 + 0x9fU) < 0x1a) {
      iVar9 = cVar7 + -0x57;
      goto LAB_140014967;
    }
    if ((byte)(cVar7 + 0xbfU) < 0x1a) {
      iVar9 = cVar7 + -0x37;
      goto LAB_140014967;
    }
  }
  uVar8 = 10;
  if (param_3 != 0) {
    uVar8 = param_3;
  }
LAB_140014a39:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)(int)uVar8;
  uVar11 = 0;
  do {
    while( true ) {
      cVar7 = (char)uVar12;
      uVar17 = (uint)cVar7;
      if ((byte)(cVar7 - 0x30U) < 10) {
        uVar14 = uVar17 - 0x30;
      }
      else if ((byte)(cVar7 + 0x9fU) < 0x1a) {
        uVar14 = uVar17 - 0x57;
      }
      else if ((byte)(cVar7 + 0xbfU) < 0x1a) {
        uVar14 = uVar17 - 0x37;
      }
      else {
        uVar14 = 0xffffffff;
      }
      if (uVar8 <= uVar14) {
        lVar5 = param_2[2];
        param_2[2] = lVar5 - 1U;
        if (((param_2[1] == 0) || (lVar5 - 1U <= (ulonglong)param_2[1])) &&
           ((1 < (byte)(cVar7 + 1U) && (puVar2 = (undefined8 *)*param_2, uVar17 != 0xffffffff)))) {
          plVar1 = puVar2 + 1;
          *plVar1 = *plVar1 + -1;
          FUN_14001db1c(uVar17,(FILE *)*puVar2);
        }
        if ((bVar16 & 8) == 0) {
          if (lVar4 != param_2[2]) {
            *(undefined1 *)param_2[3] = 0;
          }
          if ((undefined1 *)param_2[3] == (undefined1 *)0x0) {
            return 0;
          }
          if (param_2[2] != 0) {
            return 0;
          }
          *(undefined1 *)param_2[3] = 0;
          return 0;
        }
        uVar13 = FUN_14000fd30(bVar16,uVar11);
        if ((char)uVar13 == '\0') {
          if ((bVar16 & 2) != 0) {
            uVar11 = -uVar11;
          }
        }
        else {
          *(undefined1 *)(param_1 + 6) = 1;
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
          if ((bVar16 & 1) != 0) {
            puVar3 = (undefined1 *)param_2[3];
            if ((bVar16 & 2) == 0) {
              if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
                *puVar3 = 0;
              }
              return 0x7fffffffffffffff;
            }
            if ((puVar3 != (undefined1 *)0x0) && (param_2[2] == 0)) {
              *puVar3 = 0;
            }
            return 0x8000000000000000;
          }
          uVar11 = 0xffffffffffffffff;
        }
        if ((undefined1 *)param_2[3] != (undefined1 *)0x0) {
          if (param_2[2] == 0) {
            *(undefined1 *)param_2[3] = 0;
            return uVar11;
          }
          return uVar11;
        }
        return uVar11;
      }
      uVar12 = (longlong)(int)uVar8 * uVar11;
      uVar15 = uVar14 + uVar12;
      lVar5 = param_2[2];
      bVar16 = bVar16 | (uVar15 < uVar12 ||
                        SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar6,0) <
                        uVar11) << 2 | 8U;
      param_2[2] = lVar5 + 1U;
      uVar11 = uVar15;
      if ((param_2[1] == 0) || (lVar5 + 1U <= (ulonglong)param_2[1])) break;
LAB_140014ad8:
      uVar12 = 0;
    }
    puVar2 = (undefined8 *)*param_2;
    uVar12 = _fgetc_nolock((FILE *)*puVar2);
    if ((int)uVar12 == -1) goto LAB_140014ad8;
    plVar1 = puVar2 + 1;
    *plVar1 = *plVar1 + 1;
    uVar12 = uVar12 & 0xff;
  } while( true );
}




/* ---- 0x140014e2c : FUN_140014e2c [was: FUN_140014e2c] ---- */

ulonglong FUN_140014e2c(byte *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  __acrt_ptd *in_RAX;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  bool bVar10;
  
  pbVar7 = (byte *)0x0;
  if (param_1[0x32] == 0) {
    in_RAX = *(__acrt_ptd **)(param_1 + 0x78);
    p_Var4 = in_RAX + 8;
    *(__acrt_ptd **)(param_1 + 0x78) = p_Var4;
    pbVar7 = *(byte **)in_RAX;
    if (pbVar7 == (byte *)0x0) {
      p_Var4 = FUN_14001abbc();
      *(undefined4 *)p_Var4 = 0x16;
      in_RAX = (__acrt_ptd *)FUN_14001925c();
      goto LAB_140014e7a;
    }
    if ((*param_1 & 1) != 0) {
      in_RAX = in_RAX + 0x10;
      *(__acrt_ptd **)(param_1 + 0x78) = in_RAX;
      uVar5 = (ulonglong)*(uint *)p_Var4;
      if (uVar5 == 0) {
        if ((*param_1 & 4) != 0) {
          uVar5 = _fgetc_nolock(*(FILE **)(param_1 + 8));
          if ((int)uVar5 != -1) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          }
LAB_140014ec4:
          *pbVar7 = 0;
        }
LAB_140014ec7:
        in_RAX = FUN_14001abbc();
        *(undefined4 *)in_RAX = 0xc;
        goto LAB_140014e7a;
      }
      goto LAB_140014ed8;
    }
  }
  uVar5 = 0xffffffffffffffff;
LAB_140014ed8:
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar9 = uVar5;
  if ((param_2 != 0) && (uVar5 != 0xffffffffffffffff)) {
    uVar9 = uVar5 - 1;
  }
  lVar6 = 0;
  pbVar8 = pbVar7;
  do {
    if ((lVar1 != 0) && (lVar6 == lVar1)) goto LAB_140014f77;
    in_RAX = (__acrt_ptd *)_fgetc_nolock(*(FILE **)(param_1 + 8));
    uVar3 = (uint)in_RAX;
    bVar2 = (byte)in_RAX;
    if (uVar3 == 0xffffffff) goto LAB_140014f77;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        in_RAX = (__acrt_ptd *)(ulonglong)(uVar3 - 9);
        if (uVar3 - 9 < 5) break;
        bVar10 = uVar3 == 0x20;
      }
      else {
        if (param_2 != 8) break;
        in_RAX = (__acrt_ptd *)(((ulonglong)in_RAX & 0xff) >> 3);
        bVar10 = ((byte)(in_RAX + 0x4c)[(longlong)param_1] & (byte)(1 << (bVar2 & 7))) == 0;
      }
      if (bVar10) break;
    }
    if (param_1[0x32] == 0) {
      if (uVar9 == 0) {
        if (uVar5 == 0xffffffffffffffff) goto LAB_140014ec7;
        goto LAB_140014ec4;
      }
      *pbVar8 = bVar2;
      pbVar8 = pbVar8 + 1;
      uVar9 = uVar9 - 1;
    }
    lVar6 = lVar6 + 1;
  } while( true );
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  uVar3 = FUN_14001db1c(uVar3,*(FILE **)(param_1 + 8));
  in_RAX = (__acrt_ptd *)CONCAT44(extraout_var,uVar3);
LAB_140014f77:
  if ((lVar6 != 0) && (((param_2 != 0 || (lVar6 == lVar1)) || ((*param_1 & 4) != 0)))) {
    if ((param_1[0x32] == 0) && (param_2 != 0)) {
      *pbVar8 = 0;
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_140014e7a:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




/* ---- 0x140014fbc : FUN_140014fbc [was: FUN_140014fbc] ---- */

ulonglong FUN_140014fbc(input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>
                        *param_1,int param_2)

{
  wchar_t *pwVar1;
  byte bVar2;
  uint uVar3;
  __acrt_ptd *in_RAX;
  __acrt_ptd *p_Var4;
  ulonglong uVar5;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  __uint64 _Var6;
  wchar_t *pwVar7;
  __uint64 _Var8;
  wchar_t *pwVar9;
  bool bVar10;
  __uint64 local_res8;
  wchar_t *local_res20;
  
  pwVar9 = (wchar_t *)0x0;
  pwVar7 = pwVar9;
  if (param_1[0x32] ==
      (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>)0x0) {
    in_RAX = *(__acrt_ptd **)(param_1 + 0x78);
    p_Var4 = in_RAX + 8;
    *(__acrt_ptd **)(param_1 + 0x78) = p_Var4;
    pwVar7 = *(wchar_t **)in_RAX;
    if (pwVar7 == (wchar_t *)0x0) {
      p_Var4 = FUN_14001abbc();
      *(undefined4 *)p_Var4 = 0x16;
      in_RAX = (__acrt_ptd *)FUN_14001925c();
      goto LAB_140015006;
    }
    if (((byte)*param_1 & 1) == 0) goto LAB_140015059;
    in_RAX = in_RAX + 0x10;
    *(__acrt_ptd **)(param_1 + 0x78) = in_RAX;
    _Var8 = (__uint64)*(uint *)p_Var4;
    if (_Var8 == 0) {
      if (((byte)*param_1 & 4) != 0) {
        uVar5 = _fgetc_nolock(*(FILE **)(param_1 + 8));
        if ((int)uVar5 != -1) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        }
LAB_140015048:
        *pwVar7 = L'\0';
      }
LAB_14001504c:
      in_RAX = FUN_14001abbc();
      *(undefined4 *)in_RAX = 0xc;
      goto LAB_140015006;
    }
  }
  else {
LAB_140015059:
    _Var8 = 0xffffffffffffffff;
  }
  pwVar1 = *(wchar_t **)(param_1 + 0x38);
  _Var6 = _Var8;
  local_res8 = _Var8;
  local_res20 = pwVar7;
  if ((param_2 != 0) && (_Var8 != 0xffffffffffffffff)) {
    _Var6 = _Var8 - 1;
    local_res8 = _Var6;
  }
  while( true ) {
    if ((pwVar1 != (wchar_t *)0x0) && (pwVar9 == pwVar1)) goto LAB_14001513f;
    in_RAX = (__acrt_ptd *)_fgetc_nolock(*(FILE **)(param_1 + 8));
    uVar3 = (uint)in_RAX;
    bVar2 = (byte)in_RAX;
    if (uVar3 == 0xffffffff) goto LAB_14001513f;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    if (param_2 != 0) break;
LAB_1400150ea:
    if (param_1[0x32] ==
        (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>)0x0) {
      if (_Var6 == 0) {
        if (_Var8 == 0xffffffffffffffff) goto LAB_14001504c;
        goto LAB_140015048;
      }
      bVar10 = __crt_stdio_input::
               input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>::
               write_character(param_1,pwVar7,_Var8,&local_res20,&local_res8,bVar2);
      in_RAX = (__acrt_ptd *)CONCAT71(extraout_var,bVar10);
      _Var6 = local_res8;
      if (!bVar10) goto LAB_14001513f;
    }
    pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
  }
  if (param_2 == 1) {
    in_RAX = (__acrt_ptd *)(ulonglong)(uVar3 - 9);
    if (4 < uVar3 - 9) {
      bVar10 = uVar3 == 0x20;
      goto LAB_1400150e8;
    }
  }
  else if (param_2 == 8) {
    in_RAX = (__acrt_ptd *)(((ulonglong)in_RAX & 0xff) >> 3);
    bVar10 = ((byte)(in_RAX + 0x4c)[(longlong)param_1] & (byte)(1 << (bVar2 & 7))) == 0;
LAB_1400150e8:
    if (!bVar10) goto LAB_1400150ea;
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  uVar3 = FUN_14001db1c(uVar3,*(FILE **)(param_1 + 8));
  in_RAX = (__acrt_ptd *)CONCAT44(extraout_var_00,uVar3);
LAB_14001513f:
  if ((pwVar9 != (wchar_t *)0x0) &&
     (((param_2 != 0 || (pwVar9 == pwVar1)) || (((byte)*param_1 & 4) != 0)))) {
    if ((param_1[0x32] ==
         (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>)0x0) &&
       (param_2 != 0)) {
      *local_res20 = L'\0';
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_140015006:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




/* ---- 0x140015188 : skip_whitespace<class___crt_stdio_input::stream_input_adapter,char> [was: skip_whitespace<class___crt_stdio_input::stream_input_adapter,char>] ---- */

/* Library Function - Single Match
    int __cdecl __crt_stdio_input::skip_whitespace<class
   __crt_stdio_input::stream_input_adapter,char>(class __crt_stdio_input::stream_input_adapter<char>
   & __ptr64,struct __crt_locale_pointers * __ptr64 const)
   
   Library: Visual Studio 2019 Release */

int __cdecl
__crt_stdio_input::skip_whitespace<class___crt_stdio_input::stream_input_adapter,char>
          (stream_input_adapter<char> *param_1,__crt_locale_pointers *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  do {
    uVar3 = _fgetc_nolock(*(FILE **)param_1);
    uVar1 = (uint)uVar3;
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    uVar2 = FUN_140010408(uVar1 & 0xff,8,(_locale_t)param_2);
  } while (uVar2 != 0);
  return uVar1;
}




/* ---- 0x140017e10 : FUN_140017e10 [was: FUN_140017e10] ---- */

ulonglong FUN_140017e10(input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>
                        *param_1)

{
  int iVar1;
  bool bVar2;
  __acrt_ptd *p_Var3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(_iobuf **)(param_1 + 8) != (_iobuf *)0x0) {
    bVar2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(param_1 + 8));
    if (!bVar2) {
      return 0xffffffffffffffff;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      do {
        uVar5 = FUN_1400153c4((longlong)(param_1 + 0x18));
        if ((char)uVar5 == '\0') break;
        uVar4 = FUN_14001818c(param_1);
      } while ((char)uVar4 != '\0');
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x80);
      uVar4 = uVar7;
      if ((*(longlong *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0x2c) != 1)) {
        uVar6 = _fgetc_nolock(*(FILE **)(param_1 + 8));
        uVar4 = 0xffffffffffffffff;
        if ((uint)uVar6 != 0xffffffff) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          FUN_14001db1c((uint)uVar6,*(FILE **)(param_1 + 8));
          uVar4 = uVar7;
        }
      }
      if ((((byte)*param_1 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x28), iVar1 != 0)) {
        p_Var3 = FUN_14001abbc();
        *(int *)p_Var3 = iVar1;
        FUN_14001925c();
      }
      return uVar4 & 0xffffffff;
    }
  }
  p_Var3 = FUN_14001abbc();
  *(undefined4 *)p_Var3 = 0x16;
  FUN_14001925c();
  return 0xffffffffffffffff;
}




/* ---- 0x140018104 : FUN_140018104 [was: FUN_140018104] ---- */

undefined8 FUN_140018104(longlong param_1,byte param_2)

{
  longlong *plVar1;
  uint uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  puVar3 = __pctype_func();
  if ((short)puVar3[param_2] < 0) {
    uVar4 = _fgetc_nolock(*(FILE **)(param_1 + 8));
    plVar1 = (longlong *)(param_1 + 0x10);
    uVar2 = (uint)uVar4;
    if (uVar2 != 0xffffffff) {
      *plVar1 = *plVar1 + 1;
    }
    puVar3 = (ushort *)0x0;
    if (uVar2 != *(byte *)(param_1 + 0x31)) {
      if (uVar2 != 0xffffffff) {
        *plVar1 = *plVar1 + -1;
        uVar2 = FUN_14001db1c(uVar2,*(FILE **)(param_1 + 8));
        puVar3 = (ushort *)CONCAT44(extraout_var,uVar2);
      }
      if ((int)(char)param_2 != 0xffffffff) {
        *plVar1 = *plVar1 + -1;
        uVar2 = FUN_14001db1c((int)(char)param_2,*(FILE **)(param_1 + 8));
        puVar3 = (ushort *)CONCAT44(extraout_var_00,uVar2);
      }
      return (ulonglong)puVar3 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}




/* ---- 0x14001818c : FUN_14001818c [was: FUN_14001818c] ---- */

ulonglong FUN_14001818c(input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>
                        *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 extraout_var_02;
  undefined4 extraout_var_01;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 2) {
    uVar3 = __crt_stdio_input::skip_whitespace<class___crt_stdio_input::stream_input_adapter,char>
                      ((stream_input_adapter<char> *)(param_1 + 8),
                       *(__crt_locale_pointers **)(param_1 + 0x70));
    uVar5 = CONCAT44(extraout_var_01,uVar3);
    if (uVar3 != 0xffffffff) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      uVar3 = FUN_14001db1c(uVar3,*(FILE **)(param_1 + 8));
      uVar5 = CONCAT44(extraout_var_02,uVar3);
    }
    uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  else {
    if (iVar1 == 3) {
      in_RAX = _fgetc_nolock(*(FILE **)(param_1 + 8));
      uVar3 = (uint)in_RAX;
      if (uVar3 != 0xffffffff) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        if (uVar3 == (byte)param_1[0x30]) {
          uVar4 = FUN_140018104((longlong)param_1,(byte)in_RAX);
          return uVar4;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        uVar3 = FUN_14001db1c(uVar3,*(FILE **)(param_1 + 8));
        in_RAX = CONCAT44(extraout_var_00,uVar3);
      }
    }
    else if (iVar1 == 4) {
      bVar2 = __crt_stdio_input::
              input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>::
              process_conversion_specifier(param_1);
      if (((bVar2) && (*(int *)(param_1 + 0x48) != 9)) &&
         (param_1[0x32] ==
          (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>)0x0)) {
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 1;
      }
      return CONCAT71(extraout_var,bVar2);
    }
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  return uVar4;
}




/* ---- 0x140019320 : FUN_140019320 [was: FUN_140019320] ---- */

ulonglong FUN_140019320(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_14003c2c0 & 0x3f;
  uVar2 = DAT_14003d5d8 ^ DAT_14003c2c0;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




/* ---- 0x140019dc4 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  FUN_140019dfc(param_3);
  __acrt_unlock(*param_4);
  return;
}




/* ---- 0x140019dfc : FUN_140019dfc [was: FUN_140019dfc] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140019dfc(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_14003d728 != '\0') {
    return;
  }
  LOCK();
  DAT_14003d718 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_14003d720 != DAT_14003c2c0) {
      bVar1 = (byte)DAT_14003c2c0 & 0x3f;
      (*(code *)((DAT_14003c2c0 ^ DAT_14003d720) >> bVar1 |
                (DAT_14003c2c0 ^ DAT_14003d720) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_14003d770;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_140019e6b;
    puVar2 = &DAT_14003d788;
  }
  FUN_14001a5d4(puVar2);
LAB_140019e6b:
  if (*(int *)*param_1 == 0) {
    FUN_140019d50((undefined8 *)&DAT_140029430,(undefined8 *)&DAT_140029450);
  }
  FUN_140019d50((undefined8 *)&DAT_140029458,(undefined8 *)&DAT_140029460);
  if (*(int *)param_1[1] == 0) {
    DAT_14003d728 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}




/* ---- 0x14001a128 : operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_> [was: operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>] ---- */

/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  
  __acrt_lock(*(int *)param_1);
  for (plVar2 = &DAT_14003d7a8; plVar2 != &DAT_14003d7b0; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_14003c480) {
      ppuVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_14003c480);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}




/* ---- 0x14001a198 : FUN_14001a198 [was: FUN_14001a198] ---- */

undefined4 FUN_14001a198(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_14003d760;
  LOCK();
  DAT_14003d760 = 1;
  UNLOCK();
  return uVar1;
}




/* ---- 0x14001a250 : FUN_14001a250 [was: FUN_14001a250] ---- */

uint FUN_14001a250(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = DAT_14003d764;
    DAT_14003d764 = param_1;
  }
  else {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}




/* ---- 0x14001a284 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_14001a2fc(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}




/* ---- 0x14001a2c0 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
   __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
   <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
   <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
   <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_14001a4ac(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}




/* ---- 0x14001a718 : FUN_14001a718 [was: FUN_14001a718] ---- */

undefined8 FUN_14001a718(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_14003df20;
  uVar2 = (ulonglong)uVar1;
  *DAT_14003df20 = *DAT_14003df20 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_14003df20 != (uint *)&DAT_14003c640)) {
    uVar2 = FUN_14001b320(DAT_14003df20);
    DAT_14003df20 = (uint *)&DAT_14003c640;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}




/* ---- 0x14001acb8 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}




/* ---- 0x14001acf8 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}




/* ---- 0x14001ad38 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}




/* ---- 0x14001ad80 : operator()<> [was: operator()<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_14003c640)) {
      FUN_14001b320(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}




/* ---- 0x14001b914 : FUN_14001b914 [was: FUN_14001b914] ---- */

int FUN_14001b914(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_14003d5b8; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_14003d5c0 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_140020f04(*(FILE **)(DAT_14003d5c0 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_14003d5c0 + lVar4 * 8) + 0x30));
      FUN_14001b320(*(LPVOID *)(DAT_14003d5c0 + lVar4 * 8));
      *(undefined8 *)(DAT_14003d5c0 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}




/* ---- 0x14001ba64 : FUN_14001ba64 [was: FUN_14001ba64] ---- */

void FUN_14001ba64(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  int *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = DAT_14003d5c0 + DAT_14003d5b8;
  for (plVar3 = DAT_14003d5c0; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_14001b9c8(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}




/* ---- 0x14001bba8 : FUN_14001bba8 [was: FUN_14001bba8] ---- */

undefined8 FUN_14001bba8(FILE *param_1,longlong *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((longlong)&param_1->_base + 4);
  if ((((byte)uVar4 & 3) == 2) && ((uVar4 & 0xc0) != 0)) {
    uVar4 = *(int *)&param_1->_ptr - param_1->_cnt;
    *(undefined4 *)&param_1->_base = 0;
    pbVar2 = *(byte **)&param_1->_cnt;
    param_1->_ptr = (char *)pbVar2;
    if (0 < (int)uVar4) {
      uVar3 = _fileno(param_1);
      uVar3 = FUN_1400218e8(uVar3,pbVar2,uVar4,param_2);
      if (uVar4 != uVar3) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) != 0) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}




/* ---- 0x14001c000 : FUN_14001c000 [was: FUN_14001c000] ---- */

ulonglong FUN_14001c000(FILE *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  __acrt_ptd *p_Var7;
  undefined *puVar8;
  
  if (param_1 == (FILE *)0x0) {
    p_Var7 = FUN_14001abbc();
    *(undefined4 *)p_Var7 = 0x16;
    FUN_14001925c();
  }
  else if (((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if (((ulonglong)param_1->_base & 0x4c000000000) == 0) {
        __acrt_stdio_allocate_buffer_nolock(&param_1->_ptr);
      }
      pbVar3 = *(byte **)&param_1->_cnt;
      uVar6 = param_1->_charbuf;
      param_1->_ptr = (char *)pbVar3;
      uVar4 = _fileno(param_1);
      iVar5 = FUN_140022264(uVar4,pbVar3,uVar6);
      *(int *)&param_1->_base = iVar5;
      if (1 < iVar5 + 1U) {
        if (((ulonglong)param_1->_base & 0x600000000) == 0) {
          iVar5 = _fileno(param_1);
          if ((iVar5 == -1) || (iVar5 = _fileno(param_1), iVar5 == -2)) {
            puVar8 = &DAT_14003c5f0;
          }
          else {
            iVar5 = _fileno(param_1);
            uVar6 = _fileno(param_1);
            puVar8 = (undefined *)
                     ((&DAT_14003d870)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
            LOCK();
            puVar1 = (uint *)((longlong)&param_1->_base + 4);
            *puVar1 = *puVar1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) &&
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
        bVar2 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (ulonglong)bVar2;
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)&param_1->_base = 0;
    }
    else {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}




/* ---- 0x14001d848 : FUN_14001d848 [was: FUN_14001d848] ---- */

ulonglong FUN_14001d848(byte param_1,FILE *param_2,longlong param_3)

{
  char **ppcVar1;
  uint *puVar2;
  bool bVar3;
  undefined8 uVar4;
  
  ppcVar1 = &param_2->_base;
  *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
  if (-1 < *(int *)ppcVar1) {
    *param_2->_ptr = param_1;
    param_2->_ptr = param_2->_ptr + 1;
    return (ulonglong)param_1;
  }
  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        bVar3 = FUN_140023e68((longlong *)param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (!bVar3) goto LAB_140023f22;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar2 = (uint *)((longlong)&param_2->_base + 4);
        *puVar2 = *puVar2 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 2;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (uVar4 = FUN_14001d860(param_2), (char)uVar4 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      bVar3 = FUN_140023d70(param_1,param_2,(longlong *)param_3);
      if (bVar3) {
        return (ulonglong)param_1;
      }
      goto LAB_140023f22;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
LAB_140023f22:
  LOCK();
  puVar2 = (uint *)((longlong)&param_2->_base + 4);
  *puVar2 = *puVar2 | 0x10;
  UNLOCK();
  return 0xffffffff;
}




/* ---- 0x14001d8ac : FUN_14001d8ac [was: FUN_14001d8ac] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14001d8ac(FILE *param_1)

{
  uint *puVar1;
  uint uVar2;
  FILE *pFVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  
  pFVar3 = (FILE *)FUN_14001d860(param_1);
  if ((char)pFVar3 != '\0') {
    pFVar3 = (FILE *)FUN_140010650(1);
    if (param_1 == pFVar3) {
      plVar5 = &DAT_14003dc98;
    }
    else {
      pFVar3 = (FILE *)FUN_140010650(2);
      if (param_1 != pFVar3) goto LAB_14001d966;
      plVar5 = &DAT_14003dca0;
    }
    _DAT_14003d5c8 = _DAT_14003d5c8 + 1;
    uVar2 = *(uint *)((longlong)&param_1->_base + 4);
    pFVar3 = (FILE *)(ulonglong)uVar2;
    if ((uVar2 & 0x4c0) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x282;
      UNLOCK();
      if (*plVar5 == 0) {
        pvVar4 = _malloc_base(0x1000);
        *plVar5 = (longlong)pvVar4;
        pFVar3 = (FILE *)FUN_14001b320((LPVOID)0x0);
      }
      if (*plVar5 == 0) {
        *(undefined4 *)&param_1->_base = 2;
        *(int **)&param_1->_cnt = &param_1->_file;
        param_1->_ptr = (char *)&param_1->_file;
        param_1->_charbuf = 2;
      }
      else {
        *(longlong *)&param_1->_cnt = *plVar5;
        pFVar3 = (FILE *)*plVar5;
        param_1->_ptr = (char *)pFVar3;
        *(undefined4 *)&param_1->_base = 0x1000;
        param_1->_charbuf = 0x1000;
      }
      return CONCAT71((int7)((ulonglong)pFVar3 >> 8),1);
    }
  }
LAB_14001d966:
  return (ulonglong)pFVar3 & 0xffffffffffffff00;
}




/* ---- 0x14001d974 : FUN_14001d974 [was: FUN_14001d974] ---- */

void FUN_14001d974(char param_1,FILE *param_2,longlong *param_3)

{
  uint *puVar1;
  
  if ((param_1 != '\0') && ((*(uint *)((longlong)&param_2->_base + 4) >> 9 & 1) != 0)) {
    FUN_14001bba8(param_2,param_3);
    LOCK();
    puVar1 = (uint *)((longlong)&param_2->_base + 4);
    *puVar1 = *puVar1 & 0xfffffd7f;
    UNLOCK();
    param_2->_charbuf = 0;
    *(undefined8 *)&param_2->_cnt = 0;
    param_2->_ptr = (char *)0x0;
  }
  return;
}




/* ---- 0x14001db1c : FUN_14001db1c [was: FUN_14001db1c] ---- */

uint FUN_14001db1c(uint param_1,FILE *param_2)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  __acrt_ptd *p_Var5;
  undefined *puVar6;
  undefined *puVar7;
  
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVar4 = _fileno(param_2);
    puVar6 = &DAT_14003c5f0;
    if (uVar4 + 2 < 2) {
      puVar7 = &DAT_14003c5f0;
    }
    else {
      puVar7 = (undefined *)
               ((&DAT_14003d870)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
    }
    if (puVar7[0x39] == '\0') {
      if (1 < uVar4 + 2) {
        puVar6 = (undefined *)
                 ((&DAT_14003d870)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
      }
      if ((puVar6[0x3d] & 1) == 0) goto LAB_14001dbc8;
    }
    p_Var5 = FUN_14001abbc();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_14001925c();
  }
  else {
LAB_14001dbc8:
    if ((param_1 != 0xffffffff) &&
       ((((ulonglong)param_2->_base & 0x100000000) != 0 ||
        (((byte)*(undefined4 *)((longlong)&param_2->_base + 4) & 6) == 6)))) {
      if (*(longlong *)&param_2->_cnt == 0) {
        __acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      if (param_2->_ptr == *(char **)&param_2->_cnt) {
        if (*(int *)&param_2->_base != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      uVar4 = *(uint *)((longlong)&param_2->_base + 4);
      pcVar3 = param_2->_ptr;
      pcVar1 = pcVar3 + -1;
      param_2->_ptr = pcVar1;
      if ((uVar4 >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        param_2->_ptr = pcVar3;
        return 0xffffffff;
      }
      *(int *)&param_2->_base = *(int *)&param_2->_base + 1;
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}




/* ---- 0x14001e9e0 : FUN_14001e9e0 [was: FUN_14001e9e0] ---- */

void FUN_14001e9e0(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  __acrt_ptd *p_Var5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  
  __acrt_lock(*param_2);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_14003df10 == (undefined1 (*) [32])0x0) {
LAB_14001ea93:
    p_Var5 = FUN_14001abbc();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_14001925c();
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      FUN_1400280c0(DAT_14003df10,0,0x101);
      goto LAB_14001ea93;
    }
    lVar8 = 2;
    pauVar7 = DAT_14003df10;
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)*pauVar7 = *puVar4;
      *(undefined8 *)(*pauVar7 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
      *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
      uVar3 = puVar4[5];
      *(undefined8 *)pauVar7[1] = puVar4[4];
      *(undefined8 *)(pauVar7[1] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
      *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
      uVar3 = puVar4[9];
      *(undefined8 *)pauVar7[2] = puVar4[8];
      *(undefined8 *)(pauVar7[2] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
      *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
      uVar3 = puVar4[0xd];
      *(undefined8 *)pauVar7[3] = puVar4[0xc];
      *(undefined8 *)(pauVar7[3] + 8) = uVar3;
      pauVar6 = pauVar7 + 4;
      uVar3 = puVar4[0xf];
      *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
      *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar8 = lVar8 + -1;
      pauVar7 = pauVar6;
    } while (lVar8 != 0);
    (*pauVar6)[0] = *(undefined1 *)puVar4;
  }
  lVar8 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_14003df18 != (undefined1 (*) [32])0x0) {
    pauVar7 = DAT_14003df18;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(undefined8 *)*pauVar7 = *puVar4;
        *(undefined8 *)(*pauVar7 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
        *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
        uVar3 = puVar4[5];
        *(undefined8 *)pauVar7[1] = puVar4[4];
        *(undefined8 *)(pauVar7[1] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
        *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
        uVar3 = puVar4[9];
        *(undefined8 *)pauVar7[2] = puVar4[8];
        *(undefined8 *)(pauVar7[2] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
        *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
        uVar3 = puVar4[0xd];
        *(undefined8 *)pauVar7[3] = puVar4[0xc];
        *(undefined8 *)(pauVar7[3] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
        *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar8 = lVar8 + -1;
        pauVar7 = pauVar7 + 4;
      } while (lVar8 != 0);
      goto LAB_14001eb44;
    }
    FUN_1400280c0(DAT_14003df18,0,0x100);
  }
  p_Var5 = FUN_14001abbc();
  *(undefined4 *)p_Var5 = 0x16;
  FUN_14001925c();
LAB_14001eb44:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_14003c640)) {
    FUN_14001b320((LPVOID)**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}




/* ---- 0x14001eec0 : FUN_14001eec0 [was: FUN_14001eec0] ---- */

ulonglong FUN_14001eec0(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  __acrt_ptd *p_Var13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_268 [4];
  int local_264 [3];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  undefined8 local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar8 = getSystemCP(param_1);
  if (iVar8 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    uVar10 = 0;
  }
  else {
    puVar9 = _malloc_base(0x228);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_14001b320((LPVOID)0x0);
      uVar10 = 0xffffffff;
    }
    else {
      lVar15 = 4;
      lVar16 = 4;
      puVar6 = *(undefined8 **)(local_res18 + 0x88);
      puVar7 = local_248;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar16 = lVar16 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar16 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      puVar6 = local_248;
      puVar7 = puVar9;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar15 = lVar15 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      *(undefined4 *)puVar9 = 0;
      uVar12 = FUN_14001f264(iVar8,(longlong)puVar9);
      uVar10 = uVar12 & 0xffffffff;
      if ((int)uVar12 == -1) {
        p_Var13 = FUN_14001abbc();
        *(undefined4 *)p_Var13 = 0x16;
        FUN_14001b320(puVar9);
        uVar10 = 0xffffffff;
      }
      else {
        if (param_2 == '\0') {
          FUN_14001a198();
        }
        piVar2 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_14003c640)) {
          FUN_14001b320(*(undefined **)(local_res18 + 0x88));
        }
        *(undefined4 *)puVar9 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar9;
        if ((DAT_14003cc20 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264[0] = 5;
          local_264[1] = 5;
          FUN_14001e9e0(local_268,local_264 + 1,&local_258,local_264);
          if (param_2 != '\0') {
            PTR_DAT_14003c5e0 = *local_res20;
          }
        }
        FUN_14001b320((LPVOID)0x0);
      }
    }
  }
  return uVar10;
}




/* ---- 0x14001fc7c : FUN_14001fc7c [was: FUN_14001fc7c] ---- */

uint FUN_14001fc7c(void)

{
  return *(uint *)((longlong)ProcessEnvironmentBlock + 0xbc) >> 8 & 0xffffff01;
}




/* ---- 0x14001fc98 : FUN_14001fc98 [was: FUN_14001fc98] ---- */

uint FUN_14001fc98(void)

{
  return *(uint *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x20) + 8) >> 0x1f;
}




/* ---- 0x140020a44 : FUN_140020a44 [was: FUN_140020a44] ---- */

ulonglong FUN_140020a44(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_14003c2c0 & 0x3f;
  uVar2 = DAT_14003df58 ^ DAT_14003c2c0;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




/* ---- 0x140020adc : FUN_140020adc [was: FUN_140020adc] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140020adc(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  ulonglong *puVar7;
  __acrt_ptd *p_Var8;
  undefined4 local_res10;
  __acrt_ptd *p_Var9;
  
  p_Var9 = (__acrt_ptd *)0x0;
  p_Var8 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_140020b33:
    if (param_1 == 2) {
      puVar7 = (ulonglong *)&DAT_14003df48;
    }
    else if (param_1 == 6) {
LAB_140020bd5:
      puVar7 = &DAT_14003df58;
      p_Var8 = p_Var9;
    }
    else if (param_1 == 0xf) {
      puVar7 = (ulonglong *)&DAT_14003df60;
    }
    else if (param_1 == 0x15) {
      puVar7 = (ulonglong *)&DAT_14003df50;
      p_Var8 = p_Var9;
    }
    else {
      if (param_1 == 0x16) goto LAB_140020bd5;
      puVar7 = (ulonglong *)0x0;
      p_Var8 = p_Var9;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_140020b63;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_140020bb5;
      }
      goto LAB_140020b33;
    }
LAB_140020b63:
    p_Var8 = FUN_14001b148();
    if (p_Var8 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar4 = *(longlong *)p_Var8;
    lVar2 = lVar4 + 0xc0;
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x10) {
      if (*(uint *)(lVar4 + 4) == param_1) goto LAB_140020bb0;
    }
    lVar4 = 0;
LAB_140020bb0:
    if (lVar4 == 0) {
LAB_140020bb5:
      p_Var8 = FUN_14001abbc();
      *(undefined4 *)p_Var8 = 0x16;
      FUN_14001925c();
      return 0xffffffff;
    }
    puVar7 = (ulonglong *)(lVar4 + 8);
    bVar1 = false;
  }
  lVar4 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar6 = (code *)*puVar7;
  if (bVar1) {
    bVar5 = (byte)DAT_14003c2c0 & 0x3f;
    pcVar6 = (code *)(((ulonglong)pcVar6 ^ DAT_14003c2c0) >> bVar5 |
                     ((ulonglong)pcVar6 ^ DAT_14003c2c0) << 0x40 - bVar5);
  }
  if (pcVar6 == (code *)0x1) goto LAB_140020cbe;
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_14001a05c(3);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar4 = *(longlong *)(p_Var8 + 8);
    *(longlong *)(p_Var8 + 8) = 0;
    if (param_1 == 8) {
      lVar2 = FUN_14001b0e8();
      local_res10 = *(undefined4 *)(lVar2 + 0x10);
      lVar2 = FUN_14001b0e8();
      *(undefined4 *)(lVar2 + 0x10) = 0x8c;
      goto LAB_140020c76;
    }
  }
  else {
LAB_140020c76:
    if (param_1 == 8) {
      lVar2 = *(longlong *)p_Var8;
      for (lVar3 = lVar2 + 0x30; lVar3 != lVar2 + 0xc0; lVar3 = lVar3 + 0x10) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      goto LAB_140020cbe;
    }
  }
  *puVar7 = DAT_14003c2c0;
LAB_140020cbe:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar6 != (code *)0x1) {
    if (param_1 == 8) {
      lVar2 = FUN_14001b0e8();
      (*pcVar6)(8,*(undefined4 *)(lVar2 + 0x10));
    }
    else {
      (*pcVar6)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var8 + 8) = lVar4, param_1 == 8)) {
      lVar4 = FUN_14001b0e8();
      *(undefined4 *)(lVar4 + 0x10) = local_res10;
    }
  }
  return 0;
}




/* ---- 0x140020e5c : FUN_140020e5c [was: FUN_140020e5c] ---- */

ulonglong FUN_140020e5c(FILE *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1400191a4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) {
      uVar2 = FUN_14001bba8(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      __acrt_stdio_free_buffer_nolock(&param_1->_ptr);
      uVar1 = _fileno(param_1);
      uVar3 = FUN_1400255d4(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_14001b320(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    FUN_140025768(&param_1->_ptr);
  }
  return uVar2;
}




/* ---- 0x140023d70 : FUN_140023d70 [was: FUN_140023d70] ---- */

bool FUN_140023d70(byte param_1,FILE *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  bool bVar8;
  byte local_res8 [8];
  
  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if (((ulonglong)param_2->_base & 0xc000000000) == 0) {
    iVar4 = FUN_1400218e8(uVar2,local_res8,1,param_3);
    bVar8 = iVar4 == 1;
  }
  else {
    uVar3 = 0;
    uVar7 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(byte **)&param_2->_cnt + 1);
    *(int *)&param_2->_base = param_2->_charbuf + -1;
    if ((int)uVar7 < 1) {
      if (uVar2 + 2 < 2) {
        puVar6 = &DAT_14003c5f0;
      }
      else {
        puVar6 = (undefined *)
                 ((&DAT_14003d870)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if (((puVar6[0x38] & 0x20) != 0) &&
         (lVar5 = FUN_140025954(uVar2,(LARGE_INTEGER)0x0,2), lVar5 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar3 = FUN_1400218e8(uVar2,*(byte **)&param_2->_cnt,uVar7,param_3);
    }
    bVar8 = uVar3 == uVar7;
    **(byte **)&param_2->_cnt = local_res8[0];
  }
  return bVar8;
}




/* ---- 0x140023ef0 : FUN_140023ef0 [was: FUN_140023ef0] ---- */

ulonglong FUN_140023ef0(byte param_1,FILE *param_2,longlong *param_3)

{
  uint *puVar1;
  bool bVar2;
  undefined8 uVar3;
  
  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)((longlong)param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        bVar2 = FUN_140023e68((longlong *)param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (!bVar2) goto LAB_140023f22;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (uVar3 = FUN_14001d860(param_2), (char)uVar3 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
      }
      bVar2 = FUN_140023d70(param_1,param_2,param_3);
      if (bVar2) {
        return (ulonglong)param_1;
      }
      goto LAB_140023f22;
    }
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 6) = 1;
LAB_140023f22:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffffffff;
}




/* ---- 0x140024890 : FUN_140024890 [was: FUN_140024890] ---- */

/* WARNING: Removing unreachable block (ram,0x000140024b2c) */
/* WARNING: Removing unreachable block (ram,0x000140024b25) */
/* WARNING: Removing unreachable block (ram,0x000140024b1e) */
/* WARNING: Removing unreachable block (ram,0x000140024b17) */
/* WARNING: Removing unreachable block (ram,0x000140024b10) */
/* WARNING: Removing unreachable block (ram,0x000140024b09) */
/* WARNING: Removing unreachable block (ram,0x000140024b02) */
/* WARNING: Removing unreachable block (ram,0x000140024afb) */
/* WARNING: Removing unreachable block (ram,0x000140024af4) */
/* WARNING: Removing unreachable block (ram,0x000140024aed) */
/* WARNING: Removing unreachable block (ram,0x000140024ae6) */
/* WARNING: Removing unreachable block (ram,0x000140024adf) */
/* WARNING: Removing unreachable block (ram,0x000140024ad8) */
/* WARNING: Removing unreachable block (ram,0x000140024ad1) */
/* WARNING: Removing unreachable block (ram,0x000140024aca) */
/* WARNING: Removing unreachable block (ram,0x00014002498d) */
/* WARNING: Removing unreachable block (ram,0x00014002499c) */
/* WARNING: Removing unreachable block (ram,0x0001400249ab) */
/* WARNING: Removing unreachable block (ram,0x0001400249ba) */
/* WARNING: Removing unreachable block (ram,0x0001400249c9) */
/* WARNING: Removing unreachable block (ram,0x0001400249d5) */
/* WARNING: Removing unreachable block (ram,0x0001400249e1) */
/* WARNING: Removing unreachable block (ram,0x0001400249ed) */
/* WARNING: Removing unreachable block (ram,0x0001400249f9) */
/* WARNING: Removing unreachable block (ram,0x000140024a05) */
/* WARNING: Removing unreachable block (ram,0x000140024a11) */
/* WARNING: Removing unreachable block (ram,0x000140024a1d) */
/* WARNING: Removing unreachable block (ram,0x000140024a29) */
/* WARNING: Removing unreachable block (ram,0x000140024a35) */
/* WARNING: Removing unreachable block (ram,0x000140024a41) */

byte * FUN_140024890(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte *pbVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  longlong lVar25;
  
  uVar21 = (ulonglong)((uint)param_2 & 0xf);
  pauVar20 = (undefined1 (*) [16])(param_2 + -uVar21);
  auVar33 = *pauVar20;
  switch(uVar21) {
  case 1:
    auVar33 = auVar33 >> 8;
    break;
  case 2:
    auVar33 = auVar33 >> 0x10;
    break;
  case 3:
    auVar33 = auVar33 >> 0x18;
    break;
  case 4:
    auVar33 = auVar33 >> 0x20;
    break;
  case 5:
    auVar33 = auVar33 >> 0x28;
    break;
  case 6:
    auVar33 = auVar33 >> 0x30;
    break;
  case 7:
    auVar33 = auVar33 >> 0x38;
    break;
  case 8:
    auVar33 = auVar33 >> 0x40;
    break;
  case 9:
    auVar33 = auVar33 >> 0x48;
    break;
  case 10:
    auVar33 = auVar33 >> 0x50;
    break;
  case 0xb:
    auVar33 = auVar33 >> 0x58;
    break;
  case 0xc:
    auVar33 = auVar33 >> 0x60;
    break;
  case 0xd:
    auVar33 = auVar33 >> 0x68;
    break;
  case 0xe:
    auVar33 = auVar33 >> 0x70;
    break;
  case 0xf:
    auVar33 = auVar33 >> 0x78;
  }
  auVar22[0] = -(auVar33[0] == '\0');
  auVar22[1] = -(auVar33[1] == '\0');
  auVar22[2] = -(auVar33[2] == '\0');
  auVar22[3] = -(auVar33[3] == '\0');
  auVar22[4] = -(auVar33[4] == '\0');
  auVar22[5] = -(auVar33[5] == '\0');
  auVar22[6] = -(auVar33[6] == '\0');
  auVar22[7] = -(auVar33[7] == '\0');
  auVar22[8] = -(auVar33[8] == '\0');
  auVar22[9] = -(auVar33[9] == '\0');
  auVar22[10] = -(auVar33[10] == '\0');
  auVar22[0xb] = -(auVar33[0xb] == '\0');
  auVar22[0xc] = -(auVar33[0xc] == '\0');
  auVar22[0xd] = -(auVar33[0xd] == '\0');
  auVar22[0xe] = -(auVar33[0xe] == '\0');
  auVar22[0xf] = -(auVar33[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar20)[1] != '\0') {
        pbVar19 = FUN_1400247f0(param_1,param_2);
        return pbVar19;
      }
      goto LAB_140024b39;
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    lVar25 = auVar33._8_8_;
    switch(-uVar2) {
    case 0:
      auVar33 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar26._0_8_ = auVar33._0_8_ << 8;
      auVar26._8_8_ = lVar25 << 8 | auVar33._0_8_ >> 0x38;
      auVar33 = auVar26 >> 8;
      break;
    case 0xfffffff2:
      auVar27._0_8_ = auVar33._0_8_ << 0x10;
      auVar27._8_8_ = lVar25 << 0x10 | auVar33._0_8_ >> 0x30;
      auVar33 = auVar27 >> 0x10;
      break;
    case 0xfffffff3:
      auVar28._0_8_ = auVar33._0_8_ << 0x18;
      auVar28._8_8_ = lVar25 << 0x18 | auVar33._0_8_ >> 0x28;
      auVar33 = auVar28 >> 0x18;
      break;
    case 0xfffffff4:
      auVar29._0_8_ = auVar33._0_8_ << 0x20;
      auVar29._8_8_ = lVar25 << 0x20 | auVar33._0_8_ >> 0x20;
      auVar33 = auVar29 >> 0x20;
      break;
    case 0xfffffff5:
      auVar30._0_8_ = auVar33._0_8_ << 0x28;
      auVar30._8_8_ = lVar25 << 0x28 | auVar33._0_8_ >> 0x18;
      auVar33 = auVar30 >> 0x28;
      break;
    case 0xfffffff6:
      auVar31._0_8_ = auVar33._0_8_ << 0x30;
      auVar31._8_8_ = lVar25 << 0x30 | auVar33._0_8_ >> 0x10;
      auVar33 = auVar31 >> 0x30;
      break;
    case 0xfffffff7:
      auVar32._0_8_ = auVar33._0_8_ << 0x38;
      auVar32._8_8_ = lVar25 << 0x38 | auVar33._0_8_ >> 8;
      auVar33 = auVar32 >> 0x38;
      break;
    case 0xfffffff8:
      auVar33._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar33._0_8_ << 8;
      auVar33 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_ << 0x10;
      auVar33 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_ << 0x18;
      auVar33 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._0_8_ << 0x20;
      auVar33 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar33._0_8_ << 0x28;
      auVar33 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar33._0_8_ << 0x30;
      auVar33 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar33._0_8_ << 0x38;
      auVar33 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar21 == 0 || (ulonglong)uVar2 < 0x10 - uVar21) goto LAB_140024b39;
  }
  auVar34 = pauVar20[1];
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  lVar25 = auVar34._8_8_;
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      uVar21 = auVar34._0_8_;
      switch(-uVar2) {
      case 0:
        auVar34 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar34._0_8_ = uVar21 << 8;
        auVar34._8_8_ = lVar25 << 8 | uVar21 >> 0x38;
        break;
      case 0xfffffff2:
        auVar34._0_8_ = uVar21 << 0x10;
        auVar34._8_8_ = lVar25 << 0x10 | uVar21 >> 0x30;
        break;
      case 0xfffffff3:
        auVar34._0_8_ = uVar21 << 0x18;
        auVar34._8_8_ = lVar25 << 0x18 | uVar21 >> 0x28;
        break;
      case 0xfffffff4:
        auVar34._0_8_ = uVar21 << 0x20;
        auVar34._8_8_ = lVar25 << 0x20 | uVar21 >> 0x20;
        break;
      case 0xfffffff5:
        auVar34._0_8_ = uVar21 << 0x28;
        auVar34._8_8_ = lVar25 << 0x28 | uVar21 >> 0x18;
        break;
      case 0xfffffff6:
        auVar34._0_8_ = uVar21 << 0x30;
        auVar34._8_8_ = lVar25 << 0x30 | uVar21 >> 0x10;
        break;
      case 0xfffffff7:
        auVar34._0_8_ = uVar21 << 0x38;
        auVar34._8_8_ = lVar25 << 0x38 | uVar21 >> 8;
        break;
      case 0xfffffff8:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar21;
        auVar34 = auVar18 << 0x40;
        break;
      case 0xfffffff9:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar21 << 8;
        auVar34 = auVar11 << 0x40;
        break;
      case 0xfffffffa:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar21 << 0x10;
        auVar34 = auVar12 << 0x40;
        break;
      case 0xfffffffb:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21 << 0x18;
        auVar34 = auVar13 << 0x40;
        break;
      case 0xfffffffc:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar21 << 0x20;
        auVar34 = auVar14 << 0x40;
        break;
      case 0xfffffffd:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar21 << 0x28;
        auVar34 = auVar15 << 0x40;
        break;
      case 0xfffffffe:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar21 << 0x30;
        auVar34 = auVar16 << 0x40;
        break;
      case 0xffffffff:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar21 << 0x38;
        auVar34 = auVar17 << 0x40;
      }
      auVar33 = auVar33 | auVar34;
LAB_140024b39:
      bVar1 = *param_1;
      while( true ) {
        if (bVar1 == 0) {
          return (byte *)0x0;
        }
        auVar24[0] = -(bVar1 == auVar33[0]);
        auVar24[1] = -(bVar1 == auVar33[1]);
        auVar24[2] = -(bVar1 == auVar33[2]);
        auVar24[3] = -(bVar1 == auVar33[3]);
        auVar24[4] = -(bVar1 == auVar33[4]);
        auVar24[5] = -(bVar1 == auVar33[5]);
        auVar24[6] = -(bVar1 == auVar33[6]);
        auVar24[7] = -(bVar1 == auVar33[7]);
        auVar24[8] = -(bVar1 == auVar33[8]);
        auVar24[9] = -(bVar1 == auVar33[9]);
        auVar24[10] = -(bVar1 == auVar33[10]);
        auVar24[0xb] = -(bVar1 == auVar33[0xb]);
        auVar24[0xc] = -(bVar1 == auVar33[0xc]);
        auVar24[0xd] = -(bVar1 == auVar33[0xd]);
        auVar24[0xe] = -(bVar1 == auVar33[0xe]);
        auVar24[0xf] = -(bVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        bVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pbVar19 = FUN_1400247f0(param_1,param_2);
  return pbVar19;
}




/* ---- 0x140025768 : FUN_140025768 [was: FUN_140025768] ---- */

undefined4 FUN_140025768(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return uVar1;
}




/* ---- 0x140027020 : FUN_140027020 [was: FUN_140027020] ---- */

/* WARNING: Removing unreachable block (ram,0x0001400270a0) */
/* WARNING: Removing unreachable block (ram,0x000140027092) */
/* WARNING: Removing unreachable block (ram,0x000140027037) */

undefined8 FUN_140027020(void)

{
  longlong lVar1;
  int *piVar2;
  byte in_XCR0;
  
  DAT_14003df68 = 0;
  DAT_14003df6c = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    if ((in_XCR0 & 6) == 6) {
      DAT_14003df68 = 1;
      DAT_14003df6c = 1;
    }
    else {
      DAT_14003df68 = 0;
    }
  }
  if ((DAT_14003df68 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_14003df6c = 3;
      DAT_14003df68 = 3;
      return 0;
    }
  }
  return 0;
}




/* ---- 0x140028460 : aimbot_calculate_angle [was: strncpy] ---- */

/* Library Function - Single Match
    strncpy
   
   Library: Visual Studio */

char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong *puVar5;
  size_t sVar6;
  bool bVar7;
  
  if (_Count != 0) {
    lVar3 = (longlong)_Dest - (longlong)_Source;
    do {
      if (((ulonglong)_Source & 7) == 0) goto LAB_140028498;
      uVar1 = *(ulonglong *)_Source;
      *(char *)((longlong)_Source + lVar3) = (char)uVar1;
      puVar5 = (ulonglong *)_Source;
      sVar6 = _Count;
      if ((char)uVar1 == '\0') goto LAB_140028560;
      _Source = (char *)((longlong)_Source + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
  }
  return _Dest;
LAB_140028498:
  while( true ) {
    uVar1 = *(ulonglong *)_Source;
    if ((_Count < 8 || _Count - 8 == 0) ||
       (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) != 0))
    break;
    *(ulonglong *)((longlong)_Source + lVar3) = uVar1;
    _Source = (char *)((longlong)_Source + 8);
    _Count = _Count - 8;
  }
  if (_Count == 0) {
    return _Dest;
  }
  *(char *)((longlong)_Source + lVar3) = (char)uVar1;
  puVar5 = (ulonglong *)_Source;
  sVar6 = _Count;
  if ((char)uVar1 == '\0') {
LAB_140028560:
    pcVar4 = (char *)(lVar3 + (longlong)puVar5);
    if (0xf < sVar6) {
      while (((ulonglong)pcVar4 & 7) != 0) {
        pcVar4 = pcVar4 + 1;
        *pcVar4 = '\0';
        sVar6 = sVar6 - 1;
      }
      while (0x1f < sVar6) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
        pcVar4[0x10] = '\0';
        pcVar4[0x11] = '\0';
        pcVar4[0x12] = '\0';
        pcVar4[0x13] = '\0';
        pcVar4[0x14] = '\0';
        pcVar4[0x15] = '\0';
        pcVar4[0x16] = '\0';
        pcVar4[0x17] = '\0';
        pcVar4[0x18] = '\0';
        pcVar4[0x19] = '\0';
        pcVar4[0x1a] = '\0';
        pcVar4[0x1b] = '\0';
        pcVar4[0x1c] = '\0';
        pcVar4[0x1d] = '\0';
        pcVar4[0x1e] = '\0';
        pcVar4[0x1f] = '\0';
        pcVar4 = pcVar4 + 0x20;
        sVar6 = sVar6 - 0x20;
      }
      while (7 < sVar6) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4 = pcVar4 + 8;
        sVar6 = sVar6 - 8;
      }
    }
    while (bVar7 = sVar6 != 0, sVar6 = sVar6 - 1, bVar7) {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    return _Dest;
  }
  puVar5 = (ulonglong *)((longlong)_Source + 1);
  sVar6 = _Count - 1;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 8);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_140028560;
  puVar5 = (ulonglong *)((longlong)_Source + 2);
  sVar6 = _Count - 2;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x10);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_140028560;
  puVar5 = (ulonglong *)((longlong)_Source + 3);
  sVar6 = _Count - 3;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x18);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_140028560;
  puVar5 = (ulonglong *)((longlong)_Source + 4);
  sVar6 = _Count - 4;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x20);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_140028560;
  puVar5 = (ulonglong *)((longlong)_Source + 5);
  sVar6 = _Count - 5;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x28);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_140028560;
  puVar5 = (ulonglong *)((longlong)_Source + 6);
  sVar6 = _Count - 6;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x30);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_140028560;
  puVar5 = (ulonglong *)((longlong)_Source + 7);
  sVar6 = _Count - 7;
  if (sVar6 == 0) {
    return _Dest;
  }
  cVar2 = (char)(uVar1 >> 0x38);
  *(char *)((longlong)puVar5 + lVar3) = cVar2;
  if (cVar2 == '\0') goto LAB_140028560;
  _Source = (char *)((longlong)_Source + 8);
  _Count = _Count - 8;
  if (_Count == 0) {
    return _Dest;
  }
  goto LAB_140028498;
}




/* ---- 0x1400285e0 : triggerbot_fire_check [was: strcmp] ---- */

/* Library Function - Single Match
    strcmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strcmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  while( true ) {
    if (((ulonglong)_Str1 & 7) == 0) {
      while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
             (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
        _Str1 = (char *)((longlong)_Str1 + 8);
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = (byte)*(ulonglong *)_Str1;
    if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) break;
    _Str1 = (char *)((longlong)_Str1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
}




/* ---- 0x140028660 : esp_draw_boxes [was: strlen] ---- */

/* Library Function - Single Match
    strlen
   
   Library: Visual Studio */

size_t __cdecl strlen(char *_Str)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar3 = -(longlong)_Str;
  do {
    if (((ulonglong)_Str & 7) == 0) goto LAB_140028691;
    uVar1 = *(ulonglong *)_Str;
    _Str = (char *)((longlong)_Str + 1);
  } while ((char)uVar1 != '\0');
LAB_1400286d8:
  return (size_t)(char *)((longlong)_Str + lVar3 + -1);
LAB_140028691:
  do {
    do {
      puVar2 = (ulonglong *)_Str;
      _Str = (char *)(puVar2 + 1);
    } while (((~*puVar2 ^ *puVar2 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar1 = *puVar2;
    if ((char)uVar1 == '\0') {
      return (longlong)puVar2 + lVar3;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 1);
    }
    if ((char)(uVar1 >> 0x10) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 2);
    }
    if ((char)(uVar1 >> 0x18) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 3);
    }
    if ((char)(uVar1 >> 0x20) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 4);
    }
    if ((char)(uVar1 >> 0x28) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 5);
    }
    if ((char)(uVar1 >> 0x30) == '\0') {
      return (size_t)(char *)((longlong)puVar2 + lVar3 + 6);
    }
  } while ((char)(uVar1 >> 0x38) != '\0');
  goto LAB_1400286d8;
}




/* ---- 0x140028d00 : FUN_140028d00 [was: FUN_140028d00] ---- */

void FUN_140028d00(void)

{
  __acrt_unlock(0);
  return;
}




/* ---- 0x140028d16 : FUN_140028d16 [was: FUN_140028d16] ---- */

void FUN_140028d16(void)

{
  __acrt_unlock(0);
  return;
}




/* ---- 0x140028d2c : FUN_140028d2c [was: FUN_140028d2c] ---- */

void FUN_140028d2c(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}




/* ---- 0x140028d73 : FUN_140028d73 [was: FUN_140028d73] ---- */

void FUN_140028d73(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x58));
  return;
}




/* ---- 0x140028d8d : FUN_140028d8d [was: FUN_140028d8d] ---- */

void FUN_140028d8d(void)

{
  __acrt_unlock(8);
  return;
}




/* ---- 0x140028da6 : FUN_140028da6 [was: FUN_140028da6] ---- */

void FUN_140028da6(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x98));
  return;
}




/* ---- 0x140028dc3 : FUN_140028dc3 [was: FUN_140028dc3] ---- */

void FUN_140028dc3(void)

{
  __acrt_unlock(7);
  return;
}




/* ---- 0x140028ddc : FUN_140028ddc [was: FUN_140028ddc] ---- */

void FUN_140028ddc(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x68));
  return;
}




/* ---- 0x140028df6 : FUN_140028df6 [was: FUN_140028df6] ---- */

void FUN_140028df6(void)

{
  __acrt_unlock(5);
  return;
}




/* ---- 0x140028e0f : FUN_140028e0f [was: FUN_140028e0f] ---- */

void FUN_140028e0f(void)

{
  __acrt_unlock(4);
  return;
}




/* ---- 0x140028e28 : FUN_140028e28 [was: FUN_140028e28] ---- */

void FUN_140028e28(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}




