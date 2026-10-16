/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/state_diff_update_021AE140.c, externs renamed. */
/* MATCHED: 021AE140 (size 0x94 / 148 bytes), ov2, mwccarm -O4
 * If both state pairs at +0x1c0/+0x1c4 and +0x1c8/+0x1cc are equal, return.
 * Otherwise snapshot (prev = cur), run A/B, and if the object at +0x1a0
 * exists, reinit it and invoke two virtual methods (vtbl[10], vtbl[14]).
 * Copy sources are volatile to force the reload the original emits. */
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

typedef void (*Fn1)(void*);
typedef void (*Fn3)(void*, int, int);
extern void func_ov002_021adb40(void* p);
extern void func_ov002_021adb6c(void* p);
extern void func_02056c4c(void* p);
extern void func_02064494(void* p, int a, int b);
extern void* func_02064aa8(void* p);
extern void func_0205f2f0(void* p, int a);

void func_ov002_021ae140(void* self)
{
    u8* s = (u8*)self;
    void* obj;
    int flag;
    if (*(u32*)(s + 0x1c4) == *(u32*)(s + 0x1c0) &&
        *(u32*)(s + 0x1cc) == *(u32*)(s + 0x1c8)) return;
    *(u32*)(s + 0x1c0) = *(volatile u32*)(s + 0x1c4);
    *(u32*)(s + 0x1c8) = *(volatile u32*)(s + 0x1cc);
    func_ov002_021adb40(self);
    func_ov002_021adb6c(self);
    if (*(void**)(s + 0x1a0) == 0) return;
    func_02056c4c(*(void**)(s + 0x19c));
    flag = 0;
    func_02064494(*(void**)(s + 0x1a0), 0, 0);
    if (*(u8*)(s + 0x1a4) != 0) flag = 1;
    func_0205f2f0(func_02064aa8(*(void**)(s + 0x1a0)), flag);
    obj = *(void**)(s + 0x1a0);
    (*(Fn1**)obj)[10](obj);
    obj = *(void**)(s + 0x1a0);
    (*(Fn3**)obj)[14](obj, 1, 1);
}
