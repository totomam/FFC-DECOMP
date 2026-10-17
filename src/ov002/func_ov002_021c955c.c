/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc_b4_pair_ctor.c, externs renamed. */
/* 0x021C955C (48 bytes) -O4  Pair-by-value ctor */
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

typedef struct { u32 x, y; } Pair;
extern void* func_0205681c(int);
extern void* func_ov002_021b4680(void* q, void* a0, void* a1, Pair pr);
void* func_ov002_021c955c(void* a0, void* a1, Pair pr) {
    void* q;
    q = func_0205681c(0xB4);
    if (q) {
        q = func_ov002_021b4680(q, a0, a1, pr);
    }
    return q;
}
