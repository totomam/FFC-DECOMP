/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/obj28_create_flag_clear_234c.c, externs renamed. */
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


/* 021C234C, size 0x50: mirror of 021C2300 — guard flag !=0, clear flag, +0x21=1, +0x18=-1; -O4 */

extern u8 data_ov002_021d7990;
extern u32 data_ov002_021d70b8[];
extern void* func_0203b720(void);
extern void* func_0205681c(u32 size);

void* func_ov002_021c234c(void* a, void* b)
{
    void* p;
    if (data_ov002_021d7990 == 0) {
        return func_0203b720();
    }
    data_ov002_021d7990 = 0;
    p = func_0205681c(0x28);
    if (p != 0) {
        *(u32*)((u8*)p + 0xC) &= ~0xFF;
        *(u32**)p = data_ov002_021d70b8;
        *(void**)((u8*)p + 0x1C) = b;
        *((u8*)p + 0x20) = 1;
        *((u8*)p + 0x21) = 1;
        *(void**)((u8*)p + 0x24) = a;
        *(s32*)((u8*)p + 0x18) = -1;
    }
    return p;
}
