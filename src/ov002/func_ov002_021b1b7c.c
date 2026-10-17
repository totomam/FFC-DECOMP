/* cflags:  */
/* From arcnid/ffc-decomp src/battle/pair_plus_c_copy_1b7c.c, externs renamed. */
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


/* 021B1B7C, size 0x1C: fill 8-byte pair via out-call, copy to out with +0xC on first word; KEY: pointer local cast through (void*) forces base-reg addressing, u32 locals force load-load-add order; REQUIRES -O4,p */
typedef struct { u32 a; u32 b; } Pair1B7C;
extern void func_02064404(void* out);
void func_ov002_021b1b7c(Pair1B7C* out)
{
    Pair1B7C tmp;
    Pair1B7C* p = (Pair1B7C*)(void*)&tmp;
    u32 x;
    u32 y;
    func_02064404(p);
    x = p->a;
    y = p->b;
    out->a = x + 0xC;
    out->b = y;
}
