/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/field_copy_chain.c, externs renamed. */
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


typedef struct { u32 x; u32 y; } FieldPair;
extern FieldPair data_ov002_021d608c;
extern void func_02059bf8(u32 val);

void func_ov002_021b79c8(void* self)
{
    func_02059bf8(*(u32*)((u8*)self + 0x88));
    *(FieldPair*)((u8*)self + 0xD0) = data_ov002_021d608c;
}
