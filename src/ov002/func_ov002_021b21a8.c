/* cflags:  */
/* From arcnid/ffc-decomp src/battle/make_handles_addref_setup_021b21a8.c, externs renamed. */
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

/* Matched: 021B21A8 (size 0xD4 incl 2B trailing pad; compiled 0xD2). REQUIRES -O4,p.
   Handle setup: Str temp (sp+0x48) copy-ctor'd from self+0x8C, Big temp (0x38 at
   sp+0x10) built from it; *(self+0xA0) = func_0203bce0(&big,1,1,0); dtors; func_02056bc0(self+0x48,
   *(self+0xA0)). If byte *(self+0xA8): flag = (word(self+0xA4)==2) via flag=1 then
   flag=p(0); p = func_0203b7fc(0xC,8,1); Str temp2 (sp+4) from func_ov002_02198d14(*(self+0x88),flag);
   *(self+0xAC) = func_ov002_021b1f64(p, &t4, flag, func_ov002_0219c5b0(func_ov002_02198d14(*(self+0x88),flag)), 0) [5th arg on
   stack -> sp+0 outgoing word]; func_02056bc0 both. Else *(self+0xAC) = p (0).
   KEYS: p=0 local doubles as the else-branch store AND the flag clear (adds r4,r6).
   Tail MUST be `a = s + 0x48; s += 0xAC;` — a as a real computation (not `a = s;
   a += 0x48;` copy-then-add, which copy-props and recomputes per use, +2B); the
   param mutation then forces a into callee-saved r4 (adds r4,r5 / adds r5,#0xAC /
   adds r4,#0x48). Struct locals declared t48, big, t4 = first-declared highest slot.
   Callees: 20095b8 func_020095b8, 205d508 func_0205d508, 203bce0 func_0203bce0, 205d620 func_0205d620,
   20059cc func_020059cc, 2056bc0 func_02056bc0, 203b7fc func_0203b7fc, 2198d14 func_ov002_02198d14, 219b868 func_ov002_0219b868,
   219c5b0 func_ov002_0219c5b0, 21b1f64 func_ov002_021b1f64. */
typedef struct { u32 a; u32 b; u32 c; } Str;
typedef struct { u32 f[14]; } Big;
extern void func_020095b8(Str* d, void* src);
extern void func_0205d508(Big* b, Str* s, u32 z);
extern u32 func_0203bce0(Big* b, u32 a, u32 c, u32 d);
extern void func_0205d620(Big* b);
extern void func_020059cc(Str* s);
extern void func_02056bc0(void* r, u32 h);
extern u32 func_0203b7fc(u32 a, u32 b, u32 c);
extern u32 func_ov002_02198d14(u32 o, u32 f);
extern void func_ov002_0219b868(Str* d, u32 r);
extern u32 func_ov002_0219c5b0(u32 r);
extern u32 func_ov002_021b1f64(u32 p, Str* t, u32 f, u32 q, u32 z);

void func_ov002_021b21a8(u8* s) {
    u32 p;
    u32 flag;
    Str t48;
    Big big;
    Str t4;
    u8* a;

    func_020095b8(&t48, s + 0x8C);
    p = 0;
    func_0205d508(&big, &t48, 0);
    flag = 1;
    *(u32*)(s + 0xA0) = func_0203bce0(&big, 1, 1, 0);
    func_0205d620(&big);
    func_020059cc(&t48);
    func_02056bc0(s + 0x48, *(u32*)(s + 0xA0));
    if (*(u8*)(s + 0xA8) != 0) {
        if (*(u32*)(s + 0xA4) != 2) {
            flag = p;
        }
        p = func_0203b7fc(0xC, 8, 1);
        func_ov002_0219b868(&t4, func_ov002_02198d14(*(u32*)(s + 0x88), flag));
        *(u32*)(s + 0xAC) = func_ov002_021b1f64(p, &t4, flag, func_ov002_0219c5b0(func_ov002_02198d14(*(u32*)(s + 0x88), flag)), 0);
        func_020059cc(&t4);
        a = s + 0x48;
        s += 0xAC;
        func_02056bc0(a, *(u32*)s);
        func_02056bc0(a, p);
    } else {
        s += 0xAC;
        *(u32*)s = p;
    }
}
