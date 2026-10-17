/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/check_2call_021BE614.c, externs renamed. */
/* 021BE614 size=0x22 */
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

extern int func_ov002_02198d08(void* a, u32 b);
extern int func_ov002_0219c60c(int x);
int func_ov002_021be614(void* self)
{
    if (func_ov002_0219c60c(func_ov002_02198d08(*(void**)((u8*)self + 0xBC), *(u32*)((u8*)self + 0x1A4))) == 0) return 2;
    return 3;
}
