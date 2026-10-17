/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor3_membere4_021B7F04.c, externs renamed. */
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


/* 021B7F04 (size 0x20, -O4) — dtor: SubA(self+0xE4), SubB(self), SubC(self), return self */
extern void func_02035fd0(void*);
extern void func_020695d0(void*);
extern void func_02056844(void*);
void* func_ov002_021b7f04(void* self)
{
    func_02035fd0((u8*)self + 0xE4);
    func_020695d0(self);
    func_02056844(self);
    return self;
}
