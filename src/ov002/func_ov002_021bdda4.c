/* cflags:  */
/* From arcnid/ffc-decomp src/battle/spawn_children_pairs_021BDDA4.c, externs renamed. */
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

/* Matched 021BDDA4 size 0x98 (-O4,p).
   Spawns func_ov002_021bde3c children (3 indexed + 1 at +0xF0) with global Pairs,
   adds them to mgr; returns mgr. Batch label said size 0xD8 — the tail
   (021BDE3C B40F ctor + pool) is already matched in alloc90_ctor_pair_021BDE3C.c.
   Keys: i=0 hoisted before base calc (forces idx spill), 0x1C*(idx+idx*2)
   to defeat constant folding. */
typedef struct { u32 x, y; } Pair;
extern void* func_0203b6fc(void);
extern void* func_ov002_021bde3c(void* a1, Pair pr);
extern void func_02056bc0(void* m, void* c);
extern Pair data_ov002_021d6eb4;
extern Pair data_ov002_021d6ebc;
extern Pair data_ov002_021d6ec4;
extern Pair data_ov002_021d6ecc;

void* func_ov002_021bdda4(u8* s, u32 idx, u32 c)
{
    void* m;
    u8* base;
    s32 i;

    m = func_0203b6fc();
    i = 0;
    base = s + 0x1C * (idx + idx * 2);
    do {
        if (c != 0) {
            if (*(u8*)(base + i * 0x1C + 0x110) != 0) {
                func_02056bc0(m, func_ov002_021bde3c(*(void**)(s + 0xE0 + i * 4), data_ov002_021d6eb4));
            }
        } else {
            func_02056bc0(m, func_ov002_021bde3c(*(void**)(s + 0xE0 + i * 4), data_ov002_021d6ebc));
        }
        i++;
    } while (i < 3);
    if (c != 0) {
        func_02056bc0(m, func_ov002_021bde3c(*(void**)(s + 0xF0), data_ov002_021d6ec4));
    } else {
        func_02056bc0(m, func_ov002_021bde3c(*(void**)(s + 0xF0), data_ov002_021d6ecc));
    }
    return m;
}
