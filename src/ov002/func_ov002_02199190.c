/* cflags:  */
/* From arcnid/ffc-decomp src/battle/team_sum_state_compare_02199190.c, externs renamed. */
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

/* Matched: 02199190, size 0xE4 (228B incl. two trailing getter stubs), -O4,p.
   Unit of 3 functions: main compare at 02199190 (0xD0), Get_C0 stub at 02199260,
   Get_C4-minus-0x80 stub at 02199268.
   Keys: locals j/a/b/arr packed in one struct W whose address escapes via
   (s32*)(void*) launder (forces memory residency + r7 base-reg arr access);
   hoisted inner-loop index local k; volatile second load of w.a; param-mutation
   tail s = s + 0xC0. */
extern void* func_ov002_02198688(void*, u32);
extern s32 func_ov002_021a18bc(void*);
extern void* func_ov002_021a18c4(void*, s32);
extern s32 func_ov002_021aaa78(void*);
extern void* func_ov002_02195f98(void*, u32);
extern s32 func_ov002_0219688c(void*);
extern s32 func_ov002_021a1acc(void*);
extern s32 func_0206c184(s32, s32);

typedef struct {
    u32 j;
    s32 a;
    s32 b;
    s32 arr[2];
} W;

s32 func_ov002_02199190(u8* s)
{
    s32 ret;
    W w;
    s32* ap;

    ap = (s32*)(void*)w.arr;
    w.j = 0;
    ap[0] = 0;
    ap[1] = 0;
    do {
        void* obj;
        s32 i;
        obj = func_ov002_02198688(*(void**)(s + 0xC0), w.j);
        i = 0;
        if (func_ov002_021a18bc(obj) > 0) {
            s32 k;
            k = w.j;
            do {
                ap[k] += func_ov002_021aaa78(func_ov002_021a18c4(obj, i));
                i++;
            } while (i < func_ov002_021a18bc(obj));
        }
        w.j = w.j + 1;
    } while (w.j < 2);

    if (w.arr[0] != w.arr[1]) {
        if (w.arr[0] < w.arr[1]) {
            return 1;
        }
        return 0;
    }

    ret = 0;
    w.a = func_ov002_0219688c(func_ov002_02195f98(*(void**)(s + 0xC8), 0));
    w.b = func_ov002_0219688c(func_ov002_02195f98(*(void**)(s + 0xC8), 1));
    if (w.a == 0 && w.b == 1) {
        return ret;
    }
    if (*(volatile s32*)&w.a == 1 && w.b == 0) {
        return 1;
    }
    s = s + 0xC0;
    return func_0206c184(func_ov002_021a1acc(func_ov002_02198688(*(void**)s, 0)), 2);
}

static u32 Get_C0(u8* s)
{
    return *(u32*)(s + 0xC0);
}

static u32 Get_C4(u8* s)
{
    u32 x = *(u32*)(s + 0xC4);
    if (x != 0) {
        x -= 0x80;
    }
    return x;
}
