/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_call_94_s7.c, externs renamed. */
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

/* Matched: 021B81AC (14B) — virtual call through member at +0x94, slot 7. */
typedef void (*Fn_81AC)(void*, void*);
void func_ov002_021b81ac(void* a, void* b) {
    void* m;
    m = *(void**)((u8*)b + 0x94);
    (*(Fn_81AC**)m)[7](a, m);
}
