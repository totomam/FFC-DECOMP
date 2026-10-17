/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vtable_store_3call.c, externs renamed. */
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

/* Matched: 0219F840 021B36E0 021C6B54 021C786C 021C7DE4 021D39C0 (28B each)
   Pattern: store vtable ptr, three calls on self, return self */
extern u32 data_ov002_021d74d0[];
extern void func_0206ab18(void*);
extern void func_0206aaf0(void*);
extern void func_02056844(void*);

void* func_ov002_021c6b54(void* self) {
    *(u32*)self = (u32)data_ov002_021d74d0;
    func_0206ab18(self);
    func_0206aaf0(self);
    func_02056844(self);
    return self;
}
