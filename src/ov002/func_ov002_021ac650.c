/* cflags:  */
/* From arcnid/ffc-decomp src/battle/cond_threshold_check_021AC650.c, externs renamed. */
/*
 * 021AC650 (336 bytes / 0x150) — MATCH at -O4,p
 * python3 tools/match_func.py src/battle/cond_threshold_check_021AC650.c 021AC650 150 --O4p
 *
 * Status/threshold check: flag gates (0x40/1), ctx offset deref, mode-0x0b
 * percent compare, then a.v-vs-fetched-threshold branch into either a
 * ret1/ret2 arm or an S20 teardown arm.
 *
 * KEY MATCH LEVER: the a.v < b1c compare must load b1c FIRST (into r1) and
 * a.v SECOND (into r0) -> cmp r0,r1; blt. Only reachable by pinning the b1c
 * load with a volatile read into a local:
 *     s32 lc = *(volatile s32*)&info.b1c;
 *     if ((s32)a.v < lc) goto bigskip;
 * Every plain phrasing (a.v<b1c, b1c>a.v, plain locals, subtraction) leaves
 * the loads in LHS-first order or flips the cmp operands/condition.
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


typedef struct { u32 v; } W;
typedef struct { u32 f0; u32 f4; u32 f8; u8 fc; u8 pad[3]; } S20;

extern void* func_ov002_021aa850(void* self);
extern u32 func_ov002_021a1830(void* x);
extern u32 func_ov002_021994c0(void* x, u32 mode);
extern u32 func_ov002_021a8a2c(void* x, u32 b);
extern void* func_ov002_021aac10(void* e);
extern u32 func_ov002_021aa11c(void* x, u32 n);
extern u32 func_ov002_021a1acc(u32 x);
extern u32 func_0206c184(u32 x, u32 n);
typedef struct { u8 pad0[0xc]; u32 b14; u8 pad1[4]; u32 b1c; } Info;
extern void func_ov002_021aa2c4(u32* out, void* self);
extern u32 func_02015e8c(S20* out, u32 v);
extern u32 func_ov002_021a16d4(u32 x);
extern u32 func_ov002_02195fa4(u32 x);
extern u32 func_ov002_02198758(u32 x);
extern u32 func_ov002_021c6274(u32 x);
extern void func_ov002_021a13ec(u32* out, u32 x);
extern u32 func_02052d90(u32 a, u32 b);
extern void func_02052d3c(u32 a, u32 b);
extern void func_02052c04(u32 a);
extern void func_02053290(S20* s);

extern u32 data_020b8e44;

u32 func_ov002_021ac650(void* f, u32 m, u8* ctx, void* e, W a, u32 z)
{
    void* ctxB;
    u32 flagFlag;
    S20 s20;
    Info info;
    S20* ctx2;
    void* rr;
    u32 flagVal;
    u32 val2;
    u32 off;

    ctxB = (void*)func_ov002_021a1830(func_ov002_021aa850(f));

    flagFlag = 0;
    if (func_ov002_021994c0(ctxB, 0x40) != 0) flagFlag = 1;
    if (func_ov002_021994c0(ctxB, 1) != 0) return 1;
    if (flagFlag != 0) return 0;

    off = *(u32*)(ctx + 0x14);
    if (off == 0) ctx = 0;
    else ctx = ctx + off;

    if (func_ov002_021a8a2c(func_ov002_021aa850(f), *ctx) != 0) return 1;

    if (func_ov002_021aa11c(func_ov002_021aac10(e), 0xb) != 0) {
        ctx = (u8*)func_ov002_021aac10(e);
        val2 = func_0206c184(func_ov002_021a1acc(*(u32*)((u8*)f + 0xbc)), 0x64);
        ctx = ctx + 0xa4;
        if (*(s32*)ctx > (s32)val2) return 0;
    }

    func_ov002_021aa2c4(&info.b1c, f);
    {
        s32 lc = *(volatile s32*)&info.b1c;
        if ((s32)a.v < lc) goto bigskip;
    }

    if (m == 0) goto ret1;
    val2 = func_0206c184(func_ov002_021a1acc(*(u32*)((u8*)f + 0xbc)), 0x64);
    if ((s32)z <= (s32)val2) goto ret1;
    if (func_ov002_021c6274(func_ov002_02198758(func_ov002_02195fa4(func_ov002_021a16d4((u32)func_ov002_021aa850(f))))) != 0) return 1;
    return 2;
ret1:
    return 1;

bigskip:
    func_02015e8c(&s20, data_020b8e44);

    func_ov002_021a13ec(&info.b14, (u32)func_ov002_021aa850(f));

    {
        u32 cached14 = info.b14;
        rr = (void*)func_02052d90(s20.f4, s20.f8);
        flagVal = 1;
        if (*(s32*)((u8*)rr + 0x80) < (s32)cached14) flagVal = 0;
    }

    ctx2 = &s20;
    if (s20.f4 != 0) {
        if (ctx2->fc != 0) {
            func_02052d3c(ctx2->f4, ctx2->f8);
        }
        func_02052c04(ctx2->f4);
    }
    func_02053290(ctx2);
    if (flagVal != 0) return 0;
    return 1;
}
