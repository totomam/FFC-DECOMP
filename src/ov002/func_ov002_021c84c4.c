/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/guard_chain_c84c4.c, externs renamed. */
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


/* 021C84C4 (size 0x68) — guard chain; if all conditions pass, run func_ov002_021c82b4/func_ov002_021c7fb8 on the
   +0x9C sub-object's +0xB8 region. Returns void. */
extern void* func_ov002_02198dec(void*);
extern u32 func_ov002_0219f514(void*, void*);
extern u32 func_ov002_021b86d0(void*);
extern u32 func_ov002_021c82bc(void*);
extern void func_ov002_021c82b4(void*, u32, u32);
extern void func_ov002_021c7fb8(void*);

void func_ov002_021c84c4(void* self) {
    void* a; void* c;
    a = func_ov002_02198dec(*(void**)((u8*)self + 0x90));
    if (func_ov002_0219f514(a, *(void**)((u8*)self + 0x94)) != 0) return;
    c = *(void**)((u8*)self + 0x9c);
    if (c == 0) return;
    if (func_ov002_021b86d0(c) == 0) return;
    if (*((u8*)self + 0x9a) != 0) return;
    if (func_ov002_021c82bc((u8*)*(void**)((u8*)self + 0x9c) + 0xb8) == 0) return;
    func_ov002_021c82b4((u8*)*(void**)((u8*)self + 0x9c) + 0xb8, *((u8*)self + 0x98), *((u8*)self + 0x99));
    self = (u8*)self + 0x9c;
    func_ov002_021c7fb8((u8*)*(void**)self + 0xb8);
}
