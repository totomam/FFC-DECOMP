/* cflags:  */
/* From arcnid/ffc-decomp src/battle/target_change_launch_021B4460.c, externs renamed. */
/* Matched: 0x021B4460  size 0xE8 (multi-function unit; compiled 230 vs 232 =
   trailing alignment pad, tool reports SIZE MISMATCH then MATCH!)
   Flags: -O4,p (outgoing-arg-only frame: push {r4,r5,r6,lr} + sub sp,#8 for
   the two stack args of func_ov002_021bb45c).
   func_ov002_021b4460: clear one-shot byte +0x150; bail if n matches +0x100/+0x104/
   +0xFC; f=func_ov002_021b45f8(s,n), +0xC8=func_ov002_021b4808(n); if +0xF4 set: when f found, func_ov002_02198d08 and
   rotated for-loop decrementing counter +0xF8 until func_ov002_021b3b74(s,cnt,f) or counter
   goes negative, then func_ov002_021bb45c(p,1,f,data_ov002_021d3c78[idx].x,1,data_ov002_021d3c78[idx].y) using adjacent
   Pair-table relocs (base 0x021D3C78, .y literal folds to base+4); else
   func_ov002_021bb45c(p,0,0,0,0,0). Finally +0xCC=func_ov002_021ae5f4(f) when f found.
   func_021B4538: trailing helper, status byte |= 2 idiom on +0xC. */
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


typedef struct { u32 x, y; } Pair;

extern Pair data_ov002_021d3c78[];   /* 0x021D3C78 */

extern void* func_ov002_021b45f8(void* s, void* n);        /* 0x021B45F8 */
extern void* func_ov002_021b4808(void* n);                  /* 0x021B4808 */
extern void func_ov002_02198d08(void* a, void* b);        /* 0x02198D08 */
extern u32 func_ov002_021b3b74(void* s, u32 idx, void* f);  /* 0x021B3B74 */
extern void func_ov002_021bb45c(void* p, u32 b, void* f, u32 tx, u32 one, u32 ty); /* 0x021BB45C */
extern void* func_ov002_021ae5f4(void* f);                  /* 0x021AE5F4 */

void func_ov002_021b4460(void* s, void* n)
{
    void* f;
    u32* q;
    s32 idx;

    if (*(u8*)((u8*)s + 0x150) != 0) {
        *(u8*)((u8*)s + 0x150) = 0;
    }
    if (n == *(void**)((u8*)s + 0x100)) {
        return;
    }
    if (n == *(void**)((u8*)s + 0x104)) {
        return;
    }
    if (n == *(void**)((u8*)s + 0xFC)) {
        return;
    }
    f = func_ov002_021b45f8(s, n);
    *(void**)((u8*)s + 0xC8) = func_ov002_021b4808(n);
    if (*(void**)((u8*)s + 0xF4) != 0) {
        if (f != 0) {
            func_ov002_02198d08(*(void**)((u8*)s + 0xE0), *(void**)((u8*)s + 0xC0));
            for (q = (u32*)((u8*)s + 0xF8); func_ov002_021b3b74(s, *(u32*)((u8*)s + 0xF8), f) == 0 && *(s32*)((u8*)s + 0xF8) >= 0; ) {
                (*q)--;
            }
            idx = *(s32*)((u8*)s + 0xF8);
            func_ov002_021bb45c(*(void**)((u8*)s + 0xF4), 1, f, data_ov002_021d3c78[idx].x, 1, data_ov002_021d3c78[idx].y);
        } else {
            func_ov002_021bb45c(*(void**)((u8*)s + 0xF4), 0, 0, 0, 0, 0);
        }
    }
    if (f != 0) {
        *(void**)((u8*)s + 0xCC) = func_ov002_021ae5f4(f);
    }
}

static void func_021B4538(void* p)
{
    *(u32*)((u8*)p + 0xC) = (*(u32*)((u8*)p + 0xC) & ~0xFF) | 2;
}
