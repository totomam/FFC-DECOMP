/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/cond_dc_two_pairs.c, externs renamed. */
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


extern u32 func_ov002_02198e60(u32 val);
extern u32 func_02033bd4(void* self, u32 flag);
extern void func_020692f0(u32 val);
extern u32 func_02033bd4(void* self, u32 flag);
extern void func_02069300(u32 val);

void func_ov002_021b9910(void* self)
{
    if (func_ov002_02198e60(*(u32*)((u8*)self + 0xDC)) != 0)
    {
        func_020692f0(func_02033bd4(self, 1));
        func_02069300(func_02033bd4(self, 1));
    }
}
