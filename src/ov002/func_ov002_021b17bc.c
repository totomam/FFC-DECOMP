/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_sub1c_021B17BC.c, externs renamed. */
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


/* 021B17BC (size 0x14, -O4) — dtor-like: A(s+0x1C); B(s); return s */
extern void func_020059cc(void* p);
extern void func_02056844(void* p);

void* func_ov002_021b17bc(void* s) {
    func_020059cc((u8*)s + 0x1C);
    func_02056844(s);
    return s;
}
