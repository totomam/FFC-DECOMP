/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor3_contains_loop_021B491C.c, externs renamed. */
/* 021B491C (size 0x50, -O4,p)
 * Two functions: dtor-style triple call (self+0x10C, self, self; returns self)
 * + linear search over s32 array at +0x158 with live count at +0x164 (returns 1 if found).
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


extern void func_0204fa14(void* p);
extern void func_020695d0(void* p);
extern void func_02056844(void* p);

void* func_ov002_021b58e4(void* self) {
    func_0204fa14((u8*)self + 0x10C);
    func_020695d0(self);
    func_02056844(self);
    return self;
}

static s32 Contains_021B493C(u8* s, u32 v) {
    s32 i = 0;
    if (*(s32*)(s + 0x164) > 0) {
        s32* cnt = (s32*)(s + 0x164);
        do {
            if (v == *(u32*)(s + 0x158 + i * 4)) {
                return 1;
            }
            i++;
        } while (i < *cnt);
    }
    return 0;
}
