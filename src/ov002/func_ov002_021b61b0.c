/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_vtable_setup.c, externs renamed. */
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


extern void func_02069210(void* self);
extern void func_02069328(void* self, u32 val);
extern void func_02069320(void* self, u32 val);

void* func_ov002_021b61b0(void* self)
{
    func_02069210(self);
    *(u32*)self = 0x021D6004;
    func_02069328(self, 1);
    func_02069320(self, 2);
    return self;
}
