/* cflags:  */
/* From arcnid/ffc-decomp src/battle/alloc178_ctor6_021C958C.c, externs renamed. */
/* 0x021C958C (size 0x30) -O4,p — Alloc(0x178) wrapper forwarding 6 args (2 on stack) to ctor 021C78B4; O4p needed for sub sp,#0xC outgoing-arg frame (plain -O4 pushes r1-r3 instead) */
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

extern void* func_0205681c(int);
extern void func_ov002_021c78b4(void* p, void* a, void* b, void* c, void* d, void* e, void* f);
void func_ov002_021c958c(void* a, void* b, void* c, void* d, void* e, void* f) {
    void* p;
    p = func_0205681c(0x178);
    if (p != 0) {
        func_ov002_021c78b4(p, a, b, c, d, e, f);
    }
}
