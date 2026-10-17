/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/session_patterns_20260802.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Consolidated patterns matched in the 2026-08-01/02 sessions (pre-compaction),
   persisted from working notes. Each function is a template; extern names are
   placeholders. See tools/matched_addrs.txt for the canonical address list.

   vtable_chain_read:    021BD804 (+3call variant 021BD82C)
   call_chain_return1:   021D2A7C
   zero_3fields_10c:     02197FF0 0219800C
   counter_dec:          021B2020 021B2044
   counter_dec_field4:   021BC0F4 021BC10C
   field_read_passthrough: 0219B5F4
   vtable_cond_byte:     0219F7BC 0219F654
   nested_check:         021AAFFC
   compare_ge:           021ACFF4
   check_field_byte:     021BF7E0
   call4_return_self_v2: 021C9054 021C906C
   cond_status_set:      021BC3D4
   call_store_2lit:      021D30F0
   three_call_80_const:  021AE794
   cond_field_store:     021BA7E0(c=1) 021BA7FC(c=0)
   status_cond_field14:  0219C890 021BD4B8
   status_3field_word:   021A1540 021B1568
   status_byte_mixed2:   021A0168 021AD218
   status_byte_read:     021C34BC
   status_double_check:  021C2EF0
   status_cond_gt:       021B8350
   vtable_init14_3call:  021C8868
   three_call_init10c:   021B491C 021B58E4 021B591C
   static_2call:         021D4640
   cond_call_self:       021BC7B4  */

extern u32 VTable[];
extern void* SubA(void*);
extern void SubB(u32, u32);
extern void SubC(void*);
extern void SubD(void*);

static void* VtableChainRead(void* self) {
    u32 tmp;
    *(u32*)self = (u32)VTable;
    tmp = *(u32*)((u8*)SubA(self) + 0x18);
    SubB(*(u32*)((u8*)tmp + 0x18), *(u32*)((u8*)self + 0x88));
    SubC(self);
    return self;
}

extern void* Sub1r(void*);
extern void* Sub2r(void*, u32);
extern void Sub3r(void*, u32);

static u32 CallChainReturn1(void* self) {
    u32 r;
    r = (u32)Sub1r(self);
    r = (u32)Sub2r((void*)(*(u32*)((u8*)self + 0xBC) + 0x80), r);
    Sub3r((u8*)self + 0x14, r);
    return 1;
}

extern void SubZ(void*);

static void* Zero3Fields10C(void* self) {
    *(u32*)((u8*)self + 0x10C) = 0;
    *(u32*)((u8*)self + 0x110) = 0;
    *(u32*)((u8*)self + 0x114) = 0;
    SubZ(self);
    return self;
}

extern u32 GlobalCounter;
extern void SubK1(void*);
extern void SubK2(void*);

static void* CounterDec2Call(void* self) {
    GlobalCounter--;
    SubK1((u8*)self + 0x8C);
    SubK2(self);
    return self;
}

extern u32 data_ov002_021d795c[];
extern void func_02056db0(void*);

void* func_ov002_021bc0f4(void* self) {
    data_ov002_021d795c[1]--;
    func_02056db0(self);
    return self;
}

extern u32 SubP1(void*);
extern void SubP2(u32, u32, u32, u32);

static void FieldReadPassthrough(void* self) {
    u32 r;
    r = SubP1(*(void**)((u8*)self + 0x9C));
    SubP2(*(u32*)((u8*)self + 0x98), r, 0, (u32)-1);
}

extern void WarningFunc(u32);
extern void SubW(void*);

static void* VtableCondByte(void* self) {
    *(u32*)self = (u32)VTable;
    if (*(u8*)((u8*)self + 0x84) == 0)
        WarningFunc(0x40);
    SubW(self);
    return self;
}

extern u32 GetType(void*);
extern u32 CheckN(u32);

static u32 NestedCheck(void* self) {
    if (GetType(self) == 16 && CheckN(*(u32*)((u8*)self + 0xBC)) == 1)
        return 1;
    return 0;
}

extern u32 FuncG(void*);

static u32 CompareGE(void* self, u32 arg1) {
    if (arg1 >= FuncG(self))
        return 1;
    return 0;
}
