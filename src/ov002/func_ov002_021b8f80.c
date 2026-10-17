/* cflags:  */
/* From arcnid/ffc-decomp src/battle/battle_turn_dispatch.c, externs renamed. */
/* Matched: 0x021B8F80  size 290 (0x122)  flag: -O4,p */
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

typedef struct { u32 a, b; } Pair;
extern int func_ov002_02198d78(u32);
extern int func_ov002_021c5ad4(int, int, int*);
extern int func_ov002_021b8624(void* self, Pair p, int flag);
extern void func_02056bc0(void* dst, int v);
extern void func_ov002_021c8190(Pair* out, void* src);
extern void func_ov002_021b92b8(void* self, int p3, Pair p);
extern void func_ov002_021b93b8(void* self, Pair p);
extern void func_ov002_021b911c(void* self);
extern void func_ov002_021b8e2c(void* self);
extern void func_020696f0(void* self);
extern int func_ov002_02198dec(u32);
extern void func_ov002_0219f568(int, int);
extern void func_02069330(u32, int);
extern int func_0208f694(int);
extern void func_ov002_021b81d8(u32, int);
extern void func_ov002_021b81e0(u32, int);
extern int func_ov002_021b8674(void* self);
extern void func_02069300(u32);
extern Pair data_ov002_021d63b8, data_ov002_021d63c0;
extern int data_ov002_021d6094[];

void func_ov002_021b8f80(void* self, int p1, int p2, int p3, int arg4)
{
    int local_c;
    int r6;
    u32 i;
    u32 t;
    Pair pr;

    if (p2 != 0) {
        local_c = 1;
        r6 = func_ov002_021c5ad4(func_ov002_02198d78(*(u32*)((u8*)self + 0xbc)), 5, &local_c);
        if (r6 != 0) {
            if (local_c == 0) { arg4 = 0; p2 = 0; }
            func_02056bc0((u8*)self + 0x14, func_ov002_021b8624(self, data_ov002_021d63b8, 0));
            func_02056bc0((u8*)self + 0x14, r6);
            func_02056bc0((u8*)self + 0x14, func_ov002_021b8624(self, data_ov002_021d63c0, 1));
        }
    }
    func_ov002_021c8190(&pr, (u8*)self + 0xb8);
    if (p2 != 0) {
        func_ov002_021b92b8(self, p3, pr);
    } else if (p1 != 0) {
        func_ov002_021b93b8(self, pr);
    }
    if (p1 != 0) {
        if (p2 == 0) func_ov002_021b911c(self);
        func_ov002_021b8e2c(self);
        func_020696f0(self);
    }
    func_ov002_0219f568(func_ov002_02198dec(*(u32*)((u8*)self + 0xbc)), 0);
    for (i = 0; i < 3; i++) {
        u32 x;
        x = *(u32*)((u8*)self + i * 4 + 0x110);
        if (x != 0) func_02069330(x, 0);
    }
    if (arg4 != 0) {
        if (arg4 > 0) t = *(u32*)((u8*)self + 0xfc);
        else t = *(u32*)((u8*)self + 0x104);
        if (t != 0) {
            func_ov002_021b81d8(t, func_0208f694(arg4));
            func_ov002_021b81e0(t, 1);
            data_ov002_021d6094[1] = func_ov002_021b8674(self);
            func_02069300(t);
        }
    }
}
