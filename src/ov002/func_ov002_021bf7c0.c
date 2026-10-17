/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/store_byte_cond_021BF7C0.c, externs renamed. */
/* 021BF7C0 size=0x20 */
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

extern u32 func_ov002_02198d34(void* p);
extern void func_02021380(u32 x);
void func_ov002_021bf7c0(void* self, u8 b)
{
    *(u8*)((u8*)self + 0x1C8) = b;
    if (b != 0)
    {
        if (func_ov002_02198d34(*(void**)((u8*)self + 0xBC)) == 0)
        {
            func_02021380(0);
        }
    }
}
