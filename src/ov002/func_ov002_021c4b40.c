/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/chain3_cmp_021C4B40.c, externs renamed. */
/* 021C4B40 size=0x1E */
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

extern int func_ov002_02198dec(void* p);
extern int func_ov002_0219f4c0(int x);
extern int func_ov002_021c38a0(int x);
int func_ov002_021c4b40(void* self)
{
    int r;
    r = func_ov002_021c38a0(func_ov002_0219f4c0(func_ov002_02198dec(*(void**)((u8*)self + 0xF0))));
    if (r == 0) return 1;
    return 0;
}
