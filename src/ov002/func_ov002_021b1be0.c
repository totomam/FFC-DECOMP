/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_field8_from_base_1be0.c, externs renamed. */
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


/* 021B1BE0 (16B, -O4): Init(self); self->field8 = *(u32*)self + 0x88. */
extern void func_02064898(void* s);
void func_ov002_021b1be0(void* s){ func_02064898(s); *(u32*)((u8*)s + 8) = *(u32*)s + 0x88; }
