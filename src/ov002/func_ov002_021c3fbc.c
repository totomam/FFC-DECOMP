/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/sbv_store_call_021C3FBC.c, externs renamed. */
/* 021C3FBC size=0x1C (batch listed 021C3FBE:26; real start -2 for B40F arg-spill) */
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

typedef struct { u32 m0, m4, m8, mc; } S16;
extern void func_02068580(void* a, u32 b);
void func_ov002_021c3fbc(void* self, S16 s)
{
    u32 v;
    v = s.m0;
    *(u32*)((u8*)self + 0xF0) = v;
    func_02068580(*(void**)((u8*)self + 0xE0), v);
}
