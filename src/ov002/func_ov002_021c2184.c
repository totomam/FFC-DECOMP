/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc1c_init_flagclear.c, externs renamed. */
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


/* 021C2184 (size 0x22 + pool) — Alloc(0x1C), clear low status byte, vtable 0x021D7018, fields 0x14/0x18 */
extern void* func_0205681c(u32);
void func_ov002_021c2184(u32 a, u32 b)
{
    u8* p = (u8*)func_0205681c(0x1C);
    if (p != 0) {
        *(u32*)(p + 0xC) &= ~0xFF;
        *(u32*)p = 0x021D7018;
        *(u32*)(p + 0x14) = a;
        *(u8*)(p + 0x18) = b;
    }
}
