/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/f_021B0C08.c, externs renamed. */
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


extern u32 func_020655b8(u32 arg);
extern u32 func_020655dc(u32 arg, u32 a, u32 b);
extern u32 func_0203b688(void);
extern void func_02056bc0(u32 parent, u32 child);

u32 func_ov002_021b0c08(void* self)
{
    u32 a;
    u32 b;
    u32 c;
    a = func_020655b8(*(u32*)((u8*)self + 0x128));
    b = func_020655dc(*(u32*)((u8*)self + 0x128), 9, 0);
    c = func_0203b688();
    func_02056bc0(c, b);
    func_02056bc0(c, a);
    return c;
}
