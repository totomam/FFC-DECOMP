/* cflags:  */
/* From arcnid/ffc-decomp src/battle/select_best_range_7f6c.c, externs renamed. */
/* 021B7F6C size 0x3A  flags: -O4,p */
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

extern s32 func_0209a978(s32 n);
s32 func_ov002_021b7f6c(s32 best, u32 step, s32 mid) {
    s32 i, n;
    s32 v, lo, hi;
    i = 0;
    n = func_0209a978(0x168);
    if (n != 0) {
        do {
            v = (step >> 1) + (u32)i * step;
            lo = v - mid;
            hi = v + mid;
            if (lo < best && best < hi) best = v;
            i++;
        } while ((u32)i < (u32)n);
    }
    return best;
}
