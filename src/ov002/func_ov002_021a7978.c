/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/turn_damage_sequencer_021a7978.c, externs renamed. */
/* Matched: 021A7978 size 0x2DC (732), plain -O4 (also matches -O4,p).
 * Poison/multi-hit end-of-turn damage sequencer: iterates 4 battle slots,
 * appends message objects to self+0x14 list, applies hp damage, break on KO.
 * KEYS: (u8*)self+0x14 must stay an EXPRESSION inside the loop (explicit
 * local flips the hoisted adds r4,#0x14 past the v1112 re-store); loop-
 * invariant 0x1105 constant = local u32 v1112=0x1112; v1112-=0xD; (compiler
 * synthesizes from the 0x1112 pool word shared with the else arm); stack
 * slot order fixed by declaration-position permutation (see decl order).
 * python3 tools/match_func.py <this> 021A7978 2DC */
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


typedef struct {
    u32 f0, f4, f8, fC, f10, f14, f18;
} Msg1C;

extern s32 func_ov002_021c85f8(void* p);                   /* 021C85F8 */
extern s32 func_ov002_021c85d8(void* p, u32 x);           /* 021C85D8 */
extern void* func_ov002_021a3908(void* s, u32 id);            /* 021A3908 */
extern void* func_ov002_021a1868(void* s, u32 id);            /* 021A1868 */
extern s32 func_ov002_021aa820(void* v);                        /* 021AA820 */
extern u32 func_ov002_021c8ff0(void* e);                    /* 021C8FF0 */
extern u32 func_ov002_021c9000(void* e);                  /* 021C9000 */
extern s32 func_ov002_021c8ffc(void* e);                   /* 021C8FFC */
extern void* func_ov002_021c91b4(u32 x);                        /* 021C91B4 */
extern void* func_ov002_0219acac(void* q, void* x);             /* 0219ACAC */
extern void func_02056bc0(void* l, void* n);             /* 02056BC0 */
extern s32 func_ov002_021a3a10(void* s);                    /* 021A3A10 */
extern void* func_02021610(u32 a, u32 b);                 /* 02021610 */
extern u32 func_ov002_021aa778(void* v);                       /* 021AA778 */
extern void* func_ov002_021a4360(void* s, u32 idx, u32 a, u32 b, u32 c, u32 d); /* 021A4360 */
extern void* func_ov002_021c92c0(u32 a, u32 b);                 /* 021C92C0 */
extern void* func_02055a2c(void* q, void* x);             /* 02055A2C */
extern void* func_0203b720(void);                         /* 0203B720 */
extern void* func_0205681c(u32 n);                        /* 0205681C */
extern void* func_ov002_021a2fb8(void* q, void* x);             /* 021A2FB8 */
extern void* func_ov002_021aa850(void* v);                   /* 021AA850 */
extern u32 func_ov002_021a1838(void* st);                  /* 021A1838 */
extern void* func_ov002_021a014c(void* p, void* v, s32 d, u32 z); /* 021A014C */
extern void* func_0203b738(void);                         /* 0203B738 */
extern void* func_0203bd04(u32 a, u32 b, u32 c, u32 d);   /* 0203BD04 */
extern void* func_ov002_021ab2e8(void* v, void* t, s32 d, u32 a, u32 b); /* 021AB2E8 */
extern void* func_0203b6fc(void);                         /* 0203B6FC */
extern void* func_ov002_021a4be4(void* m, void* s, u32 idx);    /* 021A4BE4 */
extern void* func_ov002_021bc13c(void);                         /* 021BC13C */
extern void* func_ov002_021a4a70(void* s, u32 a, u32 b);        /* 021A4A70 */

void func_ov002_021a7978(void* self, u32* b)
{
    u8* arr;
    s32 hp;
    void* ctx;
    u32 v1112;
    void* vivo;
    u32 i;

    if (b[5] == func_ov002_021c85f8((u8*)self + 0x144)) {
        arr = (u8*)b + 0x1C;
        ctx = func_ov002_021a3908(self, *(u32*)(arr + 0xC0));
        vivo = func_ov002_021a1868(self, b[6]);
        if (vivo != 0) {
            hp = func_ov002_021aa820(vivo);
            i = 0;
            v1112 = 0x1112;
            v1112 -= 0xD;
            do {
                u32 off;
                void* t;
                off = i * 0x30;
                t = func_ov002_021a1868(ctx, func_ov002_021c8ff0(arr + off));
                if (t != 0 && func_ov002_021c9000(arr + off) != 0 && func_ov002_021aa820(t) != 0) {
                    s32 dmg;
                    u32 sel;
                    u32 fl;
                    void* q;
                    Msg1C* p;
                    u32 base;
                    u8* t2;
                    u32 x;
                    void* r1;
                    void* m1;
                    void* m2;

                    base = func_ov002_021c85d8((u8*)self + 0x144, 0);
                    if (func_ov002_021c9000(arr + off) == 1) {
                        sel = v1112;
                    } else {
                        sel = 0x1112;
                    }
                    if (func_ov002_021c9000(arr + off) != 1) {
                        fl = 1;
                    } else {
                        fl = 0;
                    }
                    func_02056bc0((u8*)self + 0x14, func_ov002_0219acac(*(void**)((u8*)self + 0xF0), func_ov002_021c91b4(0)));
                    if (fl != 0) {
                        if (func_ov002_021a3a10(self) != 1) {
                            func_02056bc0((u8*)self + 0x14, func_02021610(0x425, 0));
                        }
                        func_02056bc0((u8*)self + 0x14, func_ov002_021a4360(self, func_ov002_021aa778(t), 5, 0, 0, (u32)-1));
                    }
                    func_02056bc0((u8*)self + 0x14, func_02055a2c(*(void**)((u8*)self + 0xF0), func_ov002_021c92c0(0, sel + base)));
                    func_02056bc0((u8*)self + 0x14, func_0203b720());
                    func_02056bc0((u8*)self + 0x14, func_ov002_0219acac(*(void**)((u8*)self + 0xF0), func_ov002_021c91b4(0)));
                    if (fl != 0) {
                        func_02056bc0((u8*)self + 0x14, func_ov002_021a4360(self, func_ov002_021aa778(t), 0, 0, 0, (u32)-1));
                    }
                    p = (Msg1C*)func_0205681c(0x1C);
                    if (p != 0) {
                        u32 idx;
                        idx = func_ov002_021aa778(t);
                        p->f8 = 0;
                        p->fC = 0x1010A;
                        p->f0 = 0x020ABE58;
                        p->f10 = 0;
                        p->f14 = idx;
                        p->f18 = 4;
                    }
                    func_02056bc0((u8*)self + 0x14, func_ov002_021a2fb8(*(void**)((u8*)self + 0xF0), p));
                    dmg = func_ov002_021c8ffc(arr + off);
                    hp -= dmg;
                    if (func_ov002_021a1838(func_ov002_021aa850(vivo)) != 0 && hp <= 0) {
                        hp = 1;
                    }
                    r1 = func_0205681c(0x20);
                    if (r1 != 0) {
                        r1 = func_ov002_021a014c(r1, vivo, -dmg, 0);
                    }
                    func_02056bc0((u8*)self + 0x14, r1);
                    if (func_ov002_021a3a10(self) != 1) {
                        func_02056bc0((u8*)self + 0x14, func_0203b738());
                    }
                    q = func_0203bd04(0x1010F, 0, 0, 1);
                    t2 = (u8*)q;
                    if (t2 != 0) {
                        t2 += 0x14;
                    }
                    x = 1;
                    if (hp > 0) {
                        x = 0;
                    }
                    m1 = func_ov002_021ab2e8(vivo, t2, dmg, 1, x);
                    m2 = func_0203b6fc();
                    func_02056bc0(m2, q);
                    func_02056bc0(m2, m1);
                    func_02056bc0((u8*)self + 0x14, m2);
                    if (hp <= 0) {
                        void* m;
                        m = func_0205681c(0x88);
                        if (m != 0) {
                            m = func_ov002_021a4be4(m, self, func_ov002_021aa778(vivo));
                        }
                        func_02056bc0((u8*)self + 0x14, m);
                        break;
                    }
                }
            } while (++i < 4);
            func_02056bc0((u8*)self + 0x14, func_ov002_021bc13c());
        }
        func_02056bc0((u8*)self + 0x14, func_ov002_021a4a70(self, b[4], b[5]));
    }
}
