/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc_node_register_61f4.c, externs renamed. */
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

/* Matched: 021961F4 (108B) -- alloc 0x10 callback node {fn,?,0,0x100E6}, register at *(s+0x3D0)+0x80;
   two func_02056bc0(s+0x48,..) unless *(s+0x388)==1; Pair copy to +0x3C0. */
typedef struct { u32 a; u32 b; } Pair;
typedef struct { void* f0; u32 f4; u32 f8; u32 fC; } Node;
extern void* func_0205681c(u32 n);
extern void func_02055914(void* q, Node* p);
extern void func_02056bc0(void* a, void* b);
extern void* func_0203bfa4(u32 n);
extern void* func_0203bfb8(u32 n);
extern u32 data_020ab2b8[];
extern Pair data_ov002_021d47d8;
void func_ov002_021961f4(void* s) {
    if (*((u8*)s + 0x358) != 0) {
        Node* p = (Node*)func_0205681c(0x10);
        if (p != 0) {
            p->f8 = 0;
            p->fC = 0x000100E6;
            p->f0 = data_020ab2b8;
        }
        func_02055914(*(u8**)((u8*)s + 0x3D0) + 0x80, p);
    }
    if (*(u32*)((u8*)s + 0x388) != 1) {
        func_02056bc0((u8*)s + 0x48, func_0203bfa4(0x1E));
        func_02056bc0((u8*)s + 0x48, func_0203bfb8(0x1E));
    }
    *(Pair*)((u8*)s + 0x3C0) = data_ov002_021d47d8;
}
