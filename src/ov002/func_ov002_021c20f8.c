/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc5c_ctor_021C20F8.c, externs renamed. */
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

/* 021C20F8 (0x30) — func_0205681c(0x5c) ctor */
extern void* func_0205681c(u32 size);
extern u32 data_ov002_021d702c[];
extern void func_02092878(void* x, void* b);
void* func_ov002_021c20f8(void* a, void* b, void* c) {
    u8* p = func_0205681c(0x5c);
    if (p != 0) {
        *(u32*)(p+0xc) &= ~0xff;
        *(u32*)p = (u32)data_ov002_021d702c;
        *(u32*)(p+0x54) = (u32)a;
        *(u32*)(p+0x58) = (u32)c;
        func_02092878(p + 0x13, b);
    }
    return p;
}
