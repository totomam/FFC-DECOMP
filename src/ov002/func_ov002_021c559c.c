/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_cond_dispatch_559c.c, externs renamed. */
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

/* Matched: 021C559C (58B) -- conditional virtual dispatch:
   if (vt[12](m)==0 && (s8)m->fC==1) vt[10] else vt[11] on member +0xC8. */
typedef u32 (*Fn)(void*);
void func_ov002_021c559c(void* s) {
    void* m;
    m = *(void**)((u8*)s + 0xBC);
    if ((*(Fn**)m)[12](m) == 0) {
        m = *(void**)((u8*)s + 0xBC);
        if ((signed char)*(u32*)((u8*)m + 0xC) == 1) {
            m = *(void**)((u8*)s + 0xC8);
            (*(Fn**)m)[10](m);
            return;
        }
    }
    m = *(void**)((u8*)s + 0xC8);
    (*(Fn**)m)[11](m);
}
