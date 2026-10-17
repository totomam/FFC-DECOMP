/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/confirm_select_sfx_chain_021B399C.c, externs renamed. */
/* Matched: 0x021B399C  size 0x94 (148B)
   Flags: -O4 (also -O4,p)
   Confirm/select handler: if func_ov002_021b38a8(a,b)==0 and *(a+0xFC)==b, plays sfx 0x441,
   ticks the +0xE0 object, global step, func_02056bc0(a+0x14, func_02056b10(*(a+0xEC))),
   allocs a 0x10 node {vtbl=0x020AB6B8, fc=0x1013D, f8=0} (result kept in r1 as
   2nd arg idiom), func_02056bc0(a+0x14, func_02055a2c(*(a+0xE4), p)), then
   func_02056bc0(a+0x14, func_02056aec(a)) with param mutation a+=0x14 for the last call.
   Else branch: func_ov002_021b45f8(a,b) out-of-line. */
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


extern u32 func_ov002_021b38a8(void* a, void* b);        /* 0x21b38a8 */
extern void func_ov002_021b45f8(void* a, void* b);       /* 0x21b45f8 */
extern void func_02021338(u32 id);               /* 0x2021338 */
extern void func_ov002_02198dec(void* q);                 /* 0x2198dec */
extern void func_ov002_0219f520(void);                /* 0x219f520 */
extern u32 func_02056b10(void* q);                 /* 0x2056b10 */
extern void func_02056bc0(void* d, u32 v);     /* 0x2056bc0 */
extern void* func_0205681c(u32 n);              /* 0x205681c */
extern u32 func_02055a2c(void* q, void* p);       /* 0x2055a2c */
extern u32 func_02056aec(void* a);               /* 0x2056aec */

void func_ov002_021b399c(u8* a, void* b)
{
    u8* p;
    u32 r;

    if (func_ov002_021b38a8(a, b) == 0) {
        if (*(void**)(a + 0xfc) == b) {
            func_02021338(0x441);
            func_ov002_02198dec(*(void**)(a + 0xe0));
            func_ov002_0219f520();
            func_02056bc0(a + 0x14, func_02056b10(*(void**)(a + 0xec)));
            p = (u8*)func_0205681c(0x10);
            if (p != 0) {
                *(u32*)(p + 8) = 0;
                *(u32*)(p + 0xc) = 0x1013D;
                *(u32*)p = 0x020AB6B8;
            }
            func_02056bc0(a + 0x14, func_02055a2c(*(void**)(a + 0xe4), p));
            r = func_02056aec(a);
            a += 0x14;
            func_02056bc0(a, r);
        } else {
            func_ov002_021b45f8(a, b);
        }
    }
}
