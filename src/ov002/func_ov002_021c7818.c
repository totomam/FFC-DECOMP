/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/pv_ctor_alloc48_7818.c, externs renamed. */
/* Pair-by-value ctor, alloc 0x48, 5-arg (arg4->func_0206aa58, arg3@0x44). Matched: 021C7818 021C7D90 021D396C */
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

typedef struct { u32 x, y; } Pair;
extern void* func_0205681c(u32);
extern void func_0206aa58(void* o, u32 z, u32 a4);
extern u32 data_ov002_021d7570[];
void* func_ov002_021c7818(void* self, Pair pr, u32 arg3, u32 arg4) {
    void* obj;
    obj = func_0205681c(0x48);
    if (obj != 0) {
        func_0206aa58(obj, 0, arg4);
        *(u32*)obj = (u32)data_ov002_021d7570;
        *(u32*)((u8*)obj + 0x38) = (u32)self;
        *(Pair*)((u8*)obj + 0x3c) = pr;
        *(u32*)((u8*)obj + 0x44) = arg3;
    }
    return obj;
}
