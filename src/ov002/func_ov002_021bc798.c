/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc_call2.c, externs renamed. */
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

/* Matched: 021A13D0 021A1814 021BC798 (26B each)
   Pattern: alloc 0x1C, if non-null call func_ov002_021bc52c(p, a, b) */
extern void* func_0205681c(u32 size);
extern void func_ov002_021bc52c(void* p, void* a, void* b);

void func_ov002_021bc798(void* a, void* b) {
    void* p;
    p = func_0205681c(0x1C);
    if (p != 0) {
        func_ov002_021bc52c(p, a, b);
    }
}
