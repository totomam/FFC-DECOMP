/* cflags:  */
/* From arcnid/ffc-decomp src/battle/insertion_sort_s32desc_021CC8C8.c, externs renamed. */
/* Matched: 0x021CC8C8  size 0x6C  -O4,p
   NOTE: batch label func_021CC8CA is OFF BY 2 — real start 0x021CC8C8 (B40F prologue).
   MSL insertion sort over 8-byte {u32,s32} elements, Iter passed by value (B40F spill +
   callee-pop epilogue), comparator: signed field+4, moves while v > prev->b.
   Referenced as the n<=20 fast path by stable_sort_adaptive_cbc9c.cpp. */
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

typedef struct { u32 a; s32 b; } E;
typedef struct { E* p; } Iter;

void func_ov002_021d005c(Iter fi, Iter la, u32 comp)
{
    E* i;
    u32 flag;
    E* hole;
    s32 v;
    E* prev;
    u32 va;
    u32 zero;
    if (fi.p == la.p) return;
    i = fi.p + 1;
    if (i == la.p) return;
    zero = 0;
    do {
        prev = i - 1;
        v = i->b;
        if (v > prev->b) {
            va = i->a;
            hole = prev;
            i->a = prev->a;
            i->b = prev->b;
            goto test;
        copy:
            hole->a = prev->a;
            hole->b = prev->b;
            hole--;
        test:
            flag = zero;
            if (prev != fi.p) {
                prev--;
                if (v > prev->b) flag = 1;
            }
            if (flag != 0) goto copy;
            hole->a = va;
            hole->b = v;
        }
        i++;
    } while (i != la.p);
}
