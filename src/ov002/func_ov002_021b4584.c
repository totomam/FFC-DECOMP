/* cflags: -lang c++ */
/* From arcnid/ffc-decomp src/battle/virtpair_forward_notify_021B4584.cpp, externs renamed. */
/* Matched: 021B4584 size 0x74 (-O4,p, C++).
   STALE LABEL: func_021B4586 is off-by-2 — real start 021B4584 (B40F push {r0-r3}
   struct-by-value spill; duplicated callee-pop epilogues => -O4,p).
   KEYS:
   - REAL C++ virtuals required: obj loads straight into r1 only when the compiler
     sees a member call (this=r1 for the sret call); C fn-pointer modeling parks
     obj in r3 and pays an extra mov (2B over).
   - obj->v4() (struct-returning virtual, slot 4: sret ptr r0, this r1) must be
     passed INLINE as func_02062a78's argument — a named `Pair t = obj->v4();` makes an
     unelided sret temp + copy (frame 0x1C instead of 0x14).
   - mwcc vtables have no header: v0..v2 pad slots 0-2, v3 @0xC takes Pair by
     value (r1/r2), v4 @0x10 returns Pair.
   - func_02062a78(obj, Pair, Pair, u32, u32): 2nd Pair straddles r3+[sp,#0] (subs r2,sp,#4
     dance), d/e at [sp,#4]/[sp,#8] — falls out of the signature. */
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
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(Pair p);
    virtual Pair v4();
};
extern "C" void func_02056c4c(void* p);                                /* 0x2056c4c */
extern "C" u32 func_02062a78(Obj* obj, Pair t, Pair p, u32 d, u32 e);  /* 0x2062a78 */
extern "C" void func_02056bc0(void* p, u32 r);                         /* 0x2056bc0 */

extern "C" void func_ov002_021b4584(u8* s, Pair p, u32 d, u32 e) {
    Obj* obj;
    func_02056c4c(*(void**)(s + 0x14C));
    obj = *(Obj**)(s + 0xF0);
    if (obj != 0) {
        if (d != 0) {
            func_02056bc0(*(void**)(s + 0x14C), func_02062a78(*(Obj**)(s + 0xF0), obj->v4(), p, d, e));
        } else {
            obj->v3(p);
        }
    }
}
