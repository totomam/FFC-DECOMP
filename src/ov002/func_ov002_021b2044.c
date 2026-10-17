/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_counter_dec_021B2044.c, externs renamed. */
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

/* 021B2044 (size 0x28, -O4) — dtor: decrement global counter, destroy member at +0x8C, then base dtor pair; returns s. */
extern u32 data_ov002_021d7954;
extern void func_020059cc(void* p);
extern void func_02056db0(void* p);
extern void func_02056844(void* p);
void* func_ov002_021b2044(u8* s) {
    data_ov002_021d7954--;
    func_020059cc(s + 0x8C);
    func_02056db0(s);
    func_02056844(s);
    return s;
}
