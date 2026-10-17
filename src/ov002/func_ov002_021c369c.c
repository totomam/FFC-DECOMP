/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_six_call.c, externs renamed. */
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


extern void func_02061344(u32 ptr);
extern void func_0205d620(void* ptr);
extern void func_02063530(void* ptr);
extern void func_0205d620(void* ptr);
extern void func_02056db0(void* self);
extern void func_02056844(void* self);

void* func_ov002_021c369c(void* self)
{
    *(u32*)self = 0x021D7218;
    func_02061344(*(u32*)((u8*)self + 0x130));
    func_0205d620((u8*)self + 0xF8);
    func_02063530((u8*)self + 0xF4);
    func_0205d620((u8*)self + 0x98);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
