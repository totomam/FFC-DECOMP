/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/build_pair_call.c, externs renamed. */
/* 0x021B4548 (54 bytes) -O4  base-reg Pair caller */
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

typedef struct { u32 x, y; } Pair;
extern u32 data_ov002_021d59ec[];
extern void func_ov002_021b46fc(Pair* out, u32 a1);
extern void func_ov002_021b4584(void* a0, Pair pr, u32 a2, u32 a3);
void func_ov002_021b4548(void* a0, u32 a1, u32 a2, u32 a3) {
    Pair pr;
    Pair loc;
    Pair* lp;
    u32 lx, ly;
    lp = (Pair*)(void*)&loc;
    func_ov002_021b46fc(lp, a1);
    lx = lp->x;
    ly = lp->y;
    pr.x = lx + data_ov002_021d59ec[4];
    pr.y = ly + data_ov002_021d59ec[5];
    func_ov002_021b4584(a0, pr, a2, a3);
}
