/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc_init2_args.c, externs renamed. */
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

/* Matched: 021B6008 021B78AC 021C212C 021C21AC (34B each)
   Pattern: alloc 0x1C, clear status low byte, set vtable, store two args */
extern void* func_0205681c(u32 size);
extern u32 data_ov002_021d7004[];

void* func_ov002_021c212c(void* a, void* b) {
    void* p;
    p = func_0205681c(0x1C);
    if (p != 0) {
        *(u32*)((u8*)p + 0xC) = *(u32*)((u8*)p + 0xC) & ~0xFF;
        *(u32*)p = (u32)data_ov002_021d7004;
        *(u32*)((u8*)p + 0x14) = (u32)a;
        *(u32*)((u8*)p + 0x18) = (u32)b;
    }
    return p;
}
