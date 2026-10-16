/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vec48_erase_021D2AC4.c, externs renamed. */
/* Matched: 021D2AC4 size 0x74 (-O4,p). Multi-function unit:
   - 021D2AC4: std::vector<T48>::erase(pos), 0x30-byte elements
   - 021D2B30: count-decrement helper (v->count -= n) after 2B alignment pad
   Recipe follows vec12_erase_021BD4F8.c:
   - phantom division frame word: element-count division = EXTERN helper
     (0x0209A76C) taking a ONE-WORD struct by value; guard (Div(...) - 1 != 0).
   - copy loop MEMBERWISE; the 24-byte Inner member assign unrolls to
     ldmia/stmia x3 at -O4,p (5 leading + 1 trailing word memberwise).
   - KEY DELTA vs vec12: src must derive from dst (dst = pos; src = dst + 1;) —
     `src = pos + 1` reloads the spilled pos twice (3-byte diff). */
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

typedef struct { u32 x[6]; } Inner48;
typedef struct { u32 a, b, c, d, e; Inner48 s; u32 f; } T48; /* 0x30 bytes */
typedef struct { u32 n; } D48;
typedef struct { T48* data; u32 count; u32 cap; } Vec48;
extern u32 func_0209a76c(D48 n, u32 d);

T48* func_ov002_021d2ac4(Vec48* v, T48* pos) {
    D48 dd;
    T48* dst;
    T48* src;
    T48* end = v->data + v->count;
    dd.n = (u32)((u8*)end - (u8*)pos);
    if (func_0209a76c(dd, 0x30) - 1 != 0) {
        dst = pos;
        src = dst + 1;
        if (src < end) {
            do {
                dst->a = src->a;
                dst->b = src->b;
                dst->c = src->c;
                dst->d = src->d;
                dst->e = src->e;
                dst->s = src->s;
                dst->f = src->f;
                src++; dst++;
            } while (src < end);
        }
    }
    v->count = v->count - 1;
    return pos;
}
static void Vec48SubCount_021D2B30(Vec48* v, u32 n) {
    v->count = v->count - n;
}
