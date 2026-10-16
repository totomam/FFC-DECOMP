/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/swap_pair_members_detach_delete_0219F310.c, externs renamed. */
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

/* Matched: 0219F310, size 0xA8 (166B code + 2B pad), -O4.
   Replace the objects at self+0xE4/+0xE8: detach old from list at +0xCC,
   notify +0xC8/+0xC4, virtual-dtor (slot 1) the old via inlined-delete nested
   null check, store new, attach to list; second slot conditional with +0xEC=c.
   KEY: guard load lands in r1 because the old pointer is ALSO the 2nd arg of
   func_02056bf4 (CSE of guard load and arg load). */
typedef void (*Fn)(void*);
extern void func_02056bf4(void* list, void* obj);
extern void func_02056c4c(void* a);
extern void func_02056bc0(void* list, void* obj);

void func_ov002_0219f310(u8* s, void* a, void* b, u32 c) {
    void* p;
    if (*(u32*)(s + 0xE4) != 0) {
        func_02056bf4(*(void**)(s + 0xCC), *(void**)(s + 0xE4));
        func_02056c4c(*(void**)(s + 0xC8));
        p = *(void**)(s + 0xE4);
        if (p != 0) {
            if (p != 0) {
                (*(Fn**)p)[1](p);
            }
            *(u32*)(s + 0xE4) = 0;
        }
    }
    *(void**)(s + 0xE4) = a;
    func_02056bc0(*(void**)(s + 0xCC), a);
    if (*(u32*)(s + 0xE8) != 0) {
        func_02056bf4(*(void**)(s + 0xCC), *(void**)(s + 0xE8));
        func_02056c4c(*(void**)(s + 0xC4));
        p = *(void**)(s + 0xE8);
        if (p != 0) {
            if (p != 0) {
                (*(Fn**)p)[1](p);
            }
            *(u32*)(s + 0xE8) = 0;
        }
    }
    *(void**)(s + 0xE8) = b;
    if (b != 0) {
        func_02056bc0(*(void**)(s + 0xCC), b);
        s += 0xEC;
        *(u32*)s = c;
    }
}
