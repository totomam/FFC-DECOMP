/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/ctor_flags_5a50.c, externs renamed. */
/* 021B5A50 (size 0x64) — object func_ov002_021b5a50 with flag extraction from arg3 */
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

extern void func_02056c9c(void* self, u32 z);
extern void func_ov002_021b5b34(void* self, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 data_ov002_021d5d68[];
void* func_ov002_021b5a50(u8* self, u32 arg1, u32 arg2, u32 arg3) {
    u32 f1; u32 f2;
    func_02056c9c(self, 0);
    *(u32*)self = (u32)data_ov002_021d5d68;
    *(u32*)(self + 0x90) = arg1;
    *(u32*)(self + 0xa0) = arg2;
    *(u32*)(self + 0x94) = arg3;
    f1 = 0;
    if (arg3 & 0x10000) f1 = 1;
    if (arg3 & 0x20000) f2 = 1; else f2 = 0;
    func_ov002_021b5b34(self, *(u32*)(self + 0xa0), arg3 & 0xffff, f1, f2, 0, 0);
    return self;
}
