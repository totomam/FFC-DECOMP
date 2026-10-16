/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vec_push_cap_then_call_021A4748.c, externs renamed. */
/* Matched 021A4748 (104 bytes, -O4 and -O4,p both match).
 * Builds a zero-init local vector; if a2->f4 != a2->f8, push_back(a2->f8)
 * (inlined; fast path is dead code because count==cap==0 const-props to
 * cmp r1,r1). Then func_ov002_021a47b0(a0,a1,a2,a3,&v,a4.b) [021A47B0] and func_0200d5ec(&v)
 * [0200D5EC]. func_0200d5d4 = 0200D5D4.
 * Keys: the "hoisted zero" for the Al strb is the vector zero-init constant
 * still live in r1 (cross-statement constant CSE) — no wave-4 C++ needed;
 * old arr2[2]+volatile-Al-pointer shape works in plain C here.
 * Dead fast-path store needs *(volatile u32*)&a2->f8 to force the 68A0
 * reload (volatile-second-load defeats identical-tree CSE).
 * 5th param is a 1-byte struct by value (add sp,#0x30 + ldrb tell);
 * forwarded to func_ov002_021a47b0 as u32 (a4.b) -> word store to outgoing [sp+4].
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

typedef struct { u8 b; } Al;
typedef struct { u32* data; u32 count; u32 cap; } Vec;
typedef struct { u32 f0; u32 f4; u32 f8; } Obj;
extern void func_0200d5d4(Vec*, u32*, Al);
extern void func_ov002_021a47b0(void*, void*, Obj*, void*, Vec*, u32);
extern void func_0200d5ec(Vec*);
void func_ov002_021a4748(void* a0, void* a1, Obj* a2, void* a3, Al a4) {
    Al arr2[2];
    Vec v;
    v.data = 0;
    v.count = 0;
    v.cap = 0;
    if (a2->f4 != a2->f8) {
        if (v.count < v.cap) {
            v.count = v.count + 1;
            v.data[v.count - 1] = *(volatile u32*)&a2->f8;
        } else {
            Al* q = arr2 + 1;
            ((volatile Al*)q)->b = 0;
            func_0200d5d4(&v, &a2->f8, *q);
        }
    }
    func_ov002_021a47b0(a0, a1, a2, a3, &v, a4.b);
    func_0200d5ec(&v);
}
