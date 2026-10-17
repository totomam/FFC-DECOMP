/* cflags:  */
/* From arcnid/ffc-decomp src/battle/ctor_init_pairs_gate16_021B9E40.c, externs renamed. */
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

/* Matched: 021B9E40 (size 0x50, -O4,p). Batch addr 021B9E42 is off-by-2 (B40F
   struct-spill prologue precedes the push). Callee of the alloc58 forwarder
   family (021BA614/021BA83C). Init(p, Pair a, Pair b) with b straddling
   r3/stack, then vtbl 0x021D6490 + field init; if byte +0x15 set, +0x1c gets
   1 (e==0) or e<<4 — per-arm STORES (tail-merged str), not a value ternary
   (that if-converts and drops the diamond). Callee-pop epilogue. */
typedef struct { u32 x, y; } Pair;
extern void func_02057210(void* p, Pair a, Pair b);
void* func_ov002_021b9e40(void* p, u32 h, Pair a, Pair b, u32 e, u32 f4) {
    func_02057210(p, a, b);
    *(u32*)p = 0x021D6490;
    *(u32*)((u8*)p + 0x54) = h;
    *(u32*)((u8*)p + 0x30) = f4;
    *(u32*)((u8*)p + 0x24) = e;
    if (*(u8*)((u8*)p + 0x15) != 0) {
        if (e == 0) *(u32*)((u8*)p + 0x1c) = 1;
        else *(u32*)((u8*)p + 0x1c) = e << 4;
    }
    return p;
}
