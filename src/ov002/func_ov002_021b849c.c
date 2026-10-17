/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/four_call_offset120.c, externs renamed. */
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


extern void func_0200d5ec(void* ptr);
extern void func_ov002_021c7fb4(void* ptr);
extern void func_020695d0(void* ptr);
extern void func_02056844(void* ptr);

void* func_ov002_021b849c(void* self)
{
    func_0200d5ec((u8*)self + 0x120);
    func_ov002_021c7fb4((u8*)self + 0xB8);
    func_020695d0(self);
    func_02056844(self);
    return self;
}
