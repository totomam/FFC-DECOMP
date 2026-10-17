/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_zero_94_98_9c_call.c, externs renamed. */
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


/* 021B58A4 — parent init + zero fields 0x94, 0x98, 0x9C + extra call */

extern void* func_0206927c(void*);
extern void func_02056844(void*);

void* func_ov002_021b58a4(void* self)
{
    func_0206927c(self);
    *(u32*)((u8*)self + 0x94) = 0;
    *(u32*)((u8*)self + 0x98) = 0;
    *(u32*)((u8*)self + 0x9C) = 0;
    func_02056844(self);
    return self;
}
