/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vec_sum6_boundary_scan_021D0EB8.c, externs renamed. */
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

/* Matched: 021D0EB8, size 0x8C (0x8A code + 2B pad), -O4,p.
   Scans vector (v) of entries comparing sum of 6 words at +0x14 between
   consecutive elements; counts transitions. d==0 mode: return idx when
   changes == c at loop top; d!=0 mode: return idx when changes > c after a
   transition. Falls through to count-1.
   Match keys: while-loop (duplicated guard, bls tell) at -O4,p; count field
   reloads via volatile reads; static inline sum6 helper expanded twice
   (r5/r2 sum regalloc); c/d params copied into a local struct with the d
   store VOLATILE to pin spill order str r3 / ldr count / str r2. */
extern u8* func_ov002_021d2aa0(void* v, u32 i);

static inline s32 sum6(u8* p) {
    s32 s;
    s32 i;
    s = 0;
    for (i = 0; i < 6; i++) {
        s += *(s32*)(p + i * 4 + 0x14);
    }
    return s;
}

u32 func_ov002_021d0eb8(void* self, u8* v, s32 cp, s32 dp) {
    struct { s32 c; s32 d; } t;
    s32 changes;
    u32 idx;
    s32 s1;
    s32 s2;
    *(volatile s32*)&t.d = dp;
    t.c = cp;
    changes = 0;
    idx = 0;
    while (idx < *(volatile u32*)(v + 4)) {
            if (t.d == 0) {
                if (changes == t.c) {
                    return idx;
                }
            }
            if (idx + 1 < *(volatile u32*)(v + 4)) {
                s1 = sum6(func_ov002_021d2aa0(v, idx));
                s2 = sum6(func_ov002_021d2aa0(v, idx + 1));
                if (s1 != s2) {
                    changes++;
                    if (t.d != 0) {
                        if (changes > t.c) {
                            return idx;
                        }
                    }
                }
            }
        idx++;
    }
    return *(volatile u32*)(v + 4) - 1;
}
