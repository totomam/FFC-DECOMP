/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc94_ctor_pair_word_021A9804.c, externs renamed. */
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

/* Matched: 021A9804 (true entry incl push{r0-r3} arg spill, 0x42/66B).
   func_0205681c(0x94) callee-pop ctor: self a1 -> +0x84, Pair-by-value -> +0x88, u32 a4 -> +0x90.
   Shape: "callee-pop constructor with B40F spill". */
extern void* func_0205681c(u32);
extern void func_02056c9c(void*, u32);
extern u32 data_ov011_021caf7c[];
typedef struct { u32 x, y; } Pair;
void* func_ov011_021c1bbc(void* a1, Pair pr, u32 a4){
  u8* q = (u8*)func_0205681c(0x94);
  if(q){
    func_02056c9c(q, 0);
    *(u32*)q = (u32)data_ov011_021caf7c;
    *(u32*)(q + 0x84) = (u32)a1;
    *(Pair*)(q + 0x88) = pr;
    *(u32*)(q + 0x90) = a4;
  }
  return q;
}
