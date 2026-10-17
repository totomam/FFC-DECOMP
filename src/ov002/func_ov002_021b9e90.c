/* cflags:  */
/* From arcnid/ffc-decomp src/battle/virt_pair_stack_9e90.c, externs renamed. */
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

/* Matched: 021B9E90 (34B) — REQUIRES -O4,p. BL 0205729C, slot3 with stack-built Pair from self+0x34/0x38, obj at self+0x54; &t cast keeps temp in memory */
typedef struct { u32 a; u32 b; } Pair;
typedef void (*Fn3)(void*, Pair);
extern void func_0205729c(void*);
void func_ov002_021b9e90(void* self) {
    Pair t;
    void* o;
    func_0205729c(self);
    t.a = *(u32*)((u8*)self + 0x34);
    t.b = *(u32*)((u8*)self + 0x38);
    o = *(void**)((u8*)self + 0x54);
    (*(Fn3**)o)[3](o, *(Pair*)(void*)&t);
}
