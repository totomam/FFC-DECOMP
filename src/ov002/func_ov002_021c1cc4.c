/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/ctor_field_init_021C1CC4.c, externs renamed. */
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

/* Object constructor: init fields, pair copy at 0x80, func_ov002_021c1e20 call. Matched 021C1CC4 (140B) */
typedef struct { u32 a, b; } Pair;
extern void func_02056c9c(void* p, int z);
extern void func_ov002_021c1e20(void* p);
extern u32 data_ov002_021d7058;
extern Pair data_ov002_021d7088;
extern u32 data_ov002_021d41dc;
void* func_ov002_021c1cc4(void* self, void* a1, void* a2, u32 a3) {
    u8* s = (u8*)self;
    func_02056c9c(self, 0);
    *(u32*)s = (u32)&data_ov002_021d7058;
    *(u32*)(s+0x88) = (u32)a2;
    *(u32*)(s+0x8c) = 0;
    *(u32*)(s+0x90) = (u32)a1;
    *(u32*)(s+0x94) = a3;
    *(u32*)(s+0x98) = 0;
    *(u32*)(s+0xa0) = 0;
    *(u32*)(s+0xa4) = 3;
    *(u32*)(s+0xa8) = 0;
    *(u8*)(s+0xac) = 0;
    *(u8*)(s+0xad) = 0;
    *(u8*)(s+0xae) = 0;
    *(Pair*)(s+0x80) = data_ov002_021d7088;
    *(u32*)(s+0xa8) = (u32)&data_ov002_021d41dc;
    func_ov002_021c1e20(self);
    *(u32*)(s+0xa4) = 3;
    *(u32*)(s+0x8c) = 0;
    return self;
}
