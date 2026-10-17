/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_vtable_cond_release.c, externs renamed. */
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
extern void func_ov002_021c2f9c(void* ptr);
extern void func_020059cc(void* ptr);
extern void func_02056db0(void* self);

void* func_ov002_021c29d0(void* self)
{
    *(u32*)self = 0x021D70F8;
    if (*(u32*)((u8*)self + 0xAC) != 0)
    {
        func_02061344(*(u32*)((u8*)self + 0xAC));
        *(u32*)((u8*)self + 0xAC) = 0;
    }
    func_ov002_021c2f9c((u8*)self + 0xA0);
    func_020059cc((u8*)self + 0x80);
    func_02056db0(self);
    return self;
}
