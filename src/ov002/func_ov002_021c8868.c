/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_chain3_021C8868.c, externs renamed. */
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

/* Matched 021C8868 (36 bytes, -O4). func_ov002_021c8868: set vtable, Dtor1(self+0x14),
   Dtor2(self), Dtor3(self), return this. */
extern void func_02056c4c(void* p);
extern void func_02056db0(void* p);
extern void func_02056844(void* p);
extern u32 data_ov002_021d780c[];
void* func_ov002_021c8868(void* self) {
    *(u32*)self = (u32)data_ov002_021d780c;
    func_02056c4c((u8*)self + 0x14);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
