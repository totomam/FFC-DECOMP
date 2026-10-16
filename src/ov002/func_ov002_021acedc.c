/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/phantomframe_fxratio_021ACEDC.c, externs renamed. */
/* 0x021ACEDC (size 0x34, incl. 2B pad) -O4,p — THE original phantom-0x10-frame mystery, CRACKED.
   *out = 0x1000 (fx32 1.0); if (func_ov002_021aa11c(obj+0x190, 0xC)) *out = func_02081210(*(u32*)(obj+0x23C) << 12, 0xA000).
   Mechanism-2 generalization: FOUR one-word structs passed BY VALUE (two per call).
   Each W local's field register-promotes at -O4,p but leaves its 4-byte home-slot
   residue -> phantom sub sp,#0x10 with zero stack traffic. 0x23C = 0x190 + 0xAC
   falls out of constant CSE (r6 reused via adds #0xAC + reg-offset ldr).
   KEY ORDER: d (0xA000) must be assigned BEFORE c (the shifted load) or the two
   lsls #12 swap (movs r1,#0xA; lsls r1,#12; lsls r0,#12 required order). */
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
extern u32 func_ov002_021aa11c(W a, W b);
extern u32 func_02081210(W a, W b);
void func_ov002_021acedc(u32* out, u8* obj) {
    W a;
    W b;
    W c;
    W d;
    *out = 0x1000;
    a.v = (u32)(obj + 0x190);
    b.v = 0xC;
    if (func_ov002_021aa11c(a, b) != 0) {
        d.v = 0xA000;
        c.v = *(u32*)(obj + 0x23C) << 12;
        *out = func_02081210(c, d);
    }
}
