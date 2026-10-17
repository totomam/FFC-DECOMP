/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/ctor94_pair_flag_021B3BD8.c, externs renamed. */
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

/* Matched: 021B3BD8 (true entry incl push{r0-r3} arg spill; asm label func_021B3BDA is off by 2), 0x48/72B, -O4.
   Callee-pop ctor body: Base(self); vtable; a1 -> +0x94, Pair-by-value memberwise -> +0x98/+0x9C;
   F2(self,1); if (flag) F3(self, flag) — flag (5th arg, stack) passed through as 2nd arg,
   which is what forces the ldr into r1. */
typedef struct { u32 x, y; } Pair;
extern void func_02069210(void*);
extern void func_02069328(void*, u32);
extern void func_02069320(void*, u32);
extern u32 data_ov002_021d5b7c[];
void* func_ov002_021b3bd8(void* self, u32 a, Pair p, u32 flag) {
    func_02069210(self);
    *(u32*)self = (u32)data_ov002_021d5b7c;
    *(u32*)((u8*)self + 0x94) = a;
    *(u32*)((u8*)self + 0x98) = p.x;
    *(u32*)((u8*)self + 0x9C) = p.y;
    func_02069328(self, 1);
    if (flag != 0) {
        func_02069320(self, flag);
    }
    return self;
}
