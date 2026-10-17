/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/pair_fwd3_calls_021B1B14.c, externs renamed. */
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

/* 021B1B14 (size 0x68, -O4) — batch label func_021B1B16 is off by 2 (B40F struct-spill start).
   Takes Pair by value: func_020643a8(self, p+(-0xC,0)); virt slot3 of *(self+0x84) with p+(0x44-(*(s32*)(self+0x94))/2, 7); func_0205f52c(*(*(self+0x88)+0x94), p+(0x20,-0x41)). */
typedef struct { u32 x, y; } Pair;
typedef void (*Fn)(void*, Pair);
extern void func_020643a8(void* a, Pair p);
extern void func_0205f52c(void* a, Pair p);
void func_ov002_021b1b14(void* self, Pair p) {
    Pair t1, t2, t3;
    void* m;
    t1.y = p.y;
    t1.x = p.x - 0xc;
    func_020643a8(self, t1);
    t2.x = p.x + (0x44 - *(s32*)((u8*)self + 0x94) / 2);
    t2.y = p.y + 7;
    m = *(void**)((u8*)self + 0x84);
    (*(Fn**)m)[3](m, t2);
    t3.x = p.x + 0x20;
    t3.y = p.y - 0x41;
    func_0205f52c(*(void**)(*(u8**)((u8*)self + 0x88) + 0x94), t3);
}
