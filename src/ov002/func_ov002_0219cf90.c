/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/ctor_zero4_cf90.c, externs renamed. */
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


/* 0219CF90, size 0x24: base ctor call, vtable 021D4FD0, zero +0x14..0x20, b at +0x24 — b store must come LAST in source order (scheduler hoists it; storing it first flips r4/r5 regalloc); -O4 */
extern void func_02062848(void* a, void* b);
extern u32 data_ov002_021d4fd0[];
void* func_ov002_0219cf90(void* a, void* b)
{
    func_02062848(a, b);
    *(u32**)a = data_ov002_021d4fd0;
    *(u32*)((u8*)a + 0x14) = 0;
    *(u32*)((u8*)a + 0x18) = 0;
    *(u32*)((u8*)a + 0x1C) = 0;
    *(u32*)((u8*)a + 0x20) = 0;
    *(void**)((u8*)a + 0x24) = b;
    return a;
}
