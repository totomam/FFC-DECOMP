/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/virt_call2_null_80_s8.c, externs renamed. */
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

/* Matched: 021BC6A4 (18B) — null-checked two-arg virtual call on member
   at +0x80, slot 8: (m, b). */
typedef void (*Fn2_C6A4)(void*, void*);
void func_ov002_021bc6a4(void* self, void* b) {
    void* m;
    m = *(void**)((u8*)self + 0x80);
    if (m != 0) {
        (*(Fn2_C6A4**)m)[8](m, b);
    }
}
