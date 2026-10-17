/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_like_b7830.c, externs renamed. */
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


/* 021B7830 (size 0x6a) — set vtable; if flag@+0x10E4, notify three subsystems;
   then decrement a global refcount and tear down (+0x10D8, +0x98, self, self). */
extern u32 data_ov002_021d5d34[];
extern s32 data_ov002_021d7958;
extern void func_02059538(void*, void*);
extern void func_02059a78(void*, void*);
extern void func_0205847c(u32, void*);
extern void func_0200d5ec(void*);
extern void func_0205d620(void*);
extern void func_02056db0(void*);
extern void func_02056844(void*);

void* func_ov002_021b7830(void* self) {
    *(u32*)self = (u32)data_ov002_021d5d34;
    if (*((u8*)self + 0x10e4) != 0) {
        func_02059538(*(void**)((u8*)self + 0x80), *(void**)((u8*)self + 0x88));
        func_02059a78(*(void**)((u8*)self + 0x80), *(void**)((u8*)self + 0x94));
        func_0205847c(*(u32*)((u8*)*(void**)((u8*)self + 0x80) + 0x34), *(void**)((u8*)self + 0x8c));
    }
    data_ov002_021d7958--;
    func_0200d5ec((u8*)self + 0x10d8);
    func_0205d620((u8*)self + 0x98);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
