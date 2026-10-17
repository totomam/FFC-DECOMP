/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_21b77bc.c, externs renamed. */
/* 021B77BC (size 0x64) - matched with -O4
 * Destructor: resets vtable, tears down sub-resources when an active flag
 * (+0x10e4) is set, decrements a global refcount, and frees members. */
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


extern void* data_ov002_021d5d34;
extern s32 data_ov002_021d7958;
extern void func_02059538(void* a, void* b);
extern void func_02059a78(void* a, void* b);
extern void func_0205847c(u32 a, void* b);
extern void func_0200d5ec(void* p);
extern void func_0205d620(void* p);
extern void func_02056db0(void* p);

void* func_ov002_021b77bc(void* self)
{
    *(void**)self = (void*)&data_ov002_021d5d34;
    if (*(u8*)((u8*)self + 0x10e4) != 0) {
        func_02059538(*(void**)((u8*)self + 0x80), *(void**)((u8*)self + 0x88));
        func_02059a78(*(void**)((u8*)self + 0x80), *(void**)((u8*)self + 0x94));
        func_0205847c(*(u32*)((u8*)(*(void**)((u8*)self + 0x80)) + 0x34), *(void**)((u8*)self + 0x8c));
    }
    data_ov002_021d7958--;
    func_0200d5ec((u8*)self + 0x10d8);
    func_0205d620((u8*)self + 0x98);
    func_02056db0(self);
    return self;
}
