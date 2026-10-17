/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/fill_3x32_u16_rows_021B7B9C.c, externs renamed. */
/*
 * func_ov002_021b7b9c - fills three 32-entry u16 rows at self+0xD8+pr.x*2 (row stride
 * 0x40 from pr.y) with values looked up via func_0205daac(self+0x98) indexed by
 * data_ov002_021d4108[d*3 + i]. NOTE: batch label func_021B7B9E is off-by-2; real
 * start is the B40F struct-spill push at 0x021B7B9C (Pair arg by value).
 * Address: 0x021B7B9C  Size: 0x54  Flags: -O4,p (--O4p)
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


typedef struct { u32 x; u32 y; } Pair;
typedef struct { u8* p; } W;

extern u8* func_0205daac(u8* q);
extern u32 data_ov002_021d4108[];

void func_ov002_021b7b9c(u8* self, Pair pr, s32 d) {
    W w;
    u8* t;
    u8* base;
    s32 i;
    t = (u8*)data_ov002_021d4108 + d * 12;
    i = 0;
    base = self + 0xd8 + pr.x * 2;
    w.p = self;
    w.p += 0x98;
    for (; i < 3; i++) {
        u16 v;
        s32 j;
        u16* dst;
        v = *(u16*)(func_0205daac(w.p) + *(u32*)(t + i * 4) * 2);
        dst = (u16*)(base + ((pr.y + i) << 6));
        j = 0;
        do {
            j++;
            *dst = v;
            dst++;
        } while (j < 0x20);
    }
}
