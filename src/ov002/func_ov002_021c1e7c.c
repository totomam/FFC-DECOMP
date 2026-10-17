/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/copy_pair_two_calls.c, externs renamed. */
/* 0x021C1E7C (56 bytes) -O4 */
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
extern Pair data_ov002_021d70a0;
extern void func_02022ca4(u32 a, int flag);
extern void func_0202ef48(u32 a);
void func_ov002_021c1e7c(void* self) {
    int flag;
    *(Pair*)((u8*)self + 0x80) = data_ov002_021d70a0;
    flag = (*(u32*)((u8*)self + 0xA4) == 1);
    func_02022ca4(*(u32*)((u8*)self + 0x90), flag);
    func_0202ef48(*(u32*)((u8*)self + 0x88));
}
