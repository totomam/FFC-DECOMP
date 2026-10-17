/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/init_vtable_pair_copy.c, externs renamed. */
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

/* Ctor: parent-init(self,0), set vtable, store arg, copy 8-byte global pair.
   Matched: 021B1BF0 (44B), 021C8814 (44B).
   Key idiom: *(Pair*)((u8*)self+OFF) = gPair (single struct copy, NOT two u32 stores). */
typedef struct { u32 a; u32 b; } Pair;
extern Pair data_ov002_021d781c;
extern void* func_02056c9c(void* self, s32 zero);

static void* Func_021B1BF0(void* self, void* p1)
{
    func_02056c9c(self, 0);
    *(u32*)self = 0x021D57E0;
    *(u32*)((u8*)self + 0x88) = (u32)p1;
    *(Pair*)((u8*)self + 0x80) = data_ov002_021d781c;
    return self;
}

void* func_ov002_021c8814(void* self, void* p1)
{
    func_02056c9c(self, 0);
    *(u32*)self = 0x021D780C;
    *(u32*)((u8*)self + 0x80) = (u32)p1;
    *(Pair*)((u8*)self + 0x90) = data_ov002_021d781c;
    return self;
}
