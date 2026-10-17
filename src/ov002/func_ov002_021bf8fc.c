/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/call_fieldbc_then_sub_f8fc.c, externs renamed. */
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


/* 021BF8FC (16B, -O4): SubA(*(u32*)(self+0xBC)); SubB(). */
extern void func_ov002_02198d08(u32);
extern void func_ov002_0219b860(void);
void func_ov002_021bf8fc(void* s){ func_ov002_02198d08(*(u32*)((u8*)s + 0xBC)); func_ov002_0219b860(); }
