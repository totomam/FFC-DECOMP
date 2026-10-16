/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc_msg_send_021AD13C.c, externs renamed. */
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


/* Matched: 0x021AD13C  size 0x3E (62)  -O4
   alloc 0x1C msg node; KEY: p passed as 2nd arg to func_02055914(0x02055914) => flag-mov to r1, no cmp */

extern u8* func_0205681c(u32 n);
extern void func_02055914(u32 v, u8* p);

void func_ov002_021ad13c(void* self)
{
    u8* p;
    u8 b;
    u32 x;
    u32 y;
    p = func_0205681c(0x1C);
    if (p != 0) {
        b = *((u8*)self + 0x20);
        x = *(u32*)((u8*)self + 0x1C);
        y = *(u32*)((u8*)self + 0x18);
        *(u32*)(p + 8) = 0;
        *(u32*)(p + 0xC) = 0x00010119;
        *(u32*)(p + 0) = 0x020AC318;
        *(u32*)(p + 0x10) = y;
        *(u32*)(p + 0x14) = x;
        *(u8*)(p + 0x18) = b;
    }
    func_02055914(*(u32*)((u8*)self + 0x14), p);
    *(u32*)((u8*)self + 0xC) = (*(u32*)((u8*)self + 0xC) & ~0xFF) | 2;
}
