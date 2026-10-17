/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/angle_diff_wrap.c, externs renamed. */
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


/* 021C7E6C (size 0x26) — signed angle difference wrapped to +/-180 (units: degrees, 0xB4/0x168) */
extern s32 func_0208f694(s32 x);

s32 func_ov002_021c7e6c(s32 a, s32 b) {
    if (func_0208f694(a - b) > 0xB4) {
        if (b > a) {
            b -= 0x168;
        } else {
            b += 0x168;
        }
    }
    return a - b;
}
