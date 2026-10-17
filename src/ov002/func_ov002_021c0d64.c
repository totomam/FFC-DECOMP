/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/loop_bitmask_call_status_0d64.c, externs renamed. */
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

/* Matched: 021C0D64 (68B / batch 70) — for i in 0..2: Call(base[i+0x38],
   (mask&(1<<i))?0x1000:0) where base=*(self+0x14), mask=*(self+0x18);
   then status set field 0xC = (...&~0xFF)|2. */
extern void func_0202ed74(u32 v, u32 flag);
void func_ov002_021c0d64(void* self){
  s32 i;
  for(i = 0; i < 3; i++){
    if(*(u32*)((u8*)self + 0x18) & (1u << i))
      func_0202ed74((*(u32**)((u8*)self + 0x14))[i + 0x38], 0x1000);
    else
      func_0202ed74((*(u32**)((u8*)self + 0x14))[i + 0x38], 0);
  }
  *(u32*)((u8*)self + 0xC) = (*(u32*)((u8*)self + 0xC) & ~0xFF) | 2;
}
