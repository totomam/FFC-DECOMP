/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/counter_dec_calls_021BC10C.c, externs renamed. */
/* 021BC10C size 0x30  -O4  3-function unit: dec global counter field(+4), F+G on self, return self; empty fn 021BC12C; counter getter 021BC130 */
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


typedef struct { u32 a; u32 count; } CounterObj;
extern CounterObj data_ov002_021d795c;
extern void func_02056db0(void* p);
extern void func_02056844(void* p);

void* func_ov002_021bc10c(void* s) {
    data_ov002_021d795c.count--;
    func_02056db0(s);
    func_02056844(s);
    return s;
}

static void f_021BC12C(void) {
}

static u32 f_021BC130(void) {
    return data_ov002_021d795c.count;
}
