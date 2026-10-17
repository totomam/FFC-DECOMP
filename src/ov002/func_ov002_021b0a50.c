/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vt_byval_ctor_init_021B84C4.c, externs renamed. */
/*
 * Matched: 021B84C4  size 0x1B0 (432 bytes), overlay 2  (-O4 and -O4,p both match)
 * Multi-function unit:
 *   - func_021B84C4 (main, 0x15C): seeds self->0xf4 via FUN_0203b7fc(7,7,1),
 *     runs two void side-effect calls, pushes *(self+0xf4) via the generic
 *     "push value" helper FUN_02056bc0(self+0x48, ...). If self->0xc0==0 and
 *     a lookup object (obj1) is non-null, builds two "node" objects via
 *     func_ov002_021b0a50 (byte-struct/Pair-by-value ctor family) from two global
 *     Pair literals and interleaves them with alloc+init calls, all pushed
 *     through self+0x14. Then constructs two temp Str objects (CtorStr
 *     2-arg variant FUN_02019548) from the SAME global value, runs D() on
 *     each, and does one final combining call, then runs the standard
 *     inlined-destructor teardown (if(p4){if(fC) E(p4,l8); Free(p4);} G(&tmp);)
 *     on both temps before setting a byte flag at self+0x130.
 *   - func_ov002_021b0a50 (0x3A): B40F byte/Pair-by-value ctor -- Alloc(0x94); if
 *     non-null: Init(q,0); vtbl store; q->0x84=a1; *(Pair*)(q+0x88)=pr
 *     (WHOLE-struct copy -- needed to get the lazy load-right-before-store
 *     scheduling of pr.x/pr.y that separate field stores do not reproduce);
 *     q->0x90=flag (byte). callee-pop epilogue auto-falls out of the by-value
 *     Pair param.
 *   - FUN_021b8668 (6B leaf, no push): return *(void**)(o+0xf4).
 * KEY fixes vs naive translation: declare tmpA before tmpB (first-declared
 * struct local gets the HIGHER sp slot) and alias each via a Str* (tA/tB)
 * used only for the ctor-call/teardown accesses -- the mid-function D()-call
 * field reads stay plain sp-relative. Whole-Pair store (not memberwise)
 * in func_ov002_021b0a50 is required for the exact scheduling.
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


typedef struct { u32 x, y; } Pair;
typedef struct { u32 a0; void* p4; u32 l8; u8 fC; u8 pad[3]; } Str;

extern u32 FUN_0203b7fc(u32, u32, u32);
extern void FUN_021b947c(void*);
extern void FUN_021b9514(void*);
extern void FUN_02056bc0(void*, u32);
extern u32 FUN_02198d78(u32);
extern void* FUN_021c5ad4(u32, u32, u32);
extern void* func_0205681c(u32);
extern u32 FUN_021b9764(void*, void*, u32);
extern u32 FUN_0203b720(void);
extern void FUN_02019548(Str*, u32);
extern void* FUN_02052d90(void*, u32);
extern u32 FUN_020696e8(void*);
extern void FUN_020576c8(u32, u32, u32, u32);
extern void FUN_02052d3c(void*, u32);
extern void FUN_02052c04(void*);
extern void FUN_02053290(Str*);

extern Pair gPairLit1;
extern Pair gPairLit2;
extern u32 gGlobalVal;

extern void* func_ov002_021b0a50(void* a1, Pair pr, u8 flag);
extern void func_02056c9c(void*, u32);
extern u32 data_ov002_021d54c0;

static void func_021B84C4(u8* self)
{
    void* obj1;
    void* obj2;
    void* obj3;
    void* allocR;
    u32 r1v;
    Str tmpA;
    Str tmpB;
    Str* tB;
    Str* tA;
    void* dB;
    void* dA;
    u32 valX;
    u32 val4;

    *(u32*)(self + 0xf4) = FUN_0203b7fc(7, 7, 1);
    FUN_021b947c(self);
    FUN_021b9514(self);
    FUN_02056bc0(self + 0x48, *(u32*)(self + 0xf4));

    if (*(u32*)(self + 0xc0) == 0) {
        obj1 = FUN_021c5ad4(FUN_02198d78(*(u32*)(self + 0xbc)), 2, 0);
        if (obj1 != 0) {
            obj2 = func_ov002_021b0a50(self, gPairLit1, 0);
            FUN_02056bc0(self + 0x14, (u32)obj2);

            allocR = func_0205681c(0x1c);
            r1v = (u32)allocR;
            if (allocR != 0) {
                r1v = FUN_021b9764(allocR, self, 0);
            }
            FUN_02056bc0(self + 0x14, r1v);

            r1v = FUN_0203b720();
            FUN_02056bc0(self + 0x14, r1v);

            FUN_02056bc0(self + 0x14, (u32)obj1);

            allocR = func_0205681c(0x1c);
            r1v = (u32)allocR;
            if (allocR != 0) {
                r1v = FUN_021b9764(allocR, self, 1);
            }
            FUN_02056bc0(self + 0x14, r1v);

            obj3 = func_ov002_021b0a50(self, gPairLit2, 1);
            FUN_02056bc0(self + 0x14, (u32)obj3);
        }
    }

    FUN_02019548(&tmpA, gGlobalVal);
    tB = &tmpB;
    FUN_02019548(tB, gGlobalVal);

    dB = FUN_02052d90(tmpB.p4, tmpB.l8);
    valX = *(u16*)((u8*)dB + 8);

    dA = FUN_02052d90(tmpA.p4, tmpA.l8);

    val4 = FUN_020696e8(self);
    FUN_020576c8(val4, 0xf0, *(u16*)((u8*)dA + 6), valX);

    if (tmpB.p4) {
        if (tB->fC) FUN_02052d3c(tB->p4, tB->l8);
        FUN_02052c04(tB->p4);
    }
    FUN_02053290(tB);

    tA = &tmpA;
    if (tmpA.p4) {
        if (tA->fC) FUN_02052d3c(tA->p4, tA->l8);
        FUN_02052c04(tA->p4);
    }
    FUN_02053290(tA);

    *(u8*)(self + 0x130) = 1;
}

void* func_ov002_021b0a50(void* a1, Pair pr, u8 flag)
{
    u8* q = (u8*)func_0205681c(0x94);
    if (q != 0) {
        func_02056c9c(q, 0);
        *(u32*)q = (u32)&data_ov002_021d54c0;
        *(void**)(q + 0x84) = a1;
        *(Pair*)(q + 0x88) = pr;
        *(u8*)(q + 0x90) = flag;
    }
    return q;
}

static void* FUN_021b8668(void* o)
{
    return *(void**)((u8*)o + 0xf4);
}
