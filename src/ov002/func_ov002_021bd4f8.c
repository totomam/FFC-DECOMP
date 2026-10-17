/* cflags:  */
/* From arcnid/ffc-decomp src/battle/vec12_erase_021BD4F8.c, externs renamed. */
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

/* Matched: 021BD4F8 (size 0x4C incl trailing bx-lr stub at 021BD540, -O4,p).
   std::vector<T12>::erase(pos) for 12-byte elements. KEYS:
   - phantom sub sp,#4 = the element-count division modeled as an EXTERN helper
     (0x0209A76C) taking a ONE-WORD struct BY VALUE (mechanism-2 residue);
     writing plain pointer subtraction never produces the frame word.
   - guard written as (div(...) - 1 != 0) to get subs r0,#1 (cmp #1 is wrong).
   - copy loop is MEMBERWISE word copies (whole-struct copy goes ldmia at -O4,p).
   - declare dst BEFORE src, assign src first: gives src=r2/dst=r1 like original.
   - trailing void Stub(void){} reproduces the 4770 padding stub. */
typedef struct { u32 a, b, c; } T;
typedef struct { u32 n; } D;
typedef struct { T* data; u32 count; u32 cap; } Vec;
extern u32 func_0209a76c(D n, u32 d);
T* func_ov002_021bd4f8(Vec* v, T* pos) {
    D dd;
    T* dst;
    T* src;
    T* end = v->data + v->count;
    dd.n = (u32)((u8*)end - (u8*)pos);
    if (func_0209a76c(dd, 12) - 1 != 0) {
        src = pos + 1;
        dst = pos;
        if (src < end) {
            do {
                dst->a = src->a;
                dst->b = src->b;
                dst->c = src->c;
                src++; dst++;
            } while (src < end);
        }
    }
    v->count = v->count - 1;
    return pos;
}
static void Stub(void) {}
