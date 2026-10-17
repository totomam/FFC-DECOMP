/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/f_021BABF0.c, externs renamed. */
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


extern void func_0205d620(u32);
extern void func_02056844(u32);
extern void func_02056db0(void*);

void* func_ov002_021babf0(void* self)
{
    u32 p;
    *(u32*)self = 0x021D6720;
    p = *(u32*)((u8*)self + 0x11C);
    if (p != 0) {
        if (p != 0) {
            func_0205d620(p);
            func_02056844(p);
        }
        *(u32*)((u8*)self + 0x11C) = 0;
    }
    func_02056db0(self);
    func_02056844((u32)self);
    return self;
}
