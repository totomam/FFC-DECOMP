/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/ringbuf_advance_11c0.c, externs renamed. */
/* 021C11C0 (size 0x62) — ring buffer advance/drain */
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

extern void func_02056844(u32 x);   /* 0x2056844 */
void func_ov002_021c11c0(u8* self, u32 n) {
    if (n != 0) {
        u8* r4;
        *(u32*)(self + 4) -= n;
        r4 = self + 8;
        *(u32*)self = *(u32*)self + n;
        if (*(u32*)self >= 0x200) {
            u8* r6;
            u32 half;
            r6 = r4 + 8;
            half = 0x200 >> 1;
            do {
                u32 idx;
                func_02056844(((u32*)(*(u32*)r4))[*(u32*)(r4 + 4)]);
                idx = *(u32*)(r4 + 4) + 1;
                *(u32*)(r4 + 4) = idx;
                if (idx == *(u32*)(r4 + 0xc)) {
                    *(u32*)(r4 + 4) = 0;
                }
                *(u32*)r6 -= 1;
                *(u32*)self -= half;
            } while (*(u32*)self >= 0x200);
        }
        if (*(u32*)(self + 4) == 0) {
            *(u32*)self = 0x80;
        }
    }
}
