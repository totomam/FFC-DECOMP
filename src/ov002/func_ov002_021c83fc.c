/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_clear3_021C83FC.c, externs renamed. */
/* Matched: 0x021C83FC  size 0x40  -O4 */
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

extern u32 data_ov002_021d77dc;
extern void* func_ov002_02198dec(void*);
extern void func_ov002_0219f5c4(void*, s32);
extern void func_02056db0(void*);
extern void func_02056844(void*);
void* func_ov002_021c83fc(void* self) {
    void* p;
    *(u32*)self = (u32)&data_ov002_021d77dc;
    p = *(void**)((u8*)self + 0x90);
    if (p != 0) {
        func_ov002_0219f5c4(func_ov002_02198dec(p), 0);
    }
    func_02056db0(self);
    *(u32*)((u8*)self + 0x80) = 0;
    *(u32*)((u8*)self + 0x84) = 0;
    *(u32*)((u8*)self + 0x88) = 0;
    func_02056844(self);
    return self;
}
