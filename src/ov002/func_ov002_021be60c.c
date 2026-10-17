/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vivosaur.c, externs renamed. */
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


u32 func_ov002_021be60c(Vivosaur* viv)
{
    return *(u32*)((u8*)viv + 0xC0);
}

static u32 Vivosaur_GetStatC4(Vivosaur* viv)
{
    return *(u32*)((u8*)viv + 0xC4);
}

static u32 Vivosaur_GetStatC8(Vivosaur* viv)
{
    return *(u32*)((u8*)viv + 0xC8);
}

static u32 Vivosaur_GetStatCC(Vivosaur* viv)
{
    return *(u32*)((u8*)viv + 0xCC);
}

static void Vivosaur_SetStatD0(Vivosaur* viv, u32 val)
{
    *(u32*)((u8*)viv + 0xD0) = val;
}

static void Vivosaur_ClearStatD4(Vivosaur* viv)
{
    *(u32*)((u8*)viv + 0xD4) = 0;
}

static void* Vivosaur_GetAbilityPtr(Vivosaur* viv)
{
    return (u8*)viv + 0x190;
}
