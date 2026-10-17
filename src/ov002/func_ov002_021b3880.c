/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/cond_call_e0_1b.c, externs renamed. */
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


/* 021B3880 — call init, check field 0xE0 with param 0x1B, conditional call at 0x14 */

extern void func_ov002_021b3dd0(void*);
extern u32 func_ov002_02198d78(u32);
extern u32 func_ov002_021c5ad4(u32, u32, u32);
extern void func_02056bc0(void*, u32);

void func_ov002_021b3880(void* self)
{
    u32 val;

    func_ov002_021b3dd0(self);
    val = func_ov002_021c5ad4(func_ov002_02198d78(*(u32*)((u8*)self + 0xE0)), 0x1B, 0);
    if (val != 0) {
        func_02056bc0((void*)((u8*)self + 0x14), val);
    }
}
