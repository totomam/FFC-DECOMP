/* cflags:  */
/* From arcnid/ffc-decomp src/battle/battle_result_update2_021C8B9C.c, externs renamed. */
/*
 * Matched: 021C8B9C  size 0x1AC (428 bytes), overlay 2
 * Compiler flags: -O4,p
 * Sibling of battle_result_update_021c8958 (same helper family: func_ov002_021be5f0/
 * func_02056aec/func_02056bc0/func_ov002_021c8dfc/func_ov002_021c2184/func_ov002_021c2154). Builds a
 * two-arg-node push-arg list (8x func_02056bc0 calls) with two conditionally
 * allocated+initialized 0x1c nodes sharing the SAME vtable literal (o1 and o3
 * both store &data_ov002_021d6d04 -- this is what collapses the literal pool from 4 to 3
 * entries and makes the size match exactly).
 * Key idioms: out-param via real stack local (&flag) rather than a direct
 * field address; nested identical "if (flag) { if (flag) {...} }" dead-branch
 * check; c0 register-merged across 1 -> 3 -> switch-result -> call-result ->
 * push-value; full-value-loaded-first ordering (v4/v9) inside both alloc-init
 * blocks to get the address-then-value instruction order; stack temps declared
 * in REVERSE use order (E,D,C,B,A) to land in ascending sp slots (0,4,8,0xc,0x10).
 */
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

extern void func_ov002_021be5f0(u32 o, void* a, void* b);
extern u32 func_02056aec(void* s);
extern void func_02056bc0(void* l, u32 v);
extern u32 func_ov002_021c8dfc(void* s, u32 x);
extern u32 func_ov002_021be60c(void* o);
extern u32 func_02023058(u32 a, u32 b);
extern void* func_0205681c(u32 n);
extern u32 func_ov002_021c212c(u32 a, u32 b);
extern u32 func_ov002_021c21ac(u32 a, u32 b);
extern void* func_ov002_021c2154(u32 a, void* b, void* c, void* d);
extern u32 func_ov002_021c2184(u32 h, u32 f);

extern u32 data_ov002_021d6d04;
extern u32 data_ov002_021d441c;
extern Pair data_ov002_021d784c;

void func_ov002_021c8b9c(u8* s)
{
    u32 flag;
    u32 t;
    u32 v2;
    u32 n;
    u32 c0;
    u32 stackE, stackD, stackC, stackB, stackA;
    u8* o1;
    u8* o3;
    u8* l;

    flag = 0;
    func_ov002_021be5f0(*(u32*)(s + 0x80), s + 0x84, &flag);
    if (flag == 0) {
        stackA = func_02056aec(s);
        s += 0x14;
        func_02056bc0(s, stackA);
        return;
    }
    if (flag != 0) {
        t = *(u32*)(s + 0x88);
        if ((flag >> 16) == (t >> 16)) {
            *(u32*)(s + 0x88) = flag;
        }
    }

    *(u32*)(s + 0x8c) = func_ov002_021c8dfc(s, *(u32*)(s + 0x88) >> 16);

    v2 = *(u32*)(s + 0x88);
    n = (v2 & 0xFFFF) - 1;

    stackA = func_02023058(func_ov002_021be60c(*(u8**)(s + 0x80)), 1);

    c0 = 1;
    o1 = (u8*)func_0205681c(0x1c);
    if (o1 != 0) {
        u32 v4 = *(u32*)(s + 0x80);
        u32 fld;
        fld = *(u32*)(o1 + 0xc);
        fld &= ~0xFF;
        *(u32*)(o1 + 0xc) = fld;
        *(u32*)o1 = (u32)&data_ov002_021d6d04;
        *(u32*)(o1 + 0x14) = v4;
        *(u32*)(o1 + 0x18) = c0 << n;
    }

    stackB = func_ov002_021c212c(*(u32*)(*(u8**)(s + 0x80) + 0xf8), 3);
    c0 = 3;

    stackC = func_ov002_021c21ac(*(u32*)(*(u8**)(s + 0x80) + 0xf8),
                           *(u32*)(*(u8**)(s + 0x80) + n * 4 + 0xe0));

    v2 = *(u32*)(s + 0x8c);
    switch (v2) {
    case 0: c0 = 1; break;
    case 1: c0 = 0; break;
    default: break;
    }

    o3 = (u8*)func_ov002_021c2154(*(u32*)(*(u8**)(s + 0x80) + 0xf8),
                            *(u8**)(s + 0x80) + 0x230,
                            &data_ov002_021d441c, (void*)c0);
    c0 = (u32)o3;

    n = 0;
    stackD = func_ov002_021c2184(*(u32*)(*(u8**)(s + 0x80) + 0xf8), 0);

    stackE = func_02023058(func_ov002_021be60c(*(u8**)(s + 0x80)), 0);

    o3 = (u8*)func_0205681c(0x1c);
    if (o3 != 0) {
        u32 v9 = *(u32*)(s + 0x80);
        u32 fld2;
        fld2 = *(u32*)(o3 + 0xc);
        fld2 &= ~0xFF;
        *(u32*)(o3 + 0xc) = fld2;
        *(u32*)o3 = (u32)&data_ov002_021d6d04;
        *(u32*)(o3 + 0x14) = v9;
        *(u32*)(o3 + 0x18) = n;
    }

    func_02056bc0(l = s + 0x14, (u32)o3);
    func_02056bc0(l, stackE);
    func_02056bc0(l, stackD);
    func_02056bc0(l, c0);
    func_02056bc0(l, stackC);
    func_02056bc0(l, stackB);
    func_02056bc0(l, (u32)o1);
    func_02056bc0(l, stackA);

    *(Pair*)(s + 0x90) = data_ov002_021d784c;
}
