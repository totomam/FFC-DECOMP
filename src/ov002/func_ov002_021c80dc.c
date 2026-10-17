/* cflags:  */
/* From arcnid/ffc-decomp src/battle/angle_normalize_check_80dc.c, externs renamed. */
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

/* Matched: 021C80DC (72B) REQUIRES --O4p. If flag!=0 return 0; normalize ang
   into [0,360) by add/sub 360, then return Check(ang,0x1e)!=0. */
extern s32 func_ov002_021c7e2c(s32 ang, s32 k);
s32 func_ov002_021c80dc(void* self, s32 flag, s32 ang){
  if(flag != 0) return 0;
  if(ang >= 360 || ang < 0){
    if(ang > 0){
      while(ang >= 360) ang -= 360;
    } else {
      while(ang < 0) ang += 360;
    }
  }
  if(func_ov002_021c7e2c(ang, 0x1e) != 0) return 1;
  return 0;
}
