/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/cond_status_call.c, externs renamed. */
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


extern void func_020696f0(u32 val);
extern void func_020696f8(u32 val);

void func_ov002_021b9780(void* obj)
{
    if (*(u8*)((u8*)obj + 0x18) != 0)
    {
        func_020696f0(*(u32*)((u8*)obj + 0x14));
    }
    else
    {
        func_020696f8(*(u32*)((u8*)obj + 0x14));
    }
    *(u32*)((u8*)obj + 0xC) = (*(u32*)((u8*)obj + 0xC) & ~0xFF) | 2;
}
