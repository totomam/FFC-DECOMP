/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_call_s8flag_s2.c, externs renamed. */
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

/* Matched: 021BF1E8 (18B) — if signed-char truncation of word at +0xC is 0,
   virtual call slot 2 on self. (ldr + lsls#24/asrs#24, NOT ldrsb.) */
typedef void (*Fn1_F1E8)(void*);
void func_ov002_021bf1e8(void* self) {
    if ((signed char)*(u32*)((u8*)self + 0xC) == 0) {
        (*(Fn1_F1E8**)self)[2](self);
    }
}
