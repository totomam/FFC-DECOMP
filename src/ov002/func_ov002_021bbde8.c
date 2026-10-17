/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_slot10_clear3c_bde8.c, externs renamed. */
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

/* Matched: 021BBDE8 (32B) — slot 10 on *(*(self+0x10C)+0x80), then byte clear via mutated param */
typedef void (*Fn)(void*);
void func_ov002_021bbde8(void* self) {
    void* o;
    o = *(void**)((u8*)(*(void**)((u8*)self + 0x10C)) + 0x80);
    (*(Fn**)o)[10](o);
    self = (u8*)self + 0x88;
    *(u8*)((u8*)(*(void**)self) + 0x3C) = 0;
}
