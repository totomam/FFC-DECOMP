/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc20_init_pair_ba5f0.c, externs renamed. */
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

/* Matched 021BA5F0 (36 bytes). func_0205681c(0x20) then func_ov002_021b9dbc(q, self[0x80], pair-by-value). */
typedef struct { u32 x, y; } Pair;
extern void* func_0205681c(u32);
extern void* func_ov002_021b9dbc(void*, u32, Pair);
void* func_ov002_021ba818(void* a1, Pair p) {
    void* q = func_0205681c(0x20);
    if (q != 0) {
        a1 = (u8*)a1 + 0x80;
        q = func_ov002_021b9dbc(q, *(u32*)a1, p);
    }
    return q;
}
