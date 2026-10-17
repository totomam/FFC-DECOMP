/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/handle_rebuild_virt_pairfwd_021bc5b4.c, externs renamed. */
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

/* Matched: 021BC5B4 (size 0xF0 incl trailing pad, BOTH -O4 and -O4,p). Two-function unit.
   func_ov002_021bc5b4 @021BC5B4 (0xBE): store c at s+0x94; if *(s+0x80): func_02056c4c(*(s+0x90)), ok=vt[12](o),
   func_02056bf4(s+0x48,o), inlined-delete (nested identical null checks, vt[1] dtor) + zero field.
   o = func_0203b95c(a,*(s+0x84),2,1) stored at s+0x80; vt[3](o, *(Pair*)(s+0x88)) Pair by value via ldm;
   vt[8](o,2); vt[15](o,0); if (!ok) vt[10](o); func_02056bc0(s+0x48,o); func_ov002_021bc6e0(s,b).
   g @021BC674 (B40F prologue; manifest label 021BC676 is off-by-2, addendum-confirmed):
   Pair-by-value member stores at +0x88/+0x8C then guarded vt[3](o, p) forward; callee-pop. */
typedef struct { u32 x, y; } Pair;
typedef u32 (*Fn0)(void*);
typedef void (*Fn1)(void*);
typedef void (*FnU)(void*, u32);
typedef void (*FnP)(void*, Pair);
extern void func_02056c4c(void*);               /* 0x02056C4C */
extern void func_02056bf4(void*, void*);        /* 0x02056BF4 */
extern void* func_0203b95c(void*, void*, u32, u32); /* 0x0203B95C */
extern void func_02056bc0(void*, void*);        /* 0x02056BC0 */
extern void func_ov002_021bc6e0(void*, u32);            /* 0x021BC6E0 */

void func_ov002_021bc5b4(u8* s, void* a, u32 b, u32 c) {
    u32 ok;
    u8* o;
    *(u32*)(s + 0x94) = c;
    ok = 1;
    if (*(void**)(s + 0x80) != 0) {
        func_02056c4c(*(void**)(s + 0x90));
        o = *(u8**)(s + 0x80);
        ok = (*(Fn0**)o)[12](o);
        func_02056bf4(s + 0x48, *(void**)(s + 0x80));
        o = *(u8**)(s + 0x80);
        if (o) {
            if (o) {
                (*(Fn1**)o)[1](o);
            }
            *(void**)(s + 0x80) = 0;
        }
    }
    o = (u8*)func_0203b95c(a, *(void**)(s + 0x84), 2, 1);
    *(void**)(s + 0x80) = o;
    (*(FnP**)o)[3](o, *(Pair*)(s + 0x88));
    o = *(u8**)(s + 0x80);
    (*(FnU**)o)[8](o, 2);
    o = *(u8**)(s + 0x80);
    (*(FnU**)o)[15](o, 0);
    if (ok == 0) {
        o = *(u8**)(s + 0x80);
        (*(Fn1**)o)[10](o);
    }
    func_02056bc0(s + 0x48, *(void**)(s + 0x80));
    func_ov002_021bc6e0(s, b);
}

static void g(u8* self, Pair p) {
    u8* o;
    *(u32*)(self + 0x88) = p.x;
    *(u32*)(self + 0x8C) = p.y;
    o = *(u8**)(self + 0x80);
    if (o != 0) {
        (*(FnP**)o)[3](o, p);
    }
}
