/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_ctor_021BD580.c, externs renamed. */
/* 021BD580 size=0x1A */
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

extern void func_0209d02c(void* p, u32 a, u32 b, void* vt);
extern void func_02056db0(void* self);
void* func_ov002_021bd580(void* self)
{
    func_0209d02c((u8*)self + 0x8C, 2, 0x1C, (void*)0x021BC991);
    func_02056db0(self);
    return self;
}
