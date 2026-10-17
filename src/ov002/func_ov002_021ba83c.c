/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc58_forward_6word_a614.c, externs renamed. */
/* 021BA614 size 0x3C (58B code +2 pad)  flags: -O4 */
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

typedef struct { u32 a, b; } Pair;
extern void* func_0205681c(u32 sz);
extern void* func_ov002_021b9e40(void* p, u32 field, Pair front, Pair p2, u32 e, u32 f);
void* func_ov002_021ba83c(void* obj, Pair front, Pair p2, u32 e, u32 f) {
    void* p;
    p = func_0205681c(0x58);
    if (p != 0) {
        p = func_ov002_021b9e40(p, *(u32*)((u8*)obj + 0x80), front, p2, e, f);
    }
    return p;
}
