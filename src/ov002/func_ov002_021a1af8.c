/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vec_push_pair_transform2_021a1af8.c, externs renamed. */
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

/* Matched: 021A1AF8, size 0x7C, -O4,p.
   Push pair into vector at self+0xB8 {data,count,cap}: if (b && c),
   pr = func_ov002_021a10d4(func_ov002_021aa778(b) 0x21AA778, func_ov002_021aa778(c)), then inline
   vector<Pair>::push_back: fast path count++/data[count-1]=pr (memberwise
   via dst-pointer dp), slow path func_ov002_021a51e4 0x21A51E4 (v, &pr, Al byte-struct
   by value, zero staged at sp+0, arg copy below sp).
   KEYS (zero-hoist blocker CRACKED here):
   - #pragma opt_propagation off + plain `zv = 0;` placed before the
     count/cap if reproduces the hoisted `movs r0,#0` BETWEEN the cap load
     and the cmp (the C++ allocator-temp-ctor hoist); else-arm does
     a.b = (u8)zv. Without the pragma the zero folds into the else block.
   - Pair* pp = &pr assigned AFTER tc = func_ov002_021aa778(c) (else pp needs r7,
     push set grows to B5F0).
   - volatile second count load for the reload after the cmp.
   - fast-path copy must be dst-pointer memberwise (dp->x/dp->y) under the
     pragma; whole-struct copy groups the two loads (pragma changes the
     aggregate-copy lowering). */
#pragma opt_propagation off
typedef struct { u32 x, y; } Pair;
typedef struct { u8 b; } Al;

extern u32 func_ov002_021aa778(u32);
extern void func_ov002_021a10d4(Pair* out, u32 a, u32 b);
extern void func_ov002_021a51e4(void* v, Pair* p, Al a);

void func_ov002_021a1af8(u8* s, u32 b, u32 c) {
    u32 tb;
    u32 tc;
    u32 zv;
    Pair pr;
    Pair* pp;
    if (b != 0) {
        if (c != 0) {
            tb = func_ov002_021aa778(b);
            tc = func_ov002_021aa778(c);
            pp = &pr;
            func_ov002_021a10d4(pp, tb, tc);
            zv = 0;
            if (*(u32*)(s + 0xBC) < *(u32*)(s + 0xC0)) {
                u32 n;
                n = *(volatile u32*)(s + 0xBC) + 1;
                *(u32*)(s + 0xBC) = n;
                s += 0xB8;
                {
                    Pair* dp;
                    dp = (Pair*)*(u32**)s + (n - 1);
                    dp->x = pp->x;
                    dp->y = pp->y;
                }
            } else {
                Al a;
                a.b = (u8)zv;
                s += 0xB8;
                func_ov002_021a51e4(s, pp, a);
            }
        }
    }
}
