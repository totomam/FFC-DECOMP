/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_member_c4_021B9C38.c, externs renamed. */
/* 021B9C38 size=0x1C (0x1A + 2B pad) -O4
 * Dtor returning this: destroys member subobject at +0xC4, then two
 * whole-object teardown calls (last = Free 0x2056844), returns self. */
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

extern void func_020059cc(void* p);
extern void func_020695d0(void* p);
extern void func_02056844(void* p);
void* func_ov002_021b9c38(void* self)
{
    func_020059cc((u8*)self + 0xC4);
    func_020695d0(self);
    func_02056844(self);
    return self;
}
