/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/listener_pair_events_021B911C.c, externs renamed. */
/* Matched: 0x021B911C  size 0xF4 (244)  -O4 (also -O4,p)
   NOTE: batch manifest size 0xF6 includes 2 bytes of the NEXT function's B40F prologue (off-by-2 at END).
   Loop i=0..2: for each listener slot from func_ov002_021b86ac(s,i), allocs TWO 0x20 nodes
   {vtbl=0x020ABBB8, +0xC=0x100F1, +0x14=*(s+0xC0), +0x1C=i}, registers both at *(s+0xBC)+0x80;
   first node zeros via hoisted zero local (r7), second via inline 0.
   Tail: res=func_0203b688(); func_02056bc0 chain w/ func_ov002_021b8624(s, data_ov002_021d63c8/data_ov002_021d63d0 by value, 0/1),
   two func_0203b738() results, then param-mutation s+=0x14 func_02056bc0(s,res). */
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

extern void* func_ov002_021b86ac(void* s, u32 i);
extern void* func_0205681c(u32 n);              /* 0x205681c */
extern void func_02055914(void* q, void* p); /* 0x2055914 */
extern void func_ov002_021ae72c(void* q);
extern void func_ov002_021ba16c(void);
extern void func_ov002_021b0c3c(void* q, u32 a, u32 b);
extern void* func_0203b688(void);
extern u32 func_0203b738(void);
extern u32 func_ov002_021b8624(void* s, Pair p, u32 f); /* 0x21b8624 */
extern void func_02056bc0(void* d, u32 v);     /* 0x2056bc0 */
extern Pair data_ov002_021d63c8; /* 0x021D63C8 */
extern Pair data_ov002_021d63d0; /* 0x021D63D0 */

void func_ov002_021b911c(u8* s)
{
    s32 i;
    u32 zero;
    void* res;
    u8* p;
    void* q;
    u32 t;

    zero = 0;
    for (i = 0; i < 3; i++) {
        q = func_ov002_021b86ac(s, i);
        if (q != 0) {
            p = (u8*)func_0205681c(0x20);
            if (p != 0) {
                t = *(u32*)(s + 0xC0);
                *(u32*)(p + 8) = zero;
                *(u32*)(p + 0xC) = 0x100F1;
                *(u32*)p = 0x020ABBB8;
                *(u32*)(p + 0x10) = zero;
                *(u32*)(p + 0x14) = t;
                *(u8*)(p + 0x18) = zero;
                *(u32*)(p + 0x1C) = i;
            }
            func_02055914(*(u8**)(s + 0xBC) + 0x80, p);
            p = (u8*)func_0205681c(0x20);
            if (p != 0) {
                t = *(u32*)(s + 0xC0);
                *(u32*)(p + 8) = 0;
                *(u32*)(p + 0xC) = 0x100F1;
                *(u32*)p = 0x020ABBB8;
                *(u32*)(p + 0x10) = 0;
                *(u32*)(p + 0x14) = t;
                *(u8*)(p + 0x18) = 0;
                *(u32*)(p + 0x1C) = i;
            }
            func_02055914(*(u8**)(s + 0xBC) + 0x80, p);
            func_ov002_021ae72c(q);
            func_ov002_021ba16c();
            func_ov002_021b0c3c(q, 1, 0);
        }
    }
    res = func_0203b688();
    func_02056bc0(res, func_ov002_021b8624(s, data_ov002_021d63c8, 0));
    func_02056bc0(res, func_0203b738());
    func_02056bc0(res, func_0203b738());
    func_02056bc0(res, func_ov002_021b8624(s, data_ov002_021d63d0, 1));
    s += 0x14;
    func_02056bc0(s, (u32)res);
}
