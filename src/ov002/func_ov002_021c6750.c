/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/rebuild_event88_021C6750.c, externs renamed. */
/* Matched: 0x021C6750  size 0x78  flags -O4 and -O4,p
   Rebuild event at self+0x88: p = Alloc(0x4EC); if ok: make one-word handle W
   from self+0x94, p = Ctor(p, *(s+0x84), *(s+0x94), *(s+0x98), &w, (u16)*(s+0xAA), 5);
   store p at s+0x88; destroy W only if constructed (flag); SetB(*(s+0x88),1);
   Push(s+0x48, *(s+0x88)). Alloc shape (a): result in callee-saved, no cmp. */
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


typedef struct { u32 v; } W;

extern void* func_0205681c(u32 size);
extern void func_ov002_021c0534(W* w, void* src);
extern void* func_0202e408(void* p, u32 a, u32 b, u32 c, W* w, u32 hw, u32 k);
extern void func_02035c18(W* w);
extern void func_0202edc4(void* p, u32 v);
extern void func_02056bc0(void* q, void* ev);

void func_ov002_021c6750(u8* s)
{
    void* p;
    u32 hw;
    u32 flag;
    W w;

    flag = 0;
    p = func_0205681c(0x4EC);
    if (p != 0) {
        hw = *(u16*)(s + 0xAA);
        func_ov002_021c0534(&w, s + 0x94);
        flag = 1;
        p = func_0202e408(p, *(u32*)(s + 0x84), *(u32*)(s + 0x94), *(u32*)(s + 0x98), &w, hw, 5);
    }
    *(void**)(s + 0x88) = p;
    if (flag != 0) {
        func_02035c18(&w);
    }
    func_0202edc4(*(void**)(s + 0x88), 1);
    func_02056bc0(s + 0x48, *(void**)(s + 0x88));
}
