/* cflags:  */
/* From arcnid/ffc-decomp src/battle/step_update_21b11a8.c, externs renamed. */
/* 021B11A8 (size 0x58) - matched with -O4,p
 * Advances a per-step counter, recomputes a derived position, updates a
 * cached pair, forwards it, and sets status=2 when the counter completes. */
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


typedef struct { u32 a, b; } Pair11A8;

extern u32 func_0209a76c(u32 a, u32 b);
extern s32 func_ov002_021ae5f4(void* p);
extern Pair11A8 func_ov002_021ae4e4(u32 a, s32 x);
extern void func_ov002_021ae1d4(void* p, Pair11A8 pr);

void func_ov002_021b11a8(void* s)
{
    u32 v = *(u32*)((u8*)s + 0x28) + 1;
    Pair11A8 p;
    s32 x;
    *(u32*)((u8*)s + 0x28) = v;
    *(u32*)((u8*)s + 0x34) = *(u32*)((u8*)s + 0x38) + func_0209a76c(*(u32*)((u8*)s + 0x3c) * v, *(u32*)((u8*)s + 0x24));
    x = func_ov002_021ae5f4(*(void**)((u8*)s + 0x14));
    p = func_ov002_021ae4e4(*(u32*)((u8*)s + 0x34), x);
    *(u32*)((u8*)s + 0x2c) = p.a;
    *(u32*)((u8*)s + 0x30) = p.b;
    func_ov002_021ae1d4(*(void**)((u8*)s + 0x14), *(Pair11A8*)((u8*)s + 0x2c));
    if (*(u32*)((u8*)s + 0x28) == *(u32*)((u8*)s + 0x24))
        *(u32*)((u8*)s + 0xc) = (*(u32*)((u8*)s + 0xc) & ~0xff) | 2;
}
