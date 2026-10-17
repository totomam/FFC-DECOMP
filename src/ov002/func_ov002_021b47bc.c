/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/cond_call_4args.c, externs renamed. */
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


/* 021B47BC — conditional 4-arg call based on second param */

extern void func_ov002_021b4548(u32, void*, u32, s32);
extern void func_ov002_021b47e4(void*);

void func_ov002_021b47bc(void* self, u32 arg2)
{
    if (arg2 != 0) {
        func_ov002_021b4548(*(u32*)((u8*)self + 0xAC), self, 8, -2);
    }
    func_ov002_021b47e4(self);
}
