/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/call_chain_search.c, externs renamed. */
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


extern void func_0203397c(void* self);
extern u32 func_ov002_02198d78(u32 val);
extern void* func_ov002_021c5ad4(u32 val, u32 id, u32 zero);
extern void func_02056bc0(void* ptr, void* result);

void func_ov002_021b9828(void* self)
{
    void* result;

    func_0203397c(self);
    result = func_ov002_021c5ad4(func_ov002_02198d78(*(u32*)((u8*)self + 0xDC)), 0x1E, 0);
    if (result != 0)
    {
        func_02056bc0((u8*)self + 0x14, result);
    }
}
