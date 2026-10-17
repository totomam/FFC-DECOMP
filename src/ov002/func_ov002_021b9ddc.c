/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_pair_slot3_9ddc.c, externs renamed. */
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

/* Matched: 021B9DDC (34B) — slot 3 with 8B Pair at self+0x14 by value (ldmia), then status|=2 */
typedef struct { u32 a; u32 b; } Pair;
typedef void (*Fn3)(void*, Pair);
void func_ov002_021b9ddc(void* self) {
    void* o;
    o = *(void**)((u8*)self + 0x1C);
    (*(Fn3**)o)[3](o, *(Pair*)((u8*)self + 0x14));
    *(u32*)((u8*)self + 0xC) = (*(u32*)((u8*)self + 0xC) & ~0xFF) | 2;
}
