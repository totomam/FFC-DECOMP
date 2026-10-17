/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc18_init_self_021BC7B4.c, externs renamed. */
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


/* 021BC7B4 (size 0x18, -O4) — p = Alloc(0x18); if (p) Init(p, s); */
extern void* func_0205681c(u32 n);
extern void func_ov002_021bc49c(void* p, void* s);

void func_ov002_021bc7b4(void* s) {
    void* p = func_0205681c(0x18);
    if (p != 0) {
        func_ov002_021bc49c(p, s);
    }
}
