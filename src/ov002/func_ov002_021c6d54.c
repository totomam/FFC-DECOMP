/* cflags:  */
/* From arcnid/ffc-decomp src/battle/slot_refresh_dispatch_021C6D54.c, externs renamed. */
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

/* Matched: 021C6D54, size 0x88, -O4,p. Per-slot refresh: w = *(self+0x23C);
   A(obj,&w); B(&w); pick p = entry+1 or entry->ptr8 by 1-BIT BITFIELD in
   *(self+0x98)+0xA8+idx*0xC; C(obj, p, self+0x178+idx*0x41); D(obj, 1);
   if (*(self+0x240+idx*4)) E(obj, flag, 0, 0).
   KEYS: two separate locals a1/a2 both `= self; += 0x88;` (two-statement mutation
   gives the double spill-stores at sp+0/sp+4); flag reload-into-r1 = also 2nd arg
   of E; bitfield `u32 flag:1` tested ==0 keeps lsls/lsrs #31; decl order
   w, a2, a1 lands slots sp+8/4/0. */
typedef struct { u32 flag : 1; u32 rest : 31; u32 pad4; u8* ptr8; } Ent;
extern void func_0202f180(void* o, u32* w);
extern void func_02035c18(u32* w);
extern void func_0202e6d0(void* o, u8* p, u8* q);
extern void func_0202edc4(void* o, u32 x);
extern void func_0202ea94(void* o, u32 f, u32 a, u32 b);

void func_ov002_021c6d54(u8* self, s32 idx) {
    u32 w;
    u8* a2;
    u8* a1;
    u8* e;
    u8* p;
    u32 g;
    w = *(u32*)(self + 0x23c);
    a1 = self;
    a1 += 0x88;
    func_0202f180(*(void**)(a1 + idx * 4), &w);
    func_02035c18(&w);
    e = *(u8**)(self + 0x98) + 0xa8 + idx * 0xc;
    if (((Ent*)e)->flag == 0) {
        p = e + 1;
    } else {
        p = ((Ent*)e)->ptr8;
    }
    a2 = self;
    a2 += 0x88;
    func_0202e6d0(*(void**)(a2 + idx * 4), p, self + 0x178 + idx * 0x41);
    func_0202edc4(*(void**)(a2 + idx * 4), 1);
    g = *(u32*)(self + idx * 4 + 0x240);
    if (g != 0) {
        func_0202ea94(*(void**)(a1 + idx * 4), g, 0, 0);
    }
}
