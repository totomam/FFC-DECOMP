/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_notify_chain_021B15B0.c, externs renamed. */
/* Matched: 0x021B15B0  size 0xD0 (208)  -O4
   Battle intro notify: 4 virtual calls on obj **(s+0x80) (slots 8,15,10,3-with-Pair),
   then extern call chain registering results via Func_02056BC0(s+0x14, ...). Plus trailing nullsub. */
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
typedef void (*Fn1)(void*);
typedef void (*Fn2)(void*, u32);
typedef void (*FnP)(void*, Pair);

extern void func_02064494(void* q, u32 b, u32 z);
extern void func_02056bc0(void* a, void* b);
extern void* func_020655dc(void* q, u32 a, u32 b);
extern void* func_020655b8(void* q);
extern void* func_02056aec(void* s);

void func_ov002_021b15b0(u8* s)
{
    void* q;
    void* r;

    q = **(void***)(s + 0x80);
    (*(Fn2**)q)[8](q, 1);
    q = **(void***)(s + 0x80);
    (*(Fn2**)q)[15](q, 3);
    q = **(void***)(s + 0x80);
    (*(Fn1**)q)[10](q);
    q = **(void***)(s + 0x80);
    (*(FnP**)q)[3](q, *(Pair*)(s + 0x88));
    q = **(void***)(s + 0x80);
    func_02064494(q, *(u8*)(s + 0x90), 0);
    func_02056bc0(*(void**)(s + 0x84), **(void***)(s + 0x80));
    q = **(void***)(s + 0x80);
    r = func_020655dc(q, 8, 0);
    func_02056bc0(s + 0x14, r);
    q = **(void***)(s + 0x80);
    r = func_020655b8(q);
    func_02056bc0(s + 0x14, r);
    q = **(void***)(s + 0x80);
    r = func_020655dc(q, *(u32*)(s + 0x94), 0);
    func_02056bc0(s + 0x14, r);
    r = func_02056aec(s);
    s += 0x14;
    func_02056bc0(s, r);
}

static void Nullsub_021B15B0(void)
{
}
