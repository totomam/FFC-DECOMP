/* cflags:  */
/* From arcnid/ffc-decomp src/battle/alloc98_forward5.c, externs renamed. */
/* 0x021B1F64 (44 bytes) -O4,p */
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

extern void* func_0205681c(int);
extern void func_ov002_021b18fc(void* r, void* a0, u32 a1, u32 a2, u32 a3, u32 a4);
void func_ov002_021b1f64(void* a0, u32 a1, u32 a2, u32 a3, u8 a4) {
    void* r;
    r = func_0205681c(0x98);
    if (r != 0) {
        func_ov002_021b18fc(r, a0, a1, a2, a3, a4);
    }
}
