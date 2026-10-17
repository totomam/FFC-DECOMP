/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_call_s8flag_14.c, externs renamed. */
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

/* Matched: 021B7CD0 (24B) — p = *(self+0x14); if p and (s8)p->word_0xC == 0,
   virtual call slot 2 on p. Inlines the 021BF1E8 shape. */
typedef void (*Fn1_7CD0)(void*);
void func_ov002_021b7cd0(void* self) {
    void* p;
    p = *(void**)((u8*)self + 0x14);
    if (p != 0) {
        if ((signed char)*(u32*)((u8*)p + 0xC) == 0) {
            (*(Fn1_7CD0**)p)[2](p);
        }
    }
}
