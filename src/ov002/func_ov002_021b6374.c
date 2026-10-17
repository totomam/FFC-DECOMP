/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/forward_pair_thunk_021B6374.c, externs renamed. */
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

/* Matched 021B6374 (36 bytes, -O4). Target listed as func_021B6376 (off-by-2: B40F
   struct-spill prologue). Two units: func_ov002_021b6374(obj, Pair) forwards to *(obj+0xa4);
   plus tail-call thunk at 021B638C: Real(a, *(b+0xa4)). */
typedef struct { u32 x, y; } Pair;
extern void func_ov002_021b5e98(void* p, Pair pr);
extern void Real(void* a, void* b);
void func_ov002_021b6374(void* obj, Pair pr) {
    func_ov002_021b5e98(*(void**)((u8*)obj + 0xa4), pr);
}
static void Thunk(void* a, void* b) {
    Real(a, *(void**)((u8*)b + 0xa4));
}
