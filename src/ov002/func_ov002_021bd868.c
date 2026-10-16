/* cflags: -lang c++ */
/* From arcnid/ffc-decomp src/battle/mask_change_notify_021bd868.cpp, externs renamed. */
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

/* Matched 021BD868 (size 0x268, -O4,p). Multi-function unit:
   021BD868: mask-change notifier — saves old mask at s+0xB0, stores new, copies/zeros
     0x10 bytes at s+0xB4, then for rising bits: per-slot virtual a10 + string notify +
     clear s+0xC4+i*4; builds event obj via func_0203b95c(g.f8,...), virtual c3(Pair from
     b4 sret)/c8(2)/c15(1), posts 0x430; for falling bits: same with a11/c15(2)/0x431
     and old mask. Param mutation s+=0x14 before final call.
   021BDAC8: getter — return *(u32*)(s+0xB0).
   Key idioms: alias-local Str* tp = &t pins &t in r7 (fixes push set);
   explicit i=0 before tp=&t orders the preheader; s + i*4 + 0x8C association
   (not s + 0x8C + i*4) prevents base hoist; real C++ virtuals (.cpp) for
   r0-first vtable loads; c3((...)->b4()) inline sret arg. */

typedef struct Pair { u32 a, b; } Pair;
typedef struct { u32 a, b, c; } Str;

struct A {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
    virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7();
    virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11();
};

struct B {
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
    virtual Pair b4();
};

struct C {
    virtual void c0(); virtual void c1(); virtual void c2();
    virtual void c3(Pair p);
    virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
    virtual void c8(u32 x);
    virtual void c9(); virtual void c10(); virtual void c11(); virtual void c12();
    virtual void c13(); virtual void c14();
    virtual void c15(u32 x);
};

extern "C" {
void func_020849f4(void* src, void* dst, u32 n);
void func_020849e0(u32 z, void* dst, u32 n);
void func_02005988(Str* t, void* lit);
void func_020059cc(Str* t);
void func_02068ddc(A* o, Str* t);
C* func_0203b95c(u32 a, u32 b, u32 c, u32 d);
u32 func_02021610(u32 a, u32 b);
u32 func_02062a30(void* o);
u32 func_02062a54(void* o);
u32 func_020655dc(void* o, u32 a, u32 b);
u32 func_020655b8(void* o);
u32 func_02056aec(void* o);
void func_02056bc0(void* dst, u32 v);
extern u32 data_ov002_021d6c9c[];
struct GS { u32 f0; u32 f4; u32 f8; u32 fC; };
extern GS data_ov002_021d6bdc;
void func_ov002_021bd868(u8* s, u32 nv, void* src);
static u32 f_021BDAC8(u8* s);
}

void func_ov002_021bd868(u8* s, u32 nv, void* src)
{
    u32 old;
    u32 diff;
    Str t;
    s32 i;
    u32 fall;
    C* c;

    old = *(u32*)(s + 0xB0);
    *(u32*)(s + 0xB0) = nv;
    if (src) {
        func_020849f4(src, s + 0xB4, 0x10);
    } else {
        func_020849e0(0, s + 0xB4, 0x10);
    }
    diff = old ^ *(u32*)(s + 0xB0);
    if (diff & *(u32*)(s + 0xB0)) {
        i = 0;
        Str* tp = &t;
        for (; i < 4; i++) {
            if ((1 << i) & (diff & *(u32*)(s + 0xB0))) {
                A* o = *(A**)(s + i * 4 + 0x8C);
                o->a10();
                func_02005988(tp, data_ov002_021d6c9c);
                func_02068ddc(*(A**)(s + i * 4 + 0x8C), tp);
                func_020059cc(tp);
                *(u32*)(s + i * 4 + 0xC4) = 0;
            }
        }
        c = func_0203b95c(data_ov002_021d6bdc.f8, *(u32*)(s + 0x84), 0, 1);
        c->c3((*(B**)(s + 0x80))->b4());
        c->c8(2);
        c->c15(1);
        func_02056bc0(s + 0x48, (u32)c);
        func_02056bc0(s + 0x14, func_02021610(0x430, 0));
        func_02056bc0(s + 0x14, func_02062a30(c));
        func_02056bc0(s + 0x14, func_020655dc(c, *(u32*)(s + 0xB0), 0));
        func_02056bc0(s + 0x14, func_020655b8(c));
        func_02056bc0(s + 0x14, func_02056aec(c));
    }
    if (*(u32*)(s + 0xB0) != 0) {
        func_02056bc0(s + 0x14, func_02062a30(*(void**)(s + 0x80)));
        func_02056bc0(s + 0x14, func_020655dc(*(void**)(s + 0x80), *(u32*)(s + 0xB0), 0));
    } else {
        func_02056bc0(s + 0x14, func_02062a54(*(void**)(s + 0x80)));
    }
    fall = diff & old;
    if (fall) {
        for (i = 0; i < 4; i++) {
            if ((1 << i) & fall) {
                (*(A**)(s + i * 4 + 0x8C))->a11();
            }
        }
        c = func_0203b95c(data_ov002_021d6bdc.fC, *(u32*)(s + 0x84), 0, 1);
        c->c3((*(B**)(s + 0x80))->b4());
        c->c8(2);
        c->c15(2);
        func_02056bc0(s + 0x48, (u32)c);
        func_02056bc0(s + 0x14, func_02021610(0x431, 0));
        func_02056bc0(s + 0x14, func_02062a30(c));
        func_02056bc0(s + 0x14, func_020655dc(c, old, 0));
        func_02056bc0(s + 0x14, func_020655b8(c));
        s += 0x14;
        func_02056bc0(s, func_02056aec(c));
    }
}

static u32 f_021BDAC8(u8* s)
{
    return *(u32*)(s + 0xB0);
}
