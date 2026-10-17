/* cflags:  */
/* From arcnid/ffc-decomp src/battle/ctor_tmpobj_init_d8dc_021B993C.c, externs renamed. */
/*
 * func_ov002_021b993c - ctor: temp 12-byte object + init call, vtable 0x021D61AC,
 * stores args at +0xD8/+0xDC, returns self. Unit also contains the trailing
 * tail-call thunk func_021B997C -> func_02021338(0x43C).
 * Address: 0x021B993C  Size: 0x50  Flags: -O4,p (--O4p)
 */
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


typedef struct { u8 raw[12]; } Tmp;

extern void func_02005988(Tmp* t, void* c);
extern void func_02033940(void* self, Tmp* t, u32 a, u32 b);
extern void func_020059cc(Tmp* t);
extern u32 func_02021338(u32 x);

void* func_ov002_021b993c(u8* self, u32 b, void* c, u32 d) {
    Tmp t;
    func_02005988(&t, c);
    func_02033940(self, &t, 0, 1);
    func_020059cc(&t);
    *(u32*)self = 0x021D61AC;
    *(u32*)(self + 0xd8) = d;
    *(u32*)(self + 0xdc) = b;
    return self;
}

static u32 func_021B997C(void) {
    return func_02021338(0x43C);
}
