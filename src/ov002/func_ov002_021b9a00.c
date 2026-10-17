/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/ctor_base_pairfromglobal_021B9A00.c, externs renamed. */
/* 0x021B9A00 (size 0x44) -O4 — ctor: Base(a,0), vtable, b@0x80 c@0x84 d@0x94, 8-byte Pair copy from global into +0x88, return this */
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
extern void func_02056c9c(void* p, int n);
extern u32 data_ov002_021d6114;
extern Pair data_ov002_021d63d8;
void* func_ov002_021b9a00(u8* a, void* b, void* c, void* d) {
    func_02056c9c(a, 0);
    *(u32*)a = (u32)&data_ov002_021d6114;
    *(void**)(a + 0x80) = b;
    *(void**)(a + 0x84) = c;
    *(void**)(a + 0x94) = d;
    *(Pair*)(a + 0x88) = data_ov002_021d63d8;
    return a;
}
