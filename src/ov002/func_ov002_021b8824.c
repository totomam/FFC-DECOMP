/* cflags:  */
/* From arcnid/ffc-decomp src/battle/sfx_notify_slots_021B8824.c, externs renamed. */
/* Matched: 0x021B8824  size 0x78  flags -O4,p
   Sfx + listener-notify: play sound 0x43C (0x43B if flag self+0xF1 was set,
   clearing it); if Chk(m): return if m equals any of self+0x110..0x118 or
   self+0x10C; else for j=1..4 call A(self, *(self+0x10C), j) then
   B(self, *(self+0x10C), j, m).
   IDIOM (new): the str-to-[sp] + adds-r7 double-home of the loop-invariant
   pointer only falls out of a STATIC INLINE helper whose pointer param is
   declared `u32* volatile` — the inline param binding emits the spill store
   (value via r0) + the plain param's copy into r7, and the compare's address
   is NOT pre-hoisted. No standalone-C shape (volatile local, arrays, struct
   fields, cast trees, ~15 tried) reproduces it. */
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


extern void func_02021338(u32 n);
extern u32 func_020692e8(u32 m);
extern void func_02069694(u8* s, u32 v, s32 i);
extern void func_02069670(u8* s, u32 v, s32 i, u32 m);

static inline void NotifyAll(u8* self, u32* volatile q, u32* a, u32 m) {
    s32 j;
    j = 1;
    do {
        func_02069694(self, *q, j);
        func_02069670(self, *a, j, m);
        j++;
    } while (j <= 4);
}

void func_ov002_021b8824(u8* self, u32 m) {
    u32 x;
    x = 0x43C;
    if (*(u8*)(self + 0xF1) != 0) {
        *(u8*)(self + 0xF1) = 0;
        x = x - 1;
    }
    func_02021338(x);
    if (func_020692e8(m) != 0) {
        u32 i;
        i = 0;
        do {
            if (m == *(u32*)(self + i * 4 + 0x110)) {
                return;
            }
            i++;
        } while (i < 3);
        if (m == *(u32*)(self + 0x10C)) {
            return;
        }
        NotifyAll(self, (u32*)(self + 0x10C), (u32*)(self + 0x10C), m);
    }
}
