/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_member14_7c84.c, externs renamed. */
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

/* Matched: 021B7C84 (30B + pool) — dtor: set vtable 0x021D5CF4, virtual-delete member at +0x14 (nested null checks, slot 1), return this */
typedef void (*Fn)(void*);
void* func_ov002_021b7c84(void* self) {
    void* m;
    *(u32*)self = 0x021D5CF4;
    m = *(void**)((u8*)self + 0x14);
    if (m != 0) {
        if (m != 0) {
            (*(Fn**)m)[1](m);
        }
        *(u32*)((u8*)self + 0x14) = 0;
    }
    return self;
}
