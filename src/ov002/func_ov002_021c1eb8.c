/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/cond_flag_setup.c, externs renamed. */
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


extern void func_02022ca4(u32 val, u32 flag);
extern void func_0202ef94(u32 val);

void func_ov002_021c1eb8(void* self, u32 arg)
{
    u32 flag = 0;
    *(u8*)((u8*)self + 0xAC) = 0;
    if (arg != 3)
    {
        if (arg == 1)
        {
            flag = 1;
        }
        func_02022ca4(*(u32*)((u8*)self + 0x90), flag);
    }
    func_0202ef94(*(u32*)((u8*)self + 0x88));
}
