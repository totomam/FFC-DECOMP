/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc_init_vtable_14.c, externs renamed. */
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


/* 021B60A8 — alloc 0x18, clear status byte, set vtable + parent at 0x14 */

extern void* func_0205681c(u32);
extern u32 data_ov002_021d5ccc;

void* func_ov002_021b60a8(void* parent)
{
    void* obj;

    obj = func_0205681c(0x18);
    if (obj != 0) {
        *(u32*)((u8*)obj + 0xC) &= ~0xFF;
        *(u32*)obj = (u32)&data_ov002_021d5ccc;
        *(u32*)((u8*)obj + 0x14) = (u32)parent;
    }
    return obj;
}
