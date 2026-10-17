/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/cross_call_e0.c, externs renamed. */
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

extern u32 func_ov002_02198d14(u32);
extern void func_ov002_0219c5d8(u32, u32);
void func_ov002_021b444c(void* self, u32 unused, u32 arg2) {
    func_ov002_0219c5d8(func_ov002_02198d14(*(u32*)((u8*)self + 0xE0)), arg2);
}
