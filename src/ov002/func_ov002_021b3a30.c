/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/trylink_magicguard_loops_021b3a30.c, externs renamed. */
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

/* Matched 021B3A30 size 0x108 (-O4). Guarded link/attach: early-out if b is one of
   three cached slots (+0x100/+0x104/+0xFC), PlaySfx(0x43D), alloc 0x18 node w/ vtable
   0x020AC1D8, magic-guard b (+0x94/98/9C vs A21B58B6/4D555642/5A1BB469), then two
   Count/At/Link loops. */

extern void func_ov002_021b4460(u8* a);
extern void func_02021338(u32 id);
extern u32 func_ov002_021b45f8(u8* a, u8* b);
extern void* func_0205681c(u32 n);
extern u32 func_ov002_021ae5ec(u32 h);
extern void func_02055914(u32 obj, u32* p);
extern u8* func_ov002_021ae734(void);
extern u8* func_ov002_0219c750(void);
extern s32 func_ov002_0219c5a8(u8* v);
extern u32 func_ov002_0219c5b8(u8* v, s32 i);
extern void func_ov002_021ae098(u32 x, u32 y);

void func_ov002_021b3a30(u8* a, u8* b) {
    u32* p;
    u32 h;
    u8* v;
    u8* p2;
    s32 i;
    s32 j;
    u32 t;

    func_ov002_021b4460(a);
    if ((u32)b == *(u32*)(a + 0x100)) return;
    if ((u32)b == *(u32*)(a + 0x104)) return;
    if ((u32)b == *(u32*)(a + 0xFC)) return;
    func_02021338(0x43D);
    h = func_ov002_021b45f8(a, b);
    p = (u32*)func_0205681c(0x18);
    if (p != 0) {
        t = func_ov002_021ae5ec(h);
        p[2] = 0;
        p[3] = 0x0001011F;
        p[0] = 0x020AC1D8;
        p[4] = 0;
        p[5] = t;
    }
    func_02055914(*(u32*)(a + 0xE0) + 0x80, p);
    if (b == 0) return;
    if (*(u32*)(b + 0x94) != 0xA21B58B6) return;
    if (*(u32*)(b + 0x98) != 0x4D555642) return;
    if (*(u32*)(b + 0x9C) != 0x5A1BB469) return;
    h = func_ov002_021b45f8(a, b);
    p2 = func_ov002_021ae734();
    v = func_ov002_0219c750();
    i = 0;
    if (func_ov002_0219c5a8(v) > 0) {
        do {
            func_ov002_021ae098(func_ov002_0219c5b8(v, i), h);
            i++;
        } while (i < func_ov002_0219c5a8(v));
    }
    i = 0;
    if (func_ov002_0219c5a8(p2) > 0) {
        j = i;
        do {
            func_ov002_021ae098(func_ov002_0219c5b8(p2, i), j);
            i++;
        } while (i < func_ov002_0219c5a8(p2));
    }
}
